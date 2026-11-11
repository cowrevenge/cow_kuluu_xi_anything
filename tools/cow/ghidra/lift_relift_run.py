"""Run the MEASURED re-lift - the step LOOP.md asks for after a pattern fix - with the guards on.

The loop's rule is: fix the pattern, **measure on a sample of its own units**, rerun the lift, prove,
commit what newly passes. The measurement is `lift_relift_price.py` and it writes the accepted list;
this file executes the next two steps and refuses to improvise them:

  1. `lift.py --entries <list> --apply` with the knob set named on the command line;
  2. `lift_proof.py --entries <list> --out <SCRATCH>` - a SCRATCH verdict record, because this loop is
     under a halt and nothing books itself here. Booking stays a deliberate, separately-reviewed act.

Guards, each one answering a failure this project has already had:
  * an inherited environment is refused - a run that silently measures two configurations at once is
    how the combined pricing first reported 169 instead of 170;
  * the tree must be clean under the judged directories, or the re-lift is not attributable;
  * after the lift, `git diff --name-only src/lifted` must be a SUBSET of the expected units - if the
    lifter rewrote something outside the list, that is reported and the run stops before proving, so a
    surprise never becomes a booked surprise;
  * the run records the commit, the knobs, the list and the counts, because a result nobody can
    reproduce is a rumour.

Default is `--plan`, which touches nothing.
"""
import argparse
import datetime
import hashlib
import io
import json
import os
import re
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
KNOB_PREFIX = "COW_"
JUDGED_DIRS = ("src/", "runtime/", "layout/", "ledger/", "cow/wraps.json",
               "tools/cow/cowdiff.c", "tools/cow/cowdiff.py")
LIFT = os.path.join(ROOT, "tools", "cow", "ghidra", "lift.py")
PROOF_TOOL = os.path.join(ROOT, "tools", "cow", "ghidra", "lift_proof.py")


def sh(*cmd, **kw):
    return subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True, errors="replace", **kw)


def read_list(path):
    with io.open(path, encoding="utf-8", errors="replace") as fh:
        out = [l.strip().lower().replace("0x", "") for l in fh if l.strip()]
    if not out:
        sys.exit("REFUSING: %s is empty - the pricing tool decides the set, and it decided nothing"
                 % path)
    bad = [a for a in out if not re.match(r"^[0-9a-f]{8}$", a)]
    if bad:
        sys.exit("REFUSING: %r are not 8 hex digits" % bad[:5])
    return out


def guard_env(knobs):
    stray = sorted(k for k in os.environ if k.startswith(KNOB_PREFIX) and k not in knobs)
    if stray:
        sys.exit("REFUSING: these cow knobs are set in your shell and not in --knobs: %s\n"
                 "A measured run must name its whole configuration." % ", ".join(stray))
    for k in knobs:
        os.environ[k] = "1"


def guard_clean_tree():
    p = sh("git", "status", "--porcelain")
    dirty = [l[3:].strip() for l in (p.stdout or "").splitlines() if l.strip()]
    hurt = [d for d in dirty
            if any(d.replace("\\", "/").startswith(x.rstrip("/")) or d == x
                   for x in JUDGED_DIRS)]
    if hurt:
        sys.exit("REFUSING: the judged directories are dirty, so a re-lift now would not be "
                 "attributable:\n  %s" % "\n  ".join(hurt[:12]))
    head = sh("git", "rev-parse", "HEAD").stdout.strip()
    if not head:
        sys.exit("REFUSING: no HEAD")
    return head


