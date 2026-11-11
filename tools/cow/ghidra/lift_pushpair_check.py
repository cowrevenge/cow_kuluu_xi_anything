"""lift_pushpair_check.py - a multi-register save must pair, not silently vanish.

This is the SECOND defect, found while fixing the first. `gen_model` line 133 says it plainly:

    "The EPILOGUE is the authority on the PROLOGUE - a function that pops esi, ebx, edi at the
     end pushed esi, ebx, edi at the start in that order"

But epilogue_pop_run returns the pops in BODY-POP order (its final `reversed()`), which is the
reverse of push order. Two consumers need the two different orders:

    prologue pairing (model_generated)      wants PUSH order - it matches `push R` against want[0]
                                            walking the body from the top
    tail-run matching (intra_tail_jumps)    wants BODY-POP order - it compares a contiguous run of
                                            pops sitting above a tail jmp

One return value cannot serve both, and the prologue is the one losing: for `push esi; push ebx`
the pops run is `ebx, esi`, so want[0] is 'ebx' while the first push is 'esi'. The pairing never
starts, `pushes` comes back EMPTY, and the lift drops the save/restore of BOTH registers - losing
the register value and the two stack slots. A single saved register is unaffected (reversing a
one-element list is a no-op), which is why this stayed hidden behind the `add esp, N` bug that
lift_saved_regs_check.py covers.

Fix belongs at the prologue site (`want = list(reversed(pops))`), NOT inside epilogue_pop_run -
flipping the function would break the tail matcher instead.

Run:  python tools/cow/ghidra/lift_pushpair_check.py [-v]
"""
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")

import gen_model


def body(pairs):
    """Generated-source shape: one `/* addr: mnem op */` comment plus its statement line."""
    out = []
    for addr, mnem, op, stmt in pairs:
        out.append("    /* %s: %s%s */" % (addr, mnem, (" " + op) if op else ""))
        out.append("    { %s }" % stmt)
    return out


ONE = body([
    ("10000010", "push", "esi", "esp -= 4; wr32(esp, esi);"),
    ("10000011", "mov", "esi, ecx", "esi = (uint32_t)(ecx);"),
    ("10000013", "pop", "esi", "uint32_t v = rd32(esp); esp += 4; esi = (uint32_t)(v);"),
    ("10000016", "ret", "", "esp += 4; REGS_STORE; return;"),
])

TWO = body([
    ("10000020", "push", "esi", "esp -= 4; wr32(esp, esi);"),
    ("10000021", "push", "ebx", "esp -= 4; wr32(esp, ebx);"),
    ("10000022", "mov", "esi, ecx", "esi = (uint32_t)(ecx);"),
    ("10000024", "pop", "ebx", "uint32_t v = rd32(esp); esp += 4; ebx = (uint32_t)(v);"),
    ("10000027", "pop", "esi", "uint32_t v = rd32(esp); esp += 4; esi = (uint32_t)(v);"),
    ("1000002a", "ret", "", "esp += 4; REGS_STORE; return;"),
])

TWO_CLEAN = body([
    ("10000030", "push", "esi", "esp -= 4; wr32(esp, esi);"),
    ("10000031", "push", "ebx", "esp -= 4; wr32(esp, ebx);"),
    ("10000032", "mov", "esi, ecx", "esi = (uint32_t)(ecx);"),
    ("10000034", "pop", "ebx", "uint32_t v = rd32(esp); esp += 4; ebx = (uint32_t)(v);"),
    ("10000037", "pop", "esi", "uint32_t v = rd32(esp); esp += 4; esi = (uint32_t)(v);"),
    ("1000003a", "add", "esp, 0x10", "esp += 0x10;"),
    ("1000003d", "ret", "", "esp += 4; REGS_STORE; return;"),
])

CASES = [
    # name, body, expected pushes. Single register: works today (control). Two: the defect.
    ("CONTROL one saved register pairs (1-element reversal is a no-op)", ONE, ["esi"]),
    ("TWO saved registers pair: push esi; push ebx -> pushes [esi, ebx]", TWO, ["esi", "ebx"]),
    ("TWO saved registers across a locals cleanup -> pushes [esi, ebx]", TWO_CLEAN, ["esi", "ebx"]),
]


def main():
    verbose = "-v" in sys.argv
    failed = []
    for name, lines, want in CASES:
        m = gen_model.model_generated(lines)
        if not m.get("ins"):
            # A fixture that does not parse makes every assertion below vacuous. Say so loudly
            # instead of reporting a clean run.
            failed.append("%s\n      FIXTURE PARSED NOTHING - the test proves nothing" % name)
            continue
        got = list(m.get("pushes") or [])
        ok = got == list(want)
        if not ok:
            failed.append("%s\n      expected pushes %s   got %s   (pushes_unmatched=%s)"
                          % (name, want, got, m.get("pushes_unmatched")))
        elif verbose:
            print("ok    %s" % name)

    print()
    print("%d/%d cases pass" % (len(CASES) - len(failed), len(CASES)))
    if failed:
        for f in failed:
            print("FAIL  %s" % f)
        print("\nVERDICT: FAIL - a function whose epilogue pops two saved registers must have both")
        print("         of its prologue pushes recognised. Today the pairing starts on the wrong")
        print("         register, matches nothing, and the lift silently drops both saves and both")
        print("         stack slots. Fix at the prologue site (want = reversed(pops)); do NOT flip")
        print("         epilogue_pop_run - the tail-run matcher needs body-pop order.")
        return 1
    print("VERDICT: pass - multi-register saves pair, single-register ones still do.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
