"""THE AIM (cycle step 7, judge 14): every unit that is not gold, driven to gold one site at a time.

The old step 7 (seek) gave each function 120 seconds and 32 states, aimed at EVERY block in order, without
knowing which of them the judge's random states had already reached. On 12 sampled units it made 124 states
and moved one: they went to blocks that were covered already. This step closes the loop instead:

    judge (COWDIFF_UNREACHED=1)  ->  build/aim/sites/<entry>.txt: the sites never reached in a clean state
    seek --reached build/aim/sites  ->  states aimed only at the blocks with such a site in them, with time
                                        that follows how many there are (rise/seek.py SECONDS_PER_TARGET)
    judge again with those states   ->  kept where the unit's tier goes up or it reaches more of its sites
    ... round after round, until a unit is gold or a round moves nothing in it twice

A unit's states go into cow/seeds_auto, and its verdict into the ledger, only where they rank higher: the same
rule as the old seek and the grind. A FAIL the new states expose is listed (build/aim/fails.txt), never kept:
it is a real difference the unit has on a path no state reached before, and it goes to the lifter lanes.

Every site still unreached when this step ends has its reason in build/aim/seek_out/<entry>.why.json (one per
blocked block, in seek's words). tools/cow/why_table.py turns those into docs/cow/SITES.csv: the gittable.

Nothing here is a judge file. The judge's flags, states and comparison are the same; only which states a row
is given changes, which is what cow/seeds_auto has always been for.
"""
import hashlib
import json
import re
import math
import os
import shutil
import sys
import time

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
sys.path.insert(0, HERE)
import par_prove as P                                    # noqa: E402

AIM = os.path.join(ROOT, "build", "aim")
SITES = os.path.join(AIM, "sites")              # the sites each unit's KEPT states leave unreached
SEEK = "tools/cow/rise/seek.py"
LAYOUT_FILES = ("lifted_addresses.h", "lifted_bridges.h", "lifted_bridges.c")
PIN_MAX = 1536          # pinned states one row takes (tools/cow/cowdiff.c PIN_STATES_MAX)
RANK = {"gold": 3, "silver": 2, "weak": 1}
STALL_ROUNDS = 1        # seek is deterministic: the same unit with the same states and the same site list makes
                        # the same states again, so one round that moves nothing leaves the unit for this pass


def _say(msg):
    print(msg, flush=True)


def _sha_or(path):
    return P.file_sha(path) if os.path.isfile(path) else "-"


def _reached(rec):
    try:
        return int(str((rec or {}).get("blocks") or "0/0").split("/")[0])
    except ValueError:
        return 0


def _blocks(rec):
    try:
        a, t = (int(x) for x in str((rec or {}).get("blocks") or "0/1").split("/"))
        return a, max(t, 1)
    except ValueError:
        return 0, 1


def _states_of(path):
    try:
        with open(path, encoding="utf-8") as fh:
            return list(json.load(fh).get("states") or [])
    except (OSError, ValueError):
        return []


def _body(st):
    return json.dumps({k: v for k, v in st.items() if k != "note"}, sort_keys=True)


def _parses(st):
    """a state the harness can read: one bad --pin-args value drops every pinned state of the row"""
    for a in st.get("args") or []:
        a = str(a)
        if not (a[:1].isdigit() or a[:1] == "@"):
            return False
    return True


def _built_for(path):
    """the unit text a seeds file's states were built for (its file sha), or None for a file from before that
    was recorded"""
    try:
        with open(path, encoding="utf-8") as fh:
            return json.load(fh).get("unit")
    except (OSError, ValueError):
        return None


