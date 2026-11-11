"""One implementation of "run a measurement knob through the real compiler".

Three knobs (param binding, local binding, string witness) each needed the same thing: scrub the
environment, run lift.py once with the knob and once without, and say how many of the emitted bodies
COMPILE. The first two grew their own copies of that, and the copies disagreed with each other in the way
that matters most: one of them asked "which units lack a does_not_compile reason" instead of "which files
are in the gate directory", and printed `compiled 65` for a directory holding 54. The colon-on-the-key bug
that once made `lifted` equal the whole population was forked the same way before.

So the parsing, the directory reads, the environment scrub and the partition checks live HERE, once. A
pricing tool supplies its population and the knob under test; everything about how a verdict is obtained is
shared with the other knobs.

Deliberately NOT shared: what each tool asserts about its own population. The local arm requires every
control to be refused by the emitter (that is what proves the knob is the only thing acting); the param arm
requires the ON arm not to lose what the OFF arm had (its population file predates today's gate fixes and
some of it lifts anyway). Those are claims about different populations and they should stay separate and
readable.
"""
import os
import re
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
for _p in (HERE, os.path.join(ROOT, "tools", "cow"), os.path.join(ROOT, "tools")):
    if _p not in sys.path:
        sys.path.insert(0, _p)

LIFT = os.path.join(ROOT, "tools", "cow", "ghidra", "lift.py")
SCRATCH = os.path.join(ROOT, "build", "scratch")


def clean_env(knobs):
    """The environment for one arm: every COW_* removed, then exactly the knobs named.

    An inherited COW_* is not a typo, it is a second configuration measured at the same time. The combined
    pricing that first reported 169 instead of 170 did it this way.
    """
    if any(k.startswith("COW_") for k in os.environ):
        stray = sorted(k for k in os.environ if k.startswith("COW_"))
        print("  note: clearing inherited knobs from the environment: %s" % ", ".join(stray))
    env = {k: v for k, v in os.environ.items() if not k.startswith("COW_")}
    env.update(knobs)
    return env


def gate_paths(sub):
    return os.path.join(SCRATCH, "gate-dir", sub)


def accepted(sub):
    """The units the gate ACCEPTED: the files still standing in the gate directory.

    Read from disk. Not from the reasons file - a unit the emitter refused has no reason string starting
    with does_not_compile either, and asking that question is how a 54-file directory was reported as 65.
    """
    d = gate_paths(sub)
    if not os.path.isdir(d):
        sys.exit("REFUSING: %s does not exist - the gated run never wrote anything." % d)
    return {"0x" + f[4:-2] for f in os.listdir(d)
            if f.startswith("cow_") and f.endswith(".c")}


def rejected(sub):
    d = os.path.join(gate_paths(sub), "rejected")
    if not os.path.isdir(d):
        return set()
    return {"0x" + f[4:-2] for f in os.listdir(d)
            if f.startswith("cow_") and f.endswith(".c")}


