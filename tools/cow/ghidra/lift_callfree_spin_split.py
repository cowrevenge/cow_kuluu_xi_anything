"""The call-free spinners: is the harness's own label true, and on WHICH side?

After the two explained families are removed from the 331 no-answer rows - the 116 that park in
`f_10316337` and the 26 blocked by an unimplemented opcode on the reference side - what is left is roughly
75 units that call NOTHING and still never return. `lift_proof.py` calls them:

    "run alone; silent for 12s (parked in a host call or a register-only loop - no in-process budget
     can reach it)"

For a call-free unit "parked in a host call" is impossible by construction, so the label reduces to
*register-only loop* - a loop whose exit depends only on registers, which is also why no in-process budget
can interrupt it: cow_tick, the cpu budget and the memory-write budget all sit on the other side of that
door. But the label never says WHICH side spins, and that distinction decides who owns the fix:

  - side A spins (the generated original): the guest has a loop that the harness cannot bound. Our lift
    is innocent; the row is unbounded for everybody, and the answer is a budget the harness can see.
  - side B spins (our lifted C): Ghidra emitted a `while (true)` whose exit condition did not survive
    translation - a lift defect, and the kind this loop can actually fix.

So classify both, per unit, from the two sources of truth: the generated body's instruction list (a
backward jump whose loop body contains no memory write, in any form - including a push, which IS a memory
write) and our own emitted file (a goto pointing at a label that occurs earlier in the text, with no
memory write in between).

Tripwires, because a zero from a predicate that cannot fire is how this session has been wrong five times:
  - the register-only-loop detector must fire on a hand-written case it is given, and must NOT fire on the
    same case with a `mov [eax], ebx` dropped into the loop body;
  - it must be able to say "no loop" at all - a classifier that only ever answers yes has not classified.
"""
import collections
import io
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
os.environ.setdefault("COW_MODEL_NPUSH_FRAME_AWARE", "")   # never inherit a knob into a measurement
import gen_model  # noqa: E402
import lift_frame_predicates as FP  # noqa: E402
import lift_hang_callee_scan as S  # noqa: E402  (THE call-target scan - same one that found f_10316337)
import trivial_audit  # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
RECORD = os.path.join(ROOT, "cow", "lift_proof_all.json")

JMP_RE = re.compile(r"\bj\w*\s+0x([0-9a-f]{1,8})\b")


def guest_register_loop(ins):
    """A backward jump whose loop body never touches memory. Returns a description or None."""
    if not ins:
        return None
    by_addr = {c["addr"]: c for c in ins}
    for c in ins:
        m = JMP_RE.search(c["text"] or "")
        if not m:
            continue
        tgt = int(m.group(1), 16)
        if tgt >= c["addr"]:
            continue                      # forward: not a loop
        body = [x for x in ins if tgt <= x["addr"] <= c["addr"]]
        if len(body) < 2:
            continue
        writes = [x for x in body if gen_model._writes_memory(x)]
        if not writes:
            return "0x%08x..0x%08x (%d insns, no memory write)" % (tgt, c["addr"], len(body))
    return None


def our_register_loop(text):
    """A loop in OUR emitted body whose body cannot be reached by any in-process budget.

    NOT `goto` - lifted bodies contain zero `goto` (checked over 3,000 files); the emitter's loops are
    `while (...)` and `for (...)`. A fixture written in a construct the generator never emits is how the
    first version of this detector "passed" its selftest while firing on 0 of 10,547 real files.

    A loop is a candidate when nothing inside it writes guest memory (`wr*(`), calls out (`cow_bridge`,
    `rt_`), or touches the string ops - the things a budget can tick on. Reading (`rdf32`) is allowed: a
    loop that reads guest memory forever still produces no write, which is exactly the harness's blind spot.
    """
    if "COW_LIFTED BEGIN" not in text:
        return None
    body = text[text.index("COW_LIFTED BEGIN"):]
    for m in re.finditer(r"\b(while|for)\s*\(", body):
        i = body.find("{", m.end())
        if i < 0:
            continue
        depth, j = 0, i
        while j < len(body):
            if body[j] == "{":
                depth += 1
            elif body[j] == "}":
                depth -= 1
                if depth == 0:
                    break
            j += 1
        span = body[i:j + 1]
        if len(span) < 8:
            continue
        if re.search(r"\bwr(8|16|32|64|f32|f64)\s*\(|cow_bridge|\brt_|rep\s+(movs|stos)|\bcall\b", span):
            continue
        cond = body[m.start():i]
        return "%s %s (%d chars, no store / no call)" % (m.group(1), cond[:36].replace("\n", " "), len(span))
    return None