def _merge(entry, new_states, out_path, text=None, fresh_only=False):
    """the states a unit is tried with: the new ones first, then the ones it has, up to what a row takes.
    THE STATES BELONG TO THE TEXT THEY WERE BUILT FOR. seek lays a state down on rise's reading of the code (what
    an unknown callee pops, which words an argument still holds); a newer text of the unit can read it
    differently, and a state built on the old reading is then a world no run of the program has (0x1030555f: a
    slot filled with a function popping 20 bytes, for a call whose caller cleans up after it, and the original's
    frame broke under it). So the old states come along only for the text they were built for: the same file
    sha, or, for a file from before that was recorded, the unit in src/lifted. A file from before that is used
    with a newer text as well, until the newer text FAILs with it: then (fresh_only) the newer text is tried with
    the new states alone."""
    hand = len(_states_of(os.path.join(ROOT, "cow", "seeds", entry + ".json")))
    old_path = os.path.join(ROOT, "cow", "seeds_auto", entry + ".json")
    old = [st for st in _states_of(old_path) if _parses(st)]
    if text is not None:
        sha = P.file_sha(text)
        was = _built_for(old_path)
        unit = os.path.join(ROOT, "src", "lifted", "cow_%s.c" % entry)
        if (was is not None and was != sha) or (fresh_only and was is None
                                                 and os.path.abspath(text) != os.path.abspath(unit)):
            old = []
    # the ones it has FIRST, the new ones after: a pinned state is numbered by its place in the list, and the
    # states the unit already had keep their numbers (and so their worlds), so what they reached is reached
    # again and the new ones only add (cowdiff.c judge 15, every state's seed its own). Over the cap, the new
    # ones stay and the oldest of the old ones go.
    fresh, have = [], set()
    for st in new_states:
        b = _body(st)
        if b not in have and _parses(st):
            have.add(b)
            fresh.append(st)
    kept = []
    for st in old:
        b = _body(st)
        if b not in have:
            have.add(b)
            kept.append(st)
    room = max(0, PIN_MAX - hand - len(fresh))
    out = (kept[:room] + fresh)[:max(0, PIN_MAX - hand)]
    with open(out_path, "w", encoding="utf-8", newline="\n") as fh:
        doc = {"comment": "synthesized by tools/cow/rise/seek.py through tools/cow/aim.py - states that take "
                          "the branches random states do not; regenerated, never hand-edited",
               "states": out}
        if text is not None:
            doc["unit"] = P.file_sha(text)        # the unit text these states were built for
        json.dump(doc, fh, indent=1)
    return len(out)


_FIX_CASE = re.compile(r"case 0x([0-9a-f]{8})u:\s*\{(.*?)\n    \}", re.S)
_FIX_ARG = re.compile(r"g->(e[a-z]{2}) = arg(\d+);")


def _as_the_fix_reads(path, e, st):
    """A STATE THAT STARTS AT A BLOCK puts each input where cow_entry_fix_<e> reads it from. A register the
    fix rebuilds from an argument word (`g->ebp = arg2;`: the original loaded it from there earlier) is read
    from that word, so a value seek laid down in the register goes into the argument word as well; laid in the
    register alone, the fix overwrote it with whatever the word held (0x1011cb50: ebp = 0, every state faulted
    on its first store)."""
    at = st.get("entry")
    regs = st.get("regs") or {}
    if not at or not regs:
        return st
    try:
        with open(path, encoding="utf-8", errors="replace") as fh:
            text = fh.read()
    except OSError:
        return st
    i = text.find("cow_entry_fix_%s(" % e)
    if i < 0:
        return st
    want = int(at, 16)
    for m in _FIX_CASE.finditer(text, i):
        if int(m.group(1), 16) != want:
            continue
        st = dict(st)
        args = list(st.get("args") or ["0", "0", "0", "0"])
        regs = dict(regs)
        for r, k in _FIX_ARG.findall(m.group(2)):
            k = int(k) - 1
            if r in regs and 0 <= k < 8:
                while len(args) <= k:
                    args.append("0")
                v = regs.pop(r)
                args[k] = v if v[:1].isdigit() else "@" + v
        st["args"] = args
        if len(args) > 4:
            st["nargs"] = len(args)
        if regs:
            st["regs"] = regs
        else:
            st.pop("regs", None)
        break
    return st


