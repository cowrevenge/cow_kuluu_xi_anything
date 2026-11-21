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
import judge2                                            # noqa: E402  _WHY_RE: which state the judge first disagreed on

AIM = os.path.join(ROOT, "build", "aim")
SITES = os.path.join(AIM, "sites")              # the sites each unit's KEPT states leave unreached
OUTCOME = os.path.join(AIM, "outcome")          # what the aim did with a unit last round, for why_table
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


SHED_TRIES = 8            # how many states one try sheds before the FAIL is taken as the unit's


def _hand_states(entry):
    """the hand-written pinned states (cow/seeds): they are numbered before the merged file's, and they are not
    ours to drop."""
    return _states_of(os.path.join(ROOT, "cow", "seeds", entry + ".json"))


def _write_doc(path, states, text_sha=None, dropped=None, failed_at=None):
    """a states file, written the way seek's output is written (tmp + os.replace, so a reader never sees half)"""
    doc = {"comment": "synthesized by tools/cow/rise/seek.py through tools/cow/aim.py - states that take "
                      "the branches random states do not; regenerated, never hand-edited",
           "states": states}
    if text_sha:
        doc["unit"] = text_sha
    if dropped:
        doc["dropped"] = dropped
    if failed_at:
        doc["failed_at"] = failed_at
    tmp = path + ".tmp"
    with open(tmp, "w", encoding="utf-8", newline="\n") as fh:
        json.dump(doc, fh, indent=1)
    os.replace(tmp, path)


def _first_state(rec):
    """Which state the judge first disagreed on, or None. The proof record does NOT keep it (`judge2.make_record`
    drops everything but the tier, the why and the raw line), and aim must not write a regex of its own for the
    harness's sentence: it asks the judge's own pattern, `judge2._WHY_RE`, of the raw line the record kept.
    Without this, the shed rule never fired once in the 2026-11-22 aim round: 288 units FAILed, none was ever
    shed, and the reason was a field name that was not there."""
    fs = (rec or {}).get("first_state")
    if fs is None:
        w = judge2._WHY_RE.search(str((rec or {}).get("raw") or ""))
        fs = int(w.group(1)) if w else None
    return fs


def _shed_fail_states(res, ents, shas, jid, workers, tree, try_dir, sites_try, tag):
    """ONE BAD STATE MUST NOT THROW AWAY EVERY NEW STATE FOR THE UNIT (OnePass10 2.3).

    A try that comes back FAIL used to be dropped whole, so one state that lays down a world the unit was never
    built for cost the unit every other state seek made for it (OnePass9 round 1: 294 of 353 judged units FAILed,
    101 of them silver or weak, 1.71% of the code). The judge names the state it first failed at
    (`first_state`), and the pinned states are numbered in the order the harness loads them: the hand-written
    ones (cow/seeds) first, then the merged file's. So a FAIL inside the merged file's range is that one state's
    fault: drop it, judge the rest again, up to SHED_TRIES times or until the try passes. What is left standing
    then ranks by the normal rule.

    A FAIL at a hand-written state, or past every pinned state (a fuzzed one), is the UNIT's: today's behaviour
    stands, the try is listed for the lifter and nothing is shed. Every dropped state goes to
    build/aim/seeds_fail/<entry>.json with the why the judge gave, which is what the lifter's fix is tested on."""
    dropped = {}
    again = [e for e in ents if (res.get(e) or {}).get("tier") == "fail"]
    for n in range(SHED_TRIES):
        retry = []
        for e in again:
            rec = res.get(e) or {}
            fs = _first_state(rec)
            path = os.path.join(try_dir, e + ".json")
            states = _states_of(path)
            hand_n = len(_hand_states(e))
            if fs is None or fs < hand_n or fs - hand_n >= len(states):
                continue            # no index, a hand state, or a fuzzed one: the FAIL belongs to the unit
            got_ = dropped.setdefault(e, [])
            got_.append({"index": fs, "why": rec.get("why") or "",
                         "detail": (rec.get("raw") or rec.get("detail") or "")[:400],
                         "state": states.pop(fs - hand_n)})
            _write_doc(path, states, _built_for(path), got_)
            _say("   shed %s state %d (%s): the rest of the try runs again" % (e, fs, rec.get("why") or "?"))
            retry.append(e)
        if not retry:
            break
        shed_sites = os.path.join(AIM, "sites_try_s%d" % (n + 1))
        res.update(_judge(retry, shas, jid, workers, tree, try_dir, shed_sites, "%s.s%d" % (tag, n + 1)))
        for e in retry:                     # _judge wipes the directory it writes into: keep the fresh lists
            p = os.path.join(shed_sites, e + ".txt")
            if os.path.isfile(p):
                shutil.copyfile(p, os.path.join(sites_try, e + ".txt"))
        again = [e for e in retry if (res.get(e) or {}).get("tier") == "fail"]
    return dropped


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


