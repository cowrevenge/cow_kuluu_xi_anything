"""Build a control list that can actually fail.

Tonight's relift was vetoed by 17 of 40 controls failing - and the controls' FILES were byte-identical under
the knobs (git content diff), so the knobs did nothing. The proof map `cow/lift_proof_all.json` says why: those
17 are recorded there as `pass: False`. They were never reference points. A control that has never passing can
only ever agree with a broken harness, so a batch gated on such a list cannot clear - and a REAL break would
have been indistinguishable from the noise.

A control must therefore be:
  * a lifted unit (it has a file to compare),
  * recorded `pass: True` in the official proof map, at a stated depth,
  * not one of the units under test (a unit cannot be its own control),
  * and preferably exercising the machinery the knobs touch - a callee-saved push or a tail pop - because a
    control that never reaches the changed code proves nothing either. That preference is a ranking, not a
    requirement: the requirements above are what make it a control at all.

Usage:
  python tools/cow/ghidra/lift_relift_controls.py --units-file cow/wip/relift-run-170.txt \
      --out cow/wip/relift-controls-3knob.txt --n 40
"""
import argparse
import io
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
PROOF_MAP = os.path.join(ROOT, "cow", "lift_proof_all.json")
LIFTED = os.path.join(ROOT, "src", "lifted")
SAVED = ("ebx", "esi", "edi", "ebp")


def read_list(path):
    if not path or not os.path.isfile(path):
        return set()
    with io.open(path, encoding="utf-8", errors="replace") as fh:
        return {l.strip().lower().replace("0x", "") for l in fh if l.strip()}


def passing_units(min_states=0):
    with io.open(PROOF_MAP, encoding="utf-8", errors="replace") as fh:
        d = json.load(fh)
    out = []
    for a, r in d.items():
        if not isinstance(r, dict) or r.get("pass") is not True:
            continue
        st = r.get("states") or 0
        if st < min_states:
            continue
        if not os.path.isfile(os.path.join(LIFTED, "cow_%s.c" % a)):
            continue
        out.append((a, st))
    return out


def knob_sensitive(short):
    """Does this unit's own lifted file contain the machinery the relift knobs change?

    Read off the emitted file, not the model: the control's job is to sit on the path the knobs can alter and
    stay byte-identical. A control with no callee-saved push and no pop never touches that code.
    """
    p = os.path.join(LIFTED, "cow_%s.c" % short)
    try:
        with io.open(p, encoding="utf-8", errors="replace") as fh:
            t = fh.read()
    except OSError:
        return False
    return any(("push %s" % r) in t or ("pop %s" % r) in t for r in SAVED)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--units-file", default="", help="units under test; excluded from the controls")
    ap.add_argument("--out", required=True)
    ap.add_argument("--n", type=int, default=40)
    ap.add_argument("--min-states", type=int, default=200,
                    help="a control proved at a shallower depth than this is a weak reference")
    a = ap.parse_args()

    if not os.path.isfile(PROOF_MAP):
        sys.exit("REFUSING: %s missing - without the proof map there is no way to know what has passed,"
                 " which is precisely how 17 never-passing units became 'controls'." % PROOF_MAP)
    under_test = read_list(a.units_file)
    pool = passing_units(a.min_states)
    if not pool:
        sys.exit("REFUSING: no unit is recorded pass at >=%d states with a lifted file. Fix the proof map"
                 " before asking for controls." % a.min_states)
    pool = [x for x in pool if x[0] not in under_test]
    # deepest-proved first: a control proved at 2000 states is a stronger reference than one at 200
    pool.sort(key=lambda t: (-t[1], t[0]))
    strong = [t for t in pool if knob_sensitive(t[0])]
    chosen = [t[0] for t in strong[:a.n]]
    if len(chosen) < a.n:
        chosen += [t[0] for t in pool if t[0] not in chosen][:a.n - len(chosen)]
    if not chosen:
        sys.exit("REFUSING: chose 0 controls.")

    out = os.path.join(ROOT, a.out) if not os.path.isabs(a.out) else a.out
    os.makedirs(os.path.dirname(out), exist_ok=True)
    with io.open(out, "w", encoding="utf-8", newline="\n") as fh:
        fh.write("\n".join(chosen) + "\n")
    print("proof map : %d units, %d recorded pass at >=%d states, %d not under test"
          % (len(json.load(io.open(PROOF_MAP, encoding='utf-8'))), len(pool) + len(
              [1 for t in passing_units(a.min_states) if t[0] in under_test]), a.min_states, len(pool)))
    print("knob-sensitive (callee-saved push/pop present): %d" % len(strong))
    print("wrote %d controls -> %s" % (len(chosen), os.path.relpath(out, ROOT)))
    print("depths: min %d max %d" % (min(t[1] for t in pool if t[0] in chosen),
                                     max(t[1] for t in pool if t[0] in chosen)))


if __name__ == "__main__":
    main()
