"""Price COW_LIFT_FRAME_SYMMETRY on its own population, with a control group and a compile gate.

Isolated from `lift_relift_price.py` on purpose: that one measures the push-completion fix over the
unpaired-push population, this one measures the pop-dropping fix over the OVER-POP population, and the
two rules must not be priced together or a unit that changed for one reason gets credited to the other.
The population predicate is IMPORTED from `lift_frame_predicates`, not reimplemented - one definition,
which is the whole lesson of 58-vs-74.

Reports, through the real emitter:
  * units where the rule DROPS an unpaired pop (the fix working);
  * units where it REFUSES (we write that register, so dropping the restore would clobber it and
    hoisting the save would shift esp under the body's calls - those are named, not smoothed over);
  * a control group of frame-symmetric units that must come back BYTE-IDENTICAL, or the knob is not a
    knob.
"""
import io
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)
if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")
DUMP = os.environ.get("COW_LIFT_DUMP", "D:/projects/ghidra/ghidra_out/functions_all.jsonl")

import lift_frame_predicates as FP  # noqa: E402  (THE predicate home)

KNOB = "COW_LIFT_FRAME_SYMMETRY"
POP_RE = re.compile(r"/\*\s*pop\s+(\w+)\s*\*/")


def set_knob(on):
    if on:
        os.environ[KNOB] = "1"
    else:
        os.environ.pop(KNOB, None)
    import importlib
    import gen_model
    importlib.reload(gen_model)          # ORDER: model first, or a model knob never re-reads the env
    import lift
    importlib.reload(lift)
    if on and not lift.FRAME_SYMMETRY:
        sys.exit("REFUSING: %s set in the environment but lift did not read it" % KNOB)
    if (not on) and lift.FRAME_SYMMETRY:
        sys.exit("REFUSING: the baseline is not off")
    return lift


def main():
    import lift as _lift
    over = {a: FP.adapter_overpops(FP.read_unit(a)) for a in FP.lifted_units()
            if "machine-lifted" in FP.read_unit(a)}
    over = {a: v for a, v in over.items() if v}
    if not over:
        sys.exit("REFUSING: no over-popping units - the predicate cannot fire, so this run is nothing")
    controls = [a for a in FP.lifted_units()
                if not FP.adapter_overpops(FP.read_unit(a))
                and not FP.adapter_unpaired(FP.read_unit(a))
                and FP.adapter_pushes(FP.read_unit(a))][:40]
    if not controls:
        sys.exit("REFUSING: no symmetric controls - the off-path would be untested")

    units = sorted(over) + controls
    want = set(units)
    records = {}
    with io.open(DUMP, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            try:
                d = json.loads(line)
            except ValueError:
                continue
            a = _lift.norm(d.get("addr"))
            if a and a[2:] in want and a[2:] not in records:
                records[a[2:]] = d
            if len(records) == len(want):
                break

    def render(a, on):
        lf = set_knob(on)
        d = records.get(a)
        if d is None:
            return None, "no-record"
        ctx = lf.Ctx(DUMP, "12.2")
        ctx.problems = []
        ok, why = lf.classify(d)
        if not ok:
            return None, "classify:" + why
        text, why2 = lf.emit(d, ctx)
        return (text, "") if text else (None, "emit:" + why2)

    dropped, refused, same, ctl_bad = [], [], [], []
    for a in sorted(over):
        off, e1 = render(a, False)
        on, e2 = render(a, True)
        if off is None and on is None and (e1 == e2):
            continue                       # unlift-able either way: not this rule's business
        if off is not None and on is None and e2.startswith("emit:frame_asymmetry"):
            refused.append((a, over[a], e2.split("emit:", 1)[-1]))
            continue
        if off is None or on is None:
            print("  note 0x%s off=%s on=%s" % (a, e1, e2))
            continue
        po = POP_RE.findall(off[off.index("COW_ADAPTER BEGIN"):])
        pn = POP_RE.findall(on[on.index("COW_ADAPTER BEGIN"):])
        # assert against the RULE's set, from the same library: `over` is the callee-saved defect count
        # and is deliberately narrower than what the emitter may drop
        over_all = FP.adapter_overpops_all(off)
        if off == on:
            same.append(a)
        elif pn == [r for r in po if r not in over_all]:
            dropped.append((a, po, pn))
        else:
            print("  UNEXPECTED 0x%s pops %s -> %s (expected to drop %s)" % (a, po, pn, over[a]))
            same.append(a)

    ctl_same = 0
    for a in controls:
        off, _e1 = render(a, False)
        on, _e2 = render(a, True)
        if off is not None and on is not None and off == on:
            ctl_same += 1
        else:
            ctl_bad.append(a)

    set_knob(False)
    print()
    print("=" * 76)
    print("COW_LIFT_FRAME_SYMMETRY priced on its own population")
    print("=" * 76)
    print("  over-popping units                 : %d" % len(over))
    print("  DROP the unpaired pop (fixed)      : %d" % len(dropped))
    print("     e.g. %s" % ", ".join("0x%s(%s)" % (a, "+".join(set(po) - set(pn)))
                                     for a, po, pn in dropped[:6]))
    print("  REFUSED (we write that register)   : %d" % len(refused))
    for a, regs, why in refused[:8]:
        print("     0x%-10s %s -> %s" % (a, "+".join(regs), why))
    print("  unchanged                          : %d" % len(same))
    print("  controls byte-identical             : %d / %d %s"
          % (ctl_same, len(controls), "" if not ctl_bad else "BROKEN: " + ", ".join(ctl_bad[:6])))
    print()
    if not dropped:
        sys.exit("REFUSING: the rule dropped nothing - it cannot be firing")
    if ctl_bad:
        sys.exit("REFUSING: the knob moved %d symmetric control unit(s) - it is not a knob"
                 % len(ctl_bad))
    for a in ("101c8950", "10077a20"):
        if a not in [x[0] for x in dropped]:
            print("  note: exemplar 0x%s did not drop a pop this run - check whether the emitter "
                  "already fixed it (staleness) or the rule is not reaching it" % a)
    if refused:
        print("  The %d refusals are the honest part: dropping their restore would clobber a register "
              "we" % len(refused))
        print("  genuinely write, and hoisting the guest's mid-body push would shift esp under the body's")
        print("  calls. They stay unproven rather than becoming a guess that compiles.")


if __name__ == "__main__":
    main()
