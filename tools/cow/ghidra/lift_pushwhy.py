"""Why does the push walk actually refuse? Count the reasons the walk itself records.

lift_bailroots.py attributes a bail to the instruction at the bottom of its chain, which found the frame/load
split but not this: `_push_values` bails for four named reasons before it ever looks at a value
(no-pushed-record, pushed-vs-npush, pending-vs-pushed, unnameable:<w>), and the walk also labels the state of
each register (`merge-jump-target`, `written-by-unnameable-instruction:mnem`, `expression-too-long`,
`never-written`, `named`). Those labels are produced by the production walk on the real population, so they
are a better estimate of what a fix must attack than any re-derivation this script could do.

Printed per BAIL and per UNIT, because only the per-unit view can release a unit.
"""
import collections
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)
sys.path.insert(0, os.path.join(ROOT, "tools", "cow", "loopy"))

import gen_model            # noqa: E402
import trivial_audit        # noqa: E402

REFUSALS = os.path.join(ROOT, "build", "cow_lift", "refusals.json")


def main():
    with open(REFUSALS, encoding="utf-8") as fh:
        d = json.load(fh)
    r = d.get("reasons", d)
    addrs = sorted({str(k).replace("0x", "") for k, v in r.items()
                    if str(v).startswith("argcount_mismatch")})
    if not addrs:
        print("REFUSING to report: no argcount_mismatch units in the snapshot.")
        return 2
    bodies = trivial_audit.body_index()

    why_site = collections.Counter()      # the bail reason, per call site
    causes = collections.Counter()        # the register-state cause, per unnameable word
    unit_causes = collections.defaultdict(set)
    units = 0

    for k in addrs:
        body = bodies.get(k)
        if not body:
            continue
        m = gen_model.model_generated(body)
        if not m:
            continue
        seen_unit = False
        for s in (m.get("call_sites") or []):
            why = str(s.get("push_values_why") or "")
            if not why:
                continue
            seen_unit = True
            key = why.split(":", 1)[0]
            why_site[key] += 1
            if not why.startswith("unnameable:"):
                continue
            word = why.split(":", 1)[1].strip()
            # the cause the WALK recorded for that register at that moment - not a re-derivation.
            # gen_model stores a STRING here (the label for the one word that bailed); the first version of
            # this reader called .get() on it, so isinstance said no, c stayed None, and every one of the
            # 13,186 rows came back "<not recorded>" while the data was sitting right there.
            c = s.get("push_values_cause")
            if isinstance(c, dict):                          # tolerate a per-register mapping if it grows
                c = c.get(word)
            c = c or "<not recorded on the site>"
            if c:
                unit_causes[k].add(c)
        if seen_unit:
            units += 1

    print("units with at least one recorded push-values bail:", units)
    print("\n== bail reason, per call site ==")
    for k, n in why_site.most_common(10):
        print("  %-24s %6d" % (k, n))
    print("\n== cause recorded by the walk, per unnameable word ==")
    for k, n in causes.most_common(12):
        print("  %-46s %6d" % (k, n))
    solo = collections.Counter()
    for u, cs in unit_causes.items():
        if len(cs) == 1:
            solo[next(iter(cs))] += 1
    print("\n== units whose ONLY cause is one thing (the releasable figure) ==")
    for k, n in solo.most_common(10):
        print("  %-46s %6d" % (k, n))
    return 0


if __name__ == "__main__":
    sys.exit(main())
