"""Price COW_LIFT_OVERLAY_READ through the real compiler, on its own population.

Population: tools/cow/ghidra/lift_overlay_read_census.py --json, membership computed with the knob OFF.
Both arms run through lift.py --gate-dir, which writes the run's bodies AND its own layout into build/ and
invokes the REAL syntax gate; `compiled` is read off DISK by lift_gate_lib, not derived from a reasons
JSON.

What this can and cannot say:
  * it says whether the fixed lowering COMPILES, and whether it breaks anything that compiled before;
  * it does NOT say any unit is correct. cowdiff has not run. The 10 shipped units this class contains
    that are recorded pass=True are defects hiding behind zero data, and a compiler pass proves nothing
    about them either way - see the census docstring.

Refusals: empty population, crashed arm, a control that stops compiling, an ON arm that compiled nothing,
and - the one that matters for a shift-direction fix - an ON arm whose emitted bytes are identical to the
OFF arm's, which would mean the knob reached nothing and its zero is meaningless.
"""
import argparse
import hashlib
import io
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

import lift_gate_lib as lg   # noqa: E402

DEFAULT_POPULATION = os.path.join(REPO, "build", "scratch", "overlay-census.json")


def digest(gate_sub, units):
    """sha256 of each accepted file's bytes, as {unit: hex} - to prove the arms really differ.

    Takes the gate subdirectory explicitly. The first draft read it from a module-level holder that the
    caller had to remember to set before each call, which is a way to compare two arms against the same
    directory and conclude the knob changed nothing.
    """
    d = lg.gate_paths(gate_sub)
    out = {}
    for u in sorted(units):
        p = os.path.join(d, "cow_%s.c" % u[2:])
        if os.path.isfile(p):
            with io.open(p, "rb") as fh:
                out[u] = hashlib.sha256(fh.read()).hexdigest()[:16]
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--population", default=DEFAULT_POPULATION)
    ap.add_argument("--controls", type=int, default=8)
    a = ap.parse_args()

    if not os.path.exists(a.population):
        sys.exit("REFUSING: no population file (%s) - run tools/cow/ghidra/"
                 "lift_overlay_read_census.py --json first" % a.population)
    with io.open(a.population, encoding="utf-8") as fh:
        pop = json.load(fh)
    units = sorted("0x" + k for k in pop)
    if not units:
        sys.exit("REFUSING: the population is empty - there is nothing to price")
    print("population: %d units (knob-OFF membership)" % len(units))

    lg.can_fail_tripwire()

    under = set(units)
    ctrl = [u for u in lg.shipped_units() if u not in under][:a.controls]
    if not ctrl:
        sys.exit("REFUSING: no shipped control units - a gate that compiles nothing proves nothing")
    print("controls: %d shipped units outside the population" % len(ctrl))

    allu = sorted(under | set(ctrl))
    em_off, why_off, comp_off = lg.run(allu, {}, "gate-overlay-off", "off")
    d_off = digest("gate-overlay-off", comp_off)
    em_on, why_on, comp_on = lg.run(allu, {"COW_LIFT_OVERLAY_READ": "1"}, "gate-overlay-on", "on")
    d_on = digest("gate-overlay-on", comp_on)

    print("\n%-6s %8s %8s %8s" % ("arm", "emitted", "COMPILED", "rejected"))
    for name, em, comp in (("off", em_off, comp_off), ("on", em_on, comp_on)):
        print("%-6s %8d %8d %8d" % (name, len(em), len(comp), len(em) - len(comp)))

    lost_ctrl = [u for u in ctrl if u not in comp_off or u not in comp_on]
    if lost_ctrl:
        sys.exit("REFUSING: control unit(s) do not compile in both arms: %s - the gate's verdict on the"
                 " experiment cannot be trusted." % ", ".join(lost_ctrl))
    print("controls compile in both arms: OK (%d/%d)" % (len(ctrl), len(ctrl)))

    changed = [u for u in sorted(comp_off & comp_on) if d_off.get(u) != d_on.get(u)]
    released = sorted(comp_on - comp_off)
    broken = sorted(comp_off - comp_on)
    print("\nunits whose EMITTED BYTES changed:      %d" % len(changed))
    print("units RELEASED by the fix (compile):    %d%s"
          % (len(released), ("  " + " ".join(released[:10])) if released else ""))
    print("units BROKEN by the fix (compile):      %d%s"
          % (len(broken), ("  " + " ".join(broken[:10])) if broken else ""))
    for u in broken[:6]:
        print("   break %s: %s" % (u, why_on.get(u)))

    # the arm-difference tripwire: a shift-direction fix that changed no bytes reached nothing
    if not changed:
        sys.exit("REFUSING: the ON arm emitted byte-identical files to the OFF arm - the knob reached"
                 " nothing, so every zero above is a vacuous zero and must not be quoted.")
    print("\nbyte-difference tripwire: OK (%d units differ between arms)" % len(changed))
    print("\nQUOTE ONLY THE COMPILED NUMBERS. cowdiff has not run; nothing here is a proof.")
    print("next: prove the %d shipped rows with lift_proof.py against a same-build baseline"
          % sum(1 for u in units if os.path.isfile(
              os.path.join(REPO, "src", "lifted", "cow_%s.c" % u[2:]))))


if __name__ == "__main__":
    main()
