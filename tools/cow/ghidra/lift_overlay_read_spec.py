"""lift_overlay_read_spec.py - pin COW_LIFT_OVERLAY_READ on both arms, through the real emitter.

Three things this refuses to let anyone assume:

1. THAT THE FIX CHANGES SOMETHING. An off-arm and an on-arm that emit the same text would "pass" any
   test ever written against them, so every harmed shape is asserted to DIFFER between arms, and the
   on-arm value is asserted to equal the true field of a real dword. The off-arm value is asserted NOT
   to - if it did, that unit was never broken and must not be credited to this knob.
2. THAT THE FIX CHANGES ONLY WHAT IT CLAIMS. off == 0 emits byte-identical text on both arms (that is
   the shipped majority: Ghidra's low-field extracts `._0_4_`, `._0_2_`), an address LABEL base is
   untouched on both arms (it wants a narrow load at addr+off, not a shift, and "fixing" it with `>>`
   would turn a silent zero into a silent wrong number and look like progress), and a width the emitter
   cannot lower survives as a token on both arms so leftover_overlay still refuses the unit.
3. THAT THE ARITHMETIC WAS CHECKED AGAINST THE DEFINITION, not against the judge. The expected value is
   `(x >> 8*off) & mask` - what Ghidra's member access MEANS - evaluated with C's uint64_t semantics
   (results masked to 64 bits), because Python's ints are unbounded and would hide a shift-width bug.

A NOTE WORTH KEEPING: with the shipped `<<` form, a base whose field sits high (e.g. `._12_4_`) emits
`((uint64_t)X << 96) & 0xffffffffu` - a shift of 96 on a 64-bit type, which is UNDEFINED BEHAVIOUR in
C, not merely zero. The off-arm cases below are therefore reported as "not the field", which is the
weakest true statement about them.

Run: python tools/cow/ghidra/lift_overlay_read_spec.py
Exit 0 = every assertion held. Non-zero = the knob is not what its name says.
"""
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import ghidra_c  # noqa: E402

OV = ghidra_c.Rewriter._overlays
U64 = (1 << 64) - 1


def emit(text, on):
    """Run the REAL emitter with the knob on or off, restoring the environment afterwards."""
    old = os.environ.get("COW_LIFT_OVERLAY_READ")
    if on:
        os.environ["COW_LIFT_OVERLAY_READ"] = "1"
    else:
        os.environ.pop("COW_LIFT_OVERLAY_READ", None)
    try:
        return OV(text)
    finally:
        if old is None:
            os.environ.pop("COW_LIFT_OVERLAY_READ", None)
        else:
            os.environ["COW_LIFT_OVERLAY_READ"] = old


SHAPE = re.compile(r"^\(\(\(uint64_t\)\((.*)\)(?: (<<|>>) (\d+))?\) & (0x[0-9a-f]+)u\)$")


def parse(emitted):
    """(base, op_or_None, shift, mask) from `(((uint64_t)(BASE) << N) & 0xffu)`.

    Anchored at BOTH ends: the required ` & mask)` tail is what stops the greedy base from eating the
    shift. A hand-computed offset version of this function was wrong twice in a row, and an earlier
    draft of this spec silently evaluated nothing because it could not parse the emitter's own text.
    """
    m = SHAPE.match(emitted)
    assert m, "not the documented emitted shape: %r" % emitted
    return m.group(1), m.group(2), int(m.group(3) or 0), int(m.group(4), 16)


X = 0x12345678          # four distinct bytes: a wrong field cannot masquerade as a right one


def value(op, shift, mask, x=None):
    v = X if x is None else x
    if op == "<<":
        v = (v << shift) & U64
    elif op == ">>":
        v = v >> shift
    return v & mask


def field(x, off, width):
    return (x >> (8 * off)) & ((1 << (8 * width)) - 1)


# (base, off, width) - bases the whitelist accepts as VALUES, and whose field lives inside the 32 bits
# the lifter actually models for them.
HARMED = [
    ("DAT_1047fe8c", 3, 1),        # the unit read end-to-end this session (0x10230280)
    ("DAT_104802b8", 2, 2),        # the bool-returning family (0x10087650)
    ("DAT_10485684", 2, 1),
    ("param_2", 2, 2),             # the (param_2._2_2_ & 0x7ff0) unit (0x10314508)
    ("param_1", 2, 4),
    ("local_24", 1, 4),
    ("PTR_10329e88", 1, 4),
]

# A field above bit 31 of a base the lifter models as ONE 32-bit slot is not a shift-direction problem:
# `uStack_178._4_4_` asks for the upper half of a 128-bit struct that our text stores as a single
# CowU32. Right-shifting it yields 0, exactly like the shipped left-shift, so this knob cannot claim
# it and this spec does not test it as if it could. That family is the struct-split / wide-base work,
# named here so it is not counted as a win and not forgotten either.
OUT_OF_SCOPE = [
    ("uStack_178", 4, 4),
    ("uVar3", 1, 8),
]

FAILS = []
print("== harmed shapes: arms must differ, on-arm == the true field, off-arm != it ==")
checked = 0
for base, off, width in HARMED:
    text = "v = %s._%d_%d_;" % (base, off, width)
    a, b = emit(text, False), emit(text, True)
    if a == b:
        FAILS.append(("arms identical", text))
        print("  FAIL %-28s both arms emit the same text" % text)
        continue
    _, o1, s1, m1 = parse(a[a.index("(((uint64_t)("):].rstrip(";"))
    _, o2, s2, m2 = parse(b[b.index("(((uint64_t)("):].rstrip(";"))
    want = field(X, off, width)
    on_val, off_val = value(o2, s2, m2), value(o1, s1, m1)
    checked += 1
    ok = on_val == want and off_val != want
    if not ok:
        FAILS.append(("arithmetic", text, want, on_val, off_val))
    print("  %-4s %-28s want=0x%-8x on=%s0x%-8x off-arm=0x%-8x (%s %d)"
          % ("OK" if ok else "FAIL", text, want, o2, on_val, off_val, o1, s1))
