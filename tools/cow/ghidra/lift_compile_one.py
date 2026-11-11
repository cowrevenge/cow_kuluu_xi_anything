"""Compile ONE lifted file with the syntax gate's own flags and print cl's full output.

lift.py's syntax_gate() reports an error CODE and a message but not the line, and "you cannot dereference an
operand of type 'uint32_t'" without a line number is a diagnosis you cannot act on - it took a direct cl run
to learn the error was on line 28 and belonged to the Rewriter, not to the knob under test.

  python tools/cow/ghidra/lift_compile_one.py build/scratch/parambind-gate/on/rejected/cow_10062e20.c

The file's own directory and its parent both go on the include path, because a --gate-dir run keeps its
generated layout headers beside the bodies and moves rejects into a rejected/ subdirectory.
"""
import os
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
for _p in (os.path.join(ROOT, "tools"), os.path.join(ROOT, "tools", "cow"), HERE):
    if _p not in sys.path:
        sys.path.insert(0, _p)
import build as upstream                              # noqa: E402  the MSVC environment, same as the gate


def main():
    if len(sys.argv) < 2:
        sys.exit("usage: lift_compile_one.py <path to cow_<hex>.c>")
    target = sys.argv[1]
    if not os.path.isabs(target):
        target = os.path.join(ROOT, target)
    if not os.path.isfile(target):
        sys.exit("no such file: %s" % target)
    d = os.path.dirname(target)
    env = upstream.msvc_env("x64")
    cmd = (["cl", "/c", "/Zs", "/nologo", "/O1", "/MT", "/W3", "/std:c11", "/bigobj", "/DRT_GUEST_WINDOW",
            "/I", "runtime", "/I", "runtime\\portable", "/I", "generated", "/I", "generated\\all",
            "/I", "layout"] + sum([["/I", x] for x in (d, os.path.dirname(d))], []) + [target])
    p = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True,
                       encoding="utf-8", errors="replace", env=env)
    print("rc=%d   %s" % (p.returncode, os.path.relpath(target, ROOT)))
    for ln in ((p.stdout or "") + "\n" + (p.stderr or "")).splitlines():
        s = ln.strip()
        if s:
            print("  " + s[:220])
    return p.returncode


if __name__ == "__main__":
    sys.exit(main())
