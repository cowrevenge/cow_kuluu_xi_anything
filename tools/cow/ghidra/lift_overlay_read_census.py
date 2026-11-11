"""lift_overlay_read_census.py - who is harmed by _overlays shifting a field the wrong way?

WHY THIS EXISTS
---------------
tools/cow/ghidra/ghidra_c.py's `_overlays` lowers Ghidra's sub-word member access `X._off_width_`
(the width bytes of X starting at byte off) as

    (((uint64_t)(X) << (8*off)) & ((1 << (8*width)) - 1))

A read must bring the field DOWN to bit 0, i.e. `(X >> (8*off)) & mask`. Shifting LEFT keeps the
low bits of X and parks them above the mask:

  * off >= width           -> the result is IDENTICALLY ZERO (the mask sees only the zeros the
                              shift introduced) - a condition that can never be true;
  * 0 < off <  width       -> the wrong bits, in the wrong place.

With off == 0 both formulas coincide, which is why this survived: the majority of Ghidra's member
accesses are low-field extracts (`._0_4_`, `._0_2_`), where the bug is invisible.

SCOPE, and why it is drawn this way
-----------------------------------
* STORES (`X._o_w_ = v`) are excluded and NOT part of any claim here. The current lowering emits a
  non-lvalue on the left of `=`, which cannot compile, so the unit is refused; measured, 0 of the
  183 units with a sub-word store ship. Changing `<<` to `>>` cannot change that (a right shift is
  no more an lvalue than a left one), so this fix is inert on stores - it neither fixes nor releases
  them. Read-modify-write for stores is a separate, larger mechanism.
* A base that is a compile-time CONSTANT (COW_IMG(...) of an image address) can agree between the
  two formulas - e.g. `(const << 32) & 0xffffffff` and `(const >> 32)` are both 0 for a 32-bit
  address. Those rows are classified CONST and excluded from the harmed population, because the
  defect there is unobservable, and unobservable is not the same as correct.

A PASS IS NOT EVIDENCE (measured on this very population)
---------------------------------------------------------
Of the shipped units carrying a wrong overlay, roughly half are recorded pass=True in
cow/lift_proof_all.json. That is the same blindness family as the judge's RD=0: cowdiff compares
what the seeded state exercises, so if the byte the unit misreads happens to be 0, the identically
zero expression and the correct one agree. Never clear a row here on its verdict - read the body.

CAN-FIRE
--------
The classifier self-test asserts that a known identically-zero shape is labelled as such and that a
low-field extract is NOT; and the proof-map join refuses to print if it can never answer True.
"""
import io
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
sys.path.insert(0, HERE)

import ghidra_c            # noqa: E402  the real _overlays, not a copy of it
import lift_proof_map      # noqa: E402

DUMP = os.environ.get("COW_LIFT_DUMP", "D:/projects/ghidra/ghidra_out/functions_all.jsonl")
SRC = os.path.join(REPO, "src", "lifted")

MEM = re.compile(r"([A-Za-z_][A-Za-z0-9_()\[\]. +-]*?)\._(\d+)_(\d+)_")
LVAL = re.compile(r"\._(\d+)_(\d+)_\s*=[^=]")

# A base whose value is NOT knowable at lift time. Deliberately the DEFAULT bucket: at the Ghidra
# stage almost every base is a runtime value, and a classifier that quietly filed unknown bases under
# "const" would UNDER-REPORT the harmed population - the mistake this repo keeps getting caught making.
# `DAT_xxx` is a LOAD FROM A GLOBAL (it lowers to rd32(COW_IMG(...))), i.e. runtime, NOT a constant;
# only a numeric literal is const.
RUNTIME = re.compile(r"\b(?:rd(?:8|16|32|64)|g->|param_\d+|local_|uStack_|PTR_|DAT_|i?u?Var\d+)")
CAST = re.compile(r"^\s*(?:\([A-Za-z_][A-Za-z0-9_ \*]*\)\s*)+")
CONST = re.compile(r"^(?:0x[0-9a-fA-F]+|\d+)$")


def base_kind(base):
    """runtime | const | other. `other` is reported, never folded into const."""
    b = CAST.sub("", base.strip())
    if CONST.match(b):
        return "const"
    if RUNTIME.search(b):
        return "runtime"
    return "other"


def classify(off, width):
    """What the current lowering does to a READ of this field."""
    if off == 0:
        return "fine(off==0)"
    if width not in (1, 2, 4, 8):
        return "unsupported_width"
    if off >= width:
        return "identically_zero"
    return "wrong_bits"


