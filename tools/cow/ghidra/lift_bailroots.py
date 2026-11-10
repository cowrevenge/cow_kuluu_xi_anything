"""lift_bailroots.py - attribute each unnameable push bail to the mnemonic that actually caused it.

    python tools/cow/ghidra/lift_bailroots.py            # the census over argcount_mismatch

Asked for by the argcount_mismatch queue entry ("census the mnemonics _value_expr returns None for and extend
its coverage"), which had been written but never run. Run 2026-11-10, it is what located the frame-offset
binding as the biggest lever in the largest refusal family.

The first version of this counted, for every instruction in the population, whether _value_expr could name
it - and printed "pop: 13,533 of 13,533". That number is real but it answers the wrong question: it counts
pops that exist, not pops that CAUSED a refusal. The unit is refused by a bail, a bail names one register at
one call site, and only the write that produced THAT register's value at THAT moment is on the hook.

So this walks the bails themselves (gen_model.model_generated's call_sites, push_values_why = unnameable:<w>)
and for each one reports the mnemonic of the last write to <w> below the call address. That is the number
the queue asked for - "census the mnemonics _value_expr returns None for" - measured on the population that
is actually being refused.

Sanity pins, checked before anything is printed:
  0x100013c0 must have at least one unnameable bail (it is the census's own tripwire unit), and
  the bail population must not be empty - an empty scope prints a confident nothing, which is the failure
  this loop has now met six times.
"""
import collections
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))          # tools/cow/ghidra
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)                                    # gen_model, trivial_audit live here
sys.path.insert(0, os.path.join(ROOT, "tools", "cow", "loopy"))

import gen_model            # noqa: E402
import trivial_audit        # noqa: E402

REFUSALS = os.path.join(ROOT, "build", "cow_lift", "refusals.json")
PINNED = "100013c0"


def by_addr(ins):
    return {c["addr"]: c for c in ins}


def last_write(ins, reg, call_addr):
    """The instruction below call_addr that most recently wrote `reg`, or None if nothing did."""
    best = None
    for c in ins:
        if c["addr"] >= call_addr:
            break
        if gen_model._writes_reg(c["mnem"], c["op"] or "") and gen_model._dst_reg(c["op"] or "") == reg:
            best = c
    return best


DETAIL_FOR = ("mov", "lea")


def operand_class(w):
    """What kind of value the stopping instruction reads, which decides how hard naming it is.

    `mov R, [0x10455c20]` is a global: the address is a literal in the instruction, so the value is
    `rd32(CONST + RD)` and needs no pointer chase at all. `mov R, [edi]` is a dereference, and naming it means
    naming edi first - which is the wall that already killed the deferred-read work in another family. Those
    two look identical to a counter that only says "mov", and they are not the same job, so they are counted
    apart and each gets its own release figure.
    """
    op = (w["op"] or "")
    _, _, src = op.partition(",")
    src = src.strip()
    if "[" not in src:
        return "no-memory-operand"
    inside = src[src.index("[") + 1:src.rindex("]")] if "]" in src else ""
    if re.fullmatch(r"0x[0-9a-fA-F]{1,8}", inside.strip()):
        return "global [imm]"
    parts = [p.strip() for p in inside.split("+")]
    regs = [p for p in parts if p in gen_model.REG32 or p in gen_model.SUBREG_PARENT]
    if len(regs) == 1:
        # esp/ebp is not a pointer the program computed - it is the frame the adapter already reserves, so
        # naming it is the per-frame-offset job (operand_stack_frame), a different mechanism with a different
        # cost from following a real pointer. They must not share a number.
        if regs[0] in ("esp", "ebp"):
            return "frame [%s+disp]" % regs[0]
        return "deref [reg(+disp)] base=%s" % regs[0]
    if len(regs) == 2:
        return "deref [reg+reg]"
    return "deref [complex]"


def chain_root(ins, reg, call_addr, depth=12):
    """Walk THROUGH the simple `mov R, S` steps and name the instruction where naming really stops.

    Attributing a bail to `mov` is nearly meaningless: `mov esi, ecx` is supported, and it bails only because
    ecx could not be named either. The decision that matters is what the chain bottoms out in, so follow the
    register-to-register moves backwards and stop at the first step that is not a bare copy. A cycle is
    reported as such rather than trusted - the walk has an address budget, and a chain that revisits an
    instruction is a bug in this probe, not a finding.
    """
    cur, hi, seen = reg, call_addr, set()
    w = None
    for _ in range(depth):
        w = last_write(ins, cur, hi)
        if w is None:
            return "<never written before call>", cur, None
        if w["addr"] in seen:
            return "<cycle>", cur, w
        seen.add(w["addr"])
        mnem = w["mnem"]
        dst, _, rest = (w["op"] or "").partition(",")
        rest = rest.strip()
        if mnem == "mov" and rest in gen_model.REG32:
            cur, hi = rest, w["addr"]                 # a bare copy: keep walking
            continue
        return mnem, cur, w
    return "<too deep>", cur, w


