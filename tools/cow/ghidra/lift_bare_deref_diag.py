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
DUMP = os.environ.get("COW_LIFT_DUMP", "D:/projects/ghidra/ghidra_out/functions_all.jsonl")

# every pointer DECLARATION we can find, however awkward the spelling
POINTER_DECL = re.compile(r"\b([A-Za-z_][A-Za-z0-9_]*(?:\s+\*)+)\s*([A-Za-z_][A-Za-z0-9_]*)\s*(?:=|,|;|\))")


def canon_shape(s):
    """A deref's spelling with its contents stripped out: numbers become N, names become X. Histogramming
    this says which SPELLINGS the deref pass walks away from, which is the question - `expr` is None both for
    a pointer cast the pattern missed and for an operand that is genuinely untypeable, and those want
    opposite fixes. Canonicalising the lifter's own snippet keeps the answer in the lifter's view."""
    s = re.sub(r"0x[0-9a-fA-F]+", "N", s or "")
    s = re.sub(r"\d+", "N", s)
    s = re.sub(r"[A-Za-z_][A-Za-z0-9_]*", "X", s)
    s = re.sub(r"\s+", " ", s).strip()
    return s[:40]


def subclass_of(expr, declared, snippet=""):
    """What KIND of untyped operand the deref pass gave up on - see the note at `sub`."""
    if not expr:
        sh = canon_shape(snippet)
        if sh.startswith("( X * )"):
            return "cast the deref pattern did not match: " + sh
        if sh.startswith("( X **"):
            return "multi-star cast (pointer-to-pointer): " + sh
        return "operand not parsed: " + sh
    if re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", expr):
        tail = "" if declared is None else " [text says: %s]" % declared
        if expr.startswith("DAT_"):
            return "name: image global (DAT_)" + tail
        if expr.startswith("PTR_"):
            return "name: image pointer global (PTR_)" + tail
        if expr.startswith("FUN_"):
            return "name: function symbol (FUN_)" + tail
        if expr.startswith("param_"):
            return "name: parameter, never star-declared" + tail
        if expr.startswith("local_") or "Stack_" in expr:
            return "name: stack variable" + tail
        if re.fullmatch(r"[a-z]{1,3}Var\d+", expr):
            return "name: Ghidra pfxVar (name encodes the type)" + tail
        return "name: other identifier" + tail
    if "[" in expr:
        return "expr: subscript on an operand"
    if re.search(r"[+-]", expr) and re.search(r"\*\s*\d", expr):
        return "expr: base + index*N (element stride)"
    if re.search(r"[+-]", expr):
        return "expr: base + constant (displacement)"
    return "expr: other: " + canon_shape(snippet)


