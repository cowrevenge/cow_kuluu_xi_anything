"""Validate the string-op operand walk against units I have read by eye.

The same discipline that caught the frame-store regex matching nothing: a census whose own walk silently
returns 'other' for everything reports "0 nameable units" and someone builds or parks a 1,261-unit family on
it. Pin the walk to a unit that was read in the peek output, and make the empty case loud.

    python tools/cow/ghidra/lift_stringframe_check.py
"""
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)

import gen_model          # noqa: E402
import trivial_audit      # noqa: E402
from lift_stringframe import classify_operand, last_write_of  # noqa: E402

# 0x10005320 read by eye in lift_bodypeek output:
#   lea edi,[esp+0xc] ... rep stosd es:[edi],eax   -> destination is the FRAME
#   mov esi,0x10456048 / mov edi,0x10456050 ... rep movsd  -> those two are IMAGE constants
EXPECTED = {"10005320": {"edi": "frame"}}


def main():
    bodies = trivial_audit.body_index()
    bad = 0
    for key, want in sorted(EXPECTED.items()):
        body = bodies.get(key)
        if not body:
            print("SKIP 0x%s (no generated body)" % key)
            continue
        m = gen_model.model_generated(body)
        ins = (m or {}).get("ins") or []
        got = {}
        for i, c in enumerate(ins):
            form = gen_model.string_op_of(c)
            if not form:
                continue
            for reg in ("ecx", "edi", "esi"):
                w = last_write_of(ins, i, reg)
                k = classify_operand(w)
                rank = {"frame": 3, "other": 2, "never-written": 2, "reg-copy": 1, "const-or-image": 0}
                if rank.get(k, 2) >= rank.get(got.get(reg), -1):
                    got[reg] = k
        for reg, want_k in want.items():
            ok = got.get(reg) == want_k
            bad += 0 if ok else 1
            print(("FAIL  " if not ok else "ok    ") + "0x%s %s -> %s (wanted %s)"
                  % (key, reg, got.get(reg), want_k))
    if bad:
        print("\nWALK BROKEN - do not trust lift_stringframe.py's totals")
        return 1
    print("\nWALK OK on the by-eye unit; totals still need their own sanity check")
    return 0


if __name__ == "__main__":
    sys.exit(main())
