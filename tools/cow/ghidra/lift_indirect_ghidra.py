"""Can G HIDRA name the indirect target that the guest-instruction walk cannot?

The refusal census (lift_indirect_diag.py, 300 units) says the family is one wall:

    mem-base-unnameable:<reg> = written-by-unnameable-instruction:mov

i.e. `call dword ptr [edx+0x20]` where `edx` was loaded earlier (`mov edx,[eax+4]`), and the linear walk
refuses to name a LOAD outside the effect-free tail window. That is the walk being correct about memory:
it has no way to say "the value that load put in edx".

But Ghidra DOES say it, in C, in the very statement that makes the call. Its plumbing is untrustworthy
which is why the plumbing here comes from the generated body - but the call TARGET is not plumbing, it is
semantics, and semantics is Ghidra's half of the deal. Three shapes its callee expression can take, with
three different costs:

    (*param_3)(...)                     a callback passed in. The lifted body HAS it, as its own parameter.
                                        Cheap, and the walk misses it only because the guest produced it
                                        with a load the walk will never name.
    (*puVar5)(...)                      a local. Usable only under the frame-aliasing model (the body must
                                        assign it and not dead-store it), the same model the string family
                                        needs. Pricing which locals look sound is what tells us whether that
                                        model is one job or two.
    (**(code **)(*param_1 + 0x24))()    the vtable call, load folded into the callee. ghidra_c's call
                                        regex does not recognise this form at all - the whole `(* ident )(`
                                        alternative needs a bare identifier - so today these calls are not
                                        even seen as calls: they survive verbatim into the emitted C as a
                                        raw host read. Naming them means extending the regex AND running the
                                        nested text through the deref passes.

So the tool records, per indirect SITE of the generated body (not per unit - a unit is refused by its
worst site, and one recognised `(*x)(...)` does not release a unit that also has a folded `code **`):

  * the callee text Ghidra wrote for it, as far as the current regex can see it,
  * whether that text is RECOGNISED at all today,
  * its leaf shape (param / local / folded-deref / other),
  * whether it is EFFECT-FREE: no call, no assignment inside. A callee expression containing a call is a
    side effect the bridge would be performing at the wrong time, and a callee expression an intervening
    statement rewrites is the stale-load hoist Ghidra is entitled to do and we are not.

Read-only; reports only. No lifter file is imported for mutation, only for the model.

    python tools/cow/ghidra/lift_indirect_ghidra.py
    python tools/cow/ghidra/lift_indirect_ghidra.py --n 400 --show 8
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

# what ghidra_c._calls currently accepts as "this is an indirect call"
CALLED_IDENT = re.compile(r"\(\s*\*\s*(?:(?:PTR_FUN_|UNK_|DAT_)?([0-9a-fA-F]{8})|"
                          r"([A-Za-z_][A-Za-z0-9_]*))\s*\)\s*\(")
def _open_of(s, close_i):
    """Index of the '(' matching s[close_i] == ')', or None."""
    depth = 0
    for j in range(close_i, -1, -1):
        if s[j] == ")":
            depth += 1
        elif s[j] == "(":
            depth -= 1
            if depth == 0:
                return j
    return None


def ghidra_callees(body):
    """Every call through a computed pointer in Ghidra's C, in order, as (recognised?, callee_text).

    Structural, not a guessed pattern: a call is a `)` immediately followed by `(` whose group, read
    backward with a paren balance, holds a callee that DEREFERENCES something. The look-alikes that are not
    calls - `if (*(char *)(p + 5) == 0)`, a load in a condition - have no `)(` boundary or a callee that
    does not start with `*`. An earlier version matched `\\(\\s*\\*` alone and called every deref in an `if`
    an indirect call, which priced this family wrong in both directions at once.
    """
    out = []
    i = 0
    while True:
        i = body.find(")(", i)
        if i < 0:
            break
        j = _open_of(body, i)
        if j is not None:
            inner = body[j + 1:i].strip()
            if inner.startswith("*"):
                rec = bool(CALLED_IDENT.match(body, j))   # does ghidra_c see THIS one today?
                out.append((rec, re.sub(r"\s+", " ", inner)))
        i += 1
    return out


def leaf_shape(txt):
    """What the callee expression's leaves are made of - which decides what it would cost to use it."""
    t = txt.strip()
    if re.fullmatch(r"param_\d+", t):
        return "param (the body already has it)"
    if re.fullmatch(r"\*?(DAT_|UNK_|PTR_)[0-9a-fA-F]+", t):
        return "image global (the walk names that already, as an abs read)"
    if re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", t):
        if t.startswith(("uVar", "iVar", "pV", "pU", "pI", "pu", "pi", "pc", "local", "au", "ap", "aU")):
            return "local (needs the frame-aliasing model)"
        return "other identifier"
    if "code" in t or "**" in t:
        return "folded deref (regex cannot see it today)"
    return "other expression"