def site_list(e):
    """(the key of the states the list was judged with, [unreached sites]) from build/aim/sites, or (None, None)"""
    try:
        with open(os.path.join(SITES, e + ".txt"), encoding="utf-8") as fh:
            lines = fh.read().splitlines()
    except OSError:
        return None, None
    if not lines or not lines[0].startswith("# "):
        return None, None
    return lines[0][2:].strip(), [ln for ln in lines[1:] if ln.strip()]


def _memo(update=None):
    p = os.path.join(AIM, "state.json")
    try:
        with open(p, encoding="utf-8") as fh:
            d = json.load(fh)
    except (OSError, ValueError):
        d = {}
    if update is not None:
        d.update(update)
        tmp = p + ".tmp"
        with open(tmp, "w", encoding="utf-8", newline="\n") as fh:
            json.dump(d, fh, indent=0, sort_keys=True)
        os.replace(tmp, p)
    return d


def _has_entries(path, e):
    try:
        with open(path, encoding="utf-8", errors="replace") as fh:
            return ("cow_entry_fix_%s(" % e) in fh.read()
    except OSError:
        return False


def entry_states(e, sites):
    """BLOCK ENTRY (judge 14): one state starting at each block that still has a site no state reached. The
    blocks are rise's (seek wrote them beside its per-block reasons); the unit's cow_entry_fix_<entry> makes
    the state agree with the unit there, and says 0 for a block it cannot start at (that state then starts at
    the entry, as any other)."""
    why = {}
    try:
        with open(os.path.join(AIM, "why", e + ".why.json"), encoding="utf-8") as fh:
            why = json.load(fh)
    except (OSError, ValueError):
        pass
    starts = sorted(int(b, 16) for b in (why.get("blocks") or []))
    if not starts:
        return []
    want, out = set(), []
    for a in sites:
        lo, hi = 0, len(starts)
        while lo < hi:
            mid = (lo + hi) // 2
            if starts[mid] <= a:
                lo = mid + 1
            else:
                hi = mid
        if lo and starts[lo - 1] != int(e, 16):
            want.add(starts[lo - 1])
    for b in sorted(want):
        out.append({"note": "aim: starts at block %08x" % b, "args": ["0", "0", "0", "0"], "entry": "0x%08x" % b})
        # the same block with every register an object: what a block reads through is then memory that is
        # there (the harness fills it), and the state gets past its first field read instead of faulting on
        # it; the judge's own repairs and corpus go on from both
        regs = {r: "heap+0x%x" % (0x40 + 0x4000 * (k + 1)) for k, r in
                enumerate(("eax", "ecx", "edx", "ebx", "esi", "edi"))}
        out.append({"note": "aim: starts at block %08x, registers as objects" % b, "args": ["0", "0", "0", "0"],
                    "regs": regs, "entry": "0x%08x" % b})
    return out


def candidates(jid, rise_noclean=None):
    """entry -> the unit's text: every unit that is weak or silver under this judge, every unit whose original
    faulted in every state (`no clean state`), and rise's lifts of functions with no unit that came back that
    way (their text is in build/cycle/rise_tree)."""
    src = os.path.join(ROOT, "src", "lifted")
    shas = P.units(ROOT)
    led = P.read_ledger(ROOT)
    out = {}
    only = {x.strip().lower() for x in (os.environ.get("COW_AIM_ONLY") or "").split(",") if x.strip()}
    for e, sha in shas.items():
        r = led.get(e) or {}
        if r.get("judge") != jid or r.get("src") != sha:
            continue
        new_ = os.path.join(ROOT, "build", "cycle", "rise_tree", "cow_%s.c" % e)
        if r.get("tier") == "fail" and _has_entries(new_, e) and P.file_sha(new_) != sha:
            # a unit that FAILs, with a newer text from rise: what made the newer one not kept in step 6 may be
            # states built on the older text's reading. It is aimed like the others (fresh states, if it fails
            # on the old ones too)
            out[e] = new_
            continue
        if r.get("tier") in ("weak", "silver") or r.get("why") == "no clean state":
            out[e] = os.path.join(src, "cow_%s.c" % e)
            # BLOCK ENTRY (judge 14): rise's lift of this cycle (step 6) carries the unit's block entries
            # (cow_entry_fix_<entry>), so every block can be started at; the unit in src/lifted may predate it.
            # The newer text is the one aimed at, and replaces the old one only where it ranks higher.
            new = os.path.join(ROOT, "build", "cycle", "rise_tree", "cow_%s.c" % e)
            if _has_entries(new, e) and (not _has_entries(out[e], e) or P.file_sha(new) != sha):
                # rise's lift of THIS cycle, when it says something the unit does not (block entries, or a
                # corrected reading of the code: 0x1030555f's call `[ecx+4]` pops 0, not the 20 an earlier fit
                # chose). Kept only where it ranks higher; a FAIL on states built for the older text gets a
                # round with fresh states alone (_merge, fresh_only).
                out[e] = new
    for e, path in (rise_noclean or {}).items():
        if e not in shas and os.path.isfile(path):
            out[e] = path
    if only:                            # COW_AIM_ONLY=hex,hex: these units and no others (a check, a retry)
        out = {e: p for e, p in out.items() if e in only}
    return out


