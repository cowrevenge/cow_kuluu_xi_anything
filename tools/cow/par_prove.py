"""Judge everything that has no verdict yet, on many cores at once.

    python "$HOME\\Downloads\\CowPar\\par_prove.py"

The prover (tools/cow/ghidra/lift_proof.py) judges one chunk at a time on one core. It already supports
several copies side by side, each in its own build directory (COW_LIFT_BUILD / COW_LIFT_TAG), sharing the
compiled image and merging into the one ledger under a lock. This script is only the fan-out:

    1. ends a running single-core baseline (its verdicts are on disk; nothing is lost);
    2. lists every unit in src/lifted that has no verdict of the CURRENT judge for the file as it is now;
    3. deals them out to N provers and runs them together, 40 units to a chunk, so a unit that kills its
       chunk costs 39 neighbours a retry and not 399;
    4. runs what still has no answer once more, 6 to a chunk;
    5. publishes (tools/cow/conveyor.py publish: one branch, fast-forward only).

No judge file, no unit and no tool is changed. It prints a line a minute while it runs.

    --repo PATH      the repository (default: the current directory if it is the repository, else
                     D:\\Projects\\ffxi_disassembly\\Cow_kuluu_xi_anything)
    --workers N      provers at once (default: one per four logical processors, so 8 on 32 threads)
    --no-publish     judge only
"""
import argparse
import hashlib
import json
import os
import subprocess
import sys
import time

DEFAULT_REPO = r"D:\Projects\ffxi_disassembly\Cow_kuluu_xi_anything"
LEDGER = "cow/lift_proof_all.json"
# no usable verdict came back. A timeout counts: under a heavy run it is the machine's load talking, not the
# unit (24 provers at once turned 129 timeouts into 1,334), so it is judged again rather than kept.
UNANSWERED = ("error", "none", "timeout")
PY = sys.executable
RUN_STAMP = time.strftime("%m%d_%H%M%S")

if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")


def run(argv, cwd, timeout=3600):
    try:
        p = subprocess.run(argv, cwd=cwd, capture_output=True, text=True, encoding="utf-8", errors="replace",
                           timeout=timeout)
        return p.returncode, ((p.stdout or "") + (p.stderr or "")).splitlines()
    except (OSError, subprocess.TimeoutExpired) as exc:
        return 99, ["%s: %s" % (type(exc).__name__, exc)]


def processes():
    out = []
    if os.name == "nt":
        cmd = ("Get-CimInstance Win32_Process -Filter 'Name like ''python%''' | "
               "Select-Object ProcessId, CommandLine | ConvertTo-Json -Compress")
        rc, lines = run(["powershell", "-NoProfile", "-NonInteractive", "-Command", cmd], None, 120)
        text = "\n".join(ln for ln in lines if ln.strip()).strip()
        if rc:
            return None
        try:
            data = json.loads(text) if text else []
        except ValueError:
            return None
        for d in ([data] if isinstance(data, dict) else data):
            out.append((int(d.get("ProcessId") or 0), str(d.get("CommandLine") or "")))
        return out
    rc, lines = run(["ps", "-eo", "pid=,args="], None, 60)
    if rc:
        return None
    for ln in lines:
        f = ln.strip().split(None, 1)
        if len(f) == 2 and f[0].isdigit() and os.path.basename(f[1].split()[0]).startswith("python"):
            out.append((int(f[0]), f[1]))
    return out


def kill(pid):
    if os.name == "nt":
        run(["taskkill", "/PID", str(pid), "/T", "/F"], None, 60)
    else:
        try:
            os.kill(pid, 9)
        except OSError:
            pass


def file_sha(path):
    with open(path, "rb") as fh:
        return hashlib.sha1(fh.read().replace(b"\r\n", b"\n")).hexdigest()


def read_ledger(repo):
    for _try in range(20):
        try:
            with open(os.path.join(repo, LEDGER), encoding="utf-8") as fh:
                return json.load(fh)
        except (OSError, ValueError):
            time.sleep(0.5)          # a prover is writing it right now
    return {}


def units(repo):
    d = os.path.join(repo, "src", "lifted")
    out = {}
    for f in sorted(os.listdir(d)):
        if f.startswith("cow_") and f.endswith(".c") and len(f) == 14:
            out[f[4:12]] = file_sha(os.path.join(d, f))
    return out


