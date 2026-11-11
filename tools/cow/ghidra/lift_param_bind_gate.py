"""Price COW_MODEL_PARAM_BIND_MEASURE against a compiler, not just against the emitter.

The param binding's "32 released" was an EMITTER count: report-only lift.py prints `lifted` where lifted ==
emitted, and the knob refuses --apply, so the syntax gate never ran on a single one of those bodies. The
local binding is what exposed that (its first "54" contained a body with invalid C in it), so the same
number on the param side gets the same treatment here.

`compiled` is read from the gate directory - the files still standing there, and the ones the gate moved to
rejected/ - never inferred from which units lack a reason string (that is how "65 compiled" once appeared for
a 54-file directory).
"""
import os
import subprocess
import sys
from collections import Counter

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
for _p in (HERE, os.path.join(ROOT, "tools", "cow"), os.path.join(ROOT, "tools")):
    if _p not in sys.path:
        sys.path.insert(0, _p)
for _k in [k for k in list(os.environ) if k.startswith("COW_")]:
    os.environ.pop(_k)

import trivial_audit                                  # noqa: E402
import lift_param_bind_price as P                     # noqa: E402

GATE = os.path.join(ROOT, "build", "scratch", "parambind-gate")


def on_disk(sub):
    d = os.path.join(GATE, sub)
    return {"0x" + f[4:-2] for f in os.listdir(d) if f.startswith("cow_") and f.endswith(".c")} \
        if os.path.isdir(d) else set()


def rejected(sub):
    d = os.path.join(GATE, sub, "rejected")
    return {"0x" + f[4:-2] for f in os.listdir(d) if f.startswith("cow_") and f.endswith(".c")} \
        if os.path.isdir(d) else set()


def run(units, knob, gate_sub=None):
    env = dict(os.environ)
    for k in [k for k in list(env) if k.startswith("COW_")]:
        env.pop(k)
    if knob:
        env["COW_MODEL_PARAM_BIND_MEASURE"] = "1"
    cmd = [sys.executable, P.LIFT, "--entries", ",".join(units), "--verbose"]
    if gate_sub:
        cmd += ["--reasons-out", os.path.join(ROOT, "build", "scratch", "reasons-%s.json" % gate_sub),
                "--gate-dir", os.path.join(GATE, gate_sub)]
    p = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True,
                       encoding="utf-8", errors="replace", env=env, timeout=5400)
    out = (p.stdout or "") + "\n" + (p.stderr or "")
    if p.returncode != 0:
        sys.exit("REFUSING: the lift run exited %d; nothing from it is quotable.\n%s"
                 % (p.returncode, "\n".join(out.splitlines()[-15:])))
    reasons = {}
    for ln in out.splitlines():
        s = ln.strip()
        if s.startswith("refuse "):
            parts = s.split(" ", 2)
            if len(parts) == 3:
                reasons[parts[1].rstrip(":").lower()] = parts[2].split()[0]
    compiled = None
    if gate_sub:
        if not [ln for ln in out.splitlines() if "--gate-dir" in ln]:
            sys.exit("REFUSING: no --gate-dir line - the compiler never ran, so this directory only proves"
                     " the emitter wrote files.")
        for ln in out.splitlines():
            if "--gate-dir" in ln:
                print("  %s" % ln.strip())
            # the compiler's own words, from lift.py's --verbose gate report. Without them a
            # "did not compile" is a count with no diagnosis, and the diagnosis is the fix.
            if "no-compile" in ln:
                print("    %s" % ln.strip())
        # EMITTED is what the emitter produced, and it must be read BEFORE the reasons file is merged in:
        # the merge adds does_not_compile entries, and computing `emitted` afterwards would make it equal the
        # compiled set and turn every real reject into a phantom partition error (or, worse, hide one).
        emitted = {u.lower() for u in units if u.lower() not in reasons}
        # the stdout `refuse` lines predate the gate, so they cannot carry a does_not_compile verdict;
        # merge the run's own reasons file, which is written after the gate has moved its rejects out
        rj = os.path.join(ROOT, "build", "scratch", "reasons-%s.json" % gate_sub)
        if os.path.isfile(rj):
            import json
            with open(rj, encoding="utf-8") as fh:
                for a, w in json.load(fh).items():
                    reasons[a.lower()] = w
        compiled = on_disk(gate_sub)
        rej = rejected(gate_sub)
        if compiled | rej != emitted:
            sys.exit("REFUSING: gate dir %d accepted + %d rejected != %d emitted."
                     % (len(compiled), len(rej), len(emitted)))
    allu = {u.lower() for u in units}
    lifted = allu - set(reasons)
    if len(lifted) + len(reasons) != len(allu):
        sys.exit("REFUSING: partition broken (%d + %d != %d)." % (len(lifted), len(reasons), len(allu)))
    return lifted, reasons, compiled


