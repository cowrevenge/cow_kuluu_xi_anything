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
    for name, rows, want_pushed in PUSHORDER:
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
            ok = sites[0].get("push_values") == ["g->ecx", "g->eax", "0u"]
        obad += 0 if ok else 1
        if verbose or not ok:
            print(("FAIL  " if not ok else "ok    ") + "pushorder: " + name)
            print("      pushed: %s   values: %s"
                  % (got, sites[0].get("push_values") if sites else None))

    total = len(CASES) + len(PREFIX) + len(RETURNS) + len(ARGS) + len(PUSHORDER)
    failed = len(failures) + pbad + rbad + abad + obad
    print("\n%d/%d cases pass" % (total - failed, total))
    return 1 if failed else 0


if __name__ == "__main__":
    sys.exit(run("-v" in sys.argv or "--verbose" in sys.argv))
