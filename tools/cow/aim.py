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
CHASE_LAPS = 3            # tries in a row for a unit that reached a missed site and lost others (run, 3c)
WIDE_BLOCKS = 8                                 # with this many blocks or fewer to start at: every combination
PINS = os.path.join(AIM, "pins")                # how each pinned state of a unit's last judging ended on the original
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
    """the states a unit is tried with: the ones it has, then the new ones, up to what a row takes.
    THE STATES BELONG TO THE TEXT THEY WERE BUILT FOR. seek lays a state down on rise's reading of the code (what
    an unknown callee pops, which words an argument still holds); a newer text of the unit can read it
    differently, and a state built on the old reading is then a world no run of the program has (0x1030555f: a
    slot filled with a function popping 20 bytes, for a call whose caller cleans up after it, and the original's
    frame broke under it). That shows as a FAIL, and a FAIL is answered where it happens: the one state is shed
    (_shed_fail_states), and a newer text that still FAILs gets its next round with the new states alone
    (fresh_only). Until then the states the unit has come along with a newer text too. They used to be dropped
    the moment the text's sha differed, before anything had failed: a unit with no block entries of its own
    (176 of the silver and weak ones) is aimed at through rise's text, went in with seek's few states in place
    of its hundreds, reached less than its record and was never kept."""
    hand = len(_states_of(os.path.join(ROOT, "cow", "seeds", entry + ".json")))
    old_path = os.path.join(ROOT, "cow", "seeds_auto", entry + ".json")
    old = [st for st in _states_of(old_path) if _parses(st)]
    if text is not None:
        sha = P.file_sha(text)
        was = _built_for(old_path)
        unit = os.path.join(ROOT, "src", "lifted", "cow_%s.c" % entry)
        if fresh_only and was != sha:
            old = []
    # the ones it has FIRST, the new ones after: a pinned state is numbered by its place in the list, and the
    # states the unit already had keep their numbers (and so their worlds), so what they reached is reached
    # again and the new ones only add (cowdiff.c judge 15, every state's seed its own). For a day (2026-11-23)
    # the new ones went in front, on a wrong reading of why 0x100496f0 never kept its state (it was the text:
    # see candidates). The judge on both orders, same states, same budget: 0x101bd880 reaches 538 of 561 sites
    # with the new ones in front and 556 with them after; 0x100496f0 1315 and 1316; 0x1020ac30 564 and 565. In
    # front they renumber every state the unit has, and a try that loses a site that way is not kept. Over the
    # cap, the new ones stay and the oldest of the old ones go.
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


def _ranks_higher(rec, old):
    up = RANK.get((rec or {}).get("tier"), 0) - RANK.get((old or {}).get("tier"), 0)
    return up > 0 or (up == 0 and (rec or {}).get("tier") in RANK and _reached(rec) > _reached(old))


def _pin_outcomes(e):
    """{pinned state number: "clean" | "afault"} of the unit's last judging (build/aim/pins)"""
    out = {}
    try:
        with open(os.path.join(PINS, e + ".txt"), encoding="utf-8") as fh:
            for ln in fh:
                p_ = ln.split()
                if len(p_) == 2 and p_[0].isdigit():
                    out[int(p_[0])] = p_[1]
    except OSError:
        pass
    return out


def _pin_fixes(e):
    """{pinned state number: {"mem"|"reg"|"arg": n, "span": n, "frame": n, "heap": n}}: the repair each faulting
    pinned state of the unit's last judging asks for (cowdiff.c PINFIX, judge 18)"""
    out = {}
    try:
        with open(os.path.join(PINS, e + ".txt"), encoding="utf-8") as fh:
            for ln in fh:
                p_ = ln.split()
                if len(p_) > 3 and p_[0].isdigit() and p_[1] == "fix":
                    d = {}
                    for kv in p_[2:]:
                        k, _eq, v = kv.partition("=")
                        try:
                            d[k] = int(v, 10 if k in ("reg", "arg") else 16)
                        except ValueError:
                            d = None
                            break
                    if d:
                        out[int(p_[0])] = d
    except OSError:
        pass
    return out


def _keep_states(e, row_states, pins_dir=None):
    """THE STATES THE JUDGE'S OWN SEARCH FOUND in the unit's last judging, as pinned states (judge 18,
    cowdiff.c KEPT STATES): each is the seed and the mutations it was made of, and, when it was bred from a
    pinned state, that state's own words. `row_states` are the states of that judging after the hand-written
    ones, in order. `pins_dir`: where that judging's report is (the aim's own by default)."""
    hand = _hand_states(e)
    row = list(hand) + list(row_states)
    out, seen = [], set()
    try:
        with open(os.path.join(pins_dir or PINS, e + ".txt"), encoding="utf-8") as fh:
            lines = fh.read().splitlines()
    except OSError:
        return out
    for ln in lines:
        p_ = ln.split()
        if len(p_) != 3 or p_[0] != "keep" or not p_[1].isdigit():
            continue
        w = int(p_[1])
        if w:
            if w > len(row):
                continue
            st = {k: v for k, v in row[w - 1].items() if k not in ("note", "keep")}
        else:
            st = {"args": ["0", "0", "0", "0"]}
        st["keep"] = p_[2]
        st["note"] = "judge: a state its own search found"
        if _body(st) not in seen:
            seen.add(_body(st))
            out.append(st)
    return out


