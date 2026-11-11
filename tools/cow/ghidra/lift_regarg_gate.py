"""Price COW_MODEL_REGARG_WRITEONLY through the compiler on its OWN population.

The population is the entries build/scratch/scan_regarg_all.py identified: the adapter claims an
ecx/edx argument whose every mention in the generated body is an assignment. Membership is computed
with the knob OFF, because the knob changes `reg_args` - deriving membership under the knob would let
a measurement move its own denominator.

Both arms run through lift.py --gate-dir, which writes the run's bodies AND its own layout into a
build/ directory and invokes the REAL syntax gate. `compiled` comes back from lift_gate_lib, which
reads it off DISK (accepted files plus rejected/) rather than deriving it from a reasons JSON.

What it refuses: an empty population, a crashed arm, a control that stops compiling, an ON arm that
compiled nothing, and any quote of a number the compiler did not produce.
"""
import argparse
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
sys.path.insert(0, HERE)
for _p in (os.path.join(REPO, "tools", "cow"), os.path.join(REPO, "tools")):
    if _p not in sys.path:
        sys.path.insert(0, _p)

if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")

import lift_gate_lib as lg

DEFAULT_POPULATION = os.path.join(REPO, "build", "scratch", "regarg-census.json")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--population", default=DEFAULT_POPULATION,
                    help="the census JSON (python tools/cow/ghidra/lift_regarg_census.py)")
    a = ap.parse_args()
    if not os.path.exists(a.population):
        sys.exit("REFUSING: no population file (%s) - run tools/cow/ghidra/lift_regarg_census.py first"
                 % a.population)
    with open(a.population, encoding="utf-8") as fh:
        suspect = json.load(fh)
    units = sorted("0x" + a for a in suspect)
    if not units:
        sys.exit("REFUSING: the population is empty - there is nothing to price")
    print("population: %d entries (membership computed knob-OFF)" % len(units))

    # The gate has to be known capable of saying no before any zero it prints means anything.
    lg.can_fail_tripwire()

    # controls: shipped, proven-path units that must compile in BOTH arms, none of them under test
    under = set(units)
    ctrl = [u for u in lg.shipped_units() if u not in under][:8]
    if not ctrl:
        sys.exit("REFUSING: no shipped control units - a gate that compiles nothing proves nothing")
    print("controls: %d shipped units (not in the population)" % len(ctrl))

    allu = sorted(set(units) | set(ctrl))
    em_off, why_off, comp_off = lg.run(allu, {}, "gate-regarg-off", "off")
    em_on, why_on, comp_on = lg.run(allu, {"COW_MODEL_REGARG_WRITEONLY": "1"}, "gate-regarg-on", "on")

    print("\n%-6s %8s %8s %8s" % ("arm", "emitted", "COMPILED", "rejected"))
    for name, em, comp in (("off", em_off, comp_off), ("on", em_on, comp_on)):
        print("%-6s %8d %8d %8d" % (name, len(em), len(comp), len(em) - len(comp)))

    lost_ctrl = [u for u in ctrl if u not in comp_off or u not in comp_on]
    if lost_ctrl:
        sys.exit("REFUSING: control unit(s) do not compile in both arms: %s - the gate's verdict on the"
                 " experiment cannot be trusted." % ", ".join(lost_ctrl))
    print("controls compile in both arms: OK (%d/%d)" % (len(ctrl), len(ctrl)))

    lost = sorted(comp_off - comp_on)
    gained = sorted(comp_on - comp_off)
    print("\nunits the veto BREAKS in the compiler: %d%s"
          % (len(lost), ("  " + " ".join(lost[:12])) if lost else ""))
    print("units the veto FIXES in the compiler:  %d%s"
          % (len(gained), ("  " + " ".join(gained[:12])) if gained else ""))
    for u in lost[:6]:
        print("   break %s: %s" % (u, why_on.get(u)))
    if not comp_on:
        sys.exit("REFUSING: the ON arm compiled nothing - the veto is a wall, not a fix")
    print("\nQUOTE ONLY THE COMPILED NUMBERS. cowdiff has not run; nothing here is a proof.")
    print("next: lift_relift_run.py with this population + validated controls.")


if __name__ == "__main__":
    main()