def lifter_view(addrs, dump, show):
    """Ask the LIFTER which name it could not type, instead of re-finding the deref here.

    The rest of this file answers the question by scanning the body for a bare `*name` whose name is not in
    a pointer table - a second implementation of the same question, which disagreed with the deref pass on
    136 of 200 units and recommended a scanner fix that released nothing. `Rewriter.bare_derefs` is the
    bail-out's own record: the expression it gave up on, and what the text said about it.
    """
    import ghidra_c
    want = {k.lower().replace("0x", "") for k in addrs}
    got = {}
    with open(dump, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            if not line.strip():
                continue
            try:
                e = json.loads(line)
            except ValueError:
                continue
            ad = str(e.get("addr", "")).lower().replace("0x", "")
            if ad in want:
                got[ad] = e
    classes = collections.Counter()
    types = collections.Counter()
    # The `never written with a * anywhere` bucket is not one job - it is at least three. A bare identifier
    # the text never typed, an identifier that is an IMAGE GLOBAL (whose width lives in the image, not in the
    # function text), and an EXPRESSION like `piStack_20 + 8` (where the question is not the width of the
    # operand but the element STRIDE of the pointer it is built from) each need a different fix. Splitting
    # the bucket is what stops a single "516 sites" number from pricing a fix that covers one third of it.
    sub = collections.Counter()
    per_unit = collections.Counter()
    # A site histogram cannot price a fix: the refusal is per UNIT and fires on its worst site, so a change
    # that translates one bare deref releases nothing in a unit with three of them from different classes.
    # This is the counter that answers "how many units would this actually free" - it takes each unit's FULL
    # set of bail-out classes, and a fix only counts the units whose set is a subset of what it covers.
    unit_sets = collections.Counter()
    unit_subsets = collections.Counter()
    ex = collections.defaultdict(list)
    for key in sorted(want):
        e = got.get(key)
        if not e or not e.get("c"):
            classes["<no c>"] += 1
            continue
        sig = ""
        m = re.search(r"\b[A-Za-z_][A-Za-z0-9_ ]*\bFUN_%s\s*\([^)]*\)" % key, e["c"])
        if m:
            sig = m.group(0)
        rw = ghidra_c.Rewriter({})
        rw.rewrite(e["c"], sig)
        rec = rw.bare_derefs
        if not rec:
            # the lifter did not bail out on ANY bare deref, yet the snapshot says it refused this way: the
            # snapshot is older than the lifter, or the reason came from somewhere else entirely
            classes["<lifter did not bail - stale snapshot?>"] += 1
            continue
        per_unit[len(rec)] += 1
        # what the text DID say about each name it wrote a declaration for, pointer or not - the difference
        # between "Ghidra typed this and our collector missed it" and "Ghidra never typed it".
        decl_types = {}
        for ln in e["c"].splitlines():
            dm = re.match(r"\s*([A-Za-z_][A-Za-z0-9_ ]*?)\s*\*?\s*"
                          r"([A-Za-z_][A-Za-z0-9_]*)\s*(?:=|;)\s*$", ln)
            if dm:
                decl_types.setdefault(dm.group(2), re.sub(r"\s+", " ", dm.group(1)).strip())
        this_unit = set()
        this_subs = set()
        for d in rec:
            if not d["expr"]:
                classes["operand is not a name"] += 1
                this_unit.add("noname")
                s = subclass_of(d["expr"], None, d.get("snippet", ""))
            elif not d["star_declared"]:
                classes["never written with a * anywhere"] += 1
                this_unit.add("undeclared")
                s = subclass_of(d["expr"], decl_types.get(d["expr"]), d.get("snippet", ""))
            else:
                classes["DECLARED with a * - the parsing gap"] += 1
                this_unit.add("star-typed")
                types[d["declared_type"] or "?"] += 1
                s = subclass_of(d["expr"], d["declared_type"], d.get("snippet", ""))
            sub[s] += 1
            this_subs.add(s)
            if len(ex[s]) < show:
                ex[s].append((key, d["expr"], (d.get("lead", "") or "")[-28:] + "«" + d.get("snippet", "")))
        unit_sets["+".join(sorted(this_unit))] += 1
        unit_subsets["+".join(sorted(this_subs))] += 1
    print("asked the lifter about %d units refused bare_deref_width_unknown" % len(want))
    print("\n-- what the bail-out itself said --")
    for k, v in classes.most_common(8):
        print("  %6d  %s" % (v, k))
    print("\n-- bare derefs per unit (a unit refused over its WORST site: a fix must clear them all) --")
    for k, v in sorted(per_unit.items())[:8]:
        print("  %6d units have %d" % (v, k))
    # THE decision table. `noname` = the operand is an expression, not a bare name; `star-typed` = declared
    # with a `*` whose element type has no TYPE_MAP entry (`void *`, `BYTE *`); `undeclared` = the text never
    # wrote a `*` in front of it. A proposed fix buys only the units whose SET is a subset of what it covers:
    # counting sites instead would have me believe a 298-site fix is worth 298 units, when the units that
    # also carry an `undeclared` site stay refused exactly as before.
    print("\n-- per UNIT, which classes it carries (a fix buys only the subsets it covers) --")
    for k, v in unit_sets.most_common(8):
        print("  %6d  %s" % (v, k))
    print("\n-- the bail-out sites by KIND of operand --")
    for k, v in sub.most_common(16):
        print("  %6d  %s" % (v, k))
    # THE table that prices a fix: a unit whose every bail-out is ONE kind is released outright by a fix for
    # that kind; a unit that mixes kinds needs every one of them. Counting sites would price a kind by how
    # often it appears, which is not the same number and was the error in the first version of this tool.
    # THE table a fix must be priced on, printed IN FULL. An earlier version cut this at 14 rows, and the row
    # that got cut is exactly the one that decides whether a fix is worth writing - a "frees 0 units" claim
    # made from a truncated list is the same mistake as a site histogram, only quieter.
    print("\n-- units whose bail-outs are ALL one kind (a fix for that kind frees these outright) --")
    singles = {k: v for k, v in unit_subsets.items() if "+" not in k}
    for k, v in sorted(singles.items(), key=lambda kv: -kv[1]):
        print("  %6d  %s" % (v, k))
    print("  (mixed-kind units, needing two or more fixes: %d)"
          % sum(v for k, v in unit_subsets.items() if "+" in k))
    # And the same question asked the other way: for a CANDIDATE FIX (a set of kinds it covers), how many
    # units does it actually free? A fix for `base + constant` covers that one kind, so it frees the units
    # whose whole set is {that kind} - which is the number above, but stated per proposal it is the number
    # that stops a 250-site class being sold as a 250-unit win.
    print("\n-- what a fix for each kind would free (units covered by that kind ALONE) --")
    cover = collections.Counter()
    for s, v in unit_subsets.items():
        kinds = s.split("+")
        for k in set(kinds):
            if len(kinds) == 1:
                cover[k] += v
    for k, v in cover.most_common(12):
        tot = sum(c for s, c in unit_subsets.items() if k in s.split("+"))
        print("  %6d units freed  (of %5d units carrying it)   %s" % (v, tot, k))
    print("\n-- the declared type words of the names the lifter could not type --")
    for k, v in types.most_common(14):
        print("  %6d  %s" % (v, k))
    print("\n-- examples by kind (the lifter's own text from the star onward) --")
    for g, _cnt in sub.most_common(10):
        print(" [%s]" % g)
        for key, e2, snip in ex[g][:show]:
            print("  0x%s  %s" % (key, re.sub(r"\s+", " ", snip)[:88]))
    return 0


def cast_view(dump, n, seed, show):
    """Which `*(T *)EXPR` casts have a T that _width_of does not know?

    This matters more than the bare-deref family it was found in. At the bail-out, a cast whose type word is
    unrecognised does NOT refuse: `w` stays None and the caller falls through to `w = (4, False)`, "Ghidra's
    default object size is a dword". So `*(BYTE *)p` is silently emitted as a 4-byte guest read - a memory
    trace that is wrong by three bytes, in a unit that compiles, passes cowdiff only if nothing observes
    those bytes, and books as converted. If Ghidra really writes capitalised type words, the default is a
    bug, not a fallback, and the list below is the bug.
    """
    unknown = collections.Counter()
    known = collections.Counter()
    ex = collections.defaultdict(list)
    seen = 0
    with open(dump, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            if not line.strip():
                continue
            try:
                e = json.loads(line)
            except ValueError:
                continue
            c = e.get("c") or ""
            if not c:
                continue
            seen += 1
            ad = str(e.get("addr", "")).lower().replace("0x", "")
            for m in re.finditer(r"\*\s*\(\s*([A-Za-z_][A-Za-z0-9_ ]*?)\s*\*\s*\)", c):
                typ = re.sub(r"\s+", " ", m.group(1)).strip()
                if ghidra_c._width_of(typ):
                    known[typ] += 1
                else:
                    unknown[typ] += 1
                    if len(ex[typ]) < show:
                        ex[typ].append((ad, c[max(0, m.start() - 30):m.end() + 22]))
            if n and seen >= n:
                break
    print("scanned %d units of the dump for typed dereference casts" % seen)
    print("\n-- cast types the width table DOES know --")
    for k, v in known.most_common(14):
        print("  %8d  %s" % (v, k))
    print("\n-- cast types it does NOT know -> silently read as a DWORD --")
    for k, v in unknown.most_common(20):
        print("  %8d  %s" % (v, k))
    print("\n-- examples of the unknown ones --")
    for k, _v in unknown.most_common(8):
        print(" [%s]" % k)
        for ad, snip in ex[k][:show]:
            print("  0x%s  %s" % (ad, re.sub(r"\s+", " ", snip)[:96]))
    return 0


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--lifter", action="store_true",
                    help="ask the lifter's own bail-out record instead of re-scanning the body")
    ap.add_argument("--casts", action="store_true",
                    help="histogram `*(T *)` cast types against _width_of: which T silently becomes a dword")
    ap.add_argument("--n", type=int, default=250)
    ap.add_argument("--seed", type=int, default=5)
    ap.add_argument("--dump", default=DUMP)
    ap.add_argument("--show", type=int, default=6)
    a = ap.parse_args()

    if a.casts:
        # the whole dump, not a sample: this counts things that were EMITTED, so a sample would price a
        # silent wrong-width read by how often the sample happened to contain one.
        return cast_view(a.dump, 0, a.seed, a.show)

    with open(REFUSALS, encoding="utf-8") as fh:
        refusals = json.load(fh)
    addrs = [k.lower().replace("0x", "") for k, v in refusals.items()
             if str(v).startswith("bare_deref_width_unknown")]
    random.Random(a.seed).shuffle(addrs)
    addrs = addrs[:a.n]

    if a.lifter:
        return lifter_view(addrs, a.dump, a.show)

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
