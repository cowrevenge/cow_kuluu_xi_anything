"""lift_saved_regs_check.py - an `add esp, N` locals cleanup must be transparent to saved-register detection.

Found 2026-11-11 while explaining the 136-unit state-0 cluster. The guest (0x1015e910):

    1015e917: push esi        ; save callee-saved
    1015e918: mov esi, ecx    ; use it as scratch
    ...
    1015e941: pop esi         ; restore
    1015e942: add esp, 0x20   ; locals cleanup
    1015e945: ret 4           ; single return

Textbook save/restore. But gen_model.epilogue_pop_run walked the body BACKWARDS and `break`ed on
anything that was not ret/leave/pop-saved, so `add esp, 0x20` stopped the walk before `pop esi` was
ever seen. With no pops reported, the prologue matcher had nothing to pair its `push esi` against,
and the lift dropped BOTH halves of the save/restore: the caller got back a clobbered esi, and no
slot had been reserved for the push - so our esp sat 4 above the guest's and every compared stack
word below the frame was misaligned. That is the shape of the cluster signature (a code address in a
stack slot where the guest holds zero), and `pop <saved>; add esp, N; ret` is the ordinary MSVC
idiom, so it was never one unit's problem.

TWO KINDS OF ASSERTION, on purpose:
  * literal expectations, for cases where register ordering cannot be ambiguous (one register, or
    the empty result) - these catch "the walk stopped too early";
  * the equality PROPERTY, comparing a body against the same body with its cleanup removed - this
    catches the bug without encoding a guess about ordering.

Why the property rather than a list for multi-register cases: epilogue_pop_run's docstring says it
returns "push order" while it actually returns POP ORDER. For one saved register the two coincide;
for two or more they differ, and the prologue matcher pairs `push R` against want[0] - so a
pop-order list cannot match a push-order prologue. That looks like a SECOND, separate defect (the
population shows ~320 units that save a register in the guest without restoring it in the lift,
which fits). It is deliberately NOT asserted here, because a test that pins my guess about a
contested convention would either be wrong or would freeze the wrong behaviour. Settle it by
measurement.

Run:  python tools/cow/ghidra/lift_saved_regs_check.py [-v]
Exit non-zero on any failure. Positive and negative controls are both required, because a checker
whose every assertion can only fail is indistinguishable from a working one.
"""
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")

import gen_model


def I(mnem, op="", stmt=""):
    return {"mnem": mnem, "op": op, "stmt": stmt}


RET = I("ret", "", "esp += 4; REGS_STORE; return;")
RET4 = I("ret", "4", "esp += 8; REGS_STORE; return;")
CLEAN = lambda n: I("add", "esp,%s" % n, "esp += %s;" % n)

# (name, instructions, expected-or-None)
CASES = [
    # ---- the bug: a locals cleanup between the pops and the ret
    ("0x1015e910's epilogue: pop esi; add esp,0x20; ret 4  -> [esi]",
     [I("push", "esi"), I("mov", "esi,ecx"), I("pop", "esi"), CLEAN("0x20"), RET4], ["esi"]),

    # ---- positive control: same pop, no cleanup. Worked before the fix; proves the harness can
    #      see a pass, and that the fix is not simply "return something".
    ("CONTROL: pop esi; ret 4  -> [esi]",
     [I("push", "esi"), I("mov", "esi,ecx"), I("pop", "esi"), RET4], ["esi"]),

    # ---- two saved registers: ordering is contested, so assert only the property (expect None)
    ("two saved registers across a cleanup (property only; ordering left open)",
     [I("push", "esi"), I("push", "ebx"), I("pop", "ebx"), I("pop", "esi"), CLEAN("0x18"), RET],
     None),

    # ---- positive control: leave is already a skipper by design
    ("CONTROL: pop esi; leave; ret  -> [esi]",
     [I("push", "esi"), I("pop", "esi"), I("leave"), RET], ["esi"]),

    # ---- NEGATIVE controls: the fix must not become "skip everything".
    ("CONTROL: pop esi; call 0x10001000; ret  -> []  (a call is not a skipper)",
     [I("pop", "esi"), I("call", "0x10001000", "rt_call_indirect(g, 0x10001000u);"), RET], []),

    ("CONTROL: pop esi; add eax,4; ret  -> []  (only `add esp,<const>` is cleanup)",
     [I("pop", "esi"), I("add", "eax,0x4", "eax += 4;"), RET], []),

    ("CONTROL: pop esi; mov eax,ebx; ret  -> []  (a register move is not cleanup)",
     [I("pop", "esi"), I("mov", "eax,ebx", "eax = ebx;"), RET], []),
]


def strip_cleanup(ins):
    return [c for c in ins if not (c["mnem"] == "add" and (c["op"] or "").startswith("esp,"))]


def main():
    verbose = "-v" in sys.argv
    failures = []
    n_prop = 0

    for name, ins, want in CASES:
        try:
            got = list(gen_model.epilogue_pop_run([dict(c) for c in ins]))
        except Exception as exc:
            failures.append("%s\n      raised %r" % (name, exc))
            continue

        if want is not None and got != list(want):
            failures.append("%s\n      expected %s   got %s" % (name, want, got))
        elif verbose:
            print("ok    %s   -> %s" % (name, got))

        if strip_cleanup(ins) != ins:            # this case contains a cleanup: check the property
            n_prop += 1
            twin = list(gen_model.epilogue_pop_run([dict(c) for c in strip_cleanup(ins)]))
            if got != twin:
                failures.append("%s\n      cleanup changed the answer: with %s, without %s"
                                % (name, got, twin))

    print()
    print("%d cases checked (%d with the cleanup-transparency property)" % (len(CASES), n_prop))
    if failures:
        for f in failures:
            print("FAIL  %s" % f)
        print("\nVERDICT: FAIL - %d problem(s). A locals cleanup must not change which registers the"
              % len(failures))
        print("         epilogue reports, and a non-cleanup instruction must still end the run.")
        return 1
    print("VERDICT: pass - the locals cleanup is transparent to saved-register detection, and")
    print("         non-cleanup instructions (call, mov, add-to-other-register) still end the run.")
    print("SEE ALSO lift_pushpair_check.py, which settles the ordering question this file used")
    print("to wave at. An earlier revision claimed a SECOND defect - that epilogue_pop_run returns")
    print("pop order while the prologue needs push order, so multi-register saves would still fail")
    print("to pair. That claim was WRONG. Tested through model_generated on real generated-shape")
    print("bodies, `push esi; push ebx` pairs correctly and yields pushes [esi, ebx], with and")
    print("without a locals cleanup. It came from probing with hand-built instruction dicts whose")
    print("op fields were not what the parser produces - a fixture assembled from a guess about")
    print("its own inputs. Still measured and still unexplained: the ~320 units that write a")
    print("callee-saved register without restoring it. It no longer has a proposed cause.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
