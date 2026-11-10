"""lift_globalwidth_census.py - how many lifted units store/READ 32 bits where the guest used 8 or 16?

    python tools/cow/ghidra/lift_globalwidth_census.py
    python tools/cow/ghidra/lift_globalwidth_census.py --limit 500 --verbose

FOUND BY READING ONE UNIT. `0x10008aa0`:

    10008aa0 mov al, byte ptr [esp + 4]
    10008aa4 mov byte ptr [0x10455c3a], al      generated body: wr8(A, (uint8_t)((uint8_t)eax))
    10008aa9 ret 4

Ghidra renders the store untyped - `DAT_10455c3a = param_1;` - and `ghidra_c._global_stores` turns ANY
`DAT_`/`PTR_` assignment into `wr32(...)` (ghidra_c.py:1538), while `_symbols` reads them as
`rd32(...)  # the dword stored there` (ghidra_c.py:1603). Neither consults the authority, which spells the
width explicitly. Our file says `wr32(COW_IMG(COW_ADDR_LIFT_10455C3A), param_1)`, so a one-byte guest store
becomes a four-byte host-visible guest store: the byte the guest wrote, plus **three bytes it never touched**.
The differential caught it here (`A=00ff0000 B=ffff0000`), and a store into memory the compared regions do not
cover would be silent.

WHAT THIS COUNTS, and what it does not. For every lifted file it compares, per image address:
  * the width the GENERATED body used for that address (wr8/wr16/wr32, rd8/rd16/rd32 on an immediate address), and
  * the width OUR file used for the same address (COW_ADDR_LIFT_<hex> inside a wr*/rd* call).
A unit where they disagree is counted. This is a width MISMATCH census, not a proof: some disagreements may be
carried by a different expression shape that is genuinely correct, so read a sample before treating a count as
a fix list. It is read-only and imports nothing from the lifter, so it cannot bias itself into agreement.

TRIPWIRE: `0x10008aa0` (the unit this was found on) MUST be reported. If it is not, the detector is broken and
the population numbers are suppressed - the confident-zero failure this loop has met repeatedly.
"""
import argparse
import collections
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
LIFTED = os.path.join(ROOT, "src", "lifted")
GEN = os.path.join(ROOT, "generated", "all")

PINNED = "10008aa0"

FUNC_RE = re.compile(r"^void\s+f_([0-9a-fA-F]{8})\s*\(", re.M)
# an access whose address is a literal in the generated translation
GEN_ACCESS = re.compile(r"\b(wr|rd)(8|16|32|64)\s*\(\s*\(uint32_t\)\s*\(\s*(?:COW_IMG\(\s*)?0x([0-9a-fA-F]{6,8})u?")
# ...but the generated body USUALLY hoists the address into a temp first:
#     uint32_t A = (uint32_t)(0x10455C3Au + RD); wr8(A, (uint8_t)(...));
# Requiring the literal inside the call matched NOTHING on the very unit this bug was read on - the tripwire
# caught it, and this is the third time this loop has met the "address goes through a temp" blind spot.
GEN_TEMP = re.compile(r"uint32_t\s+(\w+)\s*=\s*\(uint32_t\)\s*\(\s*(?:COW_IMG\(\s*)?0x([0-9a-fA-F]{6,8})u?")
GEN_CALL = re.compile(r"\b(wr|rd)(8|16|32|64)\s*\(\s*(?:\(uint32_t\)\s*)?([A-Za-z_]\w*|0x[0-9a-fA-F]{6,8}u?)")
# the same access as our lift spells it
OUR_ACCESS = re.compile(r"\b(wr|rd)(8|16|32|64)\s*\(\s*\(?:uint32_t\)\s*\)?\s*COW_IMG\(\s*COW_ADDR_LIFT_([0-9a-fA-F]{6,8})\s*\)")
OUR_ACCESS2 = re.compile(r"\b(wr|rd)(8|16|32|64)\s*\(\s*COW_IMG\(\s*COW_ADDR_LIFT_([0-9a-fA-F]{6,8})\s*\)")


def gen_index():
    """hex8 -> generated body text, in one pass over generated/all."""
    idx = {}
    for name in sorted(os.listdir(GEN)):
        if not name.endswith(".c"):
            continue
        with open(os.path.join(GEN, name), encoding="utf-8", errors="replace") as fh:
            text = fh.read()
        marks = [(m.start(), m.group(1).lower()) for m in FUNC_RE.finditer(text)]
        for i, (pos, hex8) in enumerate(marks):
            end = marks[i + 1][0] if i + 1 < len(marks) else len(text)
            idx[hex8] = text[pos:end]
    return idx


