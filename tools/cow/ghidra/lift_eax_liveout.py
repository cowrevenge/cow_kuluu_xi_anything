"""lift_eax_liveout.py - count the `eax` failure rows where the GUEST leaves a value in eax that the lift
never sets.

Found by reading 0x1004e320 beside its generated body:

    1004e32e  mov eax, dword ptr [eax + 8]   ; LAST write to eax  -> this is the return value
    1004e331  mov dword ptr [ecx + 8], eax
    1004e334  ret 4

cowdiff compares eax at return, and the guest really leaves that third word there. Ghidra, however, renders
the function as `void FUN(...)` - the loaded value is consumed by the store, so the decompiler sees no
return value - and the lift therefore ends its body with a bare `return;`. eax is left exactly as the entry
found it. The row reads `reg=eax A:00000000/0098fffc`: our side 0, the original the word it loaded.

WHAT THIS FILE IS FOR, AND THE CLAIM IT WAS WRONG ABOUT. It measures the class and pins the exemplar. Its
first version argued that fixing it required expression provenance between two independent renderings of one
computation - the generated body's `A = ecx + 0x8; eax = rd32(A)` against Ghidra's folded store - and that
this was the approach already tried and rejected as unsound. The measurement disproved that: the fix needed
no bridge at all, because the value never had to be named in GHIDRA'S terms. `gen_model.tail_reg_writes`
already derives return registers from the GUEST disassembly and already emits them into the adapter's
epilogue; it was refusing these units because one boundary conflated a store with a call. Splitting that
boundary shipped +19 with zero regressions. The lesson is the usual one here: before calling a fix unsound,
check whether the mechanism already exists and is merely over-refusing.

WHAT MAKES THE EMITTED VALUE SOUND (the bar `tail_reg_writes` has to hold, and the one this file's buckets
are drawn along). The last write to eax before the `ret` must be followed by no `call` - a callee writes
g->eax - and by no other eax write; it must sit on the run to the only `ret` that no jump can enter or step
over; and if the expression RE-READS memory it must also follow every store, since a write in between can
change what the read returns. A register/constant compute satisfies all of that except the store clause,
which does not apply to it - and that clause being applied to it anyway is precisely what this file counted.

THE TRIPWIRE IS MANDATORY. The detector must keep seeing 0x1004e320, the unit this was read from: every
census tool in this loop that has been written without one has, at some point, reported a confident zero for
a bug that had just been read by eye.
"""
import argparse
import collections
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
PROOF_ALL = os.path.join(ROOT, "cow", "lift_proof_all.json")
LIFTED = os.path.join(ROOT, "src", "lifted")

GEN_DEF = re.compile(r"^\s*(?:void|int|bool|CowU32|uint32_t)\s+f_[0-9a-fA-F]{6,8}(?:_body)?\s*\(")
GEN_CALL = re.compile(r"\bf_[0-9a-fA-F]{6,8}\s*\(")
GEN_EAX_WRITE = re.compile(r"^\s*eax\s*=\s*(.+?)\s*;\s*$")
GEN_RET = re.compile(r"\bret\b|REGS_STORE")
GEN_STORE = re.compile(r"\bwr(8|16|32|64|f32|f64)\s*\(")
GEN_ANY_WRITE = re.compile(r"^\s*([a-z]{2,3})\s*=")
GEN_ANY_ADVMOD = re.compile(r"^\s*(esp)\s*(?:\+=|-=)")
LIFT_SETS_EAX = re.compile(r"\bg->eax\s*=")
GEN_REGS = ("eax", "ecx", "edx", "ebx", "esp", "ebp", "esi", "edi")

CASE_UNIT = "1004e320"


def gen_eax_liveout(body_lines):
    """(True, kind) when the generated body leaves a value in eax that survives to every `ret`.

    Straight-line, three-way ordering test on the generated listing, which is the authority on what the
    entry does to the registers:

        last call  <  last `eax =`  <  FIRST `ret`

    The left half is the condition the adapter's comment cannot be argued out of: a callee writes g->eax,
    so any call after the final eax write means the value at return is whatever that callee left, not this
    load. The right half is the one that costs coverage and buys soundness: with the last eax write before
    the first ret, EVERY return path of the body passes through that write, so there is no branch shape in
    which some exit carries the value and another does not. A body with an eax write sitting between two
    rets is refused rather than guessed at - the whole point of the class is that `g->eax = <that value>`
    has to be a claim the generated body supports, and a value live on only one path supports nothing.
    """
    last_call = last_write = first_ret = last_store = -1
    write_text = ""
    writes_after = []
    for i, l in enumerate(body_lines):
        s = l.strip()
        # The function's OWN definition line reads `void f_1004e320(Guest* g)`, which matches a call pattern
        # as happily as `f_1002b430(g);` does - and the first version of this counted it, so EVERY unit bailed
        # out as "has a call" and the count would have been a confident 0. The tripwire caught it. Skip the
        # header line: a call is a statement, and a statement does not begin with a return type.
        if GEN_DEF.match(s):
            continue
        m = GEN_EAX_WRITE.match(s)
        if m:
            if last_write >= 0:
                writes_after = []           # a newer eax write supersedes everything before it
            last_write, write_text = i, m.group(1)
            continue
        if GEN_RET.search(s):
            if first_ret < 0:
                first_ret = i
        if GEN_STORE.search(s):
            last_store = i
        if GEN_CALL.search(s):
            last_call = i
    if last_write < 0:
        return False, "no eax write"
    if first_ret < 0:
        # No ret marker at all means the one-path test below was never run, and a test that silently does
        # not run is exactly how this loop has twice reported a confident zero. Refuse the unit instead.
        return False, "no ret marker in the generated body"
    if last_call > last_write:
        return False, "call after the last eax write"
    if first_ret < last_write:
        return False, "eax written on only one return path"
    is_load = bool(re.search(r"\brd(8|16|32|64|f32|f64)\(", write_text))
    # Everything the expression reads, and every register the body touches AFTER the write. A late replay of
    # the expression in the epilogue is only the same computation if none of its inputs moved underneath it.
    reads = {r for r in GEN_REGS if re.search(r"\b%s\b" % r, write_text)}
    for i, l in enumerate(body_lines):
        if i <= last_write:
            continue
        s = l.strip()
        if GEN_DEF.match(s):
            continue
        w = GEN_ANY_WRITE.match(s)
        a = GEN_ANY_ADVMOD.match(s)
        who = w.group(1) if w else (a.group(1) if a else None)
        if who:
            writes_after.append(who)
    moved = reads & set(writes_after)
    return True, {"load": is_load, "store_after": last_store > last_write, "moved": sorted(moved)}


