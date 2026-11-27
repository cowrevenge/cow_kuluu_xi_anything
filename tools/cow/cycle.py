"""The standing loop of cow_kuluu_xi_anything, one command (the panel's Cycle button):

    python tools/cow/cycle.py

    1. stops the line and waits for any other prover; folds journals a stopped run left;
    2. GROW: lifts every function that has no unit with the lifter as it is now; adds the ones that lift;
    3. judges every unit that has no verdict of the current judge (many provers, journals);
    4. removes the units this loop added that did not compile or never answered;
    5. RELIFT: when the lifter changed since the last cycle, lifts every unit that is not gold again, judges
       the ones whose code changed in a scratch tree and keeps a new text only where it ranks higher;
    6. RISE: when tools/cow/rise changed since the last cycle, lifts every function that is not gold from its
       instructions (tools/cow/rise/rise.py), judges them in a scratch tree, keeps a text only where it ranks
       higher than what is there (a function with no unit ranks lowest);
    7. AIM (tools/cow/aim.py): every weak, silver and `no clean state` unit, round after round until it is
       gold or a round moves nothing in it: the judge says which sites it never reached (build/aim/sites), seek
       makes states aimed at exactly those (with time that follows how many there are), and the unit is judged
       again with them; its states (cow/seeds_auto) and verdict are kept only where they raise its tier or
       reach more of its sites, and a FAIL they expose is listed (build/aim/fails.txt), never kept;
    8. publishes what seek proved;
    9. THE GRIND: every unit that is still weak or silver, judged by the same judge with 20 times the states
       and 4 times the row's time; the ones whose reached blocks grew go round again 4 times deeper, up to
       COW_DEEP_ROUNDS (3) rounds and COW_DEEP_HOURS (10) hours a cycle; published after every pass;
   10. publishes; sets the model line to work in parallel; starts the line.

Run again at any time: it carries on where it stopped. Nothing is reset, stashed, rebased or force-pushed.
It ends with `CYCLE DONE` or `CYCLE STOPPED: <why>`.

    --workers N      provers at once (default: three per four logical processors)
    --no-line        do not start the line at the end
    --no-deep        leave the grind (step 9) out
    --aim-hours H    the most hours step 7 may take (default 24); a run that stops goes on from where it was
    --llm-parallel N concurrent requests the line sends to the model (default 8)
"""
import argparse
import hashlib
import json
import os
import re
import shutil
import subprocess
import sys
import threading
import time

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
sys.path.insert(0, HERE)
import par_prove as P                                    # noqa: E402
import layout_merge                                      # noqa: E402

LIFT = "tools/cow/ghidra/lift.py"
RISE = "tools/cow/rise/rise.py"
RISE_FILES = ("tools/cow/rise/rise.py", "tools/cow/rise/rexpr.py", "layout/cow_rise.h")
SEEK = "tools/cow/rise/seek.py"
SEEK_TIERS = ("weak", "silver")
# rise's lifts this cycle that the judge could not look at - the original faulted in every random state
# (`no clean state`), so they were not kept: entry -> the lifted file. seek gives them states (step 7).
RISE_NOCLEAN = {}
KEEP_TIERS = ("gold", "silver", "weak", "fail")
# Tiers that are NOT an answer from the judge: the machinery failed to produce one. A unit whose only verdict
# is one of these is NOT put into `rejected`, because `rejected` is keyed by lifter and judge and grow honours
# it for as long as both are unchanged - so one transient silently retires a function from the conversion
# universe. Measured 2026-11-27: one 24-prover cycle booked 13 units as nocompile/compile_blocked and 5 as
# hang; 6 of the 13, judged again on a quieter box, compiled and answered normally (fail/memory, timeout,
# no clean state). `noisy` is NOT here: the judge answered, noisily.
NO_ANSWER = ("nocompile", "timeout", "hang", "none")
# Of those, the ones worth settling IN THIS CYCLE. A compile failure costs seconds to ask again and is the
# measured transient; a `hang` row costs its whole wall budget (the prover kills it after ~135s) and re-asking
# 80 of them serially would add hours to a cycle to settle a unit that will be retried next cycle anyway. So
# hangs and timeouts are simply not retired here - their file goes, they stay eligible, and the next cycle's
# normal path judges them again with a quieter machine.
NO_ANSWER_REASK = ("nocompile",)
NO_ANSWER_ASK = 24               # bound on the in-cycle re-ask; the rest wait for the next cycle un-rejected
RANK = {"gold": 3, "silver": 2, "weak": 1}
RELIFT_TIERS = ("fail", "weak", "silver", "noisy")
KNOBS = ("COW_MODEL_NPUSH_FRAME_AWARE", "COW_MODEL_TAIL_POP_RUN", "COW_LIFT_TAIL_EPILOGUE", "COW_LIFT_RET_BASE_LIVE")
WORK = os.path.join(ROOT, "build", "cycle")
LAYOUT_FILES = ("lifted_addresses.h", "lifted_bridges.h", "lifted_bridges.c")
# lifts step 6 made that the provers never answered, remembered between cycles (see settle_unanswered)
RISE_UNANSWERED = os.path.join(WORK, "rise_unanswered.json")
# what the judge has already SAID about a lift, by the sha of its text: a timeout is an
# answer (par_prove.judge_rest settles one and gives it no third pass), so a lift it said "out of
# time" for is not asked again until the lifter writes a different text for it
RISE_SETTLED = os.path.join(WORK, "rise_settled.json")
UNANSWERED_ASK = 40               # bound on one cycle's re-ask: one prover, one unit per chunk

# A chunk that dies without reporting its row is not the judge answering `no`: it is the machinery failing
# to answer, which is what par_prove.UNANSWERED ("error", "none", "timeout") and book_silent_crashes already
# say, and what my first version of this station got wrong by booking any tier at all. Re-ask it, but not
# forever: three tries is an hour of prover on a lift that has every intention of doing it again.
UNANSWERED_TRIES = 3

# What counts as the JUDGE having spoken. `timeout` belongs here on purpose - judge_rest settles a timeout
# and gives it no third pass, "because three times the time never once turned a timeout into an answer".
# `error`/`none`, and a row that never came at all, do not: those say nothing about the lift.
JUDGED = ("timeout", "gold", "silver", "weak", "fail")


def _path_of(v):
    return v["path"] if isinstance(v, dict) else v


def _tries_of(v):
    return int((v or {}).get("tries") or 0) if isinstance(v, dict) else 0


if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")


def stop(why, lines=()):
    for ln in lines:
        print("   " + ln)
    print("\nCYCLE STOPPED: " + why, flush=True)
    sys.exit(1)


def step(title):
    print("\n== " + title, flush=True)


# A step that ended badly (its script crashed, it was cut off): said when it happens and again in the cycle's
# last line, and the step is not booked as done, so the next cycle runs it again. Judge 11's seek ended on an
# exception at its first function; the cycle printed "0 units have synthesized states", booked the step as
# done and ended "CYCLE DONE".
FAILED = []


