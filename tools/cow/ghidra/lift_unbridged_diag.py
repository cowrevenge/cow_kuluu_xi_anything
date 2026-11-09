"""What is actually inside `leftover_unbridged_call` (931)?

The reason string is produced by ghidra_c scanning the FINAL text for a `COW_UNBRIDGED_` marker, so 931 units
share one label while the underlying causes are several and very different jobs:

  no_generated_call_site_for_FUN_x   Ghidra emitted a call the generated body has no matching call site for
                                     - often a tail jump, or a call Ghidra invented/split
  more_callsites_than_calls_FUN_x    the reverse: the body has calls the decompiler folded away
  unbridgeable_indirect_call_<name>  a call through a pointer the body cannot name
  ...and the one this project has already been fooled by: my own note_tail() guard was quietly producing
  this reason for ~450 perfectly liftable units, because it refused any tail target that was also called
  normally somewhere else in the image. A label with 931 units under it is a claim about the label, not
  about the units.

So: run the SAME code path the lifter runs (classify + emit, one shared Ctx) for these units and report the
problems the rewriter actually recorded. Read-only - nothing is written, so no lock and no tree risk.

    python tools/cow/ghidra/lift_unbridged_diag.py
    python tools/cow/ghidra/lift_unbridged_diag.py --n 500 --seed 3
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
sys.path.insert(0, os.path.join(ROOT, "tools", "cow"))

import gen_model          # noqa: E402
import lift as liftmod    # noqa: E402
import trivial_audit      # noqa: E402

REFUSALS = os.path.join(ROOT, "build", "cow_lift", "refusals.json")
DUMP = os.environ.get("COW_LIFT_DUMP", "D:/projects/ghidra/ghidra_out/functions_all.jsonl")

# collapse the per-address detail so the SHAPE is countable
# How the GENERATED body spells a guest pop: through the locals, not the Guest struct - only
# the adapter epilogue uses g->. Shared by the census and its check file.
POP_RE = re.compile(r"rd32\(esp\);esp\+=4;\w+=")


def canon(p):
    p = re.sub(r"_for_FUN_[0-9a-f]+", "_for_FUN_x", p)
    p = re.sub(r"_than_calls_FUN_[0-9a-f]+", "_than_calls_FUN_x", p)
    p = re.sub(r"_indirect_call_.*", "_indirect_call_<name>", p)
    p = re.sub(r"_at_[0-9a-f]+", "_at_x", p)
    p = re.sub(r"_%x" % 0, "_n", p)
    return re.sub(r"_[0-9a-f]{6,8}(?=_)|_[0-9a-f]{6,8}$", "_addr", p)


def tail_call_tag(tgt, body_lines):
    """Sub-classify a `no_generated_call_site_for_FUN_<tgt>` refusal, or None when the label does not apply.

    WHY THIS EXISTS. `no_generated_call_site_for_FUN_x` is a symptom, and two opposite jobs hide under it:
    an INTRA-BODY TAIL CALL (the body jumps to a function on a path that is not the body's single terminal
    jump, so gen_model.tail_jump_of never fires, no call site is recorded, and bridge() refuses it correctly)
    versus a target Ghidra invented or moved (which no bridge will ever name). Measured 2026-11-09 over 300
    sampled refusals: 228 of them are this label, 155 tail calls and 73 nowhere.

    For the tail calls, the generated body is the authority on what the guest did: it renders the mid-body
    jump as `{ REGS_STORE; f_T(g); return; }`, i.e. a host call that does NOT pop this entry's return-address
    slot, while the ordinary path says `esp += 4; REGS_STORE; return;`. So the original already treats the
    tail as a call; what the lift lacks is a per-path exit, because in a LIFTED unit the cleanup is hoisted
    out of the body into ADAPTER_TMPL, which runs once after `cow_lift_x` returns.

    That is why the pop split below is the number that matters. A body with NO pops converts with a
    "tailed out" flag alone. A body that pops does not: its pops belong on the path that pops them, and
    gen_model keeps pops as SETS precisely because a multi-exit function pops its saved registers once per
    path (gen_model.py:342) - so a pop line appearing before the tail in TEXT is a hint, never permission.
    Those units need per-path pops, which is the expensive half.

    SPELLING, learned the hard way twice: the generated body pops through LOCALS -
    `{ uint32_t v = rd32(esp); esp += 4; esi = (uint32_t)(v); }` - not `g->esp`; only the adapter's epilogue
    uses g->. The first regex looked for g-> and matched nothing, which made every unit look sound. Pinned by
    tools/cow/ghidra/lift_unbridged_check.py against a unit read by eye.
    """
    if not tgt or not re.fullmatch(r"[0-9a-fA-F]{6,8}", tgt):
        return "[could not read the target back]"
    # TWO texts, deliberately. The instruction spellings (`jmp 0x...`, `call 0x...`) are matched with their
    # whitespace intact; the generated-statement spellings (`f_T(g);return;`, the pop) are matched with it
    # removed, because those arrive indented and brace-wrapped. Collapsing them into one - which is what the
    # first version of this function did - made `jmp\s+0x...` unmatchable and filed every unit as
    # "nowhere in the body". lift_unbridged_check.py clause 1 is the case that catches it.
    spaced = "\n".join(body_lines)
    compact = [l.replace(" ", "").lower() for l in body_lines]
    joined = "\n".join(compact)
    if not re.search(r"jmp\s+0x%s\b" % tgt.lower(), spaced, re.I):
        if re.search(r"call\s+0x%s\b" % tgt.lower(), spaced, re.I):
            return "[body calls it but the model recorded no site]"
        return "[target appears nowhere in the body]"
    if ("f_%s(g);return;" % tgt.lower()) not in joined:
        return ("[INTRA-BODY TAIL CALL: jmp present but the generated body does not render a call to it]")
    pop_at = [i for i, l in enumerate(compact) if POP_RE.search(l)]
    tail_at = next((i for i, l in enumerate(compact) if ("f_%s(g);return;" % tgt.lower()) in l), -1)
    if tail_at < 0:
        return "[INTRA-BODY TAIL CALL: line search lost the call form - detector bug]"
    if not pop_at:
        return "[INTRA-BODY TAIL CALL: NO pops in the body - a tailed-out flag is the whole fix]"
    if any(i < tail_at for i in pop_at):
        return ("[INTRA-BODY TAIL CALL: body pops, one precedes the tail in TEXT (path unverified) - "
                "needs per-path pops]")
    return "[INTRA-BODY TAIL CALL: body pops, none before the tail in text - needs per-path pops]"


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--n", type=int, default=300)
    ap.add_argument("--seed", type=int, default=5)
    ap.add_argument("--dump", default=DUMP)
    ap.add_argument("--show", type=int, default=5)
    a = ap.parse_args()

    with open(REFUSALS, encoding="utf-8") as fh:
        refusals = json.load(fh)
    addrs = [k.lower().replace("0x", "") for k, v in refusals.items()
             if str(v).startswith("leftover_unbridged_call")]
    random.Random(a.seed).shuffle(addrs)
    addrs = addrs[:a.n]
    if not addrs:
        print("no leftover_unbridged_call refusals")
        return 2

    want = set(addrs)
    entries = {}
    with open(a.dump, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            if not line.strip():
                continue
            try:
                e = json.loads(line)
            except ValueError:
                continue
            ad = str(e.get("addr", "")).lower().replace("0x", "")
            if ad in want:
                entries[ad] = e

    ctx = liftmod.Ctx(a.dump, "12.2")
    kinds = collections.Counter()
    pairs = collections.Counter()
    examples = collections.defaultdict(list)
    n = 0
    for key in sorted(addrs):
        e = entries.get(key)
        if not e:
            kinds["<not in the Ghidra dump>"] += 1
            continue
        d = {"addr": "0x" + key, "c": e.get("c") or "", "param_count": e.get("param_count")}
        # reset BEFORE the call, exactly as _main does (it clears, then classifies, then emits). Reading
        # after and clearing afterwards would work for a shared Ctx only if emit never carried state
        # between units - and assuming that about a shared context is how a census reports last run's
        # problems as this one's.
        ctx.problems = []
        try:
            text, why = liftmod.emit(d, ctx)
        except Exception as exc:                      # a crash is itself a finding, never a silent skip
            kinds["<emit raised %s>" % type(exc).__name__] += 1
            continue
        n += 1
        probs = [canon(p) for p in (ctx.problems or [])]
        raw_probs = list(ctx.problems or [])
        ctx.problems = []
        if text:
            kinds["<NO LONGER REFUSED - stale snapshot>"] += 1
            continue
        if not probs:
            kinds["<refused with no recorded problem>"] += 1
            continue
        for p in probs:
            kinds[p] += 1
        # the FIRST problem is what decided the refusal; the rest is context
        pairs[probs[0]] += 1
        # Sub-classify the symptom. The address comes from the RAW problem: `canon` has already
        # replaced the hex with `x`, and a lookup built from it silently matches nothing - the
        # failure this file keeps re-meeting. The tag function is the single home of the logic,
        # and tools/cow/ghidra/lift_unbridged_check.py pins it to a unit read by eye.
        if probs[0].startswith("no_generated_call_site_for_FUN_"):
            # probs[i] is canon(raw_probs[i]), so the problem that DECIDED the refusal is raw_probs[0] by
            # position. Searching the list by prefix instead picks the first such problem, which is a
            # different target when a unit refuses on several - it put one unit in the wrong bucket.
            raw = str(raw_probs[0]) if raw_probs else ""
            tgt = re.sub(r".*FUN_", "", str(raw)).strip()
            body = [l if isinstance(l, str) else str(l) for l in (ctx.bodies.get(key) or [])]
            pairs["%s  %s" % (probs[0], tail_call_tag(tgt, body))] += 1

        if len(examples[probs[0]]) < a.show:
            examples[probs[0]].append((key, probs[:3]))

    print("sampled %d   emitted-by-emit %d" % (len(addrs), n))
    print("\n-- every problem seen (a unit can have several) --")
    for k, v in kinds.most_common(16):
        print("  %6d  %s" % (v, k))
    print("\n-- the FIRST problem (what actually caused the refusal) --")
    for k, v in pairs.most_common(10):
        print("  %6d  %s" % (v, k))
    print("\n-- examples --")
    for g, ex in examples.items():
        print(" [%s]" % g)
        for key, probs in ex[:a.show]:
            print("  0x%s  %s" % (key, probs))
    return 0


if __name__ == "__main__":
    sys.exit(main())
