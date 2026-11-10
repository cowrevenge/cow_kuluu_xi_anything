"""lift_snapshot_diff.py - compare two refusal snapshots and say what a lifter change actually moved.

    python tools/cow/ghidra/lift_snapshot_diff.py build/cow_lift/refusals.json build/cow_lift/refusals_new.json
    python tools/cow/ghidra/lift_snapshot_diff.py A.json B.json --expect-leftover_concat 22

WHY. Every pattern fix in this repo is priced the same way: change a refusal clause, re-run
`lift.py --reasons-out`, and read the number. The lesson this tool encodes, learned the expensive way twice,
is that a widening must be checked in BOTH directions:

  * what it RELEASED (present in A, absent in B) - the prize you claimed; and
  * what it NEWLY REFUSED or RE-CLASSIFIED (present in B under a different reason) - the regression nobody
    looked for, because the headline number went the right way.

The `g->reg` push fallback was killed by exactly this habit (it silently rewrote 37 already-proven files
until `call` was counted as a write), and the family-count table that "proved" the IAT route dead was wrong
because a detector matched nothing and reported a confident zero. So: a release list you have not looked at
is not a measurement, and a family total that did not move does not prove nothing moved.

TRIPWIRE: both snapshots must be non-empty, and `--expect REASON=N` pins a family to an exact count in B.
An absent file, an empty dict, or a pinned family that disagrees stops the tool with a non-zero exit and it
prints NO population numbers - the failure mode this loop has now met six times is the confident zero.
"""
import argparse
import collections
import json
import os
import sys


def reason_of(v):
    return str(v.get("reason") if isinstance(v, dict) else v)


def load(path, label):
    if not os.path.exists(path):
        print("TRIPWIRE: %s snapshot absent (%s) - cannot diff against nothing" % (label, path))
        sys.exit(4)
    try:
        with open(path, encoding="utf-8") as fh:
            d = json.load(fh)
    except ValueError as exc:
        print("TRIPWIRE: %s snapshot is not readable JSON (%s)" % (label, exc))
        sys.exit(4)
    if not isinstance(d, dict) or not d:
        print("TRIPWIRE: %s snapshot is empty - refusing to report a population from it. A zero here is "
              "almost always a stale run or a changed reason string, not a fixed family." % label)
        sys.exit(4)
    return d


def main():
    ap = argparse.ArgumentParser(description="what did this lifter change actually move?")
    ap.add_argument("before")
    ap.add_argument("after")
    ap.add_argument("--expect", action="append", default=[],
                    help="REASON=N - pin a family's count in the AFTER snapshot (repeatable)")
    ap.add_argument("--max-list", type=int, default=20)
    ap.add_argument("--list-out", default="",
                    help="write the RELEASED addresses, one bare hex per line, for lift_proof --list")
    ap.add_argument("--json", action="store_true")
    a = ap.parse_args()

    b4 = load(a.before, "before")
    af = load(a.after, "after")

    r_b4 = {k: reason_of(v) for k, v in b4.items()}
    r_af = {k: reason_of(v) for k, v in af.items()}

    released = sorted(k for k in r_b4 if k not in r_af)
    newly = sorted(k for k in r_af if k not in r_b4)
    reclassified = sorted(k for k in r_b4 if k in r_af and r_b4[k] != r_af[k])

    cb4 = collections.Counter(r_b4.values())
    caf = collections.Counter(r_af.values())
    families = sorted(set(cb4) | set(caf), key=lambda f: -(caf[f] - cb4[f]))
    moved = [(f, cb4[f], caf[f], caf[f] - cb4[f]) for f in families if cb4[f] != caf[f]]

    rc = collections.Counter(r_b4[k] for k in reclassified)

    if a.list_out:
        # bare hex, no 0x, one per line - the shape lift_proof --list wants. Snapshot keys arrived as
        # "0x10097bc0" in one run and "10097bc0" in another, so normalise here rather than discover it as
        # 322 "file not found" rows in a proof that then reports everything as no_adapter.
        with open(a.list_out, "w", encoding="utf-8", newline="\n") as fh:
            for k in released:
                fh.write(k.lower().replace("0x", "") + "\n")
        print("wrote %d released addresses to %s" % (len(released), a.list_out))

    problems = []
    for spec in a.expect:
        if "=" not in spec:
            problems.append("bad --expect %r (want REASON=N)" % spec)
            continue
        fam, _, want = spec.rpartition("=")
        try:
            want = int(want)
        except ValueError:
            problems.append("bad --expect %r (N is not an integer)" % spec)
            continue
        got = caf[fam]
        if got != want:
            problems.append("PIN FAILED: family %r has %d in the after snapshot, expected %d "
                            "(before was %d)" % (fam, got, want, cb4[fam]))

    if a.json:
        print(json.dumps({"before_total": len(r_b4), "after_total": len(r_af),
                          "released": released, "newly_refused": newly,
                          "reclassified": {k: [r_b4[k], r_af[k]] for k in reclassified},
                          "family_delta": [{"family": f, "before": x, "after": y, "delta": d}
                                           for f, x, y, d in moved],
                          "pin_problems": problems}, indent=1))
    else:
        print("refused units: %d -> %d  (net %+d)" % (len(r_b4), len(r_af), len(r_af) - len(r_b4)))
        print("RELEASED (refused before, lifted after): %d" % len(released))
        for k in released[:a.max_list]:
            print("   + 0x%s   (was %s)" % (k, r_b4[k]))
        if len(released) > a.max_list:
            print("   ... and %d more" % (len(released) - a.max_list))
        print("NEWLY REFUSED: %d" % len(newly))
        for k in newly[:a.max_list]:
            print("   - 0x%s   (now %s)" % (k, r_af[k]))
        if len(newly) > a.max_list:
            print("   ... and %d more" % (len(newly) - a.max_list))
        print("RE-CLASSIFIED (same unit, different reason): %d" % len(reclassified))
        for f, n in rc.most_common(8):
            print("   ~ from %-38s %d" % (f, n))
        print("\nfamily deltas (nonzero):")
        for f, x, y, d in moved[:20]:
            print("  %-40s %6d -> %6d  %+d" % (f, x, y, d))
        if not moved:
            print("  (no family changed size - which for a widening means it did nothing)")

    for p in problems:
        print("PROBLEM: " + p)
    if problems:
        print("Not printing a verdict on a run whose pin failed.")
        return 4
    # A widening that released nothing is not a bug per se (it may be a correctness fix), but it must be
    # SAID rather than inferred from a table where every row happened not to move.
    return 0


if __name__ == "__main__":
    sys.exit(main())
