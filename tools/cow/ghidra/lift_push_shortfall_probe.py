"""Fourth mechanism tested on the both-fault stack family: does our prologue push FEWER words than the guest?

The dominant value-shape of this family is `A(theirs)=<something>, B(ours)=00000000` in the frame window -
the reference wrote a stack slot and we never did. The obvious place a stack slot gets written by a
prologue is a `push`, and the lift's prologue is a SCAN THAT STOPS at the first instruction it cannot
express. If the guest pushed six words and our scan emitted four before giving up, the two slots below
are exactly what the harness then finds still zero - and none of my three predicates sees this, because
they all compare our pushes to OUR pops, never to the GUEST's pushes.

This is the missing comparison: guest push count vs emitted push count, per unit, over the 748 family
members that the three frame predicates do not explain.

It carries a can-fire tripwire chosen by scanning for a real case, because three dead filters have
already been caught in the last two turns and a fourth would not be news to anyone.
"""
import io
import json
import os
import re
import sys
from collections import Counter

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import lift_failure_patterns as L  # noqa: E402
import lift_frame_predicates as FP  # noqa: E402
import lift_clobber_predicate_blindness as T  # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
RECORD = os.path.join(ROOT, "cow", "lift_proof_all.json")

GUEST_PUSH = re.compile(r"/\*\s*[0-9a-f]{8}:\s*push\s+", re.I)
OURS_PUSH = re.compile(r"g->esp\s*-=\s*4u;\s*wr32\(g->esp,")


def clean_family(d):
    unpaired = set(FP.unpaired_population())
    overpop = {a for a in FP.lifted_units() if FP.adapter_overpops(FP.read_unit(a))}
    fam = [a for a, v in d.items()
           if not v.get("pass") and L.group(v)[:2] == ("memory", "stack")
           and L.group(v)[3] == "both-fault"
           and a not in unpaired and a not in overpop]
    return fam, unpaired, overpop


def counts(a):
    """(head saves the guest performed, pushes our adapter emitted, whole-body pushes for context).

    Whole-body pushes are the WRONG comparison: most of them are argument pushes reproduced by
    `cow_bridge_*`, not by the prologue, so nearly every unit would look "short" and the number would
    mean nothing. The prologue is only responsible for the head saves.
    """
    bl = T.blines(a)
    if not bl:
        return None
    import gen_model
    m = gen_model.model_generated(bl)
    head = gen_model._head_pushes(m.get("ins") or [])
    g = len([r for r in head if r in ("ebx", "esi", "edi", "ebp")])
    o = len(OURS_PUSH.findall(FP.read_unit(a)))
    total = len(GUEST_PUSH.findall("\n".join(bl)))
    return g, o, total


def main():
    with io.open(RECORD, encoding="utf-8", errors="replace") as fh:
        d = json.load(fh)
    if len(d) < 5000:
        sys.exit("REFUSING: %d rows" % len(d))
    fam, _u, _o = clean_family(d)
    if not fam:
        sys.exit("REFUSING: no clean family members")

    # find and VERIFY a tripwire: a unit where the guest pushes and we obviously push fewer
    tw = None
    for a in fam:
        c = counts(a)
        if c and c[0] >= 1 and c[1] < c[0]:
            tw = (a, c)
            break
    if tw is None:
        # try the whole lifted population - a predicate nobody has seen fire once must not be trusted
        for a in FP.lifted_units():
            c = counts(a)
            if c and c[0] >= 1 and c[1] < c[0]:
                tw = (a, c)
                break
    if tw is None:
        sys.exit("REFUSING: no unit anywhere has guest pushes > our pushes - either the filter is blind "
                 "or the mechanism cannot exist; check GUEST_PUSH/OURS_PUSH against a body by eye before "
                 "concluding anything")
    print("  predicate can-fire: 0x%s guest HEAD saves=%d, ours=%d (body pushes=%d)"
          % (tw[0], tw[1][0], tw[1][1], tw[1][2]))

    hist = Counter()
    short_members = []
    judged = 0
    for a in fam:
        c = counts(a)
        if c is None:
            hist["no generated record"] += 1
            continue
        g, o, _total = c
        judged += 1
        if g == 0:
            hist["no head saves (the compared words are not prologue slots)"] += 1
        elif o < g:
            hist["ours SHORT by %d" % min(4, g - o) if g - o < 4 else "ours short by 4+"] += 1
            short_members.append((a, g, o))
        elif o == g:
            hist["same number"] += 1
        else:
            hist["ours MORE than the guest"] += 1

    print()
    print("=" * 76)
    print("push-shortfall test on the %d unexplained family members (%d judged)" % (len(fam), judged))
    print("=" * 76)
    for k in sorted(hist, key=lambda x: -hist[x]):
        print("  %6d  %s" % (hist[k], k))
    print()
    share = 100.0 * len(short_members) / max(1, judged)
    print("  units where WE push fewer words than the guest: %d (%.0f%%)"
          % (len(short_members), share))
    for a, g, o in short_members[:8]:
        print("     0x%-10s guest %d push(es), ours %d" % (a, g, o))
    print()
    if share >= 50:
        print("  DOMINANT among units that HAVE head saves: a prologue scan that stops early leaves")
        print("  exactly the slots the harness finds at zero. That is a lifter fix - but NOT the same")
        print("  fix as the three already staged, and it must be priced on its own population first.")
    elif share >= 15:
        print("  PARTIAL (%.0f%%): real, but it is a slice. Do not sell it as the family." % share)
    else:
        print("  NOT the mechanism for this family (%.0f%%). The frame words come from somewhere else -"
              % share)
        print("  most likely the bridges' argument pushes or the harness's own frame set-up - and the")
        print("  next honest step is still the one-unit end-to-end read, not a fifth population guess.")


if __name__ == "__main__":
    main()
