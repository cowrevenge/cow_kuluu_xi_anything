"""The standing loop of cow_kuluu_xi_anything, one command (the panel's Cycle button):

    python tools/cow/cycle.py

    1. stops the line and waits for any other prover; folds journals a stopped run left;
    2. GROW: lifts every function that has no unit with the lifter as it is now; adds the ones that lift;
    3. judges every unit that has no verdict of the current judge (many provers, journals);
    4. removes the units this loop added that did not compile or never answered;
    5. RELIFT: when the lifter changed since the last cycle, lifts every unit that is not gold again, judges
       the ones whose code changed in a scratch tree and keeps a new text only where it ranks higher;
    6. publishes; sets the model line to work in parallel; starts the line.

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

    step("6. publish, the line")
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
