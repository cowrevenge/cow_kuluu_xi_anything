"""Is the frame-slot wall ONE mechanism or forty? Classify the `operand_stack_frame` population by the
instruction that actually produced the register.

Three populations now wait on the same design (cow/wip/refusal-ranking-and-escape-split.md): the **431**
units refused `string_op_not_modelled_operand_stack_frame`, the **70** whose push naming needs a local
slot, and `f_10316337`, whose conversion unblocks **116** `hang` rows. Before anyone designs "bind a frame
slot to a guest stack address", the question is whether that design has a bounded shape at all.

The refusal comes from one coarse line in `gen_model._str_prov`:

    if mnem == "lea":
        return "stack" if ("esp" in src or "ebp" in src) else "derived"

`lea edi, [ebp - 0x20]` and `lea edi, [esp + eax*4]` get the SAME verdict, but they are not the same
object. The first is `frame_base + constant` - nameable the moment the adapter knows where it reserved the
locals, which it already does (`g->esp -= 0x10u` for locals). The second depends on an index register the
body may rewrite, and no amount of frame binding names it. If the constant form dominates, the design is
bounded and worth doing once for three populations; if it is scattered, the design is forty designs.

This tool does not re-implement the provenance rule - it calls `gen_model.string_shape` and
`gen_model._str_prov` to find WHICH register the module itself condemned, then answers a separate question
("what wrote that register before the rep") using the module's own `_writes_reg` / `_dst_reg`. A forked
provenance implementation is how censuses in this loop have gone wrong before.

Tripwires, three: the population must be non-empty (an empty one makes every percentage below meaningless);
the classifier must produce at least TWO distinct shapes (one shape means it is not classifying); and a
hand-built `lea edi,[ebp-0x20]` fixture must land in CONSTANT-FRAME while `lea edi,[esp+eax]` must NOT -
built through `parse_instructions`, never as hand-made dicts, because `_writes_memory` reads a field
hand-made dicts do not have.
"""
import collections
import io
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
os.environ.pop("COW_MODEL_NPUSH_FRAME_AWARE", None)   # a measurement never inherits a knob
import gen_model  # noqa: E402
import trivial_audit  # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))

INDEX_RE = re.compile(r"\b(eax|ecx|edx|ebx|esi|edi)\b")
CONST_LEA = re.compile(r"^(?:dwordptr)?\[(ebp|esp)([-+](0x[0-9a-f]+|\d+))?\]$")


def shape_of_producer(c):
    """What kind of value did this instruction put into the condemned register?"""
    if c is None:
        return "never-written (no producer found)"
    mn, op = c["mnem"], (c["op"] or "")
    if mn != "lea":
        return "not-lea:%s" % mn
    # lea <dst>, <src>: src is everything after the first comma
    src = op.partition(",")[2].strip()
    m = CONST_LEA.match(src.replace(" ", ""))
    if m:
        return "CONSTANT-FRAME lea [%s%s]" % (m.group(1), m.group(2) or "")
    if "[" in src:
        inner = src[src.find("[") + 1:src.rfind("]")] if "]" in src else src
        base = "ebp" if "ebp" in inner else ("esp" if "esp" in inner else "?")
        if INDEX_RE.search(inner.replace(base, "")):
            return "INDEXED lea [%s+reg] - no frame binding names this" % base
        return "other-lea[%s] %s" % (base, src[:18])
    return "lea-nonmemory %s" % src[:18]


def last_writer(ins, reg, before_idx):
    """The instruction that most recently wrote `reg` at or before index before_idx, or None."""
    got = None
    for j in range(0, before_idx + 1):
        c = ins[j]
        if gen_model._writes_reg(c["mnem"], c["op"]) and gen_model._dst_reg(c["op"]) == reg:
            got = c
    return got


