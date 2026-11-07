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
import re
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
        # the star after a KEYWORD is a dereference, not a multiplication: `return *(...)` is how every
        # one-line accessor in the image reads, and reading it as a product left the deref in place for the
        # type pass to strip the `*` from its cast - `*(CowU32)(x)`, 749 files that did not compile.
        "return-star-is-a-deref-not-a-multiply",
        "  return *(undefined4 *)(DAT_104568fc + 0x34);\n",
        "undefined4 FUN_10000000(void)",
        ["rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104568FC)) + 0x34))"],
        ["*(CowU32)", "*(undefined4 *)"],
    ),
    (
        # a store rewrite jumps to the end of its statement, so the VALUE has to be scanned by the same
        # pass or a nested deref is silently abandoned there (the read half of a read-modify-write).
        "store-value-is-scanned-for-derefs-too",
        "  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;\n  return;\n",
        "void __fastcall FUN_10000000(int param_1)",
        ["wr16((uint32_t)(param_1 + 4), rd16((uint32_t)(param_1 + 4)) + 1)"],
        ["*(short *)", "*(CowU32)"],
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
        # A rewrite must carry the text that came BEFORE its match. The subscript pass did not, so every
        # body between the last thing it touched and the first `p[i] = v` was deleted - a bridge call and a
        # store in this case, and in the population it was 130+ files that failed to compile with codes
        # (C2057/C2109/C2146) pointing nowhere near the pass that ate them.
        "array-store-keeps-the-text-before-it",
        "  FUN_10017160();\n  *param_1 = 3;\n  param_1[2] = 0;\n  return;\n",
        "undefined4 * __fastcall FUN_10000000(undefined4 *param_1)",
        ["cow_bridge_10017160(g,", "wr32((uint32_t)param_1, 3);",
         "wr32((uint32_t)(param_1 + 4u * (uint32_t)(2)), 0);"],
        ["param_1[2] = 0;", "CowU32[wr32"],
    ),
    (
        # Ghidra's `true` is not a C identifier in this tree (C11, no stdbool.h), and a regex over the whole
        # body would also rewrite the text of a guest string literal - bytes the game reads.
        "ghidra-true-becomes-one-not-a-crash",
        "  uVar1 = 0;\n  while( true ) { uVar1 = uVar1 + 1;\n    if (3 < uVar1) break;\n  }\n  return;\n",
        "void FUN_10000000(void)",
        ["while( 1 )"],
        ["true )", "true;"],
    ),
    (
        # &UNK_hex is a fact (the address of data Ghidra never typed); READING it is not, and must refuse
        # rather than guess a dword width the guest may not have touched.
        "address-of-UNK-is-the-guest-address",
        "  return (CowU32)(&UNK_1032a4f8);\n",
        "undefined4 FUN_10000000(void)",
        ["COW_IMG(COW_ADDR_LIFT_1032A4F8)"],
        ["UNK_"],
    ),
    (
        # a subscript on the RIGHT of an assignment needs the same pass as the left; the store rewrite jumps
        # past the end of the statement, and 117 files were rejected for the half it never looked at.
        "subscript-on-both-sides-of-an-assignment",
        "  param_1[1] = param_2[1];\n  return;\n",
        "void FUN_10000000(undefined4 *param_1, undefined4 *param_2)",
        ["wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)),",
         "rd32((uint32_t)(param_2 + 4u * (uint32_t)(1)))"],
        ["param_2[1]"],
    ),
    (
        # &uStack_4 is the address of a C local. Handed to a guest callee it becomes a host pointer written
        # into guest memory - the row then fails as `memory`, which names the symptom and hides the cause.
        # Ghidra names stack variables `<type>Stack_<off>`, so `&local_4` alone never caught these.
        "address-of-a-ghidra-stack-local-is-refused",
        "  uStack_4 = 0;\n  FUN_10009f20(param_1, param_2, &uStack_4);\n  return;\n",
        "void FUN_10000000(undefined4 param_1, undefined4 param_2)",
        [],
        [],   # the assertion is the reported problem (checked below), not the text: a refused body still
              # contains the source it refused to translate, and asking it to be absent tests nothing
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
        # the decompiler's two spellings of a call through a pointer. Left alone, `(*param_4)(a, b)` is C
        # that treats a guest dword as a host function pointer: it compiles, and the harness dies.
        "indirect_call_becomes_the_generic_bridge",
        "  (*param_4)(0x1, uVar2);\n  return;\n",
        "void FUN_10000000(int param_4)",
        ["cow_bridge_indirect(g, g->ebx, COW_IMG(COW_ADDR_LIFT_1000108E), 2u,"
         " (const CowU32[]){ 0x1, uVar2 }"],
        ["(*param_4)", "COW_UNBRIDGED_INDIR"],
    ),
    (
        "indirect_call_through_a_global_pointer_is_still_a_call",
        "  (*PTR_FUN_10329e88)();\n  return;\n",
        "void FUN_10000000(void)",
        # The callback in this harness refuses everything but param_4, and a later pass turns the refused
        # marker's name into the load it came from. What is being asserted is that the decompiler's
        # `(*PTR_FUN_x)()` was RECOGNISED as a call: the marker proves it, and the raw form - which would
        # compile and then call through a guest dword as a host pointer - must be gone.
        ["COW_UNBRIDGED_INDIR_"],
        ["(*PTR_FUN_10329e88)();"],
    ),
    (
        # Ghidra writes a typed pointer's offsets in ELEMENTS. `param_1` is `undefined4 *`, so `+ 1` is four
        # bytes and `+ 4` is sixteen; the subscript form below already scaled and the cast form did not, so
        # the same struct got a word stored at +1 and a byte at +4 - the largest family of memory failures
        # on rows where neither side faulted.
        "typed-pointer-add-scales-by-the-element-size",
        "  *param_1 = 0x1032aa90;\n"
        "  *(undefined2 *)(param_1 + 1) = 0;\n"
        "  param_1[2] = 0;\n"
        "  *(undefined1 *)(param_1 + 4) = 0;\n  return;\n",
        "void __fastcall FUN_10000000(undefined4 *param_1)",
        # (the emitter wraps the address as `%s((uint32_t)%s, ...)`, so a scaled expression arrives
        # double-cast - harmless in C, and written here as the tool actually prints it)
        ["wr16((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(1)), 0)",
         "wr8((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(4)), 0)"],
        ["wr16((uint32_t)(param_1 + 1)", "wr8((uint32_t)(param_1 + 4),"],
    ),
    (
        # the other half of the rule: a difference between two pointers is a count, not an address, and must
        # NOT be dressed up with a stride
        "pointer_minus_pointer_is_not_scaled",
        "  iVar1 = param_1 - param_2;\n  return;\n",
        "void FUN_10000000(undefined4 *param_1, undefined4 *param_2)",
        ["param_1 - param_2"],
        ["4u * (uint32_t)(param_2)"],
    ),
    (
        # `extraout_EDX` is the decompiler naming the guest register file (here: `mov edx,ecx` before a
        # call, then four stores through edx). As C it was an UNASSIGNED local - the units storing through
        # it compiled with C4700 and wrote to a host stack value, which is one shape behind the rows where
        # only our side raises 0xC0000005. It must become the live register, and its declaration must go
        # with it (the emitter would otherwise hoist `undefined4 *extraout_EDX;` into `CowU32 *g->edx;`).
        "register_marker_becomes_the_live_guest_register",
        "  undefined4 *extraout_EDX;\n"
        "  *extraout_EDX = &PTR_FUN_1032a6e0;\n"
        "  extraout_EDX[1] = 0;\n"
        "  return extraout_EDX;\n",
        "undefined4 * FUN_10000000(void)",
        # (the rewriter alone is under test here, so `return` is still Ghidra's - emit's return pass is the
        # separate group below; what matters is that the marker is gone and the widths survived its type)
        ["wr32((uint32_t)g->edx, COW_IMG(COW_ADDR_LIFT_1032A6E0));",
         "wr32((uint32_t)(g->edx + 4u * (uint32_t)(1)), 0);",
         "return g->edx;"],
        ["extraout_EDX", "CowU32 *g->edx"],
    ),
    (
        "odd_width_type_refuses",
        "  uint3 uVar3;\n  uVar3 = 1;\n  return;\n",
        "void FUN_10000000(void)",
        [],
        [],   # reported as a problem, which the check below asserts
    ),
]

