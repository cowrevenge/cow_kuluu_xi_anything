"""Pre-flight the measured re-lift: do the knobbed files COMPILE, and did the knobs break them?

The re-lift's biggest avoidable risk is not semantics (cowdiff decides that) - it is 170 rewritten files
that do not compile, discovered after the harness lock frees and after the tree has been edited. The
lifter's own syntax gate is the sanctioned judge, and `cl /Zs` writes no objects, so this can run while
the population audit holds the build.

Design choices that matter:

* the gate is CALLED, not reimplemented - `lift.syntax_gate` is one definition of "does a lifted file
  compile", with its error-code capture and its attribution fixes;
* it runs against a SCRATCH directory with the committed layout headers copied in, so nothing in src/
  or layout/ is touched, and the gate's `rejected_dir` is also scratch: the real `build/lift/rejected`
  is a census that the gate prunes to "this run", and letting a pre-flight empty it would be a side
  effect nobody asked for;
* everything runs TWICE - knobs off (baseline) and knobs on - because a unit that fails both ways is a
  pre-existing condition and must not be blamed on the fix. Only failures that appear WITH the knobs
  are this thread's problem.
"""
import io
import os
import shutil
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)
if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")

DEFAULT_KNOBS = ["COW_LIFT_EPILOGUE_MATCH_PUSHES", "COW_MODEL_TAIL_POP_RUN",
                   "COW_LIFT_TAIL_EPILOGUE"]
KNOBS = list(DEFAULT_KNOBS)
SCRATCH = os.path.join(ROOT, "build", "relift-preflight")   # scratch only: never src/, never layout/
LIST = os.path.join(ROOT, "cow", "wip", "relift-accepted.txt")
LAYOUT = ("lifted_addresses.h", "lifted_bridges.h", "lifted_bridges.c")


def set_knobs(on):
    for k in KNOBS:
        if on:
            os.environ[k] = "1"
        else:
            os.environ.pop(k, None)
    import importlib
    import gen_model
    importlib.reload(gen_model)
    import lift
    importlib.reload(lift)
    # verify the knobs THIS run asked for, by name - not a hard-coded trio, which once refused a
    # single-knob run with a message that blamed knobs that were never part of it
    ATTRS = {"COW_LIFT_EPILOGUE_MATCH_PUSHES": lambda: lift.MATCH_PUSHES,
             "COW_LIFT_TAIL_EPILOGUE": lambda: lift.TAIL_EPILOGUE,
             "COW_LIFT_FRAME_SYMMETRY": lambda: lift.FRAME_SYMMETRY,
             "COW_MODEL_TAIL_POP_RUN": lambda: gen_model.TAIL_POP_RUN,
             "COW_MODEL_EPILOGUE_LIFO": lambda: gen_model.LIFO_EPILOGUE,
    # registered 2026-11-11 after the guard correctly refused a run for it. A knob that is not in
    # this table cannot be verified as landed, and an unverified knob is how a price becomes a rumour.
    "COW_MODEL_NPUSH_FRAME_AWARE": lambda: gen_model.NPUSH_FRAME_AWARE,
    # registered the day it was written, for the reason the note above gives: a run that prices the
    # 366-entry argument veto is worthless unless it can show the veto was in the process that lifted.
    "COW_MODEL_REGARG_WRITEONLY": lambda: gen_model.REGARG_WRITEONLY}
# NOTE: COW_MODEL_STR_PROV_MEASURE is deliberately ABSENT. It admits frame-relative string
# destinations without binding the frame - code that writes an unnamed address, which cowdiff can
# pass because it compares guest memory. lift.py refuses --apply while it is set; leaving it out of
# this table means the pre-flight also refuses to carry it into a run that keeps its files.
    if on:
        unread = [k for k in KNOBS if not (ATTRS.get(k) or (lambda: None))()]
        if unread:
            sys.exit("REFUSING: set in the environment but the module did not read them: %s"
                     % ", ".join(unread))
    else:
        still = [k for k in KNOBS if (ATTRS.get(k) or (lambda: None))()]
        if still:
            sys.exit("REFUSING: the baseline is not actually off: %s" % ", ".join(still))
    return lift


