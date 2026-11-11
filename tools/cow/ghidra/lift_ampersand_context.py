"""Is `&param_3` an ADDRESS, or a BITWISE AND? The shipped rule cannot tell, and units are being refused for it.

`ghidra_c.leftover_problems` refuses with `local_address_escapes` / `param_address_escapes` on these
patterns (ghidra_c.py:1836-1853):

    r"&\\s*local_[0-9A-Za-z_]*"          r"&\\s*[A-Za-z_][A-Za-z0-9_]*Stack_[0-9A-Za-z_]+"
    r"&\\s*param_[0-9]+"

None of them knows whether `&` is the **unary address-of** operator or the **binary bitwise-and** operator,
and Ghidra emits both. Found by reading one unit that my own binding knob had "released":

    f_102efd3a   return *(uint *)(param_2 + 8) & param_3;      <- BITWISE AND, no address taken anywhere
                 ...yet it was classified param_address_escapes, and my binding block fired on it.

So the escape families are contaminated with false refusals - units that never hand out an address, refused
by a regex that read `x & param_3` as `&param_3`. That inflates the population a mechanism was sized on, and
it is a live cost: every false positive is a unit that could have been lifted.

This classifies each `&name` occurrence by the last non-space character before the `&` - the standard C
context test: an operand character (letter, digit, `_`, `)`, `]`) means binary AND; anything else (`,` `(`
`=` operators, line start) means unary address-of. It then reports, per refusal family, how many units are
supported by a GENUINE address-of and how many were refused on a bitwise AND alone.

Tripwires, because a classifier that cannot distinguish the two cases is worthless here:
  * f_1001ac50 (`FUN_10073ba0(&param_1,0x2b,param_1)`) must classify as ADDRESS-OF;
  * f_102efd3a (`... & param_3;`) must classify as BITWISE AND;
  * both buckets must be non-empty across the population, or this tool says so instead of printing a number.

Reads only. Nothing here changes a rule; the gate fix needs its own spec and a cowdiff sample.
"""
import argparse
import collections
import io
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
for _p in (HERE, os.path.join(ROOT, "tools", "cow")):
    if _p not in sys.path:
        sys.path.insert(0, _p)
for _k in [k for k in list(os.environ) if k.startswith("COW_")]:
    os.environ.pop(_k)                              # a read never inherits a knob

DUMP = "D:/projects/ghidra/ghidra_out/functions_all.jsonl"
POP = os.path.join(ROOT, "cow", "wip", "frame-binding-pop.txt")

# the same token shapes the shipping rule uses - kept adjacent to it deliberately (see the note in
# cow/wip/naming-and-forked-rules.md if they ever drift)
NAMES = r"(?:param_\d+|local_[0-9A-Za-z_]*|[A-Za-z_][A-Za-z0-9_]*Stack_[0-9A-Za-z_]+|_Stack_[0-9A-Za-z_]*)"
TOKEN = re.compile(r"(&)\s*(%s)" % NAMES)
OPERAND_CHARS = set("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_)]")

EXEMPLARS = {
    "0x1001ac50": "address",     # FUN_10073ba0(&param_1,0x2b,param_1);
    "0x102efd3a": "binary",      # return *(uint *)(param_2 + 8) & param_3;
}


def classify_occurrences(text):
    """[(name, 'address'|'binary', context)] for every `&name` in text, by C operator context."""
    out = []
    for m in TOKEN.finditer(text):
        i = m.start()
        j = i - 1
        while j >= 0 and text[j] in " \t":
            j -= 1
        prev = text[j] if j >= 0 else ""
        kind = "binary" if prev in OPERAND_CHARS else "address"
        out.append((m.group(2), kind, text[max(0, j - 14):i + 1].replace("\n", " ")))
    return out