# ---- the return pass (lift.return_values). It used to stamp ONE expression on every return in the
# function, so a unit whose else-path was `return 0;` inherited the guarded read from the if-path and
# dereferenced memory the original never touched: it did not compute the wrong value quietly, it faulted.
# Exact-output comparisons are what catch that; "contains something" checks would not.
RETURNS = [
    ("two returns keep their own values",
     "  if (param_2 < 0x200) {\n"
     "    return (rd32((uint32_t)(param_1 + 4 + param_2 * 4)) << 0x1f) >> 0x1f;\n"
     "  }\n"
     "  return 0;\n",
     ["g->eax = (CowU32)((rd32((uint32_t)(param_1 + 4 + param_2 * 4)) << 0x1f) >> 0x1f); return;",
      "g->eax = (CowU32)(0); return;"],
     []),
    ("a bare return is left to the body",
     "  g->eax = x;\n  return;\n",
     ["g->eax = x;", "return;"],
     ["g->eax = (CowU32)(x);"]),
    ("three returns, three values",
     "  if (a) { return 1; }\n  if (b) { return 2; }\n  return 0;\n",
     ["g->eax = (CowU32)(1); return;", "g->eax = (CowU32)(2); return;", "g->eax = (CowU32)(0); return;"],
     []),
]

# ---- incoming-register detection (gen_model._reads_before_write), which decides what the adapter binds
# its arguments from. The recompiler lowers every ALU op to `uint32_t a = ecx; uint32_t b = (uint32_t)ecx;
# ... ecx = (uint32_t)(r);`, so a register CLEARED by `xor ecx,ecx` names itself on the right and used to
# read as "used before assigned" - the adapter then bound param_1 to a caller's leftover ecx and slid the
# real stack argument down to param_2. 0x10026e00 stored through that ecx.
ARGS = [
    ("a cleared register is not an argument",
     ["ecx"],
     [("mov", "eax,dwordptr[esp+4]", "uint32_t A = (uint32_t)(esp + 0x4u);\n eax = (uint32_t)(rd32(A));"),
      ("xor", "ecx,ecx", "{ uint32_t a = ecx; uint32_t b = (uint32_t)ecx;\n"
                         "  uint32_t r = (uint32_t)(a ^ b);\n ecx = (uint32_t)(r); }"),
      ("mov", "dwordptr[eax+8],ecx", "uint32_t A = (uint32_t)(eax + 0x8u);\n wr32(A, ecx);")],
     False),
    ("a register the entry really does read is an argument",
     ["ecx"],
     [("mov", "eax,dwordptr[ecx+4]", "uint32_t A = (uint32_t)(ecx + 0x4u);\n eax = (uint32_t)(rd32(A));"),
      ("ret", "", "esp += 4; REGS_STORE; return;")],
     True),
    ("a register cleared and THEN used still is not an argument",
     ["edx"],
     [("sub", "edx,edx", "{ uint32_t a = edx; uint32_t b = (uint32_t)edx;\n"
                         "  uint32_t r = (uint32_t)(a - b);\n edx = (uint32_t)(r); }"),
      ("mov", "eax,edx", "{ uint32_t a = eax; uint32_t b = (uint32_t)edx;\n"
                         "  uint32_t r = (uint32_t)(a + b);\n eax = (uint32_t)(r); }")],
     False),
    ("but adding into itself reads the incoming value",
     ["eax"],
     [("add", "eax,eax", "{ uint32_t a = eax; uint32_t b = (uint32_t)eax;\n"
                         "  uint32_t r = (uint32_t)(a + b);\n eax = (uint32_t)(r); }")],
     True),
]

# ---- pushed-argument ORDER (gen_model). `push a; push b; call` makes b the callee's FIRST argument (it is
# at [esp+4] when the callee starts), so the model's `pushed` list must read [b, a]. A reversal here is
# silent - it compiles, it runs, and every callee in the image reads its two words swapped.
PUSHORDER = [
    ("0x10001f20: push 0; push eax; push ecx  ->  (ecx, eax, 0)",
     [("mov", "eax,dwordptr[esp+8]", "uint32_t A = (uint32_t)(esp + 0x8u);\n eax = (uint32_t)(rd32(A));"),
      ("mov", "ecx,dwordptr[esp+4]", "uint32_t A = (uint32_t)(esp + 0x4u);\n ecx = (uint32_t)(rd32(A));"),
      ("push", "0x0", "esp -= 4; wr32(esp, 0u);"),
      ("push", "eax", "esp -= 4; wr32(esp, eax);"),
      ("push", "ecx", "esp -= 4; wr32(esp, ecx);"),
      ("call", "0x10001f40", "rt_call_indirect(g, 0x10001f40u, 0x10001f31u);"),
      ("add", "esp,0xc", "esp += 0xc;"),
      ("ret", "", "esp += 4; REGS_STORE; return;")],
     ["ecx", "eax", "0x0"]),
    ("0x10014d90: a register reassigned between its push and the call cannot be named - the site falls back",
     # push eax; push ecx; mov ecx,[global]; push edx; call - the bridge must NOT push the live g->ecx,
     # which by then holds the global, so push_values is None and the decompiler's list stands.
     [("mov", "eax,dwordptr[esp+0xc]", "uint32_t A = (uint32_t)(esp + 0xcu);\n eax = (uint32_t)(rd32(A));"),
      ("mov", "ecx,dwordptr[esp+8]", "uint32_t A = (uint32_t)(esp + 0x8u);\n ecx = (uint32_t)(rd32(A));"),
      ("mov", "edx,dwordptr[esp+4]", "uint32_t A = (uint32_t)(esp + 0x4u);\n edx = (uint32_t)(rd32(A));"),
      ("push", "eax", "esp -= 4; wr32(esp, eax);"),
      ("push", "ecx", "esp -= 4; wr32(esp, ecx);"),
      ("mov", "ecx,[0x104568fc]", "uint32_t A = (uint32_t)(0x104568fcu + RD);\n ecx = (uint32_t)(rd32(A));"),
      ("push", "edx", "esp -= 4; wr32(esp, edx);"),
      ("call", "0x10014db0", "rt_call_indirect(g, 0x10014db0u, 0x10014daau);"),
      ("ret", "", "esp += 4; REGS_STORE; return;")],
     ["edx", "ecx", "eax"],        # ORDER is still the guest's: last push first
     "UNSTABLE"),                   # but no values: ecx moved after the guest had pushed it
]

