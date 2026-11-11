"""lift_epilogue_pairing_spec.py - the contract the structural epilogue fix must satisfy.

Where this came from. b34fb597 fixed one interleaving inside the epilogue (a constant `add esp, N`
between the restored registers and the return). Shape-clustering the remaining 168 clobber candidates
(cow/wip/open-clobbers-shapes.md) showed the same failure mode with OTHER interleaved instructions -
`mov`, `xor`, `sbb` - so the general defect is that **the epilogue is matched by contiguity while the
prologue is matched by pairing**.

This file does not fix anything. It states, per observed shape, what `epilogue_pop_run` must return,
so that a fix is measured against evidence instead of against whatever the author expected. Cases are
taken from real units; the expectations are derived from the guest's own instruction sequence.

The safety property that makes a generalised fix acceptable at all (and which the negative controls
below pin down):

    Tolerating an interleaved instruction is only allowed when the resulting pops CLOSE against the
    body's leading pushes - every pop matched by a push, in LIFO order. `mov`/`xor`/`sbb` can be
    arbitrary code, so they may only be stepped over when closure proves the answer cannot have come
    from the middle of the function. If closure fails, the strict walk stands.

Run:  python tools/cow/ghidra/lift_epilogue_pairing_spec.py [-v]
Expect TODAY: the positive shapes fail (that is the open defect), the controls pass.
"""
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")

import gen_model


def I(mnem, op="", stmt=""):
    return {"mnem": mnem, "op": op, "stmt": stmt}


def P(mnem, op, stmt=""):
    """An instruction that touches no memory - an interleaving that closure may step over."""
    return I(mnem, op, stmt or ("%s = %s;" % (op.split(",")[0], op.split(",")[1] if "," in op else "0")))


RET = I("ret", "", "esp += 4; REGS_STORE; return;")
PUSH = lambda r: I("push", r, "esp -= 4; wr32(esp, %s);" % r)
POP = lambda r: I("pop", r, "uint32_t v = rd32(esp); esp += 4; %s = (uint32_t)(v);" % r)
ADD_ESP = lambda n: I("add", "esp,%s" % n, "esp += %s;" % n)

POSITIVE = [
    # ---- shipped in b34fb597: must keep working (regression guard for the first fix)
    ("cleanup:  pop esi ; add esp,0x20 ; ret            -> [esi]",
     [PUSH("esi"), P("mov", "esi,ecx"), POP("esi"), ADD_ESP("0x20"), RET], ["esi"]),

    # The fixtures below are LIFO-realistic: pushes esi,edi are restored as pop edi,pop esi. An
    # earlier draft wrote the pops in push order, which no ret-following epilogue does - it would
    # have failed a correct closure check and passed a wrong one.
    ("interleaved mov between pops:  pop edi ; mov ; pop esi ; ret   -> [edi, esi]",
     [PUSH("esi"), PUSH("edi"), P("mov", "edi,ecx"), POP("edi"), P("mov", "eax,ebx"), POP("esi"), RET],
     ["edi", "esi"]),

    # ---- xor interleaving (6 + 3 units)
    ("interleaved xor between pops:  pop edi ; xor ; pop esi ; ret   -> [edi, esi]",
     [PUSH("esi"), PUSH("edi"), POP("edi"), P("xor", "eax,eax"), POP("esi"), RET], ["edi", "esi"]),

    # ---- multiple interleavings inside one epilogue
    ("two interleavings: pop ebx ; mov ; pop edi ; xor ; pop esi ; ret -> [ebx, edi, esi]",
     [PUSH("esi"), PUSH("edi"), PUSH("ebx"), POP("ebx"), P("mov", "eax,edx"), POP("edi"),
      P("xor", "ecx,ecx"), POP("esi"), RET], ["ebx", "edi", "esi"]),
]

NEGATIVE = [
    # NOTE on these expectations: the walk legitimately returns the pop that IS contiguous with the
    # ret. What must NOT happen is widening past a non-benign instruction to reach an earlier pop.
    # So each control asserts the walk stops at the boundary - the guard is "exactly the tail run",
    # not "nothing at all". (An earlier draft expected [] and was simply wrong: it tested the wrong
    # property and would have failed a correct implementation.)
    ("CONTROL: pop esi ; mov [eax],ebx ; pop edi ; ret  -> [edi]  (stops at the memory write)",
     [POP("esi"), I("mov", "[eax],ebx", "wr32(eax, ebx);"), POP("edi"), RET], ["edi"]),

    # A call cannot be stepped over either.
    ("CONTROL: pop esi ; call 0x10001000 ; pop edi ; ret -> [edi]  (stops at the call)",
     [POP("esi"), I("call", "0x10001000", "rt_call_indirect(g, 0x10001000u);"), POP("edi"), RET],
     ["edi"]),

    # THE CLOSURE GUARD, the important one: the pops cannot close against any leading pushes, so a
    # benign interleaving must NOT be stepped over. Correct answer is the strict tail run only.
    ("CONTROL: no leading pushes - pop esi ; mov ; pop edi ; ret -> [edi]  (closure fails)",
     [P("mov", "eax,ecx"), POP("esi"), P("mov", "edx,ebx"), POP("edi"), RET], ["edi"]),

    # Partial closure: only one pop has a matching push, so the other must not be collected.
    ("CONTROL: one push, two pops - pop esi ; mov ; pop edi ; ret -> [edi]  (partial closure)",
     [PUSH("esi"), P("mov", "eax,ecx"), POP("esi"), P("mov", "edx,ebx"), POP("edi"), RET], ["edi"]),
]


def run(cases, kind):
    fails = []
    for name, ins, want in cases:
        try:
            got = list(gen_model.epilogue_pop_run([dict(c) for c in ins]))
        except Exception as exc:
            fails.append("%s\n      raised %r" % (name, exc))
            continue
        if got != list(want):
            fails.append("%s\n      expected %-22s got %s" % (name, want, got))
        elif "-v" in sys.argv:
            print("ok    %s" % name)
    return fails


def main():
    print("epilogue pairing contract  (knob COW_MODEL_EPILOGUE_LIFO=%s)"
          % ("on" if os.environ.get("COW_MODEL_EPILOGUE_LIFO") else "off"))
    print()
    pos_fails = run(POSITIVE, "positive")
    neg_fails = run(NEGATIVE, "negative")

    print()
    print("positive (the open defect):      %d/%d pass" % (len(POSITIVE) - len(pos_fails), len(POSITIVE)))
    print("negative (must never widen):     %d/%d pass" % (len(NEGATIVE) - len(neg_fails), len(NEGATIVE)))
    for f in pos_fails + neg_fails:
        print("FAIL  %s" % f)
    print()
    if neg_fails:
        print("VERDICT: FAIL - a control broke. A fix that widens the walk past a memory write, a call,")
        print("         or a set of pops that cannot close against leading pushes is UNSAFE, not")
        print("         merely incomplete. Do not ship it.")
        return 2
    if pos_fails:
        print("VERDICT: known-open. The controls all hold and %d positive shape(s) still fail - that is"
              % len(pos_fails))
        print("         the open defect described in cow/wip/open-clobbers-shapes.md, not a regression.")
        print("         A fix is done when this prints pass with COW_MODEL_EPILOGUE_LIFO=1 and the")
        print("         controls stay green, and is SHIPPABLE only after a measured re-lift sample.")
        return 1
    print("VERDICT: PASS - benign interleavings are stepped over when the pops close against the")
    print("         leading pushes, and the walk still stops at memory writes, calls, and pops that")
    print("         cannot be accounted for. Measurement on a re-lifted sample is still required.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