def _ins_from(lines):
    """Build instruction records the way the generator does - THROUGH THE REAL PARSER.

    Hand-built dicts are how this selftest first passed a bug: `_writes_memory` reads `wr32(` out of the
    `stmt` field, and a dict with only addr/mnem/op/text has no stmt at all, so every loop looked
    store-free and the 'loop that stores' control FAILED to be refused. Feeding generated-shaped lines
    through parse_instructions is the only way to know the detector sees what the production code sees.
    """
    return gen_model.parse_instructions(lines)


def selftest():
    """The detector must be able to say yes AND no, on cases written by hand."""
    spin = _ins_from([
        "/* 01000010: mov ecx, 5 */",
        "  { ecx = 5u; }",
        "/* 01000014: dec ecx */",
        "  { ecx = ecx - 1u; flags(); }",
        "/* 01000016: sub eax, 1 */",
        "  { eax = eax - 1u; flags(); }",
        "/* 01000019: jne 0x01000014 */",
        "  if (zf == 0u) { goto label_1; }",
    ])
    store = _ins_from([
        "/* 01000010: mov ecx, 5 */",
        "  { ecx = 5u; }",
        "/* 01000014: mov dword ptr [eax], ecx */",
        "  { wr32((uint32_t)(eax), ecx); }",
        "/* 01000018: dec ecx */",
        "  { ecx = ecx - 1u; flags(); }",
        "/* 0100001b: jne 0x01000014 */",
        "  if (zf == 0u) { goto label_1; }",
    ])
    noloop = _ins_from([
        "/* 01000010: mov eax, 1 */",
        "  { eax = 1u; }",
        "/* 01000013: ret */",
        "  { return; }",
    ])
    # the parser itself is part of the test: a selftest on an empty list proves nothing
    if len(spin) != 4 or len(store) != 4 or len(noloop) != 2:
        sys.exit("SELFTEST FAILED: parse_instructions gave %d/%d/%d records (want 4/4/2) - the fixture "
                 "shape is wrong, so no verdict below is trustworthy"
                 % (len(spin), len(store), len(noloop)))
    if not any(gen_model._writes_memory(c) for c in store):
        sys.exit("SELFTEST FAILED: the storing fixture is not seen as a store by _writes_memory - the "
                 "fixture does not exercise the real predicate")

    yes = guest_register_loop(spin)
    no_store = guest_register_loop(store)
    no_loop = guest_register_loop(noloop)
    if not yes:
        sys.exit("SELFTEST FAILED: the register-only loop was not detected - the classifier cannot fire")
    if no_store:
        sys.exit("SELFTEST FAILED: a loop that STORES was called register-only - the predicate is deaf to "
                 "memory writes, so every count below would be inflated")
    if no_loop:
        sys.exit("SELFTEST FAILED: a unit with no loop was called a spinner")
    print("selftest: fires on a register loop, refuses a storing loop, refuses a loop-free unit")

    ours_yes = our_register_loop(
        "X COW_LIFTED BEGIN\n  fVar1 = fVar1 + 1.0f;\n  while (fVar1 < 100.0f) { fVar1 = fVar1 + 1.0f; }\n")
    ours_no = our_register_loop(
        "X COW_LIFTED BEGIN\n  while (uVar2 < 4u) { wr32((uint32_t)(uVar2), fVar1); uVar2 = uVar2 + 1u; }\n")
    ours_free = our_register_loop("X COW_LIFTED BEGIN\n  fVar1 = fVar1 + 1.0f;\n")
    if not ours_yes or ours_no or ours_free:
        sys.exit("SELFTEST FAILED: our-side detector fired=%r/%r/%r (want yes/no/no)"
                 % (bool(ours_yes), bool(ours_no), bool(ours_free)))
    print("selftest: our-side detector fires on a store-free while, refuses one that stores, "
          "refuses a loop-free body")