def run(units, knobs, gate_sub=None, label=""):
    """One lift.py run. Returns (emitted_set, reasons, compiled_set_or_None).

    `reasons` ends up containing BOTH emitter refusals and does_not_compile_* verdicts, because the reasons
    file is written after the gate has moved its rejects. `emitted` is deliberately computed before that
    merge: it is what the emitter produced, and the gate's own accepted+rejected must equal it.
    """
    if not units:
        sys.exit("REFUSING: empty unit list for arm %r - a run over nothing reports zero of everything."
                 % label)
    cmd = [sys.executable, LIFT, "--entries", ",".join(sorted(units)), "--verbose"]
    if gate_sub:
        cmd += ["--reasons-out", os.path.join(SCRATCH, "reasons-%s.json" % gate_sub),
                "--gate-dir", gate_paths(gate_sub)]
        # A gate directory is only evidence about THIS run. If a previous arm (or a previous day) left
        # files behind, the accepted set grows without the run emitting anything and the partition check
        # below either lies or fires on somebody else's leftovers. Remove the directory first so that
        # accepted + rejected can only be this run's files.
        import shutil
        gp = gate_paths(gate_sub)
        if os.path.isdir(gp):
            shutil.rmtree(gp)
        rp = os.path.join(SCRATCH, "reasons-%s.json" % gate_sub)
        if os.path.isfile(rp):
            os.remove(rp)
    p = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True,
                       encoding="utf-8", errors="replace", env=clean_env(knobs), timeout=7200)
    out = (p.stdout or "") + "\n" + (p.stderr or "")
    if p.returncode != 0:
        # a crashed run leaves every emitted file standing with an empty rejected/, which is exactly what a
        # clean sweep looks like to anyone who does not check the exit code. The first version did not.
        sys.exit("REFUSING: arm %r exited %d, so no count from it is quotable.\n%s"
                 % (label, p.returncode, "\n".join(out.splitlines()[-15:])))
    reasons = {}
    for ln in out.splitlines():
        s = ln.strip()
        if s.startswith("refuse "):
            parts = s.split(" ", 2)
            if len(parts) == 3:
                # normalise the key: the colon used to stay on it, `allu - set(reasons)` subtracted nothing,
                # and the tool reported the whole population as lifted.
                reasons[parts[1].rstrip(":").lower()] = parts[2].split()[0]
    # The refusal set comes from the run's own reasons file, NOT from parsing `refuse ...` lines off
    # stdout: only the emit-stage refusals print (lift.py:2231, under --verbose), while a unit that
    # `classify()` turns away is recorded in `reasons` and silently `continue`s. A stdout-only parse
    # therefore called 83 classify-refused units "emitted" and the gate directory disagreed by exactly
    # that many. The reasons file is written AFTER the gate has run, so it carries the compiler's
    # `does_not_compile_*` verdicts too - and those units really were emitted, which is why they are
    # filtered out here rather than trusted wholesale. (Deriving the *compiled* set the same way is the
    # bug that once printed "compiled 65" for a 54-file directory: compiled stays a disk read below.)
    allu = {u.lower() for u in units}
    rj = os.path.join(SCRATCH, "reasons-%s.json" % gate_sub) if gate_sub else ""
    refused_pre = {}
    if rj and os.path.isfile(rj):
        import json
        with open(rj, encoding="utf-8") as fh:
            refused_pre = {str(a).lower(): w for a, w in json.load(fh).items()
                           if not str(w).startswith("does_not_compile")}
        missing = set(refused_pre) - allu
        if missing:
            sys.exit("REFUSING: arm %r wrote refusals for units it was not given: %s"
                     % (label, sorted(missing)[:5]))
    if set(reasons) - set(refused_pre):
        sys.exit("REFUSING: arm %r printed `refuse` lines the reasons file does not contain: %s"
                 % (label, sorted(set(reasons) - set(refused_pre))[:5]))
    reasons = dict(refused_pre, **reasons)
    cand = em_sum = None
    for ln in out.splitlines():
        mm = re.match(r"\s*candidates:\s*(\d+)\s+emitted:\s*(\d+)", ln)
        if mm:
            cand, em_sum = int(mm.group(1)), int(mm.group(2))
            break
    if cand is None:
        sys.exit("REFUSING: arm %r printed no `candidates: N emitted: M` line - the run cannot be"
                 " reconciled against its own arithmetic." % label)
    if cand != em_sum + len(refused_pre):
        sys.exit("REFUSING: arm %r says %d candidates = %d emitted + %d refused (pre-gate), which does"
                 " not add up - something was dropped without being counted."
                 % (label, cand, em_sum, len(refused_pre)))
    never_candidates = len(allu) - cand
    print("  [%s] given %d, candidates %d, emitted %d, refused %d, never a candidate (no dump row /"
          " filtered): %d" % (label, len(allu), cand, em_sum, len(refused_pre), never_candidates))
    emitted = allu - set(refused_pre)
    compiled = None
    if gate_sub:
        if not [ln for ln in out.splitlines() if "--gate-dir" in ln]:
            sys.exit("REFUSING: arm %r shows no --gate-dir line - the compiler never ran, so this directory"
                     " only proves the emitter wrote files." % label)
        for ln in out.splitlines():
            s = ln.strip()
            if "--gate-dir" in s or s.startswith("no-compile"):
                print("  [%s] %s" % (label, s))
        compiled = accepted(gate_sub)
        rej = rejected(gate_sub)
        if never_candidates:
            # Some of the given entries were never candidates at all (no Ghidra dump row, or filtered by
            # size before the candidate stage). Which ones is not recoverable from the counts, so the
            # directory is the only authority on who got a file: the check falls back to the run's own
            # emitted figure, and the set is taken from disk.
            if len(compiled | rej) != em_sum:
                sys.exit("REFUSING: arm %r - gate dir holds %d accepted + %d rejected, the run says it"
                         " emitted %d. Directory is stale or a file vanished without a verdict."
                         % (label, len(compiled), len(rej), em_sum))
            if (compiled | rej) - emitted:
                sys.exit("REFUSING: arm %r has files in the gate dir for units it also refused: %s"
                         % (label, sorted((compiled | rej) - emitted)[:5]))
        elif compiled | rej != emitted:
            sys.exit("REFUSING: arm %r - gate dir holds %d accepted + %d rejected but the run's arithmetic"
                     " says %d were emitted (candidates %d, refused %d of %d given). The directory is"
                     " stale, belongs to another run, or a file was written and then disappeared without"
                     " a verdict."
                     % (label, len(compiled), len(rej), len(emitted), cand, len(refused_pre), len(allu)))
        emitted = compiled | rej           # disk truth, once the gate has had its say
        rj = os.path.join(SCRATCH, "reasons-%s.json" % gate_sub)
        if os.path.isfile(rj):
            import json
            with open(rj, encoding="utf-8") as fh:
                for a, w in json.load(fh).items():
                    reasons[a.lower()] = w
    return emitted, reasons, compiled


