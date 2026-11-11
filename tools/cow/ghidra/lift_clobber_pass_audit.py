"""Why can a realised clobber be booked pass? Read the judge's own comparison order first.

tools/cow/cowdiff.c ~1153: the verdict chain is

    if (oa.faulted != ob.faulted)      why = "fault";
    else if (!oa.faulted && eax differs)      ...
    else if (!oa.faulted && edx differs)      ...
    else if (!oa.faulted && callee-saved differs)
    else if (!oa.faulted && esp differs)
    else if (top/st0 differs)                 // no faulted guard
    else if (!regions_equal(...))             // memory: no faulted guard
    ...

So when BOTH sides fault, eax/edx/ebx/esi/edi/ebp/esp are NOT compared - the run still compares st0,
memory, out-of-region writes and the call log, but the entire register contract is skipped. A unit
whose states all fault on both sides therefore passes without the caller-saved registers ever being
looked at. That is the mechanism that makes a realised clobber able to sit in the ledger as `pass`,
and it is visible from the harness source, so it needs no run to state.

What this script measures is the prediction that follows from it: those units should show PARTIAL
block coverage (execution stopped early on both sides), while a genuinely register-compared pass
should be fully covered. If the 39 are almost all partial, the judge is not blind - it is
coverage-limited, and the honest wording is "proven for less than the unit".
"""
import io
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import lift_frame_predicates as FP  # noqa: E402
import lift_clobber_realised as R  # noqa: E402
import lift_clobber_predicate_blindness as T  # noqa: E402

LEDGER = os.path.join(FP.ROOT, "cow", "lift_proof_all.json")
GEN_POP = lambda r: re.compile(r":\s*pop\s+%s\b" % r)  # noqa: E731


def main():
    with io.open(LEDGER, encoding="utf-8", errors="replace") as fh:
        ledger = json.load(fh)

    rows = []
    for a in FP.lifted_units():
        c = R.classify_unit(a)
        if not c:
            continue
        rec = ledger.get(a) or {}
        if not rec.get("pass"):
            continue
        for r, (real, _why) in c.items():
            t = "\n".join(T.blines(a))
            if real and t and GEN_POP(r).search(t):
                rows.append((a, r, rec.get("blocks", "?"), rec.get("states", 0)))

    if not rows:
        sys.exit("REFUSING: no realised+guest-restored+booked-pass rows - the matrix said 39")

    full = [x for x in rows if re.match(r"^(\d+)/\1$", str(x[2]))]
    partial = [x for x in rows if not re.match(r"^(\d+)/\1$", str(x[2]))]
    print()
    print("=" * 78)
    print("the 39: does the ledger record FULL block coverage?")
    print("=" * 78)
    print("  rows            : %d over %d units" % (len(rows), len({a for a, _, _, _ in rows})))
    print("  blocks n/n FULL : %d" % len(full))
    print("  blocks partial  : %d   <- consistent with both-sides-fault states, where the judge")
    print("                       skips every register comparison (cowdiff.c ~1155-1163)")
    print()
    for a, r, b, st in sorted(rows, key=lambda x: x[2]):
        print("   0x%-10s %-4s blocks=%-9s states=%s" % (a, r, b, st))
    print()
    if len(full) == len(rows):
        print("  UNCOMFORTABLE: every one of them is recorded as FULLY covered. Then the states really")
        print("  did reach the epilogue and the registers were compared, and 'both sides faulted' does")
        print("  not explain them. That is a judge question, not a coverage question.")
    elif not full:
        print("  Every row is partial-coverage: the pass was recorded for a run that never compared the")
        print("  registers. The judge is not blind; the PROOF IS SHALLOW, and `pass` on these rows means")
        print("  'agreed on what was executed', not 'the contract holds'.")
    else:
        print("  MIXED: %d partial (shallow pass, explained) and %d full (needs an individual look -"
              " a full-coverage pass with a realised clobber is the one that indicts the judge)."
              % (len(partial), len(full)))
        for a, r, b, st in full:
            print("     FULL-COVERAGE SUSPECT 0x%s (%s) blocks=%s states=%s" % (a, r, b, st))


if __name__ == "__main__":
    main()