def site_list(e, sites_dir=None):
    """(the key of the states the list was judged with, [unreached sites]) from build/aim/sites, or (None, None)"""
    try:
        with open(os.path.join(sites_dir or SITES, e + ".txt"), encoding="utf-8") as fh:
            lines = fh.read().splitlines()
    except OSError:
        return None, None
    if not lines or not lines[0].startswith("# "):
        return None, None
    return lines[0][2:].strip(), [ln for ln in lines[1:] if ln.strip()]


_LP = None


def _lift_proof():
    """lift_proof owns the site-list header. Aim compares that header, so it must read the key out of the same
    function that writes it (tools/cow/ghidra/lift_proof.py:sites_key), never a copy of its format: when aim
    grew a fifth field of its own and the header kept four, no unit matched its own site list, the census ran
    every round, and 794 units were left aside as "stopped moving" without ever being aimed at."""
    global _LP
    if _LP is None:
        sys.path.insert(0, os.path.join(ROOT, "tools", "cow", "ghidra"))
        import lift_proof as LP                                 # noqa: E402
        _LP = LP
    return _LP


def states_key(e):
    """THE STATES a site list belongs to: judge, unit, seeds_auto, seeds, exactly as the prover wrote them."""
    return _lift_proof().sites_key(e)


def tools_sha():
    """What a round runs: seek and rise make the states, aim decides which units get aimed at all. A round under
    new tools must not inherit the stall count of a unit the old aim never ran."""
    return "%s+%s+%s" % (_sha_or(os.path.join(HERE, "aim.py")),
                         _sha_or(os.path.join(ROOT, "tools", "cow", "rise", "seek.py")),
                         _sha_or(os.path.join(ROOT, "tools", "cow", "rise", "rise.py")))


def memo_key(e, tsha=None, text_sha=None):
    """What the stall memo remembers a unit by: the states it was judged with (the site list's key), the tools
    that ran, and the text that was judged. It is deliberately NOT the key the site list carries: those two are
    compared against each other, and one string cannot do both jobs. The text sha stays in it because a unit
    that stopped moving under one lift must be tried again when rise reads it differently."""
    return "%s/%s/%s" % (states_key(e), tsha or tools_sha(), text_sha or "-")