def changed_lifted_files():
    p = sh("git", "diff", "--name-only", "HEAD", "--", "src/lifted")
    return sorted({os.path.basename(l.strip())[4:12].lower()
                   for l in (p.stdout or "").splitlines() if l.strip()})


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--list", default=os.path.join(ROOT, "cow", "wip", "relift-accepted.txt"))
    ap.add_argument("--knobs", default="COW_LIFT_EPILOGUE_MATCH_PUSHES,COW_MODEL_TAIL_POP_RUN,"
                                       "COW_LIFT_TAIL_EPILOGUE")
    ap.add_argument("--states", default="400")
    ap.add_argument("--out", default=os.path.join(ROOT, "cow", "wip", "relift-proof.json"))
    ap.add_argument("--controls", default=os.path.join(ROOT, "cow", "wip",
                                                       "relift-controls.txt"),
                    help="units the pricing proved byte-identical; proved in the same batch so a fix "
                         "that breaks untouched files cannot pass as a win")
    ap.add_argument("--apply", action="store_true",
                    help="actually rewrite src/lifted and prove. Default is a plan that touches "
                         "nothing.")
    a = ap.parse_args()
    knobs = [k.strip() for k in a.knobs.split(",") if k.strip()]
    units = read_list(a.list)
    # a control that fails is the loudest possible result: it is a unit the knobs were supposed to leave
    # alone. Prove them in the same batch rather than asserting byte-identity from the emitter alone.
    controls = read_list(a.controls) if os.path.exists(a.controls) else []
    prove_units = units + [c for c in controls if c not in set(units)]
    head = guard_clean_tree()
    digest = hashlib.sha256("\n".join(sorted(units)).encode()).hexdigest()[:12]

    print("=" * 76)
    print("measured re-lift plan")
    print("=" * 76)
    print("  units        : %d   (list sha %s)   controls: %d (%s)"
          % (len(units), digest, len(controls),
             os.path.basename(a.controls) if controls else "NO CONTROL FILE - a win here would be "
                                                           "unverified in one direction"))
    print("  knobs        : %s" % ", ".join(knobs))
    print("  pinned HEAD  : %s" % head[:10])
    print("  proof record : %s   (SCRATCH - the official record is not touched)" % a.out)
    print()
    print("  1) python %s --entries %s --apply" % (
        os.path.relpath(LIFT, ROOT), "<the %d entries>" % len(units)))
    print("  2) python %s --entries <same list, + %d controls> --states %s --out %s --rerun"
          % (
            os.path.relpath(PROOF_TOOL, ROOT), len(controls), a.states,
            os.path.relpath(a.out, ROOT)))
    print()
    print("  DECISION RULE: only units that go from failing to PASSING in the scratch record are")
    print("  candidates for booking, and booking is a separate, deliberate commit - never a side")
    print("  effect of this script. Units that go the other way are reported, not deleted.")
    if not a.apply:
        print("\nPLAN ONLY - nothing was written, nothing was built. Pass --apply when the harness")
        print("lock is free (this script takes the same lock the audit holds, and waits).")
        return 0

    guard_env(knobs)
    sys.path.insert(0, os.path.join(ROOT, "tools", "cow"))
    import cowdiff
    record = {"when": datetime.datetime.utcnow().isoformat() + "Z", "head": head,
              "knobs": knobs, "states": a.states, "units": len(units), "list_sha": digest,
              "steps": []}
    with cowdiff.harness_lock(timeout=7200):
        entries = ",".join("0x" + u for u in prove_units)
        p = sh(sys.executable, LIFT, "--entries", entries, "--apply", "--verbose")
        record["steps"].append({"step": "lift", "rc": p.returncode,
                                "tail": (p.stdout or "")[-2000:],
                                "err": (p.stderr or "")[-1500:]})
        print((p.stdout or "")[-3000:])
        if p.returncode != 0:
            print((p.stderr or "")[-2000:])
            record["verdict"] = "lift failed"
            write(a, record)
            return 1
        offlist = changed_lifted_files()
        unexpected = [u for u in offlist if u not in set(units) | set(controls)]
        record["changed_files"] = len(offlist)
        record["unexpected_changes"] = unexpected
        if unexpected:
            record["verdict"] = ("the lifter rewrote %d unit(s) outside the list - STOPPED before "
                                 "proving; nothing was booked" % len(unexpected))
            print("\nREFUSING TO PROVE: src/lifted changed outside the expected set: %s"
                  % ", ".join(unexpected[:10]))
            write(a, record)
            return 1
        q = sh(sys.executable, PROOF_TOOL, "--entries", entries, "--states", a.states,
               "--out", a.out, "--rerun")
        record["steps"].append({"step": "prove", "rc": q.returncode,
                                "tail": (q.stdout or "")[-3000:],
                                "err": (q.stderr or "")[-1500:]})
        print((q.stdout or "")[-4000:])
        record["verdict"] = "proved into the scratch record; nothing booked"
    write(a, record)
    print("\nrun record: %s" % os.path.relpath(a.out + ".run.json", ROOT))
    return 0


def write(a, record):
    with io.open(a.out + ".run.json", "w", encoding="utf-8", newline="\n") as fh:
        json.dump(record, fh, indent=1, sort_keys=True)
        fh.write("\n")


if __name__ == "__main__":
    sys.exit(main())
