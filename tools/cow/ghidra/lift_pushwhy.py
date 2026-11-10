"""Why does the push walk actually refuse? Count the reasons the walk itself records.

lift_bailroots.py attributes a bail to the instruction at the bottom of its chain, which found the frame/load
split but not this: `_push_values` bails for four named reasons before it ever looks at a value
(no-pushed-record, pushed-vs-npush, pending-vs-pushed, unnameable:<w>), and the walk also labels the state of
each register (`merge-jump-target`, `written-by-unnameable-instruction:mnem`, `expression-too-long`,
`never-written`, `named`). Those labels are produced by the production walk on the real population, so they
are a better estimate of what a fix must attack than any re-derivation this script could do.

Printed per BAIL and per UNIT, because only the per-unit view can release a unit.
"""
import argparse
import collections
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)
sys.path.insert(0, os.path.join(ROOT, "tools", "cow", "loopy"))

import gen_model            # noqa: E402
import trivial_audit        # noqa: E402

REFUSALS = os.path.join(ROOT, "build", "cow_lift", "refusals.json")


def src_shape(ins, word, call_addr):
    """Why the walk could not name a `mov`: what its SOURCE actually was.

    `written-by-unnameable-instruction:mov` is the largest single cause in this family, and it is not yet a
    plan - it says the walk gave up on a mov, four quite different things of which the fix differs for each:
    a copy from a register that is itself unnamed (the chain problem, no new rule needed), a read from memory
    (needs the load rule, which is the measured-zero wall), a sub-register write like `mov bl,al` (the other
    half of the pair is untouched but unnamed - a different model), or something the parser did not expect.
    Read off the GENERATED instruction, never Ghidra's decompilation.
    """
    w = None
    for c in ins:
        if c["addr"] >= call_addr:
            break
        if gen_model._writes_reg(c["mnem"], c["op"] or "") and gen_model._dst_reg(c["op"] or "") == word:
            w = c
    if w is None:
        return "no-writer-found"
    if w["mnem"] != "mov":
        return "not-mov:%s" % w["mnem"]
    _dst, _, src = (w["op"] or "").partition(",")
    src = src.strip()
    if not src:
        return "no-source"
    if "[" in src:
        if re.search(r"\[\s*0x[0-9a-fA-F]{1,8}\s*\]", src):
            return "mem:global [imm]"
        inside = src[src.index("[") + 1:src.rindex("]")] if "]" in src else ""
        parts = [p.strip() for p in inside.split("+")]
        regs = [p for p in parts if p in gen_model.REG32 or p in gen_model.SUBREG_PARENT]
        if any(p in ("esp", "ebp") for p in regs):
            return "mem:frame [esp/ebp+disp]"
        if len(regs) == 1:
            return "mem:deref [%s+..]" % regs[0]
        if len(regs) == 0:
            return "mem:no-base"
        return "mem:two regs"
    if src in gen_model.REG32:
        return "reg:copy from %s" % src
    if src in gen_model.SUBREG_PARENT:
        return "subreg:%s" % src
    if re.fullmatch(r"0x[0-9a-fA-F]+|\d+", src):
        return "immediate"
    return "other:%s" % src[:18]


def _push_addr(ins, word, call_addr):
    """The push that carried `word` to this call, or the call itself if no push names it.

    Conservative by construction: if the push cannot be located the window collapses to the call and the
    between-window is empty, which reports `ok` too readily - so an unlocated push is reported as such by
    the caller instead of silently priced as safe.
    """
    best = None
    for c in ins:
        if c["addr"] >= call_addr:
            break
        if c["mnem"] == "push" and (c["op"] or "").strip() == word:
            best = c["addr"]
    return best if best is not None else call_addr


GLOBAL_RE = re.compile(r"\[\s*(0x[0-9a-fA-F]{1,8})\s*\]")
WIDTH_RE = re.compile(r"\b(dword|byte|word|fword|tbyte|oword|ymmword)\s+ptr\b", re.I)