def widths(text, pattern):
    """{addr: 'wr8'|'rd16'...} for the accesses `pattern` finds."""
    out = {}
    for m in pattern.finditer(text):
        kind, size, hexs = m.group(1), m.group(2), m.group(3).lower()
        out.setdefault(hexs, set()).add(kind + size)
    return out


def gen_widths(text):
    """{addr: {'wr8','rd16',...}} for the GENERATED body, resolving hoisted address temps.

    The generated translation writes `uint32_t A = (uint32_t)(0x..u + RD); wr8(A, ...)`, so the width and the
    address live in different tokens. Reading only the call sees a bare identifier and finds nothing - which is
    how the first version of this census reported 0 across 10,547 files while the unit that motivated it was
    sitting in the scan. Both forms are handled: a literal argument and a temp name.
    """
    temps = {m.group(1): m.group(2).lower() for m in GEN_TEMP.finditer(text)}
    out = {}
    for m in GEN_CALL.finditer(text):
        kind, size, arg = m.group(1), m.group(2), m.group(3)
        if arg.startswith("0x"):
            addr = arg[2:].rstrip("uU").lower()
        else:
            addr = temps.get(arg)
        if not addr or len(addr) < 6:
            continue
        out.setdefault(addr, set()).add(kind + size)
    return out


def main():
    ap = argparse.ArgumentParser(description="count lifted units whose global width disagrees with the authority")
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--verbose", action="store_true")
    ap.add_argument("--list-out", default="", help="write the offending entry hexes, one per line")
    a = ap.parse_args()

    idx = gen_index()
    if not idx:
        print("TRIPWIRE: no generated functions found under %s - the census would be a confident nothing."
              % GEN)
        return 4

    files = sorted(f for f in os.listdir(LIFTED) if f.endswith(".c"))
    if a.limit:
        files = files[:a.limit]
    print("scanning %d lifted files against %d generated bodies" % (len(files), len(idx)))

    hits = []
    counter = collections.Counter()
    for i, fn in enumerate(files):
        hex8 = fn[len("cow_"):-2].lower()
        body = idx.get(hex8)
        if not body:
            continue
        theirs = gen_widths(body)
        if not theirs:
            continue
        with open(os.path.join(LIFTED, fn), encoding="utf-8", errors="replace") as fh:
            ours_text = fh.read()
        ours = {}
        ours.update(widths(ours_text, OUR_ACCESS))
        ours.update(widths(ours_text, OUR_ACCESS2))
        bad = []
        for addr, tw in theirs.items():
            ow = ours.get(addr)
            if not ow:
                continue
            if not (ow & tw):                       # no shared width at all -> the authority disagrees
                t = "/".join(sorted(tw))
                o = "/".join(sorted(ow))
                # Compare the BIT WIDTHS, not the strings. The first version tested `t in ("8","16","8/16")`
                # while t is built as "/".join(sorted(tw)) == "wr8" - a comparison that can never be true, so
                # the census reported 0 across 10,547 files and only the tripwire kept the lie from shipping.
                def bits(forms):
                    return max(int(re.sub(r"\D", "", x) or 0) for x in forms)
                if bits(ow) > bits(tw):             # we are WIDER than the guest ever was
                    bad.append((addr, t, o))
                    counter["%s<-%s" % (o, t)] += 1
        if bad:
            hits.append((hex8, bad))
            if a.verbose:
                for addr, t, o in bad[:4]:
                    print("  0x%s  @%s  authority=%s ours=%s" % (hex8, addr, t, o))
        if (i + 1) % 2000 == 0:
            print("  ... %d/%d files, %d units disagree" % (i + 1, len(files), len(hits)))

    print("\nunits whose GLOBAL ACCESS WIDTH disagrees with the generated body: %d of %d files"
          % (len(hits), len(files)))
    for k, n in counter.most_common(8):
        print("   %-14s %d" % (k, n))

    pinned_ok = any(h == PINNED for h, _ in hits)
    print("\nTRIPWIRE 0x%s reported: %s" % (PINNED, "YES" if pinned_ok else "NO"))
    if not pinned_ok:
        print("The detector does not find the unit this bug was read on, so the count above is not trusted.")
        return 4
    if not hits:
        print("Pinned unit reported but the population is empty - impossible unless the scan is wrong.")
        return 4
    if a.list_out:
        with open(a.list_out, "w", encoding="utf-8", newline="\n") as fh:
            for h, _ in hits:
                fh.write(h + "\n")
        print("wrote %d entries to %s" % (len(hits), a.list_out))
    print("This is a MISMATCH census, not a proof: read a sample before planning from it.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
