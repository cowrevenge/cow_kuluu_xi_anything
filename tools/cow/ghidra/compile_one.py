"""Compile one file with the gate's own environment and print the raw errors.

The syntax gate captures cl's output and only ever surfaces errors that match a `cow_<hex>.c` filename,
so when layout/lifted_bridges.c is what breaks, the run prints "see the errors above" and nothing above
was ever printed. This is the tool that answers that message.
"""
import subprocess
import sys
import os

HERE = os.path.dirname(os.path.abspath(__file__))
# tools/cow/ghidra -> three up is the repository root (lift.py uses the same three-level climb)
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
# build.py lives in tools/ (not tools/cow, and not next to this file): lift.py reaches it through
# that directory, and a tool that claims to reproduce the gate has to import the same module.
sys.path.insert(0, os.path.join(ROOT, "tools"))
os.chdir(ROOT)
import build as upstream  # noqa: E402

target = sys.argv[1] if len(sys.argv) > 1 else "layout/lifted_bridges.c"
env = upstream.msvc_env("x64")
cmd = (["cl", "/c", "/Zs", "/nologo", "/O1", "/MT", "/W3", "/std:c11", "/bigobj",
        "/DRT_GUEST_WINDOW",
        "/I", "runtime", "/I", "runtime\\portable", "/I", "generated",
        "/I", "generated\\all", "/I", "layout", target])
p = subprocess.run(cmd, cwd=os.getcwd(), capture_output=True, text=True,
                   encoding="utf-8", errors="replace", env=env)
text = (p.stdout or "") + "\n" + (p.stderr or "")
print("rc=%d" % p.returncode)
errs = [l for l in text.splitlines() if "error" in l.lower()]
print("error lines: %d" % len(errs))
for l in errs[:25]:
    print("  " + l.strip()[:220])