def run_live(argv, cwd, timeout, prefix="   "):
    """A long step's own lines, printed as they come: P.run holds a step's output until it ends, which is
    hours of nothing to read. Returns (exit code, the lines)."""
    try:
        p = subprocess.Popen(argv, cwd=cwd, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True,
                             encoding="utf-8", errors="replace", bufsize=1)
    except OSError as exc:
        return 99, ["%s: %s" % (type(exc).__name__, exc)]
    lines = []

    def pump():
        for ln in p.stdout:
            ln = ln.rstrip("\r\n")
            lines.append(ln)
            print(prefix + ln, flush=True)
    t = threading.Thread(target=pump, daemon=True)
    t.start()
    try:
        rc = p.wait(timeout=timeout)
    except subprocess.TimeoutExpired:
        P.kill(p.pid)
        rc = 99
        lines.append("stopped after %d minutes: over its time" % (timeout // 60))
        print(prefix + lines[-1], flush=True)
    t.join(30)
    return rc, lines


def line_procs(me):
    out = []
    for pid, cl in P.processes() or []:
        low = cl.lower().replace("\\", "/")
        if pid != me and (("conveyor.py" in low and " run" in low) or "lift_conveyor" in low):
            out.append((pid, cl))
    return out


# A process the pipeline starts always has somebody who reads what it wrote: the line, a pool host, the
# installer that asked for a verdict. When that owner is gone the answer goes to NOBODY - the process just
# sits there holding a build directory, and `provers_running` counts it, so quiet() waits for a verdict that
# no one is left to collect. Measured 2026-11-27: the line died mid-batch and left
# `lift_proof.py --list build/conveyor/b1127_165057/proof_r1.json.list --out ... --rerun` alive with its
# parent (35396) gone and its CPU frozen at 2.39 s over 25 s of watching; step 1 of the cycle I then started
# waited on it. quiet() bounds the LINE - 600 s and then kill - but had no bound at all on the provers, so
# that wait was forever, which is how a machine looks busy while nothing moves. The same kind of death had
# also left six `multiprocessing.spawn` workers behind from the 09:45 pool, each holding the 1.6 GB a prover
# worker reserves, none of them answering to a live parent either.
ORPHAN_GRACE = 120                      # seconds an ownerless process gets before it is cleaned up
_SPAWN = re.compile(r"spawn_main\(parent_pid=(\d+)")


def proc_table():
    """[(pid, parent, cmdline)] for the python processes on the box, and the set of EVERY live pid.

    Parents are looked for among all processes, not just python ones: a prover's owner is usually a python,
    but a detached start is a shell, and calling that ownerless would kill a prover that is working.
    """
    rows, live = [], set()
    if os.name == "nt":
        cmd = ("Get-CimInstance Win32_Process | Select-Object ProcessId,ParentProcessId,Name,CommandLine "
               "| ConvertTo-Json -Compress")
        rc, lines = P.run(["powershell", "-NoProfile", "-NonInteractive", "-Command", cmd], None, 120)
        text = "\n".join(ln for ln in lines if ln.strip()).strip()
        if rc or not text:
            return None, None
        try:
            data = json.loads(text)
        except ValueError:
            return None, None
        for d in ([data] if isinstance(data, dict) else data):
            try:
                pid = int(d.get("ProcessId") or 0)
            except (TypeError, ValueError):
                continue
            live.add(pid)
            if "python" in str(d.get("Name") or "").lower():
                rows.append((pid, int(d.get("ParentProcessId") or 0), str(d.get("CommandLine") or "")))
        return rows, live
    for pid, cl in P.processes() or []:
        live.add(pid)
        try:                                   # the parent is field 4, after a comm that can hold spaces
            with open("/proc/%d/stat" % pid, encoding="utf-8", errors="replace") as fh:
                pp = int(fh.read().rsplit(")", 1)[1].split()[1])
        except (OSError, IndexError, ValueError):
            pp = pid                           # unknown parent: never call it ownerless on a guess
        rows.append((pid, pp, cl))
    return rows, live


def _owner_of(cl, parent):
    """Who is supposed to read this process's answer. A pool worker names its host; the rest name a parent."""
    m = _SPAWN.search(cl)
    return int(m.group(1)) if m else parent


def _ours(low):
    """A process the pipeline started, positively: it names this repository or runs our own interpreter."""
    py = (P.PY or "").lower().replace("\\", "/")
    return ROOT.lower().replace("\\", "/") in low or bool(py and py in low)


def _dead_owner(row, live):
    pid, parent, cl = row
    return _owner_of(cl, parent) not in live


def ownerless(rows, live, me, seen, now, mine=()):
    """The prover processes that can no longer report to anyone, and so have nowhere to put a verdict.

    Only what the pipeline positively owns is eligible: the command line names this repository or runs our
    own interpreter, and carries a prover's name (`lift_proof.py`, `par_prove`, an installer). Two classes
    are deliberately left alone, both measured on this box today rather than argued about. `cycle.py` is not
    on the kill list: a cycle is an owner, not a thing owned, and the production cycle running right now
    (pid 12692) has a parent that exited when the window that started it closed - a rule that swept on the
    parent alone would have killed the run it was meant to protect. And a bare `multiprocessing.spawn`
    worker says nothing about who started it beyond an interpreter path, which is not enough on a box that
    runs other pythons (the model server has two of its own): those are reported by stray_workers() instead,
    because six of them from the 09:45 pool sat for seven and a half hours holding the 1.6 GB a prover
    worker reserves, with nothing left alive to come back for them.
    """
    out = []
    if not rows or not live:                    # a failed or empty read must not make everything look dead
        return out
    for row in rows:
        pid, parent, cl = row
        if pid == me or pid in mine or _SPAWN.search(cl):
            continue
        low = cl.lower().replace("\\", "/")
        if not any(k in low for k in ("lift_proof.py", "par_prove", "install_")):
            continue
        if "cycle.py" in low and "lift_proof.py" not in low:
            continue
        if not _ours(low) or not _dead_owner(row, live):
            continue
        if now - seen.setdefault(pid, now) < ORPHAN_GRACE:
            continue
        out.append((pid, cl))
    return out


def stray_workers(rows, live, me, mine=()):
    """Pool workers whose host is gone. Not killed: not ours to tell an interpreter path from a stranger's.

    They are the residue of a pool whose parent died, and they hold memory rather than blocking anybody, so
    the honest thing the cycle can do with them is say so - a run that quietly leaks six prover-sized
    reservations is how the next cycle starts with a third of the machine already promised away.
    """
    out = []
    if not rows or not live:
        return out
    for row in rows:
        pid, parent, cl = row
        if pid == me or pid in mine:
            continue
        if not _SPAWN.search(cl) or not _dead_owner(row, live):
            continue
        out.append((pid, cl))          # reported, not killed: see the docstring
    return out


def provers_running(me):
    out = []
    for pid, cl in P.processes() or []:
        low = cl.lower().replace("\\", "/")
        if pid == me or "lift_conveyor" in low or "conveyor.py" in low or "cow_panel" in low:
            continue
        if "lift_proof.py" in low or "install_" in low or "par_prove" in low or "cycle.py" in low:
            out.append((pid, cl))
    return out


def quiet():
    me = os.getpid()
    # an installer that started this loop is its parent: it is not "another prover"
    mine = {me, os.getppid()}
    t0, said = time.time(), 0
    seen = {}                        # when each ownerless process was first seen
    said_w = 0.0                       # when we last mentioned leaked pool workers
    while True:
        if line_procs(me):
            print("the line is running: asking it to stop (it ends after the step it is in)", flush=True)
            P.run([P.PY, "tools/cow/conveyor.py", "stop"], ROOT)
            t1 = time.time()
            while time.time() - t1 < 600 and line_procs(me):
                time.sleep(10)
            for pid, _c in line_procs(me):
                P.kill(pid)
        rows, live = proc_table()
        for pid, cl in ownerless(rows or [], live or set(), me, seen, time.time(), mine=mine):
            # whoever was going to read its answer exited first: it is not slow, it has nowhere to go
            print("   pid %d belongs to nothing any more: its answer was for a process that is gone, "
                  "cleaning it up (%s)" % (pid, cl[:110]), flush=True)
            P.kill(pid)
            seen.pop(pid, None)
        strays = stray_workers(rows or [], live or set(), me, mine=mine)
        if strays and time.time() - said_w > 900:
            said_w = time.time()          # once a quarter hour, not once around the loop
            print("   %d pool worker(s) outlived the pool that started them and are holding their memory "
                  "(%s); they are not killed, because an interpreter path is not proof they are ours - the "
                  "first one tells you whose they look like"
                  % (len(strays), ", ".join("%d@%s" % (p, (c or "?").split()[0].strip('"')[-26:])
                                            for p, c in strays)), flush=True)
        busy = [x for x in provers_running(me) if x[0] not in mine]
        if not busy and not line_procs(me):
            break
        if time.time() - said > 300:
            said = time.time()
            print("   waiting: %d other prover process(es) still running, %.0f min so far"
                  % (len(busy), (time.time() - t0) / 60), flush=True)
        time.sleep(20)
    print("quiet", flush=True)


def merged_dump():
    base = os.environ.get("COWARGFIX_BASE_DUMP") or "D:/projects/ghidra/ghidra_out/functions_all.jsonl"
    af2 = os.path.join(ROOT, "build", "argfix2", "argfix.jsonl")
    if not os.path.isfile(base):
        stop("the lifter's dump is not at %s" % base)
    fresh = {}
    if os.path.isfile(af2):
        with open(af2, encoding="utf-8", errors="replace") as fh:
            for ln in fh:
                try:
                    fresh[json.loads(ln)["addr"].lower()] = ln if ln.endswith("\n") else ln + "\n"
                except (ValueError, KeyError):
                    pass
    merged = os.path.join(WORK, "merged.jsonl")
    recs = {}
    with open(base, encoding="utf-8", errors="replace") as src_fh, \
            open(merged, "w", encoding="utf-8", newline="\n") as out_fh:
        for ln in src_fh:
            try:
                d = json.loads(ln)
                k = d["addr"].lower()
            except (ValueError, KeyError):
                out_fh.write(ln)
                continue
            recs[k] = d
            out_fh.write(fresh.pop(k, ln))
        for ln in fresh.values():
            out_fh.write(ln)
    return merged, recs


def lift(merged, entries, name):
    lst = os.path.join(WORK, name + "_candidates.txt")
    with open(lst, "w", encoding="utf-8", newline="\n") as fh:
        fh.write("\n".join(entries) + "\n")
    out_dir = os.path.join(WORK, name + "_lifted")
    shutil.rmtree(out_dir, ignore_errors=True)
    t0 = time.time()
    rc, out = P.run([P.PY, LIFT, "--dump", merged, "--entries-file", lst, "--max-size", "1000000", "--out-dir",
                     os.path.relpath(out_dir, ROOT), "--scratch-layout", "--apply"], ROOT, 7200)
    got = sorted(f[4:12] for f in os.listdir(out_dir) if f.startswith("cow_") and f.endswith(".c")) \
        if os.path.isdir(out_dir) else []
    print("the lifter ran %.0f minutes on %d functions: %d lifted" % ((time.time() - t0) / 60, len(entries), len(got)),
          flush=True)
    return out_dir, got, out


def read_list(path):
    try:
        with open(path, encoding="utf-8") as fh:
            return [ln.strip() for ln in fh if ln.strip()]
    except OSError:
        return []


def code_of(path):
    """the code of a unit file without its comments (None when there is no file)"""
    if not os.path.isfile(path):
        return None
    with open(path, encoding="utf-8", errors="replace") as fh:
        return re.sub(r"/\*.*?\*/", "", fh.read(), flags=re.S).split()


def lifter_stamp():
    h = hashlib.sha1()
    for rel in ("tools/cow/ghidra/lift.py", "tools/cow/ghidra/gen_model.py", "tools/cow/ghidra/ghidra_c.py",
                "tools/cow/ghidra/ret_model.py"):
        try:
            h.update(P.file_sha(os.path.join(ROOT, rel.replace("/", os.sep))).encode())
        except OSError:
            h.update(b"-")
    h.update(repr(KNOBS).encode())
    return h.hexdigest()[:16]


def rise_stamp():
    h = hashlib.sha1()
    for rel in RISE_FILES:
        try:
            h.update(P.file_sha(os.path.join(ROOT, rel.replace("/", os.sep))).encode())
        except OSError:
            h.update(b"-")
    return h.hexdigest()[:16]


def _unanswered_load():
    try:
        with open(RISE_UNANSWERED, encoding="utf-8") as fh:
            d = json.load(fh)
        return d if isinstance(d, dict) else {}
    except (OSError, ValueError):
        return {}


def _unanswered_save(d):
    tmp = RISE_UNANSWERED + ".tmp"
    with open(tmp, "w", encoding="utf-8", newline="\n") as fh:
        json.dump(d, fh, indent=0, sort_keys=True)
    os.replace(tmp, RISE_UNANSWERED)


def _settled_load():
    try:
        with open(RISE_SETTLED, encoding="utf-8") as fh:
            d = json.load(fh)
        return d if isinstance(d, dict) else {}
    except (OSError, ValueError):
        return {}


def _settled_save(d):
    tmp = RISE_SETTLED + ".tmp"
    with open(tmp, "w", encoding="utf-8", newline="\n") as fh:
        json.dump(d, fh, indent=0, sort_keys=True)
    os.replace(tmp, RISE_SETTLED)


def settle_unanswered(workers, jid):
    """THE LIFTS NOBODY JUDGED. Step 6 lifted these and the provers never came back with an answer for
    them: the worker died, its chunk went silent, or the row it wrote answers to no file. Nothing else
    can pick them up - they have no unit in src/lifted, so grow, aim and the grind never see them - and
    rise() itself does not lift again until the lifter changes (the stamp), so no station looks at them
    again either. Measured 2026-11-27: 13 lifts sat in build/cycle/rise_tree with no verdict at all,
    13,181 bytes, the largest 3,548 (0x1026be74, 0x101c4d80, 0x102480e0 among them), and why_table
    booked them `lifts; judge: not judged` for every cycle after. So the verdict is asked for here, on
    ONE prover with ONE unit per chunk. The contention was NOT the cause, which this station's own first
    run measured (15 lifts, one prover, one unit per chunk): 14 of them came back `timeout` with nothing
    else running, and the three biggest unwritten functions on the board do not need a longer clock at all
    - 0x1026be74's states all fault (clean 0, afault 1188 at twice the budget), 0x101c4d80 completes
    nothing in 310 s (a hang), and 0x102480e0 takes the chunk process down with it. So the rule is what the
    judge SAID, not whether it was kind: any tier the judge itself returned (JUDGED) is booked against the
    text and never asked again until the lifter writes a different one; what the machinery never answered
    (a dead chunk, a missing row) is re-asked up to UNANSWERED_TRIES times and then booked as silent, so a
    lift that will only ever die does not buy itself a place in every cycle from here. What ranks higher
    than the unit there now is kept by step 6's own rule.
    """
    src = os.path.join(ROOT, "src", "lifted")
    tree = os.path.join(WORK, "rise_tree")
    wanted = _unanswered_load()
    led = P.read_ledger(ROOT)
    shas = P.units(ROOT)
    settled = _settled_load()

    # THE TREE IS THE TRUTH ABOUT WHAT WAS LIFTED; the list is only a memory of failures. The queue holds
    # what the last step 6 saw come back without an answer, so a lift left over from any earlier run - one
    # that lost its verdict before this station existed, or after the list was pruned - is in no list at all
    # while its body sits on disk. Measured 2026-11-27: 87 lifts, 23,089 code bytes, every one with
    # build/cycle/rise_report.json saying `ok`, no unit in src/lifted, no verdict of this judge, not queued,
    # not booked. Nothing else can reach them: grow asked the lifter for the 307 functions that have no unit
    # and brought back nothing new, aim and the grind only see units that exist, and rise() will not lift
    # again until the stamp moves. So go and ask about what is lying on the floor.
    rejected = set(state().get("rejected", {}).get("%s/%s" % (lifter_stamp(), jid), []))
    if os.path.isdir(tree):
        for f in sorted(os.listdir(tree)):
            if not (f.startswith("cow_") and f.endswith(".c")):
                continue
            e = f[4:12]
            if e in wanted or e in shas or e in rejected or not led.get(e):
                continue                    # known, already a unit, given up on, or not on the board
            path = os.path.join(tree, f)
            s_ = settled.get(e) or {}
            if s_.get("judge") == jid and s_.get("src") == P.file_sha(path):
                continue                    # the judge answered THIS text; a rewritten lift is news again,
                                            # which is the same rule the remembered list below uses
            wanted[e] = path

    todo, sha, asked = {}, {}, {}
    for e, v in sorted(wanted.items()):
        path = _path_of(v)
        if not os.path.isfile(path):
            continue                                    # the tree was rebuilt without it: forget it
        sha[e] = P.file_sha(path)
        if _tries_of(v) >= UNANSWERED_TRIES:
            # the chunk died on it that many times: say so once, in the booking, and stop paying for it
            settled[e] = {"tier": "error", "why": "silent in %d passes" % _tries_of(v), "src": sha[e],
                          "judge": jid, "when": time.strftime("%Y-%m-%d %H:%M:%S")}
            continue
        rec = led.get(e) or {}
        if e in shas and rec.get("judge") == jid and rec.get("src") == shas[e]:
            continue                                    # somebody judged it since: it has its answer
        s = settled.get(e) or {}
        if s.get("judge") == jid and s.get("src") == sha[e]:
            continue         # the judge already spoke about THIS text (measured: 14 of 15 said
                             # "timeout"); asking again is the same wall for the same word
        todo[e] = path
    keep, tiers, ents, asked = {}, {}, [], {}
    if todo:
        ents = sorted(todo)[:UNANSWERED_ASK]
        print("%d lift(s) from an earlier cycle have never been judged: asking on one prover, "
              "%d left for a later cycle" % (len(ents), len(todo) - len(ents)), flush=True)
        asked = P.fan_out(ROOT, ents, {e: sha[e] for e in ents}, jid, 1, 1, "u1",
                          src=os.path.relpath(tree, ROOT)) or {}
        for e in ents:
            rec = asked.get(e) or {}
            if not P.answered(rec, sha[e], jid):
                continue                                # still no answer: ask again the next cycle
            old = ((led.get(e) or {}).get("tier") or "none") if e in shas else "none"
            if RANK.get(rec.get("tier"), 0) > RANK.get(old, 0):
                keep[e] = rec
                tiers[rec.get("tier")] = tiers.get(rec.get("tier"), 0) + 1
                shutil.copyfile(todo[e], os.path.join(src, "cow_%s.c" % e))
        if keep:
            P._ledger_write(ROOT, keep)
    # THE JUDGE SPOKE, EVEN TO SAY IT RAN OUT OF TIME. Measured 2026-11-27 on the first run of this
    # station: 15 lifts asked on ONE prover with ONE unit per chunk, and 14 came back `timeout` and 1
    # `no clean state` - none kept, none booked, all 14 still in the queue, so every cycle from now on
    # spends its prover again on the answer it already has. That is not what the rest of the pipeline
    # does with a timeout: judge_rest settles one against the ledger and gives it "no third pass",
    # because "three times the time never once turned a timeout into an answer" - the budget is the
    # machine's, not the unit's, and re-asking it at the same budget says nothing new. Silence (no row
    # at all: the prover died with the chunk) is different, and stays in the queue to be asked again.
    spoke = {e for e in ents if (asked.get(e) or {}).get("tier") in JUDGED}
    for e in spoke:
        r = asked[e]
        settled[e] = {"tier": r.get("tier"), "why": r.get("why") or "", "src": sha[e], "judge": jid,
                      "when": time.strftime("%Y-%m-%d %H:%M:%S")}
    for e in set(ents) - spoke:            # the machinery did not answer: ask again, while it is new
        v = wanted.get(e)
        wanted[e] = {"path": _path_of(v), "tries": _tries_of(v) + 1}
    _settled_save(settled)
    # what answered has its verdict now, whatever became of it; what the loop above skipped was resolved too
    done = {e for e in wanted if e not in todo}
    done |= spoke
    _unanswered_save({e: p for e, p in wanted.items() if e not in done and e not in settled})
    if todo:
        print("kept %d of %d asked (%s); %d the judge answered and are booked%s"
              % (len(keep), len(ents), ", ".join("%s %d" % kv for kv in sorted(tiers.items())) or "none",
                 len(spoke), "; %d stayed silent and will be asked again" % (len(ents) - len(spoke))
                 if len(ents) - len(spoke) else ""), flush=True)
        print("NEW GOLD from unanswered lifts: %d" % tiers.get("gold", 0), flush=True)
    return len(keep)


def rise(workers, jid, force=False):
    """step 6: every function that is not gold, lifted from its instructions; a text is kept only where it
    ranks higher than the unit there now (or where there is none)"""
    stamp = rise_stamp()
    if state().get("rise_stamp") == stamp and not force:
        print("rise is the one the last cycle used (%s): nothing to do" % stamp)
        settle_unanswered(workers, jid)
        return 0
    src = os.path.join(ROOT, "src", "lifted")
    shas = P.units(ROOT)
    led = P.read_ledger(ROOT)
    gold = sorted(e for e in shas if (led.get(e) or {}).get("tier") == "gold"
                  and (led.get(e) or {}).get("judge") == jid and (led.get(e) or {}).get("src") == shas[e])
    skip = os.path.join(WORK, "rise_skip.txt")
    with open(skip, "w", encoding="utf-8", newline="\n") as fh:
        fh.write("\n".join(gold) + "\n")
    rdir = os.path.join(WORK, "rise_lifted")
    shutil.rmtree(rdir, ignore_errors=True)
    t0 = time.time()
    ties_path = os.path.join(WORK, "rise_ties.json")
    rc, out = P.run([P.PY, RISE, "--all", "--machine-only", "--skip-list", skip, "--out", rdir,
                     "--report", os.path.join(WORK, "rise_report.json"), "--ties", ties_path], ROOT, 7200)
    for ln in out[:14]:
        print("   " + ln)
    got = sorted(f[4:12] for f in os.listdir(rdir) if f.startswith("cow_") and f.endswith(".c")) \
        if os.path.isdir(rdir) else []
    print("rise ran %.0f minutes: %d functions lifted" % ((time.time() - t0) / 60, len(got)), flush=True)
    rise_failed = bool(rc) and not got
    if rise_failed:
        last = [ln for ln in out if ln.strip()][-1:]
        FAILED.append("rise ended with exit code %s and lifted nothing%s" % (rc, " (%s)" % last[0].strip()[:160] if last else ""))
        print("RISE FAILED: " + FAILED[-1], flush=True)
    changed = [e for e in got if code_of(os.path.join(rdir, "cow_%s.c" % e)) != code_of(os.path.join(src, "cow_%s.c" % e))]
    print("%d of them differ from the unit there now (or have none)" % len(changed), flush=True)
    keep, moves = {}, {}
    if got:
        tree = os.path.join(WORK, "rise_tree")
        shutil.rmtree(tree, ignore_errors=True)
        os.makedirs(tree)
        for f in LAYOUT_FILES:
            shutil.copyfile(os.path.join(ROOT, "layout", f), os.path.join(tree, f))
        new_sha = {}
        for e in changed:
            shutil.copyfile(os.path.join(rdir, "cow_%s.c" % e), os.path.join(tree, "cow_%s.c" % e))
            new_sha[e] = P.file_sha(os.path.join(tree, "cow_%s.c" % e))
        rel = os.path.relpath(tree, ROOT)
        res = (P.fan_out(ROOT, changed, new_sha, jid, workers, 40, "s1", src=rel) or {}) if changed else {}
        left = [e for e in changed if not P.answered(res.get(e), new_sha[e], jid)]
        if left:
            print("%d came back with no answer: once more, 6 to a chunk" % len(left))
            res.update(P.fan_out(ROOT, left, new_sha, jid, workers, 6, "s2", src=rel) or {})
        # what still has no answer is remembered: the tree is rebuilt from scratch the next time the
        # lifter changes, and until then no other station sees a lift that has no unit and no row
        still = {e: os.path.join(tree, "cow_%s.c" % e) for e in changed
                 if not P.answered(res.get(e), new_sha[e], jid)}
        had = _unanswered_load()
        had.update(still)
        _unanswered_save(had)
        if still:
            print("%d lift(s) still have no verdict: on the list for a later cycle" % len(still), flush=True)
        _other_answers(got, changed, res, new_sha, tree, rel, ties_path, jid, workers)
        led = P.read_ledger(ROOT)
        # what the judge said about every lift, kept or not: why a function with no unit still has none
        # (tools/cow/why_table.py)
        verdicts = {e: {k: (res.get(e) or {}).get(k) for k in ("tier", "why", "blocks", "clean")}
                    for e in changed if P.answered(res.get(e), new_sha[e], jid)}
        with open(os.path.join(WORK, "rise_verdicts.json"), "w", encoding="utf-8", newline="\n") as fh:
            json.dump(verdicts, fh, indent=0, sort_keys=True)
        for e in changed:
            rec = res.get(e) or {}
            if not P.answered(rec, new_sha[e], jid):
                continue
            if rec.get("why") == "no clean state":
                RISE_NOCLEAN[e] = os.path.join(tree, "cow_%s.c" % e)
            had = os.path.isfile(os.path.join(src, "cow_%s.c" % e))
            old = ((led.get(e) or {}).get("tier") or "none") if had else "none"
            if RANK.get(rec.get("tier"), 0) > RANK.get(old, 0):
                keep[e] = rec
                k = "%s -> %s" % (old, rec.get("tier"))
                moves[k] = moves.get(k, 0) + 1
        if keep:
            backup = os.path.join(WORK, "rise_backup")
            os.makedirs(backup, exist_ok=True)
            for e in keep:
                dst = os.path.join(src, "cow_%s.c" % e)
                if os.path.isfile(dst):
                    shutil.copyfile(dst, os.path.join(backup, "cow_%s.c" % e))
                shutil.copyfile(os.path.join(tree, "cow_%s.c" % e), dst)
            P._ledger_write(ROOT, keep)
    print("kept %d of %d: %s" % (len(keep), len(changed), ", ".join("%s %d" % kv for kv in sorted(moves.items())) or "none"))
    n = sum(1 for r in keep.values() if r.get("tier") == "gold")
    print("NEW GOLD from rise: %d" % n, flush=True)
    if not rise_failed:
        state({"rise_stamp": stamp})
    return n


ANSWERS_MAX = 8             # of a frame's equally good answers, the ones a cycle tries


def _other_answers(got, changed, res, new_sha, tree, rel, ties_path, jid, workers):
    """THE FRAME'S OTHER ANSWERS. Where a function's stack fits more than one way at the same cost (unknown
    callees: which of two calls pops the words between them), rise writes the first in a fixed order and says
    how many there are (rise.py solve_pops, COW_FRAME_ANSWER, --ties). Which one is the program's only the
    judge can say: 0x10063c80's first is gold and its second FAILs; 0x101b00b0's first FAILs `call args`,
    its second passes with every state the unit has; 0x10153310's third. So every lift that has such answers
    and is not gold on the first is lifted on the next ones too (COW_RISE_VARIANT), each is judged with the
    unit's states, and the one that ranks highest stands in for the lift: its text in the scratch tree (the
    aim reads it from there), its verdict in `res`. A unit that is not gold and whose text IS the first answer
    is in this too, against its record (it joins `changed` where another answer ranks higher)."""
    try:
        with open(ties_path, encoding="utf-8") as fh:
            ties = {str(k): int(v) for k, v in json.load(fh).items()}
    except (OSError, ValueError):
        return

    def rank(rec):
        return (RANK.get((rec or {}).get("tier"), 0), _reached(rec))
    cand = [e for e in changed if ties.get(e, 1) > 1 and P.answered(res.get(e), new_sha[e], jid)
            and (res.get(e) or {}).get("tier") != "gold"]
    led = P.read_ledger(ROOT)
    same = [e for e in got if e not in set(changed) and ties.get(e, 1) > 1
            and (led.get(e) or {}).get("judge") == jid and (led.get(e) or {}).get("tier") != "gold"]
    for e in same:
        res[e] = dict(led.get(e) or {})          # what the first answer stands at: the unit's own record
        shutil.copyfile(os.path.join(ROOT, "src", "lifted", "cow_%s.c" % e), os.path.join(tree, "cow_%s.c" % e))
    cand += same
    if not cand:
        return
    print("%d lifts are not gold and have another answer for their frame: the next ones are tried" % len(cand),
          flush=True)
    moved = {}
    for k in range(1, ANSWERS_MAX):
        ents = [e for e in cand if ties[e] > k and (res.get(e) or {}).get("tier") != "gold"]
        if not ents:
            break
        vdir = os.path.join(WORK, "rise_answer_%d" % k)
        vtree = os.path.join(WORK, "rise_answer_tree")
        shutil.rmtree(vdir, ignore_errors=True)
        shutil.rmtree(vtree, ignore_errors=True)
        os.makedirs(vtree)
        lst = os.path.join(WORK, "rise_answer.lst")
        with open(lst, "w", encoding="utf-8", newline="\n") as fh:
            fh.write("\n".join(ents) + "\n")
        old_v = os.environ.get("COW_RISE_VARIANT")
        os.environ["COW_RISE_VARIANT"] = str(k)
        try:
            P.run([P.PY, RISE, "--list", lst, "--out", vdir], ROOT, 7200)
        finally:
            if old_v is None:
                os.environ.pop("COW_RISE_VARIANT", None)
            else:
                os.environ["COW_RISE_VARIANT"] = old_v
        for f in LAYOUT_FILES:
            shutil.copyfile(os.path.join(ROOT, "layout", f), os.path.join(vtree, f))
        sha_k = {}
        for e in ents:
            src_ = os.path.join(vdir, "cow_%s.c" % e)
            if os.path.isfile(src_) and code_of(src_) != code_of(os.path.join(tree, "cow_%s.c" % e)):
                shutil.copyfile(src_, os.path.join(vtree, "cow_%s.c" % e))
                sha_k[e] = P.file_sha(os.path.join(vtree, "cow_%s.c" % e))
        if not sha_k:
            continue
        got = P.fan_out(ROOT, sorted(sha_k), sha_k, jid, workers, 40, "v%d" % k,
                        src=os.path.relpath(vtree, ROOT)) or {}
        for e in sorted(sha_k):
            rec = got.get(e) or {}
            if P.answered(rec, sha_k[e], jid) and rank(rec) > rank(res.get(e)):
                shutil.copyfile(os.path.join(vtree, "cow_%s.c" % e), os.path.join(tree, "cow_%s.c" % e))
                new_sha[e] = sha_k[e]
                res[e] = rec
                moved[e] = k
                if e not in changed:
                    changed.append(e)
    for e in same:
        if e not in moved:                       # the unit stands as it is: nothing of it in the scratch tree
            res.pop(e, None)
            try:
                os.remove(os.path.join(tree, "cow_%s.c" % e))
            except OSError:
                pass
    print("another answer ranks higher for %d of them (%d gold)"
          % (len(moved), sum(1 for e in moved if (res.get(e) or {}).get("tier") == "gold")), flush=True)


def seek(workers, jid, force=False):
    """step 7: synthesized states for the weak and silver units. The states are judged from a scratch
    directory (COW_SEEDS_AUTO) against the unit texts as they are, together with the synthesized states the
    unit already has (merge_states), and a unit's file is copied into cow/seeds_auto only where its tier goes
    up or the same tier reaches more of its blocks."""
    h = hashlib.sha1(jid.encode())
    for rel in (SEEK,) + RISE_FILES:
        try:
            h.update(P.file_sha(os.path.join(ROOT, rel.replace("/", os.sep))).encode())
        except OSError:
            h.update(b"-")
    stamp = h.hexdigest()[:16]
    if state().get("seek_stamp") == stamp and not force:
        print("seek, rise and the judge are the ones the last cycle used (%s): nothing to do" % stamp)
        return 0
    if not os.path.isfile(os.path.join(ROOT, SEEK.replace("/", os.sep))):
        print("no %s: nothing to do" % SEEK)
        return 0
    src = os.path.join(ROOT, "src", "lifted")
    shas = P.units(ROOT)
    led = P.read_ledger(ROOT)
    def current(e):
        r = led.get(e) or {}
        return r.get("judge") == jid and r.get("src") == shas[e]
    # the units the random states barely ran (weak, silver), the ones they never ran at all (the original
    # faulted in every state: `no clean state`), and rise's new lifts of functions with no unit that came
    # back that way
    text = {e: os.path.join(src, "cow_%s.c" % e) for e in shas
            if current(e) and ((led.get(e) or {}).get("tier") in SEEK_TIERS
                               or (led.get(e) or {}).get("why") == "no clean state")}
    if not RISE_NOCLEAN:
        # rise did not run in this cycle (it is the one the last cycle used): the lifts it made then of the
        # functions with no unit are still in its tree, with what the judge said of each
        try:
            with open(os.path.join(WORK, "rise_verdicts.json"), encoding="utf-8") as fh:
                earlier = json.load(fh)
        except (OSError, ValueError):
            earlier = {}
        for e, v in earlier.items():
            path = os.path.join(WORK, "rise_tree", "cow_%s.c" % e)
            if (v or {}).get("why") == "no clean state" and os.path.isfile(path):
                RISE_NOCLEAN[e] = path
    for e, path in RISE_NOCLEAN.items():
        if e not in shas and os.path.isfile(path):
            text[e] = path
    cands = sorted(text)
    print("%d units: weak, silver, or never run (%d of them rise's new lifts)"
          % (len(cands), sum(1 for e in cands if e not in shas)), flush=True)
    lst = os.path.join(WORK, "seek_list.txt")
    with open(lst, "w", encoding="utf-8", newline="\n") as fh:
        fh.write("\n".join(cands) + "\n")
    sdir = os.path.join(WORK, "seeds_try")
    shutil.rmtree(sdir, ignore_errors=True)
    t0 = time.time()
    tree = os.path.join(WORK, "seek_tree")
    shutil.rmtree(tree, ignore_errors=True)
    os.makedirs(tree)
    for f in LAYOUT_FILES:
        shutil.copyfile(os.path.join(ROOT, "layout", f), os.path.join(tree, f))
    for e in cands:
        shutil.copyfile(text[e], os.path.join(tree, "cow_%s.c" % e))
    env_src = os.environ.get("COW_LIFT_SRC")
    os.environ["COW_LIFT_SRC"] = tree          # seek reads each unit's own callee list from its text
    try:
        rc, out = run_live([P.PY, "-u", SEEK, "--list", lst, "--out", sdir, "--jobs", str(workers)], ROOT, 8 * 3600)
    finally:
        if env_src is None:
            os.environ.pop("COW_LIFT_SRC", None)
        else:
            os.environ["COW_LIFT_SRC"] = env_src
    got = sorted(f[:8] for f in os.listdir(sdir) if f.endswith(".json") and len(f) == 13) \
        if os.path.isdir(sdir) else []
    got = [e for e in got if e in set(cands)]
    print("seek ran %.0f minutes: %d units have synthesized states" % ((time.time() - t0) / 60, len(got)), flush=True)
    if rc:
        # what it wrote before it ended is still judged below; the step is not booked as done
        last = [ln for ln in out if ln.strip()][-1:]
        FAILED.append("seek ended with exit code %s%s" % (rc, " (%s)" % last[0].strip()[:160] if last else ""))
        print("SEEK FAILED: " + FAILED[-1], flush=True)
    keep, moves, fails, wider = {}, {}, [], 0
    shas = dict(shas)
    for e in got:
        if e not in shas:
            shas[e] = P.file_sha(os.path.join(tree, "cow_%s.c" % e))
    carried = sum(1 for e in got if merge_states(e, os.path.join(sdir, e + ".json")))
    if carried:
        print("%d of them keep states an earlier seek gave them, beside the new ones" % carried, flush=True)
    # a unit whose synthesized states are the ones it was last judged with, by this judge, has its answer:
    # judging it again is the same minutes for the same verdict
    seen_path = os.path.join(WORK, "seek_judged.json")
    try:
        with open(seen_path, encoding="utf-8") as fh:
            seen = json.load(fh)
    except (OSError, ValueError):
        seen = {}
    key = {e: "%s/%s/%s" % (jid, shas[e], P.file_sha(os.path.join(sdir, e + ".json"))) for e in got}
    same = [e for e in got if seen.get(e) == key[e]]
    if same:
        print("%d of them got the states they were last judged with: not judged again" % len(same), flush=True)
        got = [e for e in got if e not in set(same)]
    if got:
        rel = os.path.relpath(tree, ROOT)
        os.environ["COW_SEEDS_AUTO"] = sdir
        try:
            res = P.fan_out(ROOT, got, shas, jid, workers, 40, "k1", src=rel) or {}
            left = [e for e in got if not P.answered(res.get(e), shas[e], jid)]
            if left:
                print("%d came back with no answer: once more, 6 to a chunk" % len(left))
                res.update(P.fan_out(ROOT, left, shas, jid, workers, 6, "k2", src=rel) or {})
        finally:
            os.environ.pop("COW_SEEDS_AUTO", None)
        led = P.read_ledger(ROOT)
        for e in got:
            rec = res.get(e) or {}
            if not P.answered(rec, shas[e], jid):
                continue
            seen[e] = key[e]
            old = (led.get(e) or {}).get("tier") or "none"
            if rec.get("tier") == "fail" and not P.not_compared(rec):
                # a `no clean state` row is the ORIGINAL completing on nothing: the two sides were never
                # compared, so it is not a disagreement between the unit and the original. It belongs to the
                # states' lane, not to whoever reads this file looking for a lifter bug.
                fails.append(("%s %s %s" % (e, rec.get("why") or "", rec.get("detail") or "")).strip()[:300])
            up = RANK.get(rec.get("tier"), 0) - RANK.get(old, 0)
            if up > 0:
                keep[e] = rec
                k = "%s -> %s" % (old, rec.get("tier"))
                moves[k] = moves.get(k, 0) + 1
            elif up == 0 and rec.get("tier") in RANK and _reached(rec) > _reached(led.get(e)):
                # the same tier with more of its blocks reached: these states are the better ones to stand on,
                # and what the grind (step 9) breeds from
                keep[e] = rec
                wider += 1
        if keep:
            dst_dir = os.path.join(ROOT, "cow", "seeds_auto")
            os.makedirs(dst_dir, exist_ok=True)
            for e in keep:
                shutil.copyfile(os.path.join(sdir, e + ".json"), os.path.join(dst_dir, e + ".json"))
                unit = os.path.join(src, "cow_%s.c" % e)
                if not os.path.isfile(unit):
                    shutil.copyfile(os.path.join(tree, "cow_%s.c" % e), unit)   # a function that had no unit
            P._ledger_write(ROOT, keep)
        with open(seen_path, "w", encoding="utf-8", newline="\n") as fh:
            json.dump(seen, fh, indent=0, sort_keys=True)
    with open(os.path.join(WORK, "seek_fails.txt"), "w", encoding="utf-8", newline="\n") as fh:
        fh.write("\n".join(fails) + ("\n" if fails else ""))
    print("%d of %d moved up a tier (%s); %d more reach more of their blocks at the tier they had"
          % (sum(moves.values()), len(got), ", ".join("%s %d" % kv for kv in sorted(moves.items())) or "none", wider))
    if fails:
        print("%d units FAIL on a synthesized state (the unit and the original disagree there): build/cycle/seek_fails.txt"
              % len(fails))
    n = sum(1 for r in keep.values() if r.get("tier") == "gold")
    print("NEW GOLD from seek: %d" % n, flush=True)
    if not rc:
        state({"seek_stamp": stamp})
    return n


# THE GRIND (step 9). The judge's states are coverage-guided, and its count stops a row at 2000 of them (6000
# while the corpus grows) with the corpus very often still growing: that is most of what weak and silver are.
# The same judge with more states and more time for a row finishes them: no judge file changes, a row still
# stops as soon as it is proven, and the states come in the same order, so nothing that is gold is run again
# and nothing that is gold would come out differently. Each round gives a row 4 times the states and the time
# of the round before, and only the units whose reached blocks GREW in a round go on to the next.
DEEP_PROVER = os.path.join("tools", "cow", "deep_lift_proof.py")
DEEP_STATES = 40000         # round 1: 20 times judge2.STATES_MAX
# The row's TIME is not a second dial to turn freely: the judge's per-row budget is sized to its STATE count
# (judge2: ROW_CPU_SECS = 30, "the old 6/8 were sized for 400 states"). Ask a row for 20 times the states and
# give it 4 times the time, and it is given 40,000 states the budget of 8,000 - the extra states are simply
# never run, and the row reports a timeout instead of a verdict. That is what the grind was doing: measured on
# the grind of 2026-11-27, of the 8 rows that answered at all, 6 came back `timeout` (125-208 s each) and the
# pass moved gold 0, silver 1, weak 1 across 9 units. So the budget is DERIVED from the states below.
# COW_DEEP_BUDGET still pins it (and COW_DEEP_BUDGET_CAP bounds it) for whoever wants to limit the box on purpose.
DEEP_BUDGET = int(os.environ.get("COW_DEEP_BUDGET") or 0)          # 0 = derive it from the states
DEEP_BUDGET_CAP = int(os.environ.get("COW_DEEP_BUDGET_CAP") or 40)  # a row's ceiling: 40 x 30 s CPU, 40 x 120 s wall


def deep_budget(states):
    """The grind's per-row time budget for a row of `states` states: the judge's own budget scaled by
    how much more work than a normal row this is, because the judge sizes its row by its state count
    (judge2: ROW_CPU_SECS = 30, "the old 6/8 were sized for 400 states"). A module-level function rather
    than an expression at the call site, so these numbers can be asserted instead of admired.
    """
    import judge2 as J
    fair = max(1, int(round(float(states) / J.STATES_MAX)))
    return DEEP_BUDGET or min(DEEP_BUDGET_CAP, fair)
DEEP_ROUNDS = int(os.environ.get("COW_DEEP_ROUNDS") or 3)
DEEP_HOURS = float(os.environ.get("COW_DEEP_HOURS") or 10)    # the grind's time in one cycle; the next goes on


def _file_sha_or(path):
    return P.file_sha(path) if os.path.isfile(path) else "-"


def _settle(keep, shas, jid, workers, rel, pins_dir, rnd, what=None):
    """WHAT THE GRIND FOUND IS KEPT AS STATES (judge 18). A unit the grind moves up got there with 40000 states
    and four times a row's time, and its record says so (`depth`): judged the judge's own way it is short
    again, so every such gold is judged at its depth after a judge change (regold), and a check at the
    judge's count takes it back (2026-11-24: four gold to silver, 85.081% to 85.037%). The search now says
    which of its states reached something new and what each is made of (cowdiff.c KEPT STATES), so those go
    behind the unit's states as pinned states, and the unit is judged once more THE JUDGE'S OWN WAY: where
    it stands as high there, that verdict is the record, with no depth to it, and the states stay. Where it
    does not, the unit's states are put back and the depth record stands as before."""
    import aim as A
    seeds = os.path.join(ROOT, "cow", "seeds_auto")
    os.makedirs(seeds, exist_ok=True)
    back, ents = {}, []
    for e in sorted(keep):
        path = os.path.join(seeds, e + ".json")
        have = A._states_of(path)
        ks = [st for st in A._keep_states(e, have, pins_dir) if A._body(st) not in {A._body(x) for x in have}]
        if not ks:
            continue
        try:
            with open(path, "rb") as fh:
                back[e] = fh.read()
        except OSError:
            back[e] = None
        A._write_doc(path, have + ks, A._built_for(path) or shas[e])
        ents.append(e)
    if not ents:
        return {}
    res = P.fan_out(ROOT, ents, shas, jid, workers, 12, "t%s" % rnd, src=rel) or {}
    settled = {}
    for e in ents:
        rec, deep = res.get(e) or {}, keep[e]
        if (P.answered(rec, shas[e], jid) and rec.get("tier") in RANK
                and (RANK[rec["tier"]], _reached(rec)) >= (RANK.get(deep.get("tier"), 0), _reached(deep))):
            settled[e] = rec
            continue
        path = os.path.join(seeds, e + ".json")
        if back[e] is None:
            try:
                os.remove(path)
            except OSError:
                pass
        else:
            with open(path, "wb") as fh:
                fh.write(back[e])
    if settled:
        P._ledger_write(ROOT, settled)
    print("%s: %d of the %d units it moved hold their place at the judge's own count with the states"
          " the search found pinned (%d gold)" % (what or "grind round %d" % (rnd + 1), len(settled), len(ents),
                                                 sum(1 for r in settled.values() if r.get("tier") == "gold")),
          flush=True)
    return settled


def _reached(rec):
    try:
        return int(str((rec or {}).get("blocks") or "0/0").split("/")[0])
    except ValueError:
        return 0


def publish():
    rc, out = P.run([P.PY, "tools/cow/why_table.py"], ROOT, 600)
    for ln in out[-3:]:
        print("   " + ln)
    rc, out = P.run([P.PY, "tools/cow/conveyor.py", "publish"], ROOT, 3600)
    pub = [ln for ln in out if ln.startswith("PUBLISH ")][-1:]
    print(pub[0] if pub else "PUBLISH: no result line")
    if not pub or not pub[0].startswith("PUBLISH OK"):
        for ln in out[-6:]:
            print("   " + ln)


def deep(workers, jid):
    """step 9, the grind: every weak and silver unit judged with more states, round after round, until none
    of them moves or the time is used. Judged from a scratch tree; a unit's verdict goes into the ledger only
    where its tier goes up or the same tier reaches more of its blocks, and a FAIL the extra states expose is
    listed (build/cycle/deep_fails.txt), never kept - the same rule as seek's. The scoreboard is published
    after every pass that moved a unit up."""
    if DEEP_ROUNDS <= 0:
        print("COW_DEEP_ROUNDS=0: no grind")
        return 0
    if not os.path.isfile(os.path.join(ROOT, DEEP_PROVER.replace("/", os.sep))):
        print("no %s: nothing to do" % DEEP_PROVER)
        return 0
    import judge2 as J
    src = os.path.join(ROOT, "src", "lifted")
    memo = dict(state().get("deep") or {})
    t_end = time.time() + DEEP_HOURS * 3600
    new_gold, all_fails = 0, []
    asked = set()       # (unit, round) this cycle has run: one that came back with no answer is not asked twice
    while True:
        shas = P.units(ROOT)
        led = P.read_ledger(ROOT)
        todo, keys = {}, {}
        for e in sorted(shas):
            rec = led.get(e) or {}
            if rec.get("judge") != jid or rec.get("src") != shas[e] or rec.get("tier") not in SEEK_TIERS:
                continue
            keys[e] = "%s/%s/%s/%s" % (jid, shas[e], _file_sha_or(os.path.join(ROOT, "cow", "seeds_auto", e + ".json")),
                                       _file_sha_or(os.path.join(ROOT, "cow", "seeds", e + ".json")))
            m = memo.get(e) or {}
            if m.get("key") != keys[e]:
                rnd = 0                         # never ground with this text and these states
            elif m.get("grew") and int(m.get("round", 0)) + 1 < DEEP_ROUNDS:
                rnd = int(m["round"]) + 1       # its blocks grew last round: the next one, 4 times deeper
            else:
                continue                        # a round moved nothing in it: more of the same will not
            if (e, rnd) in asked:
                continue
            todo.setdefault(rnd, []).append(e)
        if not todo:
            print("the grind has nothing left to try in this cycle: what is still weak or silver stopped growing, "
                  "has had its rounds, or gave no answer")
            break
        rnd = min(todo)
        states = DEEP_STATES * 4 ** rnd
        # 20 times the states is 20 times the row's time; each further round multiplies both by 4 again, so the
        # ratio never drifts. The cap exists because round 2 would otherwise ask for 320 x the budget (2.7 CPU
        # hours a row) for the handful of units whose blocks grew twice.
        budget = deep_budget(states)

        def near(e):                            # nearest to gold first
            rec = led.get(e) or {}
            try:
                a, t = (int(x) for x in str(rec.get("blocks") or "0/1").split("/"))
            except ValueError:
                a, t = 0, 1
            return (0 if rec.get("tier") == "silver" else 1, -(a / max(t, 1)))
        ents = sorted(todo[rnd], key=near)
        # a pass is what the provers do in about an hour and a half at the most: its verdicts go into the
        # ledger and the scoreboard is published before the next one starts, nearest to gold first
        row_secs = J.ROW_CPU_SECS * budget
        part = ents[:max(48, int(workers * 5400 / row_secs))]
        asked.update((e, rnd) for e in part)
        print("\ngrind round %d: %d units (%d more wait in this round), %d states and %d s a row at the most (%d "
              "minutes at the most, less for every row that is proven early)"
              % (rnd + 1, len(part), len(ents) - len(part), states, row_secs,
                 len(part) * row_secs / max(1, workers) / 60 + 1), flush=True)
        tree = os.path.join(WORK, "deep_tree")
        shutil.rmtree(tree, ignore_errors=True)
        os.makedirs(tree)
        for f in LAYOUT_FILES:
            shutil.copyfile(os.path.join(ROOT, "layout", f), os.path.join(tree, f))
        for e in part:
            shutil.copyfile(os.path.join(src, "cow_%s.c" % e), os.path.join(tree, "cow_%s.c" % e))
        rel = os.path.relpath(tree, ROOT)
        old_env = {k: os.environ.get(k) for k in ("COWPAR_PROVER", "COW_DEEP_STATES", "COW_PINS_DIR", "COWDIFF_PINS",
                                                  "COWDIFF_KEEP")}
        os.environ["COWPAR_PROVER"] = DEEP_PROVER
        os.environ["COW_DEEP_STATES"] = str(states)
        # the states the search finds on the way are reported (judge 18), for the settle below
        deep_pins = os.path.join(WORK, "deep_pins")
        shutil.rmtree(deep_pins, ignore_errors=True)
        os.environ["COW_PINS_DIR"] = deep_pins
        os.environ["COWDIFF_PINS"] = "1"
        os.environ["COWDIFF_KEEP"] = "1"
        try:
            res = P.fan_out(ROOT, part, shas, jid, workers, 12, "d%d" % rnd, src=rel, budget=budget) or {}
            left = [e for e in part if not P.answered(res.get(e), shas[e], jid)]
            if left and time.time() < t_end:
                print("%d came back with no answer: once more, 4 to a chunk" % len(left))
                res.update(P.fan_out(ROOT, left, shas, jid, workers, 4, "e%d" % rnd, src=rel, budget=budget) or {})
        finally:
            for k, v in old_env.items():
                if v is None:
                    os.environ.pop(k, None)
                else:
                    os.environ[k] = v
        led = P.read_ledger(ROOT)
        keep, moves, grew, fails = {}, {}, 0, []
        silent = [e for e in part if not P.answered(res.get(e), shas[e], jid)]
        answered = len(part) - len(silent)
        if len(part) >= 8 and answered == 0:
            # NOTHING answered at all: that is the provers not running, and the grind stops here rather than
            # spend its hours the same way. The test used to be "more than half of the pass is silent", which
            # cannot tell those two cases apart, and it cost real work: on 2026-11-27 the grind was killed at
            # 5 silent of 9 while the very same worker logs were handing back st0, out-of-region write,
            # callee-saved register, no clean state and timeout verdicts for the rows that did run. The silent
            # ones were `no_row_output` and blank-pattern units - properties of those units, not of the
            # provers - and abandoning every other unit for them cancelled the rest of the rounds for the
            # silver pool, which is the largest block of unproven bytes on the scoreboard.
            FAILED.append("the grind's provers gave no answer for %d of %d units (their logs: build/lift_par/d%d_*.log)"
                          % (len(silent), len(part), rnd))
            print("GRIND FAILED: " + FAILED[-1], flush=True)
            break
        if silent:
            # said, and gone on past: a unit that answers nothing is left exactly as it is, and the rest of
            # the pass keeps its states
            print("   %d of %d units answered nothing this round; they stay as they are and the grind goes on "
                  "with the %d that did: %s" % (len(silent), len(part), answered,
                                                " ".join(sorted(silent))[:180]), flush=True)
        for e in part:
            rec = res.get(e) or {}
            if not P.answered(rec, shas[e], jid):
                continue                    # no answer: not ground, it is tried again next cycle
            old = led.get(e) or {}
            was = memo.get(e) or {}
            # the most blocks it has had so far: in the ledger, or in an earlier round that was not kept
            before = max(_reached(old), int(was.get("reached") or 0) if was.get("key") == keys[e] else 0)
            more = _reached(rec) > before and rec.get("tier") in RANK
            grew += more
            memo[e] = {"key": keys[e], "round": rnd, "grew": bool(more), "reached": max(before, _reached(rec))}
            if rec.get("tier") == "fail" and not P.not_compared(rec):
                # as in seek and the aim: `no clean state` means the deeper states found no comparison at all,
                # not a disagreement - so it is not a FAIL to hand on as one
                fails.append(("%s %s %s" % (e, rec.get("why") or "", rec.get("detail") or "")).strip()[:300])
            up = RANK.get(rec.get("tier"), 0) - RANK.get(old.get("tier"), 0)
            if up > 0 or (up == 0 and more and rec.get("tier") in RANK):
                # a higher tier, or the same tier with more of its blocks reached: what it stands at now
                rec = dict(rec)
                rec["depth"] = "%d states, %d times the row's time" % (states, budget)
                keep[e] = rec
                if up > 0:
                    k = "%s -> %s" % (old.get("tier") or "none", rec.get("tier"))
                    moves[k] = moves.get(k, 0) + 1
        if keep:
            P._ledger_write(ROOT, keep)
            _settle(keep, shas, jid, workers, rel, deep_pins, rnd)
        state({"deep": memo})
        all_fails += fails
        n = sum(1 for r in keep.values() if r.get("tier") == "gold")
        new_gold += n
        print("grind round %d: %d of %d moved up a tier (%s); the blocks reached grew in %d; NEW GOLD %d"
              % (rnd + 1, sum(moves.values()), len(part),
                 ", ".join("%s %d" % kv for kv in sorted(moves.items())) or "none", grew, n), flush=True)
        if fails:
            print("%d units FAIL on a state the extra states reached (listed, not kept)" % len(fails))
        if moves:
            publish()
        if time.time() > t_end:
            print("the grind's %.0f hours are used: the next cycle goes on from here" % DEEP_HOURS)
            break
    with open(os.path.join(WORK, "deep_fails.txt"), "w", encoding="utf-8", newline="\n") as fh:
        fh.write("\n".join(all_fails) + ("\n" if all_fails else ""))
    print("NEW GOLD from the grind: %d" % new_gold, flush=True)
    return new_gold


def regold_snapshot(jid):
    """before a new judge's first verdicts overwrite the ledger: every unit that is gold under an EARLIER judge,
    with the depth its gold took (a grind row: 40000 states and up). Kept in the cycle's state, so a run that is
    stopped and started again still knows them."""
    led = P.read_ledger(ROOT)
    st = state().get("regold") or {}
    if st.get("jid") == jid:
        return st.get("units") or {}
    units = {}
    for e, rec in led.items():
        if rec.get("tier") == "gold" and rec.get("judge") and rec.get("judge") != jid:
            m = re.match(r"(\d+) states, (\d+) times", str(rec.get("depth") or ""))
            units[e] = [int(m.group(1)), int(m.group(2))] if m else [0, 1]
    # gold an earlier drop's re-judge already took (a drop's installer writes it from the ledger as it stood
    # before that judge, out of git): judged again the same way
    try:
        with open(os.path.join(WORK, "regold_extra.json"), encoding="utf-8") as fh:
            for e, nb in (json.load(fh) or {}).items():
                units.setdefault(e, list(nb))
    except (OSError, ValueError):
        pass
    state({"regold": {"jid": jid, "units": units}})
    return units


def regold(workers, jid):
    """step 3b. A NEW JUDGE DOES NOT TAKE GOLD AWAY BY SPENDING LESS. Step 3 judges every unit at the judge's
    own count (judge2.STATES_MAX); a unit the grind made gold had needed 40000 states or more, so under a new
    judge id it came back silver for want of states, not for anything in its code (OneP1: 301 units, among them
    10007860 198/198 at 12166 states, 196/198 at 2000). Every unit that was gold under the earlier judge and is
    short of it now is judged again at once at the depth its gold took (at least the grind's first round),
    before anything is published. A FAIL stays a FAIL: more states never excuse a mismatch.

    GOLD THAT STANDS ON A DEPTH DOES NOT STAND (2026-11-25). This step judged at depth and wrote the record
    with its `depth`, and that was all: the conveyor's daily recheck judges the judge's own way, so every such
    gold it drew came back silver (1002b6e0 876/876 to 871/876, 1002f1d0 1887/1887 to 1690/1887, 102a8730
    26/26 to 19/26; 90.935% to 90.645%). 440 gold stood that way. The judging here now reports the states its
    search found (the grind's way), and `_settle` pins them and judges the unit once more at the judge's own
    count: where it holds, that verdict is the record, with no depth. And every gold whose record still says
    `depth` is taken through the same once for its text and judge, whatever judge it was first made under."""
    units = (state().get("regold") or {}).get("units") or {}
    shas = P.units(ROOT)
    led = P.read_ledger(ROOT)
    tried = state().get("settle_tried") or {}
    by_depth, deep_gold = {}, set()
    for e, rec in sorted(led.items()):
        m = re.match(r"(\d+) states, (\d+) times", str(rec.get("depth") or ""))
        if (m and e in shas and rec.get("tier") == "gold" and rec.get("judge") == jid and rec.get("src") == shas[e]
                and tried.get(e) != "%s/%s" % (jid, shas[e])):
            by_depth.setdefault((int(m.group(1)), int(m.group(2))), []).append(e)
            deep_gold.add(e)
    if not units and not deep_gold:
        print("no unit was gold under an earlier judge, and no gold stands on a depth: nothing to do")
        return 0
    for e, (n, b) in sorted(units.items()):
        rec = led.get(e) or {}
        if e not in shas or rec.get("judge") != jid or rec.get("src") != shas[e] or rec.get("tier") not in SEEK_TIERS:
            continue
        n, b = max(n, DEEP_STATES), max(b, DEEP_BUDGET)
        by_depth.setdefault((n, b), []).append(e)
    if not by_depth:
        print("every unit that was gold under the earlier judge is gold under this one, or failed on a mismatch")
        return 0
    if deep_gold:
        print("%d gold stand on a depth: judged at it once more, with the states the search finds pinned"
              % len(deep_gold), flush=True)
    src = os.path.join(ROOT, "src", "lifted")
    back = 0
    for (n, b), ents in sorted(by_depth.items()):
        print("%d units that were gold, judged again with %d states and %d times the row's time"
              % (len(ents), n, b), flush=True)
        tree = os.path.join(WORK, "regold_tree")
        shutil.rmtree(tree, ignore_errors=True)
        os.makedirs(tree)
        for f in LAYOUT_FILES:
            shutil.copyfile(os.path.join(ROOT, "layout", f), os.path.join(tree, f))
        for e in ents:
            shutil.copyfile(os.path.join(src, "cow_%s.c" % e), os.path.join(tree, "cow_%s.c" % e))
        rel = os.path.relpath(tree, ROOT)
        old_env = {k: os.environ.get(k) for k in ("COWPAR_PROVER", "COW_DEEP_STATES", "COW_PINS_DIR", "COWDIFF_PINS",
                                                  "COWDIFF_KEEP")}
        pins = os.path.join(WORK, "regold_pins")
        shutil.rmtree(pins, ignore_errors=True)
        os.environ["COWPAR_PROVER"] = DEEP_PROVER
        os.environ["COW_DEEP_STATES"] = str(n)
        os.environ["COW_PINS_DIR"] = pins
        os.environ["COWDIFF_PINS"] = "1"
        os.environ["COWDIFF_KEEP"] = "1"
        try:
            res = P.fan_out(ROOT, ents, shas, jid, workers, 12, "g%d" % n, src=rel, budget=b) or {}
            left = [e for e in ents if not P.answered(res.get(e), shas[e], jid)]
            if left:
                print("%d came back with no answer: once more, 4 to a chunk" % len(left))
                res.update(P.fan_out(ROOT, left, shas, jid, workers, 4, "h%d" % n, src=rel, budget=b) or {})
        finally:
            for k, v in old_env.items():
                if v is None:
                    os.environ.pop(k, None)
                else:
                    os.environ[k] = v
        led = P.read_ledger(ROOT)
        keep, fails = {}, []
        for e in ents:
            rec = res.get(e) or {}
            if not P.answered(rec, shas[e], jid):
                continue
            if rec.get("tier") == "fail":
                fails.append(e)
                continue
            old = led.get(e) or {}
            if (RANK.get(rec.get("tier"), 0) > RANK.get(old.get("tier"), 0) or _reached(rec) > _reached(old)
                    or (e in deep_gold and rec.get("tier") == "gold")):
                rec = dict(rec)
                rec["depth"] = "%d states, %d times the row's time" % (n, b)
                keep[e] = rec
        if keep:
            P._ledger_write(ROOT, keep)
            _settle(keep, shas, jid, workers, rel, pins, "r%d" % n, what="regold at %d states" % n)
        mine = dict(state().get("settle_tried") or {})
        mine.update((e, "%s/%s" % (jid, shas[e])) for e in ents if e in deep_gold and P.answered(res.get(e), shas[e], jid))
        state({"settle_tried": mine})
        g = sum(1 for e, r in keep.items() if r.get("tier") == "gold" and e not in deep_gold)
        back += g
        mine_n = sum(1 for e in ents if e in deep_gold)
        if mine_n:
            print("of the %d that stood on this depth, %d are gold at it again"
                  % (mine_n, sum(1 for e, r in keep.items() if e in deep_gold and r.get("tier") == "gold")), flush=True)
        print("gold again: %d of %d%s" % (g, len(ents) - mine_n, ("; %d FAIL on a state the extra states reached (listed in "
                                                          "build/cycle/regold_fails.txt)" % len(fails)) if fails else ""),
              flush=True)
        if fails:
            with open(os.path.join(WORK, "regold_fails.txt"), "a", encoding="utf-8", newline="\n") as fh:
                fh.write("\n".join(fails) + "\n")
    print("GOLD BACK from regold: %d" % back, flush=True)
    return back


PIN_MAX = 1536         # the pinned states one row takes (tools/cow/cowdiff.c, PIN_STATES_MAX)


def _states_of(path):
    try:
        with open(path, encoding="utf-8") as fh:
            return list(json.load(fh).get("states") or [])
    except (OSError, ValueError):
        return []


def merge_states(entry, new_path):
    """The states a unit is judged with: the new synthesized ones, then the ones it already has in
    cow/seeds_auto that the new seek did not make again - a block an earlier seek reached stays reached. The
    earlier ones are only taken when all of them parse: one `--pin-args` value the harness cannot read makes a
    row drop every pinned state it has, and a file like that never counted for the verdict it stands beside."""
    old = _states_of(os.path.join(ROOT, "cow", "seeds_auto", entry + ".json"))
    if not old:
        return 0
    for st in old:
        for a in st.get("args") or []:
            a = str(a)
            if not (a[:1].isdigit() or a[:1] == "@"):
                return 0
    with open(new_path, encoding="utf-8") as fh:
        doc = json.load(fh)
    new = list(doc.get("states") or [])
    room = PIN_MAX - len(_states_of(os.path.join(ROOT, "cow", "seeds", entry + ".json"))) - len(new)

    def body(st):
        return json.dumps({k: v for k, v in st.items() if k != "note"}, sort_keys=True)
    have = {body(st) for st in new}
    added = 0
    for st in old:
        if added >= room:
            break
        if body(st) not in have:
            have.add(body(st))
            new.append(st)
            added += 1
    if added:
        doc["states"] = new
        with open(new_path, "w", encoding="utf-8", newline="\n") as fh:
            json.dump(doc, fh, indent=1)
    return added


def state(update=None):
    p = os.path.join(WORK, "state.json")
    try:
        with open(p, encoding="utf-8") as fh:
            d = json.load(fh)
    except (OSError, ValueError):
        d = {}
    if update:
        d.update(update)
        with open(p, "w", encoding="utf-8") as fh:
            json.dump(d, fh, indent=1, sort_keys=True)
    return d


def ledger_drop(entries):
    if not entries:
        return
    import judge2
    lp = os.path.join(ROOT, P.LEDGER)
    for _try in range(600):
        try:
            with open(lp, encoding="utf-8") as fh:
                data = json.load(fh)
            for e in entries:
                data.pop(e, None)
            judge2.write_json(lp, data)
            return
        except (PermissionError, ValueError):
            time.sleep(0.2)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--workers", type=int, default=0)
    ap.add_argument("--no-line", action="store_true")
    ap.add_argument("--no-deep", action="store_true", help="leave the grind (step 9) out")
    ap.add_argument("--aim-hours", type=float, default=float(os.environ.get("COW_AIM_HOURS") or 24))
    ap.add_argument("--llm-parallel", type=int, default=8)
    a = ap.parse_args()
    rc, out = P.run(["git", "rev-parse", "--abbrev-ref", "HEAD"], ROOT)
    if rc or (out or [""])[0].strip() != "main":
        stop("the checkout is on '%s', not main" % (out or ["?"])[0].strip())
    os.makedirs(WORK, exist_ok=True)
    for k in KNOBS:
        os.environ[k] = "1"
    workers = a.workers or P.default_workers()
    rc, out = P.run([P.PY, "tools/cow/judge2.py", "--judge-id"], ROOT)
    jid = (out or [""])[-1].strip()
    print("cycle -> %s   judge %s   %d provers" % (ROOT, jid, workers), flush=True)

    step("1. stop the line, wait for any other prover")
    quiet()
    P.fold_leftovers(ROOT)

    step("2. grow: lift every function that has no unit")
    merged, recs = merged_dump()
    sizes = {k[2:].zfill(8): int(d.get("body_count") or 0) for k, d in recs.items()}
    src = os.path.join(ROOT, "src", "lifted")
    have = {f[4:12] for f in os.listdir(src) if f.startswith("cow_") and f.endswith(".c")}
    # what an earlier cycle added and had to remove (no answer, no compile) is not tried again until the
    # lifter or the judge is another one
    rej_key = "%s/%s" % (lifter_stamp(), jid)
    rejected = set(state().get("rejected", {}).get(rej_key, []))
    cands = sorted(k for k, d in recs.items()
                   if k[2:].zfill(8) not in have and k[2:].zfill(8) not in rejected
                   and not d.get("is_thunk") and not d.get("external"))
    lifted, got, _out = lift(merged, cands, "grow")
    fresh = [e for e in got if e not in have]
    # units an earlier, stopped run added (this loop's, or Grow's): still to be judged, and removed if they
    # never answer
    mine_file = os.path.join(WORK, "new_units.txt")
    # CARRIED means STILL WAITING, not "once added". The list is a file build/grow wrote (1,607 entries
    # today, and nothing prunes it) plus whatever the last cycle left in its own copy, and the rule below
    # kept any entry whose file was still on disk - so a unit proved gold three cycles ago was carried,
    # re-kept by step 4 and reported AGAIN as "NEW GOLD from grow: 1598 functions, 125457 bytes", the same
    # sentence in the last two cycles' logs, which is how a cycle that added nothing reads like one that
    # added a twelfth of the corpus. A unit the judge has answered, on the file that is there now, has
    # nothing left to carry: it lives in the ledger and in src/lifted, and its provenance is the journal,
    # not this list. What stays is exactly what no judge has spoken about yet.
    led_now = P.read_ledger(ROOT)

    def _waiting(e):
        rec = led_now.get(e) or {}
        return not (rec.get("judge") == jid and rec.get("src") == P.file_sha(os.path.join(src, "cow_%s.c" % e))
                    and rec.get("tier") in KEEP_TIERS)

    carried = sorted({e for e in read_list(mine_file) + read_list(os.path.join(ROOT, "build", "grow", "new_units.txt"))
                      if e in have and e not in set(fresh) and _waiting(e)})
    new = sorted(set(fresh) | set(carried))
    with open(mine_file, "w", encoding="utf-8", newline="\n") as fh:
        fh.write("\n".join(new) + "\n")
    print("%d new units (%d bytes of code), %d carried on from a stopped run"
          % (len(fresh), sum(sizes.get(e, 0) for e in fresh), len(carried)), flush=True)
    if fresh:
        try:
            layout_merge.merge(lifted, os.path.join(ROOT, "layout"), check=True)
        except SystemExit as exc:
            stop("the new bridge files cannot be merged: %s. src/ and layout/ were not changed." % exc)
        backup = os.path.join(WORK, "layout_backup")
        os.makedirs(backup, exist_ok=True)
        for f in LAYOUT_FILES:
            shutil.copyfile(os.path.join(ROOT, "layout", f), os.path.join(backup, f))
        print("layout/ gained: %s" % layout_merge.merge(lifted, os.path.join(ROOT, "layout")))
        for e in fresh:
            shutil.copyfile(os.path.join(lifted, "cow_%s.c" % e), os.path.join(src, "cow_%s.c" % e))

    regold_snapshot(jid)        # before step 3 writes this judge's first verdicts over the earlier judge's

    step("3. judge everything that has no verdict")
    # every verdict of this step also leaves the list of the sites its row never reached (build/aim/sites), so
    # step 7 aims from the first round without judging anything twice
    os.environ["COWDIFF_UNREACHED"] = "1"
    os.environ["COW_SITES_DIR"] = os.path.join(ROOT, "build", "aim", "sites")
    try:
        P.judge_rest(ROOT, jid, workers)
    finally:
        os.environ.pop("COWDIFF_UNREACHED", None)
        os.environ.pop("COW_SITES_DIR", None)

    step("3b. regold: every unit that was gold under the earlier judge, judged again at the depth its gold took")
    regold(workers, jid)

    step("4. remove the added units that did not compile or got no answer")
    led = P.read_ledger(ROOT)
    gone, kept = [], {}
    silent = []
    for e in new:
        path = os.path.join(src, "cow_%s.c" % e)
        if not os.path.isfile(path):
            continue
        rec = led.get(e) or {}
        tier = rec.get("tier") or "none"
        if rec.get("judge") == jid and rec.get("src") == P.file_sha(path) and tier in KEEP_TIERS:
            kept[e] = tier
        elif tier in NO_ANSWER:
            silent.append(e)                     # the MACHINERY did not answer: ask it again, see below
        else:
            os.remove(path)
            gone.append(e)
    # A unit the machinery never answered is not a unit that failed. `nocompile` under 24 provers, a row that
    # timed out or hung: on a loaded box those are NO answer, not a different one - which is exactly the
    # argument the daily recheck makes in its own words ("a row that ran out of time (`timeout`, `hang`) has
    # not been given a different ANSWER; on a loaded machine it has been given none") and the reason it asks
    # such a row again ALONE. Step 4 did not: it took the first answer as final, deleted the unit, and put the
    # function into `rejected` - which is keyed by lifter and judge (rej_key above), so GROW NEVER TRIES IT
    # AGAIN while both are unchanged. Measured on 2026-11-27: one cycle booked 13 units as
    # nocompile/compile_blocked, and 6 of them, judged again on a quieter box, compiled and answered normally
    # (fail/memory, timeout, no clean state). Those 6 were functions the pipeline had given up on for a
    # transient. So the unanswered ones are asked once more with a single prover and one unit per chunk - the
    # contention removed - and only what still has no answer is discarded. This can only ADD a kept unit: a
    # tier in KEEP_TIERS is the same verdict step 3 would have kept, and nothing that the judge answered is
    # re-asked, so no existing verdict is disturbed. `noisy` is deliberately left out (the judge DID answer);
    # whether it belongs with NO_ANSWER is a question for whoever next looks at it.
    if silent:
        # settle the cheap transient now, on one prover so the contention that caused it is gone
        ask = [e for e in silent if (led.get(e) or {}).get("tier") in NO_ANSWER_REASK][:NO_ANSWER_ASK]
        if ask:
            print("%d added unit(s) got no answer from the batch; asking %d compile failure(s) again on one "
                  "prover, %d left for the next cycle un-rejected"
                  % (len(silent), len(ask), len(silent) - len(ask)), flush=True)
            shas = {e: P.file_sha(os.path.join(src, "cow_%s.c" % e)) for e in ask}
            P.fan_out(ROOT, sorted(shas), shas, jid, 1, 1, "r4")
            led = P.read_ledger(ROOT)
            for e in ask:
                path = os.path.join(src, "cow_%s.c" % e)
                rec = led.get(e) or {}
                if (rec.get("judge") == jid and os.path.isfile(path)
                        and rec.get("src") == P.file_sha(path)
                        and (rec.get("tier") or "none") in KEEP_TIERS):
                    kept[e] = rec["tier"]                  # the answer the batch never got
                else:
                    if os.path.isfile(path):
                        os.remove(path)
                    gone.append(e)                         # a real answer this time, and not one we keep
        # everything else with no answer: the file goes (a unit the judge never answered must not sit in
        # src/lifted, where one bad body has stopped `cl` from starting at all), but it is NOT added to `gone`,
        # so ledger_drop does not retire it and the next cycle's quieter machine gets its turn.
        for e in silent:
            if e in ask:
                continue
            p_ = os.path.join(src, "cow_%s.c" % e)
            if os.path.isfile(p_):
                os.remove(p_)
    ledger_drop(gone)
    state({"rejected": {rej_key: sorted(rejected | set(gone))}})
    count = {}
    for t in kept.values():
        count[t] = count.get(t, 0) + 1
    gold = [e for e, t in kept.items() if t == "gold"]
    print("kept %d added units (%s), removed %d" % (len(kept), ", ".join("%s %d" % kv for kv in sorted(count.items())) or "none", len(gone)))
    print("NEW GOLD from grow: %d functions, %d bytes" % (len(gold), sum(sizes.get(e, 0) for e in gold)), flush=True)
    with open(mine_file, "w", encoding="utf-8", newline="\n") as fh:
        fh.write("")                                    # all settled: nothing is carried into the next cycle

    step("5. relift: every unit that is not gold, if the lifter changed")
    stamp = lifter_stamp()
    if state().get("relift_stamp") == stamp:
        print("the lifter is the one the last relift used (%s): nothing to do" % stamp)
    else:
        shas = P.units(ROOT)
        led = P.read_ledger(ROOT)
        rl = []
        for e in sorted(shas):
            rec = led.get(e) or {}
            if rec.get("judge") != jid or rec.get("src") != shas[e] or rec.get("tier") not in RELIFT_TIERS:
                continue
            with open(os.path.join(src, "cow_%s.c" % e), encoding="utf-8", errors="replace") as fh:
                if "COW_OWNER: conveyor" in fh.read():
                    continue
            rl.append("0x" + e)
        rdir, rgot, _out = lift(merged, rl, "relift")
        changed = [e for e in rgot if code_of(os.path.join(rdir, "cow_%s.c" % e)) != code_of(os.path.join(src, "cow_%s.c" % e))]
        print("%d of them come out with different code" % len(changed), flush=True)
        keep, moves = {}, {}
        if changed:
            tree = os.path.join(WORK, "tree")
            shutil.rmtree(tree, ignore_errors=True)
            os.makedirs(tree)
            for f in LAYOUT_FILES:
                shutil.copyfile(os.path.join(ROOT, "layout", f), os.path.join(tree, f))
            layout_merge.merge(rdir, tree)
            new_sha = {}
            for e in changed:
                shutil.copyfile(os.path.join(rdir, "cow_%s.c" % e), os.path.join(tree, "cow_%s.c" % e))
                new_sha[e] = P.file_sha(os.path.join(tree, "cow_%s.c" % e))
            rel = os.path.relpath(tree, ROOT)
            res = P.fan_out(ROOT, changed, new_sha, jid, workers, 40, "r1", src=rel) or {}
            left = [e for e in changed if not P.answered(res.get(e), new_sha[e], jid)]
            if left:
                print("%d came back with no answer: once more, 6 to a chunk" % len(left))
                res.update(P.fan_out(ROOT, left, new_sha, jid, workers, 6, "r2", src=rel) or {})
            led = P.read_ledger(ROOT)
            for e in changed:
                rec = res.get(e) or {}
                if not P.answered(rec, new_sha[e], jid):
                    continue
                old = (led.get(e) or {}).get("tier") or "none"
                if RANK.get(rec.get("tier"), 0) > RANK.get(old, 0):
                    keep[e] = rec
                    k = "%s -> %s" % (old, rec.get("tier"))
                    moves[k] = moves.get(k, 0) + 1
            if keep:
                backup = os.path.join(WORK, "relift_backup")
                os.makedirs(backup, exist_ok=True)
                layout_merge.merge(rdir, os.path.join(ROOT, "layout"))
                for e in keep:
                    dst = os.path.join(src, "cow_%s.c" % e)
                    shutil.copyfile(dst, os.path.join(backup, "cow_%s.c" % e))
                    shutil.copyfile(os.path.join(tree, "cow_%s.c" % e), dst)
                P._ledger_write(ROOT, keep)
        print("kept %d of %d: %s" % (len(keep), len(changed), ", ".join("%s %d" % kv for kv in sorted(moves.items())) or "none"))
        print("NEW GOLD from relift: %d" % sum(1 for r in keep.values() if r.get("tier") == "gold"), flush=True)
        state({"relift_stamp": stamp})

    step("6. rise: every function that is not gold, lifted from its instructions")
    rise(workers, jid)

    step("7. aim: every unit that is not gold, driven at the sites it misses until it is gold or stops moving")
    import aim
    if not RISE_NOCLEAN:
        try:
            with open(os.path.join(WORK, "rise_verdicts.json"), encoding="utf-8") as fh:
                earlier = json.load(fh)
        except (OSError, ValueError):
            earlier = {}
        for e, v in earlier.items():
            path = os.path.join(WORK, "rise_tree", "cow_%s.c" % e)
            if (v or {}).get("why") == "no clean state" and os.path.isfile(path):
                RISE_NOCLEAN[e] = path
    aim.run(workers, jid, a.aim_hours, run_live=run_live, publish=publish, rise_noclean=RISE_NOCLEAN,
            failed=FAILED)

    step("8. publish what the aim proved (docs/cow/WHY.md, the scoreboard)")
    publish()

    step("9. the grind: more states for every unit that is still weak or silver")
    if a.no_deep:
        print("--no-deep: skipped")
    else:
        deep(workers, jid)

    step("10. why not gold (docs/cow/WHY.md), publish, the line")
    publish()
    # the model line: several requests at once, and functions up to 1 KB. It was 1 request and 128 bytes.
    conf_path = os.path.join(ROOT, "cow", "conveyor", "config.json")
    try:
        with open(conf_path, encoding="utf-8") as fh:
            conf = json.load(fh)
    except (OSError, ValueError):
        conf = {}
    want = {"parallel": max(int(conf.get("parallel") or 1), a.llm_parallel),
            "size_max": max(int(conf.get("size_max") or 128), 1024)}
    if any(conf.get(k) != v for k, v in want.items()):
        conf.update(want)
        os.makedirs(os.path.dirname(conf_path), exist_ok=True)
        with open(conf_path, "w", encoding="utf-8", newline="\n") as fh:
            json.dump(conf, fh, indent=1, sort_keys=True)
        print("the line: %d requests to the model at once, functions up to %d bytes" % (conf["parallel"], conf["size_max"]))
    if not a.no_line:
        rc, out = P.run([P.PY, "tools/cow/conveyor.py", "start"], ROOT, 300)
        for ln in out[-2:]:
            print(ln)
    if FAILED:
        # everything after it still ran (the table, the publish, the line); the last line says what did not
        print("\nCYCLE STOPPED: " + "; ".join(FAILED), flush=True)
        return 1
    print("\nCYCLE DONE", flush=True)
    return 0


if __name__ == "__main__":
    sys.exit(main())
