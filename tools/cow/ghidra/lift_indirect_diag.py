"""What is actually inside `indirect_call_not_modelled` (1,268)?

The refusal fires when a unit has a call through a pointer and the generated body cannot name the target
for ANY such site. "Cannot name" hides several different situations, and they are different jobs:

  target_desc = ("reg", "ebx")          the register's value at this point is unnameable - the SAME
                                        nameability wall as argcount_mismatch (a value Ghidra kept in a
                                        local), or a register the walk invalidated at a call/merge
  target_desc = ("mem", base, disp)     a vtable-style call; blocked by the BASE not being nameable,
                                        which is the same wall one level down
  target_desc = ("abs", addr)           a global holding the pointer - this one should ALWAYS work (it is
                                        a constant!), so if these are refusing, the bug is in our code
  target_desc = ("scaled"/"unknown")    an expression the categoriser never claimed to handle

`("abs", ...)` returning None would be the interesting finding: `_target_expr` handles it unconditionally,
so an abs-target unit refusing means the refusal is coming from a DIFFERENT site in the same unit, or the
categoriser mislabelled. The census therefore records, per unit, the target_desc of every indirect site -
not just the first - because the function-level clause refuses the whole unit over its worst site, and a
unit with one easy site and one hard site is not an "indirect call" problem, it is a granularity problem.

Read-only; runs the lifter's own code path.

    python tools/cow/ghidra/lift_indirect_diag.py
    python tools/cow/ghidra/lift_indirect_diag.py --n 500 --seed 3
"""
import argparse
import collections
import json
import os
import random
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
    ap.add_argument("--show", type=int, default=6)
    a = ap.parse_args()

    with open(REFUSALS, encoding="utf-8") as fh:
        refusals = json.load(fh)
    addrs = [k.lower().replace("0x", "") for k, v in refusals.items()
             if str(v).startswith("indirect_call_not_modelled")]
    random.Random(a.seed).shuffle(addrs)
    addrs = addrs[:a.n]
    if not addrs:
        print("no indirect_call refusals")
        return 2

    bodies = trivial_audit.body_index()
    kinds = collections.Counter()          # per-site shape
    causes = collections.Counter()         # per-site WHY the walk could not name it
    window = collections.Counter()         # per-site: would a DEFERRED READ have been admissible
    unit_shape = collections.Counter()     # per-unit: the set of shapes present
    named_but_refused = []
    abs_present = []
    examples = collections.defaultdict(list)
    n = 0
    for key in sorted(addrs):
        body = bodies.get(key)
        if not body:
            kinds["<no generated body>"] += 1
            continue
        m = gen_model.model_generated(body)
        if not m or not m.get("ok", True):
            kinds["<model not ok>"] += 1
            continue
        sites = [s for s in (m.get("call_sites") or []) if s["target"] is None]
        if not sites:
            kinds["<NO INDIRECT SITE - stale snapshot or clause bug>"] += 1
            continue
        n += 1
        shapes = set()
        for s in sites:
            d = s.get("target_desc") or ()
            kind = d[0] if d else "none"
            te = s.get("target_expr")
            tag = s.get("target_why") or ("named" if te else "NO-TAG")
            if s.get("target_why_deep"):
                tag += "  ||  " + s["target_why_deep"]
            shapes.add(kind + ("" if te else " (unnamed)"))
            kinds[kind + (" named" if te else " UNNAMED")] += 1
            causes[tag] += 1
            if not te and d and d[0] == "mem":
                # what the lifter's own window rule would have said about deferring the load that
                # wrote this base - the price of a deferred-read model, counted by the code that would
                # have to apply it, not by a probe that re-implements it and drifts.
                _ins = gen_model.parse_instructions(body)
                _rec = gen_model._load_nameable(_ins, m.get("call_sites") or [])
                _at = next((x for x, c in enumerate(_ins) if c["addr"] == s["addr"]), None)
                _k = gen_model._last_write(_ins, _at, d[1]) if _at is not None else None
                window["admissible" if (_k is not None and _rec.get(_k) is None)
                       else str(_rec.get(_k) or "base-not-a-load")] += 1
            if kind == "abs" and not te:
                abs_present.append((key, d, s.get("op")))
            if len(examples[kind]) < a.show:
                examples[kind].append((key, str(d)[:44], (s.get("op") or "")[:34], bool(te)))
        unit_shape[tuple(sorted(shapes))] += 1
        # a unit where SOME site is named but the clause still fired: the function-level granularity issue
        if any(s.get("target_expr") for s in sites):
            named_but_refused.append(key)

    print("sampled %d   with indirect sites: %d" % (len(addrs), n))
    print("\n-- per-site shape (a unit contributes all of its sites) --")
    for k, v in kinds.most_common(14):
        print("  %6d  %s" % (v, k))
    print("\n-- per-unit combination of shapes --")
    for k, v in unit_shape.most_common(10):
        print("  %6d  %s" % (v, ",".join(k)))
    print("\n-- WHY the walk could not name it (the tag that prices this family) --")
    for k, v in causes.most_common(24):
        print("  %6d  %s" % (v, k))
    print("\n-- if the load that wrote this base were DEFERRED into the call, what would the window"
          " rule say? (measured for the whole family: the admissible ones release 0 units, because\n"
          "    they are then refused by bare_deref_width_unknown - that is the wall to work on)")
    for k, v in window.most_common(12):
        print("  %6d  %s" % (v, k))
    print("\n-- the granularity question --")
    print("  units where at least one indirect site IS nameable, yet the whole unit was refused: %d"
          % len(named_but_refused))
    print("  (the clause is function-level: `not any(...)`; if this is large, per-site refusal turns a")
    print("   whole-family refusal into a partial one, exactly like the indirect-call clause intended)")
    print("\n-- abs targets that came back unnamed (should be impossible) --")
    print("  %d" % len(abs_present))
    for row in abs_present[:5]:
        print("     0x%s  %s  op=%s" % row)
    print("\n-- examples per shape --")
    for g, ex in examples.items():
        print(" [%s]" % g)
        for key, d, op, te in ex[:a.show]:
            print("  0x%s  desc=%-44s op=%-30s named=%s" % (key, d, op, te))
    return 0


if __name__ == "__main__":
    sys.exit(main())
