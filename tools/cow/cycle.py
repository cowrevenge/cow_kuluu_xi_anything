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
RANK = {"gold": 3, "silver": 2, "weak": 1}
RELIFT_TIERS = ("fail", "weak", "silver", "noisy")
KNOBS = ("COW_MODEL_NPUSH_FRAME_AWARE", "COW_MODEL_TAIL_POP_RUN", "COW_LIFT_TAIL_EPILOGUE", "COW_LIFT_RET_BASE_LIVE")
WORK = os.path.join(ROOT, "build", "cycle")
LAYOUT_FILES = ("lifted_addresses.h", "lifted_bridges.h", "lifted_bridges.c")

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
    while True:
        if line_procs(me):
            print("the line is running: asking it to stop (it ends after the step it is in)", flush=True)
            P.run([P.PY, "tools/cow/conveyor.py", "stop"], ROOT)
            t1 = time.time()
            while time.time() - t1 < 600 and line_procs(me):
                time.sleep(10)
            for pid, _c in line_procs(me):
                P.kill(pid)
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


def rise(workers, jid, force=False):
    """step 6: every function that is not gold, lifted from its instructions; a text is kept only where it
    ranks higher than the unit there now (or where there is none)"""
    stamp = rise_stamp()
    if state().get("rise_stamp") == stamp and not force:
        print("rise is the one the last cycle used (%s): nothing to do" % stamp)
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
    rc, out = P.run([P.PY, RISE, "--all", "--machine-only", "--skip-list", skip, "--out", rdir,
                     "--report", os.path.join(WORK, "rise_report.json")], ROOT, 7200)
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
    if changed:
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
        res = P.fan_out(ROOT, changed, new_sha, jid, workers, 40, "s1", src=rel) or {}
        left = [e for e in changed if not P.answered(res.get(e), new_sha[e], jid)]
        if left:
            print("%d came back with no answer: once more, 6 to a chunk" % len(left))
            res.update(P.fan_out(ROOT, left, new_sha, jid, workers, 6, "s2", src=rel) or {})
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
            if rec.get("tier") == "fail":
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
DEEP_BUDGET = 4             # round 1: 4 times the row's time
DEEP_ROUNDS = int(os.environ.get("COW_DEEP_ROUNDS") or 3)
DEEP_HOURS = float(os.environ.get("COW_DEEP_HOURS") or 10)    # the grind's time in one cycle; the next goes on


def _file_sha_or(path):
    return P.file_sha(path) if os.path.isfile(path) else "-"


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
        states, budget = DEEP_STATES * 4 ** rnd, DEEP_BUDGET * 4 ** rnd

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
        old_env = {k: os.environ.get(k) for k in ("COWPAR_PROVER", "COW_DEEP_STATES")}
        os.environ["COWPAR_PROVER"] = DEEP_PROVER
        os.environ["COW_DEEP_STATES"] = str(states)
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
        if len(part) >= 8 and len(silent) * 2 > len(part):
            # most of a pass with no answer is the provers not running, not the units: said, and the grind
            # stops here rather than spend its hours the same way
            FAILED.append("the grind's provers gave no answer for %d of %d units (their logs: build/lift_par/d%d_*.log)"
                          % (len(silent), len(part), rnd))
            print("GRIND FAILED: " + FAILED[-1], flush=True)
            break
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
            if rec.get("tier") == "fail":
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


PIN_MAX = 512          # the pinned states one row takes (tools/cow/cowdiff.c, PIN_STATES_MAX)


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
    carried = sorted({e for e in read_list(mine_file) + read_list(os.path.join(ROOT, "build", "grow", "new_units.txt"))
                      if e in have and e not in set(fresh)})
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

    step("4. remove the added units that did not compile or got no answer")
    led = P.read_ledger(ROOT)
    gone, kept = [], {}
    for e in new:
        path = os.path.join(src, "cow_%s.c" % e)
        if not os.path.isfile(path):
            continue
        rec = led.get(e) or {}
        tier = rec.get("tier") or "none"
        if rec.get("judge") == jid and rec.get("src") == P.file_sha(path) and tier in KEEP_TIERS:
            kept[e] = tier
        else:
            os.remove(path)
            gone.append(e)
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