# ---- the effect-free tail the adapter's epilogue replays (gen_model.tail_reg_writes). Two rules matter
# and both were learned the hard way: only writes AFTER the body's last store/call may be replayed (a
# global read before a store is a different read afterwards), and a later write the walk cannot name
# VETOES the register - `mov ebp,esp ... pop ebp` must not end with the frame pointer in ebp.
TAIL = [
    ("a register zeroed after the last effect is replayed",
     [("mov", "eax,dwordptr[ecx]", "uint32_t A = (uint32_t)(ecx);\n eax = (uint32_t)(rd32(A));"),
      ("mov", "dwordptr[eax],0x1", "uint32_t A = (uint32_t)(eax);\n wr32(A, 1u);"),
      ("xor", "edx,edx", "{ uint32_t a = edx; uint32_t b = (uint32_t)edx;\n"
                         "  uint32_t r = (uint32_t)(a ^ b);\n edx = (uint32_t)(r); }"),
      ("ret", "", "esp += 4; REGS_STORE; return;")],
     [("edx", "0u")]),
    ("a write before the last store is NOT replayed (the read could have been invalidated)",
     [("xor", "eax,eax", "{ uint32_t a = eax; uint32_t b = (uint32_t)eax;\n"
                         "  uint32_t r = (uint32_t)(a ^ b);\n eax = (uint32_t)(r); }"),
      ("mov", "dwordptr[ecx],eax", "uint32_t A = (uint32_t)(ecx);\n wr32(A, eax);"),
      ("ret", "", "esp += 4; REGS_STORE; return;")],
     []),
    ("an unnameable later write vetoes the register (the ebp case)",
     [("push", "ebp", "esp -= 4; wr32(esp, ebp);"),
      ("mov", "ebp,esp", "{ ebp = (uint32_t)(esp); }"),
      ("pop", "ebp", "{ uint32_t v = rd32(esp); esp += 4; ebp = v; }"),
      ("ret", "", "esp += 4; REGS_STORE; return;")],
     []),
]


WIDTHS = [
    # (name, seq, text, must_contain, must_not_contain, expect_refusal)
    ("low8 keeps the upper three bytes",
     {"eax": ["low8"]}, "    g->eax = (CowU32)(uVar1);\n",
     ["(g->eax & 0xffffff00u)", "((CowU32)(uVar1) & 0xffu)"], ["g->eax = (CowU32)(uVar1);"], False),
    ("low16 keeps the upper half",
     {"eax": ["low16"]}, "    g->eax = (CowU32)(0x1234u);\n",
     ["(g->eax & 0xffff0000u)", "& 0xffffu)"], [], False),
    ("high8 shifts into bits 8-15",
     {"eax": ["high8"]}, "    g->eax = (CowU32)(v);\n",
     ["(g->eax & 0xffff00ffu)", "<< 8"], [], False),
    ("a full write is left completely alone",
     {"eax": ["full"]}, "    g->eax = (CowU32)(v);\n",
     ["g->eax = (CowU32)(v);"], ["& 0xffffff00u"], False),
    ("a comparison is not mistaken for a write",
     {"eax": ["low8"]}, "    if (g->eax == 3) { g->eax = (CowU32)(1); }\n",
     ["g->eax == 3", "(g->eax & 0xffffff00u)"], [], False),
    ("counts that disagree REFUSE - the model must not guess",
     {"eax": ["full", "low8"]}, "    g->eax = (CowU32)(v);\n",
     [], ["& 0xffffff00u"], True),
    ("a register the body never assigns is not invented",
     {"edx": ["low8"]}, "    g->eax = (CowU32)(v);\n",
     [], ["g->edx & "], True),
]


AMP = [
    # (text containing one '&', True when that '&' is a bitwise AND rather than address-of)
    ("iVar2 = (int)& DAT_104ca438;", False),      # a cast: address-of
    ("x = (a[i]) & b;", True),                    # a parenthesised expression: AND
    ("y = (uint32_t)&PTR_FUN_10001230;", False),  # another cast
    ("z = foo(a) & 3;", True),                    # a call result: AND
    ("w = (char *)&DAT_10001234;", False),        # pointer cast
    ("v = (Widget)&DAT_10001234;", True),         # unknown word: stays AND (safe direction)
]


IMG_SUB = [
    ("subscript of an image symbol as a value",
     "        wr32((uint32_t)(param_1 + 0x1d8), (COW_IMG(COW_ADDR_LIFT_10377C58))[param_2]);",
     ["rd32((uint32_t)(COW_ADDR_LIFT_10377C58 + 4u * (uint32_t)(param_2)))"],
     ["(COW_IMG(COW_ADDR_LIFT_10377C58))[param_2]"]),
    ("subscript of an image symbol as a store target",
     "    (COW_IMG(COW_ADDR_LIFT_10001234))[i] = v;",
     ["wr32((uint32_t)(COW_ADDR_LIFT_10001234 + 4u * (uint32_t)(i)), v);"],
     [")[i] ="]),
]


STROPS = [
    # (text, expected canonical form or None)
    # the two that cost 1,328 functions when the predicate matched on a prefix
    ("movsx ecx, ax", None),
    ("movsxd rax, ecx", None),
    ("movss xmm0, dword ptr [ecx]", None),
    # SSE movsd is the trap the width letter alone cannot catch: same mnemonic as the string move
    ("movsd xmm0, xmm1", None),
    ("movsd xmm1, dword ptr [esi]", None),
    # the real ones, all of which MUST still be seen (a miss ships an unmodelled loop)
    ("rep movsd dword ptr es:[edi], dword ptr [esi]", "rep movsd"),
    ("rep movsb byte ptr es:[edi], byte ptr [esi]", "rep movsb"),
    ("rep stosd dword ptr es:[edi], eax", "rep stosd"),
    ("rep stosb byte ptr es:[edi], al", "rep stosb"),
    ("repne scasb al, byte ptr es:[edi]", "repne scasb"),
    ("repe cmpsb byte ptr [esi], byte ptr es:[edi]", "repe cmpsb"),
    ("repe cmpsd", "repe cmpsd"),
    ("movsd dword ptr es:[edi], dword ptr [esi]", "movsd"),
    ("stosw word ptr es:[edi], ax", "stosw"),
    ("lodsb al, byte ptr [esi]", "lodsb"),
    ("movs dword ptr es:[edi], dword ptr [esi]", "movs"),
    # not string instructions at all
    ("cld", None),
    ("std", None),
    ("mov dword ptr [edi], eax", None),
    ("rep nop", None),
]


