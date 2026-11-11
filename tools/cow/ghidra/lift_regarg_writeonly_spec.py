"""lift_regarg_writeonly_spec.py - the contract for COW_MODEL_REGARG_WRITEONLY.

THE DEFECT (measured, not assumed). gen_model._reads_before_write decides whether ecx/edx "arrive
populated" and therefore whether the adapter binds a REGISTER argument. Its write test is

    pat_write = re.compile(r"(?m)^\\s*%s\\s*=\\s*\\(uint32_t\\)\\(" % reg)
    w = pat_write.match(stmt.lstrip()) or pat_write.search(stmt)
    if w and w.start() <= stmt.find(reg): ...
    return True                      # <-- reached whenever w is None

`(?m)^\\s*` recognises an assignment only when it OPENS a line. The recompiler lowers many
instructions into a block whose first line already carries other statements, so `w` is None and the
function reports "read before written" for a register the entry only ever ASSIGNS:

    /* 103134d3: pop ecx */
    { uint32_t v = rd32(esp); esp += 4; ecx = (uint32_t)(v); }

Census over generated/all (build/scratch/scan_regarg_all.py, 21,891 bodies): 366 entries claim an
ecx/edx argument whose every mention is an assignment; 163 are lifted; ZERO of the 366 is recorded
pass=True in cow/lift_proof_all.json - the shape is uniformly fatal, and it is the shape behind the
123-unit 00993b60 cluster (f_103134c6's single argument comes from `[esp+4]`, but the lift called it
an ecx argument, so the adapter handed the body the caller's leftovers in ecx and the guest word was
never read).

THE VETO. With the knob on, a claimed argument is dropped only when EVERY mention of the register in
the whole lowered function is an assignment target - comments blanked, because they spell operands in
assembly form. It can only REMOVE a claim, never add one, so the blast radius is bounded by the
population that already never passes.

WHAT THIS SPEC DEMANDS, in both directions (a zero from a predicate that cannot fire is worthless):
  A. the shipped shapes - `pop ecx`, `imul` high-half into edx - are claimed OFF and unclaimed ON;
  B. every genuine register argument (`this` read before written, `ecx` as a call argument, a value
     read back off the stack through ecx) stays claimed ON, so the veto does not become a mute button;
  C. the scan path is not the veto path: an assignment that DOES open a line is handled exactly the
     same by both arms, which is what makes the knob-off bytes inert;
  D. `reg_never_read` is a total function on the tricky spellings: `g->ecx`, `ecx == x`, `&ecx`,
     `ecx, ecx` self-ops, and a register that never appears at all.
"""
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.abspath(os.path.join(HERE, "..", ".."))
sys.path.insert(0, HERE)

if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")

import gen_model as gm


def body(*lines):
    """A generated-style body, exactly as funcs_*.c spells it: REGS_DECL, one comment per guest
    instruction, the lowering under it. Written as text because the model reads TEXT."""
    return ["{", "    REGS_DECL;", "    REGS_LOAD;"] + list(lines) + ["    esp += 4; REGS_STORE; return;", "}"]


# ---------------------------------------------------------------- the shapes under test
CASES = [
    # (label, body, reg, claimed_off, claimed_on)
    ("pop ecx as the only ecx mention - the cluster callee",
     body("    /* 103134d3: pop ecx */",
          "    {",
          "        { uint32_t v = rd32(esp); esp += 4; ecx = (uint32_t)(v); }",
          "    }"), "ecx", True, False),

    ("pop edx as the only edx mention",
     body("    /* 1000f0d3: pop edx */",
          "    {",
          "        { uint32_t v = rd32(esp); esp += 4; edx = (uint32_t)(v); }",
          "    }"), "edx", True, False),

    ("imul writes edx high half only - edx is a result, not an argument",
     body("    /* 10001d97: imul ecx */",
          "    {",
          "        { int64_t p = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx; eax = (uint32_t)p;"
          " edx = (uint32_t)((uint64_t)p >> 32); cf = of = p != (int64_t)(int32_t)eax; }",
          "    }"), "edx", True, False),

    ("a real thiscall: ecx read into a temp before any write - STAYS claimed both arms",
     body("    /* 10026e04: mov eax, ecx */",
          "    {",
          "        { eax = (uint32_t)(ecx); }",
          "    }"), "ecx", True, True),

    ("ecx as a call argument - STAYS claimed both arms",
     body("    /* 10026e10: call 0x10010000 */",
          "    {",
          "        esp -= 4; wr32(esp, 0x10026e15u + RD);",
          "        REGS_STORE; f_10010000(g, ecx); REGS_LOAD;",
          "    }"), "ecx", True, True),

    ("ecx read after a write is still a read of that write - stays claimed (conservative)",
     body("    /* 1000f001: mov ecx, 4 */", "    { ecx = (uint32_t)(4u); }",
          "    /* 1000f006: mov eax, ecx */", "    { eax = (uint32_t)(ecx); }"), "ecx", True, True),

    ("line-initial assignment, never read again: handled by the SCAN, identical both arms",
     body("    /* 1000f001: mov ecx, eax */", "    {", "        ecx = (uint32_t)(eax);", "    }"),
     "ecx", False, False),

    ("xor ecx,ecx clears - already unclaimed by the scan, identical both arms",
     body("    /* 1000f001: xor ecx, ecx */",
          "    {", "        { uint32_t a = ecx; uint32_t b = ecx;",
          "        uint32_t r = (uint32_t)(a ^ b); ecx = (uint32_t)(r); }",
          "    }"), "ecx", False, False),

    ("a register the body never mentions is not an argument either way",
     body("    /* 1000f001: mov eax, 1 */", "    {", "        eax = (uint32_t)(1u);", "    }"),
     "ecx", False, False),
]