def main():
    with open(REFUSALS, encoding="utf-8") as fh:
        d = json.load(fh)
    r = d.get("reasons", d)
    addrs = sorted({str(k).replace("0x", "") for k, v in r.items()
                    if str(v).startswith("argcount_mismatch")})
    print("argcount_mismatch units in snapshot:", len(addrs))
    if not addrs:
        print("REFUSING to report: empty scope.")
        return 2

    bodies = trivial_audit.body_index()
    by_mnem = collections.Counter()          # bails attributed to a mnemonic
    never_written = 0
    total_bails = 0
    units = 0
    examples = {}
    unit_profile = collections.Counter()      # set of root causes in a unit -> how many units look like that
    by_detail = collections.Counter()
    unit_detail = {}                          # unit -> the (mnemonic, class) pairs it carries

    for k in addrs:
        body = bodies.get(k)
        if not body:
            continue
        m = gen_model.model_generated(body)
        if not m:
            continue
        sites = m.get("call_sites") or []
        unit_bails = 0
        unit_roots = set()
        for s in sites:
            why = str(s.get("push_values_why") or "")
            if not why.startswith("unnameable:"):
                continue
            word = why.split(":", 1)[1].strip()
            if not re.fullmatch(r"\w+", word) or word not in gen_model.REG32:
                continue
            call_addr = s["addr"]
            total_bails += 1
            unit_bails += 1
            mnem, cur, w = chain_root(m["ins"], word, call_addr)
            by_mnem[mnem] += 1
            unit_roots.add(mnem)
            if mnem in DETAIL_FOR:
                d = operand_class(w)
                by_detail[(mnem, d)] += 1
                unit_detail.setdefault(k, set()).add((mnem, d))
                examples.setdefault((mnem, d), "0x%s: %s %s | bail %s at call 0x%x"
                                    % (k, mnem, w["op"], cur, call_addr))
            if mnem == "<never written before call>":
                never_written += 1
            if w is not None:
                examples.setdefault(mnem, "0x%s: %s %s | bail %s at call 0x%x"
                                    % (k, mnem, w["op"], cur, call_addr))
        if unit_bails:
            units += 1
            # A fix releases a UNIT only when nothing else in that unit refuses. Counting bails would let a
            # 2,589-bail fix look large while releasing nothing, because most units carry several bails.
            unit_profile[tuple(sorted(unit_roots))] += 1

    print("units with >=1 unnameable bail:", units)
    print("bails total:", total_bails, " of which the register was never written below the call:",
          never_written)
    if total_bails == 0:
        print("REFUSING to rank: zero bails attributed - the detector matched nothing.")
        return 2

    # the tripwire: the pinned census unit must still be in the bail population
    pm = gen_model.model_generated(bodies.get(PINNED) or "")
    p_bails = [s for s in ((pm or {}).get("call_sites") or [])
               if str(s.get("push_values_why") or "").startswith("unnameable:")]
    if not p_bails:
        print("TRIPWIRE FAILED: 0x%s no longer has an unnameable bail. Every count above is suspect."
              % PINNED)
        return 1
    print("tripwire ok: 0x%s still carries %d unnameable bail(s)" % (PINNED, len(p_bails)))

    print("\n== unnameable bails by CHAIN ROOT (movs followed through to where naming stops) ==")
    for mnem, n in by_mnem.most_common(16):
        pct = 100.0 * n / total_bails
        print("  %-26s %6d  %5.1f%%   %s" % (mnem, n, pct, examples.get(mnem, "-")))

    # The number that decides whether a fix is worth a session. `_value_expr` gains a rule, but a unit only
    # lifts if EVERY bail in it disappears - so report, per cause, how many units have that cause alone.
    print("\n== units a single-cause fix could release (all bails in the unit share one root) ==")
    solo = collections.Counter()
    for profile, n in unit_profile.items():
        if len(profile) == 1:
            solo[profile[0]] += n
    for mnem, n in solo.most_common(10):
        print("  %-26s %5d units   (of %d with that root at all)"
              % (mnem, n, sum(v for p, v in unit_profile.items() if mnem in p)))
    print("\n== the mov/lea roots split by what they read (a global is not a pointer chase) ==")
    for (mnem, cls), n in sorted(by_detail.items(), key=lambda kv: -kv[1]):
        # release figure: units whose ONLY blocking root is this class. Without this a 5,751-bail "mov"
        # group can hide the fact that 5,000 of them are dereferences nobody can name.
        rel = sum(1 for u, s in unit_detail.items() if s == {(mnem, cls)})
        print("  %-5s %-20s %6d bails  releases %4d units alone   %s"
              % (mnem, cls, n, rel, examples.get((mnem, cls), "-")))

    print("\n== most common multi-cause profiles ==")
    for profile, n in unit_profile.most_common(6):
        if len(profile) > 1:
            print("  %5d units  %s" % (n, " + ".join(profile)))
    return 0


if __name__ == "__main__":
    sys.exit(main())
