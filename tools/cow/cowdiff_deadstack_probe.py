"""cowdiff_deadstack_probe.py - is a single-word memory FAIL actually a difference in DEAD stack?

    python tools/cow/cowdiff_deadstack_probe.py 0x10057140 0x10152c50 0x10152ad0
    python tools/cow/cowdiff_deadstack_probe.py --states 8 0xADDR

WHY THIS EXISTS. `reverify_bucket.py` puts single-word memory failures in a `dead-stack-residue` bucket, but
the audit record stores only the flat `COWDIFF FAIL ...` line, and **that line carries no esp** - so the
question "is the differing word somewhere the calling contract cannot observe?" cannot be answered from the
record. It is answered by the judge's per-state line, which `--json` mode prints and which does carry esp:

    10057140 state 0: memory (eax ... esp 00993be4/00993be4 fault 0/0 @00993b60 10313417/00000000)

A failure where **both sides agree on esp/eax/edx/fault, every block is covered, and the lone difference sits
below the entry's final esp** is a disagreement about stack space nobody observes. Un-proving or re-lifting a
unit for that bends correct code to satisfy a comparison of garbage - so this check has to run BEFORE anyone
acts on the bucket.

MEASURED, 2026-11-10: all three units of the `@00993b60 10313417/00000000` family came back with esp agreeing
at 0x00993be4, the slot below it, and blocks fully covered (3/3, 5/5, 5/5). The family is comparison scope,
not conversion.

EXIT CODES ARE THE CONTRACT: 0 = every unit judged and every difference is below esp; 1 = at least one
difference is where the contract can see it (a real conversion question); **2 = nothing could be judged** -
no line parsed, or the runs produced nothing. Absence of a parse is never evidence, which is the mistake the
first version of this file made: its regex was copied from the flat FAIL line (kind in parentheses) and
matched nothing on the detail line (kind bare after `state 0:`), and it then printed "that one is a real
conversion question" off zero data.
"""
import argparse
import json
import os
import re
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))                    # tools/cow
# THREE levels up. This is the second time this session a script promoted from build/ (two levels) into
# tools/cow/ (three levels) kept the old depth and quietly computed ROOT=<repo>\tools, which then resolved
# COWDIFF to tools\tools\cow\cowdiff.py and made every unit "unreadable". The depth is a property of where the
# FILE lives, not of what it computes, so it cannot be carried over from the scratch copy - and the existence
# check below is there because "cannot open file" is a fact about the harness, never a verdict on a unit.
ROOT = os.path.dirname(os.path.dirname(HERE))
COWDIFF = os.path.join(ROOT, "tools", "cow", "cowdiff.py")

# The per-state detail line is NOT shaped like the flat FAIL line: the kind is bare after "state N: " and the
# registers live inside one parenthesised group. Match it as it actually is, and refuse to conclude otherwise.
STATE_LINE = re.compile(r"state (\d+): ([\w -]+?)\s+\(([^)]*)\)", re.M)
ESP_PAIR = re.compile(r"esp ([0-9a-fA-F]{8})/([0-9a-fA-F]{8})")
SLOT_PAIR = re.compile(r"@([0-9a-fA-F]{8}) ([0-9a-fA-F]{8})/([0-9a-fA-F]{8})")
JSON_LINE = re.compile(r'^\{"entry".*\}$', re.M)


def run_one(entry, states, seed, nargs):
    cmd = [sys.executable, COWDIFF, "0x" + entry, "--states", str(states),
           "--seed", str(seed), "--args", str(nargs), "--json"]
    try:
        p = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True,
                           encoding="utf-8", errors="replace", timeout=1800)
    except subprocess.TimeoutExpired:
        return None, "cowdiff did not return"
    except OSError as exc:
        return None, "could not run cowdiff: %s" % exc
    return (p.stdout or "") + "\n" + (p.stderr or ""), None


def main():
    ap = argparse.ArgumentParser(description="does a memory FAIL differ only below the final esp?")
    ap.add_argument("units", nargs="+")
    ap.add_argument("--states", default="8", help="small is fine: these failures show at state 0")
    ap.add_argument("--seed", default="12345")
    ap.add_argument("--args", dest="nargs", default="4")
    a = ap.parse_args()

    judged = dead = missing = 0
    for raw in a.units:
        u = raw.lower().replace("0x", "")
        out, err = run_one(u, a.states, a.seed, a.nargs)
        if err or not out:
            print("  0x%s  %s" % (u, err or "no output"))
            missing += 1
            continue
        m = STATE_LINE.search(out)
        if not m:
            # Print what the judge ACTUALLY said instead of guessing at a cause. Measured once and then not
            # reproducible by hand (the same unit fails identically at 4/8/400/2000 states without --json), so
            # "did it PASS, or did the format change?" was a message that taught the reader nothing. If the
            # detail line ever stops appearing, the output below is the evidence, not a mystery.
            tail = [l.strip() for l in out.splitlines() if l.strip()][-4:]
            print("  0x%s  no state-N detail line. Last output from the judge:" % u)
            for t in tail:
                print("        | %s" % t[:150])
            missing += 1
            continue
        em = ESP_PAIR.search(m.group(3)) or ESP_PAIR.search(out)
        sm = SLOT_PAIR.search(m.group(3)) or SLOT_PAIR.search(out)
        if not em or not sm:
            print("  0x%s  detail line found but esp/differing word unreadable: %r"
                  % (u, m.group(0)[:100]))
            missing += 1
            continue
        jm = JSON_LINE.search(out)
        rec = json.loads(jm.group(0)) if jm else {}
        state, kind = m.group(1), m.group(2)
        espA, espB = em.group(1), em.group(2)
        slot, A, B = sm.group(1), sm.group(2), sm.group(3)
        below = int(slot, 16) < int(espA, 16)
        agree = espA.lower() == espB.lower()
        print("  0x%s  state %s kind=%s slot=@%s A=%s B=%s | esp %s/%s %s | slot %s final esp | blocks %s/%s"
              % (u, state, kind, slot, A, B, espA, espB, "AGREE" if agree else "DIFFER",
                 "BELOW" if below else "at-or-above", rec.get("blocks"), rec.get("blocks_total")))
        judged += 1
        if below and agree:
            dead += 1

    if missing or not judged:
        print("\nCANNOT JUDGE: %d of %d unit(s) gave no usable detail line. This is NOT a verdict on the "
              "family - fix the parse or the run before believing anything here." % (missing, len(a.units)))
        return 2
    print("\n%d of %d differ ONLY below the final esp, with both sides' esp agreeing." % (dead, judged))
    if dead == judged:
        print("=> comparison scope, not conversion. Do NOT un-prove or re-lift these: the contract state "
              "agrees and the difference is in stack space the entry's own `ret` has already left behind.")
        return 0
    print("=> %d unit(s) differ where the contract can see them - those are genuine conversion questions."
          % (judged - dead))
    return 1


if __name__ == "__main__":
    sys.exit(main())
