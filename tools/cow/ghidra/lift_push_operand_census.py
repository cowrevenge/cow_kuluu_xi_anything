"""What are the `unnameable:` push bails, by OPERAND SHAPE? The number that decides whether anyone
should build ebp-relative push naming - before they build it.

The wall in front of the 116-row `hang` family is one line of `_push_values`:

    return bail("unnameable:%s" % (_short_op(word)))

which `lift_pushmnem_census.py` files as `not-a-register` and pronounces "a value widening cannot name at
all". That is true of the widening THAT TOOL prices (a `g->R` fallback for registers) and it is not a
statement about every operand. The pushes in `f_10316337` are:

    push eax / push eax / push eax / push dword ptr [ebp - 4]
    push dword ptr [ebp + 0x14] / [ebp+0x10] / [ebp+0xc] / [ebp+8]

`[ebp+8..0x14]` are the incoming stack arguments of the unit, which the adapter already models (it emits
`uint32_t sp0 = g->esp;` for exactly that purpose), and `[ebp-4]` is a slot the body wrote before the
push. So a candidate spelling exists for that shape - `rdf32(frame + N)` reads the same guest memory the
guest read at the same point in straight-line code - and it is NOT the third-widening mistake, which
handed a callee the ENTRY value of a register instead of the value the guest computed. Whether anyone
should spend a day on it depends on how many bails look like this and how many are `[eax+0x10]` where the
base is a Ghidra local nobody can reach.

This tool counts, per site, the SHAPE of the first `unnameable:` operand, over every unit in the corpus,
at both positions of COW_MODEL_NPUSH_FRAME_AWARE (the walk fix changes which sites reach this bail, so a
single position would be a snapshot of a moving target). It changes nothing and books nothing.

Tripwires, because a census that cannot judge its input has five times this session printed a confident
number for a bug that had just been read by eye:
  - f_10316337's call to 0x10320fb3 must bail on `unnameable:dwordptr[ebp+8]` and land in the
    `frame-relative` bucket (with the knob on - with it off it bails earlier at pushed-vs-npush, and the
    tool says so rather than reporting an absence)
  - the classifier must put a plain register into `plain-register` and a `[reg+disp]` into
    `reg-indirect`; if either cannot fire, the buckets are decoration and the tool refuses
"""
import collections
import io
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import gen_model  # noqa: E402
import trivial_audit  # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
RECORD = os.path.join(ROOT, "cow", "lift_proof_all.json")

EX_UNIT, EX_TARGET, EX_WHY = "10316337", 0x10320fb3, "unnameable:dwordptr[ebp+8]"


def shape_of(op):
    """File one push operand by the shape of what would have to be named."""
    o = str(op or "").strip().lower().replace(" ", "")
    if not o:
        return "empty"
    if o.startswith("dwordptr[") or o.startswith("ptr[") or "[" in o:
        inner = o[o.find("[") + 1:o.rfind("]")] if "[" in o and "]" in o else o
        if inner.startswith("ebp"):
            return "frame-relative(ebp)"
        if inner.startswith("esp"):
            return "stack-relative(esp)"
        if any(s in inner for s in ("eax", "ecx", "edx", "ebx", "esi", "edi")):
            return "reg-indirect"
        if inner.startswith("0x") or inner.isdigit():
            return "absolute"
        return "other-memory"
    if o in ("eax", "ecx", "edx", "ebx", "esi", "edi", "ebp", "esp"):
        return "plain-register"
    return "odd-or-other(%s)" % (o[:12],)


def unit_yield():
    """How many UNITS would a frame-relative/stack-relative naming save?

    The site-shape histogram is the wrong denominator when one unit owns 116 rows: _push_values bails on
    the FIRST unnameable word, and a unit lifts only when EVERY push at EVERY site is named. So a unit is
    salvageable by an `rdf32(frame+N)` spelling only if nothing anywhere in it bails on a plain register -
    the class that has already been tried three times and failed at the proof. Anything with one
    plain-register bail anywhere is out of reach of this candidate, however many ebp-relative pushes it
    also has, and is counted under `blocked-by-plain-register` instead of being quietly folded in.

    Still only an upper bound: naming the operand does not prove the resulting unit passes cowdiff.
    """
    bodies = trivial_audit.body_index()
    if not bodies:
        sys.exit("REFUSING: body_index() is empty")
    knob = bool(os.environ.get("COW_MODEL_NPUSH_FRAME_AWARE"))
    cats = collections.Counter()
    salvageable = []
    for addr, bl in sorted(bodies.items()):
        try:
            m = gen_model.model_generated(bl)
        except Exception:
            continue
        shapes = set()
        for s in (m.get("call_sites") or []):
            why = str(s.get("push_values_why") or "")
            if not why.startswith("unnameable:"):
                continue
            shapes.add(shape_of(why.split(":", 1)[1]))
        if not shapes:
            continue
        framey = {"frame-relative(ebp)", "stack-relative(esp)"}
        if shapes & {"plain-register"}:
            cats["blocked-by-plain-register"] += 1
        elif shapes <= framey:
            cats["salvageable-by-frame-naming"] += 1
            if addr not in [a for a, _ in salvageable]:
                salvageable.append((addr, sorted(shapes)))
        else:
            cats["blocked-by-other-shapes"] += 1

    print("=" * 100)
    print("unit-level yield of an `rdf32(frame+N)` push naming   [COW_MODEL_NPUSH_FRAME_AWARE=%s]"
          % ("ON" if knob else "off"))
    print("=" * 100)
    total = sum(cats.values())
    if not total:
        sys.exit("REFUSING: no unit reached an unnameable bail - the scan cannot answer this")
    for k, n in cats.most_common():
        print("  %-32s %6d  (%5.1f%% of %d bailing units)" % (k, n, 100.0 * n / total, total))
    print()
    print("  A unit counts as salvageable only if NOTHING in it bails on a plain register - the class")
    print("  already priced three times at 8.6-10% pass. That filter is the difference between an")
    print("  interesting 1.8%% of sites and a buildable feature.")
    if salvageable:
        print("\n  salvageable units (%d):" % len(salvageable))
        for a, sh in salvageable[:20]:
            print("    f_%s   needs %s" % (a, "+".join(x.split("(")[0] for x in sh)))
        # is the prize unit in the list? this is the whole reason the mode exists
        star = [x for x in salvageable if x[0] == EX_UNIT]
        if "--list-out" in sys.argv:
            path = sys.argv[sys.argv.index("--list-out") + 1]
            with io.open(os.path.join(ROOT, path), "w", encoding="utf-8", newline="\n") as fh:
                for a, _sh in salvageable:
                    fh.write("0x%s\n" % a)
            print("  wrote %d entries -> %s" % (len(salvageable), path))
        print("\n  f_%s (the callee behind the 116-row hang family) salvageable? %s"
              % (EX_UNIT, "YES" if star else "NO"))
        if star:
            print("  -> the naming candidate has a named 116-row payoff. Price it through the proof harness")
            print("     before anything is booked; an upper bound is not a result.")
        else:
            print("  -> even the exemplar is blocked by something else. The candidate does NOT unblock the")
            print("     116-row family, and building it for 1.8%% of sites would be a week for nothing.")


