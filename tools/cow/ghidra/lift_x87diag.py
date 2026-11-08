"""Is x87 worth attempting, and if so which subset?

x87_not_modelled refuses ~1,949 whole functions. Before writing an FP-stack model, measure what those
functions actually use, because the answer decides the shape of the work:

  * if a shallow idiom dominates (a few fld/fadd/fmul/fstp with stack depth <= 2), the arithmetic already
    has proven vocabulary in layout/x87.h - the hand units used it and cowdiff agreed - and a model is
    worth building;
  * if Ghidra flattened the stack the way it flattened registers (see the partial-register finding, where
    the decompiler had simply discarded the register), no lift from Ghidra semantics can recover it and the
    family is parked with a reason instead of attempted on hope.

Reports the per-unit x87 mnemonic set, the depth reached, and how many units fit a "simple" allow-list.
Read-only.

    python tools/cow/ghidra/lift_x87diag.py                # 250 refused units
    python tools/cow/ghidra/lift_x87diag.py --n 600 --seed 3
"""
import argparse
import collections
import json
import os
import random
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))          # <root>/tools/cow/ghidra
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)

import gen_model          # noqa: E402
import trivial_audit      # noqa: E402

REFUSALS = os.path.join(ROOT, "build", "cow_lift", "refusals.json")
DUMP = os.environ.get("COW_LIFT_DUMP", "D:/projects/ghidra/ghidra_out/functions_all.jsonl")

# the forms layout/x87.h already models, plus the loads/stores/conversions a shallow body needs
SIMPLE = {"fld", "fst", "fstp", "fldz", "fld1", "fldpi", "fadd", "faddp", "fmul", "fmulp",
          "fsub", "fsubp", "fsubr", "fsubrp", "fchs", "fabs",
          "fild", "fist", "fistp", "fcom", "fcomp", "fucom", "fucomp"}
# anything here means the unit needs more than the current vocabulary
EXOTIC = {"fldcw", "fnstcw", "fnstsw", "fxam", "fyl2x", "fptan", "fprem", "fprem1", "frndint",
          "fsqrt", "fdecstp", "fincstp", "ffree", "fst1", "fldlg2", "fldln2", "fimul", "fiadd",
          "fisub", "fidiv", "fdiv", "fdivr", "fdivp", "fdivrp", "fucomi", "fcomi", "fcomip",
          "fucomip"}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--n", type=int, default=250)
    ap.add_argument("--seed", type=int, default=5)
    ap.add_argument("--dump", default=DUMP)
    a = ap.parse_args()
    globals()["DUMP"] = a.dump

    if not os.path.exists(REFUSALS):
        print("no refusal snapshot at %s" % REFUSALS)
        return 2
    with open(REFUSALS, encoding="utf-8") as fh:
        refusals = json.load(fh)
    addrs = [k for k, v in refusals.items() if str(v).startswith("x87_not_modelled")]
    random.Random(a.seed).shuffle(addrs)
    addrs = addrs[:a.n]
    if not addrs:
        print("no x87_not_modelled refusals")
        return 2

    want = {x.lower().replace("0x", "") for x in addrs}
    entries = {}
    with open(DUMP, encoding="utf-8", errors="replace") as fh:
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
                if len(entries) == len(want):
                    break

    bodies = trivial_audit.body_index()
    sets_seen = collections.Counter()
    mnem_count = collections.Counter()
    depth_hist = collections.Counter()
    opcount_hist = collections.Counter()
    buckets = collections.Counter()
    exotic_examples = collections.Counter()
    checked = 0

    for raw in addrs:
        key = raw.lower().replace("0x", "")
        body = bodies.get(key)
        e = entries.get(key)
        if not body or not e:
            buckets["<no data>"] += 1
            continue
        m = gen_model.model_generated(body)
        if not m or not m.get("ok", True):
            buckets["<model not ok>"] += 1
            continue
        ins = m.get("ins") or []
        used = set()
        depth = peak = 0
        for c in ins:
            mn = (c.get("mnem") or "").lower()
            if mn in gen_model.X87_MNEMS:
                used.add(mn)
                mnem_count[mn] += 1
            stmt = c.get("stmt") or ""
            depth += len(re.findall(r"X87_PUSH", stmt))
            peak = max(peak, depth)
            depth -= len(re.findall(r"X87_POP", stmt))
        if not used:
            # the refusal fired on the stmt markers only, with no recognised mnemonic
            buckets["<no mnem, markers only>"] += 1
            continue
        checked += 1
        opcount_hist[min(len([c for c in ins if (c.get('mnem') or '').lower() in gen_model.X87_MNEMS]), 40)] += 1
        depth_hist[min(peak, 8)] += 1
        exotic = used & EXOTIC
        if exotic:
            buckets["exotic"] += 1
            for x in sorted(exotic):
                exotic_examples[x] += 1
        elif used <= SIMPLE:
            buckets["simple-only"] += 1
        else:
            buckets["other"] += 1
            sets_seen[",".join(sorted(used))[:70]] += 1

    print("sampled: %d   with x87 mnemonics: %d" % (len(addrs), checked))
    print("\n== feasibility buckets ==")
    for k, v in buckets.most_common():
        print("  %6d  %s" % (v, k))
    print("\n== peak FP stack depth (from X87_PUSH/POP balance) ==")
    for k in sorted(depth_hist):
        print("  depth<=%d : %d" % (k, depth_hist[k]))
    print("\n== x87 ops per unit ==")
    for k in sorted(opcount_hist):
        print("  %s%s : %d" % (k, "+" if k == 40 else "", opcount_hist[k]))
    print("\n== most used mnemonics ==")
    for k, v in mnem_count.most_common(14):
        print("  %6d  %s" % (v, k))
    if exotic_examples:
        print("\n== exotic ops blocking 'simple' ==")
        for k, v in exotic_examples.most_common(10):
            print("  %6d  %s" % (v, k))
    if sets_seen:
        print("\n== most common 'other' sets ==")
        for k, v in sets_seen.most_common(6):
            print("  %6d  %s" % (v, k))
    return 0


if __name__ == "__main__":
    sys.exit(main())
