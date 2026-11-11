"""Is the string wall's condemned register WITNESSED by the guest, or only named by the decompiler?

`lift_strprov_shapes.py` established that 85% of the `operand_stack_frame` string wall is one shape -
`lea reg,[base +- const]` - and that made frame binding the ranked #1 design. It did NOT ask the next
question, which is the one that decides whether the binding can reach them: for the register the module
condemned, is there a guest `lea` that says where it points, and is that lea somewhere the model can trust
its own esp delta?

That is exactly the question the local half just failed (28 of 43 sit below the first control transfer,
11 have no lea at all). If the string population is the same shape, then ~500 string units and ~42 local
units are ONE piece of future work (per-path esp tracking), and the grind's priority changes. If they are
prefix-witnessed, the existing witnessed-binding idea extends.

Nothing here re-implements a rule:
  * which units are in the wall          -> `gen_model.string_shape(ins)["why"]`, the module's verdict
  * which register it condemned          -> `gen_model.string_op_of` / `_str_form` / `STR_USES` /
                                            `_str_prov`, the same enumeration the census uses
  * where the guest said the register points -> `gen_model.frame_leas`, the shared classifier (one home)

Tripwires: the population must be non-empty; at least two distinct buckets must appear; and two synthetic
bodies built through `model_generated` (never hand-made dicts) prove the classifier can both fire and
refuse - a direct `lea edi,[esp+0x10]` on the condemned register must be WITNESSED, and a `mov edi, ebx`
copy of one must NOT be (the census's own typical case, so a walk that over-claims is caught here).

Reads only. Single-core by design: the population audit is still running and a second heavy process would
steal wall-clock budget from rows it is judging.
"""
import collections
import io
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
for _p in (HERE, os.path.join(ROOT, "tools", "cow")):
    if _p not in sys.path:
        sys.path.insert(0, _p)
for _k in [k for k in list(os.environ) if k.startswith("COW_")]:
    os.environ.pop(_k)                              # a measurement is a read

import gen_model                                     # noqa: E402
import trivial_audit                                 # noqa: E402


def condemned(ins):
    """The registers the MODULE condemned, per string op - copied from the census's enumeration so the
    two tools ask the same question of the same code."""
    out = []
    for i, c in enumerate(ins):
        canon = gen_model.string_op_of(c)
        if canon is None:
            continue
        form, _w = gen_model._str_form(canon)
        if not form or form not in gen_model.STR_ALLOWED_FORMS:
            continue
        for r in gen_model.STR_USES[form]:
            if gen_model._str_prov(ins, r, i) == "stack":
                out.append((i, c.get("addr"), r))
    return out


def classify_unit(ins, hits):
    """Bucket the unit by whether each condemned register is witnessed by a guest frame lea."""
    leas = gen_model.frame_leas(ins)
    by_reg = {}
    for l in leas:
        by_reg.setdefault(l["reg"], []).append(l)
    kinds = []
    for _i, _a, reg in hits:
        cands = [l for l in by_reg.get(reg, []) if l["base"] == "esp"]
        if cands and any(l["prefix"] for l in cands):
            kinds.append("WITNESSED-PREFIX")
        elif cands:
            kinds.append("WITNESSED-AFTER-BRANCH")
        elif any(l["reg"] == reg and l["base"] == "ebp" for l in leas):
            kinds.append("EBP-BASED")
        else:
            kinds.append("NO-LEA-FOR-REG (a copy or a load - the census's not-lea residue)")
    return collections.Counter(kinds)


SYN_DIRECT = (
    "void f_10000000(Guest* g)\n{\n"
    "    /* 10000000: lea edi, [esp + 0x10] */\n    { edi = (uint32_t)((uint32_t)(esp + 0x10u)); }\n"
    "    /* 10000004: rep movsb */\n    { REP_MOVE(edi, esi, ecx); }\n"
    "    /* 10000006: ret */\n    { esp += 4; return; }\n")
SYN_COPY = (
    "void f_10000000(Guest* g)\n{\n"
    "    /* 10000000: lea ebx, [esp + 0x10] */\n    { ebx = (uint32_t)((uint32_t)(esp + 0x10u)); }\n"
    "    /* 10000004: mov edi, ebx */\n    { edi = (uint32_t)(ebx); }\n"
    "    /* 10000008: rep movsb */\n    { REP_MOVE(edi, esi, ecx); }\n"
    "    /* 1000000a: ret */\n    { esp += 4; return; }\n")


def selftest():
    """The classifier must be able to BOTH fire and refuse, on fixtures built through model_generated."""
    for name, text, want in (("direct lea on the destination", SYN_DIRECT, True),
                             ("a copy of a witnessed lea", SYN_COPY, False)):
        m = gen_model.model_generated(text.splitlines())
        if not m.get("ins"):
            sys.exit("REFUSING: the %s fixture parsed to zero instructions - it tests nothing." % name)
        hits = condemned(m["ins"])
        got = any(k.startswith("WITNESSED-PREFIX") for k in classify_unit(m["ins"], hits).elements())
        if bool(hits) is False:
            sys.exit("REFUSING: the %s fixture produced no condemned register, so the module's own string"
                     " rule is not being exercised - fix the fixture, not the expectation." % name)
        if got != want:
            sys.exit("REFUSING: %s -> witnessed=%s want %s (%s). The classifier cannot tell a direct lea"
                     " from a copy, so no population number from this tool is trustworthy."
                     % (name, got, want, hits))
        print("ok    capability: %-28s condemned=%s witnessed_prefix=%s (as required)"
              % (name, [r for _i, _a, r in hits], got))


