"""Check the frame-store detector against units whose bodies I have read by eye.

A census tool that matches nothing reports "this is not that bug" with total confidence, and the 544-row
version of lift_stackstores.py did exactly that until it was checked against a unit printed on screen two
tool calls earlier. This is that check, kept so the detector cannot regress into matching nothing again.

    python tools/cow/ghidra/lift_stackstores_check.py
"""
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)

import gen_model          # noqa: E402
import trivial_audit      # noqa: E402
from lift_stackstores import frame_stores  # noqa: E402

# 0x10028aa0 was read by eye: `mov dword ptr [esp + 4], eax` after the call, plus a push. It MUST be found.
MUST = {"10028aa0": 1}
# a plain getter, no frame writes at all: it must NOT be found, or the detector is matching everything
MUST_NOT = {"100010e0": None}


def main():
    bodies = trivial_audit.body_index()
    bad = 0
    for key, want_min in sorted(MUST.items()):
        body = bodies.get(key)
        if not body:
            print("SKIP 0x%s (no generated body)" % key)
            continue
        m = gen_model.model_generated(body)
        n = len(frame_stores((m or {}).get("ins") or []))
        ok = n >= (want_min or 1)
        bad += 0 if ok else 1
        print(("FAIL  " if not ok else "ok    ") + "0x%s -> %d frame store(s), wanted >= %s"
              % (key, n, want_min))
    for key, _ in sorted(MUST_NOT.items()):
        body = bodies.get(key)
        if not body:
            continue
        m = gen_model.model_generated(body)
        n = len(frame_stores((m or {}).get("ins") or []))
        ok = n == 0
        bad += 0 if ok else 1
        print(("FAIL  " if not ok else "ok    ") + "0x%s -> %d frame store(s), wanted 0" % (key, n))
    print("\n%s" % ("DETECTOR OK" if not bad else "DETECTOR BROKEN (%d)" % bad))
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
