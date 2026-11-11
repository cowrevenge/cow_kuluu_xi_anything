"""Contract for COW_MODEL_TAIL_EPILOGUE (tail adapter emits the guest's epilogue).

The first version of this check asserted something false: that the lift knob must be inert without the
model knob. Measured on 0x100641b0, the model ALREADY reports `pops=['esi']` with both knobs off, and
the tail adapter still emitted nothing - so a lift knob that emits it is doing its job, not overstepping.
The real invariant is narrower and is what this file now enforces:

    the lift knob may emit EXACTLY what the model reports, never more, and never less;
    with the lift knob off, nothing is emitted no matter what the model knows.

It also separates two populations that were being conflated:

    KNOWN-AND-DROPPED  the model already had the pops; the tail template threw them away
    RECOVERED          only COW_MODEL_TAIL_POP_RUN gives them back (the pops sat above the `jmp`)

and it caught a code-deleting bug in the insertion (the rebuild dropped the matched
`cow_bridge_tail_...;` statement, so the unit returned without jumping anywhere) - the ordering
assertion below is what pins that.
"""
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")
DUMP = os.environ.get("COW_LIFT_DUMP", "D:/projects/ghidra/ghidra_out/functions_all.jsonl")

POP_RE = re.compile(r"/\*\s*pop\s+(\w+)\s*\*/")


def set_knobs(model, liftk):
    os.environ.pop("COW_MODEL_TAIL_POP_RUN", None)
    os.environ.pop("COW_LIFT_TAIL_EPILOGUE", None)
    if model:
        os.environ["COW_MODEL_TAIL_POP_RUN"] = "1"
    if liftk:
        os.environ["COW_LIFT_TAIL_EPILOGUE"] = "1"
    import importlib
    import gen_model
    import lift
    importlib.reload(gen_model)
    importlib.reload(lift)
    return lift, gen_model


def render(lift, d):
    ctx = lift.Ctx(DUMP, "12.2")
    ctx.problems = []
    ok, why = lift.classify(d)
    if not ok:
        return None, "classify:" + why
    text, why2 = lift.emit(d, ctx)
    return (text, "") if text else (None, "emit:" + why2)


