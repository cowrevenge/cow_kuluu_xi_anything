"""Price COW_MODEL_STR_WITNESS_MEASURE on the population it exists for, off vs on, through the real lifter.

Same shape as lift_param_bind_price.py, for the same reasons: both arms run with EVERY COW_* variable
scrubbed and exactly one knob set, so an inherited knob cannot silently change the comparison; refusals are
parsed from lift.py's own `refuse <entry>: <reason>` lines with a partition assertion, because the first
version of that parser left a colon on the key, subtracted nothing, and reported "lifted: 107" while the
same run's histogram said 53 were refused.

The population is the measured one - units whose string verdict is `operand_stack_frame` with every
condemned register witnessed on the straight-line prefix - obtained by importing the classifier that
produced it (`lift_string_frame_witness`), not by re-deriving it here.

A capability tripwire runs first: with the knob OFF, the population must actually refuse on a string name.
If it does not, the list is stale and any "gain" below would be a population that moved elsewhere.
"""
import os
import subprocess
import sys
from collections import Counter

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
for _p in (HERE, os.path.join(ROOT, "tools", "cow")):
    if _p not in sys.path:
        sys.path.insert(0, _p)
for _k in [k for k in list(os.environ) if k.startswith("COW_")]:
    os.environ.pop(_k)

import gen_model                                  # noqa: E402
import trivial_audit                              # noqa: E402
import lift_string_frame_witness as S             # noqa: E402  the classifier, not a copy

LIFT = os.path.join(ROOT, "tools", "cow", "ghidra", "lift.py")
KNOB = "COW_MODEL_STR_WITNESS_MEASURE"


def population():
    bodies = trivial_audit.body_index()
    out = []
    for addr, bl in sorted(bodies.items()):
        try:
            m = gen_model.model_generated(bl)
        except Exception:                                    # noqa: BLE001
            continue
        ins = m.get("ins") or []
        if gen_model.string_shape(ins).get("why") != "operand_stack_frame":
            continue
        hits = S.condemned(ins)
        if not hits or not S.classify_unit(ins, hits).get("WITNESSED-PREFIX"):
            continue
        out.append("0x" + addr)
    return out


def run(units, knob):
    env = dict(os.environ)
    for k in [k for k in list(env) if k.startswith("COW_")]:
        env.pop(k)
    if knob:
        env[KNOB] = "1"
    p = subprocess.run([sys.executable, LIFT, "--entries", ",".join(units), "--verbose"],
                       cwd=ROOT, capture_output=True, text=True, encoding="utf-8",
                       errors="replace", env=env, timeout=3600)
    out = (p.stdout or "") + "\n" + (p.stderr or "")
    reasons = {}
    for ln in out.splitlines():
        s = ln.strip()
        if s.startswith("refuse "):
            parts = s.split(" ", 2)
            if len(parts) == 3:
                reasons[parts[1].rstrip(":").lower()] = parts[2].split()[0]
    allu = {u.lower() for u in units}
    lifted = allu - set(reasons)
    if len(lifted) + len(reasons) != len(allu):
        sys.exit("REFUSING: %d lifted + %d refused != %d - the refuse-line key does not match the"
                 " population spelling." % (len(lifted), len(reasons), len(allu)))
    return lifted, reasons


def main():
    units = population()
    if len(units) < 50:
        sys.exit("REFUSING: population of %d is too small to price a knob - re-run the classifier; the"
                 " measurement said 130." % len(units))
    print("population (live, witnessed-prefix string units): %d" % len(units))

    off_lift, off_why = run(units, knob=False)
    on_lift, on_why = run(units, knob=True)

    if not any(v.startswith("string_op_not_modelled") for v in off_why.values()):
        sys.exit("REFUSING: the OFF arm refuses on no string name at all (%s). The population no longer"
                 " tests this knob." % Counter(off_why.values()).most_common(3))

    gained = sorted(u for u in on_lift if u not in off_lift)
    regressed = sorted(u for u in off_lift if u not in on_lift)
    moved = sorted(u for u in on_why if u in off_why and on_why[u] != off_why[u])

    print("lifted with the knob OFF : %d" % len(off_lift))
    print("lifted with the knob ON  : %d" % len(on_lift))
    print("NEWLY LIFTABLE           : %d" % len(gained))
    print("regressions              : %d  %s" % (len(regressed), regressed[:6]))
    print("moved to another gate    : %d  (NOT a win)" % len(moved))
    if moved:
        for k, v in Counter("%s -> %s" % (off_why[u], on_why[u]) for u in moved).most_common(8):
            print("    %-72s %d" % (k, v))
    still = Counter(v for u, v in on_why.items() if u not in gained)
    if still:
        print("still refused, by reason:")
        for k, v in still.most_common(8):
            print("    %-72s %d" % (k, v))
    if gained:
        print("the %d released units are REPORT-ONLY candidates: never near cowdiff, never booked, and the"
              " knob refuses --apply." % len(gained))
    else:
        print("THE KNOB RELEASED NOTHING on its own population. That is a result: it means the provenance"
              " clause was not the binding constraint, and the next refusal (see 'still refused') is the"
              " real wall. Do not widen the rule to force a number.")


if __name__ == "__main__":
    main()
