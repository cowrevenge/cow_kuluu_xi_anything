"""Can the REFERENCE side even run this unit? The RT_UNIMPL census.

Found by running one unit instead of profiling a population. 0x100309b0 is booked as a `hang`
("run alone; silent for 12s - parked in a host call or a register-only loop"). At --states 1 it does
not hang for twelve seconds at all; it dies immediately:

    [recomp] FATAL at 100309b8: unimplemented: movups xmm0, xmmword ptr [ecx]

and every one of its 37 unreached instructions is SSE (`movaps / shufps / mulps / addps / movlps /
movss`). The two sides disagree about the *machine*, not about the arithmetic: side B (our lift) took
Ghidra's reading and computes scalar `float`s, which runs fine; side A (generated/all/funcs_*.c, the
recompiler's own translation, which is the thing we diff against) reaches `RT_UNIMPL` and calls
`rt_fatal`. A unit like that has no reachable PASS - the oracle is blind on it, and the mismatch we
report is the oracle's own death, not a conversion defect.

This is the shape of pattern the earlier histograms kept failing to produce: `eax` and `memory` were
dominated by value-shape noise (10%/11%), but RT_UNIMPL is a named gap in one specific component with
one specific owner. The census asks, for each verdict class, how many units carry an
`RT_UNIMPL(<addr>, "<mnemonic>")` in their generated body at all.

COARSE ON PURPOSE, and the tool says so: an RT_UNIMPL sitting in a block no state reaches is harmless,
so "carries an unimplemented instruction" is an upper bound, not a death sentence. The discriminating
reading is the PASS row - if passing units carry unimpl at the same rate as failing ones, this census
means nothing and the tool says that out loud rather than printing a percentage.

Tripwires, both directions:
  can fire       - 0x100309b0 must be flagged, flagged for movups specifically
  can refuse     - the census must not flag a majority of PASSING units; if it does, the printout
                   becomes "unimpl is not the discriminator", never "here is your pattern"
"""
import collections
import glob
import io
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
GEN = os.path.join(ROOT, "generated", "all")
RECORD = os.path.join(ROOT, "cow", "lift_proof_all.json")

FUNC_RE = re.compile(r"^\s*(?:void|unsigned|int|char|float|double|CowU32|CowU8|CowU16)\s+f_([0-9a-f]{8})\s*\(")
# The real spelling, read off generated/all/funcs_003.c:49463 after the first run of this tool
# refused itself:  RT_UNIMPL(0x100309B8u, "movups xmm0, xmmword ptr [ecx]");
# The `u` suffix and the UPPERCASE hex both broke a naive [0-9a-f]{0,8} class, which silently
# degraded every site to '<unparsed RT_UNIMPL>' - the tripwire caught it because the exemplar is
# supposed to be flagged specifically for movups.
UNIMPL_RE = re.compile(r"RT_UNIMPL\s*\(\s*(?:0x)?([0-9a-fA-F]{1,8})[uU]?\s*,\s*\"([^\"]*)\"")
EXEMPLAR = "100309b0"          # booked as a hang; FATALs on `movups xmm0, [ecx]`
EXEMPLAR_MNEM = "movups"


def scan_generated():
    """addr -> list of (unimpl_addr, text). One pass over generated/all/funcs_*.c."""
    per_unit = collections.defaultdict(list)
    files = sorted(glob.glob(os.path.join(GEN, "funcs_*.c")))
    if not files:
        sys.exit("REFUSING: no generated/all/funcs_*.c under %s - the census has nothing to read" % GEN)
    for path in files:
        cur = None
        with io.open(path, encoding="utf-8", errors="replace") as fh:
            for line in fh:
                m = FUNC_RE.match(line)
                if m:
                    cur = m.group(1)
                    continue
                if cur is None or "RT_UNIMPL" not in line:
                    continue
                u = UNIMPL_RE.search(line)
                if u:
                    per_unit[cur].append((u.group(1), u.group(2).strip('"')))
                else:
                    per_unit[cur].append(("", "<unparsed RT_UNIMPL>"))
    return per_unit


