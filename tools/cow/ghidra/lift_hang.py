"""lift_hang.py - name the entries that make a chunk stop reporting.

When lift_proof kills a chunk on silence, the harness had printed one line per row it finished, in chunk
order. The culprit is therefore the NEXT entry in that chunk: it is the one the harness was inside when it
stopped talking. That turns "something in these 400 hangs" into a single address to read, which is the
difference between a pattern and a mystery.

    python tools/cow/ghidra/lift_hang.py                 # candidates for every timed-out chunk
    python tools/cow/ghidra/lift_hang.py --show          # print the lifted body of each suspect
"""
import argparse
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
ROW = re.compile(r"^COWDIFF (?:PASS|FAIL) (\w+)")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--list", default=os.path.join(BUILD, "entries_all.txt"))
    ap.add_argument("--show", action="store_true")
    ap.add_argument("--proof", default=os.path.join(ROOT, "cow", "lift_proof_all.json"))
    ap.add_argument("--limit", type=int, default=12)
    a = ap.parse_args()

    order = [ln.strip().lower().replace("0x", "") for ln in open(a.list, encoding="utf-8") if ln.strip()]
    verdicts = {}
    if os.path.isfile(a.proof):
        verdicts = json.load(open(a.proof, encoding="utf-8"))

    # Ground truth, not inference: lift_proof writes hang_<chunk>.txt with the entries that never
    # reported when it killed a chunk. Reading the log instead cannot tell a hung chunk from one that is
    # merely still running, and an early version of this tool did exactly that and named a trivial
    # two-parameter setter as the culprit for a hang it was nowhere near.
    files = sorted(glob.glob(os.path.join(BUILD, "hang_c*.txt")))
    if not files:
        print("no hang_c*.txt in %s - no chunk has been killed by the idle watchdog yet" % BUILD)
        return 0

    suspects, seen = [], set()
    for f in files:
        silent = [ln.strip() for ln in open(f, encoding="utf-8") if ln.strip()]
        if not silent:
            continue
        first = silent[0]
        if first in seen:
            continue
        seen.add(first)
        suspects.append((os.path.basename(f), first, len(silent)))

    print("hang candidates - the FIRST entry that never reported in each killed chunk:")
    for name, e, n in suspects[:a.limit]:
        r = verdicts.get(e) or {}
        state = "graded on a later pass" if r and r.get("why") != "harness_timeout" else \
                ("STILL HUNG" if r.get("why") == "harness_timeout" else "ungraded")
        print("  %-18s 0x%s   (%d silent in that chunk)   %s" % (name, e, n, state))
        if a.show:
            src = os.path.join(ROOT, "src", "lifted", "cow_%s.c" % e)
            if os.path.isfile(src):
                for ln in open(src, encoding="utf-8", errors="replace").read().splitlines():
                    s = ln.strip()
                    if s and not s.startswith(("/*", "*")):
                        print("      | " + s[:150])
    print("\nEach of these is a lifted body that never returns - look for a loop whose exit condition did")
    print("not survive translation. The same mistranslation is the likeliest cause of the `memory` group:")
    print("a guest that scans past its terminator touches bytes the original never did.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
