"""Should `fild` still be refused when `fistp` must be? A census before widening the x87 gate.

The gate refuses any unit using an op outside the shallow-scratch slice, and it lumps two integer-conversion
mnemonics together in `op_not_in_slice:fild` (397 - the single biggest refused sub-form). They are not the
same problem:

  fild  int -> FP stack.  The generated body emits X87_PUSH((double)(int32_t)rd32(A)). A signed 32-bit
        integer is EXACTLY representable in a double, and in a float once (only |v| >= 2^24 rounds), so the
        conversion has no rounding mode to get wrong. The only question is whether Ghidra preserved it.

  fistp FP stack -> int.  The generated body emits wr32(A, (uint32_t)fist32_cw(x87_cw, X87_POP())) - and
        fist32_cw rounds per the control word, which cowdiff pins at 0x027F: RC = (0x027F >> 10) & 3 = 0 =
        NEAREST-EVEN. A C `(int)` cast truncates. So a lifted fistp is a silent, systematic wrong answer on
        every non-integral value, and it stays refused until the rounding is actually modelled.

So this asks, for the units the gate currently refuses because of an integer conversion: (a) would the unit
pass the REST of the contract if only `fild` were allowed, (b) does Ghidra's C still contain an integer ->
float conversion to lift, and (c) how many units are unblocked by each decision. Read-only.

    python tools/cow/ghidra/lift_fild_diag.py
    python tools/cow/ghidra/lift_fild_diag.py --n 600 --seed 3
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

import gen_model          # noqa: E402
import trivial_audit      # noqa: E402

REFUSALS = os.path.join(ROOT, "build", "cow_lift", "refusals.json")
DUMP = os.environ.get("COW_LIFT_DUMP", "D:/projects/ghidra/ghidra_out/functions_all.jsonl")

INT_CONV = {"fild", "fist", "fistp"}


# Which integer-conversion forms a widening would have to admit. The gate refuses fild/fist/fistp under one
# reason string, but they are not one problem: fild (int -> FP) is EXACT - a signed int32 is representable
# in a double, and its float rounding matches the oracle's single rounding - while fistp rounds per the
# control word (fist32_cw, RC=nearest-even at the pinned fcw 0x027F) where a C `(int)` cast TRUNCATES.
PUSH_FORMS = ["fild"]
ALL_FORMS = ["fild", "fistp", "fist"]


def contract_allowing(ins, sites, allow):
    """Would this unit pass the REAL gate with `allow` admitted? Calls the production function rather than
    re-implementing the rules, so a census cannot drift from the code it is describing - which is exactly
    how the last wrong piece of advice in patterns.py came to be written."""
    return gen_model.x87_shape(ins, sites, allow=allow)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--n", type=int, default=300)
    ap.add_argument("--seed", type=int, default=5)
    ap.add_argument("--dump", default=DUMP)
    ap.add_argument("--show", type=int, default=4)
    a = ap.parse_args()

    with open(REFUSALS, encoding="utf-8") as fh:
        refusals = json.load(fh)
    addrs = [k.lower().replace("0x", "") for k, v in refusals.items()
             if str(v).startswith("x87_not_modelled_op_not_in_slice:f")]
    if not addrs:
        print("no integer-conversion refusals")
        return 2
    rng = __import__("random").Random(a.seed)
    rng.shuffle(addrs)
    want = set(addrs[:a.n])

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
    examples = collections.defaultdict(list)
    for key in sorted(want):
        body = bodies.get(key)
        e = entries.get(key)
        if not body or not e:
            verdict["<no data>"] += 1
            continue
        m = gen_model.model_generated(body)
        if not m or not m.get("ok", True):
            verdict["<model not ok>"] += 1
            continue
        sh = m.get("x87") or {}
        ops = set(sh.get("ops") or [])
        only_fild = bool(ops & {"fild"}) and not (ops & {"fist", "fistp"})
        has_store_conv = bool(ops & {"fist", "fistp"})
        if only_fild:
            group = "fild only (no rounding involved)"
        elif has_store_conv:
            group = "has fist/fistp (control-word rounding)"
        else:
            group = "other f-form"
        # Two separate widenings, priced separately, because they are not equally safe: fild is an exact
        # int->FP conversion with no rounding mode to get wrong, while fistp rounds per the control word
        # where a C cast truncates. A unit that only the SECOND would admit is not free.
        would_fild = contract_allowing(m["ins"], m.get("call_sites") or [], PUSH_FORMS)
        would_all = contract_allowing(m["ins"], m.get("call_sites") or [], ALL_FORMS)
        if only_fild:
            verdict["fild-only units | gate admits with fild allowed: %s"
                    % bool(would_fild.get("liftable"))] += 1
            if not would_fild.get("liftable"):
                verdict["    still blocked by: %s" % would_fild.get("why")] += 1
        verdict["units needing fist/fistp too | admitted only by the wider gate: %s"
                % (bool(would_all.get("liftable")) and not bool(would_fild.get("liftable")))] += 1
        would = would_fild
        c = e.get("c") or ""
        conv = bool(re.search(r"\(\s*(?:float|double)\s*\)", c) or "(int)" in c)
        verdict["%s : Ghidra shows a conversion=%s" % (group, conv)] += 1
        if len(examples[group]) < a.show:
            examples[group].append((key, sorted(ops), would.get("liftable"), would.get("why")))

    print("sampled %d refused-on-f* units" % len(want))
    for k, v in verdict.most_common(24):
        print("  %6d  %s" % (v, k))
    print("\n== examples ==")
    for g, ex in examples.items():
        for key, ops, lift, why in ex:
            print("  %-34s 0x%s ops=%s admit=%s %s"
                  % (g[:34], key, ",".join(ops), lift, why or ""))
    return 0


if __name__ == "__main__":
    sys.exit(main())
