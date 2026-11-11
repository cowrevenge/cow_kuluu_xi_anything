"""Price COW_MODEL_STR_WITNESS_MEASURE against the compiler, not just the emitter.

Its "5 released" came from report-only mode, where lifted == emitted and no file has ever been compiled - the
same standard that made the local binding's first "54" a retraction. Admittedly five bodies; but a number is
not smaller and therefore not wrong, and the gate found real defects in both of the other knobs.

Population membership is computed with every knob OFF (the string classifier asks the module for provenance
== "stack", and with the knob already flipped it answers "stack-witnessed" instead and the population
silently becomes 0 - which is exactly what an earlier version of this family did). The shared mechanics are
in lift_gate_lib.py, so the accepted/rejected bookkeeping is not a second copy of anyone's guess.
"""
import os
import sys
from collections import Counter

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
for _k in [k for k in list(os.environ) if k.startswith("COW_")]:
    os.environ.pop(_k)

import lift_gate_lib as G                             # noqa: E402
import lift_str_witness_price as P                    # noqa: E402

KNOB = "COW_MODEL_STR_WITNESS_MEASURE"


def main():
    G.can_fail_tripwire()
    units = P.population()
    if len(units) < 100:
        sys.exit("REFUSING: population %d (expected ~503) - re-check the classifier, do not price a"
                 " population that quietly collapsed to nothing." % len(units))
    print("population (live, witnessed-prefix string units): %d" % len(units))
    G.controls(G.shipped_units(), 5)

    off_em, off_why, _ = G.run(set(units), {}, label="off")
    on_em, on_why, on_comp = G.run(set(units), {KNOB: "1"}, gate_sub="strwitness", label="on")
    if not off_em:
        sys.exit("REFUSING: the OFF arm emitted nothing - the population is not what this knob acts on.")
    gained = sorted(on_em - off_em)
    lost = sorted(off_em - on_em)
    if lost:
        sys.exit("REFUSING: the knob LOSES %d unit(s) the OFF arm emitted (%s). That is a regression, not a"
                 " price." % (len(lost), lost[:5]))
    compiled = sorted(u for u in gained if on_comp and u in on_comp)
    rej = sorted(u for u in gained if on_comp and u not in on_comp)
    print("\n              emitted   COMPILED")
    print("  OFF arm     %-9d (n/a - not gated)" % len(off_em))
    print("  ON arm      %-9d %d" % (len(on_em), len(on_comp) if on_comp is not None else 0))
    print("  gained      %-9d %d" % (len(gained), len(compiled)))
    if rej:
        print("\n  emitted but the COMPILER refused (NOT releases): %d  %s" % (len(rej), rej[:8]))
        for u in rej[:4]:
            print("     %s  %s" % (u, on_why.get(u, "?")))
    print("\nQUOTE ONLY THE COMPILED NUMBER: %d of %d gained units compile." % (len(compiled), len(gained)))
    left = Counter(v for u, v in on_why.items() if u not in gained)
    if left:
        print("still refused (first-bail-wins, so this hides whatever is behind it):")
        for k, v in left.most_common(6):
            print("    %-46s %d" % (k, v))
    out = os.path.join(G.SCRATCH, "strwitness-compiled.txt")
    with open(out, "w") as fh:
        fh.write("\n".join(compiled) + ("\n" if compiled else ""))
    print("compiled list -> %s" % os.path.relpath(out, G.ROOT))


if __name__ == "__main__":
    main()
