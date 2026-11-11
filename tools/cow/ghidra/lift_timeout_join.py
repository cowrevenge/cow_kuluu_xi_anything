"""Are the 9 `timeout` units their own class, or a family already explained elsewhere?

`lift_proof_all.json` carries 49 `timeout` rows against 9 distinct units - a separate untested class the
loop has never looked at. Two of this session's findings already name populations: 116 `hang` rows park in
`f_10316337`, and 26 no-answer rows die on `RT_UNIMPL` on the reference side. If the timeouts sit in either,
they need no new investigation - and if they sit in NEITHER, that is a genuinely new class worth its own
run when the harness frees.

No harness, no writes: this reads call targets through the same scan that found f_10316337, reads the
generated body's unimplemented sites through the census's parser, and reports what each timeout unit looks
like. A static classifier PROPOSES a cause; only a run convicts, and the tool says so.
"""
import collections
import io
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
os.environ.pop("COW_MODEL_NPUSH_FRAME_AWARE", None)
import gen_model  # noqa: E402
import lift_frame_predicates as FP  # noqa: E402
import lift_hang_callee_scan as S  # noqa: E402
import lift_unimpl_census as C  # noqa: E402
import trivial_audit  # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
RECORD = os.path.join(ROOT, "cow", "lift_proof_all.json")
FAM_TARGET = "10316337"
TIMEOUTS = ["100543a0", "1010c6e0", "1010c750", "101172a0", "1014e620", "101c4a20",
            "1021df70", "1025ed50", "10327850"]

BRIDGE_RE = re.compile(r"cow_bridge(?:_tail|_call)?_([0-9a-f]{8})")


def our_targets(a, gt):
    """Targets our lifted file calls, plus what the generated body calls - ONE definition, used twice.

    Written as a helper because the first draft duplicated the bridge regex inline in two places, which is
    the drift pattern that has bitten this loop twice already (frame_save_addrs_of, STR_EXPLAINED).
    """
    return set(gt.get(a) or ()) | set(BRIDGE_RE.findall(FP.read_unit(a)))


def main():
    with io.open(RECORD, encoding="utf-8", errors="replace") as fh:
        d = json.load(fh)
    gt = S.gen_targets()
    unimpl = C.scan_generated()
    bodies = trivial_audit.body_index()

    # capability: the classifier must be able to see BOTH known families, or a clean sheet means nothing
    def calls_fam(a):
        return FAM_TARGET in our_targets(a, gt)
    if not any(calls_fam(a) for a in d if not d[a].get("pass")):
        sys.exit("REFUSING: the callee scan cannot see the f_%s family it was built to detect" % FAM_TARGET)
    if not any(unimpl.get(a) for a in d if not d[a].get("pass")):
        sys.exit("REFUSING: the RT_UNIMPL scan cannot see a site it was built to detect")
    print("capability: both known families are detectable by these predicates")

    tally = collections.Counter()
    print()
    print("=" * 100)
    print("the 9 timeout units, against the two families this loop has already explained")
    print("=" * 100)
    print("  %-12s %6s %8s %7s %10s  %s" % ("unit", "insns", "unimpl", "calls", "ledger why", "verdict"))
    for a in TIMEOUTS:
        bl = bodies.get(a) or []
        try:
            ins = (gen_model.model_generated(bl) or {}).get("ins") or []
        except Exception:
            ins = []
        tg = sorted(our_targets(a, gt))
        n_un = len(unimpl.get(a) or [])
        row = d.get(a) or {}
        if calls_fam(a):
            v = "f_%s FAMILY (already explained)" % FAM_TARGET
        elif n_un:
            v = "RT_UNIMPL on the reference side (already explained)"
        elif not tg:
            v = "call-free, no unimpl - NEW to this analysis"
        else:
            v = "calls %s - unattributed" % ",".join(tg[:3])
        tally[v.split(" - ")[0]] += 1
        print("  0x%-10s %6d %8d %7s %10s  %s"
              % (a, len(ins), n_un, len(tg), row.get("why", "absent"), v))

    print()
    for k, n in tally.most_common():
        print("    %-56s %3d" % (k[:56], n))
    print()
    print("  A static classifier PROPOSES; only a run convicts. What it can settle here is whether these 9")
    print("  need a NEW investigation or are already inside a family with a known owner - which is the")
    print("  difference between a queue item and a duplicate.")


if __name__ == "__main__":
    main()
