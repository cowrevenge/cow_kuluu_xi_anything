"""lift_grade.py - re-label a finished lift run from the harness's OWN words, and report by pattern.

lift_proof.py stores the group it guessed at run time; this re-reads the raw per-chunk logs
(build/lift/run_cNNN.log, which the batch writes and never rewrites) and groups the failures by the
reason the harness itself printed in `first at state N (why)`.

Why bother: an early histogram labelled a third of the population `fault`, and that number came from our
own parser grepping the failure line for keywords - a line that always contains `fault 0/0` in its
register dump. Every conclusion drawn from it would have pointed the loop at a group that did not exist.
Counts of things we invented are worth nothing; counts of what the oracle said are the whole point.

    python tools/cow/ghidra/lift_grade.py                      # summarize cow/lift_proof_all.json
    python tools/cow/ghidra/lift_grade.py --top 25
    python tools/cow/ghidra/lift_grade.py --why eax            # list the entries in one group
    python tools/cow/ghidra/lift_grade.py --json
"""
import argparse
import collections
import glob
import json
import os
import re
import sys

if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
BUILD = os.path.join(ROOT, "build", "lift")
PROOF = os.path.join(ROOT, "cow", "lift_proof_all.json")

FAIL_SUMMARY = re.compile(r"^COWDIFF FAIL (\w+) (\d+) mismatch\(es\), first at state (\d+) \((.*?)\)\s*$")
PASS_SUMMARY = re.compile(r"^COWDIFF PASS (\w+) states=(\d+) blocks=(\d+)/(\d+)")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--proof", default=PROOF)
    ap.add_argument("--top", type=int, default=18)
    ap.add_argument("--why", default="", help="list the entries whose reason is this (substring match)")
    ap.add_argument("--json", action="store_true")
    ap.add_argument("--states", default="300")
    a = ap.parse_args()

    # the truth is in the logs, not in the stored guess
    entries = {}
    for log in sorted(glob.glob(os.path.join(BUILD, "run_c*.log"))):
        with open(log, encoding="utf-8", errors="replace") as fh:
            for line in fh:
                m = PASS_SUMMARY.match(line)
                if m:
                    entries[m.group(1)] = {"pass": True, "why": "", "blocks": "%s/%s" % (m.group(3), m.group(4))}
                    continue
                m = FAIL_SUMMARY.match(line)
                if m:
                    entries[m.group(1)] = {"pass": False, "why": m.group(4).strip(),
                                           "mismatches": int(m.group(2)), "state": int(m.group(3))}
    if not entries:
        print("no COWDIFF lines in %s/run_c*.log - has a chunk run yet?" % BUILD)
        return 1

    total = len(entries)
    npass = sum(1 for e in entries.values() if e["pass"])
    groups = collections.Counter(e["why"] for e in entries.values() if not e["pass"])
    cov = [e for e in entries.values() if e["pass"] and "/" in e.get("blocks", "")
           and e["blocks"].split("/")[0] != e["blocks"].split("/")[1]]

    if a.why:
        hits = sorted(e for e, r in entries.items() if not r["pass"] and a.why in r["why"])
        print("%d entries in group %r:" % (len(hits), a.why))
        for e in hits[:120]:
            print("  0x%s  %s" % (e, entries[e]["why"]))
        return 0

    if a.json:
        print(json.dumps({"graded": total, "pass": npass, "rate": round(100.0 * npass / total, 2),
                          "groups": dict(groups.most_common())}, indent=1))
        return 0

    print("LIFT GRADE (from the harness's own words, %s)" % os.path.relpath(BUILD, ROOT))
    print("  graded: %d   pass: %d (%.1f%%)   fail: %d"
          % (total, npass, 100.0 * npass / total, total - npass))
    if cov:
        print("  passes that did NOT reach every instruction: %d (coverage is reported, not required)"
              % len(cov))
    print("\n  %-34s %6s %7s" % ("reason (verbatim from cowdiff)", "count", "%ofall"))
    for k, v in groups.most_common(a.top):
        print("  %-34s %6d %6.1f%%" % (k[:34], v, 100.0 * v / total))
    print("\nnext: pick the biggest group whose reason is OURS (eax/memory/edx/esp/...) and fix it")
    print("      in lift.py / ghidra_c.py / gen_model.py, re-lift, re-prove. One fix clears many.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