def emit_probe(addrs, dump, entries=None):
    """What does the rewriter actually LEAVE in the C for a folded call?

    The claim under test is that `(**(code **)(*piVar2 + 0x3c))()` is invisible to ghidra_c's call pass,
    and therefore nothing bridges it as a call: the call pass does not see it, and the deref pass that runs
    afterwards has no idea the text is a call. That matters for HOW the family gets fixed - if someone
    extended the call regex alone, or relaxed the `indirect_call_not_modelled` clause alone, this is the
    text that would reach the compiler. Run it and see, rather than arguing about it.
    """
    import ghidra_c
    src = entries.split(",") if entries else addrs
    want = {k.lower().replace("0x", "") for k in src}
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
    for key in sorted(want):
        e = got.get(key)
        if not e or not e.get("c"):
            continue
        rw = ghidra_c.Rewriter({})
        out = rw.rewrite(e["c"], sig="")
        hits = [ln.strip() for ln in out.splitlines()
                if re.search(r"code\s*\*|\(\s*\*", ln)]
        if not hits:
            continue
        # THE question this probe exists to answer. The rewriter's own problem list is not the last word:
        # lift.py also runs leftover_problems() over the finished text, and a call through a computed
        # pointer is exactly the kind of thing that pass was written to catch. If it does catch it, the
        # folded call is merely unfixed. If it does not, then the ONLY thing keeping a host call through a
        # guest function pointer out of the tree is the indirect_call_not_modelled clause - and relaxing
        # that clause on its own, which is the obvious thing to do with a 1,268-unit family, would ship it.
        leftover = ghidra_c.leftover_problems(out)
        print("-- 0x%s" % key)
        print("     rewriter problems : %s" % sorted(set(rw.problems))[:6])
        print("     leftover_problems : %s" % (sorted(set(leftover)) or "NOTHING - nothing else refuses it"))
        print("     host-call lines   : %d" % len(hits))
        for h in hits[:4]:
            print("     %s" % h[:150])
        return 0
    print("  (no folded call found among the probes)")
    return 0


# the words inside a callee expression that are NOT part of our language: casts, sizeof, literals
_CASTS = re.compile(r"\b(?:code|undefined\d*|int|uint|char|uchar|short|ushort|long|ulong|float|double|"
                    r"bool|void|size_t|dword|word|byte|_DWORD|_WORD|_BYTE)\b")
_IDENT = re.compile(r"[A-Za-z_][A-Za-z0-9_]*")


def callee_leaves(txt):
    """Classify a folded callee expression by the VARIABLES it reads.

    This is the measurement that decides the release, and nothing else in this tool does it. A folded callee
    like `**(code **)(*param_1 + 0x24)` is a double image read whose only variable is a PARAMETER - and a
    parameter is something the lifted function already has, so the whole expression is expressible TODAY
    with no new model: `rd32((uint32_t)(rd32((uint32_t)param_1) + 0x24u))`. The same shape reading a LOCAL
    (`*piVar2`) is a different job: it needs the frame-aliasing model the string family is waiting on. Counting
    folded callees as one lump would have merged the two, which is this project's most reliable way of
    over-pricing a pattern.
    """
    # numbers first, and BEFORE the casts: `0x44` is a displacement, but `[A-Za-z_]\w*` matches the `x44`
    # inside it, which turned about a third of the param-only vtable calls into a fake "other" class
    t = re.sub(r"0x[0-9a-fA-F]+|\b\d+\b", " ", txt)
    t = _CASTS.sub(" ", t)
    names = {m.group(0) for m in _IDENT.finditer(t)}
    if not names:
        return "no variable (constant address)"
    if all(re.fullmatch(r"param_\d+", n) for n in names):
        return "params only (expressible today)"
    if all(re.fullmatch(r"(DAT_|UNK_|PTR_)[0-9a-fA-F]+", n) for n in names):
        return "image globals only (the walk names those)"
    if any(n.startswith("local") for n in names):
        return "stack local (needs the frame model)"
    if any(n.startswith(("uVar", "iVar", "pV", "pU", "pI", "pu", "pi", "pc", "au", "ap", "aU"))
           for n in names):
        return "Ghidra local (needs the frame model)"
    if any(n.startswith("in_stack") for n in names):
        return "stack variable (needs the frame model)"
    return "other: " + ",".join(sorted(names))[:40]