def _x(mnem, text, stmt):
    """One instruction in the shape gen_model.x87_shape reads (generated/all's own rendering)."""
    return {"mnem": mnem, "text": text, "stmt": stmt, "addr": 0x10000000}


def _xc(mnem, text, stmt, addr):
    c = _x(mnem, text, stmt)
    c["addr"] = addr
    return c


# (name, instructions, expected liftable, expected sub-reason)
X87 = [
    # ---- the admitted shape: push one value, work on it, store it, stack empty again
    ("fld/fstp is scratch",
     [_x("fld", "fld dword ptr [esp + 0x14]", "{ uint32_t A = (uint32_t)(esp + 0x14u); X87_PUSH(rdf32(A)); }"),
      _x("fstp", "fstp qword ptr [esp]", "{ uint32_t A = (uint32_t)(esp); wrf64(A, X87_POP()); }")],
     True, None),
    ("fld/fmul/fstp - fmul with a memory operand emits no push/pop, so it must be read at depth 1",
     [_x("fld", "fld dword ptr [0x103d3c90]", "{ uint32_t A = (uint32_t)(0x103D3C90u + RD); X87_PUSH(rdf32(A)); }"),
      _x("fmul", "fmul dword ptr [esp + 0x40]",
         "{ uint32_t A = (uint32_t)(esp + 0x40u); x87_s0 = fr_cw(x87_cw, x87_s0 * rdf32(A)); }"),
      _x("fstp", "fstp dword ptr [esp]", "{ uint32_t A = (uint32_t)(esp); wrf32(A, (float)X87_POP()); }")],
     True, None),
    ("fld/fchs/fst/fstp - fchs and a non-popping fst keep the depth",
     [_x("fld", "fld dword ptr [esi]", "{ uint32_t A = (uint32_t)(esi); X87_PUSH(rdf32(A)); }"),
      _x("fchs", "fchs", "{ x87_s0 = -x87_s0; }"),
      _x("fst", "fst dword ptr [0x1034f740]", "{ uint32_t A = (uint32_t)(0x1034F740u + RD); wrf32(A, (float)x87_s0); }"),
      _x("fstp", "fstp dword ptr [edi]", "{ uint32_t A = (uint32_t)(edi); wrf32(A, (float)X87_POP()); }")],
     True, None),
    ("two scratch sequences in one function",
     [_x("fld", "fld dword ptr [esi]", "{ uint32_t A = (uint32_t)(esi); X87_PUSH(rdf32(A)); }"),
      _x("fstp", "fstp dword ptr [edi]", "{ uint32_t A = (uint32_t)(edi); wrf32(A, (float)X87_POP()); }"),
      _x("fld", "fld dword ptr [ecx]", "{ uint32_t A = (uint32_t)(ecx); X87_PUSH(rdf32(A)); }"),
      _x("fsubr", "fsubr dword ptr [edx]",
         "{ uint32_t A = (uint32_t)(edx); x87_s0 = fr_cw(x87_cw, rdf32(A) - x87_s0); }"),
      _x("fstp", "fstp dword ptr [esi]", "{ uint32_t A = (uint32_t)(esi); wrf32(A, (float)X87_POP()); }")],
     True, None),
    ("fld1 constant push is scratch too",
     [_x("fld1", "fld1", "{ X87_PUSH(1.0); }"),
      _x("fsub", "fsub dword ptr [ebp + 0x10]",
         "{ uint32_t A = (uint32_t)(ebp + 0x10u); x87_s0 = fr_cw(x87_cw, x87_s0 - rdf32(A)); }"),
      _x("fstp", "fstp dword ptr [eax]", "{ uint32_t A = (uint32_t)(eax); wrf32(A, (float)X87_POP()); }")],
     True, None),

    # ---- each clause of the contract, refused on its own
    ("op at depth 0 reads the caller's ST(0)",
     [_x("fadd", "fadd dword ptr [esp + 0x40]",
         "{ uint32_t A = (uint32_t)(esp + 0x40u); x87_s0 = fr_cw(x87_cw, x87_s0 + rdf32(A)); }"),
      _x("fstp", "fstp dword ptr [eax]", "{ uint32_t A = (uint32_t)(eax); wrf32(A, (float)X87_POP()); }")],
     False, "op_at_wrong_depth"),
    ("two pushes is a real stack, not scratch (refused at the second push, before its st(1) is even read)",
     [_x("fld", "fld dword ptr [esi]", "{ uint32_t A = (uint32_t)(esi); X87_PUSH(rdf32(A)); }"),
      _x("fld", "fld dword ptr [edi]", "{ uint32_t A = (uint32_t)(edi); X87_PUSH(rdf32(A)); }"),
      _x("fmul", "fmul st(1)", "{ x87_s0 = fr_cw(x87_cw, x87_s0 * x87_s1); }"),
      _x("fstp", "fstp dword ptr [eax]", "{ uint32_t A = (uint32_t)(eax); wrf32(A, (float)X87_POP()); }"),
      _x("fstp", "fstp dword ptr [ebx]", "{ uint32_t A = (uint32_t)(ebx); wrf32(A, (float)X87_POP()); }")],
     False, "push_beyond_one"),
    ("one push, but it reads the CALLER's ST(1) - the depth looks legal and is not",
     [_x("fld", "fld dword ptr [esi]", "{ uint32_t A = (uint32_t)(esi); X87_PUSH(rdf32(A)); }"),
      _x("fmul", "fmul st(1)", "{ x87_s0 = fr_cw(x87_cw, x87_s0 * x87_s1); }"),
      _x("fstp", "fstp dword ptr [eax]", "{ uint32_t A = (uint32_t)(eax); wrf32(A, (float)X87_POP()); }")],
     False, "st_register_operand"),
    ("popping without pushing consumes a caller register",
     [_x("fld", "fld dword ptr [esi]", "{ uint32_t A = (uint32_t)(esi); X87_PUSH(rdf32(A)); }"),
      _x("fstp", "fstp dword ptr [edi]", "{ uint32_t A = (uint32_t)(edi); wrf32(A, (float)X87_POP()); }"),
      _x("fstp", "fstp dword ptr [ecx]", "{ uint32_t A = (uint32_t)(ecx); wrf32(A, (float)X87_POP()); }")],
     False, "pops_caller_state"),
    ("a value left on the stack changes top, which cowdiff compares",
     [_x("fld", "fld dword ptr [esi]", "{ uint32_t A = (uint32_t)(esi); X87_PUSH(rdf32(A)); }")],
     False, "leaves_value_on_stack"),
    ("a value live across a call is an argument the callee can read",
     [_x("fld", "fld dword ptr [esi]", "{ uint32_t A = (uint32_t)(esi); X87_PUSH(rdf32(A)); }"),
      _xc("call", "call 0x1028a100",
          "{ esp -= 4; wr32(esp, 0x10287281u + RD); REGS_STORE; X87_STORE; f_1028a100(g); REGS_LOAD; X87_LOAD; }",
          0x10000010),
      _x("fstp", "fstp dword ptr [edi]", "{ uint32_t A = (uint32_t)(edi); wrf32(A, (float)X87_POP()); }")],
     False, "fp_live_across_call"),
    ("a call at depth 0 does NOT block the unit - the X87_STORE in the call template is not an FP op",
     [_x("push", "push ebx", "{ { uint32_t v = ebx; esp -= 4; wr32(esp, v); } }"),
      _xc("call", "call 0x1028a100",
          "{ esp -= 4; wr32(esp, 0x10287281u + RD); REGS_STORE; X87_STORE; f_1028a100(g); REGS_LOAD; X87_LOAD; }",
          0x10000010),
      _x("fld", "fld dword ptr [esi]", "{ uint32_t A = (uint32_t)(esi); X87_PUSH(rdf32(A)); }"),
      _x("fstp", "fstp dword ptr [edi]", "{ uint32_t A = (uint32_t)(edi); wrf32(A, (float)X87_POP()); }")],
     True, None),

    # ---- ops with no proven vocabulary stay refused whatever the depth (the second slice's job)
    ("fild is an integer->double conversion: allowed form, but not in the slice",
     [_x("fild", "fild dword ptr [esp + 0x40]",
         "{ uint32_t A = (uint32_t)(esp + 0x40u); X87_PUSH((double)(int32_t)rd32(A)); }"),
      _x("fstp", "fstp qword ptr [eax]", "{ uint32_t A = (uint32_t)(eax); wrf64(A, X87_POP()); }")],
     False, "op_not_in_slice:fild"),
    ("fistp rounds per the control word where a C cast truncates",
     [_x("fld", "fld dword ptr [esi]", "{ uint32_t A = (uint32_t)(esi); X87_PUSH(rdf32(A)); }"),
      _x("fistp", "fistp dword ptr [ebp - 0x14]",
         "{ uint32_t A = (uint32_t)(ebp + 0xFFFFFFECu); wr32(A, (uint32_t)fist32_cw(x87_cw, X87_POP())); }")],
     False, "op_not_in_slice:fistp"),
    ("fcomp sets the condition codes cowdiff's fuzzer can make NaN",
     [_x("fld", "fld dword ptr [esi]", "{ uint32_t A = (uint32_t)(esi); X87_PUSH(rdf32(A)); }"),
      _x("fcomp", "fcomp dword ptr [0x103295d8]",
         "{ uint32_t A = (uint32_t)(0x103295D8u + RD); fcom(g, x87_s0, rdf32(A)); X87_POP(); }")],
     False, "op_not_in_slice:fcomp"),
    ("no divide helper exists, so fdiv stays refused rather than guessed",
     [_x("fld", "fld dword ptr [esi]", "{ uint32_t A = (uint32_t)(esi); X87_PUSH(rdf32(A)); }"),
      _x("fdiv", "fdiv dword ptr [edi]",
         "{ uint32_t A = (uint32_t)(edi); x87_s0 = fr_cw(x87_cw, x87_s0 / rdf32(A)); }"),
      _x("fstp", "fstp dword ptr [eax]", "{ uint32_t A = (uint32_t)(eax); wrf32(A, (float)X87_POP()); }")],
     False, "op_not_in_slice:fdiv"),
    ("fldcw changes the rounding of everything after it",
     [_x("fldcw", "fldcw word ptr [ebp - 0xc]",
         "{ uint32_t A = (uint32_t)(ebp + 0xFFFFFFF4u); x87_cw = rd16(A); }"),
      _x("fld", "fld dword ptr [esi]", "{ uint32_t A = (uint32_t)(esi); X87_PUSH(rdf32(A)); }"),
      _x("fstp", "fstp dword ptr [edi]", "{ uint32_t A = (uint32_t)(edi); wrf32(A, (float)X87_POP()); }")],
     False, "op_not_in_slice:fldcw"),
    ("fsqrt has no modelled form",
     [_x("fld", "fld dword ptr [esi]", "{ uint32_t A = (uint32_t)(esi); X87_PUSH(rdf32(A)); }"),
      _x("fsqrt", "fsqrt", "{ x87_s0 = fr_cw(x87_cw, sqrt(x87_s0)); }"),
      _x("fstp", "fstp dword ptr [eax]", "{ uint32_t A = (uint32_t)(eax); wrf32(A, (float)X87_POP()); }")],
     False, "op_not_in_slice:fsqrt"),
    ("fxch is a stack shuffle, which means a real stack",
     [_x("fld", "fld dword ptr [esi]", "{ uint32_t A = (uint32_t)(esi); X87_PUSH(rdf32(A)); }"),
      _x("fxch", "fxch st(1)", "{ { double t = x87_s0; x87_s0 = x87_s1; x87_s1 = t; } }"),
      _x("fstp", "fstp dword ptr [edi]", "{ uint32_t A = (uint32_t)(edi); wrf32(A, (float)X87_POP()); }")],
     False, "st_register_operand"),
    # the case that must NOT be admitted: has_x87 fired on markers with no mnemonic at all
    ("markers with no mnemonic prove nothing",
     [_x("nop", "nop", "{ X87_PUSH(0.0); X87_POP(); }")],
     False, "op_not_in_slice:nop"),
]