def answered(rec, sha, jid):
    return bool(rec) and rec.get("judge") == jid and rec.get("src") == sha and (rec.get("tier") or "none") not in UNANSWERED


def tiers(led, shas, jid, among, since=None):
    """tier -> units. With `since` (the records as they were when the pass started), a unit whose record
    has not changed since then is still "waiting": an old timeout is not this pass's answer."""
    c = {}
    for e in among:
        rec = led.get(e) or {}
        t = (rec.get("tier") or "none") if (rec.get("judge") == jid and rec.get("src") == shas[e]) else "waiting"
        if since is not None and rec == since.get(e):
            t = "waiting"
        c[t] = c.get(t, 0) + 1
    return c


def P_copy(rec):
    return json.loads(json.dumps(rec)) if rec is not None else None


def read_outs(outs):
    """the records of a scratch-tree run: one result file per prover"""
    led = {}
    for o in outs:
        for _try in range(10):
            try:
                with open(o, encoding="utf-8") as fh:
                    led.update(json.load(fh))
                break
            except FileNotFoundError:
                break
            except (OSError, ValueError):
                time.sleep(0.3)
    return led


_FOLDED = {}     # journal path -> bytes already folded into the ledger


def _ledger_write(repo, changes):
    """The ledger's ONE writer. A reader (the panel, git staging) can hold the file for a moment and Windows
    then refuses the rename: wait it out, it always lets go."""
    if not changes:
        return
    if os.path.join(repo, "tools", "cow") not in sys.path:
        sys.path.insert(0, os.path.join(repo, "tools", "cow"))
    import judge2 as J
    t0 = time.time()
    while True:
        try:
            J.update_ledger(os.path.join(repo, LEDGER), changes)
            return
        except PermissionError:
            if time.time() - t0 > 300:
                raise
            time.sleep(0.2)


def fold_journals(repo, paths, final=False):
    """Fold what the provers appended since the last fold into the ledger. A torn last line (a prover killed
    mid-write) is left for the next fold, or dropped at the end. Returns the number of verdicts folded."""
    changes = {}
    for p in paths:
        try:
            with open(p, "rb") as fh:
                fh.seek(_FOLDED.get(p, 0))
                data = fh.read()
        except OSError:
            continue
        end = data.rfind(b"\n") + 1
        for ln in data[:end].splitlines():
            try:
                d = json.loads(ln.decode("utf-8", "replace"))
                changes[d["entry"]] = d["rec"]
            except (ValueError, KeyError):
                pass
        _FOLDED[p] = _FOLDED.get(p, 0) + end
    _ledger_write(repo, changes)
    if final:
        for p in paths:
            try:
                os.replace(p, p + ".merged")
            except OSError:
                pass
    return len(changes)


def fold_leftovers(repo):
    """Journals a stopped or crashed run never folded: their verdicts are real work, fold them first."""
    work = os.path.join(repo, "build", "lift_par")
    try:
        left = [os.path.join(work, f) for f in os.listdir(work) if f.endswith(".jsonl")]
    except OSError:
        return 0
    n = fold_journals(repo, left, final=True) if left else 0
    if n:
        print("folded %d verdict(s) a stopped run left in its journals" % n)
    return n