def controls(prove, n=5, gate_sub="control"):
    """Compile N already-shipped units through the same path.

    Without this, a gate that refuses everything - or one that was never invoked - reports zero compiled and
    the experiment's number is unfalsifiable. Paired with lift_gate_can_fail.py, which proves the opposite
    direction (it must refuse invalid C).
    """
    if len(prove) < n:
        sys.exit("REFUSING: only %d shipped units available for the control." % len(prove))
    _em, _re, comp = run(set(prove[:n]), {}, gate_sub=gate_sub, label="control")
    if comp is None or len(comp) != n:
        sys.exit("REFUSING: the control - %d units that are lifted and shipped today - did not compile"
                 " (%s). The gate's verdict on the experiment cannot be trusted."
                 % (n, None if comp is None else len(comp)))
    print("control: %d shipped units compiled  (the gate can pass, on real files)" % n)
    return comp


def shipped_units(n=5):
    import trivial_audit
    return sorted("0x" + a for a in trivial_audit.body_index()
                  if os.path.isfile(os.path.join(ROOT, "src", "lifted", "cow_%s.c" % a)))


def can_fail_tripwire():
    """The gate must be able to say NO. Run the two-direction check before quoting any zero."""
    rc = os.system("%s %s" % (sys.executable, os.path.join(HERE, "lift_gate_can_fail.py")))
    if rc != 0:
        sys.exit("REFUSING: the syntax gate failed its can-fail/can-pass tripwire - a zero from it means"
                 " nothing.")


def summarise(gained, compiled, rejected_units, why):
    print("\n              emitted   COMPILED")
    print("  gained      %-9d %d" % (len(gained), len(compiled)))
    if rejected_units:
        print("\n  emitted but the COMPILER refused (NOT releases): %d  %s"
              % (len(rejected_units), rejected_units[:8]))
        for u in rejected_units[:4]:
            print("     %s  %s" % (u, why.get(u, "?")))
    print("\nQUOTE ONLY THE COMPILED NUMBER: %d of %d gained units compile."
          % (len(compiled), len(gained)))
