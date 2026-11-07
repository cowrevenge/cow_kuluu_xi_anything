"""Is `bare_deref_width_unknown` (1,245 units) a parsing gap or missing information?

ghidra_c refuses a bare `*p` (no cast) when `p` is not in `ptr_names`, the table of declared pointer locals
and parameters. Two very different causes hide behind that one reason:

  PARSING GAP   Ghidra DID declare the pointer somewhere this file's patterns do not recognise - a
                `undefined4 *p` inside a for-init, a multi-name declaration `int *a, b;`, a typedef'd
                element type, a parameter declared across a newline. The width is present in the input and
                we are dropping it. This is the float-argument situation again (gen_model.param_types):
                information the decompiler handed us and the plumbing threw away. One fix clears many.

  ABSENT        `p` is a function return, a struct field read, or an `undefined` Ghidra never typed. No
                amount of parsing recovers a width that was never stated, and GUESSING one is how a word
                store becomes a byte store at the wrong address (the `*(undefined2 *)(param_1 + 1)` family).

So: for each unit refused this way, take the bare-dereferenced name and ask whether that name is declared
in the Ghidra text at all, and with what. `declared, not captured` = parsing gap. `never declared` = the
width genuinely is not there. Read-only, and it decides which way to spend the next change.

    python tools/cow/ghidra/lift_bare_deref_diag.py
    python tools/cow/ghidra/lift_bare_deref_diag.py --n 400 --seed 3
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
import ghidra_c           # noqa: E402
import trivial_audit      # noqa: E402

REFUSALS = os.path.join(ROOT, "build", "cow_lift", "refusals.json")
DUMP = os.environ.get("COW_LIFT_DUMP", "C:/ghidra_out/functions_all.jsonl")

# every pointer DECLARATION we can find, however awkward the spelling
POINTER_DECL = re.compile(r"\b([A-Za-z_][A-Za-z0-9_]*(?:\s+\*)+)\s*([A-Za-z_][A-Za-z0-9_]*)\s*(?:=|,|;|\))")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--n", type=int, default=250)
    ap.add_argument("--seed", type=int, default=5)
    ap.add_argument("--dump", default=DUMP)
    ap.add_argument("--show", type=int, default=6)
    a = ap.parse_args()

    with open(REFUSALS, encoding="utf-8") as fh:
        refusals = json.load(fh)
    addrs = [k.lower().replace("0x", "") for k, v in refusals.items()
             if str(v).startswith("bare_deref_width_unknown")]
    random.Random(a.seed).shuffle(addrs)
    addrs = addrs[:a.n]

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
    verdict = collections.Counter()
    shapes = collections.Counter()
    examples = collections.defaultdict(list)
    for key in sorted(addrs):
        body = bodies.get(key)
        e = entries.get(key)
        if not body or not e:
            verdict["<no data>"] += 1
            continue
        c = e.get("c") or ""
        # what the REWRITER saw: build the pointer table with the production collector, then look for a bare
        # *name it missed. Using the real function (not a copy of its regexes) is the whole point - a census
        # with its own parser can miss things the production parser catches, and vice versa, and then the
        # numbers describe the census instead of the lifter.
        rw = ghidra_c.Rewriter({})
        sig_part = c[:c.find("{")] if "{" in c else c
        rw.collect_pointer_decls(c)
        rw.collect_pointer_decls(sig_part)
        known = set(rw.ptr_names or {})
        bare = []
        for m in re.finditer(r"\*\s*([A-Za-z_][A-Za-z0-9_]*)\s*(?:=|\+|-|\)|,|;|\[)", c):
            nm = m.group(1)
            if nm in ("ptr", "void", "const", "unsigned", "signed"):
                continue
            if nm not in known:
                bare.append(nm)
        if not bare:
            verdict["no uncaptured bare deref found by this tool's own scan"] += 1
            continue
        # is the name DECLARED as a pointer anywhere in the text?
        declared = {}
        for m in POINTER_DECL.finditer(c):
            declared.setdefault(m.group(2), m.group(1).strip())
        hit = [n for n in bare if n in declared]
        if hit:
            verdict["PARSING GAP: declared, not captured"] += 1
            for n in hit[:1]:
                shapes["declared as `%s *%s`" % (declared[n].replace(" *", "*"), n)] += 1
                if len(examples["gap"]) < a.show:
                    ln = [l.strip() for l in c.splitlines() if re.search(r"\b" + re.escape(n) + r"\b", l)]
                    examples["gap"].append((key, n, declared[n], ln[:3]))
        else:
            verdict["ABSENT: never declared as a pointer"] += 1
            n0 = bare[0]
            shapes["undeclared `%s`" % n0] += 1
            if len(examples["absent"]) < a.show:
                ln = [l.strip() for l in c.splitlines() if re.search(r"\b" + re.escape(n0) + r"\b", l)]
                examples["absent"].append((key, n0, "?", ln[:3]))

    print("sampled %d units refused bare_deref_width_unknown" % len(addrs))
    for k, v in verdict.most_common(8):
        print("  %6d  %s" % (v, k))
    print("\n-- declarations seen (the parsing gap, if it is one) --")
    for k, v in shapes.most_common(12):
        print("  %5d  %s" % (v, k))
    print("\n-- examples --")
    for g, ex in examples.items():
        print(" [%s]" % g)
        for key, nm, ty, lines in ex:
            print("  0x%s  %s : %s" % (key, nm, ty))
            for l in lines:
                print("       %s" % l[:110])
    return 0


if __name__ == "__main__":
    sys.exit(main())