def global_load_ok(ins, word, call_addr, push_addr):
    """`ok` if `word` holds a value read from a literal global that nothing disturbs before it is consumed."""
    w = None
    for c in ins:
        if c["addr"] >= call_addr:
            break
        if gen_model._writes_reg(c["mnem"], c["op"] or "") and gen_model._dst_reg(c["op"] or "") == word:
            w = c
    if push_addr == call_addr:
        # no push of this register was found below the call, so the "nothing wrote the global in between"
        # window would be empty and the check would pass by looking at nothing
        return "push-not-located"
    if w is None or w["mnem"] != "mov":
        return "not-a-mov"
    _d, _, src = (w["op"] or "").partition(",")
    m = GLOBAL_RE.search(src or "")
    if not m or "[" not in (src or ""):
        return "not-a-direct-global"
    if not WIDTH_RE.search(w["text"] or ""):
        return "width-not-stated"
    addr = int(m.group(1), 16)
    # Anything writing that global between the push and the call makes a late-evaluated `rd32(...)` wrong:
    # the expression would see the NEW value while the guest pushed the OLD one. Same class of bug that
    # killed the general load rule through `g->reg`, arriving here through memory instead.
    for c in ins:
        if not (push_addr <= c["addr"] < call_addr):
            continue
        t = (c["text"] or "").lower()
        if not re.search(r"\bwr(8|16|32|64|f32|f64)\(", c["stmt"] or "") and "ptr [" not in t:
            continue
        mm = GLOBAL_RE.search(t)
        if mm and int(mm.group(1), 16) == addr and _is_store(c):
            return "global-written-in-between"
    return "ok"


