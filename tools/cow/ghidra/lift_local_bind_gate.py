"""Price COW_MODEL_LOCAL_BIND_MEASURE through the compiler, not just through the emitter.

Report-only `lifted` == `emitted`: the file has never met cl.exe. That is how a body containing
`CowU32 *rd32((uint32_t)rd32((uint32_t)slot_local_224);` was once counted as 54 releases, found only by
reading one artefact. So each unit gets three possible verdicts here - refused by the emitter, emitted, and
COMPILED - and only the last one is quotable as a release.

`compiled` is read FROM DISK (which cow_<hex>.c files are in the gate directory, and which the gate moved to
rejected/), not inferred from the reasons file: the first version here asked "does this unit lack a
does_not_compile reason", which counted the 11 units that were never emitted at all as compiled, and printed
"65 compiled" for a 54-file directory.

Control: units already lifted and shipped go through the same --gate-dir run. If the gate cannot compile
those, its verdict on the experiment means nothing.
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

import trivial_audit                                  # noqa: E402
import lift_local_bind_price as P                     # noqa: E402
import lift_gate_can_fail as G                        # noqa: E402

GATE = os.path.join(ROOT, "build", "scratch", "localbind-gate")


def on_disk(sub):
    """The units the gate ACCEPTED: the cow_<hex>.c files still standing in the gate directory."""
    d = os.path.join(GATE, sub)
    if not os.path.isdir(d):
        return set()
    return {"0x" + f[4:-2] for f in os.listdir(d) if f.startswith("cow_") and f.endswith(".c")}


def rejected(sub):
    d = os.path.join(GATE, sub, "rejected")
    if not os.path.isdir(d):
        return set()
    return {"0x" + f[4:-2] for f in os.listdir(d) if f.startswith("cow_") and f.endswith(".c")}


def run(units, knobs, gate_sub=None):
    """One real lift run. Returns (lifted_set, reasons, compiled_set-or-None)."""
    env = dict(os.environ)
    for k in [k for k in list(env) if k.startswith("COW_")]:
        env.pop(k)
    env.update(knobs)
    cmd = [sys.executable, P.LIFT, "--entries", ",".join(units), "--verbose"]
    if gate_sub:
        cmd += ["--reasons-out", os.path.join(ROOT, "build", "scratch", "reasons-%s.json" % gate_sub),
                "--gate-dir", os.path.join(GATE, gate_sub)]
    p = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True,
                       encoding="utf-8", errors="replace", env=env, timeout=5400)
    out = (p.stdout or "") + "\n" + (p.stderr or "")
    if p.returncode != 0:
        # A crashed run leaves every emitted file standing in the gate directory with an empty rejected/,
        # which is indistinguishable from "the compiler accepted them all" unless the exit code is checked -
        # and the first version of this tool did not check it.
        sys.exit("REFUSING: the lift run exited %d, so no count from it is quotable. Tail:\n%s"
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
        gate_lines = [ln.strip() for ln in out.splitlines() if "--gate-dir" in ln]
        if not gate_lines:
            sys.exit("REFUSING: no --gate-dir line in the output - the syntax gate never ran, and the"
                     " directory then only proves the emitter wrote files.")
        for ln in gate_lines:
            print("  %s" % ln)
        compiled = on_disk(gate_sub)
        rej = rejected(gate_sub)
        emitted = {u for u in units if u not in reasons}
        # the directory and the run's own account of it must agree, or the verdict is not this run's
        if compiled | rej != emitted:
            sys.exit("REFUSING: gate dir has %d accepted + %d rejected but the run emitted %d - the"
                     " directory is stale or belongs to another run."
                     % (len(compiled), len(rej), len(emitted)))
    allu = {u.lower() for u in units}
    lifted = allu - set(reasons)
    return lifted, reasons, compiled


def main():
    # tripwire first: a gate that has never said no cannot license a zero-failures result
    print("gate capability tripwire (must refuse invalid C and accept valid C):")
    rc = os.system("%s %s" % (sys.executable, os.path.join(HERE, "lift_gate_can_fail.py")))
    if rc != 0:
        sys.exit("REFUSING: the syntax gate failed its own can-fail/can-pass tripwire (rc=%d)." % rc)

    units = P.population()
    if len(units) < 40:
        sys.exit("REFUSING: population %d (expected ~65)." % len(units))
    print("population (refuses on local_address_escapes with string+npush on): %d" % len(units))

    shipped = sorted("0x" + a for a in trivial_audit.body_index()
                     if os.path.isfile(os.path.join(ROOT, "src", "lifted", "cow_%s.c" % a)))[:5]
    if len(shipped) != 5:
        sys.exit("REFUSING: cannot build the control - only %d shipped units." % len(shipped))
    _cl, _cr, c_comp = run(shipped, {}, gate_sub="control")
    if c_comp is None or len(c_comp) != 5:
        sys.exit("REFUSING: the --gate-dir control did not compile 5 already-shipped units (got %s)."
                 % (None if c_comp is None else len(c_comp)))
    print("control: 5 shipped units compiled through --gate-dir  (the gate can pass, on real files)")

    off_lift, off_why, _ = run(units, P.EXPOSE)
    on_lift, on_why, on_comp = run(units, dict(P.EXPOSE, **{P.BIND: "1"}), gate_sub="on")
    if not all(v == "local_address_escapes" for v in off_why.values()) or off_lift:
        sys.exit("REFUSING: OFF arm does not refuse the whole population on local_address_escapes"
                 " (lifted=%d, %s)." % (len(off_lift), Counter(off_why.values()).most_common(3)))

    gained = sorted(u for u in on_lift if u not in off_lift)
    compiled = sorted(u for u in gained if on_comp and u in on_comp)
    print("\n              emitted   COMPILED")
    print("  ON arm      %-9d %s" % (len(on_lift), len(on_comp) if on_comp is not None else "n/a"))
    print("  gained      %-9d %d" % (len(gained), len(compiled)))
    rej = sorted(rejected("on"))
    if rej:
        print("\n  emitted but the COMPILER refused (NOT releases): %d  %s" % (len(rej), rej[:6]))
    print("\nQUOTE ONLY THE COMPILED NUMBER: %d newly liftable." % len(compiled))
    with open(os.path.join(ROOT, "build", "scratch", "localbind-compiled.txt"), "w") as fh:
        fh.write("\n".join(compiled) + ("\n" if compiled else ""))
    print("compiled list -> build/scratch/localbind-compiled.txt")


if __name__ == "__main__":
    main()
