"""Spec for the frame-slot witness: prefix_lea_slots, _witness_slot, and the ampersand context.

Why this file exists as a permanent spec rather than a passing measurement: the witness replaced a rule
that was silently WRONG for part of its population (lift.py mapped Ghidra's param_1..N to "(register args,
then stack slots)" for every unit, and f_1001ac50 / f_10072ed0 disagree about whether the thiscall `this`
was numbered). A mechanism added after a defect is only real if a test would have caught the defect - the
same reason lift_frame_save_spec.py pins the frame-save rule with the two cases that broke its first two
versions.

Everything guest-shaped here goes through `gen_model.parse_instructions` / `model_generated` on generated
body TEXT, never through hand-built instruction dicts: a hand-made dict has no `stmt`, and `_reads_before_write`
/ `_writes_memory` read it, which is how a "loop that stores" control once called a register-only loop a
store. A fixture that parses to zero instructions is a refusal, not a pass.
"""
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
for _p in (HERE, os.path.join(ROOT, "tools", "cow")):
    if _p not in sys.path:
        sys.path.insert(0, _p)
for _k in [k for k in list(os.environ) if k.startswith("COW_")]:
    os.environ.pop(_k)                              # a spec must not inherit a knob

import gen_model                                     # noqa: E402
import ghidra_c                                      # noqa: E402
import lift                                          # noqa: E402
import trivial_audit                                 # noqa: E402

FAILS = []


def check(name, got, want):
    if got != want:
        FAILS.append("%s: got %r want %r" % (name, got, want))
        print("FAIL  %-58s got %r" % (name, got))
    else:
        print("ok    %-58s %r" % (name, got))


def body_lines(text):
    """model_generated over generated-body text, with the parse asserted - zero instructions means the
    fixture never reached the code under test."""
    m = gen_model.model_generated(text.splitlines())
    if not m.get("ins"):
        sys.exit("REFUSING: a fixture parsed to zero instructions - it would 'pass' by testing nothing:\n%s"
                 % text[:400])
    return m


