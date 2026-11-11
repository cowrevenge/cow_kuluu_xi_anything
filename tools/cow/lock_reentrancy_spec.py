"""Spec: the harness lock must be re-entrant for a descendant and still exclusionary for everyone else.

`cowdiff.harness_lock()` guards one compile/link at a time in build\\all64. Tonight it deadlocked a real run:
a driver held it and then spawned `lift.py --apply`, which takes the same lock, while the audit's row workers
queued behind both (its `done` froze at 7385 and resumed the moment the driver was killed). The fix is a
pid token inherited by children - and a fix like that needs BOTH directions proved, because each one fails
silently in a different way:

  * if re-entrancy does not work, nested runs hang (what just happened);
  * if it is too generous, two harnesses compile at once and a race gets booked as a unit's FAIL.

So three checks, all bounded in time:
  T1  a child of the holder acquires immediately, and does NOT delete the parent's lock when it leaves;
  T2  a stranger with no token still blocks;
  T3  a stranger carrying a FORGED token (a pid that is not the on-disk owner) still blocks.

T2/T3 pass by the child being *unable to report within the window* - a child that prints anything means it
got in. A can-acquire tripwire (T1) is what makes that zero mean something.

  python tools/cow/lock_reentrancy_spec.py
"""
import os
import subprocess
import sys
import time

HERE = os.path.dirname(os.path.abspath(__file__))
# tools/cow -> tools -> repo root. The one-dir version of this made LOCKDIR point at
# <repo>\tools\build\.build.lock, a path that can never exist: the holder check would have "passed", and
# worse, T2/T3 would have reported "the stranger blocked" for a directory that was never there. A predicate
# whose target cannot exist agrees with everything.
ROOT = os.path.dirname(os.path.dirname(HERE))
sys.path.insert(0, HERE)
import cowdiff                                        # noqa: E402

CHILD = r'''
import os, sys, time
sys.path.insert(0, sys.argv[1])
import cowdiff
t0 = time.time()
try:
    with cowdiff.harness_lock(timeout=int(sys.argv[3])):
        print("ACQUIRED %.2f" % (time.time() - t0))
except SystemExit as e:
    print("REFUSED %s" % str(e)[:60])
'''

LOCKDIR = os.path.join(cowdiff.ROOT, "build", ".build.lock")
# not recomputed here: the spec once pointed at <repo>\tools\build\.build.lock because it re-derived the
# root from its own location. A test must judge the path the code actually uses, not its own guess at it.


def child(env_extra, wait=25, timeout="900", inherit=False):
    """Run a would-be acquirer in a child process.

    `timeout` is the child's OWN harness_lock timeout, and it matters: the takeover rule is
    `dead OR dir-mtime older than timeout/2`, so a child with timeout=60 declared a live parent stale after
    30 seconds and STOLE the lock - which is a genuine hazard in the pre-existing code (a short-timeout
    waiter can rob a long-running holder) and the reason the stranger tests here must use a long timeout:
    otherwise the test proves nothing except that the stale rule fires.

    `inherit` keeps the holder's token. The first version popped it for every child, so T1 - the whole point
    of the fix - was tested as a stranger and reported 'the deadlock is still live'.
    """
    env = dict(os.environ)
    if not inherit:
        env.pop(cowdiff.LOCK_TOKEN_ENV, None)
    env.update(env_extra or {})
    p = subprocess.Popen([sys.executable, "-c", CHILD, HERE, "", timeout],
                         cwd=ROOT, stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                         text=True, env=env)
    try:
        out, _ = p.communicate(timeout=wait)
        return (out or "").strip()
    except subprocess.TimeoutExpired:
        p.kill()
        p.wait()
        return ""                                   # never reported: it is still waiting on the lock


