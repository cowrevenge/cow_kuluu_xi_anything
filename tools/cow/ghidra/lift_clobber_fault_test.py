"""The decisive test for the 39 realised clobbers that are booked pass - written now, RUNS LATER.

Static analysis has taken this as far as it can go. `lift_clobber_pass_audit.py` showed all 39 rows are
partial-block-coverage passes, which is CONSISTENT with cowdiff.c's fault-gated comparison (registers
are skipped when side A faults) but does not prove the registers were never compared, because `blocks`
is a union over all states.

So the test is depth, not more reading: run each unit at a state count well above what it was booked at
and see what breaks. Three outcomes, each with its own consequence:

  FAIL (callee-saved register) or FAIL (esp)   the clobber is observable, the booked `pass` was a
                                               shallow run, and the row is un-proven - say so and
                                               un-book it in the ledger with a named reason;
  FAIL (something else)                        a different defect is reachable; the clobber question
                                               stays open for that unit, do not fold it in;
  PASS at depth 2000                           either the write is genuinely unreachable, or the
                                               register comparison never ran - which the harness does
                                               not currently report (the PASS line carries only
                                               states=/blocks=). That is the moment to ask for a
                                               `bothfault=` field on the PASS line, not to conclude
                                               the clobber is harmless.

Modes:
  --plan      print the commands, the booked depth per unit, and the decision table. NO execution.
              Safe while the population audit owns the harness lock - and this file's default.
  --run       execute them, one subprocess per unit, and classify. Refuses to start while the lock is
              held by somebody else rather than racing the audit.
"""
import argparse
import io
import json
import os
import re
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)
LEDGER = os.path.join(ROOT, "cow", "lift_proof_all.json")
FAIL_RE = re.compile(r"COWDIFF FAIL \w+ \d+ mismatch\(es\), first at state (\d+) \((\w[\w -]*)\)")
PASS_RE = re.compile(r"COWDIFF PASS \w+ states=(\d+) blocks=(\d+)/(\d+)")


def rows():
    """The units this test exists for: realised clobber, guest restores it, ledger says pass."""
    import lift_frame_predicates as FP
    import lift_clobber_realised as R
    import lift_clobber_predicate_blindness as T
    with io.open(LEDGER, encoding="utf-8", errors="replace") as fh:
        ledger = json.load(fh)
    if len(ledger) < 5000:
        sys.exit("REFUSING: ledger has %d rows" % len(ledger))
    out = []
    for a in FP.lifted_units():
        c = R.classify_unit(a)
        if not c:
            continue
        rec = ledger.get(a) or {}
        if not rec.get("pass"):
            continue
        t = "\n".join(T.blines(a))
        hit = [r for r, (real, _w) in c.items()
               if real and t and re.search(r":\s*pop\s+%s\b" % r, t)]
        if hit:
            out.append((a, hit, int(rec.get("states") or 0), str(rec.get("blocks"))))
    if not out:
        sys.exit("REFUSING: no units to test - either they were all un-booked or the predicate is dead")
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--run", action="store_true", help="actually execute cowdiff (needs the harness lock)")
    ap.add_argument("--depth", type=int, default=2000)
    a = ap.parse_args()
    units = rows()
    print("=" * 76)
    print("%d units carry a realised, guest-restored clobber AND a booked pass" % len(units))
    print("booked depths: %s   target depth: %d"
          % (sorted({s for _, _, s, _ in units}), a.depth))
    print("=" * 76)
    if not a.run:
        print("PLAN ONLY (default). Nothing was executed; the audit owns the harness lock.\n")
        for addr, regs, states, blocks in units:
            print("  python tools/cow/cowdiff.py 0x%s --states %d --seed 12345   "
                  "# %s booked at %d states, blocks=%s"
                  % (addr, a.depth, ",".join(regs), states, blocks))
        print("""
DECISION TABLE - write the outcome down in these words, not a paraphrase:
  FAIL (callee-saved register) / FAIL (esp) -> observable clobber; the booked pass was a shallow
      run. Un-book the row with the reason string, do not delete the unit.
  FAIL (other kind)                          -> a different defect is reachable; leave the clobber
      question open for that unit rather than folding it into this one.
  PASS at depth %d                            -> unreachable write, or the register comparison never
      ran. cowdiff's PASS line reports only states=/blocks=, so this outcome is the case FOR adding a
      bothfault= field - not evidence that the clobber is harmless.""" % a.depth)
        return 0

    sys.path.insert(0, os.path.join(ROOT, "tools", "cow"))
    import cowdiff
    lock = cowdiff.harness_lock(timeout=60)   # never race the population audit
    tally = {}
    with lock:
        for addr, regs, states, blocks in units:
            cmd = [sys.executable, os.path.join(ROOT, "tools", "cow", "cowdiff.py"),
                   "0x%s" % addr, "--states", str(a.depth), "--seed", "12345"]
            p = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True, timeout=1800)
            out = (p.stdout or "") + (p.stderr or "")
            m = FAIL_RE.search(out)
            k = ("FAIL:%s" % m.group(2)) if m else ("PASS@%d" % a.depth if "COWDIFF PASS" in out
                                                    else "NO-VERDICT")
            tally[k] = tally.get(k, 0) + 1
            print("  0x%-10s %-18s %s" % (addr, ",".join(regs), k))
    print()
    for k in sorted(tally, key=lambda x: -tally[x]):
        print("  %-28s %d" % (k, tally[k]))
    reg = tally.get("FAIL:callee-saved register", 0) + tally.get("FAIL:esp", 0)
    print()
    print("  observable-clobber confirmations: %d / %d  -> those rows are un-proven and must be"
          " un-booked with a named reason" % (reg, len(units)))
    return 0


if __name__ == "__main__":
    sys.exit(main())
