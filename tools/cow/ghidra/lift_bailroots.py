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
import argparse
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


def straight_line_to(ins, addr):
    """Whether every instruction below `addr` is unconditional, so c["d"] is a fact and not a path guess.

    gen_model tracks esp linearly (c["d"]) and marks the whole body unreliable if ANY jump appears, because
    "the incoming esp is a path property". That global flag is the right thing for a whole-function claim and
    far too strict for one read: most functions branch somewhere, so gating a frame-offset emitter on it
    would reject almost every candidate. The honest local question is narrower - is the code on the way to
    THIS read straight-line? If nothing before it can divert control, the esp at this instruction is whatever
    the linear track says, and a frame read here can be named soundly.

    Same veto list as the global track (mov esp, pushad/popad/pushfd/popfd, ret, leave) plus any jump, and it
    is deliberately conservative: a read after a conditional branch is refused even if the branch is not
    taken in practice, because nothing here gets to assume that.
    """
    for c in ins:
        if c["addr"] >= addr:
            break
        mnem, t = c["mnem"], (c["text"] or "").lower()
        if mnem.startswith("j") or mnem in ("ret", "leave"):
            return False
        if re.search(r"\bmov\s+esp\b|pushad|popad|pushfd|popfd", t):
            return False
    return True


def is_frame_read(w):
    """(True, base, disp) if instruction w reads or forms an address from esp/ebp, else (False, None, None)."""
    op = (w["op"] or "")
    _, _, src = op.partition(",")
    src = src.strip()
    if "[" not in src:
        return False, None, None
    inside = src[src.index("[") + 1:src.rindex("]")] if "]" in src else ""
    parts = [p.strip() for p in inside.split("+")]
    regs = [p for p in parts if p in ("esp", "ebp")]
    if not regs:
        return False, None, None
    disp = 0
    for p in parts:
        if p in regs or p in gen_model.REG32 or p in gen_model.SUBREG_PARENT:
            continue
        try:
            disp += int(p, 0)
        except ValueError:
            return False, None, None      # an index register: this is a pointer chase, not a frame slot
    return True, regs[0], disp


def price_frame(ins, bails):
    """Would this unit be released if frame reads at straight-line points became nameable?

    Returns (releasable, why_not). A unit lifts only when EVERY bail in it disappears - one remaining
    unnameable register refuses the whole function - so a candidate figure that counted units with SOME
    nameable frame read would overstate the prize, which is the mistake the raw bail counts above already
    make. `why_not` names the first bail that would still refuse, so the output can be checked by eye.
    """
    left = []
    needs_load = set()
    for (word, call_addr) in bails:
        w = last_write(ins, word, call_addr)
        if w is None:
            left.append("%s never written" % word)
            continue
        fr, base, disp = is_frame_read(w)
        if not fr:
            left.append("%s by %s %s" % (word, w["mnem"], w["op"]))
            continue
        if not straight_line_to(ins, w["addr"]):
            left.append("%s frame read at 0x%x not straight-line" % (word, w["addr"]))
            continue
        if base == "ebp":
            left.append("%s is [ebp+0x%x], needs the frame-pointer form" % (word, disp & 0xffffffff))
            continue
        # `lea R,[esp+d]` only FORMS an address: the value is a constant offset from the entry esp, and a
        # frozen expression names it soundly. `mov R,[esp+d]` READS guest memory, and that is a different,
        # already-measured wall - gen_model's push walk deliberately passes no allow_load, because the
        # version that did released 12 sites and zero units and named loads with a live `g->reg` alias.
        # Pricing the two together would promise units the emitter cannot reach, so they are kept apart.
        if w["mnem"] != "lea":
            needs_load.add(word)
    return (not left and not needs_load), (left or (["%s needs a guest LOAD" % w for w in sorted(needs_load)]))


WIDTH_RE = re.compile(r"\b(dword|byte|word|fword|tbyte|oword|ymmword)\s+ptr\b", re.I)