def main():
    if "--unit-yield" in sys.argv:
        unit_yield()
        return
    knob = bool(os.environ.get("COW_MODEL_NPUSH_FRAME_AWARE"))
    bodies = trivial_audit.body_index()
    if not bodies:
        sys.exit("REFUSING: body_index() is empty")

    with io.open(RECORD, encoding="utf-8", errors="replace") as fh:
        d = json.load(fh)

    tally = collections.Counter()
    sites_bailing = 0
    ex_seen = None
    sample = collections.defaultdict(list)
    for addr, bl in sorted(bodies.items()):
        try:
            m = gen_model.model_generated(bl)
        except Exception:
            continue
        for s in (m.get("call_sites") or []):
            why = str(s.get("push_values_why") or "")
            if not why.startswith("unnameable:"):
                continue
            sites_bailing += 1
            op = why.split(":", 1)[1]
            sh = shape_of(op)
            tally[sh] += 1
            if len(sample[sh]) < 4:
                sample[sh].append((addr, "%08x" % (s.get("target") or 0), op))
            if addr == EX_UNIT and s.get("target") == EX_TARGET:
                ex_seen = (why, sh)

    print("=" * 100)
    print("the first `unnameable:` push bail, by operand shape   [COW_MODEL_NPUSH_FRAME_AWARE=%s]"
          % ("ON" if knob else "off"))
    print("=" * 100)
    if not sites_bailing:
        print("  zero unnameable bails at this knob position.")
        if not knob:
            print("  (expected: with the walk off, the exemplar bails earlier at pushed-vs-npush. That is an")
            print("   ABSENCE caused by an earlier gate, not evidence that memory operands are rare.)")
        return

    # capability: the classifier must be able to say two different things, or the buckets are decoration
    can_fire = [k for k in ("frame-relative(ebp)", "plain-register", "reg-indirect") if tally.get(k)]
    if len(can_fire) < 3:
        sys.exit("REFUSING: the shape classifier cannot fire on all three reference buckets (got %r) - "
                 "a filter that cannot judge its input would report a zero that reads like a finding"
                 % (can_fire,))

    for k, n in tally.most_common():
        print("  %-24s %6d  (%5.1f%%)" % (k, n, 100.0 * n / sites_bailing))
        for a, t, op in sample[k]:
            print("        f_%s -> f_%s   %s" % (a, t, op))

    print("\n  unnameable sites counted: %d" % sites_bailing)

    # the exemplar tripwire, only meaningful with the walk fixed
    if knob:
        if ex_seen is None:
            sys.exit("REFUSING: the exemplar f_%s -> 0x%08x produced no unnameable bail with the walk "
                     "fixed - either it now names everything (good news, say so) or the scan is blind"
                     % (EX_UNIT, EX_TARGET))
        why, sh = ex_seen
        if why != EX_WHY or sh != "frame-relative(ebp)":
            sys.exit("REFUSING: exemplar bail is %r / %r, expected %r / frame-relative(ebp)"
                     % (why, sh, EX_WHY))
        print("\n  tripwire: exemplar f_%s bails on %r and is filed frame-relative(ebp) - the classifier "
              "sees the shape that blocks the 116-row family" % (EX_UNIT, why))
    else:
        print("\n  tripwire deferred: with the walk off the exemplar never reaches this bail.")

    print()
    print("  HOW TO READ IT: `frame-relative(ebp)` + `stack-relative(esp)` are operands whose address the")
    print("  adapter ALREADY computes (sp0 / the frame), so a candidate spelling exists for them and this")
    print("  loop has a priced decision to make. `reg-indirect` is the family that already killed three")
    print("  widenings - the base is a Ghidra local, not a live guest register - and `absolute` reads image")
    print("  data. A candidate should be argued for the first group and left alone for the others.")


if __name__ == "__main__":
    main()