def _tree(texts):
    tree = os.path.join(AIM, "tree")
    shutil.rmtree(tree, ignore_errors=True)
    os.makedirs(tree)
    for f in LAYOUT_FILES:
        shutil.copyfile(os.path.join(ROOT, "layout", f), os.path.join(tree, f))
    for e, path in texts.items():
        shutil.copyfile(path, os.path.join(tree, "cow_%s.c" % e))
    return tree


def _judge(ents, shas, jid, workers, tree, seeds_dir, sites_dir, name):
    """judge `ents` from the scratch tree with the states in seeds_dir; their unreached sites go to sites_dir.
    Returns the records (nothing in the ledger is touched)."""
    if not ents:
        return {}
    shutil.rmtree(sites_dir, ignore_errors=True)
    os.makedirs(sites_dir)
    keep_env = {k: os.environ.get(k) for k in ("COW_SEEDS_AUTO", "COW_SITES_DIR", "COWDIFF_UNREACHED")}
    os.environ["COW_SEEDS_AUTO"] = seeds_dir
    os.environ["COW_SITES_DIR"] = sites_dir
    os.environ["COWDIFF_UNREACHED"] = "1"
    rel = os.path.relpath(tree, ROOT)
    try:
        res = P.fan_out(ROOT, ents, shas, jid, workers, 40, name + "a", src=rel) or {}
        left = [e for e in ents if not P.answered(res.get(e), shas[e], jid)]
        if left:
            _say("%d came back with no answer: once more, 6 to a chunk" % len(left))
            res.update(P.fan_out(ROOT, left, shas, jid, workers, 6, name + "b", src=rel) or {})
    finally:
        for k, v in keep_env.items():
            if v is None:
                os.environ.pop(k, None)
            else:
                os.environ[k] = v
    return res


def _seek(ents, workers, tree, out_dir, run_live):
    """seek for `ents`, aimed at build/aim/sites; returns {entry: [states]} for the ones that got any"""
    shutil.rmtree(out_dir, ignore_errors=True)
    os.makedirs(out_dir)
    lst = os.path.join(AIM, "seek_list.txt")
    with open(lst, "w", encoding="utf-8", newline="\n") as fh:
        fh.write("\n".join(ents) + "\n")
    env_src = os.environ.get("COW_LIFT_SRC")
    os.environ["COW_LIFT_SRC"] = tree          # seek reads each unit's own callee list from its text
    try:
        rc, _out = run_live([P.PY, "-u", SEEK, "--list", lst, "--out", out_dir, "--jobs", str(workers),
                             "--reached", SITES], ROOT, 12 * 3600)
    finally:
        if env_src is None:
            os.environ.pop("COW_LIFT_SRC", None)
        else:
            os.environ["COW_LIFT_SRC"] = env_src
    got = {}
    for f in os.listdir(out_dir):
        if f.endswith(".json") and len(f) == 13:
            st = _states_of(os.path.join(out_dir, f))
            if st:
                got[f[:8]] = st
    # the per-target reasons are kept beside the sites, for the gittable
    why_dir = os.path.join(AIM, "why")
    os.makedirs(why_dir, exist_ok=True)
    for f in os.listdir(out_dir):
        if f.endswith(".why.json"):
            shutil.copyfile(os.path.join(out_dir, f), os.path.join(why_dir, f))
    return got, rc