def detector_power():
    """Can these two detectors fire on REAL files? A zero from a predicate that cannot fire is not a
    finding - it is this session's most repeated mistake, so the fire rate is published before any
    'SIDE B: 0' sentence is allowed to exist."""
    bodies = trivial_audit.body_index()
    a_hits = b_hits = b_total = 0
    b_examples = []
    for a in FP.lifted_units():
        b_total += 1
        ins = []
        try:
            ins = (gen_model.model_generated(bodies.get(a) or []) or {}).get("ins") or []
        except Exception:
            pass
        if guest_register_loop(ins):
            a_hits += 1
        o = our_register_loop(FP.read_unit(a))
        if o:
            b_hits += 1
            if len(b_examples) < 6:
                b_examples.append((a, o))
    print("=" * 100)
    print("detector power over the real corpus (%d machine-lifted units)" % b_total)
    print("=" * 100)
    print("  guest-side store-free loop found in : %5d  (%4.1f%%)" % (a_hits, 100.0 * a_hits / max(1, b_total)))
    print("  our-side store-free backward goto in : %5d  (%4.1f%%)" % (b_hits, 100.0 * b_hits / max(1, b_total)))
    for a, o in b_examples:
        print("      0x%s  %s" % (a, o[:70]))
    print()
    if b_hits == 0:
        print("  WARNING: the our-side detector fires on NOTHING across %d real files, though it passes"
              % b_total)
        print("  its hand-written fixture. That means the label spellings in real lifted bodies differ")
        print("  from the fixture, and 'SIDE B: 0 units' would be a dead-filter result, NOT evidence")
        print("  that our lift has no register-only loops. Go read a lifted body that has a backward")
        print("  goto and fix the pattern before quoting the split.")
    else:
        print("  The our-side detector demonstrably fires on real files, so a SIDE B count of zero in")
        print("  a population is information rather than silence.")


def main():
    if "--detector-power" in sys.argv:
        detector_power()
        return
    selftest()
    with io.open(RECORD, encoding="utf-8", errors="replace") as fh:
        d = json.load(fh)
    gt = S.gen_targets()          # the same scan that named f_10316337 - one definition of "calls"
    if not gt:
        sys.exit("REFUSING: the call-target scan found nothing anywhere - 'call-free' would be meaningless")
    bodies = trivial_audit.body_index()

    noanswer = sorted(k for k, v in d.items() if not v.get("pass")
                      and (v.get("why") or "") in ("hang", "no_row_output"))

    def calls(a):
        s = set(x for x in re.findall(r"cow_bridge(?:_tail|_call|_import)?_([0-9a-f]{8})", FP.read_unit(a)) if x != a)
        return s | set(gt.get(a) or ())

    # the population of interest: no-answer units that call nothing at all
    call_free = [a for a in noanswer if not calls(a)]
    print("no-answer rows: %d   call-free: %d" % (len(noanswer), len(call_free)))

    tally = collections.Counter()
    examples = collections.defaultdict(list)
    for a in call_free:
        ins = []
        try:
            ins = (gen_model.model_generated(bodies.get(a) or []) or {}).get("ins") or []
        except Exception:
            pass
        g = guest_register_loop(ins)
        o = our_register_loop(FP.read_unit(a))
        if g and o:
            k = "BOTH sides have a store-free loop"
        elif g:
            k = "SIDE A only (the guest itself is unbounded)"
        elif o:
            k = "SIDE B only (our lift's loop - a LIFT defect)"
        else:
            k = "NEITHER (no store-free loop found on either side)"
        tally[k] += 1
        if len(examples[k]) < 6:
            examples[k].append((a, g or "-", o or "-"))

    print()
    print("=" * 100)
    print("the call-free spinners, by which side can spin")
    print("=" * 100)
    for k, n in tally.most_common():
        print("  %-48s %5d  (%4.1f%%)" % (k, n, 100.0 * n / max(1, len(call_free))))
        for a, g, o in examples[k]:
            print("       0x%s   A=%s   B=%s" % (a, str(g)[:44], str(o)[:40]))

    print()
    print("  WHY THE SPLIT MATTERS: SIDE B is ours - a Ghidra `while (true)` whose exit did not survive")
    print("  translation, which is a lift defect with an owner in this loop. SIDE A is the guest being")
    print("  genuinely unbounded, which no lift change touches and which argues for a budget the harness")
    print("  can see. NEITHER is the honest 'we still do not know', and it is printed rather than hidden.")
    print("  A static detector names candidates; it does not convict. Only a run does that.")

    # NEITHER is not one bucket: a third of it is the units whose ORACLE dies on an unimplemented
    # opcode (lift_unimpl_census) - they never reach a loop at all. Reported, not folded in.
    try:
        import lift_unimpl_census as C
        un = C.scan_generated()
    except SystemExit:
        un = {}
    neither = [a for a in call_free
               if not guest_register_loop(
                   (gen_model.model_generated(bodies.get(a) or []) or {}).get("ins") or [])
               and not our_register_loop(FP.read_unit(a))]
    sse = [a for a in neither if un.get(a)]
    print()
    print("  of the %d NEITHER: %d carry RT_UNIMPL on the reference side (the oracle dies before any"
          % (len(neither), len(sse)))
    print("  loop runs - see lift_unimpl_census), leaving %d genuinely unexplained call-free rows."
          % (len(neither) - len(sse)))
    rest = [a for a in neither if not un.get(a)]
    if rest:
        print("  the unexplained ones to take to a run: %s" % ", ".join("0x" + a for a in rest[:10]))


if __name__ == "__main__":
    main()