def classify(k, bodies, proof):
    path = os.path.join(LIFTED, "cow_%s.c" % k)
    if not os.path.exists(path):
        return None
    with open(path, encoding="utf-8", errors="replace") as fh:
        txt = fh.read()
    body = txt.split("COW_LIFTED BEGIN")[-1].split("COW_LIFTED END")[0]
    if LIFT_SETS_EAX.search(body):
        return None                     # the lift does set eax - this row is about something else
    gen = bodies.get(k) or []
    if not gen:
        return None
    ok, info = gen_eax_liveout(gen)
    if not ok:
        return None
    return info


def bucket(info):
    """Name the obstacle between this unit and a replayable epilogue write, or 'clean'.

    The existing gate in gen_model.tail_reg_writes refuses anything after a store, which is the right call for
    a LOAD (re-reading it late can see memory the body changed) and too strict for a plain register compute,
    where nothing is re-read and only the inputs matter. So the three buckets below are not cosmetics: they
    say which of the two arguments a fix has to make, and 'clean' is the set a relaxed rule could take today.
    """
    if info["moved"]:
        return "input-rewritten-after"
    if info["load"] and info["store_after"]:
        return "load-after-store"
    if info["store_after"]:
        return "compute-after-store"
    return "clean"


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--why", default="eax")
    ap.add_argument("--selftest", action="store_true")
    ap.add_argument("--out", default="")
    a = ap.parse_args()

    sys.path.insert(0, HERE)
    sys.path.insert(0, os.path.join(ROOT, "tools", "cow"))
    import trivial_audit                                    # noqa: E402
    bodies = trivial_audit.body_index()

    if a.selftest:
        path = os.path.join(LIFTED, "cow_%s.c" % CASE_UNIT)
        if not os.path.exists(path):
            print("note: pinned case 0x%s has no lifted file today - no tripwire available" % CASE_UNIT)
            return 0
        r = classify(CASE_UNIT, bodies, {})
        if r is None:
            print("SELFTEST FAILED: 0x%s is the unit this was READ from and the detector does not classify "
                  "it. Do not trust any count below." % CASE_UNIT)
            return 1
        # The pinned unit is the read itself: a load whose address the body then stores through, so a store
        # follows it. If that ever reports 'clean' the store scan has gone blind and would hand a fix a set of
        # units in which re-reading the load late is wrong.
        if r["load"] is not True or r["store_after"] is not True:
            print("SELFTEST FAILED: 0x%s is `mov eax,[eax+8]` followed by `mov [ecx+8],eax`, so it must be a "
                  "load after a later store; got %r. The load/store scan has drifted." % (CASE_UNIT, r))
            return 1
        print("SELFTEST ok: 0x%s -> %s" % (CASE_UNIT, bucket(r)))
        return 0

    proof = json.load(open(PROOF_ALL, encoding="utf-8"))
    proof = proof.get("results", proof)
    addrs = [k for k, v in proof.items()
             if v.get("pass") is not True and str(v.get("why")) == a.why]
    # TRIPWIRE, before a single number is printed. The unit this detector was written from must still be
    # visible to it; every census tool in this loop that lacked one has eventually reported a confident zero
    # for a bug someone had just read by eye. If the pinned unit is no longer in scope at all, that is said
    # out loud rather than silently removing the guard.
    pinned_path = os.path.join(LIFTED, "cow_%s.c" % CASE_UNIT)
    if os.path.exists(pinned_path):
        if classify(CASE_UNIT, bodies, proof) is None:
            print("REFUSING to report: the pinned case 0x%s (the unit this was read from) is NOT detected. "
                  "The detector has drifted from the code it describes." % CASE_UNIT)
            return 2
    else:
        print("note: pinned case 0x%s has no lifted file today - this run has NO tripwire" % CASE_UNIT)

    kinds = collections.Counter()
    hits = []
    for k in addrs:
        r = classify(k, bodies, proof)
        if r:
            b = bucket(r)
            hits.append((k, b))
            kinds[b] += 1

    print("scope why=%s : %d rows" % (a.why, len(addrs)))
    print("  guest leaves a live-out eax that the lift never sets: %d (%.0f%%)"
          % (len(hits), 100.0 * len(hits) / max(1, len(addrs))))
    for kk, c in kinds.most_common(8):
        print("      %-22s %d" % (kk, c))
    for k, r in hits[:10]:
        print("   0x%s  %s" % (k, r))
    if a.out:
        with open(a.out, "w", encoding="utf-8") as fh:
            for k, _ in hits:
                fh.write("0x%s\n" % k)
        print("wrote %d -> %s" % (len(hits), a.out))
    return 0


if __name__ == "__main__":
    sys.exit(main())
