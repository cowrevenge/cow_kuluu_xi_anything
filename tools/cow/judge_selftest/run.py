"""The judge, judged: build tools/cow/cowdiff.c against a miniature mock world and check every verdict.

    python tools/cow/judge_selftest/run.py

Nothing here is the game. mock.c is a fake image, a fake DllMain that builds a VC6-style atexit table on the
REAL guest heap (runtime/portable/gwin.c), four heap imports, and 29 unit pairs, each written to exercise
one decision of the harness: a unit that is right, the same unit with one deliberate bug, a void function
that leaves scratch in eax, a store into the caller's frame, a fresh heap block filled wrongly, a branch
behind a magic constant, a float unit that ignores precision control, and so on. Each row has ONE correct
verdict under each mode, and this script fails if the harness says anything else.

Three modes are run:
    LEGACY   no new flags: the comparison the harness always made (plus the world fix)
    V2       --grade contract --stategen 2 --clean 100: judge v2
    SELF     V2 with --self: the original against itself - every row must pass, whatever its side B is

On Windows this builds with the same MSVC environment tools/build.py uses. On Linux (how it was developed)
it builds with gcc, through a shim that stands in for __try/__except.
"""
import os
import re
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
OUT = os.path.join(ROOT, "build", "judge_selftest")

# row -> what the harness must say. "PASS" / "PASS contract" (passes only because of the contract) /
# "FAIL <reason>". A trailing "!cov" means the PASS must NOT have full coverage.
V2 = {
    "stub": "PASS",                    # the 136-unit cluster's shape: atexit grows a full table
    "stubstrict": "PASS",              # ... and it passes even with nothing ignored, once the world is restored
    "bump": "PASS contract",           # void function: scratch in eax/edx and a dead frame are not compared
    "bumpstrict": "FAIL eax",          # the same pair with no contract: every bit compared
    "bumpwrong": "FAIL memory",        # a real bug is still a failure under the contract
    "bumpguard": "PASS contract",      # ours does not fault where the original does: counted (asym), not failed
    "bumpself": "PASS",
    "make": "PASS contract",           # a fresh heap block filled in a different ORDER: same contents
    "makewrong": "FAIL out-of-region write",   # ... filled with a wrong VALUE (the legacy judge passes this)
    "makeself": "PASS",                # an allocating function against itself: needs the heap restored
    "bfaults": "FAIL fault",           # ours faults where the original does not
    "pick": "PASS !cov",               # a site reached only on the way to a fault is NOT covered
    "framecaller": "FAIL memory",      # a write into the caller's frame
    "frameownarg": "PASS contract",    # a write into its own argument slot, declared (stack_args=1)
    "frameownarg0": "FAIL memory",     # the same write, not declared
    "framedead": "PASS contract",      # a write below the returned esp: dead
    "uninit": "FAIL eax",              # reads an uninitialised local (the legacy zeroed stack hides this)
    "freeargs": "PASS contract",       # junk above an import's real arguments is not an argument
    "magic": "PASS",                   # a branch behind `cmp eax, 0x1f4`: reached through the dictionary
    "magicwrong": "FAIL eax",          # a bug that exists only behind that branch
    "magicself": "PASS",
    "magicmem": "PASS",                # the constant sits in a 16-bit field of an object
    "fields": "PASS",                  # two fields of one object decide the branch
    "fieldswrong": "FAIL eax",         # a bug that exists only when both match
    "copyfwd": "PASS",                 # a forward copy: the direction flag is clear on entry, as the ABI says
    "fmulfr": "PASS",                  # float arithmetic that honours precision control (fr)
    "fmulplain": "FAIL memory",        # ... and one that is right only in 53-bit mode
    "nanst0": "PASS contract",         # two NaNs in st(0) are the same answer
    "notnanst0": "FAIL st0",
}
LEGACY = {
    "stub": "PASS", "stubstrict": "PASS", "bumpself": "PASS", "makeself": "PASS",
    "bump": "FAIL eax", "bumpstrict": "FAIL eax", "bumpwrong": "FAIL eax",
    "make": "FAIL out-of-region write",
    "makewrong": "PASS",               # THE HOLE: a wrong value in a fresh allocation is invisible to it
    "uninit": "PASS",                  # THE HOLE: the zeroed stack makes an uninitialised read look right
    "magicwrong": "PASS !cov",         # THE HOLE: the buggy branch is never reached, and it is booked anyway
    "framedead": "FAIL memory", "freeargs": "FAIL memory", "frameownarg": "FAIL memory",
    "copyfwd": "FAIL memory",          # a correct forward copy fails: half its states set the direction flag
    "fmulplain": "PASS",               # THE HOLE: precision control is never exercised
}
FLAGS_V2 = ["--grade", "contract", "--stategen", "2", "--clean", "100", "--states", "2000", "--args", "8"]

