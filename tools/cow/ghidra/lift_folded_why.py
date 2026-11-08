"""Why did the nested widening release almost nothing?

The probe said `_callee_read` translates nested vtable callees and the selftest is green, yet a
report-only lift over 150 units of `indirect_call_not_modelled` released 5. Two different clauses book
that ONE string (the tail-jump clause and the site-naming clause), and the site-naming clause reads the
RAW decompiled text, not the post-deref text the bridging pass eventually sees. So "translatable" and
"the clause lets the unit through" are different questions, and guessing which one is holding the family
is exactly how a pattern fix gets mis-priced.

This walks the sampled units through the lifter's OWN predicates and reports, per unit, which one fired:

    tail-jump clause          m["no_ret"]-style tail + has_indirect_call        (lift.py:375)
    site clause               no target_expr on any unnamed site AND no raw callee
                              that _callee_read can translate                    (lift.py:418)
    -> the unit then falls through to every later gate, so a non-refusal here can still be a
       downstream reason (partial register, argcount, leftover_problems).

    python tools/cow/ghidra/lift_folded_why.py --n 150 --seed 11
"""
import argparse
import collections
import json
import os
import random
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)

import gen_model            # noqa: E402
import ghidra_c             # noqa: E402
import lift                 # noqa: E402

REFUSALS = os.path.join(ROOT, "build", "cow_lift", "refusals.json")
DUMP = os.environ.get("COW_LIFT_DUMP", "D:/projects/ghidra/ghidra_out/functions_all.jsonl")


LOCALISH = collections.Counter()


def classify_refusal(text):
    """WHY _callee_read said no - so the next change is priced, not guessed.

    Distinguishing "a Ghidra local is the leaf" (the frame-aliasing model's job, and correctly refused
    today) from "pure spelling - more casts/stars in front of a param leaf" (a call-view widening, safe
    now) is the whole difference between one job and two.
    """
    t = text.strip()
    if ghidra_c.Rewriter._callee_read(t) is not None:
        return "translates already"
    # strip casts, then look at what the leaves actually are
    bare = re.sub(r"\(\s*[A-Za-z_][A-Za-z0-9_ ]*\*+\s*\)", " ", t)
    leaves = [w for w in re.findall(r"[A-Za-z_][A-Za-z0-9_]*",
                                    re.sub(r"0x[0-9a-fA-F]+[uU]?|\b\d+[uU]?", " ", bare))
              if not re.fullmatch(r"code|int|uint|char|uchar|short|ushort|long|undefined\d*|void|size_t|bool|byte|word|dword", w)]
    has_local = any(re.match(r"(?:[iu]?[Vv]ar|p?[acdefu]?Stack_|local_|extraout_|in_|unaff_|unaff|DAT_|PTR_)", w) for w in leaves)
    # a cast/star run between the first cast group and the address group is the multi-cast spelling gap
    multi_cast = len(re.findall(r"\(\s*[A-Za-z_][A-Za-z0-9_ ]*\*+\s*\)", t)) >= 2
    if has_local:
        return "LEAF IS GHIDRA LOCAL/STACK (frame model)"
    if multi_cast:
        return "SPELLING: multi-cast/star prefix (widenable now)"
    if "[" in bare or "&" in bare:
        return "index or address-of in callee (stays refused)"
    if not leaves:
        return "no identifiable leaf"
    return "other: " + ",".join(sorted(set(leaves))[:3])


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--n", type=int, default=150)
    ap.add_argument("--seed", type=int, default=11)
    ap.add_argument("--dump", default=DUMP)
    ap.add_argument("--show", type=int, default=8)
    a = ap.parse_args()

    with open(REFUSALS, encoding="utf-8") as fh:
        refusals = json.load(fh)
    addrs = [k for k, v in refusals.items() if str(v).startswith("indirect_call_not_modelled")]
    random.Random(a.seed).shuffle(addrs)
    addrs = addrs[:a.n]

    ctx = lift.Ctx(a.dump, "12.2")

    # Ctx streams the dump and keeps only signatures, so index the sampled entries ourselves - same
    # norm() the lifter uses, so an address that matches here matches there.
    want = {lift.norm(x): x for x in addrs}
    by_addr = {}
    with open(a.dump, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            try:
                d = json.loads(line)
            except ValueError:
                continue
            k = lift.norm(d.get("addr"))
            if k in want:
                by_addr[k] = d

    buckets = collections.Counter()
    examples = collections.defaultdict(list)
    why_refused_subforms = collections.Counter()

    for addr in addrs:
        short = lift.norm(addr)[2:]
        d = by_addr.get(lift.norm(addr))
        if d is None:
            buckets["no-dump-entry"] += 1
            continue
        c = d.get("c") or ""
        gbody = ctx.bodies.get(short)
        if gbody is None:
            buckets["no_generated_body"] += 1
            continue
        m = gen_model.model_generated(gbody)
        if not m.get("ok"):
            buckets["model_not_ok:%s" % m.get("why")] += 1
            continue

        unnamed = [s for s in m.get("call_sites", []) if s["target"] is None]
        has_ind = bool(m.get("has_indirect_call"))
        named_sites = any(s.get("target_expr") for s in unnamed)
        raw_hits = ghidra_c.computed_pointer_calls(c)
        raw_translatable = [t for _r, _e, t, _x in raw_hits
                            if ghidra_c.Rewriter._callee_read(t)]

        # which clause would fire, in the order lift.emit evaluates them
        if m.get("no_ret") and not m.get("tail_jump"):
            key = "no_ret_in_body"
        elif m.get("tail_jump") and has_ind:
            key = "TAIL-JUMP clause (lift.py:375)"
        elif has_ind and not named_sites and not raw_translatable:
            key = "SITE clause (lift.py:418) - raw callee untranslatable"
            if raw_hits and not raw_translatable:
                key += " [sees callee but refuses it]"
            elif not raw_hits:
                key += " [computed_pointer_calls saw NOTHING in raw C]"
        else:
            key = "PAST the clause (released or blocked downstream)"

        buckets[key] += 1
        if len(examples[key]) < a.show:
            callees = [h[2][:70] for h in raw_hits][:3]
            examples[key].append((addr, callees))
        if key.startswith("SITE clause"):
            for _r, _e, t, _x in raw_hits:
                why_refused_subforms[classify_refusal(t)] += 1

    print("sampled %d units of indirect_call_not_modelled\n" % len(addrs))
    for k, v in buckets.most_common():
        print("  %5d  %s" % (v, k))
    print("\n-- per CALLEE: why _callee_read still refuses (prices the next change) --")
    for k, v in why_refused_subforms.most_common():
        print("  %5d  %s" % (v, k))

    print("\n-- examples --")
    for k, _v in buckets.most_common():
        if not examples.get(k):
            continue
        print(" [%s]" % k)
        for addr, callees in examples[k][:a.show]:
            print("  %s  %s" % (addr, " | ".join(callees) if callees else "(no callee text)"))
    return 0


if __name__ == "__main__":
    sys.exit(main())