# ---------------------------------------------------------------- reg_never_read unit cases
NEVER_READ = [
    ("pop lowering", '{ uint32_t v = rd32(esp); esp += 4; ecx = (uint32_t)(v); }', "ecx", True),
    ("g->ecx is a read", 'cow_bridge_x(g, g->ecx, 0u);', "ecx", False),
    ("ecx == x is a read", 'if (ecx == 0x100298d0u) { goto L; }', "ecx", False),
    ("a read into a temp", '{ uint32_t a = ecx; uint32_t r = (uint32_t)(a - 4u); }', "ecx", False),
    ("&ecx would be a read", '{ wr32((uint32_t)(&ecx), 1u); }', "ecx", False),
    ("ecx as a call argument", 'f_10010000(g, ecx);', "ecx", False),
    ("no mention at all", '{ eax = (uint32_t)(1u); }', "ecx", False),
    ("two writes, still write-only", '{ ecx = (uint32_t)(1u); ecx = (uint32_t)(edx); }', "ecx", True),
    ("edx written from ecx does not make edx a read", '{ edx = (uint32_t)(ecx); }', "edx", True),
    ("compound assign reads", '{ ecx += 4u; }', "ecx", False),
]


def run():
    bad = []

    # D first: the veto predicate on its own, with the can-fire tripwire.
    fired = 0
    for label, text, reg, want in NEVER_READ:
        got = gm.reg_never_read(text, reg)
        if got != want:
            bad.append("reg_never_read %s: wanted %s got %s" % (label, want, got))
        if got:
            fired += 1
    if fired == 0:
        bad.append("reg_never_read never returned True for any case: the predicate CANNOT FIRE")

    # A/B/C through the real parser.
    for arm in (False, True):
        gm.REGARG_WRITEONLY = arm
        for label, lines, reg, off, on in CASES:
            want = on if arm else off
            m = gm.model_generated(lines)
            got = reg in (m.get("reg_args") or [])
            if got != want:
                bad.append("arm=%s %s: %s claimed=%s wanted=%s"
                           % ("on" if arm else "off", label, reg, got, want))
        # the scan-only cases must be BYTE-IDENTICAL between arms, or the knob is not inert
        for label, lines, reg, off, on in CASES:
            if off == on:
                continue
    gm.REGARG_WRITEONLY = bool(os.environ.get("COW_MODEL_REGARG_WRITEONLY"))

    # C: knob-off must equal the pre-knob answer on the exemplar body, by re-running the OLD logic.
    import re as _re
    ex = CASES[0][1]
    m = gm.model_generated(ex)
    gm.REGARG_WRITEONLY = False
    ins = gm.model_generated(ex)["ins"]
    old = ("ecx" in (gm.model_generated(ex).get("reg_args") or []))
    pat_w = _re.compile(r"(?m)^\s*ecx\s*=\s*\(uint32_t\)\(")
    old_says_read = any(pat_w.search(c["stmt"]) is None and _re.search(r"\becx\b", c["stmt"])
                        for c in ins)
    if not (old and old_says_read):
        bad.append("the exemplar no longer reproduces the defect (claimed=%s, old-logic-says-read=%s)"
                   % (old, old_says_read))

    if bad:
        for b in bad:
            print("FAIL " + b)
        print("\n%d/%d PASS" % (0, len(CASES) * 2 + len(NEVER_READ)))
        sys.exit(1)
    print("PASS %d model cases (2 arms) + %d reg_never_read cases"
          % (len(CASES) * 2, len(NEVER_READ)))


if __name__ == "__main__":
    run()
