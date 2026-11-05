"""lift_selftest.py - canned cases for the lift rewriter, so a silent corruption is a FAILED TEST.

The dangerous failure mode of a machine lift is not a crash - it is a statement that quietly disappears.
A lift that drops one store still compiles, still runs, and still LOOKS like a conversion; only cowdiff
knows, and cowdiff is expensive and indirect. So the rewriter's contract is tested here on small inputs
where the right answer is obvious:

    python tools/cow/ghidra/lift_selftest.py            # run every case
    python tools/cow/ghidra/lift_selftest.py -v         # show what came out

Each case is (name, ghidra_body, ghidra_signature, [substrings that MUST appear],
[substrings that must NOT appear]).
"""
import sys

if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")

import ghidra_c
import lift as liftmod

CASES = [
    (
        "store-through-typed-pointer",
        "  *(int *)(param_1 + 0x14) = 3;\n  return;\n",
        "void __fastcall FUN_10000000(int param_1)",
        ["wr32((uint32_t)(param_1 + 0x14), 3)"],
        ["*(int *)", "DAT_", ";;"],
    ),
    (
        "store-through-scaled-array-on-pointer-param",
        "  param_1[0x181] = 0x3fc00000;\n  return;\n",
        "undefined4 * __fastcall FUN_10000000(undefined4 *param_1)",
        ["wr32(", "0x181"],
        ["param_1[0x181] ="],
    ),
    (
        "bare-deref-store-keeps-the-statement",
        "  *param_1 = &PTR_FUN_10329e88;\n  return;\n",
        "undefined4 * __fastcall FUN_10000000(undefined4 *param_1)",
        ["wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_10329E88));"],
        ["&PTR_", "PTR_FUN"],
    ),
    (
        "load-through-char-pointer-is-an-rd8",
        "  if (*(char *)(param_1 + 0x1f) != '\\0') { return; }\n  return;\n",
        "void __fastcall FUN_10000000(int param_1)",
        ["rd8((uint32_t)(param_1 + 0x1f))"],
        ["*(char *)"],
    ),
    (
        "float-store-is-wrf32",
        "  *(float *)(param_1 + 8) = 1.5f;\n  return;\n",
        "void __fastcall FUN_10000000(int param_1)",
        ["wrf32("],
        ["*(float *)", "wr32((uint32_t)(param_1 + 8), 1.5f)"],
    ),
    (
        "global-read-and-write",
        "  uVar1 = DAT_10456a7c;\n  _DAT_103d3c90 = uVar1;\n  return;\n",
        "void FUN_10000000(void)",
        ["rd32(COW_IMG(COW_ADDR_LIFT_10456A7C))", "wr32(COW_IMG(COW_ADDR_LIFT_103D3C90), uVar1)"],
        ["DAT_10456a7c", "_DAT_103d3c90"],
    ),
    (
        "string-literal-becomes-an-address",
        "  FUN_10017d20(s_hello_103511b0, 1);\n  return;\n",
        "void FUN_10000000(void)",
        ["COW_IMG(COW_ADDR_LIFT_103511B0)"],
        ["s_hello"],
    ),
    (
        "return_is_never_a_declaration",
        "  uVar1 = 2;\n  return uVar1;\n",
        "undefined4 FUN_10000000(void)",
        ["return uVar1;"],
        ["    return uVar1;\n\n    uVar1"],
    ),
    (
        "call-becomes-a-bridge-with-the-sites-numbers",
        "  FUN_10017160();\n  return;\n",
        "undefined4 * __fastcall FUN_10000000(undefined4 *param_1)",
        ["cow_bridge_10017160(g, COW_IMG(COW_ADDR_LIFT_1001706C), 0u,"],
        ["FUN_10017160("],
    ),
    (
        "odd-width-refuses-rather-than-pads",
        "  *(undefined5 *)(param_1 + 4) = 1;\n  return;\n",
        "void __fastcall FUN_10000000(int param_1)",
        [],
        [],   # the point of this case is the problem it reports, checked below
    ),
    (
        "address_of_after_a_keyword_is_not_a_load",
        "  return &PTR_s_CYyObject_103515a0;\n",
        "undefined ** FUN_10000000(void)",
        ["COW_IMG(COW_ADDR_LIFT_103515A0)"],
        ["rd32(COW_IMG(COW_ADDR_LIFT_103515A0))"],
    ),
    (
        "ampersand_after_an_operand_is_a_bitwise_and",
        "  uVar1 = uVar2 & DAT_10456a7c;\n  return;\n",
        "void FUN_10000000(void)",
        ["& rd32(COW_IMG(COW_ADDR_LIFT_10456A7C))"],
        [],
    ),
    (
        "bare_deref_uses_the_declared_width",
        "  cVar1 = *param_1;\n  return;\n",
        "uint FUN_10000000(char *param_1)",
        ["rd8((uint32_t)param_1)"],
        ["rd32((uint32_t)param_1)"],
    ),
    (
        "cast_then_typed_deref_is_a_deref_not_a_multiply",
        "  uVar1 = (CowU16)*(unsigned char *)(param_1 + 0x326);\n  return;\n",
        "void __fastcall FUN_10000000(int param_1)",
        ["rd8((uint32_t)(param_1 + 0x326))"],
        ["*(unsigned char *)"],
    ),
    (
        "thunk_call_becomes_a_bridge_not_a_token",
        "  thunk_FUN_10028aa0(param_1);\n  return;\n",
        "void __cdecl FUN_10000000(int param_1)",
        [],
        ["thunk_"],
    ),
    (
        "concat_and_extend",
        "  uVar3 = CONCAT13(uVar1, uVar2);\n  uVar4 = (int)ZEXT48(uVar3);\n  return;\n",
        "void FUN_10000000(void)",
        ["<< 24", "0xffffffffffffu", "uint64_t"],
        ["CONCAT13", "ZEXT48"],
    ),
    (
        "address_of_a_c_local_escapes_is_refused_not_shipped",
        "  local_4 = 0;\n  FUN_10009f20(param_1, &local_4, 1);\n  return;\n",
        "void __thiscall FUN_10000000(int param_1)",
        [],
        [],   # asserted below: the rewriter must report local_address_escapes
    ),
    (
        "odd_width_type_refuses",
        "  uint3 uVar3;\n  uVar3 = 1;\n  return;\n",
        "void FUN_10000000(void)",
        [],
        [],   # reported as a problem, which the check below asserts
    ),
]