def main():
    import lift as _lift
    import lift_clobber_predicate_blindness as T
    import lift_frame_predicates as FP

    # TWO PASSES, one per knob position. The first version of this loop asked the model the no-knob
    # question and the with-knob question in the same pass - and because the knob lives in module state
    # that the reload re-reads, every unit after the first RECOVERED one was classified against a model
    # that already had the knob on. That inflated KNOWN-AND-DROPPED and made RECOVERED read 0, which is
    # the same "two readings of one thing, taken at different times" failure in a new costume.
    lift0, gm0 = set_knobs(False, False)
    base_pops = {}
    for a in FP.lifted_units():
        t = FP.read_unit(a)
        if "machine-lifted" not in t or "TAIL CALL" not in t:
            continue
        bl = T.blines(a)
        if not bl:
            continue
        m0 = gm0.model_generated(bl)
        if m0.get("tail_jump"):
            base_pops[a] = (list(m0.get("pops") or []), FP.adapter_pops(t))
    lift1, gm1 = set_knobs(True, False)
    after = {}
    for a in base_pops:
        after[a] = list(gm1.model_generated(T.blines(a)).get("pops") or [])
    lift0, gm0 = set_knobs(False, False)

    known, recovered, none_at_all = [], [], []
    for a, (pops0, emitted0) in base_pops.items():
        if pops0:
            known.append((a, pops0, emitted0))
        elif after.get(a):
            recovered.append((a, after[a]))
        else:
            none_at_all.append((a, []))
    print("=" * 78)
    print("machine-lifted TAIL units: what the model knew before any knob existed")
    print("=" * 78)
    print("  KNOWN-AND-DROPPED (model had pops, file pops none) : %d"
          % sum(1 for a, p, e in known if p and not e))
    print("  KNOWN and actually emitted                        : %d"
          % sum(1 for a, p, e in known if p and e))
    print("  RECOVERED only by COW_MODEL_TAIL_POP_RUN           : %d" % len(recovered))
    print("  model reports nothing either way                   : %d" % len(none_at_all))

    want_cases = ([("known", a, p) for a, p, e in known if p and not e][:3]
                  + [("recovered", a, p) for a, p in recovered if p][:3])
    if not want_cases:
        sys.exit("REFUSING: neither class has a member - nothing here would be tested")
    controls = [a for a, p, e in known if not p][:2] + [a for a, p in none_at_all][:2]
    if not controls:
        sys.exit("REFUSING: no control unit - the off-path would be untested")

    records = {}
    need = {a for _k, a, _p in want_cases} | set(controls)
    with open(DUMP, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            try:
                d = json.loads(line)
            except ValueError:
                continue
            a = _lift.norm(d.get("addr"))
            if a and a[2:] in need and a[2:] not in records:
                records[a[2:]] = d
            if len(records) == len(need):
                break

    fails = []
    print()
    print("=" * 78)
    print("the invariant: the lift emits EXACTLY what the model reports, never more, never less")
    print("=" * 78)
    for kind, a, want in want_cases:
        d = records.get(a)
        if d is None:
            print("  skip 0x%s (no Ghidra record)" % a)
            continue
        # four positions, each asserted against the model's own report at that position
        outs = {}
        for key in ((False, False), (True, False), (True, True), (False, True)):
            lf, gm = set_knobs(*key)
            mm = gm.model_generated(T.blines(a))
            txt, _why = render(lf, d)
            outs[key] = (txt, mm.get("pops") or [])
        off_txt = outs[(False, False)][0]
        on_txt, on_pops = outs[(True, True)]
        if off_txt is None or on_txt is None:
            fails.append("0x%s refused" % a)
            continue
        body_on = on_txt[:on_txt.index("COW_ADAPTER BEGIN")] if "COW_ADAPTER BEGIN" in on_txt else on_txt
        emitted = POP_RE.findall(body_on)
        bridge_at = body_on.find("cow_bridge_tail_")
        last_pop = max((body_on.rfind("/* pop %s */" % r) for r in emitted), default=-1)
        # off: nothing emitted in the body; on: exactly the model's list, above the still-present bridge
        off_body = off_txt[:off_txt.index("COW_ADAPTER BEGIN")] if "COW_ADAPTER BEGIN" in off_txt else off_txt
        ok = (not POP_RE.findall(off_body)
              and emitted == list(on_pops) == list(want)
              and bridge_at > 0 and last_pop >= 0 and last_pop < bridge_at
              and "cow_bridge_tail_" in body_on[bridge_at:bridge_at + 40]
              and ("the frame's own pops run in the body" in on_txt) == bool(emitted))
        # the half-enabled position must never exceed what its own model reports
        half_txt, half_pops = outs[(False, True)]
        half_body = half_txt[:half_txt.index("COW_ADAPTER BEGIN")] if half_txt else ""
        half_ok = POP_RE.findall(half_body) == list(half_pops)
        print("  %s 0x%-10s [%-9s] off=%s on=%s model=%s bridge@%d last_pop@%d half=%s"
              % ("ok  " if (ok and half_ok) else "FAIL", a, kind,
                 POP_RE.findall(off_body), emitted, on_pops, bridge_at, last_pop,
                 POP_RE.findall(half_body)))
        if not ok:
            fails.append("0x%s emitted %s, model said %s, wanted %s (bridge@%d last_pop@%d)"
                         % (a, emitted, on_pops, want, bridge_at, last_pop))
        if not half_ok:
            fails.append("0x%s the lift emitted %s while its own model reported %s"
                         % (a, POP_RE.findall(half_body), half_pops))

    print()
    for a in controls:
        d = records.get(a)
        if d is None:
            continue
        base, _w = render(set_knobs(False, False)[0], d)
        both, _w = render(set_knobs(True, True)[0], d)
        same = base is not None and base == both
        print("  %s 0x%-10s control: byte-identical with both knobs on (no epilogue to invent)"
              % ("ok  " if same else "FAIL", a))
        if not same:
            fails.append("0x%s the knobs invented an epilogue the guest does not have" % a)

    set_knobs(False, False)
    print()
    if fails:
        print("RESULT: %d FAILURE(S)" % len(fails))
        for f in fails:
            print("  - %s" % f)
        sys.exit(1)
    print("RESULT: the tail epilogue is emitted exactly when the model reports it, above a call that "
          "survives the edit, and never otherwise")


if __name__ == "__main__":
    main()