_FIX_ESP = re.compile(r"g->esp = sp0 - 0x([0-9a-f]+)u;")
FRAME_ZERO_MAX = 0x400          # the frame bytes laid down as 0 at the most (32 to a write, PIN_WRITES_MAX 256)


def _frame_zeroed(path, e, st):
    """A BLOCK START WITH ITS FRAME LAID DOWN AS 0. A block reads the function's locals, and a state that
    starts there finds whatever the harness filled the stack with: `mov eax, [esp+0x10]; mov ecx,
    [edi+eax+4]` (0x101708cb) reads at edi + garbage, the original faults, and the judge can name no repair
    for it (the address is no pointer plus a small offset). With the locals 0 the same block reads at edi + 4,
    and the next thing it faults on, a local it stores through, is a pointer the judge can name (PINFIX) and
    the mend hands it an object. Only for a state the original faulted in with no repair named, and only once:
    returns the state with the frame's bytes below the entry's stack pointer pinned to 0 (the block's own
    depth, from its cow_entry_fix case), or None."""
    at = st.get("entry")
    if not at or any(str(w.get("where")) in ("frame", "deep") for w in st.get("mem") or []):
        return None
    try:
        with open(path, encoding="utf-8", errors="replace") as fh:
            text = fh.read()
    except OSError:
        return None
    i = text.find("cow_entry_fix_%s(" % e)
    if i < 0:
        return None
    want = int(at, 16)
    for m in _FIX_CASE.finditer(text, i):
        if int(m.group(1), 16) != want:
            continue
        d = _FIX_ESP.search(m.group(2))
        if not d:
            return None
        depth = min((int(d.group(1), 16) + 3) & ~3, FRAME_ZERO_MAX)
        if depth <= 0 or len(st.get("mem") or []) + (depth + 31) // 32 > 200:
            return None
        new = json.loads(json.dumps(st))
        mem = list(new.get("mem") or [])
        off = 0x1000 - depth
        while off < 0x1000:
            n = min(32, 0x1000 - off)
            mem.append({"where": "frame", "off": "0x%x" % off, "bytes": "00" * n})
            off += n
        new["mem"] = mem
        note = str(new.get("note") or "")
        new["note"] = (note + " (frame 0)").strip()
        return new
    return None


MEND_ROUNDS = 16                # repairs in a row for one state: a block deep in a function reads through
                                # chains of locals and fields (0x101708c6 took more than 6), and the late
                                # rounds hold only the few states still on their way
_OBJ, _NOBJ = 0x4000, 120       # seek's objects in the harness heap (tools/cow/rise/seek.py OBJ, NOBJ)
_REGS7 = ("eax", "ecx", "edx", "ebx", "esi", "edi", "ebp")


