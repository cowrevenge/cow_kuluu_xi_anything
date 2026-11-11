"""Check the re-lift runner's GUARDS by making them fire - without touching the working tree.

`lift_relift_run.py --apply` rewrites src/lifted and proves a batch, so its guards are the load-bearing
part, and a guard that cannot fire is decoration (the dead-knob lesson, and the esi predicate that
returned a clean zero from a filter that could not match). Each guard is driven to say no here.

Deliberately IN-PROCESS with the git shim replaced, rather than making a real temporary edit under
src/lifted to provoke the dirty-tree guard: the population audit is reading those very files to judge
units right now, and a check that briefly dirties a judged input would contaminate a verdict to test a
guard. Testing must not cost what it tests.
"""
import io
import os
import sys
import tempfile
import types

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import lift_relift_run as RR  # noqa: E402

fails = []


def refuses(name, fn, needle):
    try:
        fn()
    except SystemExit as e:
        msg = str(e)
        ok = needle in msg
        print("  %s %-44s %s" % ("ok  " if ok else "FAIL", name,
                                 ("matched %r" % needle) if ok else "-> %s" % msg[:120]))
        if not ok:
            fails.append(name)
        return
    except Exception as e:                                    # noqa: BLE001
        print("  FAIL %-44s raised %s: %s" % (name, type(e).__name__, e))
        fails.append(name)
        return
    print("  FAIL %-44s did not refuse anything" % name)
    fails.append(name)


tmp = tempfile.mkdtemp(prefix="relift_guards_")


def wlist(name, text):
    p = os.path.join(tmp, name)
    with io.open(p, "w", encoding="utf-8", newline="\n") as fh:
        fh.write(text)
    return p


print("=" * 76)
print("the guards must be able to say no")
print("=" * 76)

good = wlist("good.txt", "10003070\n0x1006ce70\n")
refuses("empty unit list", lambda: RR.read_list(wlist("empty.txt", "")), "REFUSING")
refuses("malformed entry", lambda: RR.read_list(wlist("bad.txt", "zzzzzzzz\n")), "not 8 hex digits")
print("  ok   a good list parses (0x prefix and case tolerated): %r"
      % (RR.read_list(good) == ["10003070", "1006ce70"],))
if RR.read_list(good) != ["10003070", "1006ce70"]:
    fails.append("good list did not parse")

for k in list(os.environ):
    if k.startswith("COW_"):
        del os.environ[k]


def stray_env():
    os.environ["COW_MODEL_EPILOGUE_LIFO"] = "1"
    try:
        RR.guard_env(["COW_LIFT_EPILOGUE_MATCH_PUSHES"])
    finally:
        for k in ("COW_MODEL_EPILOGUE_LIFO", "COW_LIFT_EPILOGUE_MATCH_PUSHES"):
            os.environ.pop(k, None)


refuses("inherited knob not in --knobs", stray_env, "set in your shell and not in --knobs")


class _P:
    def __init__(self, stdout="", rc=0):
        self.stdout, self.stderr, self.returncode = stdout, "", rc


def _is(cmd, *want):
    """PREFIX match: the runner calls sh("git", "status", "--porcelain"), so a comparison that omits
    the flag never matches, and the dirty-tree guard silently saw a clean tree - the exact shape of
    failure this file exists to catch, reproduced in the checker itself."""
    return list(cmd)[:len(want)] == list(want)


def dirty_tree():
    def fake(*cmd, **kw):
        if _is(cmd, "git", "status"):
            return _P(" M src/lifted/cow_10003070.c\n M README.md\n")
        if _is(cmd, "git", "rev-parse", "HEAD"):
            return _P("abc123def456\n")
        return _P("")
    real = RR.sh
    RR.sh = fake
    try:
        RR.guard_clean_tree()
    finally:
        RR.sh = real


refuses("dirty src/ refuses the run", dirty_tree, "judged directories are dirty")


def bookkeeping_only():
    def fake(*cmd, **kw):
        if _is(cmd, "git", "status"):
            return _P(" M README.md\n M docs/cow/STATUS.md\n M cow/wip/notes.md\n")
        if _is(cmd, "git", "rev-parse", "HEAD"):
            return _P("abc123def456\n")
        return _P("")
    real = RR.sh
    RR.sh = fake
    try:
        return RR.guard_clean_tree()
    finally:
        RR.sh = real


head = None
try:
    head = bookkeeping_only()
    print("  ok   bookkeeping-only dirt does NOT block the plan (head=%s)" % head)
except SystemExit as e:
    print("  FAIL bookkeeping dirt blocked the plan: %s" % str(e)[:120])
    fails.append("bookkeeping-only dirt must not block")

# "plan mode writes nothing" is a claim about the path the plan was ASKED to write. It used to be
# asserted as `not os.path.exists(cow/wip/relift-proof.json)`, which went red the day the previous
# re-lift's record was committed: the checker was demanding the absence of a piece of evidence.
# The scratch path is removed first so a leftover from an interrupted run cannot pass as "nothing
# written", and the sibling `.run.json` is checked too because that is the file the runner writes
# alongside the record.
SCRATCH_OUT = os.path.join(RR.ROOT, "build", "scratch", "planmode-check", "relift-proof.json")
for p in (SCRATCH_OUT, SCRATCH_OUT + ".run.json"):
    if os.path.exists(p):
        os.remove(p)
_argv = sys.argv[:]
sys.argv = [sys.argv[0], "--list", good, "--out", SCRATCH_OUT, "--controls", os.path.join(
    RR.ROOT, "build", "scratch", "planmode-check", "no-such-controls.txt")]
try:
    RR.main()
except SystemExit as e:
    if e.code not in (0, None):
        print("  FAIL plan mode exited %r" % e.code)
        fails.append("plan mode exit")
finally:
    sys.argv = _argv
made = [p for p in (SCRATCH_OUT, SCRATCH_OUT + ".run.json") if os.path.exists(p)]
if made:
    print("  FAIL plan mode wrote %s - the plan is not read-only" % made)
    fails.append("plan mode wrote files")
else:
    print("  ok   plan mode wrote nothing to the path it was given (and did not touch the committed"
          " record)")

print()
if fails:
    print("RESULT: %d guard(s) failed to fire: %s" % (len(fails), fails))
    sys.exit(1)
print("RESULT: every guard fires, bookkeeping dirt does not, and the plan writes nothing")
