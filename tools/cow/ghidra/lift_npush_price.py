"""Price COW_MODEL_NPUSH_FRAME_AWARE through the real lifter, both knob positions.

The measurement so far says the frame-eating walk affects 313 call sites (2.1% of sites with a cleanup
constant), with f_10316337 - the callee behind 116 booked `hang` rows - as its exemplar. That is a claim
about `npush`; it is not a claim that any unit starts lifting. Only running the lifter says that.

So: take the units the census put in FRAME_INFLATED, run `lift.py` REPORT-ONLY (writes nothing) over them
with the knob off and on, and diff the refusal reasons. What matters is not "fewer argcount_mismatch" but
where the refusals WENT - a unit that stops refusing on argcount and starts refusing on
`unnameable:dwordptr[...]` has not been unblocked, it has moved to the next gate, and reporting that as a
win would be the same sin as a dead filter reporting a zero.

Run through a subprocess with an explicit environment both ways, because this session has already been
bitten by a knob that was set in the parent but never reached the module.
"""
import collections
import io
import json
import os
import re
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)
LIFT = os.path.join(ROOT, "tools", "cow", "ghidra", "lift.py")
DUMP = "D:/projects/ghidra/ghidra_out/functions_all.jsonl"

REASON_RE = re.compile(r"^\s{2}(\S+)\s+(\d+)\s*$")


def frame_inflated_units():
    """The units whose walk ate the frame - same predicates as lift_npush_frame_inflation."""
    import gen_model
    import trivial_audit
    out = set()
    for addr, bl in sorted(trivial_audit.body_index().items()):
        try:
            m = gen_model.model_generated(bl)
        except Exception:
            continue
        for s in (m.get("call_sites") or []):
            if s.get("target") is None:
                continue
            cleanup = s.get("cleanup") or 0
            walk = s.get("npush_walk")
            if cleanup <= 0 or walk is None:
                continue
            want = cleanup // 4
            pushed = s.get("pushed") or []
            inflated = sum(1 for op in pushed if op.strip().split()[0].rstrip(",") in ("ebx", "esi", "edi", "ebp"))
            if walk != want and walk - inflated == want and inflated > 0:
                out.add(addr)
    return sorted(out)


def run_report(entries, knob):
    env = dict(os.environ)
    for k in [k for k in env if k.startswith("COW_")]:
        env.pop(k)                          # never inherit a knob from the parent shell
    if knob:
        env["COW_MODEL_NPUSH_FRAME_AWARE"] = "1"
    p = subprocess.run([sys.executable, LIFT, "--dump", DUMP, "--entries", ",".join("0x" + e for e in entries)],
                       cwd=ROOT, env=env, capture_output=True, text=True, timeout=3600)
    reasons = collections.Counter()
    for line in (p.stdout or "").splitlines():
        mm = REASON_RE.match(line)
        if mm and not mm.group(1).startswith(("candidates", "by")):
            reasons[mm.group(1)] += int(mm.group(2))
    head = [l for l in (p.stdout or "").splitlines() if l.startswith("candidates:")]
    return reasons, (head[0] if head else "?"), p.stderr[-400:] if p.returncode else ""


def main():
    units = frame_inflated_units()
    if not units:
        sys.exit("REFUSING: the FRAME_INFLATED census is empty here - nothing to price")
    if "10316337" not in units:
        sys.exit("REFUSING: f_10316337 - the exemplar read by eye and reproduced by the tripwire - is not "
                 "in the priced population. The census and this tool disagree; fix that before the numbers.")
    print("pricing %d units whose call sites ate the frame (exemplar f_10316337 included)" % len(units))

    off, head_off, err_off = run_report(units, knob=False)
    on, head_on, err_on = run_report(units, knob=True)
    if err_off or err_on:
        print("  stderr(off)=%s\n  stderr(on)=%s" % (err_off, err_on))
    print("\n  OFF: %s" % head_off)
    print("  ON : %s" % head_on)

    keys = sorted(set(off) | set(on))
    print("\n  %-46s %7s %7s %s" % ("reason", "off", "on", "delta"))
    print("  " + "-" * 74)
    moved = improved = 0
    for k in keys:
        a, b = off.get(k, 0), on.get(k, 0)
        if a == b:
            continue
        if "argcount" in k and b == 0:
            improved += 1
            tag = "GONE"
        elif "argcount" in k:
            tag = "fewer"
        else:
            tag = "NEW GATE - not a win" if b > a else "less"
        print("  %-46s %7d %7d  %+d   %s" % (k, a, b, b - a, tag))
        if b > a and "argcount" not in k:
            moved += 1

    print()
    print("  DECISION:")
    print("    argcount refusals eliminated outright: %d reason(s)" % improved)
    print("    refusals that merely moved to the next gate: %d reason(s)" % moved)
    print("    A unit that stops refusing on argcount and starts refusing on `unnameable:...` is NOT")
    print("    unblocked. Only units with NO reason left are candidates for a re-lift, and none of that")
    print("    is booked from here - it goes through the measured re-lift chain and the proof.")


if __name__ == "__main__":
    main()