def run(workers, jid, hours=24.0, run_live=None, publish=None, rise_noclean=None, failed=None):
    """the step. Returns the number of units it made gold."""
    os.makedirs(SITES, exist_ok=True)
    t_end = time.time() + hours * 3600
    texts = candidates(jid, rise_noclean)
    if not texts:
        _say("nothing is weak, silver or `no clean state`: nothing to aim at")
        return 0
    memo = _memo()
    shas_all = P.units(ROOT)
    shas = {e: P.file_sha(p) for e, p in texts.items()}   # the text the aim judges, which may be rise's newer one

    # seek and rise are what a round runs: when either changed, a unit that stopped moving under the old ones is
    # tried again (the judge id alone kept 731 units aside after a drop that changed only seek)
    tools_sha = "%s+%s" % (_sha_or(os.path.join(ROOT, "tools", "cow", "rise", "seek.py")),
                           _sha_or(os.path.join(ROOT, "tools", "cow", "rise", "rise.py")))

    def key(e):
        return "%s/%s/%s/%s/%s" % (jid, shas[e], _sha_or(os.path.join(ROOT, "cow", "seeds_auto", e + ".json")),
                                   _sha_or(os.path.join(ROOT, "cow", "seeds", e + ".json")), tools_sha)
    new_gold, fails, rnd = 0, [], 0
    while time.time() < t_end:
        led = P.read_ledger(ROOT)
        todo = []
        for e in texts:
            m = memo.get(e) or {}
            if m.get("key") == key(e) and int(m.get("stall", 0)) >= STALL_ROUNDS:
                continue                    # two rounds moved nothing with exactly these states: left for now
            todo.append(e)
        if not todo:
            _say("the aim has nothing left to move: every unit is gold, or stopped moving for %d rounds"
                 % STALL_ROUNDS)
            break

        def near(e):                        # nearest to gold first: the silver that misses one or two blocks
            a, t = _blocks(led.get(e))
            return (0 if (led.get(e) or {}).get("tier") == "silver" else 1, t - a, -t)
        todo.sort(key=near)
        rnd += 1
        _say("\naim round %d: %d units (%d left aside: stopped moving)" % (rnd, len(todo), len(texts) - len(todo)))
        tree = _tree({e: texts[e] for e in todo})

        # 1. the census: a unit with no site list for its current states is judged once as it is
        need = [e for e in todo if site_list(e)[0] != key(e)]
        if need:
            _say("aim round %d: %d units have no list of the sites they miss yet: judged as they are" % (rnd, len(need)))
            seeds_now = os.path.join(AIM, "seeds_now")
            shutil.rmtree(seeds_now, ignore_errors=True)
            os.makedirs(seeds_now)
            for e in need:
                p = os.path.join(ROOT, "cow", "seeds_auto", e + ".json")
                if os.path.isfile(p):
                    shutil.copyfile(p, os.path.join(seeds_now, e + ".json"))
            res = _judge(need, shas, jid, workers, tree, seeds_now, os.path.join(AIM, "sites_now"), "c%d" % rnd)
            better = {}
            for e in need:
                rec = res.get(e) or {}
                if not P.answered(rec, shas[e], jid):
                    continue
                if rec.get("tier") == "fail" and os.path.abspath(texts[e]) != os.path.abspath(
                        os.path.join(ROOT, "src", "lifted", "cow_%s.c" % e)):
                    # rise's newer text FAILs on the states the unit has, built on the older text's reading: it is
                    # aimed with fresh states alone, at the sites the older text's list names (the same code)
                    memo[e] = dict(memo.get(e) or {}, fresh_only=True)
                    continue
                s_ = os.path.join(AIM, "sites_now", e + ".txt")
                if os.path.isfile(s_):
                    shutil.copyfile(s_, os.path.join(SITES, e + ".txt"))
                old = led.get(e) or {}
                if (RANK.get(rec.get("tier"), 0) > RANK.get(old.get("tier"), 0)
                                      or (rec.get("tier") == old.get("tier") and _reached(rec) > _reached(old))):
                    better[e] = rec         # the same states, judged by this judge, rank higher than the record
            if better:
                for e in better:
                    unit = os.path.join(ROOT, "src", "lifted", "cow_%s.c" % e)
                    if os.path.abspath(texts[e]) != os.path.abspath(unit):
                        shutil.copyfile(texts[e], unit)    # rise's newer lift ranks higher as it is
                P._ledger_write(ROOT, better)
                _say("aim round %d: %d units rank higher as they are under this judge (%d gold)"
                     % (rnd, len(better), sum(1 for r in better.values() if r.get("tier") == "gold")))
                new_gold += sum(1 for r in better.values() if r.get("tier") == "gold")
            _memo(memo)
            led = P.read_ledger(ROOT)
        # a unit with every site reached and still not gold needs more clean states, not other states: the grind's
        aimed = [e for e in todo if (led.get(e) or {}).get("tier") != "gold"
                 and ((site_list(e)[0] == key(e) and site_list(e)[1]) or (memo.get(e) or {}).get("fresh_only"))]
        # (a fresh_only unit with no list yet: seek finds no file of it under --reached and aims at every block)
        for e in set(todo) - set(aimed):
            # gold now, a FAIL (no site list: the lifter's lane), or every site reached with too few clean states
            # (the grind's): nothing for seek to aim at with these states
            memo[e] = dict(memo.get(e) or {}, key=key(e), stall=STALL_ROUNDS)
        _memo(memo)
        todo = aimed
        if not todo:
            _say("aim round %d: no unit misses a site it could be aimed at" % rnd)
            break

        # 2. seek, aimed at what each unit still misses
        out_dir = os.path.join(AIM, "seek_out")
        got, rc = _seek(todo, workers, tree, out_dir, run_live)
        if rc and failed is not None:
            failed.append("aim round %d: seek ended with exit code %s" % (rnd, rc))
        _say("aim round %d: seek made states for %d of %d units (%d states)"
             % (rnd, len(got), len(todo), sum(len(v) for v in got.values())))
        # every block still missed is also started at directly (judge 14, BLOCK ENTRY)
        n_entry = 0
        for e in todo:
            if not _has_entries(texts[e], e):
                continue
            have = {_body(st) for st in _states_of(os.path.join(ROOT, "cow", "seeds_auto", e + ".json"))}
            more = [st for st in entry_states(e, [int(x, 16) for x in site_list(e)[1] or []])
                    if _body(st) not in have]
            if more:
                got[e] = list(got.get(e, [])) + more
                n_entry += len(more)
        _say("aim round %d: %d states start at a block no state reached" % (rnd, n_entry))
        for e in list(got):
            got[e] = [_as_the_fix_reads(texts[e], e, st) for st in got[e]]
        for e in todo:
            if e not in got:
                m = memo.get(e) or {}
                memo[e] = dict(m, key=key(e), stall=int(m.get("stall", 0)) + 1 if m.get("key") == key(e) else 1)
        if not got:
            _memo(memo)
            continue

        # 3. judge with the new states (plus the ones each unit has)
        try_dir = os.path.join(AIM, "seeds_try")
        shutil.rmtree(try_dir, ignore_errors=True)
        os.makedirs(try_dir)
        for e, st in got.items():
            _merge(e, st, os.path.join(try_dir, e + ".json"), texts[e], (memo.get(e) or {}).get("fresh_only"))
        ents = sorted(got, key=near)
        res = _judge(ents, shas, jid, workers, tree, try_dir, os.path.join(AIM, "sites_try"), "a%d" % rnd)

        # 4. keep what ranks higher
        led = P.read_ledger(ROOT)
        keep, moves, grew = {}, {}, 0
        for e in ents:
            rec = res.get(e) or {}
            if not P.answered(rec, shas[e], jid):
                # no answer with these states (the chunk did not report the row): not tried again this pass
                m = memo.get(e) or {}
                memo[e] = dict(m, key=key(e), stall=int(m.get("stall", 0)) + 1 if m.get("key") == key(e) else 1)
                continue
            old = led.get(e) or {}
            retry = (rec.get("tier") == "fail" and not (memo.get(e) or {}).get("fresh_only")
                     and os.path.abspath(texts[e]) != os.path.abspath(os.path.join(ROOT, "src", "lifted", "cow_%s.c" % e)))
            if rec.get("tier") == "fail":
                # the states that failed, kept with the line that names them: what the lifter's fix is tested on
                fail_dir = os.path.join(AIM, "seeds_fail")
                os.makedirs(fail_dir, exist_ok=True)
                shutil.copyfile(os.path.join(try_dir, e + ".json"), os.path.join(fail_dir, e + ".json"))
                fails.append(("%s %s %s" % (e, rec.get("why") or "", rec.get("raw") or rec.get("detail") or "")).strip()[:400])
            up = RANK.get(rec.get("tier"), 0) - RANK.get(old.get("tier"), 0)
            more = rec.get("tier") in RANK and _reached(rec) > _reached(old)
            m = memo.get(e) or {}
            if up > 0 or (up == 0 and more):
                keep[e] = rec
                grew += 1
                if up > 0:
                    k = "%s -> %s" % (old.get("tier") or "none", rec.get("tier"))
                    moves[k] = moves.get(k, 0) + 1
                memo[e] = {"stall": 0}
            else:
                memo[e] = dict(m, key=key(e), stall=int(m.get("stall", 0)) + 1 if m.get("key") == key(e) else 1)
            if retry:
                # a newer text failing on states built for the older one: next round it gets fresh states alone,
                # and that round is not counted against it
                memo[e] = dict(memo[e], fresh_only=True, stall=0)
        if keep:
            dst_dir = os.path.join(ROOT, "cow", "seeds_auto")
            os.makedirs(dst_dir, exist_ok=True)
            src = os.path.join(ROOT, "src", "lifted")
            for e in keep:
                shutil.copyfile(os.path.join(try_dir, e + ".json"), os.path.join(dst_dir, e + ".json"))
                unit = os.path.join(src, "cow_%s.c" % e)
                if not os.path.isfile(unit) or os.path.abspath(texts[e]) != os.path.abspath(unit):
                    # a function that had no unit, or rise's newer lift of it: what was judged is what is kept
                    shutil.copyfile(texts[e], unit)
                s_ = os.path.join(AIM, "sites_try", e + ".txt")
                if os.path.isfile(s_):
                    shutil.copyfile(s_, os.path.join(SITES, e + ".txt"))   # its key is the new states' key
            P._ledger_write(ROOT, keep)
        _memo(memo)
        n = sum(1 for r in keep.values() if r.get("tier") == "gold")
        new_gold += n
        _say("aim round %d: %d of %d moved up a tier (%s); %d reach more of their sites; NEW GOLD %d"
             % (rnd, sum(moves.values()), len(ents), ", ".join("%s %d" % kv for kv in sorted(moves.items())) or "none",
                grew, n))
        with open(os.path.join(AIM, "fails.txt"), "w", encoding="utf-8", newline="\n") as fh:
            fh.write("\n".join(fails) + ("\n" if fails else ""))
        if fails:
            _say("%d units FAIL on a state the aim reached (build/aim/fails.txt): real differences, for the lifter"
                 % len(fails))
        if keep and publish:
            publish()
    else:
        _say("the aim's %.0f hours are used: the next run goes on from here" % hours)
    _say("NEW GOLD from the aim: %d" % new_gold)
    return new_gold