def _outcome(outc):
    """build/aim/outcome/<entry>.json: what the aim actually did with this unit last round. why_table reads it,
    so a site that was never reached says why: not aimed, seek made nothing, the states FAILed at state N, or
    they never ran. Before this, 23,970 of 26,720 missed sites carried "seek made a state for it; the judge's
    run went elsewhere", which is only the label for "seek's why.json has no reason for this block" and was
    false for most of them: in that pass the units were never aimed at at all (OnePass10 2.4)."""
    os.makedirs(OUTCOME, exist_ok=True)
    for e, doc in outc.items():
        tmp = os.path.join(OUTCOME, e + ".json.tmp")
        try:
            with open(tmp, "w", encoding="utf-8", newline="\n") as fh:
                json.dump(doc, fh, indent=1, sort_keys=True)
            os.replace(tmp, os.path.join(OUTCOME, e + ".json"))
        except OSError:
            pass


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

    # The site list is written by the prover and keyed by the prover (states_key); the memo/stall key is that key
    # plus what a round runs: seek and rise make the states and aim decides who gets aimed at, so a unit that
    # stopped moving under the old tools is tried again when they change (the judge id alone kept 731 units aside
    # after a drop that changed only seek).
    _lift_proof().JUDGE_ID = jid          # sites_key's first field: the id the prover takes in its own main()
    tsha = tools_sha()

    def key(e):
        return memo_key(e, tsha, shas.get(e))
    new_gold, fails, rnd = 0, [], 0
    while time.time() < t_end:
        outc = {}                             # what this round did with each unit (why_table reads it back)
        led = P.read_ledger(ROOT)
        todo = []
        for e in texts:
            m = memo.get(e) or {}
            if m.get("key") == key(e) and int(m.get("stall", 0)) >= STALL_ROUNDS:
                outc[e] = {"aimed": False, "why": "stopped moving: %d round(s) with these states and these tools"
                                                    % int(m.get("stall", 0)), "round": rnd + 1}
                continue                    # two rounds moved nothing with exactly these states: left for now
            todo.append(e)
        if not todo:
            _say("the aim has nothing left to move: every unit is gold, or stopped moving for %d rounds"
                 % STALL_ROUNDS)
            _outcome(outc)
            break

        def near(e):                        # nearest to gold first: the silver that misses one or two blocks
            a, t = _blocks(led.get(e))
            return (0 if (led.get(e) or {}).get("tier") == "silver" else 1, t - a, -t)
        todo.sort(key=near)
        rnd += 1
        _say("\naim round %d: %d units (%d left aside: stopped moving)" % (rnd, len(todo), len(texts) - len(todo)))
        tree = _tree({e: texts[e] for e in todo})

        # 1. the census: a unit with no site list for its current states is judged once as it is
        need = [e for e in todo if site_list(e)[0] != states_key(e)]
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
                 and ((site_list(e)[0] == states_key(e) and site_list(e)[1])
                      or (memo.get(e) or {}).get("fresh_only"))]
        # (a fresh_only unit with no list yet: seek finds no file of it under --reached and aims at every block)
        for e in set(todo) - set(aimed):
            # gold now, a FAIL (no site list: the lifter's lane), or every site reached with too few clean states
            # (the grind's): nothing for seek to aim at with these states
            memo[e] = dict(memo.get(e) or {}, key=key(e), stall=STALL_ROUNDS)
            rec = led.get(e) or {}
            if rec.get("tier") == "gold":
                why = "gold as it stands: nothing to aim at"
            elif site_list(e)[0] != states_key(e):
                why = "no site list for these states yet: the census will make one"
            elif not site_list(e)[1]:
                why = "every site reached with these states: it needs more clean states, not other states"
            else:
                why = "left aside: %s" % (rec.get("why") or rec.get("tier") or "no record")
            outc[e] = {"aimed": False, "why": why, "round": rnd}
        _memo(memo)
        todo = aimed
        if not todo:
            _say("aim round %d: no unit misses a site it could be aimed at" % rnd)
            _outcome(outc)
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
                outc[e] = {"aimed": True, "why": "seek gave no states%s" % (": exit code %s" % rc if rc else ""),
                           "seek_states": 0, "seek_error": rc, "round": rnd}
        if not got:
            _memo(memo)
            _outcome(outc)
            continue

        # 3. judge with the new states (plus the ones each unit has)
        try_dir = os.path.join(AIM, "seeds_try")
        shutil.rmtree(try_dir, ignore_errors=True)
        os.makedirs(try_dir)
        for e, st in got.items():
            _merge(e, st, os.path.join(try_dir, e + ".json"), texts[e], (memo.get(e) or {}).get("fresh_only"))
        ents = sorted(got, key=near)
        for e in ents:
            outc[e] = {"aimed": True, "why": "", "seek_states": len(got[e]), "round": rnd}
        res = _judge(ents, shas, jid, workers, tree, try_dir, os.path.join(AIM, "sites_try"), "a%d" % rnd)

        # 3b. a try that FAILs on one of its own new pinned states sheds that one state and runs the rest again
        dropped = _shed_fail_states(res, ents, shas, jid, workers, tree, try_dir,
                                    os.path.join(AIM, "sites_try"), "a%d" % rnd)

        # 4. keep what ranks higher
        led = P.read_ledger(ROOT)
        keep, moves, grew = {}, {}, 0
        for e in ents:
            rec = res.get(e) or {}
            o = outc.setdefault(e, {"aimed": True, "round": rnd})
            o["try"] = {"tier": rec.get("tier"), "why": rec.get("why") or "",
                        "first_state": _first_state(rec), "blocks": rec.get("blocks")}
            if dropped.get(e):
                o["dropped"] = [{"index": d["index"], "why": d["why"]} for d in dropped[e]]
            if not P.answered(rec, shas[e], jid):
                # no answer with these states (the chunk did not report the row): not tried again this pass
                o["why"] = "new states never ran: the row budget"
                m = memo.get(e) or {}
                memo[e] = dict(m, key=key(e), stall=int(m.get("stall", 0)) + 1 if m.get("key") == key(e) else 1)
                continue
            old = led.get(e) or {}
            retry = (rec.get("tier") == "fail" and not (memo.get(e) or {}).get("fresh_only")
                     and os.path.abspath(texts[e]) != os.path.abspath(os.path.join(ROOT, "src", "lifted", "cow_%s.c" % e)))
            if rec.get("tier") == "fail":
                # the states that failed, and the ones that were shed to get here, each with the line that names
                # them: what the lifter's fix is tested on
                fail_dir = os.path.join(AIM, "seeds_fail")
                os.makedirs(fail_dir, exist_ok=True)
                tp = os.path.join(try_dir, e + ".json")
                _write_doc(os.path.join(fail_dir, e + ".json"), _states_of(tp), _built_for(tp),
                           dropped.get(e), {"index": _first_state(rec), "why": rec.get("why") or "",
                                            "detail": (rec.get("raw") or rec.get("detail") or "")[:400]})
                fails.append(("%s %s %s" % (e, rec.get("why") or "", rec.get("raw") or rec.get("detail") or "")).strip()[:400])
            up = RANK.get(rec.get("tier"), 0) - RANK.get(old.get("tier"), 0)
            more = rec.get("tier") in RANK and _reached(rec) > _reached(old)
            m = memo.get(e) or {}
            if up > 0 or (up == 0 and more):
                keep[e] = rec
                o["kept"] = True
                grew += 1
                if up > 0:
                    k = "%s -> %s" % (old.get("tier") or "none", rec.get("tier"))
                    moves[k] = moves.get(k, 0) + 1
                memo[e] = {"stall": 0}
            else:
                o["kept"] = False
                if not o.get("why"):
                    o["why"] = ("the try ranks no higher: %s, %s reached" % (rec.get("tier"), rec.get("blocks")))
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
                tp = os.path.join(try_dir, e + ".json")
                # written clean: the states that were SHED to get here belong to the lifter's file
                # (build/aim/seeds_fail), not to the states the unit is now proven with
                _write_doc(os.path.join(dst_dir, e + ".json"), _states_of(tp), _built_for(tp))
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
        _outcome(outc)
        if fails:
            _say("%d units FAIL on a state the aim reached (build/aim/fails.txt): real differences, for the lifter"
                 % len(fails))
        if keep and publish:
            publish()
    else:
        _say("the aim's %.0f hours are used: the next run goes on from here" % hours)
    _say("NEW GOLD from the aim: %d" % new_gold)
    return new_gold