def main():
    with io.open(RECORD, encoding="utf-8", errors="replace") as fh:
        d = json.load(fh)
    per_unit = scan_generated()

    def cls(v):
        if v.get("pass"):
            return "pass"
        w = v.get("why") or ""
        if w in ("hang", "no_row_output"):
            return "no-answer"
        if w == "timeout":
            return "timeout"
        return "fail-compared"

    groups = collections.defaultdict(list)
    for k, v in d.items():
        groups[cls(v)].append(k)
    groups["ALL"] = list(d)

    print("=" * 100)
    print("RT_UNIMPL census: how many units cannot be run by the reference side at all")
    print("=" * 100)

    # --- tripwire 1: the predicate must fire on the exemplar somebody actually watched die
    ex = per_unit.get(EXEMPLAR) or []
    if not ex:
        sys.exit("REFUSING: the census cannot see any RT_UNIMPL on %s, the unit whose movups FATAL "
                 "was read off a live run. The scan is dead - fix it before believing any number below."
                 % EXEMPLAR)
    if not any(EXEMPLAR_MNEM in t.lower() for _a, t in ex):
        sys.exit("REFUSING: %s is flagged but not for `%s` (got %r) - the mnemonic extraction is wrong."
                 % (EXEMPLAR, EXEMPLAR_MNEM, [t for _a, t in ex][:4]))
    print("tripwire: %s flagged for %d unimpl site(s), incl. %r - the scan can fire"
          % (EXEMPLAR, len(ex), EXEMPLAR_MNEM))

    # --- the census
    flagged = {}
    for g, addrs in groups.items():
        n = sum(1 for a in addrs if per_unit.get(a))
        flagged[g] = (n, len(addrs))

    order = ["pass", "fail-compared", "no-answer", "timeout", "ALL"]
    for g in order:
        if g not in flagged:
            continue
        n, tot = flagged[g]
        print("  %-14s %5d units   carrying >=1 RT_UNIMPL: %5d (%3.0f%%)"
              % (g, tot, n, 100.0 * n / max(1, tot)))

    # --- tripwire 2: does it discriminate? if PASS rows are flagged as often as FAIL rows,
    #     the census is measuring the codebase, not the verdict.
    pr = flagged["pass"][0] / max(1, flagged["pass"][1])
    fr = flagged["fail-compared"][0] / max(1, flagged["fail-compared"][1])
    nr = flagged["no-answer"][0] / max(1, flagged["no-answer"][1])
    print()
    if pr >= 0.9 * fr:
        print("  NOT A DISCRIMINATOR: %.0f%% of PASSING units carry an unimplemented instruction too."
              % (100 * pr))
        print("  Which is the expected outcome for the coarse count - an RT_UNIMPL in a block no state")
        print("  reaches never executes. So `carries unimpl` is an upper bound only. What this census")
        print("  can still say is the mnemonic histogram below, and which named instruction families")
        print("  stand between us and a pass on the no-answer group.")
    elif nr >= 1.5 * pr:
        print("  DISCRIMINATES: the group that never answered is flagged at %.0f%% against %.0f%% of"
              % (100 * nr, 100 * pr))
        print("  passing units - SSE/unknown-opcode on the reference side is a plausible cause of that")
        print("  group, and the histogram below says which instructions to implement first.")
    else:
        print("  Weak signal (no-answer %.0f%% vs pass %.0f%%). Take it as a lead, not a mechanism."
              % (100 * nr, 100 * pr))

    # --- what exactly is unimplemented, weighted by the units that need it
    print()
    print("  unimplemented mnemonics, whole flagged population:")
    hist = collections.Counter()
    for a in groups["ALL"]:
        for _addr, t in per_unit.get(a, []):
            hist[t.split(",")[0].split()[0] if t.split() else t] += 1
    for t, n in hist.most_common(14):
        print("    %-28s %6d" % (t, n))

    # --- and the money number: of the no-answer units, how many are SSE-only blockers
    sse = ("movups", "movaps", "shufps", "mulps", "addps", "movlps", "movhps", "movss",
           "movsd", "subps", "andps", "orps", "xorps", "cvtps", "comiss", "ucomiss", "rcpss")
    na = groups["no-answer"]
    na_sse = [a for a in na if any(any(s in t.lower() for s in sse) for _x, t in per_unit.get(a, []))]
    print()
    print("  no-answer units whose blocker is an SSE opcode: %d of %d (%.0f%%)"
          % (len(na_sse), len(na), 100.0 * len(na_sse) / max(1, len(na))))
    if na_sse:
        print("  e.g. %s" % ", ".join("0x" + a for a in na_sse[:8]))
        print("  Those are not lifter defects and no knob of mine reaches them: the reference cannot")
        print("  execute them, so there is nothing to diff. The owner is the runtime's opcode table.")


if __name__ == "__main__":
    main()
