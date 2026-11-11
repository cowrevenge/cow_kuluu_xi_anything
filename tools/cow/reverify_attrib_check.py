"""Check reverify's head-move attribution: material vs cosmetic, and net-diff vs range.

Why a scratch repo instead of hand-built lists: `moved_files` / `touched_in_range` are thin wrappers
over two different git invocations, and a wrapper tested on literal strings only proves the string
logic, not that the git call is the right one (wrong revision syntax fails silently to empty output,
which reads as "nothing moved" - the friendliest possible failure for an auditor that is supposed to
refuse when it cannot see).

So three layers:
  1. literal classification (must answer BOTH ways or the classifier proves nothing);
  2. a scratch repo where a MATERIAL file is edited and then reverted, which is the case a tree-to-tree
     diff is structurally unable to see - if `touched_in_range` does not catch it, the auditor would
     certify a sweep that judged two different trees;
  3. a cosmetic commit (docs only), which must NOT void a run.
"""
import io
import os
import shutil
import subprocess
import sys
import tempfile

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import reverify as RV  # noqa: E402

fails = []


def eq(what, got, want):
    if got != want:
        fails.append(what)
        print("  FAIL %s\n       got  %r\n       want %r" % (what, got, want))
    else:
        print("  ok   %s" % what)


def gt(what, got, minimum):
    if not got:
        fails.append(what)
        print("  FAIL %s -> %r (nothing; a classifier that never fires is not a classifier)"
              % (what, got))
    else:
        print("  ok   %s -> %r" % (what, got))


print("=" * 74)
print("1. classification answers both directions")
print("=" * 74)
eq("docs/tools are not material",
   RV.material_moves(["docs/cow/STATUS.md", "cow/wip/x.md", "README.md",
                      "tools/cow/reverify.py", "tools/cow/ghidra/lift_frame_predicates.py"]), [])
gt("a lifted unit is material", RV.material_moves(["src/lifted/cow_10003070.c"]), ["x"])
gt("the harness's own comparison is material", RV.material_moves(["tools/cow/cowdiff.c"]), ["x"])
gt("runtime wrap table is material", RV.material_moves(["runtime/cow/cow_wraps.c"]), ["x"])
gt("wraps.json is material", RV.material_moves(["cow/wraps.json"]), ["x"])

print()
print("=" * 74)
print("2. a scratch repo: the revert a tree-diff cannot see")
print("=" * 74)
tmp = tempfile.mkdtemp(prefix="rev_attrib_check_")
real_root = RV.ROOT
try:
    def git(*a):
        return subprocess.run(["git"] + list(a), cwd=tmp, capture_output=True, text=True,
                              errors="replace")

    def run(*a):
        p = git(*a)
        assert p.returncode == 0, "git %s: %s%s" % (" ".join(a), p.stdout, p.stderr)

    def write(path, text):
        d = os.path.join(tmp, os.path.dirname(path))
        if d:
            os.makedirs(d, exist_ok=True)
        with io.open(os.path.join(tmp, path), "w", encoding="utf-8", newline="\n") as fh:
            fh.write(text)

    run("init", "-q")
    run("config", "user.email", "check@example.invalid")
    run("config", "user.name", "reverify attrib check")
    write("README.md", "base\n")
    write("src/lifted/cow_00000001.c", "void f(void){}\n")
    run("add", "-A")
    run("commit", "-qm", "base")
    base = git("rev-parse", "HEAD").stdout.strip()

    write("src/lifted/cow_00000001.c", "void f(void){ /* changed mid-run */ }\n")
    run("add", "-A")
    run("commit", "-qm", "material edit")
    write("docs/cow/STATUS.md", "note\n")
    run("add", "-A")
    run("commit", "-qm", "cosmetic edit")
    write("src/lifted/cow_00000001.c", "void f(void){}\n")     # REVERTED
    run("add", "-A")
    run("commit", "-qm", "revert")
    end = git("rev-parse", "HEAD").stdout.strip()

    RV.ROOT = tmp
    net = RV.moved_files(base, end)
    rng = RV.touched_in_range(base, end)
    eq("net diff misses the reverted material file",
       [p for p in net if p.endswith(".c")], [])
    gt("the range sees it anyway", RV.material_moves(rng), ["x"])
    eq("and it names the right path",
       [p for p in RV.material_moves(rng) if p.endswith(".c")],
       ["src/lifted/cow_00000001.c"])

    # and the cosmetic-only case: a second scratch repo with docs moves only
    write("docs/cow/LOOP.md", "more prose\n")
    run("add", "-A")
    run("commit", "-qm", "docs only")
    end2 = git("rev-parse", "HEAD").stdout.strip()
    eq("a docs-only range classifies as nothing material", RV.material_moves(
        RV.touched_in_range(end, end2)), [])
    eq("same commit -> no paths at all", RV.moved_files(end2, end2), [])
    eq("missing refs -> empty, not a crash", RV.touched_in_range("", end2), [])
finally:
    RV.ROOT = real_root
    shutil.rmtree(tmp, ignore_errors=True)

print()
if fails:
    print("RESULT: %d FAILURE(S)" % len(fails))
    for f in fails:
        print("  - %s" % f)
    sys.exit(1)
print("RESULT: attribution classifier is capable of both answers and catches the mid-run revert")