# gen_model.tail_jump_of: is this body a guest TAIL CALL (`jmp FUN_x`) rather than a missing return?
# ~1,300 refused units ride on this contract, and the failure mode is not a crash - it is a unit that
# returns to the wrong place. Statements are the recompiler's real renderings (verified against
# generated/all), including the one that makes a jmp a CALL-like thing: `f_<hex>(g); return;`.
def _tj(mnem, text, stmt, addr=0x10000000):
    return {"mnem": mnem, "text": text, "stmt": stmt, "addr": addr, "op": text.split(None, 1)[1]
            if " " in text else ""}


TAILJUMP = [
    # (name, instructions, expected target int or None)
    ("the census shape: a store then a tail jump",
     [_tj("mov", "mov dword ptr [ecx], 0x10336d20",
         "{ uint32_t A = (uint32_t)(ecx); wr32(A, (uint32_t)((0x10336D20u + RD))); }", 0x10199770),
      _tj("jmp", "jmp 0x10196a10", "{ { REGS_STORE; f_10196a10(g); return; } }", 0x10199776)],
     0x10196a10),
    ("a real ret in the body means this is NOT a tail-only unit, even with a jmp at the end",
     [_tj("ret", "ret", "{ rt_return(g, eax, 0u); return; }", 0x10000000),
      _tj("jmp", "jmp 0x10196a10", "{ { REGS_STORE; f_10196a10(g); return; } }", 0x10000005)],
     None),
    ("a jump to a local label is control flow, not a call",
     [_tj("test", "test eax, eax", "{ { uint32_t a = eax; zf = (a == 0u); } }", 0x10000000),
      _tj("jmp", "jmp 0x10000010", "{ goto L_10000010; }", 0x10000005)],
     None),
    ("TWO tail jumps are two exits, and the lift cannot give them one epilogue",
     [_tj("test", "test eax, eax", "{ { uint32_t a = eax; zf = (a == 0u); } }", 0x10000000),
      _tj("jmp", "jmp 0x10196a10", "{ { REGS_STORE; f_10196a10(g); return; } }", 0x10000005),
      _tj("jmp", "jmp 0x10196b20", "{ { REGS_STORE; f_10196b20(g); return; } }", 0x1000000a)],
     None),
    ("the tail jump must be the LAST instruction",
     [_tj("jmp", "jmp 0x10196a10", "{ { REGS_STORE; f_10196a10(g); return; } }", 0x10000000),
      _tj("mov", "mov ebx, eax", "{ ebx = (uint32_t)(eax); }", 0x10000005)],
     None),
    ("an indirect tail jump (jmp dword ptr [...]) is not this shape",
     [_tj("mov", "mov eax, ecx", "{ eax = (uint32_t)(ecx); }", 0x1030ff70),
      _tj("jmp", "jmp dword ptr [eax + 0x29c]",
         "{ REGS_STORE; rt_call_indirect(g, (uint32_t)(rd32((uint32_t)(eax + 0x29Cu)))); return; }",
         0x1030ff73)],
     None),
    ("a jump INTO the tail instruction is a merge the linear walk cannot see",
     [_tj("jmp", "jmp 0x1000000a", "{ goto L_1000000a; }", 0x10000000),
      _tj("jmp", "jmp 0x10196a10", "{ { REGS_STORE; f_10196a10(g); return; } }", 0x1000000a)],
     None),
    ("a normal call earlier in the body does not disqualify the tail jump at the end",
     [_tj("call", "call 0x1028a100",
         "{ esp -= 4; wr32(esp, 0x10000009u + RD); REGS_STORE; X87_STORE; f_1028a100(g); REGS_LOAD; X87_LOAD; }",
         0x10000000),
      _tj("jmp", "jmp 0x10196a10", "{ { REGS_STORE; f_10196a10(g); return; } }", 0x10000005)],
     0x10196a10),
]