def _selftest():
    cases = [
        # (off, width, expected label). width not in (1,2,4,8) is NEVER lowered - the emitter leaves
        # the token and leftover_overlay refuses the unit - so it is its own class, not "wrong bits".
        (0, 4, "fine(off==0)"), (0, 2, "fine(off==0)"),
        (3, 1, "identically_zero"), (2, 2, "identically_zero"),
        (4, 4, "identically_zero"), (1, 1, "identically_zero"),
        (2, 4, "wrong_bits"), (1, 8, "wrong_bits"), (3, 4, "wrong_bits"),
        (1, 3, "unsupported_width"), (2, 3, "unsupported_width"),
    ]
    bad = [(o, w, classify(o, w), e) for o, w, e in cases if classify(o, w) != e]
    assert not bad, "classify selftest FAILED: %r" % (bad,)
    # base kinds. The DAT_ case was wrong in the first draft of this file (filed as const, which
    # would have deleted the exemplar unit 0x10230280 from the population), so it is pinned here.
    bk = [("DAT_1047fe8c", "runtime"), ("param_1", "runtime"), ("uVar3", "runtime"),
          ("(int)*(int *)(param_1 + 0xa8)", "runtime"), ("0x103b19c0", "const"),
          ("local_24", "runtime"), ("mystery_base", "other")]
    badb = [(b, base_kind(b), e) for b, e in bk if base_kind(b) != e]
    assert not badb, "base_kind selftest FAILED: %r" % (badb,)
    # the arithmetic itself, through the real emitter: an off>=width read keeps the poisoned shape
    emitted = ghidra_c.Rewriter._overlays("v = DAT_1047fe8c._3_1_;")
    assert "<< 24" in emitted and "& 0xffu" in emitted, \
        "the emitter no longer produces the shape this tool documents: %r" % emitted
    assert ">> 24" not in emitted, "the emitter already right-shifts; this census is stale"
    print("selftest: %d/%d labels, %d/%d base kinds, emitter shape confirmed"
          % (len(cases), len(cases), len(bk), len(bk)))


def ghidra_bodies():
    if not os.path.isfile(DUMP):
        sys.exit("no Ghidra dump at %s - nothing can be attributed" % DUMP)
    out = {}
    with io.open(DUMP, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            try:
                d = json.loads(line)
            except ValueError:
                continue
            a = str(d.get("addr") or "").lower().replace("0x", "")
            c = str(d.get("c") or "")
            if c and re.fullmatch(r"10[0-9a-f]{6}", a or ""):
                out[a] = c
    return out


def main():
    import argparse
    ap = argparse.ArgumentParser()
    ap.add_argument("--json", default=None,
                    help="write the harmed population here, for the pricing tool to price. Membership is"
                         " computed with the knob OFF, because the knob changes what we would emit; a"
                         " population derived under the knob moves its own denominator.")
    args = ap.parse_args()
    _selftest()
    lifted = {m.group(1) for f in os.listdir(SRC)
              if (m := re.match(r"cow_([0-9a-f]{8})\.c$", f))}
    bodies = ghidra_bodies()
    print("Ghidra bodies: %d    shipped units: %d" % (len(bodies), len(lifted)))

    # Membership is decided by the PRODUCTION predicate ghidra_c._overlay_is_value_base, not by a copy
    # of it: if the census and the emitter disagree about what is a value base, the pricing tool would be
    # pricing a population the knob never touches.
    rows, label_units, const_units = [], set(), set()
    for addr, c in sorted(bodies.items()):
        if LVAL.search(c):
            continue                       # store: out of scope, see docstring
        hits = []
        for m in MEM.finditer(c):
            off, width = int(m.group(2)), int(m.group(3))
            base = m.group(1).strip()
            lab = classify(off, width)
            if lab not in ("identically_zero", "wrong_bits"):
                continue
            if base_kind(base) == "const":
                const_units.add(addr)      # unobservable here; a different mechanism owns it
                continue
            if not ghidra_c._overlay_is_value_base(base):
                label_units.add(addr)      # an ADDRESS: wants rdN(addr+off), not a shift
                continue
            hits.append([off, width, base[:40], lab])
        if hits:
            rows.append((addr, hits))

    shipped = [(x, h) for x, h in rows if x in lifted]
    print("\nunits whose Ghidra text reads a VALUE sub-word at off>0     : %d" % len(rows))
    print("  of which shipped in src/lifted                            : %d" % len(shipped))
    print("  excluded, named not hidden: address-label bases %d, constant bases %d"
          % (len(label_units), len(const_units)))

    pm = lift_proof_map.load_map()
    lift_proof_map.can_fire(pm)
    n_t = sum(1 for x, _ in shipped if lift_proof_map.is_pass(pm, x) is True)
    n_f = sum(1 for x, _ in shipped if lift_proof_map.is_pass(pm, x) is False)
    print("  recorded pass=True : %d   pass=False : %d   no verdict : %d"
          % (n_t, n_f, len(shipped) - n_t - n_f))
    print("  ^ the pass=True rows are DEFECTS HIDING BEHIND ZERO DATA, not correct code.")
    print("\nnot-yet-lifted (a correct lowering could release these):  %d"
          % (len(rows) - len(shipped)))

    by_lab = {}
    for x, h in shipped:
        for o, w, b, lab in h:
            by_lab[lab] = by_lab.get(lab, 0) + 1
    print("\nshipped occurrences by label: %r" % (by_lab,))

    print("\nshipped rows:")
    for x, h in shipped:
        print("  0x%s pass=%-5s %s" % (x, lift_proof_map.is_pass(pm, x), h[:3]))

    if not shipped:
        sys.exit("CAN-FIRE FAILED: zero shipped rows attributed through the real emitter")

    if args.json:
        pop = {x: h for x, h in rows}
        with io.open(args.json, "w", encoding="utf-8") as fh:
            json.dump(pop, fh, indent=0, sort_keys=True)
        print("\npopulation written: %s (%d units, knob-OFF membership)" % (args.json, len(pop)))


if __name__ == "__main__":
    main()