def selftest():
    """The site list and the key aim compares it with are two halves of one contract, written by the prover and
    read by the aim. When aim grew a fifth field of its own and the header kept four, the two never matched: no
    unit recognised its own site list, the census judged every unit every round, and the rest were left aside as
    "stopped moving" without ever being aimed at (794 units, 11.36% of the code, one pass). If the halves ever
    drift apart again it fails here, not silently in a pass. Writes only under build/aim/selftest."""
    lp = _lift_proof()
    if not lp.JUDGE_ID:
        rc, out = P.run([P.PY, "tools/cow/judge2.py", "--judge-id"], ROOT)
        lp.JUDGE_ID = (out or [""])[-1].strip()
    src = os.path.join(ROOT, "src", "lifted")
    ents = sorted(f[4:-2] for f in os.listdir(src) if f.startswith("cow_") and f.endswith(".c"))
    if not ents:
        _say("aim selftest: no lifted unit to write a list for")
        return 1
    e = ents[0]
    d = os.path.join(AIM, "selftest")
    shutil.rmtree(d, ignore_errors=True)
    os.makedirs(d)
    want = ["1000abcd", "1001ef00"]
    lp.write_sites(d, e, want)
    got_key, got_sites = site_list(e, d)
    bad = 0
    if got_key != states_key(e):
        _say("aim selftest FAIL %s: the header says '%s', states_key says '%s'" % (e, got_key, states_key(e)))
        bad += 1
    if got_sites != want:
        _say("aim selftest FAIL %s: the list reads back %r, not %r" % (e, got_sites, want))
        bad += 1
    if memo_key(e) == states_key(e):
        _say("aim selftest FAIL %s: the stall memo no longer carries the tools, so a seek/rise/aim drop cannot"
             " release a unit the old aim left aside" % e)
        bad += 1
    for name in ("aim.py", "seek.py", "rise.py"):
        if _sha_or(os.path.join(HERE, name)) == "-" and not os.path.isfile(
                os.path.join(ROOT, "tools", "cow", "rise", name)):
            _say("aim selftest FAIL: tools_sha cannot see %s" % name)
            bad += 1
    if _sha_or(os.path.join(HERE, "aim.py")) == "-":
        _say("aim selftest FAIL: aim.py's own sha is missing from tools_sha")
        bad += 1
    bad += _shed_selftest()
    _say("aim selftest %s: %s, header %s, memo %s"
         % ("OK" if not bad else "FAILED (%d)" % bad, e,
            "matches states_key" if got_key == states_key(e) else "MISMATCH",
            "carries the tools" if memo_key(e) != states_key(e) else "LOSES the tools"))
    shutil.rmtree(d, ignore_errors=True)
    return 1 if bad else 0