def run(verbose=False):
    failures = []
    for name, body, sig, must, must_not in CASES:
        layout = {}
        # a bridge stub that behaves like lift.py's for the one callee the cases use
        seen = {}

        def bridge(target, args, _seen=seen):
            _seen[target] = args
            if target == 0x10017160:
                return ("cow_bridge_10017160(g, COW_IMG(COW_ADDR_LIFT_1001706C), 0u,"
                        " (const CowU32[]){ 0u }, 0u, 0u, 0u)")
            return None

        rw = ghidra_c.Rewriter(layout, bridge=bridge)
        out = rw.rewrite(body, sig)
        problems = list(rw.problems) + ghidra_c.leftover_problems(out)
        bad = []
        for s in must:
            if s not in out:
                bad.append("MISSING %r" % s)
        for s in must_not:
            if s in out:
                bad.append("PRESENT %r" % s)
        if name.startswith("address_of_a_c_local_escapes") \
                and not any("local_address_escapes" in p for p in problems):
            bad.append("expected local_address_escapes, got %s" % problems)
        if name in ("odd-width-refuses-rather-than-pads", "odd_width_type_refuses") \
                and not any("odd_width" in p for p in problems):
            bad.append("expected an odd_width problem, got %s" % problems)
        if name == "return_is_never_a_declaration":
            # the hoister must not have moved the return above the statements
            if out.strip().startswith("return"):
                bad.append("return hoisted to the top of the body")
        if bad:
            failures.append((name, bad, out, problems))
        if verbose or bad:
            print(("FAIL  " if bad else "ok    ") + name)
            print("      out: %s" % out.replace("\n", "\n      "))
            if problems:
                print("      problems: %s" % problems)
            for b in bad:
                print("      ** %s" % b)
    print("\n%d/%d cases pass" % (len(CASES) - len(failures), len(CASES)))
    return 1 if failures else 0


if __name__ == "__main__":
    sys.exit(run("-v" in sys.argv or "--verbose" in sys.argv))