def emit_all(lift, units, dest, dump):
    os.makedirs(dest, exist_ok=True)
    records = {}
    want = set(units)
    with io.open(dump, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            import json
            try:
                d = json.loads(line)
            except ValueError:
                continue
            a = lift.norm(d.get("addr"))
            if a and a[2:] in want and a[2:] not in records:
                records[a[2:]] = d
            if len(records) == len(want):
                break
    written, refused = [], {}
    for a in units:
        d = records.get(a)
        if d is None:
            refused[a] = "no-record"
            continue
        ctx = lift.Ctx(dump, "12.2")
        ctx.problems = []
        ok, why = lift.classify(d)
        if not ok:
            refused[a] = "classify:" + why
            continue
        text, why2 = lift.emit(d, ctx)
        if text is None:
            refused[a] = "emit:" + why2
            continue
        with io.open(os.path.join(dest, "cow_%s.c" % a), "w", encoding="utf-8", newline="\n") as fh:
            fh.write(text)
        written.append(a)
    return written, refused


def main():
    global KNOBS
    argv = sys.argv[1:]
    list_path = argv[argv.index("--list") + 1] if "--list" in argv else LIST
    if "--knobs" in argv:
        KNOBS = [k.strip() for k in argv[argv.index("--knobs") + 1].split(",") if k.strip()]
        for k in KNOBS:
            if not k.startswith("COW_"):
                sys.exit("REFUSING: %r is not a cow knob" % k)
        print("  knobs under test: %s" % ", ".join(KNOBS))
    else:
        KNOBS = list(DEFAULT_KNOBS)
        print("  knobs under test: %s (default)" % ", ".join(KNOBS))
    if not os.path.exists(list_path):
        sys.exit("REFUSING: %s missing - the pricing tool writes it; this pre-flight does not decide "
                 "the population on its own" % list_path)
    with io.open(list_path, encoding="utf-8", errors="replace") as fh:
        units = [l.strip().lower().replace("0x", "") for l in fh if l.strip()]
    if len(units) > 600:
        sys.exit("REFUSING: %d units in one pre-flight batch is a build, not a check" % len(units))
    if not units:
        sys.exit("REFUSING: the accepted list is empty")
    dump = os.environ.get("COW_LIFT_DUMP", "D:/projects/ghidra/ghidra_out/functions_all.jsonl")

    import lift_frame_predicates as FP
    results = {}
    for on in (False, True):
        label = "knobs ON" if on else "baseline (knobs OFF)"
        d = os.path.join(SCRATCH, "on" if on else "off")
        if os.path.isdir(d):
            shutil.rmtree(d)
        os.makedirs(d)
        for f in LAYOUT:
            shutil.copyfile(os.path.join(ROOT, "layout", f), os.path.join(d, f))
        lf = set_knobs(on)
        written, refused = emit_all(lf, units, d, dump)
        if len(written) != len(units):
            print("  note: %d of %d units could not be emitted this pass (%s)"
                  % (len(refused), len(units),
                     ", ".join(sorted(set(r.split(":")[0] for r in refused.values())))))
        bad = lf.syntax_gate(written, os.path.join(d, "rejected"), out_dir=d)
        results[label] = {"written": len(written), "refused": refused,
                          "rejected_by_gate": {e: v for e, v in bad.items()}}
        print("%-22s emitted=%4d  gate rejected=%d  %s"
              % (label, len(written), len(bad),
                 ", ".join("0x%s(%s)" % (e, v[0][0]) for e, v in list(bad.items())[:6])))

    # --- can the gate reject at all? without this, "rejected=0" above is an absence of evidence ---
    ctl = os.path.join(SCRATCH, "control")
    if os.path.isdir(ctl):
        shutil.rmtree(ctl)
    os.makedirs(ctl)
    for f in LAYOUT:
        shutil.copyfile(os.path.join(ROOT, "layout", f), os.path.join(ctl, f))
    good = os.path.join(ctl, "cow_00000001.c")
    with io.open(good, "w", encoding="utf-8", newline="\n") as fh:
        fh.write('#include "cow.h"\nvoid cow_adapter_00000001(Guest* g) { g->eax = 1u; }\n')
    broken = os.path.join(ctl, "cow_00000002.c")
    with io.open(broken, "w", encoding="utf-8", newline="\n") as fh:
        fh.write('#include "cow.h"\nvoid cow_adapter_00000002(Guest* g) { this is not C\n')
    lf = set_knobs(False)
    ctl_bad = lf.syntax_gate(["00000001", "00000002"], os.path.join(ctl, "rejected"), out_dir=ctl)
    ctl_ok = "00000002" in ctl_bad and "00000001" not in ctl_bad
    print("%-22s control: broken file rejected=%s, good file kept=%s"
          % ("gate capability", "00000002" in ctl_bad, "00000001" not in ctl_bad))
    if not ctl_ok:
        sys.exit("REFUSING: the syntax gate did not separate the broken file from the good one "
                 "(rejected=%s) - so its '0 rejected' verdicts above prove nothing"
                 % sorted(ctl_bad))

    base = set(results["baseline (knobs OFF)"]["rejected_by_gate"])
    knobbed = set(results["knobs ON"]["rejected_by_gate"])
    new = sorted(knobbed - base)
    fixed = sorted(base - knobbed)
    print()
    print("=" * 74)
    print("verdict")
    print("=" * 74)
    print("  compile failures with the knobs ON that are NOT in the baseline : %d" % len(new))
    for e in new[:12]:
        print("     0x%s  %s" % (e, results["knobs ON"]["rejected_by_gate"][e][:2]))
    if fixed:
        print("  failures the knobs REMOVED (baseline-only)                     : %d  %s"
              % (len(fixed), ", ".join("0x%s" % e for e in fixed[:8])))
    print()
    for k in results:
        for e, r in sorted(results[k]["refused"].items())[:6]:
            print("  refused-to-emit [%s] 0x%s %s" % (k, e, r))
    if new:
        print("DO NOT RUN the re-lift: the knobs break compilation for %d unit(s). Fix the emitter "
              "first." % len(new))
        sys.exit(1)
    print("The knobbed output compiles for every unit the pricing accepted, with the same baseline "
          "failures and no new ones. The re-lift is clear to run when the harness lock frees.")


if __name__ == "__main__":
    main()