def _shed_selftest():
    """2.3, on a made-up unit: one bad pinned state costs that state and nothing else. Judges nothing (the judge
    is stood in for), and writes only under build/aim/selftest."""
    bad = 0
    e = "0a0b0c0d"
    base = [{"args": ["arena"], "note": "s%d" % i} for i in range(4)]
    hand_n = 2                                   # two hand-written states are numbered before the merged ones
    real = (_judge, _hand_states)
    try:
        globals()["_hand_states"] = lambda entry: [{}] * hand_n
        for want, expect, raw_only in ((hand_n + 2, 1, False), (1, 0, False), (hand_n + 9, 0, False),
                                       # the real shape: the ledger record keeps `raw` and no first_state at all
                                       (hand_n + 1, 1, True)):
            # a state inside the merged range is shed; a hand-written one and a fuzzed one are the unit's
            d = os.path.join(AIM, "selftest", "shed")
            shutil.rmtree(d, ignore_errors=True)
            os.makedirs(d)
            try_dir = os.path.join(d, "seeds_try")
            os.makedirs(try_dir)
            _write_doc(os.path.join(try_dir, e + ".json"), [dict(s) for s in base], "deadbeef")
            calls = []

            def fake_judge(ents, shas, jid, workers, tree, seeds_dir, sites_dir, name):
                calls.append(name)
                if ".s" in name:
                    return {e: {"tier": "gold", "why": "", "blocks": "4/4"}}
                if raw_only:          # what the proof ledger actually holds: raw, and no index field
                    return {e: {"tier": "fail", "why": "memory", "blocks": "1/4",
                                "raw": "1 mismatch(es), first at state %d (memory) clean=500" % want}}
                return {e: {"tier": "fail", "why": "memory", "first_state": want, "blocks": "1/4"}}
            globals()["_judge"] = fake_judge
            res = fake_judge([e], {}, "", 1, "", try_dir, os.path.join(d, "sites_try"), "a1")
            got = _shed_fail_states(res, [e], {}, "", 1, "", try_dir, os.path.join(d, "sites_try"), "a1")
            left = _states_of(os.path.join(try_dir, e + ".json"))
            if len(got.get(e, [])) != expect:
                _say("aim selftest FAIL shed@%s: %d state(s) shed, %d expected" % (want, len(got.get(e, [])), expect))
                bad += 1
            if len(left) != len(base) - expect:
                _say("aim selftest FAIL shed@%s: the try keeps %d state(s), %d expected"
                     % (want, len(left), len(base) - expect))
                bad += 1
            if len(calls) != 1 + expect:
                _say("aim selftest FAIL shed@%s: judged %d time(s), %d expected (a FAIL outside the merged range"
                     " must not be re-run)" % (want, len(calls), 1 + expect))
                bad += 1
            if expect and got[e][0]["state"] != base[want - hand_n]:
                _say("aim selftest FAIL shed@%s: it shed the wrong state" % want)
                bad += 1
            if expect and res[e]["tier"] != "gold":
                _say("aim selftest FAIL shed@%s: the rest of the try was not judged again (tier %s)"
                     % (want, res[e]["tier"]))
                bad += 1
        shutil.rmtree(os.path.join(AIM, "selftest", "shed"), ignore_errors=True)
    finally:
        globals()["_judge"], globals()["_hand_states"] = real
    _say("aim selftest %s: the shed rule (%s)" % ("OK" if not bad else "FAILED (%d)" % bad,
                                                  "one bad pinned state sheds itself, a hand or fuzzed one sheds"
                                                  " nothing"))
    return bad