def root_shape(ins, reg, before_idx, depth=0, trail=None):
    """Follow the WRITES of `reg` back to the instruction that actually made the value.

    The first version of this census looked only at the LAST writer, so `mov edi, esi` after
    `lea esi,[ebp-0x20]` was counted as "not nameable" - 270 mov and 84 dec hits sitting in a bucket
    they may not belong to. The module's own provenance rule follows chains recursively; a census that
    does not is measuring a different thing than the refusal is. This follows the chain with the
    module's predicates (_writes_reg/_dst_reg) and classifies the ROOT, which is the only honest way to
    say how much of the wall one mechanism covers.

    Arithmetic on the frame-derived register itself (`dec edi`, `add edi, 4`) is carried as a DELTA and
    stays nameable: base + const +/- k is still base + const. A chain through an unrelated value, an
    indexed lea, or a load ends the walk as what it is.
    """
    trail = trail or []
    if depth > 6:
        return "chain-too-deep", trail
    c = last_writer(ins, reg, before_idx)
    if c is None:
        return "never-written (no producer found)", trail
    src = (c["op"] or "").partition(",")[2].strip()
    s = shape_of_producer(c)
    if s.startswith("CONSTANT-FRAME") or s.startswith("INDEXED"):
        return s, trail + [c["text"]]
    mn = c["mnem"]
    dst = gen_model._dst_reg(c["op"]) or ""
    if mn in ("dec", "inc", "add", "sub") and dst == reg:
        # arithmetic on the frame register itself: still base + const, keep the delta in the trail
        nxt = root_shape(ins, reg, ins.index(c) - 1, depth + 1, trail + [c["text"]])
        return nxt[0] + " (arith)" if nxt[0].startswith("CONSTANT-FRAME") else nxt[0], nxt[1]
    if mn == "mov" and src in gen_model.REG32:
        return root_shape(ins, src, ins.index(c) - 1, depth + 1, trail + [c["text"]])
    if mn == "mov" and src == reg:
        return "self-move", trail + [c["text"]]
    return s, trail + [c["text"]]


def selftest():
    def ins_from(lines):
        return gen_model.parse_instructions(lines)

    const = ins_from(["/* 01000010: lea edi, [ebp - 0x20] */", "  { edi = ebp - 0x20u; }",
                      "/* 01000014: rep stosd */", "  { for (; ecx; --ecx, edi += 4) wr32(edi, eax); }"])
    idx = ins_from(["/* 01000010: lea edi, [esp + eax] */", "  { edi = esp + eax; }",
                    "/* 01000014: rep stosd */", "  { for (; ecx; --ecx, edi += 4) wr32(edi, eax); }"])
    if len(const) != 2 or len(idx) != 2:
        sys.exit("SELFTEST FAILED: fixture parsed to %d/%d instructions (want 2/2)"
                 % (len(const), len(idx)))
    a = shape_of_producer(const[0])
    b = shape_of_producer(idx[0])
    if not a.startswith("CONSTANT-FRAME"):
        sys.exit("SELFTEST FAILED: `lea edi,[ebp-0x20]` classified as %r - the classifier cannot see the "
                 "case the whole design rests on" % a)
    if b.startswith("CONSTANT-FRAME"):
        sys.exit("SELFTEST FAILED: `lea edi,[esp+eax]` classified as %r - indexed operands would be "
                 "counted as nameable, inflating the payoff" % b)

    # the chain cases: what the last-writer-only version got WRONG
    chain = ins_from(["/* 01000010: lea esi, [ebp - 0x20] */", "  { esi = ebp - 0x20u; }",
                      "/* 01000014: mov edi, esi */", "  { edi = esi; }",
                      "/* 01000016: rep movsd */", "  { for (; ecx; --ecx) { wr32(edi, rd32(esi)); } }"])
    rc, trail = root_shape(chain, "edi", len(chain) - 2)
    if not rc.startswith("CONSTANT-FRAME"):
        sys.exit("SELFTEST FAILED: a constant-frame value copied through `mov edi, esi` classified as %r "
                 "(trail %r) - the walk does not follow chains, so it under-reports the wall's coverage"
                 % (rc, trail))
    chainidx = ins_from(["/* 01000010: lea esi, [esp + eax] */", "  { esi = esp + eax; }",
                         "/* 01000014: mov edi, esi */", "  { edi = esi; }",
                         "/* 01000016: rep movsd */", "  { for (; ecx; --ecx) { wr32(edi, rd32(esi)); } }"])
    ri, _ti = root_shape(chainidx, "edi", len(chainidx) - 2)
    if ri.startswith("CONSTANT-FRAME"):
        sys.exit("SELFTEST FAILED: an INDEXED value reached through a copy was called CONSTANT-FRAME "
                 "(%r) - following chains without excluding indexed roots turns the census into a sales "
                 "pitch" % ri)
    print("selftest: CONSTANT-FRAME fires on lea [ebp-0x20]; INDEXED refuses lea [esp+eax]; chains inherit "
          "the root's verdict in BOTH directions")


