"""Price the COW_LIFT_EPILOGUE_MATCH_PUSHES fix BEFORE re-lifting anything.

The loop's rule is: fix the biggest pattern, MEASURE on a sample of its own units, then prove and
book. The measured half needs cowdiff, which the population audit owns for hours. This is the half
that does not: run the REAL emitter over the population the fix targets, with the knob off and on,
and report

  * how many units the rule ACCEPTS (output changes) - those are the candidates for a flip;
  * how many it DECLINES, and why - the decline reasons are the next pattern to fix, and an
    unexplained decline is a hole in the rule;
  * how many it leaves byte-identical when they were in the target set - a silent no-op on a unit
    that obviously needed the fix means the rule is not doing what it claims.

Nothing is written, nothing is built, nothing is booked. `lift.emit()` is called in-process exactly
the way `_main` calls it, so this measures the shipped code path rather than a paraphrase of it.
"""
import io
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)
DUMP = os.environ.get("COW_LIFT_DUMP", "D:/projects/ghidra/ghidra_out/functions_all.jsonl")

import lift                                    # noqa: E402
import lift_frame_predicates as FP             # noqa: E402
import lift_clobber_realised as R              # noqa: E402
import lift_clobber_predicate_blindness as T   # noqa: E402

POP_RE = re.compile(r"/\*\s*pop\s+(\w+)\s*\*/")
LEDGER = os.path.join(ROOT, "cow", "lift_proof_all.json")


def target_set(minimal=False):
    """Units with a REALISED clobber that the GUEST restores - the only population the fix can move."""
    with io.open(LEDGER, encoding="utf-8", errors="replace") as fh:
        ledger = json.load(fh)
    out = []
    for a in FP.lifted_units():
        c = R.classify_unit(a)
        if not c:
            continue
        t = "\n".join(T.blines(a))
        regs = [r for r, (real, _w) in c.items()
                if real and t and re.search(r":\s*pop\s+%s\b" % r, t)]
        if regs:
            out.append((a, regs, bool((ledger.get(a) or {}).get("pass"))))
    if not out:
        sys.exit("REFUSING: no target units - the population predicate is dead")
    return out


KNOBS = ["COW_LIFT_EPILOGUE_MATCH_PUSHES"]


def render(a, on):
    # ALL knobs against NO knobs. Toggling one while others sit on from a previous run measures a
    # different question than the one being printed.
    for k in KNOBS:
        if on:
            os.environ[k] = "1"
        else:
            os.environ.pop(k, None)
    import importlib
    import gen_model
    # ORDER MATTERS: gen_model reads its knobs at import. Reloading only `lift` re-binds the OLD
    # gen_model module from sys.modules and the model knob silently never turns on - which is how a
    # combined run reported 169 and called a unit the epilogue check PROVES is changed a decline.
    importlib.reload(gen_model)
    importlib.reload(lift)
    if on and "COW_MODEL_TAIL_POP_RUN" in KNOBS and not gen_model.TAIL_POP_RUN:
        sys.exit("REFUSING: the model knob was set in the environment but gen_model did not read it")
    if (not on) and (gen_model.TAIL_POP_RUN or lift.MATCH_PUSHES or lift.TAIL_EPILOGUE):
        sys.exit("REFUSING: the off side is not actually off (%r %r %r)"
                 % (gen_model.TAIL_POP_RUN, lift.MATCH_PUSHES, lift.TAIL_EPILOGUE))
    ctx = lift.Ctx(DUMP, "12.2")
    ctx.problems = []
    d = RECORDS.get(a)
    if d is None:
        return None, "no-record"
    ok, why = lift.classify(d)
    if not ok:
        return None, "classify:" + why
    text, why2 = lift.emit(d, ctx)
    return (text, "") if text else (None, "emit:" + why2)