def main():
    ap = argparse.ArgumentParser(prog="lift_ampersand_context.py")
    ap.add_argument("--entries", default="", help="comma-separated (default: the escape population file)")
    a = ap.parse_args()

    if a.entries:
        want = {"0x" + x.strip()[2:] if x.strip() and not x.strip().startswith("0x") else x.strip().lower()
                for x in a.entries.split(",") if x.strip()}
        source = "--entries"
    else:
        with io.open(POP, encoding="utf-8") as fh:
            want = {("0x" + ln.strip()[2:]) if not ln.strip().startswith("0x") else ln.strip().lower()
                    for ln in fh if ln.strip()}
        source = os.path.relpath(POP, ROOT)
    if not want:
        sys.exit("REFUSING: empty population - there is nothing to classify.")

    recs = {}
    with io.open(DUMP, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            try:
                rec = json.loads(line)
            except ValueError:
                continue
            ad = (rec.get("addr") or "").lower()
            if ad in want:
                recs[ad] = rec.get("c") or ""
            if len(recs) == len(want):
                break
    if len(recs) < max(5, len(want) // 3):
        sys.exit("REFUSING: only %d of %d units found in the dump." % (len(recs), len(want)))

    # exemplar tripwire FIRST: a context classifier that cannot tell the two motivating units apart is
    # not allowed to report on the population.
    for ex, expect in EXEMPLARS.items():
        if ex not in recs and ex not in want:
            sys.exit("REFUSING: exemplar %s is not in the population - the tripwire cannot run, so the"
                     " numbers below would be unverified." % ex)
        got = classify_occurrences(recs.get(ex, ""))
        kinds = {k for _n, k, _c in got}
        if expect == "address" and "address" not in kinds:
            sys.exit("REFUSING: %s must classify as ADDRESS-OF, got %s (%s)." % (ex, kinds, got[:3]))
        if expect == "binary" and ("address" in kinds or "binary" not in kinds):
            sys.exit("REFUSING: %s must classify as BITWISE AND only, got %s (%s)." % (ex, kinds, got[:3]))
    print("exemplar tripwires fired: 0x1001ac50 = address-of, 0x102efd3a = bitwise and")

    per_unit = {}
    for ad, c in recs.items():
        occ = classify_occurrences(c)
        per_unit[ad] = {
            "address": sorted({n for n, k, _c in occ if k == "address"}),
            "binary": sorted({n for n, k, _c in occ if k == "binary"}),
        }
    only_binary = sorted(u for u, v in per_unit.items() if v["binary"] and not v["address"])
    with_address = sorted(u for u, v in per_unit.items() if v["address"])
    neither = sorted(u for u, v in per_unit.items() if not v["address"] and not v["binary"])

    print("\npopulation from %s: %d units, %d found in the dump" % (source, len(want), len(recs)))
    print("  GENUINE address-of taken        : %d" % len(with_address))
    print("  refused on a BITWISE AND alone  : %d   <- false positives of the shipping rule"
          % len(only_binary))
    print("  no &name at all in the Ghidra C : %d" % len(neither))
    if not only_binary or not with_address:
        print("\n  ONE BUCKET IS EMPTY - the classifier cannot discriminate on this population; do not"
              " quote the split.")
    print("\nwhat a false positive looks like (up to 6):")
    for u in only_binary[:6]:
        c = recs[u]
        first = TOKEN.search(c)
        ctx = ""
        if first:
            i = first.start()
            ctx = c[max(0, i - 45):i + 24].replace("\n", " ").strip()
        print("  %-12s %s | %s" % (u, ",".join(per_unit[u]["binary"]), ctx))
    if only_binary:
        out = os.path.join(ROOT, "cow", "wip", "escape-false-positives.txt")
        with io.open(out, "w", encoding="utf-8", newline="\n") as fh:
            for u in only_binary:
                fh.write("%s\n" % u)
        print("\nwrote %s (%d units the rule refuses without an address being taken)"
              % (os.path.relpath(out, ROOT), len(only_binary)))


if __name__ == "__main__":
    main()