def main():
    print("=" * 96)
    print("A. real corpus units - what the guest says about its own slots")
    print("=" * 96)
    bodies = trivial_audit.body_index()
    for hex8, want in (("1001ac50", [("ecx", 4, -8)]),        # the address-of thiscall that arithmetic lost
                       ("10072ed0", [("ecx", 4, -4)])):       # the one where arithmetic happened to agree
        if hex8 not in bodies:
            sys.exit("REFUSING: f_%s is not in the body index - cannot pin a rule on an absent unit." % hex8)
        ins = gen_model.model_generated(bodies[hex8])["ins"]
        got = [(r, off, d) for _a, r, off, d in gen_model.prefix_lea_slots(ins)]
        check("f_%s prefix_lea_slots" % hex8, got, want)

    # f_10002c30 takes the address of LOCALS, and every `lea` is below the first `je`: the positional stop
    # must fire, or the param mechanism would reach into the local half it explicitly does not own.
    ins = gen_model.model_generated(bodies["10002c30"])["ins"]
    leas_anywhere = [c["addr"] for c in ins if c["mnem"] == "lea"]
    check("f_10002c30 has guest leas at all (the stop must be what excludes them)",
          bool(leas_anywhere), True)
    check("f_10002c30 prefix_lea_slots (all leas are past the first je)",
          gen_model.prefix_lea_slots(ins), [])

    print()
    print("=" * 96)
    print("B. synthetic bodies - the can-fire / cannot-fire pair, built through parse_instructions")
    print("=" * 96)
    OK = ("void f_10000000(Guest* g)\n{\n"
          "    /* 10000000: push esi */\n    { uint32_t v = esi; esp -= 4; wr32(esp, v); }\n"
          "    /* 10000004: lea ecx, [esp + 8] */\n    { ecx = (uint32_t)((uint32_t)(esp + 0x8u)); }\n"
          "    /* 10000008: call 0x10001000 */\n    { esp -= 4; wr32(esp, 0x1000000Cu); }\n")
    m = body_lines(OK)
    check("straight-line prefix lea is witnessed",
          [(r, off) for _a, r, off, _d in gen_model.prefix_lea_slots(m["ins"])], [("ecx", 4)])

    IDX = OK.replace("lea ecx, [esp + 8]", "lea ecx, [esp + eax]") \
            .replace("ecx = (uint32_t)((uint32_t)(esp + 0x8u));", "ecx = (uint32_t)(esp + eax);")
    m2 = body_lines(IDX)
    check("INDEXED [esp+eax] is never a slot", gen_model.prefix_lea_slots(m2["ins"]), [])

    AFTER = ("void f_10000000(Guest* g)\n{\n"
             "    /* 10000000: je 0x10000010 */\n    { if (zf) goto L_10000010; }\n"
             "    /* 10000004: lea ecx, [esp + 8] */\n    { ecx = (uint32_t)((uint32_t)(esp + 0x8u)); }\n")
    m3 = body_lines(AFTER)
    check("a lea AFTER the first control transfer is not on the prefix",
          gen_model.prefix_lea_slots(m3["ins"]), [])

    print()
    print("=" * 96)
    print("C. _witness_slot - the resolution table (each row is a decision the lift will make)")
    print("=" * 96)
    W = lift._witness_slot
    check("one addressed param, its reg pushed and witnessed", W(2, {2}, {"ecx": {4}}, ["ecx", "eax"]), 4)
    check("two addressed params -> no guess", W(2, {1, 2}, {"ecx": {4}}, ["ecx"]), None)
    check("the witnessed register is not pushed at the first site", W(2, {2}, {"ecx": {4}}, ["eax"]), None)
    check("two registers pushed, both witnessed -> ambiguous",
          W(2, {2}, {"ecx": {4}, "edx": {8}}, ["ecx", "edx"]), None)
    check("a register with two witnessed offsets -> ambiguous", W(2, {2}, {"ecx": {4, 8}}, ["ecx"]), None)
    check("a slot below the arguments is a LOCAL, not this mechanism", W(2, {2}, {"ecx": {0}}, ["ecx"]), None)
    check("offset 4 is the first argument slot and is accepted", W(2, {2}, {"ecx": {4}}, ["ecx"]), 4)

    print()
    print("=" * 96)
    print("D. the ampersand context the whole thing rests on (gate + binding share this one predicate)")
    print("=" * 96)
    def un(text):
        return [t for t, _c in ghidra_c.address_of_names(text)]
    check("(uint32_t)&param_1 is address-of (a cast is not an operand)",
          un("f((uint32_t)&param_1, 2);"), ["param_1"])
    check("(rd32(q)) & param_2 is bitwise AND (an expression close IS an operand)",
          un("y = (rd32(q)) & param_2;"), [])
    check("a & param_1 is bitwise AND", un("x = a & param_1;"), [])
    check("f(&local_4) is address-of", un("f(&local_4);"), ["local_4"])
    check("masking leaves the name in place (so other patterns still see it)",
          "param_1" in ghidra_c.mask_binary_ampersands("x = a & param_1;"), True)
    check("genuine escape still tagged by the gate",
          any(t.endswith("_escapes") for t in ghidra_c.leftover_problems("  f(&param_1);\n")), True)
    check("bitwise AND alone is NOT tagged by the gate",
          any(t.endswith("_escapes") for t in ghidra_c.leftover_problems("  return a & param_1;\n")), False)

    print()
    if FAILS:
        print("RESULT: %d FAILURE(S) - the witness rule is not pinned:" % len(FAILS))
        for f in FAILS:
            print("   %s" % f)
        sys.exit(1)
    print("RESULT: the witness is pinned on two real units (one where the old arithmetic was wrong, one")
    print("        where it agreed), on the indexed and post-branch refusals, on the resolution table, and")
    print("        on the address-of/bitwise-AND context both the gate and the binding depend on.")


if __name__ == "__main__":
    main()
