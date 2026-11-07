"""Is cow/lift_proof_all.json consistent with src/lifted after an interrupted proof run?

The batch prover's --rerun DELETES the verdicts it is about to replace before re-proving them (that was
the fix for 149 rows stuck on a stale link_error), so a run cut off in the middle leaves entries missing
from the record while their files are still on disk. Population is the files on disk, so a missing verdict
is not "unproven yet" - it is a unit the README cannot count and the next run may not pick up.
"""
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))          # <root>/tools/cow/ghidra
# THREE climbs from the directory, not from the file - the off-by-one that made compile_one.py claim the
# bridges did not compile. From __file__ directly it would need four, and it silently chdir'd into tools/.
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
os.chdir(ROOT)

with open("cow/lift_proof_all.json", encoding="utf-8") as fh:
    d = json.load(fh)
r = d.get("results", d)

have = {f[4:-2] for f in os.listdir("src/lifted") if f.startswith("cow_") and f.endswith(".c")}
missing = sorted(have - set(r))
stray = sorted(set(r) - have)
proven = sum(1 for v in r.values() if v.get("pass") is True)

print("verdicts in record : %d" % len(r))
print("files on disk      : %d" % len(have))
print("proven             : %d  (%.1f%% of files)" % (proven, 100.0 * proven / max(1, len(have))))
print("files with NO verdict (need proving): %d" % len(missing))
print("verdicts with NO file (stale rows)  : %d" % len(stray))
if missing:
    print("  first missing: %s" % ", ".join(missing[:8]))
if stray:
    print("  first stray:   %s" % ", ".join(stray[:8]))

# Compare against what HEAD actually holds, never a remembered constant: this line used to hardcode
# "5586 files / 5586 verdicts / 4177 proven", and after the next release it contradicted a perfectly
# healthy record - a safety tool that cries wolf is a safety tool nobody reads.
try:
    import subprocess
    _head_files = subprocess.run(["git", "ls-tree", "-r", "--name-only", "HEAD", "src/lifted"],
                                 cwd=ROOT, capture_output=True, text=True).stdout.splitlines()
    _head_n = len([l for l in _head_files if l.endswith(".c")])
except Exception:
    _head_n = -1
print("\nHEAD has %d lifted files; this worktree has %d (+%d uncommitted)"
      % (_head_n, len(have), len(have) - (_head_n if _head_n >= 0 else len(have))))
bad = bool(missing) or bool(stray) or len(r) != len(have)
print("\n%s" % ("RECORD INCONSISTENT - re-prove the missing entries" if bad else "RECORD CONSISTENT"))
sys.exit(1 if bad else 0)