def main():
    global RECORDS
    if "--knobs" in sys.argv:
        # explicit, so a measured run can never inherit an accidental COW_* from a previous shell
        global KNOBS
        KNOBS = [k.strip() for k in sys.argv[sys.argv.index("--knobs") + 1].split(",") if k.strip()]
        for k in KNOBS:
            if not k.startswith("COW_"):
                sys.exit("REFUSING: %r is not a cow knob" % k)
        print("  knobs priced in this run: %s" % ", ".join(KNOBS))
    else:
        print("  knobs priced in this run: %s (default)" % ", ".join(KNOBS))
    for k in ("COW_LIFT_EPILOGUE_MATCH_PUSHES", "COW_MODEL_TAIL_POP_RUN",
              "COW_LIFT_TAIL_EPILOGUE", "COW_MODEL_EPILOGUE_LIFO"):
        if os.environ.get(k):
            sys.exit("REFUSING: %s is already set in the environment - the run would measure two "
                     "configurations at once" % k)
    units = target_set()
    if "--limit" in sys.argv:
        units = units[:int(sys.argv[sys.argv.index("--limit") + 1])]
    want = {a for a, _, _ in units}
    RECORDS = {}
    with io.open(DUMP, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            try:
                d = json.loads(line)
            except ValueError:
                continue
            a = lift.norm(d.get("addr"))
            if a and a[2:] in want and a[2:] not in RECORDS:
                RECORDS[a[2:]] = d
            if len(RECORDS) == len(want):
                break
    missing = want - set(RECORDS)
    if missing:
        print("  note: %d target unit(s) have no Ghidra record (cannot be re-lifted at all): %s"
              % (len(missing), ", ".join(sorted(missing)[:5])))

    accepted, declined, noop, refused = [], {}, [], []
    for a, regs, booked in units:
        off, e1 = render(a, False)
        on, e2 = render(a, True)
        if off is None or on is None:
            refused.append((a, e1 or e2))
            continue
        if off == on:
            # did the rule have something to do and not do it?
            base = POP_RE.findall(off[off.index("COW_ADAPTER BEGIN"):]) \
                if "COW_ADAPTER BEGIN" in off else []
            pushed = FP.adapter_pushes(off)
            unpaired = [r for r in pushed if r not in base]
            if any(r in lift.CALLEE_SAVED for r in unpaired):
                declined.setdefault(decline_reason(off, a, regs), []).append("0x%s" % a)
            else:
                noop.append("0x%s" % a)
            continue
        gained = [r for r in POP_RE.findall(on[on.index("COW_ADAPTER BEGIN"):]) if r not in
                  POP_RE.findall(off[off.index("COW_ADAPTER BEGIN"):])]
        accepted.append((a, gained, booked))

    print()
    print("=" * 76)
    print("priced: COW_LIFT_EPILOGUE_MATCH_PUSHES over the units it claims to fix")
    print("=" * 76)
    print("  target units (realised clobber + guest restores) : %d" % len(units))
    print("  ACCEPTED - the emitter output changes            : %d" % len(accepted))
    print("     of which the ledger says pass (flip candidates): %d"
          % sum(1 for _a, _g, b in accepted if b))
    print("     gained pops: %s" % ", ".join(
        "0x%s(+%s)" % (a, ",".join(g)) for a, g, _b in accepted[:6]))
    print("  DECLINED by the rule                             : %d"
          % sum(len(v) for v in declined.values()))
    for k in sorted(declined, key=lambda x: -len(declined[x])):
        print("     %-46s %3d  e.g. %s" % (k, len(declined[k]), ", ".join(declined[k][:4])))
    print("  NO-OP (nothing unpaired after all - counter noise) : %d  %s"
          % (len(noop), ", ".join(noop[:5])))
    print("  refused by classify/emit (cannot be lifted)        : %d  %s"
          % (len(refused), ", ".join("%s(%s)" % t for t in refused[:4])))
    if "--list-out" in sys.argv:
        _out = sys.argv[sys.argv.index("--list-out") + 1]
        with io.open(_out, "w", encoding="utf-8", newline="\n") as _fh:
            for _a, _g, _b in accepted:
                _fh.write(_a + "\n")
        print("  list of ACCEPTED units written to %s (%d) - the runner reads THIS, it does not "
              "re-decide" % (_out, len(accepted)))
    print()
    if not accepted:
        sys.exit("REFUSING: the rule accepted nothing - there is no fix to measure")
    print("  Carry %d units into the measured re-lift; the payoff claim is how many of the %d"
          % (len(accepted), sum(1 for _a, _g, b in accepted if b)))
    print("  booked-pass ones newly pass cowdiff. Nothing here books anything.")


def decline_reason(off, a, regs):
    """Name the rule that said no, so declines are a work list and not a shrug."""
    pushed = FP.adapter_pushes(off)
    base = POP_RE.findall(off[off.index("COW_ADAPTER BEGIN"):])
    full = list(reversed(pushed))
    if [r for r in full if r in set(base)] != list(base):
        return "walk's pop order contradicts LIFO"
    if any(r not in lift.CALLEE_SAVED for r in pushed if r not in base):
        return "volatile register unpaired (refuses on principle)"
    if "no return (tail call)" in off or "INTRA-BODY TAIL CALL" in off:
        return "tail-call / intra-tail unit (deferred to the two-path fix)"
    if all(r == "ebp" for r in pushed):
        return "ebp under a frame pointer / leave"
    return "unclassified decline - inspect"


if __name__ == "__main__":
    main()
