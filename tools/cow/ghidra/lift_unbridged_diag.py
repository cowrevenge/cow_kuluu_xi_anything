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
def canon(p):
    p = re.sub(r"_for_FUN_[0-9a-f]+", "_for_FUN_x", p)
    p = re.sub(r"_than_calls_FUN_[0-9a-f]+", "_than_calls_FUN_x", p)
    p = re.sub(r"_indirect_call_.*", "_indirect_call_<name>", p)
    p = re.sub(r"_at_[0-9a-f]+", "_at_x", p)
    p = re.sub(r"_%x" % 0, "_n", p)
    return re.sub(r"_[0-9a-f]{6,8}(?=_)|_[0-9a-f]{6,8}$", "_addr", p)


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
        # `no_generated_call_site_for_FUN_x` is a SYMPTOM, and the mechanism behind it decides the fix. The
        # one measured here (261 of ~255 sampled sites, one unit read by eye: 0x10018b00 ends one path with
        # `pop esi` / `jmp 0x10071050` while Ghidra writes `FUN_10071050(); return;`) is an INTRA-BODY TAIL
        # CALL: a `jmp` to a function on a path that is not the body's single terminal jump, so
        # gen_model.tail_jump_of never fires, no call site exists, and bridge() refuses. Separating it from
        # "target appears nowhere in the body" is the difference between a runtime-semantics job and a
        # missing-bridge job, and a single label hides both.
        if probs[0].startswith("no_generated_call_site_for_FUN_"):
            # take the address from the RAW problem: `canon` has already replaced the hex with `x`, and a
            # lookup built from it silently matches nothing - the failure mode this file keeps re-meeting.
            raw = next((p for p in raw_probs if str(p).startswith("no_generated_call_site_for_FUN_")), "")
            tgt = re.sub(r".*FUN_", "", str(raw)).strip()
            joined = "\n".join(l if isinstance(l, str) else str(l) for l in (ctx.bodies.get(key) or []))
            if not re.fullmatch(r"[0-9a-fA-F]{6,8}", tgt):
                pairs[probs[0] + "  [could not read the target back]"] += 1
            elif re.search(r"jmp\s+0x%s\b" % tgt, joined, re.I):
                # What decides the fix is whether the GENERATED body rendered that jump as a call into the
                # function - `{ REGS_STORE; f_<tgt>(g); return; }` - which is the recompiler's own statement
                # of "this jmp is a tail call, and it is a call-shaped thing". Where the body's own pops and
                # `ret` sit in the text is NOT a discriminator, and a first cut of this tag claimed it was;
                # it was killed by reading the adapter. In a LIFTED unit the epilogue does not live in the
                # body at all: ADAPTER_TMPL runs `{epilogue}; g->esp = sp0; rt_return(...)` after
                # `cow_lift_x(g)` returns, on every path, so no ordering inside the body can spare a tail
                # path the cleanup. Text order proves nothing here.
                joined_l = joined.replace(" ", "")
                if ("f_%s(g);return;" % tgt.lower()) in joined_l.lower():
                    pairs[probs[0] + "  [INTRA-BODY TAIL CALL: the generated model already renders it as "
                                     "`f_T(g); return;` - a CALL, so bridge it as one]"] += 1
                else:
                    pairs[probs[0] + "  [INTRA-BODY TAIL CALL: jmp present but the generated body does not "
                                     "render a call to it]"] += 1
            elif re.search(r"call\s+0x%s\b" % tgt, joined, re.I):
                pairs[probs[0] + "  [body calls it but the model recorded no site]"] += 1
            else:
                pairs[probs[0] + "  [target appears nowhere in the body]"] += 1
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
