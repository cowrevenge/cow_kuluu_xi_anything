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
    7. SEEK: when tools/cow/rise/seek.py, rise or the judge changed since the last cycle, synthesizes states for
       every weak and silver unit (states that drive into the blocks random states never reach), judges those
       units with them in a scratch tree, and keeps a unit's synthesized states (cow/seeds_auto) only where
       they raise its tier; a FAIL they expose is listed (build/cycle/seek_fails.txt), never kept;
    8. publishes; sets the model line to work in parallel; starts the line.

Run again at any time: it carries on where it stopped. Nothing is reset, stashed, rebased or force-pushed.
It ends with `CYCLE DONE` or `CYCLE STOPPED: <why>`.

    --workers N      provers at once (default: three per four logical processors)
    --no-line        do not start the line at the end
    --llm-parallel N concurrent requests the line sends to the model (default 8)
"""
import argparse
import hashlib
import json
import os
import re
import shutil
import sys
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
    state({"rise_stamp": stamp})
    return n


def seek(workers, jid, force=False):
    """step 7: synthesized states for the weak and silver units. The states are judged from a scratch
    directory (COW_SEEDS_AUTO) against the unit texts as they are, and a unit's file is copied into
    cow/seeds_auto only where its tier goes up. Nothing that is there now is removed: the verdicts in the
    ledger were given with those states."""
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
        rc, out = P.run([P.PY, SEEK, "--list", lst, "--out", sdir, "--jobs", str(workers)], ROOT, 8 * 3600)
    finally:
        if env_src is None:
            os.environ.pop("COW_LIFT_SRC", None)
        else:
            os.environ["COW_LIFT_SRC"] = env_src
    for ln in out[-10:]:
        print("   " + ln)
    got = sorted(f[:8] for f in os.listdir(sdir) if f.endswith(".json") and len(f) == 13) \
        if os.path.isdir(sdir) else []
    got = [e for e in got if e in set(cands)]
    print("seek ran %.0f minutes: %d units have synthesized states" % ((time.time() - t0) / 60, len(got)), flush=True)
    keep, moves, fails = {}, {}, []
    if got:
        rel = os.path.relpath(tree, ROOT)
        shas = dict(shas)
        for e in got:
            if e not in shas:
                shas[e] = P.file_sha(os.path.join(tree, "cow_%s.c" % e))
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
            old = (led.get(e) or {}).get("tier") or "none"
            if rec.get("tier") == "fail":
                fails.append(("%s %s %s" % (e, rec.get("why") or "", rec.get("detail") or "")).strip()[:300])
            if RANK.get(rec.get("tier"), 0) > RANK.get(old, 0):
                keep[e] = rec
                k = "%s -> %s" % (old, rec.get("tier"))
                moves[k] = moves.get(k, 0) + 1
        if keep:
            dst_dir = os.path.join(ROOT, "cow", "seeds_auto")
            os.makedirs(dst_dir, exist_ok=True)
            for e in keep:
                shutil.copyfile(os.path.join(sdir, e + ".json"), os.path.join(dst_dir, e + ".json"))
                unit = os.path.join(src, "cow_%s.c" % e)
                if not os.path.isfile(unit):
                    shutil.copyfile(os.path.join(tree, "cow_%s.c" % e), unit)   # a function that had no unit
            P._ledger_write(ROOT, keep)
    with open(os.path.join(WORK, "seek_fails.txt"), "w", encoding="utf-8", newline="\n") as fh:
        fh.write("\n".join(fails) + ("\n" if fails else ""))
    print("kept %d of %d: %s" % (len(keep), len(got), ", ".join("%s %d" % kv for kv in sorted(moves.items())) or "none"))
    if fails:
        print("%d units FAIL on a synthesized state (the unit and the original disagree there): build/cycle/seek_fails.txt"
              % len(fails))
    n = sum(1 for r in keep.values() if r.get("tier") == "gold")
    print("NEW GOLD from seek: %d" % n, flush=True)
    state({"seek_stamp": stamp})
    return n


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
    P.judge_rest(ROOT, jid, workers)

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

    step("7. seek: synthesized states for the weak and silver units")
    seek(workers, jid)

    step("8. why not gold (docs/cow/WHY.md), publish, the line")
    rc, out = P.run([P.PY, "tools/cow/why_table.py"], ROOT, 600)
    for ln in out[-3:]:
        print("   " + ln)
    rc, out = P.run([P.PY, "tools/cow/conveyor.py", "publish"], ROOT, 3600)
    pub = [ln for ln in out if ln.startswith("PUBLISH ")][-1:]
    print(pub[0] if pub else "PUBLISH: no result line")
    if not pub or not pub[0].startswith("PUBLISH OK"):
        for ln in out[-6:]:
            print("   " + ln)
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
    print("\nCYCLE DONE", flush=True)
    return 0


if __name__ == "__main__":
    sys.exit(main())
