"""What ARE the 661 `memory` failures? A census of the failure TEXT, before touching the lifter.

`memory` is the largest failure group in the lifted tree, and it is also the least informative label: the
harness says "the guest memory the two sides left behind differs" and nothing about how. Every real fix in
this project has come from better words in the FAIL line, not from theorising about the group - the last
one (float arguments read as integers, 0x100271f0) was found by reading a single unit's line that said
`store=extra A:2/# B:1/#`, which is a completely different bug from the `store=missing` rows next to it.

So: bucket every failing `memory` row by the structure of its detail, and count. The shapes that matter:

  store=missing / store=extra / store=value   whether a write the other side made is absent, an extra one
                                              appeared, or both wrote but disagreed
  stack / heap / arena / image                WHICH region the write was in (a stack store the lift folded
                                              into a local is one bug; a missing image store is another)
  first state 0 vs later                      a state-0 failure is deterministic (the same inputs every
                                              time, so one code path is wrong); a state-22 failure is
                                              input-dependent and usually an arithmetic or rounding issue
  1 mismatch vs 10 mismatches                 one path vs the whole function

Read-only.

    python tools/cow/ghidra/lift_memshapes.py
    python tools/cow/ghidra/lift_memshapes.py --why memory --top 20
"""
import argparse
import collections
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)

RECORD = os.path.join(ROOT, "cow", "lift_proof_all.json")

STATE_RE = re.compile(r"first at state (\d+)")
STORE_RE = re.compile(r"store=(\w+)")
REGION_RE = re.compile(r"@\s*(\w+|\d+)\s+(\S+)")
NMISS_RE = re.compile(r"(\d+) mismatch")
REG_RE = re.compile(r"reg=(\w+)")


def shape(detail):
    d = detail or ""
    st = STATE_RE.search(d)
    state0 = bool(st) and st.group(1) == "0"
    store = STORE_RE.search(d)
    store = store.group(1) if store else "none"
    n = NMISS_RE.search(d)
    n = int(n.group(1)) if n else 0
    # the region word the harness prints after the fault pair: `x11 stack` / `x2 arena` / `x0 -`
    reg = re.search(r"\bx\d+\s+(\S+)", d)
    region = reg.group(1) if reg else "-"
    return store, region, ("state0" if state0 else "later"), ("single" if n == 1 else "many" if n else "zero")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--why", default="memory")
    ap.add_argument("--top", type=int, default=14)
    ap.add_argument("--samples", type=int, default=3)
    a = ap.parse_args()

    with open(RECORD, encoding="utf-8") as fh:
        rec = json.load(fh)
    res = rec.get("results", rec)
    rows = {k: v for k, v in res.items() if (v.get("why") or "") == a.why and not v.get("pass")}
    if not rows:
        print("no rows with why=%s" % a.why)
        return 2

    by_store = collections.Counter()
    by_region = collections.Counter()
    by_state = collections.Counter()
    combo = collections.Counter()
    reg_kind = collections.Counter()
    examples = collections.defaultdict(list)
    for k, v in rows.items():
        store, region, st, n = shape(v.get("detail"))
        by_store[store] += 1
        by_region[region] += 1
        by_state[st + "/" + n] += 1
        key = "%s | %s | %s | %s" % (store, region, st, n)
        combo[key] += 1
        r = REG_RE.search(v.get("detail") or "")
        reg_kind[r.group(1) if r else "-"] += 1
        if len(examples[key]) < a.samples:
            examples[key].append((k, (v.get("detail") or "")[:150]))

    print("== %d rows with why=%s ==" % (len(rows), a.why))
    print("\n-- store kind --")
    for k, v in by_store.most_common():
        print("  %6d  %s" % (v, k))
    print("\n-- region --")
    for k, v in by_region.most_common(8):
        print("  %6d  %s" % (v, k))
    print("\n-- first-mismatch state / count --")
    for k, v in by_state.most_common(6):
        print("  %6d  %s" % (v, k))
    print("\n-- reg field (which register the row also mentions) --")
    for k, v in reg_kind.most_common(8):
        print("  %6d  %s" % (v, k))
    print("\n-- combined shapes --")
    for k, v in combo.most_common(a.top):
        print("  %6d  %s" % (v, k))
    print("\n-- samples for the top shapes --")
    for k, _ in combo.most_common(4):
        print("  %s" % k)
        for addr, d in examples[k]:
            print("     0x%s  %s" % (addr.lower().replace("0x", ""), d))
    return 0


if __name__ == "__main__":
    sys.exit(main())