def census():
    """Read-only: of the site lists on disk, how many does aim recognise as belonging to a unit's current
    states? A pass where this is far below the number of lists is the 2026-11-22 bug."""
    _lift_proof()
    lp = _LP
    if not lp.JUDGE_ID:
        rc, out = P.run([P.PY, "tools/cow/judge2.py", "--judge-id"], ROOT)
        lp.JUDGE_ID = (out or [""])[-1].strip()
    if not os.path.isdir(SITES):
        _say("aim census: no site lists on disk yet (%s)" % SITES)
        return 0
    files = [f[:-4] for f in os.listdir(SITES) if f.endswith(".txt")]
    match = [e for e in files if site_list(e)[0] == states_key(e)]
    miss = [e for e in files if e not in set(match)]
    _say("aim census: %d site list(s), %d recognised as their unit's current states, %d stale (unit text or"
         " seeds changed since: they will be judged once again)" % (len(files), len(match), len(miss)))
    for e in miss[:5]:
        _say("   stale %s: list '%s' vs states '%s'" % (e, site_list(e)[0], states_key(e)))
    # the dry round the brief asks for: who would seek actually be pointed at today. run() judges the units whose
    # list does not match first (the census), so those are counted separately from the ones truly left aside.
    texts = candidates(_LP.JUDGE_ID)
    led = P.read_ledger(ROOT)
    memo = _memo()
    aimed, census_first, aside = [], [], []
    for e in texts:
        k, sites = site_list(e)
        m = memo.get(e) or {}
        if (led.get(e) or {}).get("tier") == "gold":
            continue
        if (k == states_key(e) and sites) or m.get("fresh_only"):
            aimed.append(e)
        elif sites:
            census_first.append(e)                # judged once as it is, then aimed from the fresh list
        else:
            aside.append(e)                       # every site reached: the grind's lane, not seek's
    tsha = tools_sha()

    def mkey(e):                                   # exactly what run() would have written for this unit
        return memo_key(e, tsha, P.file_sha(texts[e]) if os.path.isfile(texts[e]) else "-")
    stalled = [e for e in texts if int((memo.get(e) or {}).get("stall", 0)) >= STALL_ROUNDS
               and (memo.get(e) or {}).get("key") == mkey(e)]
    _say("aim census: %d candidate(s) (weak, silver, `no clean state`): %d AIMED now, %d after a census round,"
         " %d left aside (every site reached or no list); %d held by the stall memo"
         % (len(texts), len(aimed), len(census_first), len(aside), len(stalled)))
    for e in aside[:5]:
        _say("   aside %s: tier %s, list %s, sites %d"
             % (e, (led.get(e) or {}).get("tier"), "mine" if site_list(e)[0] == states_key(e) else "stale/none",
                len(site_list(e)[1] or [])))
    return 0


if __name__ == "__main__":
    arg = sys.argv[1] if len(sys.argv) > 1 else "--selftest"
    sys.exit(selftest() if arg == "--selftest" else census() if arg == "--census" else 2)
