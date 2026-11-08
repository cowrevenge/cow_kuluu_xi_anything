"""Price the depth-2 widening before anyone ships it: what would `max_depth=2` admit?

`push_beyond_one` is the second-largest x87 sub-form (378) and the reason a whole class of unit is refused
today. But depth 1 was never the CONTRACT - it was a conservative proxy for it. The contract is:

  * every FP value the unit touches is one it pushed itself (never read from below its own top), and
  * the stack is balanced at every call and at the end.

The clause that enforces the first part is the ST-register refusal: reaching for the value below your own
top requires naming `st(1)`, which is refused outright. So a unit that reaches depth 2 WITHOUT ever naming
an ST register can only be LIFO scratch - it pushed two values and stored them back in the order that makes
the lower one unreachable until the upper one is gone. That is the same arithmetic-in-locals situation the
depth-1 slice already lifts from Ghidra, and top/st0 are provably unchanged by it.

This asks how many units that actually is, using the PRODUCTION gate (gen_model.x87_shape with
max_depth=2) rather than a re-implementation - a census with its own copy of the rules is how the last wrong
advice in patterns.py got written.

It deliberately does NOT decide anything. Admissible is not correct: the answer comes from cowdiff on a
sample, and until then this is only a size.

    python tools/cow/ghidra/lift_x87depth.py
    python tools/cow/ghidra/lift_x87depth.py --depth 3 --list-out build/cow_lift/x87_depth2.txt
"""
import argparse
import collections
import json
import os
import random
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)

import gen_model          # noqa: E402
import trivial_audit      # noqa: E402

REFUSALS = os.path.join(ROOT, "build", "cow_lift", "refusals.json")
DUMP = os.environ.get("COW_LIFT_DUMP", "D:/projects/ghidra/ghidra_out/functions_all.jsonl")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--depth", type=int, default=2)
    ap.add_argument("--n", type=int, default=0, help="0 = the whole family")
    ap.add_argument("--seed", type=int, default=5)
    ap.add_argument("--dump", default=DUMP)
    ap.add_argument("--list-out", default="")
    a = ap.parse_args()

    with open(REFUSALS, encoding="utf-8") as fh:
        refusals = json.load(fh)
    addrs = [k.lower().replace("0x", "") for k, v in refusals.items()
             if str(v).startswith("x87_not_modelled")]
    random.Random(a.seed).shuffle(addrs)
    if a.n:
        addrs = addrs[:a.n]

    entries = {}
    want = set(addrs)
    with open(a.dump, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            if not line.strip():
                continue
            try:
                e = json.loads(line)
            except ValueError:
                continue
            ad = str(e.get("addr", "")).lower().replace("0x", "")
            if ad in want:
                entries[ad] = e

    bodies = trivial_audit.body_index()
    verdict = collections.Counter()
    gained_ops = collections.Counter()
    admitted = []
    for key in sorted(addrs):
        body = bodies.get(key)
        e = entries.get(key)
        if not body or not e:
            verdict["<no data>"] += 1
            continue
        m = gen_model.model_generated(body)
        if not m or not m.get("ok", True):
            verdict["<model not ok>"] += 1
            continue
        sites = m.get("call_sites") or []
        now = gen_model.x87_shape(m["ins"], sites)
        deep = gen_model.x87_shape(m["ins"], sites, max_depth=a.depth)
        if now.get("liftable"):
            verdict["already admitted at depth 1"] += 1
            continue
        if deep.get("liftable"):
            verdict["WOULD BE ADMITTED at depth %d" % a.depth] += 1
            gained_ops[",".join(deep.get("ops") or [])] += 1
            admitted.append(key)
        else:
            verdict["still refused: %s" % deep.get("why")] += 1

    print("family sampled: %d" % len(addrs))
    for k, v in verdict.most_common(16):
        print("  %6d  %s" % (v, k))
    if admitted:
        print("\nmost common op sets among the newly admissible:")
        for k, v in gained_ops.most_common(10):
            print("  %5d  %s" % (v, k))
        # how many of them still have float arithmetic for Ghidra to give us at all
        withfloat = sum(1 for k in admitted
                        if any(t in (entries.get(k) or {}).get("c", "")
                               for t in ("float", "double", ".")))
        print("\nof the %d newly admissible, %d have a float mention in Ghidra's C (PRESENCE, not "
              "preservation - see the warning in lift_x87ghidra_check.py)" % (len(admitted), withfloat))
        if a.list_out:
            with open(a.list_out, "w", encoding="utf-8") as fh:
                for k in admitted:
                    fh.write("0x%s\n" % k)
            print("wrote %d addresses to %s" % (len(admitted), a.list_out))
        print("\nADMISSIBLE IS NOT CORRECT. Prove a sample before shipping anything.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