def fan_out(repo, todo, shas, jid, workers, chunk, name, src=None, budget=1):
    """Judge `todo` on several provers at once. src=None: the units in src/lifted, into the ledger.
    src=<dir>: the units in that scratch tree (COW_LIFT_SRC), into one result file per prover - nothing
    in the ledger is touched; the merged records are returned."""
    work = os.path.join(repo, "build", "lift_par")
    os.makedirs(work, exist_ok=True)
    # EVERY PROVER WORKS. The provers used to be ceil(units / chunk): 67 units at 12 to a chunk started 6 of 24
    # provers, and the grind sat at "0/67 judged" for 100 minutes while 18 cores waited. Now there are as many
    # provers as there are units, up to `workers`, and the chunk shrinks to what each one has.
    n = max(1, min(workers, len(todo)))
    chunk = max(1, min(chunk, (len(todo) + n - 1) // n))
    procs, outs, logs, journals = [], [], [], []
    for w in range(n):
        mine = todo[w::n]                                   # dealt out, so the slow kinds are spread
        lst = os.path.join(work, "%s_w%02d.lst" % (name, w))
        with open(lst, "w", encoding="utf-8", newline="\n") as fh:
            fh.write("\n".join(mine) + "\n")
        env = dict(os.environ)
        env.pop("COW_LIFT_SRC", None)
        out = LEDGER
        if src:
            env["COW_LIFT_SRC"] = src
            out = os.path.join("build", "lift_par", "%s_w%02d.json" % (name, w))
            if os.path.isfile(os.path.join(repo, out)):
                os.remove(os.path.join(repo, out))
        outs.append(os.path.join(repo, out))
        if not src:
            # verdicts go to this prover's own journal; the parent is the only writer of the ledger
            jp = os.path.join(work, "%s_%s_w%02d.jsonl" % (name, RUN_STAMP, w))
            env["COW_LIFT_JOURNAL"] = jp
            journals.append(jp)
        env["COW_LIFT_BUILD"] = os.path.join("build", "lift_par", "w%02d" % w)
        env["COW_LIFT_TAG"] = "p%02d" % w
        extra = []
        if budget > 1:
            # THE LAST TRY FOR A TIMEOUT: more time, fewer neighbours. A timeout is not a verdict - on Windows
            # both of the judge's budgets are wall clock (MSVC's clock() is elapsed time), so a unit that
            # ran out of time under load says nothing about the unit. The budget reaches the judge through
            # the environment (lift_proof.py only sets it when it is not set), so this changes no judge file
            # and no judge id; the chunk watchdogs are raised with it, or they would kill the chunk that is
            # sitting on exactly the slow unit this pass exists for.
            if os.path.join(repo, "tools", "cow") not in sys.path:
                sys.path.insert(0, os.path.join(repo, "tools", "cow"))
            import judge2 as J                       # the repository's own budgets
            env["COWDIFF_ROW_CPU_SECS"] = str(J.ROW_CPU_SECS * budget)
            env["COWDIFF_ROW_WALL_SECS"] = str(J.ROW_WALL_SECS * budget)
            wall = J.ROW_WALL_SECS * budget
            extra = ["--idle-secs", str(2 * wall + 30), "--solo-idle-secs", str(wall + 15),
                     "--requeue-idle-secs", str(wall + 15)]
        # one log per prover PER RUN: a later run reusing p1_w03.log is how the logs of CowV4's dead provers
        # were lost before anyone read them
        logp = os.path.join(work, "%s_%s_w%02d.log" % (name, RUN_STAMP, w))
        logs.append(logp)
        log = open(logp, "w", encoding="utf-8", errors="replace")
        prover = os.environ.get("COWPAR_PROVER") or os.path.join("tools", "cow", "ghidra", "lift_proof.py")
        procs.append((subprocess.Popen([PY, prover, "--list", lst, "--out", out, "--rerun", "--chunk", str(chunk)] + extra,
                                       cwd=repo, env=env, stdout=log, stderr=subprocess.STDOUT), log))
    print("%d provers started on %d units, %d to a chunk (their logs: build/lift_par/%s_%s_w*.log)"
          % (n, len(todo), chunk, name, RUN_STAMP), flush=True)
    t0 = last = time.time()
    told = set()
    since = None if src else {e: P_copy(read_ledger(repo).get(e)) for e in todo}
    while any(p.poll() is None for p, _l in procs):
        time.sleep(5)
        for w, (p, _l) in enumerate(procs):
            if w not in told and p.poll() is not None and (p.returncode not in (0, 1) or _crashed(logs[w])):
                told.add(w)
                print("  prover %d ENDED with exit code %s after %.0f min; the end of its log (%s):"
                      % (w, p.returncode, (time.time() - t0) / 60, logs[w]), flush=True)
                try:
                    with open(logs[w], encoding="utf-8", errors="replace") as fh:
                        for ln in fh.readlines()[-8:]:
                            print("     " + ln.rstrip()[:200])
                except OSError:
                    pass
        if time.time() - last >= 60:
            last = time.time()
            if journals:
                fold_journals(repo, journals)
            c = tiers(read_outs(outs) if src else read_ledger(repo), shas, jid, todo, since)
            done = len(todo) - c.get("waiting", 0)
            print("  %3d min  %d/%d judged  gold %d  silver %d  weak %d  fail %d  (%d provers still running)"
                  % ((last - t0) / 60, done, len(todo), c.get("gold", 0), c.get("silver", 0), c.get("weak", 0),
                     c.get("fail", 0), sum(1 for p, _l in procs if p.poll() is None)), flush=True)
    for _p, log in procs:
        log.close()
    if journals:
        fold_journals(repo, journals, final=True)
    print("that pass took %.0f minutes" % ((time.time() - t0) / 60), flush=True)
    return read_outs(outs) if src else None


def _crashed(path):
    """A prover that ended on a Python exception (exit code 1, the same as "some unit did not pass")."""
    try:
        with open(path, encoding="utf-8", errors="replace") as fh:
            return "Traceback (most recent call last)" in fh.read()[-20000:]
    except OSError:
        return False


def book_silent_crashes(repo, jid, shas, twice):
    """A row that never came back, in BOTH passes, is not a verdict waiting to happen.

    `no_row_output` means the process came back without ever reporting the row: the unit took the prover down
    with it (the ExitThread / unbounded recursion shape tools/cow/ghidra/lift_proof.py:1441 describes), so a
    third pass buys the same silence at the same price. Those rows used to be left with no tier at all, which
    `answered()` calls "no verdict", so every later step of every cycle picked the same handful up again
    (0x1031b860 and four others: five provers, nine minutes a pass). Book them the way the conveyor books its own
    silent row, `fail` with `why=crash`, under the judge and the text they were tried with, so this cycle stops
    asking; and write the list where the lifter reads it, build/lift_par/crashed.txt. It is a lifter's list, not
    a mismatch: the judge never saw the row."""
    led = read_ledger(repo)
    # "no_row_output" and "hang" are the same event seen from two places - the row never came back - and both
    # records are written WITHOUT a tier, judge or src (tools/cow/ghidra/lift_proof.py:1494 books the hang
    # case with a bare {"pass": False, "why": "hang"}). That made them fall between the two nets this module
    # has: `settled` in judge_rest matches only tier == "timeout", and this function matched only
    # "no_row_output". So a hung row was never settled and never booked, and `answered()` - which needs
    # judge, src AND a tier - called it "no verdict" for ever. Measured 2026-11-27: 0x10109180 and 0x10306a9d
    # (854 B, both hang inside a bridged callee) were picked up by step 3 of every cycle, ~135 s of prover
    # each per pass and two passes apiece, and they sit in front of step 6, which is what re-lifts the whole
    # not-gold fleet. Booking them is also what KEEPS them re-askable: this write carries the current judge
    # and src, so the day the lifter emits a different text for one of them, answered() is false again and it
    # is judged like new work - which the settled-by-why alternative would not have done.
    deaf = [e for e in twice if (led.get(e) or {}).get("why") in ("no_row_output", "hang")]
    if not deaf:
        return []
    _ledger_write(repo, {e: {"pass": False, "tier": "fail", "verdict": "fail", "why": "crash",
                             "judge": jid, "src": shas[e],
                             "detail": "the chunk process returned without ever reporting this row, in both"
                                       " passes (p1 and p2): it takes the prover down with it"}
                         for e in deaf})
    d = os.path.join(repo, "build", "lift_par")
    os.makedirs(d, exist_ok=True)
    with open(os.path.join(d, "crashed.txt"), "w", encoding="utf-8", newline="\n") as fh:
        fh.write("\n".join(sorted(deaf)) + "\n")
    print("%d unit(s) answered in neither pass (no row, or a row that spins): booked crash for this cycle,"
          " listed for the lifter in build/lift_par/crashed.txt: %s" % (len(deaf), " ".join(sorted(deaf))), flush=True)
    return sorted(deaf)


def judge_rest(repo, jid, workers):
    """Everything in src/lifted that has no verdict of this judge: 40 to a chunk, then what came back with no
    answer 6 to a chunk. No third pass: three times the time never once turned a timeout into an answer."""
    fold_leftovers(repo)
    shas = units(repo)
    led = read_ledger(repo)
    # A timeout of THIS judge for THIS text that is already in the ledger came out of an earlier run, which
    # gave it its retries (6 to a chunk, then three times the time). Judging it again is the same hour for
    # the same answer: it is settled. Only a timeout made in this run is retried below.
    settled = [e for e in sorted(shas) if (led.get(e) or {}).get("tier") == "timeout"
               and (led.get(e) or {}).get("judge") == jid and (led.get(e) or {}).get("src") == shas[e]]
    todo = [e for e in sorted(shas) if not answered(led.get(e), shas[e], jid) and e not in set(settled)]
    print("judge %s: %d units, %d already have a verdict, %d settled timeouts, %d to judge, %d provers"
          % (jid, len(shas), len(shas) - len(todo) - len(settled), len(settled), len(todo), workers))
    if todo:
        fan_out(repo, todo, shas, jid, workers, 40, "p1")
        led = read_ledger(repo)
        left = [e for e in todo if not answered(led.get(e), shas[e], jid)]
        if left:
            print("%d came back with no answer: once more, 6 to a chunk" % len(left))
            fan_out(repo, left, shas, jid, workers, 6, "p2")
            # whatever printed nothing in THIS pass too has now been silent twice: book it and move on
            book_silent_crashes(repo, jid, shas, left)
    led = read_ledger(repo)
    c = tiers(led, shas, jid, sorted(shas))
    print("\nALL UNITS under judge %s: %s" % (jid, "  ".join("%s %d" % kv for kv in sorted(c.items(), key=lambda kv: -kv[1]))))


def default_workers():
    """One prover per two logical processors: 16 on 32 threads. It was one per four, because every state
    copied the whole 17 MB guest world four times and the box ran out of memory bandwidth at 8 provers. The
    judge now handles only the pages a state touched (tools/cow/cowdiff.c, snap_restore), so the CPU is the
    limit again. COWPAR_WORKERS overrides."""
    if os.environ.get("COWPAR_WORKERS", "").isdigit():
        return max(1, int(os.environ["COWPAR_WORKERS"]))
    # three provers per four logical processors: 24 on 32 threads. The judge's budget is CPU time now, so
    # sharing a core makes a row slower, never a timeout; a quarter of the threads stay for the compiles.
    return max(2, min(48, (os.cpu_count() or 8) * 3 // 4))


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--repo", default="")
    ap.add_argument("--workers", type=int, default=0)
    ap.add_argument("--no-publish", action="store_true")
    ap.add_argument("--book-crashes", action="store_true",
                    help="only the tail of step 3: book the units silent in both passes as crash, and exit")
    a = ap.parse_args()
    repo = a.repo or (os.getcwd() if os.path.isfile(os.path.join(os.getcwd(), "tools", "cow", "conveyor.py"))
                      else DEFAULT_REPO)
    repo = os.path.abspath(repo)
    if not os.path.isfile(os.path.join(repo, "tools", "cow", "conveyor.py")):
        print("STOPPED: no repository at %s (pass --repo <path>)" % repo)
        return 1
    rc, out = run([PY, "tools/cow/judge2.py", "--judge-id"], repo)
    jid = (out or [""])[-1].strip()
    if rc or len(jid) != 12:
        print("STOPPED: tools/cow/judge2.py --judge-id did not answer")
        return 1
    procs = processes()
    if a.book_crashes:
        # only the tail of a step 3 that has already run its two passes (a cycle started before this rule existed):
        # no prover is started, so nothing else on the box needs to be waited for or ended
        shas = units(repo)
        led = read_ledger(repo)
        twice = [e for e in sorted(shas) if not answered(led.get(e), shas[e], jid)]
        print("BOOKED %d" % len(book_silent_crashes(repo, jid, shas, twice)))
        return 0
    if procs is None:
        print("STOPPED: the process list cannot be read, so a running prover cannot be ruled out")
        return 1
    me = os.getpid()
    busy = [(pid, cl) for pid, cl in procs if pid != me and "install_cowv3" in cl.lower()]
    if busy:
        print("STOPPED: the CowV3 installer is still running (pid %d). Let it finish first: it is comparing "
              "old and new unit text and must not be judged over." % busy[0][0])
        return 1
    for pid, cl in procs:
        low = cl.lower().replace("\\", "/")
        if pid != me and "lift_proof.py" in low and "lift_proof_all" in low and "lift_par" not in low \
                and "lift_conveyor" not in low:
            print("ending the single-core baseline (pid %d): its verdicts are on disk" % pid)
            kill(pid)
    workers = a.workers or default_workers()
    judge_rest(repo, jid, workers)
    if not a.no_publish:
        rc, out = run([PY, "tools/cow/conveyor.py", "publish"], repo)
        pub = [ln for ln in out if ln.startswith("PUBLISH ")][-1:]
        print(pub[0] if pub else "PUBLISH: no result line")
    print("DONE")
    return 0


if __name__ == "__main__":
    sys.exit(main())