if checked == 0:
    FAILS.append(("can-fire", "no harmed shape evaluated at all"))
print("  %d/%d shapes evaluated" % (checked, len(HARMED)))

print("\n== out of scope: field above the 32 bits we model for the base - VERIFIED BY NEITHER ARM ==")
# Deliberately an assertion-free REPORT. For these, the correct guest value depends on bits of the base
# that our lift does not model at all (the base is one CowU32), so no expected value can be written
# here without inventing it. They are listed so the family is named, and excluded from the fix's claim.
for base, off, width in OUT_OF_SCOPE:
    text = "v = %s._%d_%d_;" % (base, off, width)
    a, b = emit(text, False), emit(text, True)
    _, o1, s1, m1 = parse(a[a.index("(((uint64_t)("):].rstrip(";"))
    _, o2, s2, m2 = parse(b[b.index("(((uint64_t)("):].rstrip(";"))
    print("  %-26s off-arm=0x%x (%s %d)  on-arm=0x%x (%s %d)  -> unverified, NOT counted as fixed"
          % (text, value(o1, s1, m1), o1, s1, value(o2, s2, m2), o2, s2))

# The bug this section exists to keep dead. The member-access regex swallows the text BEFORE `._o_w_`,
# so a read in a condition reaches the whitelist as `if (DAT_10482f40` and a returned one as
# `return (param_2`. The first version of the predicate matched from position zero, rejected both, and the
# knob became a silent no-op on exactly the lines where these reads live - reporting zero, which is
# indistinguishable from "nothing wrong here". Any future predicate must keep firing here.
CONTEXT = [
    ("if (DAT_10482f40._3_1_ != '\\0') {", "DAT_10482f40", 3, 1, "if (...) guard"),
    ("return (param_2._2_2_ & 0x7ff0) != 0x7ff0;", "param_2", 2, 2, "returned expression"),
    ("v = !(uVar3._1_4_ == 0);", "uVar3", 1, 4, "negated comparison"),
    ("if (a && DAT_104802b8._2_2_ != 0) {", "DAT_104802b8", 2, 2, "short-circuit tail"),
]
print("\n== context capture: the fix MUST reach reads inside if()/return (the silent no-op trap) ==")
reached = 0
for text, base, off, width, why in CONTEXT:
    a, b = emit(text, False), emit(text, True)
    hit = ">> %d" % (8 * off) in b
    ok = hit and a != b
    if ok:
        reached += 1
    else:
        FAILS.append(("context not reached", text, why, a, b))
    print("  %-4s %-42s %s" % ("OK" if ok else "FAIL", text.strip(), why))
if reached == 0:
    FAILS.append(("can-fire", "the fix reaches no contextual read - it is a silent no-op"))
print("  %d/%d contextual reads reached" % (reached, len(CONTEXT)))

print("\n== inertness: these must be BYTE-IDENTICAL on both arms ==")
INERT = [
    ("v = DAT_10485684._0_4_;", "off == 0 (the shipped majority)"),
    ("v = param_1._0_2_;", "off == 0"),
    ("v = uVar7._0_1_;", "off == 0"),
    ("v = s_mdlRegister_mod_103b19c0._4_4_;", "address LABEL: wants rd32(addr+4), not a shift"),
    ("v = s_text_1035120c._2_2_;", "address LABEL, low field: still not a value"),
    ("v = (int)s_fmt_103b19c0._4_4_;", "address LABEL behind a cast: still an address"),
    ("v = mystery_thing._2_2_;", "unknown base: never silently touched"),
    ("v = DAT_1047fe8c._1_3_;", "width 3: token survives, leftover_overlay still refuses"),
    ("v = 0x103b19c0._4_4_;", "numeric literal: a constant, not a value read"),
]
for text, why in INERT:
    a, b = emit(text, False), emit(text, True)
    ok = a == b
    if not ok:
        FAILS.append(("inertness", text, a, b))
    print("  %-4s %-46s %s" % ("OK" if ok else "FAIL", text.strip(), why))

# can-fire on the inert set too: at least one of these shapes must be a case the WRONG classifier
# would have touched, else "inert" is being proven about nothing.
label_touched = emit("v = s_mdlRegister_mod_103b19c0._4_4_;", True)
assert "<< 32" in label_touched, \
    "the label case no longer emits the shipped shape - is the fix leaking onto addresses? %r" % \
    label_touched
print("\ncan-fire: label base still emits `<< 32` (the fix did NOT reach it) - as intended")

z = emit("v = DAT_1047fe8c._3_1_;", False)
on = emit("v = DAT_1047fe8c._3_1_;", True)
assert "<< 24" in z, "off-arm no longer the documented shape: %r" % z
assert ">> 24" in on, "on-arm does not right-shift: %r" % on
print("can-fire: off-arm `<< 24` (constant 0 / UB-adjacent), on-arm `>> 24` (the field)")

if FAILS:
    print("\nFAILURES (%d):" % len(FAILS))
    for f in FAILS:
        print("  ", f)
    sys.exit(1)
print("\nall assertions held: %d harmed shapes fixed, %d shapes provably inert"
      % (len(HARMED), len(INERT)))