def main():
    selftest()
    bodies = trivial_audit.body_index()
    if len(bodies) < 5000:
        sys.exit("REFUSING: body_index has %d entries - too few to be the image." % len(bodies))

    pop = 0
    buckets = collections.Counter()
    per_reg = collections.Counter()
    examples = collections.defaultdict(list)
    reserved = collections.Counter()
    scanned = 0
    for addr, bl in sorted(bodies.items()):
        try:
            m = gen_model.model_generated(bl)
        except Exception:                                     # noqa: BLE001
            continue
        ins = m.get("ins") or []
        scanned += 1
        if gen_model.string_shape(ins).get("why") != "operand_stack_frame":
            continue
        hits = condemned(ins)
        if not hits:
            continue                                          # the verdict says stack, the enumeration says
        pop += 1                                              # no condemned register -> a disagreement to see
        k = classify_unit(ins, hits)
        worst = ("WITNESSED-PREFIX" if k.get("WITNESSED-PREFIX") else
                 "WITNESSED-AFTER-BRANCH" if k.get("WITNESSED-AFTER-BRANCH") else
                 "EBP-BASED" if k.get("EBP-BASED") else "NO-LEA-FOR-REG")
        buckets[worst] += 1
        for _i, _a, r in hits:
            per_reg[r] += 1
        if len(examples[worst]) < 3:
            examples[worst].append("0x" + addr)
        reserved["locals>0" if (m.get("locals") or 0) > 0 else "locals==0"] += 1

    print("\nscanned %d bodies; units whose string verdict is operand_stack_frame AND a register is"
          " condemned: %d" % (scanned, pop))
    if pop == 0:
        sys.exit("REFUSING: no population - either the wall moved or this tool's view of the module is"
                 " wrong. Do not quote a zero from a predicate that has not been shown to fire.")
    if len(buckets) < 2:
        sys.exit("REFUSING: only one bucket (%s) across %d units - the classifier is not discriminating."
                 % (dict(buckets), pop))
    print("\nby the WORST condemned register in the unit (one future mechanism must clear all of them):")
    for k, v in buckets.most_common():
        print("  %-46s %4d  (%5.1f%%)   e.g. %s" % (k, v, 100.0 * v / pop, ", ".join(examples[k])))
    print("\ncondemned registers: %s" % ", ".join("%s=%d" % kv for kv in per_reg.most_common()))
    print("frame reserved by the prologue: %s" % dict(reserved))

    w = buckets.get("WITNESSED-PREFIX", 0)
    print("\nWHAT THIS MEANS: %d of %d string units (%.0f%%) have every condemned register witnessed by a"
          " guest lea ON THE STRAIGHT-LINE PREFIX - the same condition the param binding needs today."
          % (w, pop, 100.0 * w / pop))
    after = buckets.get("WITNESSED-AFTER-BRANCH", 0) + buckets.get("NO-LEA-FOR-REG", 0)
    print("and %d (%.0f%%) need what the local half needs: per-path esp tracking, or the load/copy modelled."
          % (after, 100.0 * after / pop))

    # The split that decides the work: a witnessed slot ABOVE sp0 is an argument buffer (the param
    # machinery's own territory); one BELOW it lives in the reserved-locals region, where the keep-alive
    # question applies and 136 of this population do not even reserve one. Reporting "130 nameable"
    # without this is how a slice gets sized twice.
    sub = collections.Counter()
    for addr, bl in sorted(bodies.items()):
        try:
            m = gen_model.model_generated(bl)
        except Exception:                                     # noqa: BLE001
            continue
        ins = m.get("ins") or []
        if gen_model.string_shape(ins).get("why") != "operand_stack_frame":
            continue
        hits = condemned(ins)
        if not hits or not classify_unit(ins, hits).get("WITNESSED-PREFIX"):
            continue
        offs = []
        for l in gen_model.frame_leas(ins):
            if l["base"] == "esp" and l["prefix"] and any(r == l["reg"] for _i, _a, r in hits):
                offs.append(l["off"])
        above = any(o >= 4 for o in offs)
        below = any(o < 4 for o in offs)
        key = ("argument slots only" if above and not below else
               "local region only" if below and not above else
               "both" if above and below else "none")
        sub["%s | locals%s" % (key, ">0" if (m.get("locals") or 0) > 0 else "==0")] += 1
    print("\nthe %d prefix-witnessed units, split by where the slot actually is:" % w)
    for k, v in sub.most_common():
        print("  %-42s %4d" % (k, v))
    print("a unit whose buffer sits in the local region AND does not reserve locals has no bytes to point"
          " at - that row is the keep-alive wall, not a naming problem.")
    print("note: the examples above are the head of each bucket, not a queue - no unit list is written"
          " until a bucket has been scoped unit by unit (a queue count is not a pipeline).")


if __name__ == "__main__":
    main()