PASS_RE = re.compile(r"^COWDIFF PASS (\w+) states=(\d+) blocks=(\d+)/(\d+).*?grade=(\w+)")
FAIL_RE = re.compile(r"^COWDIFF FAIL (\w+) .*?first at state \d+ \(([^)]*)\)")


def build():
    os.makedirs(OUT, exist_ok=True)
    srcs = [os.path.join(HERE, "mock.c"), os.path.join(ROOT, "runtime", "portable", "gwin.c")]
    incs = [HERE, os.path.join(ROOT, "runtime"), os.path.join(ROOT, "runtime", "portable"),
            os.path.join(ROOT, "tools", "cow")]
    if os.name == "nt":
        sys.path.insert(0, os.path.join(ROOT, "tools"))
        import build as upstream
        env = upstream.msvc_env("x64")
        exe = os.path.join(OUT, "judge_selftest.exe")
        cmd = (["cl", "/nologo", "/O1", "/MT", "/W3", "/std:c11", "/DRT_GUEST_WINDOW", "/DCOW_TICK_MEMORY"]
               + sum([["/I", d] for d in incs], [])
               + [os.path.join(ROOT, "tools", "cow", "cowdiff.c"), os.path.join(ROOT, "runtime", "portable", "plat_win.c")]
               + srcs + ["/Fo%s\\" % OUT, "/Fe:%s" % exe, "/link", "synchronization.lib"])
    else:
        env = None
        exe = os.path.join(OUT, "judge_selftest")
        shim = os.path.join(OUT, "cowdiff_shim.c")
        subprocess.check_call([sys.executable, os.path.join(HERE, "mkshim.py"),
                               os.path.join(ROOT, "tools", "cow", "cowdiff.c"), shim])
        cmd = (["gcc", "-std=gnu11", "-O1", "-w", "-DRT_GUEST_WINDOW", "-DCOW_TICK_MEMORY", "-D_strdup=strdup",
                "-D_snprintf=snprintf"] + sum([["-I", d] for d in incs], [])
               + [shim, os.path.join(ROOT, "runtime", "portable", "plat_posix.c")] + srcs
               + ["-lpthread", "-lm", "-o", exe])
    p = subprocess.run(cmd, cwd=ROOT, env=env, capture_output=True, text=True, errors="replace")
    if p.returncode != 0:
        print((p.stdout or "") + (p.stderr or ""))
        print("JUDGE SELFTEST: THE MOCK DID NOT BUILD (this is the test rig, not the judge - see docs/cow/SYSTEM2.md)")
        sys.exit(3)
    return exe


def run(exe, flags):
    p = subprocess.run([exe, "x", "y", "--table", "--seed", "12345"] + flags, cwd=ROOT, capture_output=True,
                       text=True, errors="replace")
    got = {}
    for line in (p.stdout or "").splitlines():
        m = PASS_RE.match(line)
        if m:
            full = m.group(3) == m.group(4)
            got[m.group(1)] = "PASS" + (" contract" if m.group(5) == "contract" else "") + ("" if full else " !cov")
            continue
        m = FAIL_RE.match(line)
        if m:
            got[m.group(1)] = "FAIL " + m.group(2)
    return got


def check(name, got, want, loose_contract=False):
    bad = 0
    for row, w in sorted(want.items()):
        g = got.get(row, "(no verdict)")
        g_cmp = g.replace(" contract", "") if loose_contract or " contract" not in w else g
        w_cmp = w if " contract" in w and not loose_contract else w.replace(" contract", "")
        if g_cmp != w_cmp:
            bad += 1
            print("  %-7s %-13s expected %-28s got %s" % (name, row, w, g))
    print("%-7s %d row(s) checked, %d wrong" % (name, len(want), bad))
    return bad


def main():
    exe = build()
    bad = 0
    bad += check("LEGACY", run(exe, ["--states", "300", "--args", "4"]), LEGACY, loose_contract=True)
    v2 = run(exe, FLAGS_V2)
    bad += check("V2", v2, V2)
    self_run = run(exe, FLAGS_V2 + ["--self"])
    want_self = {r: ("PASS !cov" if r == "pick" else "PASS") for r in V2}
    bad += check("SELF", self_run, want_self, loose_contract=True)
    again = run(exe, FLAGS_V2)
    if again != v2:
        bad += 1
        print("  the same run twice gave different verdicts: the harness is not deterministic")
    one = run(exe, FLAGS_V2 + ["--rows", "magicmem"])
    if one.get("magicmem") != v2.get("magicmem"):
        bad += 1
        print("  a row judged alone differs from the same row in the table: state leaks between rows")
    print("JUDGE SELFTEST %s" % ("FAILED" if bad else "OK"))
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
