"""Which string instructions are the 1,261 `string_op_not_modelled` refusals actually made of?

The family was refused wholesale because the lift could not express a rep loop. The classifier that named it
was fixed (movsx/movss were never string ops - 1,328 units had no string instruction at all) and what is left
should be the real ones. Before writing a model, size it by FORM, because the forms are not one job:

  rep movs[bdwq]   copy ECX units from [ESI] to [EDI], advancing both by +/-unit per DF
  rep stos[bdwq]   fill ECX units at [EDI] from AL/EAX
  rep (ne|e) scas  scan ECX units at [EDI] for AL/EAX, sets flags and ZF
  rep (ne|e) cmps  compare ECX pairs, sets flags and ZF
  lods             load ECX units from [ESI] into AL/EAX
  UNPREFIXED forms - no ECX, one unit only. Much easier, and if they are common they are a first slice that
                   needs no loop at all.

Two things decide the shape of the work and are measured here, not assumed:
  * rep vs unprefixed. An unprefixed `movsd es:[edi],[esi]` is a single load+store - the lift can express
    that directly with rd*/wr*, no counter, no direction flag. A rep form needs a loop, a counter read, and
    the df honoured.
  * which registers the unit ALSO uses. A rep loop that also reads ecx for something else after the loop
    depends on ecx's post-loop value (always zero for rep movs/stos, but not for the scas/cases with a
    mismatch) - so the model has to leave ecx right, not just perform the copies.

Read-only.

    python tools/cow/ghidra/lift_stringdiag.py
    python tools/cow/ghidra/lift_stringdiag.py --n 600 --seed 3
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

import gen_model          # noqa: E402
import trivial_audit      # noqa: E402

REFUSALS = os.path.join(ROOT, "build", "cow_lift", "refusals.json")
DUMP = os.environ.get("COW_LIFT_DUMP", "D:/projects/ghidra/ghidra_out/functions_all.jsonl")


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
             if str(v).startswith("string_op_not_modelled")]
    random.Random(a.seed).shuffle(addrs)
    addrs = addrs[:a.n]
    if not addrs:
        print("no string_op refusals")
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

    bodies = trivial_audit.body_index()
    by_ops = collections.Counter()
    by_rep = collections.Counter()
    extra = collections.Counter()
    examples = collections.defaultdict(list)
    checked = 0
    for key in sorted(addrs):
        body = bodies.get(key)
        e = entries.get(key)
        if not body or not e:
            by_ops["<no data>"] += 1
            continue
        m = gen_model.model_generated(body)
        if not m or not m.get("ok", True):
            by_ops["<model not ok>"] += 1
            continue
        ops = m.get("string_ops") or []
        if not ops:
            # the classifier says no string instruction; the refusal is from a stale snapshot OR a bug
            by_ops["<NO STRING OP - stale snapshot or mislabel>"] += 1
            if len(examples["stale"]) < a.show:
                examples["stale"].append((key, (m["ins"][-1].get("text") or "")[:40]))
            continue
        checked += 1
        by_ops[",".join(sorted(ops))] += 1
        has_rep = any(o.startswith("rep") for o in ops)
        by_rep["rep" if has_rep else "UNPREFIXED only"] += 1
        # does the unit touch ecx around the loop, so the post-loop counter value matters?
        ins = m["ins"]
        str_idx = [i for i, c in enumerate(ins) if gen_model.string_op_of(c)]
        after_ecx = any(re.match(r"^ecx\b", (ins[i].get("op") or ""))
                        for i in range(max(str_idx) + 1, len(ins)))
        reads_ecx = any((c.get("mnem") or "") != "mov" and "ecx" in (c.get("op") or "")
                        for c in ins)
        extra["post-loop ecx write: %s | ecx used elsewhere: %s" % (after_ecx, reads_ecx)] += 1
        if len(examples["rep" if has_rep else "bare"]) < a.show:
            texts = [ins[i].get("text") for i in str_idx]
            examples["rep" if has_rep else "bare"].append((key, texts[:3], len(str_idx)))

    print("sampled %d   with a real string op: %d" % (len(addrs), checked))
    print("\n== rep vs unprefixed (decides whether a loop model is needed at all) ==")
    for k, v in by_rep.most_common():
        print("  %6d  %s" % (v, k))
    print("\n== op sets ==")
    for k, v in by_ops.most_common(14):
        print("  %6d  %s" % (v, k))
    print("\n== ecx dependency (does the post-loop counter have to be right?) ==")
    for k, v in extra.most_common(6):
        print("  %6d  %s" % (v, k))
    print("\n== examples ==")
    for g, ex in examples.items():
        print(" [%s]" % g)
        for row in ex[:a.show]:
            print("  0x%s  %s" % (row[0], row[1:]))
    return 0


if __name__ == "__main__":
    sys.exit(main())