def main():
    fails = []
    if os.path.isdir(LOCKDIR):
        owner = os.path.join(LOCKDIR, "owner.txt")
        pid = None
        try:
            import re
            with open(owner, encoding="utf-8", errors="replace") as fh:
                pid = int(re.search(r"pid=(\d+)", fh.read()).group(1))
        except Exception:                                # noqa: BLE001
            pass
        if pid and cowdiff._pid_alive(pid):
            sys.exit("REFUSING: a live run (pid %d) already holds the build lock - this spec must own the"
                     " lock to test it. Wait for the audit to land." % pid)
        import shutil
        shutil.rmtree(LOCKDIR, ignore_errors=True)

    with cowdiff.harness_lock(timeout=120) as _lk:
        # printed, not asserted blind: the first failure said "we did not take the lock" and the only way to
        # know why is to see WHICH lock object came back and what the token was at that moment
        print("    (acquired: %s, is_dir=%s, holder=%s, token=%r, dir=%s, LOCKDIR=%s)"
              % (type(_lk).__name__, getattr(_lk, "is_dir", None), getattr(_lk, "holder", None),
                 os.environ.get(cowdiff.LOCK_TOKEN_ENV), os.path.isdir(LOCKDIR), LOCKDIR))
        assert os.path.isdir(LOCKDIR), \
            "we did not actually take the lock (got %s, token=%r)" % (
                type(_lk).__name__, os.environ.get(cowdiff.LOCK_TOKEN_ENV))
        assert os.environ.get(cowdiff.LOCK_TOKEN_ENV) == str(os.getpid()), \
            "the holder did not publish its token - children would queue behind us"

        # ---- T1: a descendant gets in, fast, and does not destroy our lock
        out = child({}, wait=15, inherit=True)
        got = out.startswith("ACQUIRED")
        secs = float(out.split()[1]) if got else None
        print("T1 nested child : %s%s" % (out or "(never reported - BLOCKED)",
                                          "  (%.1fs)" % secs if got else ""))
        if not got or secs > 5:
            fails.append("T1: a child of the holder did not acquire immediately (%r) - the nested-run"
                         " deadlock is still live" % out)
        if not os.path.isdir(LOCKDIR):
            fails.append("T1: the nested child RELEASED the lock it did not own - the holder's lock is gone")
        else:
            with open(os.path.join(LOCKDIR, "owner.txt"), encoding="utf-8") as fh:
                if str(os.getpid()) not in fh.read():
                    fails.append("T1: the lock directory no longer names us as owner")

        # ---- T2: no token, no way in (a long child timeout so the stale-owner rule cannot fire in the
        # window and let the child win for the wrong reason)
        out = child({}, wait=20)
        print("T2 no token     : %s" % (out or "(still waiting after 20s - blocked, as it must)"))
        if out.startswith("ACQUIRED"):
            fails.append("T2: a stranger with no token got in (%s) - mutual exclusion is gone, two harnesses"
                         " can compile into build\\all64 at once" % out)

        # ---- T3: a forged token naming a live pid that is NOT the owner
        forged = str(os.getppid())
        out = child({cowdiff.LOCK_TOKEN_ENV: forged}, wait=20)
        print("T3 forged token : %s (forged pid %s, owner is %d)"
              % (out or "(still waiting after 20s - blocked, as it must)", forged, os.getpid()))
        if out.startswith("ACQUIRED"):
            fails.append("T3: a forged token (live pid, not the on-disk owner) granted a free pass - the"
                         " token is trusted without checking who really holds the lock")

    if os.path.isdir(LOCKDIR):
        fails.append("the holder did not release the lock on exit")
    if cowdiff.LOCK_TOKEN_ENV in os.environ:
        fails.append("the holder left its token in the environment - a later sibling would inherit a"
                     " free pass past the lock")

    print("\n" + ("FAILURES:\n  " + "\n  ".join(fails) if fails else
                  "PASS: descendants get in, strangers do not, and the lock survives its children."))
    return 1 if fails else 0


if __name__ == "__main__":
    sys.exit(main())
