"""SPEC: what counts as a frame save. Every rule in frame_save_addrs_of is pinned here or it is not a rule.

COW_MODEL_NPUSH_FRAME_AWARE decides which leading pushes are the frame's, and therefore which pushes the
backward walk may skip when counting a call's arguments. Get it wrong in one direction and the walk bills a
frame save to a call (f_10316337: npush 11 for 8 words); get it wrong in the other and it DELETES a real
argument push - which is exactly what the first version did, and it passed its own closure test doing it,
because `_head_pushes` over-collected and `_tail_pops_loose` over-collected by the same amount and the two
wrong lists agreed.

So this spec pins all three conditions on THREE real corpus units, each one a distinct failure mode, plus a
synthetic two-exit case for the reader bug that started it:

  f_10316337  four saves (ebp,ebx,esi,edi), interleaved `mov eax,[ebp+0x14]` between pops -> 4 saves,
              and the motivating symptom: the call to 0x10320fb3 must measure npush 8, not 11.
  f_10036360  `push esi` at 10036360 is a save; a SECOND `push esi` at 1003636e is an ARGUMENT after two
              `je`s -> exactly 1 save; the argument must still be counted (npush 1, not 0).
  f_10123350  `push esi; push esi; push 0x2a` with BOTH esi pushes before any control flow -> exactly 1
              save. Position cannot separate these; the single-path pop count does.

A spec that only pins the case you designed the rule for is how you ship the bug.

    python tools/cow/ghidra/lift_frame_save_spec.py
"""
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
for _p in (HERE, os.path.dirname(HERE)):
    if _p not in sys.path:
        sys.path.insert(0, _p)   # tools/cow holds trivial_audit; the working tools only see it because
                                 # `import gen_model` runs first and sets the path. Import order must not
                                 # be load-bearing for a spec - if it is, the spec breaks when reordered.


def _load(knob):
    for k in [k for k in list(os.environ) if k.startswith("COW_")]:
        os.environ.pop(k)
    if knob:
        os.environ["COW_MODEL_NPUSH_FRAME_AWARE"] = "1"
    sys.path.insert(0, HERE)
    import importlib
    import gen_model
    importlib.reload(gen_model)
    return gen_model


CASES = [
    # (unit, expected save addresses, the call target whose npush must equal expected_npush)
    ("10316337", {0x10316337, 0x1031633d, 0x1031633e, 0x1031633f}, 0x10320fb3, 8),
    ("10036360", {0x10036360}, 0x10036830, 1),
    ("10123350", {0x10123350}, None, None),
]


def synthetic_two_exit(gen_model):
    """`push esi ... pop esi; ret` TWICE: one save, two exit paths.

    This is the shape that made _tail_pops_loose return ['esi','esi'] and let the closure rule pass while an
    argument push was being eaten. The single-path reader must see ONE pop.
    """
    lines = [
        "/* 01000010: push esi */", "  { esp -= 4; wr32(esp, esi); }",
        "/* 01000011: mov eax, 1 */", "  { eax = 1u; }",
        "/* 01000014: test eax, eax */", "  { flags(); }",
        "/* 01000016: jz 0x01000022 */", "  if (zf) { goto L2; }",
        "/* 01000018: pop esi */", "  { esi = rd32(esp); esp += 4; }",
        "/* 01000019: ret */", "  { return; }",
        "/* 01000022: pop esi */", "  { esi = rd32(esp); esp += 4; }",
        "/* 01000023: ret */", "  { return; }",
    ]
    ins = gen_model.parse_instructions(lines)
    if len(ins) != 8:
        sys.exit("SPEC FAILED: synthetic parsed to %d instructions (want 8) - the fixture shape is wrong"
                 % len(ins))
    loose = gen_model._tail_pops_loose(ins)
    single = gen_model._tail_pops_single_path(ins)
    if len(loose) < 2 and len(single) < 1:
        sys.exit("SPEC FAILED: the synthetic body produced no pops - it does not exercise the reader")
    if len(single) != 1 or single != ["esi"]:
        sys.exit("SPEC FAILED: one save on two exit paths read as %r - the single-path reader is still "
                 "crossing `ret`, which is the bug this whole rule exists to stop" % (single,))
    fsa = gen_model.frame_save_addrs_of(ins)
    if fsa != {0x01000010}:
        sys.exit("SPEC FAILED: synthetic frame saves = %r (want {0x1000010})" % ([hex(a) for a in fsa],))
    return "one save across two exit paths; loose reads %r, single-path reads %r" % (loose, single)


def main():
    import trivial_audit
    gm_off = _load(False)
    bodies = trivial_audit.body_index()

    # knob OFF must be inert: it changes nothing, so frame saves are simply not consulted
    if gm_off.NPUSH_FRAME_AWARE:
        sys.exit("SPEC FAILED: the knob leaked into the off pass")

    gm = _load(True)
    if not gm.NPUSH_FRAME_AWARE:
        sys.exit("SPEC FAILED: the knob never reached the module - every verdict below is the off path")

    fails = []
    print("=" * 92)
    print("frame-save spec: position + single-path count + LIFO, pinned on real units")
    print("=" * 92)
    for unit, want_saves, want_target, want_npush in CASES:
        bl = bodies.get(unit)
        if not bl:
            sys.exit("SPEC FAILED: f_%s is not in the corpus - this spec can no longer test what it claims"
                     % unit)
        m = gm.model_generated(bl)
        ins = m.get("ins") or []
        got = gm.frame_save_addrs_of(ins)
        ok = got == want_saves
        print("  f_%-9s saves=%-52s %s" % (unit, sorted(hex(a) for a in got), "OK" if ok else "WRONG"))
        if not ok:
            fails.append("%s: saves %r want %r" % (unit, sorted(hex(a) for a in got),
                                                   sorted(hex(a) for a in want_saves)))
            continue
        if want_target is not None:
            site = [s for s in (m.get("call_sites") or []) if s.get("target") == want_target]
            if not site:
                fails.append("%s: no call site to %08x" % (unit, want_target))
                continue
            np_ = site[0].get("npush")
            good = np_ == want_npush
            print("            npush to f_%08x = %s (want %d)  %s"
                  % (want_target, np_, want_npush, "OK" if good else "WRONG"))
            if not good:
                fails.append("%s: npush=%s want %s" % (unit, np_, want_npush))

    print("  synthetic two-exit path: %s" % synthetic_two_exit(gm))

    # and the off path must not skip anything at all
    gm_off2 = _load(False)
    for unit, _w, _t, _n in CASES:
        if gm_off2.frame_save_addrs_of(gm_off2.model_generated(bodies[unit])["ins"]):
            fails.append("%s: frame saves returned with the knob OFF - the off path is not inert" % unit)
    print("  knob OFF returns empty for every case: %s"
          % ("OK" if not any("OFF" in f for f in fails) else "WRONG"))

    print()
    if fails:
        for f in fails:
            print("  SPEC FAILED: %s" % f)
        sys.exit(1)
    print("RESULT: every rule in frame_save_addrs_of is pinned, including the two that were once satisfied")
    print("by two wrong lists agreeing, and the off path is inert.")


if __name__ == "__main__":
    main()
