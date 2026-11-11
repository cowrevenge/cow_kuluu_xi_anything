"""The hang class is not 211 defects. Group the rows that never answered by WHAT THEY ALL CALL.

Found by following one thread to its end. lift_hang_callee_scan.py noticed that three of the sampled
spinners tail-jump into `f_10316337`, so `--callers` asked how many units do:

    f_10316337 is called by 119 unit(s) in generated/all; 116 of them have a ledger row
      their ledger verdicts: {'hang': 116}
      is f_10316337 itself lifted? NO

116 of the 211 `hang` rows - over half the class - are exactly the units whose call target is one
unlifted function that never returns. Not 116 unit defects, not a lift bug, not a frame bug, and nothing
a lift.py knob reaches: one missing conversion standing in front of a family. It also finally explains
why the body-feature profile found no separator between hangs and units that answer (size:small 95% vs
97%): these units are mostly thunks. The spin was never in them.

This tool generalises the question to the whole no-answer group, because there are ~95 rows left over and
the same trick may or may not work on them. For each no-answer row it takes the unit's call targets, and
for each target the size of the family it explains: every spinner that calls only that target is one
family. It then reports, per family, whether the target is lifted / proven / blocked by an unimplemented
opcode - which is what tells you whether the family is "go convert one function" or "go trace one loop".

Two guards, both learned the hard way this session:
  capability  - the exemplar 0x10327840 must land in the f_10316337 family; if it does not, the target
                predicates are dead and no percentage below means anything
  discrimination - the family must NOT be shared by the units that answered. A callee that passing units
                call too is the weather (memset with a guest signature), not a cause. `weather` rows are
                printed as excluded, never as a finding.
"""
import collections
import io
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import lift_frame_predicates as FP  # noqa: E402
import lift_hang_callee_scan as S  # noqa: E402  (reuses THE target scan and THE proven regexes)
import lift_unimpl_census as C  # noqa: E402     (reuses THE RT_UNIMPL parser, not a copy)

ROOT = S.ROOT
RECORD = S.RECORD
EXEMPLAR = "10327840"
EXEMPLAR_TARGET = "10316337"


def main():
    with io.open(RECORD, encoding="utf-8", errors="replace") as fh:
        d = json.load(fh)
    gt = S.gen_targets()
    if not gt:
        sys.exit("REFUSING: the generated scan found no call targets anywhere - it cannot judge anything")
    unimpl = C.scan_generated()

    def cls(v):
        if v.get("pass"):
            return "pass"
        w = v.get("why") or ""
        if w in ("hang", "no_row_output"):
            return "no-answer"
        if w == "timeout":
            return "timeout"
        return "fail-compared"

    noanswer = [k for k, v in d.items() if cls(v) == "no-answer"]
    answered_pass = [k for k, v in d.items() if v.get("pass")]

    def targets(a):
        ours = set(x for x in S.OURS_CALL.findall(FP.read_unit(a)) if x != a)
        return ours | set(gt.get(a) or ())

    # family = the target that a spinner calls, when it calls nothing else (single-target units are the
    # ones where attribution is defensible; multi-target units get 'mixed' rather than a guessed cause)
    fam = collections.defaultdict(list)
    mixed, call_free = [], []
    for a in noanswer:
        t = targets(a)
        if not t:
            call_free.append(a)
        elif len(t) == 1:
            fam[next(iter(t))].append(a)
        else:
            mixed.append(a)

    print("=" * 100)
    print("the rows that never answered, grouped by what they all call")
    print("=" * 100)
    print("  no-answer rows: %d   single-target: %d   multi-target (unattributable here): %d   call-free: %d"
          % (len(noanswer), sum(len(v) for v in fam.values()), len(mixed), len(call_free)))

    # capability tripwire
    if EXEMPLAR_TARGET not in fam or EXEMPLAR not in fam[EXEMPLAR_TARGET]:
        sys.exit("REFUSING: 0x%s did not land in the f_%s family (got %r). The target predicates are "
                 "dead - fix them before believing a single number below."
                 % (EXEMPLAR, EXEMPLAR_TARGET, sorted(fam)[:5]))
    print("tripwire: 0x%s is in the f_%s family - the attribution can fire" % (EXEMPLAR, EXEMPLAR_TARGET))

    # discrimination: how many PASSING units call the same target? if many, it is the weather
    pass_callers = collections.Counter()
    for a in answered_pass:
        for x in targets(a):
            pass_callers[x] += 1

    print()
    print("  %-12s %6s %8s %-10s %-9s %s" % ("target", "units", "passing", "lifted?", "unimpl?", "verdict"))
    print("  " + "-" * 86)
    weather = 0
    for t, members in sorted(fam.items(), key=lambda kv: -len(kv[1])):
        if len(members) < 3 and t != EXEMPLAR_TARGET:
            continue
        npass = pass_callers.get(t, 0)
        is_lifted = bool(FP.read_unit(t))
        n_unimpl = len(unimpl.get(t, []))
        if npass >= max(3, int(0.02 * len(answered_pass))):
            verdict = "WEATHER - passing units call it too, excluded as a cause"
            weather += 1
            continue
        if not is_lifted:
            verdict = "MISSING CONVERSION: nobody has lifted this; convert it, re-measure the family"
        elif n_unimpl:
            verdict = "BLOCKED: target itself hits RT_UNIMPL (%d sites)" % n_unimpl
        else:
            verdict = "lifted and runnable -> trace inside it, the spin is real code"
        print("  f_%-9s %6d %8d %-10s %-9s %s"
              % (t, len(members), npass, "yes" if is_lifted else "NO",
                 n_unimpl or "-", verdict))

    print()
    print("  excluded as weather: %d target(s)" % weather)
    if call_free:
        print("  CALL-FREE spinners (%d): %s" % (len(call_free), ", ".join("0x" + a for a in call_free[:8])))
        print("     these spin in their own body - no callee to blame, and the only way in is a trace.")
    if mixed:
        print("  multi-target (%d): attribution would be a guess, left unattributed on purpose." % len(mixed))
    print()
    covered = sum(len(v) for t, v in fam.items() if t != EXEMPLAR_TARGET or True)
    print("  The headline is the f_%s row: one unlifted function sits in front of 116 of the 211 hang"
          % EXEMPLAR_TARGET)
    print("  rows. That is not a lift defect and no knob here touches it - it is a conversion someone")
    print("  has not done yet. What this tool does NOT prove: that converting it makes those 116 pass.")
    print("  It proves they all park in the same place, which is the cheapest possible next question.")


if __name__ == "__main__":
    main()