# the registers-never-written rule (gen_model.registers_never_written), which is what lets a tail bridge
# pass g->reg at all: a register the body never writes IS still the one the entry arrived with.
UNWRITTEN = [
    ("a store through ecx reads ecx, it does not write it",
     [_tj("mov", "mov dword ptr [ecx], 1", "{ uint32_t A = (uint32_t)(ecx); wr32(A, 1u); }"),
      _tj("jmp", "jmp 0x10196a10", "{ { REGS_STORE; f_10196a10(g); return; } }")],
     {"ecx", "edx", "eax", "ebx", "esi", "edi", "ebp", "esp"}),
    ("a written register drops out of the legal set",
     [_tj("mov", "mov ebx, eax", "{ ebx = (uint32_t)(eax); }"),
      _tj("jmp", "jmp 0x10196a10", "{ { REGS_STORE; f_10196a10(g); return; } }")],
     {"ecx", "edx", "eax", "esi", "edi", "ebp", "esp"}),
    ("push reads its operand; it is not a write to it (eax must stay legal)",
     [_tj("push", "push eax", "{ { uint32_t v = eax; esp -= 4; wr32(esp, v); } }"),
      _tj("jmp", "jmp 0x10196a10", "{ { REGS_STORE; f_10196a10(g); return; } }")],
     {"ecx", "edx", "eax", "ebx", "esi", "edi", "ebp", "esp"}),
]


# gen_model.param_types: does the adapter read a float argument as a float? (lift.py's arg reads and the
# user function's signature both come from this, and getting it wrong multiplies the raw bits.)
PTYPES = [
    # (Ghidra C, expected {n: type})
    ("void FUN_100271f0(float *param_1,float param_2)\n{\n  *param_1 = param_2 * *param_1;\n}",
     {1: "float *", 2: "float"}),
    ("void __fastcall FUN_10002790(int param_1)\n{\n  return;\n}", {1: "int"}),
    # a pointer parameter stays an address: only the non-pointer float/double spellings change the read
    ("undefined4 FUN_10001234(int *param_1,float param_2,double param_3,char param_4)\n{\n}",
     {1: "int *", 2: "float", 3: "double", 4: "char"}),
    # a comma inside a function-pointer parameter must not split the list early: what matters is that
    # param_2 is still recognised as the SECOND parameter and still typed float. The pointer parameter's
    # own spelling is not asserted - nobody reads it - and pretending otherwise would be a test that
    # checks a string nobody depends on.
    ("void FUN_10001240(void (*param_1)(int,int),float param_2)\n{\n}",
     {2: "float"}),
    ("void FUN_10001250(void)\n{\n  return;\n}", {}),
]


