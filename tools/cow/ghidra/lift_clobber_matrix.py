"""Add the guest side to the realised/unrealised split - it is what separates a clobber from a faithful lift.

`push edi` with no matching pop in OUR adapter is only a clobber if the GUEST brought edi back. If the
entry itself never pops it (push on one path, pop on another, or a save the function abandons), then
matching that behaviour is what a faithful lift is supposed to do, and cowdiff passing is the pipeline
working - not a false green. The earlier draft of this file printed the first eight realised units
under the heading "realised, unproven" without filtering on proof: a label that described the code
path rather than the measurement. It is filtered now.

A booked-pass unit that is REALISED, GUEST-RESTORED, and still unpaired by us is the only combination
that reopens the judge, and the judge is not blind by construction: tools/cow/cowdiff.c compares
ebx/esi/edi/ebp and esp after the return (line 17, and the `callee-saved register` row at ~1159).
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
import lift_clobber_predicate_blindness as T  # noqa: E402 (for the generated-body index)

LEDGER = os.path.join(FP.ROOT, "cow", "lift_proof_all.json")

GEN_POP = lambda r: re.compile(r":\s*pop\s+%s\b" % r)      # noqa: E731
GEN_PUSH = lambda r: re.compile(r":\s*push\s+%s\b" % r)    # noqa: E731


def guest_restores(a, r):
    """Does the GUEST body pop r at all? (Generated text, the recompiler's own translation.)"""
    t = "\n".join(T.blines(a))
    return bool(t and GEN_POP(r).search(t))


def main():
    with io.open(LEDGER, encoding="utf-8", errors="replace") as fh:
        ledger = json.load(fh)
    if len(ledger) < 5000:
        sys.exit("REFUSING: ledger too small (%d)" % len(ledger))

    def bp(a):
        return bool((ledger.get(a) or {}).get("pass"))

    cells = {}
    members = {}
    for a in FP.lifted_units():
        c = R.classify_unit(a)
        if not c:
            continue
        for r, (real, why) in c.items():
            g = guest_restores(a, r)
            k = ("REALISED" if real else "unrealised",
                 "guest restores it" if g else "guest never pops it",
                 "ledger:pass" if bp(a) else "ledger:unproven")
            cells[k] = cells.get(k, 0) + 1
            members.setdefault(k, []).append("0x%s(%s)" % (a, r))

    print()
    print("=" * 78)
    print("unpaired pushes: OUR write x GUEST restore x LEDGER   (pairs, not units)")
    print("=" * 78)
    order = [("REALISED", "guest restores it", "ledger:pass"),
             ("REALISED", "guest restores it", "ledger:unproven"),
             ("REALISED", "guest never pops it", "ledger:pass"),
             ("REALISED", "guest never pops it", "ledger:unproven"),
             ("unrealised", "guest restores it", "ledger:pass"),
             ("unrealised", "guest restores it", "ledger:unproven"),
             ("unrealised", "guest never pops it", "ledger:pass"),
             ("unrealised", "guest never pops it", "ledger:unproven")]
    for k in order:
        n = cells.get(k, 0)
        print("  %-10s %-20s %-16s : %4d" % (k[0], k[1], k[2], n))
        print("        e.g. %s" % ", ".join(members.get(k, [])[:5]))
    hot = cells.get(("REALISED", "guest restores it", "ledger:pass"), 0)
    print()
    print("  THE ONLY CELL THAT REOPENS THE JUDGE: realised + guest restores + booked pass = %d" % hot)
    if hot:
        print("  Members: %s" % ", ".join(members[("REALISED", "guest restores it", "ledger:pass")]))
        print("  Each needs an individual look BEFORE any claim about cowdiff blindness - the likely")
        print("  innocent explanations are (a) no tested state ever reaches the write, (b) the guest")
        print("  pops it only on a path the generated body does not take either, (c) the harness skips")
        print("  register comparison when side A faults. Distinguish them per unit; do not generalise")
        print("  from the count.")
    print()
    print("  And the number to carry into the measured re-lift is the REALISED, GUEST-RESTORED total")
    print("  (%d pairs): those are the only ones the knob can change and cowdiff can notice."
          % (cells.get(("REALISED", "guest restores it", "ledger:pass"), 0)
             + cells.get(("REALISED", "guest restores it", "ledger:unproven"), 0)))
    if "10003070" not in "".join(members.get(("REALISED", "guest restores it", "ledger:unproven"), [])):
        # the exemplar's proof status is whatever the ledger says; it must be in the REALISED+guest cell
        # on one side or the other
        both = (members.get(("REALISED", "guest restores it", "ledger:pass"), [])
                + members.get(("REALISED", "guest restores it", "ledger:unproven"), []))
        if "0x10003070(edi)" not in both:
            sys.exit("REFUSING: exemplar 0x10003070(edi) is not realised+guest-restored (%s)"
                     % [("REALISED", "guest restores it", k) for k in ("ledger:pass", "ledger:unproven")])
    print("  tripwire: 0x10003070(edi) is in the realised+guest-restored set")


if __name__ == "__main__":
    main()