def main():
    selftest()
    bodies = trivial_audit.body_index()
    if not bodies:
        sys.exit("REFUSING: body_index() empty")

    use_root = "--chains" in sys.argv
    shape_trail = {}
    tally = collections.Counter()
    units_hit = 0
    per_reg = collections.Counter()
    examples = collections.defaultdict(list)
    scanned = 0
    for addr, bl in sorted(bodies.items()):
        try:
            m = gen_model.model_generated(bl)
        except Exception:
            continue
        ins = m.get("ins") or []
        scanned += 1
        sh = gen_model.string_shape(ins)
        if sh.get("why") != "operand_stack_frame":
            continue
        units_hit += 1
        # ask the MODULE which register it condemned, then answer a separate question about that register
        found = False
        for i, c in enumerate(ins):
            canon = gen_model.string_op_of(c)
            if canon is None:
                continue
            form, _w = gen_model._str_form(canon)
            if not form or form not in gen_model.STR_ALLOWED_FORMS:
                continue
            for r in gen_model.STR_USES[form]:
                if gen_model._str_prov(ins, r, i) != "stack":
                    continue
                found = True
                per_reg[r] += 1
                if use_root:
                    s, tr = root_shape(ins, r, i - 1)
                    shape_trail[s] = " -> ".join(t.strip()[:26] for t in tr[-3:])
                else:
                    s = shape_of_producer(last_writer(ins, r, i - 1))
                    shape_trail[s] = (last_writer(ins, r, i - 1) or {}).get("text", "<none>")
                tally[s] += 1
                if len(examples[s]) < 4:
                    examples[s].append((addr, r, shape_trail[s]))
        if not found:
            tally["(module said stack, walk found no condemned register)"] += 1

    if units_hit == 0:
        sys.exit("REFUSING: not one unit in %d classifies as operand_stack_frame - the population is "
                 "empty, so every percentage below would be an artefact" % scanned)
    if len([k for k in tally if not k.startswith("(")]) < 2:
        sys.exit("REFUSING: the shape classifier produced ONE verdict (%r) across %d hits - it is not "
                 "classifying" % (list(tally)[:1], units_hit))

    total = sum(tally.values())
    print("=" * 100)
    print("the `operand_stack_frame` wall, by what actually produced the register   [mode: %s]"
          % ("ROOT OF CHAIN" if use_root else "last writer only"))
    print("=" * 100)
    print("  scanned %d units, %d refused on operand_stack_frame, %d condemned registers inspected"
          % (scanned, units_hit, total))
    print()
    for k, n in tally.most_common(14):
        print("    %-46s %5d (%5.1f%%)" % (k, n, 100.0 * n / total))
        for a, r, t in examples.get(k, [])[:3]:
            print("         f_%s  %s <- %s" % (a, r, t[:52]))
    print()
    print("  condemned registers: %s" % dict(per_reg.most_common()))
    nameable = sum(n for k, n in tally.items() if k.startswith("CONSTANT-FRAME"))
    print()
    print("  BOUNDEDNESS: %d of %d condemned operands (%.0f%%) are `lea reg,[base +- CONSTANT]` - nameable"
          % (nameable, total, 100.0 * nameable / total))
    print("  the moment the adapter knows where it reserved the locals. Everything else (indexed, not-lea,")
    print("  load chains) is a different mechanism, and a design that claims the whole 431 on the strength")
    print("  of this slice would be the dead-filter mistake wearing a bigger hat.")
    if nameable < 0.4 * total:
        print("\n  Under 40%%: the wall is NOT one mechanism. Do not build a frame-binding feature for it;")
        print("  pick the CONSTANT-FRAME units as their own population and price those alone.")


if __name__ == "__main__":
    main()
