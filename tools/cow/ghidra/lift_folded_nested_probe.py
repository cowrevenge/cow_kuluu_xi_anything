"""Measure the NESTED folded-callee widening on its own family, before any full lift run.

`_callee_read_ghidra` used to put only a BARE identifier under its stars, so the vtable call
`**(code **)(**(int **)(param_1 + 4) + 0x24)` returned None and the unit booked
indirect_call_not_modelled. lift_indirect_ghidra.py priced that at 196 of 400 sampled units
("RELEASABLE: regex widening only"). This probe is the measurement that has to come FIRST:

  (a) the nested forms the family actually contains now TRANSLATE, with the read count right;
  (b) the forms that must stay refused - a Ghidra LOCAL, `&`, indexing, a call inside the address,
      a local's value smuggled in as a leaf - still return None. A widening that quietly releases the
      frame-model class is worse than no widening: those units would compile, run, and disagree only
      in the memory trace.

Read counts are asserted explicitly because the outermost `*` is the call idiom and NOT a guest read.

    python tools/cow/ghidra/lift_folded_nested_probe.py
"""
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)

import ghidra_c  # noqa: E402

R = ghidra_c.Rewriter

# ---- (a) forms that must now translate: (callee text, expected reads) ------------------------------
MUST_TRANSLATE = [
    # the shape the whole family turns on: vtable pointer loaded through a param, slot displaced
    ("**(code **)(**(int **)(param_1 + 4) + 0x24)", 3),
    ("**(code **)(**(int **)(param_1 + 8) + 0x3c)", 3),
    ("**(code **)(**(int **)(param_1 + 0xc) + 200)", 3),
    ("**(code **)(**(int **)(param_1 + 0x90) + 8)", 3),
    # one level of indirection to reach the vtable, then the slot
    ("**(code **)(*param_1 + 0x24)", 2),
    ("**(code **)(*param_1 + 8)", 2),
    # a direct function pointer held in a param: the outer `*` is the call idiom, so ONE read total
    ("*(code *)(*param_3)", 1),
    # image globals are leaves too
    ("**(code **)*DAT_103d3cbc", None),        # not this form (no address group) - must stay refused
]

# ---- (a2) pure sub-expression units, checked for shape as well as count ----------------------------
MUST_SUB = [
    ("**(int **)(param_1 + 4)", "rd32((uint32_t)(rd32((uint32_t)((param_1 + 0x4u)))))", 2),
    ("*param_1", "rd32((uint32_t)(param_1))", 1),
    ("param_1", "param_1", 0),
    ("**(int **)(COW_IMG(COW_ADDR_X) + 8)", None, 2),
]

# ---- (b) forms that must stay refused ---------------------------------------------------------------
MUST_REFUSE = [
    # Ghidra LOCAL: the frame-aliasing model's 137-unit class. Not this change's business.
    "**(code **)(*piVar2 + 0x3c)",
    "**(code **)(**(int **)(iVar1 + 4) + 8)",
    "**(code **)(*local_4 + 8)",
    "**(code **)(*piStack_f0 + 200)",
    "**(code **)(*extraout_ECX + 0x1c8)",
    # a local buried one level deeper must not slip through as a "leaf"
    "**(code **)(**(int **)(param_1 + uVar3) + 8)",
    "**(code **)(**(int **)(param_1 + 4) + iVar7)",
    # host address / indexing / assignment / call inside the address
    "**(code **)(**(int **>(&param_1 + 4) + 8)",
    "**(code **)(**(int **)(param_1[2] + 4) + 8)",
    "**(code **)(**(int **)((param_1 = 4) + 4) + 8)",
    "**(code **)(**(int **)(rd32((uint32_t)(param_1)) + FUN_10001230(0)) + 8)",
]


def main():
    fails = []

    for text, want in MUST_TRANSLATE:
        got = R._callee_read(text)
        if want is None:
            if got is not None:
                fails.append("expected REFUSAL, got %r for %s" % (got, text))
            continue
        if got is None:
            fails.append("expected translation, got None for %s" % text)
            continue
        expr, reads = got
        if reads != want:
            fails.append("READ COUNT %d != %d for %s  ->  %s" % (reads, want, text, expr))

    for text, want_expr, want_reads in MUST_SUB:
        got = R._addr_subexpr(text)
        if got is None:
            fails.append("sub: expected translation, got None for %s" % text)
            continue
        expr, reads = got
        if reads != want_reads:
            fails.append("sub: READ COUNT %d != %d for %s -> %s" % (reads, want_reads, text, expr))
        if want_expr is not None and expr != want_expr:
            fails.append("sub: SHAPE\n     got  %s\n     want %s\n     for  %s" % (expr, want_expr, text))

    for text in MUST_REFUSE:
        got = R._callee_read(text)
        if got is not None:
            fails.append("LEAK: local/host form now translates (%r) for %s" % (got, text))

    print("nested folded-callee probe")
    print("  translate cases : %d" % len(MUST_TRANSLATE))
    print("  sub-shape cases : %d" % len(MUST_SUB))
    print("  must-refuse     : %d" % len(MUST_REFUSE))
    if fails:
        print("\nFAILURES (%d):" % len(fails))
        for f in fails:
            print("  - " + f)
        return 1
    print("\nALL PASS - nested vtable callees bridge, locals still refused")
    return 0


if __name__ == "__main__":
    sys.exit(main())
