"""Does the folded-callee translation produce the address the GUEST jumped to?

Everything else in this family is a guess until this is checked. The rule says the outermost `*` of
`(**(code **)(X))()` is the CALL IDIOM and not a memory read; if that is wrong by one the lift jumps
through one pointer too many - a wrong address on a call, which is the failure mode in this family that can
still look healthy to cowdiff. So translate the canonical spellings and pin both the expression and the
READ COUNT against what the generated body says the guest did:

    call dword ptr [eax + 0x24]   with   mov eax, [param_1]
        ->  rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x24u)))   reads=2

The refusals are the point as much as the acceptances: a callee reading a Ghidra LOCAL is the frame-aliasing
model's business (the string family's wall too), a chained load is not the canonical form, and an
untranslatable callee must fall through to `leftover_problems` naming the host call rather than shipping it.

Read-only.

    python tools/cow/ghidra/lift_folded_check.py
"""
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)

import ghidra_c   # noqa: E402

CASES = [
    # (Ghidra's callee text, expected C target, expected guest reads, note)
    ("**(code **)(*param_1 + 0x24)",
     "rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x24u)))", 2,
     "the canonical vtable call: vtable from param_1, then the slot at +0x24"),
    ("**(code **)(*param_1 + 8)",
     "rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x8u)))", 2,
     "same shape, small displacement (and the displacement must survive as hex, not become a bare `u`)"),
    ("**(code **)(*param_1)",
     "rd32((uint32_t)(rd32((uint32_t)(param_1))))", 2,
     "no displacement at all"),
    ("**(code **)(COW_IMG(COW_ADDR_LIFT_10456E90) + 0x18)",
     "rd32((uint32_t)((COW_IMG(COW_ADDR_LIFT_10456E90) + 0x18u)))", 1,
     "a vtable held in a GLOBAL: the base is an address, not a load, so ONE read - not two"),
    ("*param_2", None, 0,
     "not this form: `(*param_2)(...)` is the static shape ghidra_c._calls already bridges"),
    ("**(code **)(piVar2 + 0x3c)", None, 0,
     "reads a Ghidra LOCAL -> refused (frame-aliasing model, shared with the string family)"),
    ("**(code **)(*local_4 + 8)", None, 0,
     "reads a stack local -> refused, same wall"),
    ("**(code **)(*(int **)(param_1 + 4) + 0x1c)", None, 0,
     "a chained load -> refused: not the canonical form, and guessing it is guessing an address"),
    ("*DAT_10456550", None, 0,
     "an image global as a callee: the walk names those already, via target_desc abs"),
    ("(**(code **)(*param_1 + 0x24))(param_1)", None, 0,
     "the call arguments must never reach here - only the callee text does"),
    ("**(code **)(*param_1 + 0x24", None, 0,
     "unbalanced parens -> no"),
]


def main():
    bad = 0
    for text, want, want_reads, note in CASES:
        got = ghidra_c.Rewriter._callee_read(text)
        if want is None:
            ok = got is None
            have = "<refused>" if got is None else "%s  reads=%d" % got
        else:
            ok = got is not None and got[0] == want and got[1] == want_reads
            have = "<none>" if got is None else "%s  reads=%d" % got
        print("%s  %s" % ("ok  " if ok else "FAIL", text[:56]))
        if not ok:
            bad += 1
            print("      note : %s" % note)
            print("      want : %s" % ("<refused>" if want is None
                                       else "%s  reads=%d" % (want, want_reads)))
            print("      have : %s" % have)
    print("\n%d/%d agree with the guest instruction" % (len(CASES) - bad, len(CASES)))
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
