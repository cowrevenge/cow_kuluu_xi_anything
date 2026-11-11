"""Reach of COW_MODEL_TAIL_POP_RUN, measured on the population the rule can actually change.

Two populations are reported, because the first one was a blind spot of my own making:

  (a) model-flagged tail units (`m["tail_jump"]` is set and the strict walk found nothing);
  (b) THE RULE'S FIRING SET - every machine-lifted unit whose strict walk finds no epilogue at all.

(a) MISSED the exemplar. 0x1006ce70's generated listing ends `pop ebx; jmp T; ret` - the trailing `ret`
belongs to an adjacent one-instruction thunk that the recompiler lumped into the same function, so
`no_ret` is False and `tail_jump` is None, even though the rule fires on the body and recovers
['edi','esi','ebx']. A population defined by the flag that is part of the bug cannot measure the bug.
(b) is the number to quote.

For each unit: does the knob take `pops` from empty to a closed list, or does the rule refuse it (no
pops above the jmp at all - the guest really abandons the save - or pops that do not close against the
leading pushes, which stays refused on purpose).
"""
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import lift_frame_predicates as FP  # noqa: E402
import gen_model  # noqa: E402


def sweep(units, label):
    filled, no_pops, no_close, seen = [], [], [], 0
    for a in units:
        bl = T.blines(a)
        if not bl:
            continue
        m = gen_model.model_generated(bl)
        ins = m.get("ins") or []
        if gen_model._epilogue_pop_run_strict(ins):
            continue                      # the strict walk already had it - nothing to gain
        if only_tail and not m.get("tail_jump"):
            continue
        seen += 1
        above = gen_model._pops_above_final_jump(ins)
        got = gen_model.epilogue_pop_run(ins)
        if got:
            filled.append((a, got))
        elif not above:
            no_pops.append((a, gen_model._head_pushes(ins)))
        else:
            no_close.append((a, above, gen_model._head_pushes(ins)))
    print()
    print("=" * 76)
    print("%s" % label)
    print("=" * 76)
    print("  units where the strict walk found NO epilogue : %d" % seen)
    if not seen:
        return False
    print("  FILLED by the rule (closes against the pushes): %4d  (%4.1f%%)"
          % (len(filled), 100.0 * len(filled) / seen))
    print("     e.g. %s" % ", ".join("0x%s(%s)" % (a, "+".join(r)) for a, r in filled[:6]))
    print("  no pops above the jmp (guest abandons it)     : %4d  (%4.1f%%)"
          % (len(no_pops), 100.0 * len(no_pops) / seen))
    print("     e.g. %s" % ", ".join("0x%s" % a for a, _h in no_pops[:6]))
    # `seen` is a firing set, not a defect count: most of those units never saved anything, and calling
    # "6824 units have no epilogue" a defect would repeat the "168 open clobbers" mistake exactly.
    # The split that means something is: does the body push a saved register at all?
    unrestored = [(a, h) for a, h in no_pops if h]
    print("        pushes a saved register, never pops it above the jmp : %4d  <- candidates"
          % len(unrestored))
    print("        never saved anything (normal shape, not a defect)   : %4d"
          % (len(no_pops) - len(unrestored)))
    print("     e.g. %s" % ", ".join("0x%s(%s)" % (a, "+".join(h)) for a, h in unrestored[:6]))
    print("  pops found but they DO NOT close (refused)    : %4d  (%4.1f%%)"
          % (len(no_close), 100.0 * len(no_close) / seen))
    for a, above, head in no_close[:6]:
        print("     0x%-10s above=%-22s head=%s" % (a, above, head))
    return True


def main():
    global T, only_tail
    import lift_clobber_predicate_blindness as _T   # its index prints on import
    T = _T
    only_tail = "--tail-flagged" in sys.argv
    os.environ["COW_MODEL_TAIL_POP_RUN"] = "1"
    import importlib
    importlib.reload(gen_model)
    if not gen_model.TAIL_POP_RUN:
        sys.exit("REFUSING: the knob did not reach the module")

    all_units = FP.lifted_units()
    machine = [a for a in all_units if "machine-lifted" in FP.read_unit(a)]
    label = ("tail-FLAGGED units (m[tail_jump]) - the population that missed the exemplar"
             if only_tail else
             "ALL machine-lifted units (the rule's own firing set) - THE number to quote")
    ok = sweep(machine, label)
    if not ok:
        sys.exit("REFUSING: empty population - the filter cannot judge anything, so no number below "
                 "it would mean anything")
    # the exemplar must be in the fired set, or the tool has silently re-lost the bug it measures
    bl = T.blines("1006ce70")
    m = gen_model.model_generated(bl)
    got = gen_model.epilogue_pop_run(m.get("ins") or [])
    print()
    print("  tripwire: 0x1006ce70 with the knob -> %r" % (got,))
    if got != ["edi", "esi", "ebx"]:
        sys.exit("REFUSING: the exemplar did not get its epilogue back")
    print("  NOT YET CLAIMED: this is the MODEL knowing. TAIL_ADAPTER_TMPL still has no epilogue slot,")
    print("  so no shipped file changes until lift.py inserts the pops before the tail bridge call.")


if __name__ == "__main__":
    main()