def _is_store(c):
    """True if this instruction writes the guest memory at the address it spells."""
    stmt = c["stmt"] or ""
    t = (c["text"] or "").lower()
    if re.match(r"^\s*mov\s+(dword|byte|word|fword|tbyte|oword|ymmword)\s+ptr\s*\[", t):
        return True
    return bool(re.search(r"\bwr(8|16|32|64|f32|f64)\s*\(", stmt))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--price-globals", action="store_true",
                    help="price a load rule narrowed to direct globals (no base, no chase, width stated, "
                         "nothing writing the global between push and call)")
    a = ap.parse_args()

    with open(REFUSALS, encoding="utf-8") as fh:
        d = json.load(fh)
    r = d.get("reasons", d)
    addrs = sorted({str(k).replace("0x", "") for k, v in r.items()
                    if str(v).startswith("argcount_mismatch")})
    if not addrs:
        print("REFUSING to report: no argcount_mismatch units in the snapshot.")
        return 2
    bodies = trivial_audit.body_index()

    why_site = collections.Counter()      # the bail reason, per call site
    causes = collections.Counter()        # the register-state cause, per unnameable word
    unit_causes = collections.defaultdict(set)
    shapes = collections.Counter()
    examples = {}
    unit_shapes = collections.defaultdict(set)
    unit_bails = collections.defaultdict(list)   # unit -> (word, call_addr, push_addr) for the pricing pass
    units = 0

    for k in addrs:
        body = bodies.get(k)
        if not body:
            continue
        m = gen_model.model_generated(body)
        if not m:
            continue
        seen_unit = False
        for s in (m.get("call_sites") or []):
            why = str(s.get("push_values_why") or "")
            if not why:
                continue
            seen_unit = True
            key = why.split(":", 1)[0]
            why_site[key] += 1
            if not why.startswith("unnameable:"):
                continue
            word = why.split(":", 1)[1].strip()
            # the cause the WALK recorded for that register at that moment - not a re-derivation.
            # gen_model stores a STRING here (the label for the one word that bailed); the first version of
            # this reader called .get() on it, so isinstance said no, c stayed None, and every one of the
            # 13,186 rows came back "<not recorded>" while the data was sitting right there.
            c = s.get("push_values_cause")
            if isinstance(c, dict):                          # tolerate a per-register mapping if it grows
                c = c.get(word)
            c = c or "<not recorded on the site>"
            unit_bails.setdefault(k, (m["ins"], []))[1].append(
                (word, s["addr"], _push_addr(m["ins"], word, s["addr"])))
            if str(c).startswith("written-by-unnameable-instruction:mov"):
                sh = src_shape(m["ins"], word, s["addr"])
                shapes[sh] += 1
                examples.setdefault(sh, "0x%s  %s  (bail %s at 0x%x)" % (k, c, word, s["addr"]))
                unit_shapes[k].add(sh)
            if c:
                unit_causes[k].add(c)
        if seen_unit:
            units += 1

    print("units with at least one recorded push-values bail:", units)
    print("\n== bail reason, per call site ==")
    for k, n in why_site.most_common(10):
        print("  %-24s %6d" % (k, n))
    print("\n== cause recorded by the walk, per unnameable word ==")
    for k, n in causes.most_common(12):
        print("  %-46s %6d" % (k, n))
    solo = collections.Counter()
    for u, cs in unit_causes.items():
        if len(cs) == 1:
            solo[next(iter(cs))] += 1
    print("\n== units whose ONLY cause is one thing (the releasable figure) ==")
    for k, n in solo.most_common(10):
        print("  %-46s %6d" % (k, n))

    # `mov` is the top cause and the least actionable label in the report. Splitting it by what the source
    # WAS turns "383 units refused by a mov" into "these N need the load rule, these M need nothing but a
    # chain that already works, these K need a sub-register model" - which is the difference between a
    # priced job and a guess. Release is again per UNIT, and per unit with NO other obstacle.
    print("\n== the `written-by-unnameable-instruction:mov` cause, split by what the mov read ==")
    for sh, n in shapes.most_common(12):
        only = sum(1 for u, ss in unit_shapes.items() if ss == {sh})
        print("  %-28s %6d bails   %5d units alone   %s" % (sh, n, only, examples.get(sh, "-")))

    if not a.price_globals:
        return 0

    # The one load class that is not the measured-zero wall. A direct global `mov R,[0xADDR]` needs no base
    # named (there is no base), no pointer chase, and the authority states its width - so it is `rd32(COW_IMG(
    # macro))`, a CONSTANT expression. The reason the deferred-read work died was an address holding `g->reg`:
    # a live read of a register that moves afterwards. A literal global address has no such dependency, so the
    # objection that killed the general rule does not reach this one.
    #
    # What still has to be proven per unit, and is checked here rather than assumed:
    #   every bail in the unit is this class, or a unit with one chase anywhere still refuses;
    #   the width is spelled by the generated instruction (an unstated width is the bare_deref_width wall);
    #   NOTHING writes that global between the push and the call - the emitted expression evaluates when the
    #     adapter runs it, so a global the function itself modifies in between must be refused, or the
    #     "frozen value" error returns through the memory door instead of the register one.
    print("\n== PRICED: a load rule restricted to DIRECT GLOBALS with stated width and no intervening write ==")
    rel, blocked = [], collections.Counter()
    for k, (ins, blist) in unit_bails.items():
        kinds = set()
        for (word, call_addr, push_addr) in blist:
            kinds.add(global_load_ok(ins, word, call_addr, push_addr))
        if kinds == {"ok"}:
            rel.append(k)
        else:
            for x in kinds - {"ok"}:
                blocked[x] += 1
    print("  units releasable : %d   (of %d refused units)" % (len(rel), len(unit_bails)))
    for x, n in blocked.most_common(8):
        print("    blocked by %-26s %5d" % (x, n))
    if rel:
        p = os.path.join(ROOT, "build", "cow_lift", "global_load_releasable.txt")
        with open(p, "w", encoding="utf-8", newline="\n") as fh:
            fh.write("\n".join(rel) + "\n")
        print("  sample: %s" % ", ".join("0x" + u for u in rel[:10]))
        print("  list written to build/cow_lift/global_load_releasable.txt")
    else:
        print("  nothing released - the narrow rule would ship dead, which is the answer, not a failure")
    return 0


if __name__ == "__main__":
    sys.exit(main())