def shipped_scan():
    """Would the new guard refuse anything the tree already ships?

    `leftover_problems` grew a clause for a call through a computed pointer, and that clause runs on every
    lift. Refusing NEW units is the point; refusing units the README already counts as proven would be a
    regression, and if one of those also passes cowdiff it is worse than a regression - it is a false pass
    that has just been unmasked. So the clause is checked against the shipped population before it is
    committed, over exactly the region the rewriter owns (the COW_LIFTED block), not the file's own header
    comments, which quote guest text and legitimately contain strings like `(*arg1)++`.
    """
    import ghidra_c
    root = os.path.join(ROOT, "src", "lifted")
    files = [f for f in os.listdir(root) if f.startswith("cow_") and f.endswith(".c")]
    hits = []
    for f in files:
        txt = open(os.path.join(root, f), encoding="utf-8", errors="replace").read()
        m = re.search(r"COW_LIFTED BEGIN(.*?)COW_LIFTED END", txt, re.S)
        if not m:
            continue                                   # a hand unit wearing the cow_ name: not the rewriter's
        if ghidra_c.computed_pointer_calls(m.group(1)):
            hits.append(f)
    print("shipped lifted files scanned: %d" % len(files))
    print("now refused by the computed-pointer-call guard: %d" % len(hits))
    for f in hits[:10]:
        print("   ", f)
    return 0


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--shipped", action="store_true",
                    help="check the new guard against the population the tree already ships")
    ap.add_argument("--emit", action="store_true",
                    help="print what the rewriter leaves for the folded call form instead of the census")
    ap.add_argument("--entries", help="comma-separated addresses for --emit (default: the sample)")
    ap.add_argument("--n", type=int, default=250)
    ap.add_argument("--seed", type=int, default=11)
    ap.add_argument("--dump", default=DUMP)
    ap.add_argument("--show", type=int, default=6)
    a = ap.parse_args()

    if a.shipped:
        return shipped_scan()

    with open(REFUSALS, encoding="utf-8") as fh:
        refusals = json.load(fh)
    addrs = [k.lower().replace("0x", "") for k, v in refusals.items()
             if str(v).startswith("indirect_call_not_modelled")]
    random.Random(a.seed).shuffle(addrs)
    addrs = addrs[:a.n]
    if not addrs:
        print("no indirect_call refusals")
        return 2
    if a.emit:
        return emit_probe(addrs, a.dump, a.entries)

    # Ghidra's C, keyed by address
    ctext = {}
    want = set(addrs)
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
                ctext[ad] = e.get("c") or ""

    bodies = trivial_audit.body_index()
    per_site = collections.Counter()
    unit_release = collections.Counter()      # would the UNIT be releasable on Ghidra's naming alone?
    effectful = collections.Counter()
    examples = collections.defaultdict(list)
    for key in sorted(addrs):
        body = ctext.get(key)
        gbody = bodies.get(key)
        if not body or not gbody:
            per_site["<no c / no body>"] += 1
            continue
        m = gen_model.model_generated(gbody)
        if not m or not m.get("ok", True):
            per_site["<model not ok>"] += 1
            continue
        sites = [s for s in (m.get("call_sites") or []) if s["target"] is None]
        if not sites:
            per_site["<no site>"] += 1
            continue
        callees = ghidra_callees(body)
        # the generated body has N indirect calls; Ghidra must show the same number, or the pairing between
        # a site and a callee text is a guess and the whole idea dies here rather than in the gate
        if len(callees) != len(sites):
            per_site["MISMATCH %% sites=%d ghidra=%d" % (len(sites), len(callees))] += 1
            unit_release["count mismatch (pairing unsafe)"] += 1
            if len(examples["count mismatch"]) < a.show:
                examples["count mismatch"].append(
                    (key, "sites=%d ghidra=%d  %s" % (len(sites), len(callees),
                                                      [t[:28] for _, t in callees])))
            continue
        unit_release["paired"] += 1
        blockers = set()
        for s, (rec, txt) in zip(sites, callees):
            # whether ghidra_c SEES the call is the work to write; what the callee READS is the cost of the
            # release. They are separate axes and the first one is not a blocker: a folded callee over
            # parameters needs only a wider regex, while the same syntax over a local needs the frame model.
            sh = callee_leaves(txt)
            per_site[("seen  " if rec else "blind ") + sh] += 1
            if sh.endswith("(needs the frame model)"):
                blockers.add("callee reads a local (frame model)")
            elif sh.startswith("other:"):
                blockers.add("unclassified callee leaves")
            # is the callee text effect-free? a call or an assignment inside it is the bridge performing an
            # effect at a time the guest did not
            if re.search(r"[A-Za-z_]\w*\s*\(", re.sub(r"\bcode\b", " ", txt)) or "=" in txt:
                effectful["callee text not effect-free"] += 1
                blockers.add("callee not effect-free")
            if len(examples[sh]) < a.show:
                examples[sh].append((key, txt[:56]))
        unit_release[("RELEASABLE: regex widening only" if not blockers
                      else "; ".join(sorted(blockers)))] += 1

    print("sampled %d units of the indirect_call_not_modelled family" % len(addrs))
    print("\n-- per SITE: does Ghidra see the call, and what is the pointer? --")
    for k, v in per_site.most_common(16):
        print("  %6d  %s" % (v, k))
    print("\n-- per UNIT: what still blocks it if Ghidra's callee text became the target? --")
    for k, v in unit_release.most_common(12):
        print("  %6d  %s" % (v, k))
    print("\n-- effect-freedom --")
    for k, v in effectful.most_common():
        print("  %6d  %s" % (v, k))
    print("\n-- examples --")
    for g, ex in examples.items():
        print(" [%s]" % g)
        for key, t in ex[:a.show]:
            print("  0x%s  %s" % (key, t))
    return 0


if __name__ == "__main__":
    sys.exit(main())