def load_screen(ins, word, call_addr):
    """Could `word` be named if the push walk were allowed to name ONE guest load, soundly?

    gen_model passes no allow_load into the push walk, so every load is unnameable today and 2,074 units sit
    behind it. Whether that number is real has never been measured - the queue's note about
    `bare_deref_width_unknown` came from a 12-site experiment, and an inference about 12 sites is not a
    prediction about 2,074 units. So screen each one on the two things a sound rule would need:

      width-known   the instruction spells `dword ptr` / `byte ptr` itself, so the read width is stated by
                    the authority (the generated body) rather than guessed from Ghidra's untyped C
      base-nameable the base register is not itself a load or an unnamed value, because naming a load means
                    naming its base first, and the deferred-load work died exactly there

    Both are checked against the generated instruction, never against Ghidra's decompilation.
    """
    # Screen the CHAIN ROOT, not the instruction that last touched the register. The first version asked the
    # latter and so called `mov esi,ecx` "not-a-load" 6,778 times - but a bare copy is not the obstacle, the
    # thing at the bottom of the chain is, and testing the wrong instruction made the population look like a
    # load problem when most of it is not one.
    _root, _cur, w = chain_root(ins, word, call_addr)
    if w is None:
        return "never-written", None
    if w["mnem"] != "mov":
        return "not-a-load:%s" % w["mnem"], w
    op = (w["op"] or "")
    _, _, src = op.partition(",")
    src = src.strip()
    if "[" not in src:
        return "not-a-load:reg-or-imm", w
    if not WIDTH_RE.search(w["text"] or ""):
        return "width-not-stated", w
    inside = src[src.index("[") + 1:src.rindex("]")]
    parts = [p.strip() for p in inside.split("+")]
    if re.fullmatch(r"0x[0-9a-fA-F]{1,8}", inside.strip()):
        # a global: no base to name, no chase, and the authority states the width - `rd32(COW_IMG(macro))`.
        # The first version of this screen sent these to the bin as "base-not-a-plain-register", which is how
        # it reported 11 for a class that is the easiest thing here to name.
        return "nameable", w
    bases = [p for p in parts if p in gen_model.REG32 or p in gen_model.SUBREG_PARENT]
    if len(bases) != 1 or any(p in ("esp", "ebp") for p in bases):
        return "base-not-a-plain-register", w
    # the base must itself be nameable at THIS point, by the same rules the walk already applies
    root, _cur, _w = chain_root(ins, bases[0], w["addr"])
    if root == "<never written before call>":
        return "base-unnamed", w
    if root == "mov" or root == "lea":
        # another memory access underneath: this is the two-load chain the note describes, and the wall
        # behind it has not been priced for this population
        return "base-is-itself-a-load", w
    return "nameable", w


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--price-frame", action="store_true",
                    help="predict how many units a frame-offset emitter would release, using the same "
                         "straight-line gate the emitter will have to apply")
    a = ap.parse_args()

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
    per_units = []                            # (unit, ins, [(word, call_addr)]) for the pricing pass

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
        unit_bail_list = []
        unit_ins = m["ins"]
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
            unit_bail_list.append((word, call_addr))
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
            per_units.append((k, unit_ins, unit_bail_list))

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

    if not a.price_frame:
        return 0

    # The figure that decides whether to build the emitter. The "releases N units alone" numbers above are
    # chain-root statistics: they do not know that gen_model's esp track dies on any jump, which is the
    # condition a frame-offset emitter has to respect to be sound. So price with THAT gate applied, or the
    # prediction overstates the prize and a session gets spent on units that will still refuse.
    rel = []
    load_only = []
    blocked_by_gate = collections.Counter()
    for k, ins, blist in per_units:
        ok, left = price_frame(ins, blist)
        if ok:
            rel.append(k)
            continue
        # A unit whose ONLY remaining obstacle is a guest load is a separate promise: it needs the load
        # rule, which this repo has already priced once at zero. Say so rather than burying it in the total.
        if left and all("needs a guest LOAD" in x for x in left):
            load_only.append(k)
            continue
        for why in left[:1]:
            key = ("not straight-line" if "not straight-line" in why else
                   "ebp form" if "ebp" in why else
                   "pointer chase" if "frame read" not in why else "other")
            blocked_by_gate[key] += 1
    print("\n== PRICED with the emitter's own gate (lea-only: address FORMED, no guest read) ==")
    print("  units releasable by a lea-frame emitter    : %d   (of %d refused units)"
          % (len(rel), len(per_units)))
    print("  units needing a guest LOAD as well         : %d   (already priced at zero once - do not "
          "re-buy without new evidence)" % len(load_only))
    for why, n in blocked_by_gate.most_common(6):
        print("  still refused by %-18s %5d" % (why, n))
    print("  sample releasable: %s" % ", ".join("0x" + u for u in rel[:10]))
    with open(os.path.join(ROOT, "build", "cow_lift", "frame_releasable.txt"), "w",
              encoding="utf-8", newline="\n") as fh:
        fh.write("\n".join(rel) + ("\n" if rel else ""))
    print("  list written to build/cow_lift/frame_releasable.txt")
    if not rel:
        print("  REFUSING to call this promising: the gate released nothing, so the emitter would ship dead.")

    # The question the 2,074-unit figure actually raises. It is the largest number in this report and the
    # least examined: those units are refused because allow_load is off, and nothing has ever measured what
    # turning it on for THEM would yield. Screen it, so the next session prices the biggest wall with a
    # number instead of a recollection of a 12-site experiment.
    screen = collections.Counter()
    load_rel = []
    per_unit_screen = collections.Counter()
    for k, ins, blist in per_units:
        kinds = set()
        for (word, call_addr) in blist:
            kind, _w = load_screen(ins, word, call_addr)
            kinds.add(kind)
            screen[kind] += 1
            examples.setdefault(("load", kind), "0x%s: %s %s | bail %s"
                                % (k, (_w["mnem"] if _w else "-"), (_w["op"] if _w else "-"), word))
        # a unit lifts only if EVERY bail becomes nameable; any other kind keeps the unit refused
        if kinds == {"nameable"}:
            load_rel.append(k)
        per_unit_screen[tuple(sorted(kinds))] += 1
    print("\n== PRICED: what a SOUND load rule would release (width stated by the authority + base nameable) ==")
    print("  units where every bail passes the load screen : %d   (of %d)" % (len(load_rel), len(per_units)))
    print("  why the rest still refuse (per bail kind):")
    for kind, n in screen.most_common(8):
        print("    %-26s %5d   %s" % (kind, n, examples.get(("load", kind), "-")))
    for kind, n in per_unit_screen.most_common(6):
        print("    unit profile %-40s %5d" % (" + ".join(kind), n))
    if load_rel:
        with open(os.path.join(ROOT, "build", "cow_lift", "load_releasable.txt"), "w",
                  encoding="utf-8", newline="\n") as fh:
            fh.write("\n".join(load_rel) + "\n")
        print("  sample: %s" % ", ".join("0x" + u for u in load_rel[:10]))
        print("  list written to build/cow_lift/load_releasable.txt")
    else:
        print("  nothing: the sound load rule would release no unit on its own, which is the 12-site "
              "experiment's answer restated at population scale")
    return 0


if __name__ == "__main__":
    sys.exit(main())