# gen_model.thunk_target / follow_thunks: the join that unlocked 284 units of leftover_unbridged_call.
# Ghidra names a call to a thunk by the thunk's TARGET (thunk_FUN_10028aa0 for a guest `call 0x1002c8b0`,
# where the body of 0x1002c8b0 is one instruction `jmp 0x10028aa0`), so the exact-address site join misses.
THUNKS = [
    # (name, {addr: body_lines}, asked, expected)
    ("a one-instruction jmp is a thunk",
     {"1002c8b0": ["/* 1002c8b0: jmp 0x10028aa0 */",
                   "        { { REGS_STORE; f_10028aa0(g); return; } } }"]},
     0x1002c8b0, 0x10028aa0),
    ("a two-instruction function is NOT a thunk, however much it jumps",
     {"10071ec0": ["/* 10071ec0: push esi */", "        { { uint32_t v = esi; esp -= 4; wr32(esp, v); } }",
                   "/* 10071ec1: jmp 0x10028aa0 */",
                   "        { { REGS_STORE; f_10028aa0(g); return; } } }"]},
     0x10071ec0, 0x10071ec0),
    ("a chain of thunks is followed to the function that runs",
     {"10000010": ["/* 10000010: jmp 0x10000020 */",
                   "        { { REGS_STORE; f_10000020(g); return; } } }"],
      "10000020": ["/* 10000020: jmp 0x10000030 */",
                   "        { { REGS_STORE; f_10000030(g); return; } } }"],
      "10000030": ["/* 10000030: ret */", "        { esp += 4; REGS_STORE; return; }"]},
     0x10000010, 0x10000030),
    # a thunk cycle must terminate: without the seen-set this spins forever. Where it lands matters less
    # than that it stops, but returning the START is the safe answer, because that is what the site's own
    # address is - so a cyclic thunk degrades to "no resolution happened" and the unit is refused the way
    # it was before this join existed, rather than being bridged to some address down the loop.
    ("a thunk cycle terminates, at the start address, instead of spinning",
     {"10000040": ["/* 10000040: jmp 0x10000050 */",
                   "        { { REGS_STORE; f_10000050(g); return; } } }"],
      "10000050": ["/* 10000050: jmp 0x10000040 */",
                   "        { { REGS_STORE; f_10000040(g); return; } } }"]},
     0x10000040, 0x10000040),
    ("a jmp that is not the recompiler's call rendering is not a thunk",
     {"10000060": ["/* 10000060: jmp 0x10000070 */", "        { goto L_10000070; }"]},
     0x10000060, 0x10000060),
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

        def bridge_indirect(name, args, _seen=seen):
            _seen["indirect"] = (name, args)
            if name == "param_4":
                return ("cow_bridge_indirect(g, g->ebx, COW_IMG(COW_ADDR_LIFT_1000108E), 2u,"
                        " (const CowU32[]){ %s, %s }, g->ecx, g->edx, g->eax, 8u)" % tuple(args[:2]))
            return None

        rw = ghidra_c.Rewriter(layout, bridge=bridge, bridge_indirect=bridge_indirect)
        out = rw.rewrite(body, sig)
        problems = list(rw.problems) + ghidra_c.leftover_problems(out)
        bad = []
        for s in must:
            if s not in out:
                bad.append("MISSING %r" % s)
        for s in must_not:
            if s in out:
                bad.append("PRESENT %r" % s)
        # Name-sniffing with the WRONG separator meant this assertion could never fire - the cases are named
        # with dashes, the check tested an underscore prefix, and a refusal case whose expected problem is
        # silently not checked is a case that always passes. Hyphens and underscores are folded together so
        # the two cannot drift apart again.
        key = name.replace("-", "_")
        wants_escape = ("local_address_escape" in key or "stack_local" in key
                        or key.startswith("address_of_a_c_local"))
        if wants_escape and not any("local_address_escapes" in p for p in problems):
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
    # ---- the adapter's prefix replay (gen_model.prefix_replay), in the same gate for the same reason:
    # a prefix that replays something it does not understand is a unit that computes the wrong thing and
    # compiles, so the refusals here matter more than the acceptances.
    import gen_model
    PREFIX = [
        ("replay: register copy", "mov", "edi,esi",
         "    {\n        edi = (uint32_t)(esi);\n    }", "edi", ["g->edi = (uint32_t)(g->esi);"]),
        ("replay: dword load", "mov", "eax,dwordptr[ecx]",
         "    {\n        uint32_t A = (uint32_t)(ecx);\n        eax = (uint32_t)(rd32(A));\n    }",
         "eax", ["rd32"]),
        ("replay: image constant becomes a macro", "mov", "ebp,[0x10329310]",
         "    {\n        uint32_t A = (uint32_t)(0x10329310u + RD);\n        ebp = (uint32_t)(rd32(A));\n    }",
         "ebp", ["COW_IMG(COW_ADDR_LIFT_10329310)"]),
        ("replay: arithmetic keeps its value, drops its flags", "add", "esi,ebp",
         "    {\n        {\n        uint32_t a = esi; uint32_t b = (uint32_t)ebp;\n"
         "        uint32_t r = (uint32_t)(a + b);\n        cf = 0;\n        pf = PARITY(r);\n"
         "        esi = (uint32_t)(r);\n        }\n    }", "esi", ["g->esi = (uint32_t)(r);"]),
        ("replay: shift keeps its if (c)", "shr", "eax,0x1f",
         "    {\n        {\n        unsigned c = (unsigned)(0x1Fu) & 31u;\n"
         "        if (c) { uint32_t a = eax; uint32_t r;\n        r = (uint32_t)((uint32_t)a >> c);\n"
         "        cf = 0;\n        eax = (uint32_t)(r); } }\n    }", "eax", ["if (c)"]),
        ("refuse: reads a flag it did not keep", "mov", "eax,ecx",
         "    {\n        eax = (uint32_t)(zf);\n    }", None, []),
        ("refuse: an unknown helper call", "mov", "eax,ecx",
         "    {\n        eax = (uint32_t)(rt_read32(ecx));\n    }", None, []),
        ("refuse: two registers written", "mov", "eax,ecx",
         "    {\n        eax = (uint32_t)(ecx);\n        edx = (uint32_t)(1u);\n    }", None, []),
        ("refuse: it stores to memory", "mov", "dwordptr[ecx],eax",
         "    {\n        uint32_t A = (uint32_t)(ecx);\n        wr32(A, eax);\n    }", None, []),
        ("refuse: x87", "fld", "qwordptr[esi]",
         "    {\n        uint32_t A = (uint32_t)(esi);\n        fld64(A);\n    }", None, []),
        ("refuse: a mnemonic outside the whitelist", "syscall", "",
         "    {\n        eax = (uint32_t)(0x2Du);\n    }", None, []),
    ]
    pbad = 0
    for name, mnem, op, stmt, want_reg, must in PREFIX:
        got = gen_model.prefix_replay(mnem, op, stmt, {})
        ok = (isinstance(got, dict) and got.get("reg") == want_reg) if want_reg else (got is None)
        if ok and want_reg:
            for s in must:
                if s not in got["stmt"]:
                    ok = False
                    name += " (missing %r)" % s
        pbad += 0 if ok else 1
        if verbose or not ok:
            print(("FAIL  " if not ok else "ok    ") + name)
            if got:
                print("      stmt: %s" % got["stmt"][:120])
    # ---- the return pass: every return must keep its OWN expression
    rbad = 0
    for name, src, must, must_not in RETURNS:
        got = liftmod.return_values(src)
        bad = []
        for needle in must:
            if needle not in got:
                bad.append("MISSING %r" % needle)
        for needle in must_not:
            if needle in got:
                bad.append("PRESENT %r" % needle)
        exprs = re.findall(r"g->eax = \(CowU32\)\((.*?)\); return;", got)
        if len(exprs) > 1 and len(set(exprs)) == 1:
            bad.append("every return collapsed onto the first expression")
        rbad += 1 if bad else 0
        if verbose or bad:
            print(("FAIL  " if bad else "ok    ") + "returns: " + name)
            print("      out: %s" % got.replace("\n", "\n      "))
            for b in bad:
                print("      ** %s" % b)

    # ---- incoming-register detection
    abad = 0
    for name, regs, ins_rows, want in ARGS:
        ins = [{"addr": 0x10000000 + 4 * i, "mnem": mn, "op": op, "opsp": op, "stmt": st}
               for i, (mn, op, st) in enumerate(ins_rows)]
        for reg in regs:
            got = gen_model._reads_before_write(ins, reg)
            ok = got == want
            abad += 0 if ok else 1
            if verbose or not ok:
                print(("FAIL  " if not ok else "ok    ") + "args: " + name)
                print("      _reads_before_write(%s) = %s, wanted %s" % (reg, got, want))

    # ---- pushed-argument order
    obad = 0
    for row in PUSHORDER:
        name, rows, want_pushed = row[0], row[1], row[2]
        want_values = row[3] if len(row) > 3 else ["g->ecx", "g->eax", "0u"]
        body = []
        for i, (mn, op, stmt) in enumerate(rows):
            body.append("    /* %x: %s %s */" % (0x10000000 + 4 * i, mn, op))
            body.append("    {")
            body.extend("        " + l for l in stmt.split("\n"))
            body.append("    }")
        m = gen_model.model_generated(body)
        sites = (m or {}).get("call_sites") or []
        got = sites[0]["pushed"] if sites else None
        ok = got == want_pushed
        # and the values the bridge will push, in the same order
        if ok and sites:
            got_values = sites[0].get("push_values")
            if want_values == "UNSTABLE":
                ok = got_values is None
            else:
                ok = got_values == want_values
        obad += 0 if ok else 1
        if verbose or not ok:
            print(("FAIL  " if not ok else "ok    ") + "pushorder: " + name)
            print("      pushed: %s   values: %s   (wanted %s)"
                  % (got, sites[0].get("push_values") if sites else None, want_values))

    # ---- the effect-free tail
    tbad = 0
    for name, rows, want in TAIL:
        body = []
        for i, (mn, op, stmt) in enumerate(rows):
            body.append("    /* %x: %s %s */" % (0x10000000 + 4 * i, mn, op))
            body.append("    {")
            body.extend("        " + l for l in stmt.split("\n"))
            body.append("    }")
        ins = gen_model.parse_instructions(body)
        ops = gen_model.prologue_ops(ins, None, {})
        got = gen_model.tail_reg_writes(ins, ops, [])
        ok = got == want
        tbad += 0 if ok else 1
        if verbose or not ok:
            print(("FAIL  " if not ok else "ok    ") + "tail: " + name)
            print("      got %s  wanted %s" % (got, want))

    # ---- partial-register widths (lift.apply_partial_widths)
    wbad = 0
    for name, seq, text, must, must_not, refuse in WIDTHS:
        out, why = liftmod.apply_partial_widths(text, seq)
        bad = []
        if bool(why) != refuse:
            bad.append("refusal=%r (wanted %s) why=%s" % (bool(why), refuse, why))
        for s in must:
            if s not in out:
                bad.append("MISSING %r" % s)
        for s in must_not:
            if s in out:
                bad.append("PRESENT %r" % s)
        if refuse and out != text:
            bad.append("rewrote the body while refusing")
        wbad += 0 if not bad else 1
        if verbose or bad:
            print(("FAIL  " if bad else "ok    ") + "width: " + name)
            for b in bad:
                print("      " + b)
            print("      got %r" % out.strip())

    # is a '&' an AND or an address-of? (ghidra_c._before_is_operand)
    abad2 = 0
    for text, want in AMP:
        got = ghidra_c._before_is_operand(text, text.index("&"))
        ok = got == want
        abad2 += 0 if ok else 1
        if verbose or not ok:
            print(("FAIL  " if not ok else "ok    ") + "amp: %r -> %s (wanted %s)" % (text, got, want))

    # subscripted image symbols (Rewriter._image_subscripts)
    ibad = 0
    for name, src, must, must_not in IMG_SUB:
        got = ghidra_c.Rewriter({})._image_subscripts(src)
        bad = [s for s in must if s not in got] + [s for s in must_not if s in got]
        ibad += 0 if not bad else 1
        if verbose or bad:
            print(("FAIL  " if bad else "ok    ") + "imgsub: " + name)
            for b in bad:
                print("      " + b)
            print("      got %r" % got.strip())

    # which instructions are really string operations (gen_model.string_op_of)
    sbad = 0
    for text, want in STROPS:
        got = gen_model.string_op_of({"text": text, "mnem": text.split()[0] if text.split() else ""})
        ok = got == want
        sbad += 0 if ok else 1
        if verbose or not ok:
            print(("FAIL  " if not ok else "ok    ") + "strops: %r -> %r (wanted %r)" % (text, got, want))

    # may this x87 unit be lifted from Ghidra's float arithmetic at all? (gen_model.x87_shape)
    # Each case is the generated body's own instruction list: (mnemonic, disassembly text, statement).
    # The statements are copied from what the recompiler really emits (verified against generated/all),
    # because the depth tracking reads X87_PUSH/X87_POP - and note that fadd/fchs/fabs with a MEMORY
    # operand emit neither, so an op has to be checked against the depth it happens AT, not its delta.
    xbad = 0
    for name, ins, want_liftable, want_why in X87:
        got = gen_model.x87_shape(ins, [i for i in ins if i["mnem"] == "call"])
        ok = got.get("liftable") == want_liftable and (
            want_why is None or got.get("why") == want_why)
        xbad += 0 if ok else 1
        if verbose or not ok:
            print(("FAIL  " if not ok else "ok    ") + "x87: %s -> liftable=%s why=%s "
                  "(wanted liftable=%s why=%s)"
                  % (name, got.get("liftable"), got.get("why"), want_liftable, want_why))

    # is this body a guest TAIL CALL? (gen_model.tail_jump_of) - ~1,300 units ride on this contract
    tb = 0
    for name, ins, want_target in TAILJUMP:
        got = gen_model.tail_jump_of(ins)
        have = got["target"] if got else None
        ok = have == want_target
        tb += 0 if ok else 1
        if verbose or not ok:
            print(("FAIL  " if not ok else "ok    ") + "tail: %s -> %s (wanted %s)"
                  % (name, hex(have) if have is not None else None,
                     hex(want_target) if want_target is not None else None))

    ubad = 0
    for name, ins, want in UNWRITTEN:
        got = gen_model.registers_never_written(ins)
        ok = got == want
        ubad += 0 if ok else 1
        if verbose or not ok:
            print(("FAIL  " if not ok else "ok    ") + "unwritten: %s -> %s (wanted %s)"
                  % (name, sorted(got), sorted(want)))

    # does the adapter know a float argument is a float? (gen_model.param_types) - a wrong answer here
    # multiplies the float's raw bits, which is the 0x100271f0 bug
    ptbad = 0
    for c, want in PTYPES:
        got = gen_model.param_types(c)
        ok = all(got.get(k) == v for k, v in want.items())
        ptbad += 0 if ok else 1
        if verbose or not ok:
            print(("FAIL  " if not ok else "ok    ") + "ptypes: %s -> %s (wanted %s)"
                  % (c.split("\n")[0][:56], got, want))

    # the thunk join (gen_model.thunk_target / follow_thunks) - 284 units ride on it
    thbad = 0
    for name, bodies, asked, want in THUNKS:
        got = gen_model.follow_thunks(asked, bodies)
        ok = got == want
        thbad += 0 if ok else 1
        if verbose or not ok:
            print(("FAIL  " if not ok else "ok    ") + "thunk: %s -> %s (wanted %s)"
                  % (name, hex(got) if got is not None else None, hex(want)))

    total = (len(CASES) + len(PREFIX) + len(RETURNS) + len(ARGS) + len(PUSHORDER) + len(TAIL)
             + len(WIDTHS) + len(AMP) + len(IMG_SUB) + len(STROPS) + len(X87) + len(UNWRITTEN)
             + len(TAILJUMP) + len(PTYPES) + len(THUNKS))
    failed = (len(failures) + pbad + rbad + abad + obad + tbad + wbad + abad2 + ibad + sbad + xbad
              + tb + ubad + ptbad + thbad)
    print("\n%d/%d cases pass" % (total - failed, total))
    return 1 if failed else 0


if __name__ == "__main__":
    sys.exit(run("-v" in sys.argv or "--verbose" in sys.argv))
