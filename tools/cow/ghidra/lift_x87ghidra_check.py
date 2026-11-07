"""For units the x87 census called 'simple-only', does Ghidra's C still contain the float arithmetic?

This decides whether x87 is liftable at all from Ghidra semantics, so it is checked on the bucket that the
proposed first slice targets - not on one conveniently chosen unit. (A single exotic unit first suggested
Ghidra had thrown the floating point away entirely; sampling the right population said otherwise, which is
the usual lesson.)

The hazard being screened for: if Ghidra discarded the floating-point computation (as it discarded the
registers in partial_register_write), the only remaining source of semantics is the generated body - and the
generated body is what cowdiff compares AGAINST. A lifted unit copied from it would agree with the oracle by
construction: a pass that means "we did not look", which is a failure wearing a success's clothes. So this
script reports, per unit, how much float arithmetic Ghidra kept.
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
import lift_x87diag       # noqa: E402

DUMP = os.environ.get("COW_LIFT_DUMP", "C:/ghidra_out/functions_all.jsonl")
REFUSALS = os.path.join(ROOT, "build", "cow_lift", "refusals.json")
FLOAT_EVIDENCE = re.compile(r"\bfloat\b|\bdouble\b|\bf\b\s*[;,)=]|CONCAT\d|0x[0-9a-f]{6,8}f\b"
                            r"|\bNaN\b|__\w*f\w*\(", re.I)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--n", type=int, default=12)
    a = ap.parse_args()

    refusals = json.load(open(REFUSALS, encoding="utf-8"))
    addrs = [k for k, v in refusals.items() if str(v).startswith("x87_not_modelled")]
    bodies = trivial_audit.body_index()

    # keep only units the census would bucket 'simple-only'
    wanted = []
    random.Random(1).shuffle(addrs)
    for raw in addrs:
        key = raw.lower().replace("0x", "")
        b = bodies.get(key)
        if not b:
            continue
        m = gen_model.model_generated(b)
        if not m or not m.get("ok", True):
            continue
        ins = m.get("ins") or []
        used = {(c.get("mnem") or "").lower() for c in ins
                if (c.get("mnem") or "").lower() in gen_model.X87_MNEMS}
        if used and used <= lift_x87diag.SIMPLE:
            depth = peak = 0
            for c in ins:
                s = c.get("stmt") or ""
                depth += len(re.findall(r"X87_PUSH", s))
                peak = max(peak, depth)
                depth -= len(re.findall(r"X87_POP", s))
            wanted.append((key, len(used), peak))
        if len(wanted) >= a.n:
            break

    want = {k for k, _, _ in wanted}
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

    print("units examined (simple-only x87): %d\n" % len(wanted))
    tally = collections.Counter()
    for key, nops, peak in wanted:
        e = entries.get(key) or {}
        c = e.get("c") or ""
        lines = [l for l in c.splitlines() if l.strip()]
        fl = [l for l in lines if FLOAT_EVIDENCE.search(l)]
        verdict = "KEPT" if len(fl) >= max(1, nops // 3) else ("PARTIAL" if fl else "LOST")
        tally[verdict] += 1
        print("  0x%s  x87ops=%-3d depth=%d  ghidra_lines=%-4d float_lines=%-3d  %s"
              % (key, nops, peak, len(lines), len(fl), verdict))
        if fl[:2]:
            for l in fl[:2]:
                print("        | " + l.strip()[:100])
    print("\n== Ghidra kept the float arithmetic? ==")
    for k, v in tally.most_common():
        print("  %4d  %s" % (v, k))
    return 0


if __name__ == "__main__":
    sys.exit(main())
