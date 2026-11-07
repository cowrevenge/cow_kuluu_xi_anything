"""What does the shallow-scratch x87 gate actually admit?

The gate in gen_model.x87_shape is a CONTRACT, not a heuristic: it says a unit may be lifted from
Ghidra's float arithmetic only if the guest's FP stack is provably untouched by it (empty at entry to the
unit's own FP use, never deeper than one, empty at the end, nothing live across a call, no ST-register
operand). Before spending a proof run on it, measure the admitted population and its shape - because the
same measure is what tells us whether the sub-reasons are the ones we expect, and whether the admitted
set is big enough to be worth a run at all.

Read-only.

    python tools/cow/ghidra/lift_x87gate.py
    python tools/cow/ghidra/lift_x87gate.py --n 600 --seed 3
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
DUMP = os.environ.get("COW_LIFT_DUMP", "C:/ghidra_out/functions_all.jsonl")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--n", type=int, default=300)
    ap.add_argument("--seed", type=int, default=5)
    ap.add_argument("--dump", default=DUMP)
    ap.add_argument("--show", type=int, default=0, help="print this many admitted op-sets")
    ap.add_argument("--list-out", default="", help="write the admitted addresses here, one per line")
    ap.add_argument("--all", action="store_true", help="scan the whole refusal family, not a sample")
    a = ap.parse_args()

    if not os.path.exists(REFUSALS):
        print("no refusal snapshot at %s" % REFUSALS)
        return 2
    with open(REFUSALS, encoding="utf-8") as fh:
        refusals = json.load(fh)
    addrs = [k.lower().replace("0x", "") for k, v in refusals.items()
             if str(v).startswith("x87_not_modelled")]
    random.Random(a.seed).shuffle(addrs)
    want = set(addrs if a.all else addrs[:a.n])

    entries = {}
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
    opsets = collections.Counter()
    admitted = []
    nodata = 0
    for key in sorted(want):
        body = bodies.get(key)
        e = entries.get(key)
        if not body or not e:
            nodata += 1
            continue
        m = gen_model.model_generated(body)
        if not m or not m.get("ok", True):
            verdict["<model not ok>"] += 1
            continue
        sh = m.get("x87") or {}
        if sh.get("liftable"):
            verdict["ADMITTED"] += 1
            opsets[",".join(sh.get("ops") or [])] += 1
            admitted.append((key, sh))
        else:
            verdict["refused: " + str(sh.get("why"))] += 1

    print("sampled %d (no data: %d)" % (len(want), nodata))
    for k, v in verdict.most_common(20):
        print("  %6d  %s" % (v, k))
    if admitted:
        n = len(admitted)
        print("\nadmitted peak-depth / op-count:")
        pd = collections.Counter((s["peak"], len(s["ops"])) for _, s in admitted)
        for (p, o), v in sorted(pd.items()):
            print("  depth<=%d, %d distinct ops : %d" % (p, o, v))
        print("\nmost common admitted op sets:")
        for k, v in opsets.most_common(10):
            print("  %5d  %s" % (v, k))
        # does Ghidra still have the float math to lift? presence, not preservation - see the warning in
        # lift_x87ghidra_check.py; a declaration is not a computation.
        withfloat = sum(1 for k, _ in admitted
                        if any(t in (entries.get(k) or {}).get("c", "")
                               for t in ("float", "double", ".", "e-", "NaN")))
        print("\nadmitted units whose Ghidra C mentions a float at all: %d/%d" % (withfloat, n))
        if a.list_out:
            with open(a.list_out, "w", encoding="utf-8") as fh:
                for k, _ in sorted(admitted):
                    fh.write("0x%s\n" % k)
            print("wrote %d admitted addresses to %s" % (n, a.list_out))
        for k, s in admitted[:a.show]:
            print("\n---- 0x%s  ops=%s depth<=%d" % (k, ",".join(s["ops"]), s["peak"]))
            print((entries.get(k) or {}).get("c", "<none>"))
    return 0


if __name__ == "__main__":
    sys.exit(main())
