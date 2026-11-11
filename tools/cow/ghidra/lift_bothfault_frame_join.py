"""The decisive join for the both-fault stack family: are these OUR known frame defects?

91% of the family differs inside `0x993b00-0x993c40` - but that window is where TWO different stories
write:

  (a) harness frame bookkeeping (return addresses, saved pointers the two sides build with different
      machinery) -> a fairness problem in the judge, not the lift; and
  (b) the entry's OWN `push esi/edi/ebx` slots - which is exactly where this session's 270 unpaired
      pushes, 209 over-pops and 30 dropped tail epilogues leave the stack wrong.

Both stories predict "the difference is in the frame window", so the address distribution decides
nothing on its own. The join does: how many of the 828 are units one of the three frame predicates
already flags? High overlap means the family is the frame defects seen from the memory side, and the
staged re-lift is its test. Low overlap means the lift is not the cause and the judge is comparing
words the two sides were never going to agree on.
"""
import io
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import lift_failure_patterns as L  # noqa: E402
import lift_frame_predicates as FP  # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
RECORD = os.path.join(ROOT, "cow", "lift_proof_all.json")


def main():
    with io.open(RECORD, encoding="utf-8", errors="replace") as fh:
        d = json.load(fh)
    fam = [a for a, v in d.items()
           if not v.get("pass") and L.group(v)[:2] == ("memory", "stack")
           and L.group(v)[3] == "both-fault"]
    if not fam:
        sys.exit("REFUSING: the family is empty")

    unpaired = set(FP.unpaired_population())
    overpop = {a for a in FP.lifted_units() if FP.adapter_overpops(FP.read_unit(a))}
    # the tail class: shipped adapters with a tail banner and no pops while the model knows some
    import gen_model
    import lift_clobber_predicate_blindness as T
    tail_dropped = set()
    for a in fam:
        t = FP.read_unit(a)
        if "TAIL CALL" not in t:
            continue
        bl = T.blines(a)
        if not bl:
            continue
        m = gen_model.model_generated(bl)
        if m.get("tail_jump") and m.get("pops") and not FP.adapter_pops(t):
            tail_dropped.add(a)

    frame_any = unpaired | overpop | tail_dropped
    hits = [a for a in fam if a in frame_any]
    print("=" * 76)
    print("both-fault stack family vs the frame-defect populations")
    print("=" * 76)
    print("  family                          : %d" % len(fam))
    print("  unpaired push                   : %d of them" % sum(1 for a in fam if a in unpaired))
    print("  over-pop                        : %d of them" % sum(1 for a in fam if a in overpop))
    print("  tail epilogue dropped           : %d of them" % len(tail_dropped))
    print("  ANY of the three                : %d  (%.0f%%)"
          % (len(hits), 100.0 * len(hits) / len(fam)))
    print("  NONE of the three               : %d  (%.0f%%)"
          % (len(fam) - len(hits), 100.0 * (len(fam) - len(hits)) / len(fam)))
    print("  (units outside src/lifted at all: %d)"
          % sum(1 for a in fam if not FP.read_unit(a)))
    print()
    hits_share = 100.0 * len(hits) / len(fam)
    if hits_share >= 50:
        print("  The majority of this family is the frame defects seen from the memory side. The staged")
        print("  re-lift is the right test for it, and a flip here would be the clearest payoff yet.")
    elif hits_share <= 10:
        print("  The frame defects do NOT explain this family: %d of %d units are clean by all three"
              % (len(fam) - len(hits), len(fam)))
        print("  predicates. The remaining suspects are the harness's own frame words (return addresses")
        print("  and saved pointers the two sides build differently) or a fourth frame bug nobody has")
        print("  a predicate for yet. One by-eye read of a clean member decides which.")
    else:
        print("  Partial (%.0f%%): the frame fixes explain part of it, not the lot. Do not claim the"
              % hits_share)
        print("  family, and do not dismiss it - take the clean members as their own group.")
    print()
    clean = [a for a in fam if a not in frame_any and FP.read_unit(a)]
    print("  three clean members to read by eye: %s" % ", ".join("0x%s" % a for a in sorted(clean)[:3]))


if __name__ == "__main__":
    main()