def _mended(st, fix):
    """the state with the repair applied: the register, argument or memory word the original faulted through
    now points at an object of its own. None when the repair cannot be written as a pin."""
    span = fix.get("span", 4)
    need = (0x40 + span + _OBJ - 1) // _OBJ
    if need > 8:
        return None
    used = set()
    for m_ in re.finditer(r"heap\+0x([0-9a-f]+)", json.dumps(st)):
        used.add(int(m_.group(1), 16) // _OBJ)
    for w in st.get("mem") or []:
        if w.get("where") == "heap":
            try:
                used.add(int(str(w.get("off")), 16) // _OBJ)
            except ValueError:
                pass
    k = None
    for c in range(_NOBJ - need, 7, -1):            # from the top: seek and the block starts count up from 0
        if not any(q in used for q in range(c, c + need)):
            k = c
            break
    if k is None:
        return None
    obj = "heap+0x%x" % (k * _OBJ + 0x40)
    new = json.loads(json.dumps(st))
    if "reg" in fix:
        if not 0 <= fix["reg"] < 7:
            return None
        new.setdefault("regs", {})[_REGS7[fix["reg"]]] = obj
    elif "arg" in fix:
        args = list(new.get("args") or [])
        while len(args) <= fix["arg"] or len(args) < 4:
            args.append("0")
        args[fix["arg"]] = "@" + obj
        new["args"] = args
    elif "mem" in fix:
        a, heap, frame = fix["mem"], fix.get("heap", 0), fix.get("frame", 0)
        if heap and heap <= a < heap + _OBJ * _NOBJ:
            where, off = "heap", a - heap
        elif frame and frame <= a < frame + 0x1000:
            where, off = "frame", a - frame
        elif frame and frame + 0x1000 - 0x80000 <= a < frame:
            where, off = "deep", a - (frame + 0x1000 - 0x80000)
        elif frame and frame + 0x1000 <= a < frame + 0x1000 + 0x40:
            # a word above the entry's stack pointer is an argument (the return address is word 0)
            k_ = (a - frame - 0x1000) // 4 - 1
            if k_ < 0 or (a - frame) % 4:
                return None
            args = list(new.get("args") or [])
            while len(args) <= k_ or len(args) < 4:
                args.append("0")
            args[k_] = "@" + obj
            new["args"] = args
            if k_ >= 4:
                new["nargs"] = max(int(new.get("nargs") or 0), k_ + 1)
            where = None
        else:
            where, off = "0x%08x" % a, 0
        if where is not None:
            mem = [w for w in (new.get("mem") or [])
                   if not (w.get("where") == where and str(w.get("off")) in ("0x%x" % off, str(off)))]
            mem.append({"where": where, "off": "0x%x" % off, "bytes": "&" + obj})
            new["mem"] = mem
    else:
        return None
    note = str(new.get("note") or "")
    if "(mended)" not in note:
        new["note"] = (note + " (mended)").strip()
    return new


def _shed_afault_states(res, ents, led, shas, jid, workers, tree, try_dir, sites_try, tag):
    """A NEW STATE THE ORIGINAL FAULTS IN IS NOT A STATE: the judge throws it away with every site it ran, and
    it still costs the row. Each faulting state queues repairs that take the place of the row's random states
    (cowdiff.c REPAIR), and the sites those used to find are gone: 0x101bd880 with its 56 states reaches 560 of
    561 sites, with seek's 3 new ones behind them (the original faults in all three) 556, and "ranks no higher".
    Under the judge, 396 of 833 of seek's new states fault on the original; 27 of 208 units have both kinds,
    and there the ones that do run were thrown away with the ones that do not.

    So a try that ranks no higher sheds the new states the original faulted in and is judged once more with the
    rest. A try whose new states ALL fault has nothing left to judge again: it is not kept, and says so. Which
    states faulted is the judge's own word (COWDIFF_PINS, written a unit by lift_proof.record_results).
    Returns {entry: (how many were shed, how many new ones are left)}."""
    shed, again = {}, []
    for e in ents:
        rec = res.get(e) or {}
        if not P.answered(rec, shas[e], jid) or rec.get("tier") == "fail" or _ranks_higher(rec, led.get(e)):
            continue
        path = os.path.join(try_dir, e + ".json")
        states = _states_of(path)
        had = {_body(st) for st in _states_of(os.path.join(ROOT, "cow", "seeds_auto", e + ".json"))}
        hand_n = len(_hand_states(e))
        how = _pin_outcomes(e)
        new_ = [i for i, st in enumerate(states) if _body(st) not in had]
        bad = {i for i in new_ if how.get(i + hand_n) == "afault"}
        if not bad:
            continue
        shed[e] = (len(bad), len(new_) - len(bad))
        if len(bad) == len(new_):
            continue                # nothing new is left: the rest is the states the record was made with
        _write_doc(path, [st for i, st in enumerate(states) if i not in bad], _built_for(path))
        again.append(e)
    if again:
        _say("   %d tries rank no higher and have new states the original faults in: judged again without those"
             % len(again))
        shed_sites = os.path.join(AIM, "sites_try_a")
        res.update(_judge(again, shas, jid, workers, tree, try_dir, shed_sites, tag + ".af"))
        for e in again:                     # _judge wipes the directory it writes into: keep the fresh lists
            p = os.path.join(shed_sites, e + ".txt")
            if os.path.isfile(p):
                shutil.copyfile(p, os.path.join(sites_try, e + ".txt"))
    return shed


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


def states_key(e, text=None):
    """THE STATES a site list belongs to: judge, unit, seeds_auto, seeds, exactly as the prover wrote them.
    `text` is the text the unit is aimed at when that is not the unit in src/lifted (rise's lift of it, for a
    unit with no block entries): the prover judged THAT file and put ITS sha in the header, so the key is asked
    of the prover for that file. Without it the header and the key never matched for such a unit, it was
    "no site list for these states yet" after every census, and it was never aimed at (176 of the silver and
    weak units; before candidates took the unit's own text first, every one of them)."""
    lp = _lift_proof()
    if text is None:
        return lp.sites_key(e)
    keep = lp.LIFTED_DIR
    lp.LIFTED_DIR = os.path.dirname(os.path.abspath(text))
    try:
        return lp.sites_key(e)
    finally:
        lp.LIFTED_DIR = keep


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


def _outcome_of(e):
    """the outcome the aim last wrote for a unit, or {}"""
    try:
        with open(os.path.join(OUTCOME, e + ".json"), encoding="utf-8") as fh:
            return json.load(fh) or {}
    except (OSError, ValueError):
        return {}


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


def fix_blocks(text, e):
    """the blocks a unit can be started at: the cases of its cow_entry_fix_<entry>, which rise writes last"""
    try:
        with open(text, encoding="utf-8", errors="replace") as fh:
            t = fh.read()
    except OSError:
        return []
    at = t.find("int cow_entry_fix_%s(" % e)
    return sorted({int(x, 16) for x in re.findall(r"case 0x([0-9a-f]{8})u:", t[at:])} - {int(e, 16)}) if at >= 0 else []


def entry_states(e, sites, every=None, can=None):
    """BLOCK ENTRY (judge 14): one state starting at each block that still has a site no state reached. The
    blocks are rise's (seek wrote them beside its per-block reasons); the unit's cow_entry_fix_<entry> makes
    the state agree with the unit there, and says 0 for a block it cannot start at (that state then starts at
    the entry, as any other). `every` is a list of blocks to start at instead, whatever was reached: for a unit
    that has reached every site and has too few clean states (see run, step 1)."""
    why = {}
    try:
        with open(os.path.join(AIM, "why", e + ".why.json"), encoding="utf-8") as fh:
            why = json.load(fh)
    except (OSError, ValueError):
        pass
    starts = sorted(int(b, 16) for b in (why.get("blocks") or []))
    if not starts and not every:
        return []
    want, out = set(every or ()), []
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
    if can is not None:
        # only where THIS text can be started (`can`: its cow_entry_fix cases). The blocks are today's rise's,
        # and a unit lifted before rise made a block of every return site has no case for most of them: its
        # fix says 0 there and the state runs from the function's entry instead, with the block's registers
        # (0x1020ac30 misses the two instructions behind `call [eax+0x78]`; its 128 states "at 1020affe" all
        # ran from 1020ac30). Such a state is not a start at the block; the site waits for rise's text of this
        # cycle, which has the case (run, to_newer).
        want &= set(can)
    # the same block four ways: every register 0 or an object, every argument 0 or an object. What a block
    # reads through is then memory that is there (the harness fills it) and the state gets past its first field
    # read instead of faulting on it; the judge's own repairs and corpus go on from each. The arguments were
    # always 0 until 2026-11-24: a state must FINISH on the original for its sites to count, and a block that
    # runs clean still faulted further down on the first read through an argument. 0x100a6240 started at
    # 0x100a62c1 runs all 12 sites it misses and then faults at `fadd dword ptr [eax]`, eax its first argument;
    # with the arguments objects the original finishes (under the judge: both such states clean).
    names = ("eax", "ecx", "edx", "ebx", "esi", "edi")
    regs = {r: "heap+0x%x" % (0x40 + 0x4000 * (k + 1)) for k, r in enumerate(names)}
    objs = ["@heap+0x%x" % (0x40 + 0x4000 * (k + 8)) for k in range(4)]
    # FEW BLOCKS LEFT: every way round. Which register is the pointer and which the count is the block's own
    # business (`mov byte [ecx + esi*100 + ebx + 0x43], 1`, 0x101bd880: ebx an object, ecx and esi numbers; all
    # three objects is no address, all three 0 is the null page). With 8 blocks or fewer to start at, each
    # register is tried as 0 and as an object in every combination, with the arguments 0 and objects: 128
    # states a block, and the sift (_sift) throws out the ones the original faults in before any is judged.
    wide = 0 < len(want) <= WIDE_BLOCKS
    for b in sorted(want):
        if wide:
            for mask in range(1 << len(names)):
                on = [r for k, r in enumerate(names) if mask >> k & 1]
                rr = {r: regs[r] if r in on else "0x0" for r in names}
                for aa, how in ((["0", "0", "0", "0"], "0"), (list(objs), "objects")):
                    out.append({"note": "aim: starts at block %08x, objects in %s, arguments %s"
                                        % (b, "+".join(on) or "no register", how),
                                "args": aa, "regs": dict(rr), "entry": "0x%08x" % b})
            continue
        out.append({"note": "aim: starts at block %08x" % b, "args": ["0", "0", "0", "0"], "entry": "0x%08x" % b})
        out.append({"note": "aim: starts at block %08x, registers as objects" % b, "args": ["0", "0", "0", "0"],
                    "regs": dict(regs), "entry": "0x%08x" % b})
        out.append({"note": "aim: starts at block %08x, arguments as objects" % b, "args": list(objs),
                    "entry": "0x%08x" % b})
        out.append({"note": "aim: starts at block %08x, registers and arguments as objects" % b,
                    "args": list(objs), "regs": dict(regs), "entry": "0x%08x" % b})
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
            if _has_entries(new, e) and not _has_entries(out[e], e):
                # rise's lift of THIS cycle, when the unit cannot be started at a block and rise's text can.
                # It used to be taken whenever its sha differed from the unit's as well. But the states a unit
                # has were dropped for a text they were not built for (_merge), and the site list of a text
                # that is not the unit's never matched its key (states_key), so such a unit was judged in the
                # census every round and never aimed at; aimed at, it went in with the new states alone
                # (0x100496f0 with today's rise text: 1 state in place of its 826). rise.py changed on
                # 2026-11-21 and writes every one of these texts differently now, so that was every silver unit.
                # A unit that has its block entries is aimed at as it is, with the states it has and the new
                # ones after them. Run that way against the judge, 33 silver units, one round: 11 gold
                # (0x100496f0 1318/1318, 0x10163640 600/600, 0x10099ae0, 0x10218ac0, 0x1000ca00, ...), 0 before.
                # A newer text of rise's still gets its own judging in the cycle's rise step, and replaces the
                # unit where it ranks higher there.
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


def _judge(ents, shas, jid, workers, tree, seeds_dir, sites_dir, name, states=None):
    """judge `ents` from the scratch tree with the states in seeds_dir; their unreached sites go to sites_dir.
    Returns the records (nothing in the ledger is touched). `states`: that many random states a row instead
    of the judge's own count: a SIFT (see _sift), whose records are for reading the pinned states' outcomes
    and are never kept."""
    if not ents:
        return {}
    shutil.rmtree(sites_dir, ignore_errors=True)
    os.makedirs(sites_dir)
    keep_env = {k: os.environ.get(k) for k in ("COW_SEEDS_AUTO", "COW_SITES_DIR", "COWDIFF_UNREACHED",
                                               "COW_PINS_DIR", "COWDIFF_PINS", "COW_LIFT_STATES", "COWDIFF_KEEP")}
    if states is not None:
        os.environ["COW_LIFT_STATES"] = str(states)
    else:
        os.environ.pop("COW_LIFT_STATES", None)
    os.environ["COW_SEEDS_AUTO"] = seeds_dir
    os.environ["COW_SITES_DIR"] = sites_dir
    os.environ["COWDIFF_UNREACHED"] = "1"
    # how each pinned state ended on the original, one file a unit (lift_proof.record_results): always the
    # last judging of the unit, so a unit judged now starts with no file
    os.environ["COW_PINS_DIR"] = PINS
    os.environ["COWDIFF_PINS"] = "1"
    os.environ["COWDIFF_KEEP"] = "1"         # and the states its own search found (judge 18, _keep_states)
    for e in ents:
        try:
            os.remove(os.path.join(PINS, e + ".txt"))
        except OSError:
            pass
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


def _sift(got, shas, jid, workers, tree, name):
    """THE NEW STATES, ALONE, BEFORE ANY IS JUDGED FOR THE RECORD: which of them does the original finish? A
    state the original faults in is thrown away by the judge with every site it ran, and until now it went
    into the try all the same, cost the row its random states (cowdiff.c REPAIR) and, when the try was kept,
    stayed in cow/seeds_auto for good. Under the judge 736 of 8,353 block starts and 437 of 833 of seek's
    states finish on the original. So each unit's new states are judged once by themselves, one random state
    a row (COW_LIFT_STATES: seconds), and only the ones that finish go on. Kept as well: a state seek marked
    "(ends early)", which is there for the judge's same-crash rule and faults by design, and any state the
    row did not get to (a mismatch ends a row at its first: the shed rule deals with that one in the try).
    Returns {entry: [states]} of what goes on, and {entry: (new, kept)} for the outcome."""
    sift_dir = os.path.join(AIM, "seeds_sift")
    shutil.rmtree(sift_dir, ignore_errors=True)
    os.makedirs(sift_dir)
    ents = sorted(got)
    for e in ents:
        _write_doc(os.path.join(sift_dir, e + ".json"), got[e], None)
    _judge(ents, shas, jid, workers, tree, sift_dir, os.path.join(AIM, "sites_sift"), name, states=1)
    out, counts, kept, sick = {}, {}, {}, {}
    for e in ents:
        how = _pin_outcomes(e)
        fix = _pin_fixes(e)
        hand_n = len(_hand_states(e))
        kept[e] = [st for i, st in enumerate(got[e])
                   if how.get(i + hand_n) != "afault" or "(ends early)" in str(st.get("note") or "")]
        seen = {_body(st) for st in got[e]}
        nxt = []
        for i, st in enumerate(got[e]):
            if how.get(i + hand_n) != "afault" or "(ends early)" in str(st.get("note") or ""):
                continue
            if (i + hand_n) in fix:
                m_ = _mended(st, fix[i + hand_n])
                if m_ is not None:
                    m_ = _as_the_fix_reads(os.path.join(tree, "cow_%s.c" % e), e, m_)
            else:
                m_ = _frame_zeroed(os.path.join(tree, "cow_%s.c" % e), e, st)
            if m_ is not None and _body(m_) not in seen:
                seen.add(_body(m_))
                nxt.append(m_)
        if nxt:
            sick[e] = (nxt, seen)
    # MEND (judge 18). A state the original faults in went no further until now, and that is most of them: a
    # block start has a pointer in a register, and the block reads a field of it, and a field of that. The
    # harness repairs such a state itself (cowdiff.c REPAIR: the word the faulting address came from gets an
    # object), but only the first 32 of a row, one step a random state, and what it finds nobody can keep. It
    # now says which repair it would make (PINFIX), and the state gets it here and is judged again, up to
    # MEND_ROUNDS deep: the state that then finishes on the original is a pinned state like any other.
    for rnd in range(MEND_ROUNDS):
        if not sick:
            break
        shutil.rmtree(sift_dir, ignore_errors=True)
        os.makedirs(sift_dir)
        es = sorted(sick)
        for e in es:
            _write_doc(os.path.join(sift_dir, e + ".json"), sick[e][0], None)
        _judge(es, shas, jid, workers, tree, sift_dir, os.path.join(AIM, "sites_sift"), name + "m%d" % rnd, states=1)
        nsick = {}
        for e in es:
            states, seen = sick[e]
            how = _pin_outcomes(e)
            fix = _pin_fixes(e)
            hand_n = len(_hand_states(e))
            nxt = []
            for i, st in enumerate(states):
                o = how.get(i + hand_n)
                if o == "clean":
                    kept[e].append(st)
                elif o == "afault":
                    if (i + hand_n) in fix:
                        m_ = _mended(st, fix[i + hand_n])
                        if m_ is not None:
                            m_ = _as_the_fix_reads(os.path.join(tree, "cow_%s.c" % e), e, m_)
                    else:
                        m_ = _frame_zeroed(os.path.join(tree, "cow_%s.c" % e), e, st)
                    if m_ is not None and _body(m_) not in seen:
                        seen.add(_body(m_))
                        nxt.append(m_)
            if nxt:
                nsick[e] = (nxt, seen)
        sick = nsick
    for e in ents:
        counts[e] = (len(got[e]), len(kept[e]))
        if kept[e]:
            out[e] = kept[e]
    return out, counts


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
    for e in list(texts):
        # a unit whose own text FAILed where the aim reached is aimed at through rise's text of this cycle
        # from then on (see the keep, step 4), until one of the two is kept
        new_ = os.path.join(ROOT, "build", "cycle", "rise_tree", "cow_%s.c" % e)
        if ((memo.get(e) or {}).get("newer") and _has_entries(new_, e)
                and os.path.abspath(texts[e]) != os.path.abspath(new_) and P.file_sha(new_) != P.file_sha(texts[e])):
            texts[e] = new_
    shas = {e: P.file_sha(p) for e, p in texts.items()}   # the text the aim judges, which may be rise's newer one

    # The site list is written by the prover and keyed by the prover (states_key); the memo/stall key is that key
    # plus what a round runs: seek and rise make the states and aim decides who gets aimed at, so a unit that
    # stopped moving under the old tools is tried again when they change (the judge id alone kept 731 units aside
    # after a drop that changed only seek).
    _lift_proof().JUDGE_ID = jid          # sites_key's first field: the id the prover takes in its own main()
    tsha = tools_sha()

    def key(e):
        return memo_key(e, tsha, shas.get(e))
    def to_newer(e, o):
        """A ROUND LEFT THE UNIT WHERE IT WAS, and rise writes that function differently today: the next round
        aims at rise's text of this cycle, with the same states; it replaces the unit if it is kept.
        The difference may be the very thing in the way. A text that FAILs where the aim now reaches
        (0x1000f870 read a local back as the 0 it had stored, after the callee it gave the address to had
        filled it; rise forgets such a local at a call since 2026-11-24): 195 silver units ended a pass that
        way on the user's box, "for the lifter", and nothing tried the lifter's newer answer on them. And a
        text that cannot be STARTED where it is wrong: 0x100c0500's block 100c08cc reads through edi, a local a
        callee fills; the old text holds that local to be 0, its entry fix lays edi = 0 down for both sides,
        and every state started there, and at the 69 sites behind it, faulted on the original (the same for
        0x1016fcd0, 0x102b9520, 0x100d2f60: "the original faults in every new state"). The rise step judges a
        newer text with the states the unit has, which reach neither kind of place, so it ranks the same and
        is not kept there. Once a unit: the round after is its own."""
        unit_ = os.path.join(ROOT, "src", "lifted", "cow_%s.c" % e)
        new_ = os.path.join(ROOT, "build", "cycle", "rise_tree", "cow_%s.c" % e)
        if (os.path.abspath(texts[e]) == os.path.abspath(unit_) and _has_entries(new_, e)
                and P.file_sha(new_) != shas[e]):
            memo[e] = dict(memo.get(e) or {}, newer=True, stall=0)
            texts[e] = new_
            shas[e] = P.file_sha(new_)
            o["next"] = "rise's text of this cycle, with the same states"

    new_gold, fails, rnd = 0, [], 0
    while time.time() < t_end:
        outc = {}                             # what this round did with each unit (why_table reads it back)
        led = P.read_ledger(ROOT)
        todo = []
        for e in texts:
            m = memo.get(e) or {}
            if m.get("key") == key(e) and int(m.get("stall", 0)) >= STALL_ROUNDS:
                # what the round that stopped it found stays with it: this line used to overwrite it, and 712
                # units then said only "stopped moving", with no word of what their try had done
                prev = _outcome_of(e)
                outc[e] = {"aimed": False, "why": "stopped moving: %d round(s) with these states and these tools"
                                                    % int(m.get("stall", 0)), "round": rnd + 1,
                           "last_try": prev.get("last_try") if prev.get("why", "").startswith("stopped moving")
                           else prev}
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
        # A UNIT THAT CANNOT BE STARTED WHERE IT MISSES goes to rise's text of this cycle at once, not after a
        # round that could do nothing for it: its own text has no block entry at any block a missing site is
        # in (it was lifted before rise made a block of every return site), and rise's text has.
        # Looked at before the census and once more after it: a unit gets its site list in the census, and only
        # then is it known where it misses (its second census, on rise's text, is in the same round).
        for census_pass in (0, 1):
            early = 0
            for e in todo:
                unit_ = os.path.join(ROOT, "src", "lifted", "cow_%s.c" % e)
                new_ = os.path.join(ROOT, "build", "cycle", "rise_tree", "cow_%s.c" % e)
                if os.path.abspath(texts[e]) != os.path.abspath(unit_) or site_list(e)[0] != states_key(e, texts[e]):
                    continue
                miss = [int(x, 16) for x in site_list(e)[1] or []]
                newb = fix_blocks(new_, e) if miss else []
                if not newb:
                    continue
                own = set(fix_blocks(texts[e], e))
                at = {max([b for b in newb if b <= a] or [0]) for a in miss} - {0}
                if at and not (at & own):
                    o_ = {}
                    to_newer(e, o_)
                    early += bool(o_)
            if early:
                _say("aim round %d: %d units have no block entry where they miss a site: rise's text of this cycle,"
                     " with the same states" % (rnd, early))
            tree = _tree({e: texts[e] for e in todo})

            # 1. the census: a unit with no site list for its current states is judged once as it is
            need = [e for e in todo if site_list(e)[0] != states_key(e, texts[e])]
            if need:
                _say("aim round %d: %d units have no list of the sites they miss yet: judged as they are" % (rnd, len(need)))
                seeds_now = os.path.join(AIM, "seeds_now")
                shutil.rmtree(seeds_now, ignore_errors=True)
                os.makedirs(seeds_now)
                for e in need:
                    p = os.path.join(ROOT, "cow", "seeds_auto", e + ".json")
                    if os.path.isfile(p):
                        shutil.copyfile(p, os.path.join(seeds_now, e + ".json"))
                res = _judge(need, shas, jid, workers, tree, seeds_now, os.path.join(AIM, "sites_now"),
                             "c%d%s" % (rnd, "b" if census_pass else ""))
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
            if not need:
                break
        # A UNIT WITH EVERY SITE REACHED AND STILL NOT GOLD needs more clean states, not other states. That was
        # left to the grind, which runs the same random states longer, and where the original faults in most of
        # them that does not get there: 35 units (0.30% of the code) sat at 38 to 90 clean states. A state that
        # starts at a block is one more clean state wherever the original finishes it; under the judge, 23 such
        # units given a start at each of their blocks: 12 gold (0x1028e3d0 52 -> 238 clean, 0x10290aa0,
        # 0x102aed60, ...). So such a unit is aimed at too, with a start at every block of its own.
        def _wants_clean(e):
            rec = led.get(e) or {}
            try:
                few = int(rec.get("clean") or 0) < judge2.GOLD_CLEAN
            except (TypeError, ValueError):
                few = False
            return (few and rec.get("tier") in RANK and site_list(e)[0] == states_key(e, texts[e])
                    and not site_list(e)[1] and _has_entries(texts[e], e))
        clean_only = {e for e in todo if _wants_clean(e)}
        aimed = [e for e in todo if (led.get(e) or {}).get("tier") != "gold"
                 and ((site_list(e)[0] == states_key(e, texts[e]) and site_list(e)[1])
                      or (memo.get(e) or {}).get("fresh_only") or e in clean_only)]
        # (a fresh_only unit with no list yet: seek finds no file of it under --reached and aims at every block)
        for e in set(todo) - set(aimed):
            # gold now, a FAIL (no site list: the lifter's lane), or every site reached with too few clean states
            # (the grind's): nothing for seek to aim at with these states
            memo[e] = dict(memo.get(e) or {}, key=key(e), stall=STALL_ROUNDS)
            rec = led.get(e) or {}
            if rec.get("tier") == "gold":
                why = "gold as it stands: nothing to aim at"
            elif site_list(e)[0] != states_key(e, texts[e]):
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
            can_ = fix_blocks(texts[e], e)
            more = [st for st in entry_states(e, [int(x, 16) for x in site_list(e)[1] or []],
                                              every=can_ if e in clean_only else None, can=can_)
                    if _body(st) not in have]
            if more:
                got[e] = list(got.get(e, [])) + more
                n_entry += len(more)
        _say("aim round %d: %d states start at a block no state reached" % (rnd, n_entry))
        for e in list(got):
            got[e] = [_as_the_fix_reads(texts[e], e, st) for st in got[e]]
        # 2b. the sift: only the new states the original finishes go into the try
        made = {e: len(v) for e, v in got.items()}
        got, sifted = _sift(got, shas, jid, workers, tree, "s%d" % rnd)
        _say("aim round %d: the original finishes %d of %d new states (%d of %d units have one)"
             % (rnd, sum(k for _n, k in sifted.values()), sum(n for n, _k in sifted.values()), len(got), len(made)))
        for e in todo:
            if e not in got:
                m = memo.get(e) or {}
                memo[e] = dict(m, key=key(e), stall=int(m.get("stall", 0)) + 1 if m.get("key") == key(e) else 1)
                if e in made:
                    outc[e] = {"aimed": True, "seek_states": made[e], "round": rnd,
                               "why": "the original faults in every new state (%d): nothing new to judge" % made[e]}
                else:
                    outc[e] = {"aimed": True, "seek_states": 0, "seek_error": rc, "round": rnd,
                               "why": "seek gave no states%s" % (": exit code %s" % rc if rc else "")}
                to_newer(e, outc[e])
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

        # 3c. a try that ranks no higher sheds the new states the original faults in and runs once more
        led = P.read_ledger(ROOT)
        afault = _shed_afault_states(res, ents, led, shas, jid, workers, tree, try_dir,
                                     os.path.join(AIM, "sites_try"), "a%d" % rnd)

        # 3d. CHASE. What a row reaches beyond its pinned states it reaches by the harness's own search, and that
        # search goes another way whenever the pinned states change: 0x101bd880's try reached the one site it
        # missed (101bdae2, a block start with ebx an object and ecx, esi numbers) and lost five others the
        # search had found before (101bdc6c..), 556 of 561 where the record says 560, "ranks no higher", thrown
        # away. The try was one step from gold: the five are a block start away too. So a try that reached a
        # site the unit missed, and ranks no higher for what it lost, goes on from where it is: block starts at
        # what it misses NOW, sifted, added, judged again, CHASE_LAPS times at most. What ends up kept is still
        # only what ranks higher than the record.
        # First what costs no guessing: the unit's states as they stand are judged once more, for the states
        # the judge's own search finds with them (judge 18: it says what each is made of), and those go into
        # the try as pinned states, behind the new ones. The try then holds everything the record reached,
        # whatever its search does this time, and the site the new states reached on top of it.
        fold = []
        for e in ents:
            rec = res.get(e) or {}
            if (not P.answered(rec, shas[e], jid) or rec.get("tier") not in RANK or rec.get("tier") == "gold"
                    or _ranks_higher(rec, led.get(e))):
                continue
            was = set(site_list(e)[1] or [])
            now = set(site_list(e, os.path.join(AIM, "sites_try"))[1] or [])
            if now and (was - now):
                fold.append(e)
        if fold:
            base_dir = os.path.join(AIM, "seeds_base")
            shutil.rmtree(base_dir, ignore_errors=True)
            os.makedirs(base_dir)
            for e in fold:
                p_ = os.path.join(ROOT, "cow", "seeds_auto", e + ".json")
                if os.path.isfile(p_):
                    shutil.copyfile(p_, os.path.join(base_dir, e + ".json"))
            _judge(fold, shas, jid, workers, tree, base_dir, os.path.join(AIM, "sites_base"), "k%d" % rnd)
            n_kept, again = 0, []
            for e in fold:
                base = _states_of(os.path.join(base_dir, e + ".json"))
                ks = _keep_states(e, base)
                tp = os.path.join(try_dir, e + ".json")
                have = {_body(st) for st in _states_of(tp)}
                ks = [st for st in ks if _body(st) not in have]
                if ks:
                    _write_doc(tp, _states_of(tp) + ks, _built_for(tp))
                    outc[e]["kept_states"] = len(ks)
                    n_kept += len(ks)
                    again.append(e)
            _say("aim round %d: %d units reached a missed site and lost others: %d states the judge's search"
                 " found with the old states are pinned behind the new" % (rnd, len(fold), n_kept))
            if again:
                res.update(_judge(sorted(again, key=near), shas, jid, workers, tree, try_dir,
                                  os.path.join(AIM, "sites_try"), "f%d" % rnd))
        seen_miss = {}
        for lap in range(CHASE_LAPS):
            chase = {}
            for e in ents:
                rec = res.get(e) or {}
                if (not P.answered(rec, shas[e], jid) or rec.get("tier") not in RANK or rec.get("tier") == "gold"
                        or _ranks_higher(rec, led.get(e)) or not _has_entries(texts[e], e)):
                    continue
                was = set(site_list(e)[1] or [])
                now = set(site_list(e, os.path.join(AIM, "sites_try"))[1] or [])
                if not now or not (was - now) or seen_miss.get(e) == now:
                    continue
                seen_miss[e] = now
                tp = os.path.join(try_dir, e + ".json")
                have = {_body(st) for st in _states_of(tp)}
                more = [_as_the_fix_reads(texts[e], e, st)
                        for st in entry_states(e, [int(x, 16) for x in now], can=fix_blocks(texts[e], e))]
                more = [st for st in more if _body(st) not in have]
                if more:
                    chase[e] = more
            if not chase:
                break
            n_ch = sum(len(v) for v in chase.values())
            chase, _cnt = _sift(chase, shas, jid, workers, tree, "h%d%d" % (rnd, lap))
            _say("aim round %d: %d units reached a missed site and lost others: %d block starts at those, the"
                 " original finishes %d" % (rnd, len(_cnt), n_ch, sum(len(v) for v in chase.values())))
            if not chase:
                break
            for e, st in chase.items():
                tp = os.path.join(try_dir, e + ".json")
                _write_doc(tp, _states_of(tp) + st, _built_for(tp))
                outc[e]["chased"] = lap + 1
            res.update(_judge(sorted(chase, key=near), shas, jid, workers, tree, try_dir,
                              os.path.join(AIM, "sites_try"), "a%d%d" % (rnd, lap)))

        # 4. keep what ranks higher
        keep, moves, grew = {}, {}, 0
        for e in ents:
            rec = res.get(e) or {}
            o = outc.setdefault(e, {"aimed": True, "round": rnd})
            o["try"] = {"tier": rec.get("tier"), "why": rec.get("why") or "",
                        "first_state": _first_state(rec), "blocks": rec.get("blocks")}
            if dropped.get(e):
                o["dropped"] = [{"index": d["index"], "why": d["why"]} for d in dropped[e]]
            if afault.get(e):
                o["new_states_the_original_faults_in"] = afault[e][0]
                o["new_states_left"] = afault[e][1]
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
                    if afault.get(e) and not afault[e][1]:
                        o["why"] = ("the original faults in every new state (%d): nothing new was judged"
                                    % afault[e][0])
                memo[e] = dict(m, key=key(e), stall=int(m.get("stall", 0)) + 1 if m.get("key") == key(e) else 1)
            if retry:
                # a newer text failing on states built for the older one: next round it gets fresh states alone,
                # and that round is not counted against it
                memo[e] = dict(memo[e], fresh_only=True, stall=0)
            if e not in keep:
                to_newer(e, o)
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