def main():
    print("gate capability tripwire:")
    rc = os.system("%s %s" % (sys.executable, os.path.join(HERE, "lift_gate_can_fail.py")))
    if rc != 0:
        sys.exit("REFUSING: the syntax gate failed its own can-fail/can-pass tripwire.")

    units = P.read_units()
    print("population: %d" % len(units))
    shipped = sorted("0x" + a for a in trivial_audit.body_index()
                     if os.path.isfile(os.path.join(ROOT, "src", "lifted", "cow_%s.c" % a)))[:5]
    if len(shipped) != 5:
        sys.exit("REFUSING: no control - only %d shipped units found." % len(shipped))
    _cl, _cr, c_comp = run(shipped, False, gate_sub="control")
    if c_comp is None or len(c_comp) != 5:
        sys.exit("REFUSING: the gate did not compile the 5 shipped controls (got %s)."
                 % (None if c_comp is None else len(c_comp)))
    print("control: 5 shipped units compiled  (the gate can pass, on real files)")

    off_lift, off_why, _ = run(units, False)
    on_lift, on_why, on_comp = run(units, True, gate_sub="on")
    # NOT "the OFF arm must lift nothing": this population was read off a file written before today's gate
    # fixes, so some of it lifts regardless and those units are not gains - `gained` subtracts them. The
    # version of this check that demanded a pure-escape population exited on 13 such units, i.e. it was a
    # tripwire aimed at the wrong thing; what must hold is that the ON arm does not LOSE what the OFF arm had.
    if not (off_lift <= on_lift):
        sys.exit("REFUSING: the ON arm loses %d unit(s) the OFF arm lifted - %s. The knob cannot be priced as"
                 " a gain over a baseline it breaks."
                 % (len(off_lift - on_lift), sorted(off_lift - on_lift)[:5]))
    gained = sorted(u for u in on_lift if u not in off_lift)
    compiled = sorted(u for u in gained if on_comp and u in on_comp)
    print("\n              emitted   COMPILED")
    print("  ON arm      %-9d %s" % (len(on_lift), len(on_comp) if on_comp is not None else "n/a"))
    print("  gained      %-9d %d" % (len(gained), len(compiled)))
    rej = sorted(rejected("on"))
    if rej:
        print("\n  emitted but the COMPILER refused (NOT releases): %d  %s" % (len(rej), rej[:8]))
        for u in rej[:4]:
            print("     %s  %s" % (u, on_why.get(u, "?")))
    print("\nQUOTE ONLY THE COMPILED NUMBER: %d of %d param-bound units compile." % (len(compiled), len(gained)))
    with open(os.path.join(ROOT, "build", "scratch", "parambind-compiled.txt"), "w") as fh:
        fh.write("\n".join(compiled) + ("\n" if compiled else ""))
    if Counter(on_why.values()):
        print("still refused: %s" % Counter(on_why.values()).most_common(5))


if __name__ == "__main__":
    main()
