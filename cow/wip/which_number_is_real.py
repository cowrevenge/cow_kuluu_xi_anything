"""Which number is real: 30 units, or 4? The two counters of the tail-pop-run's reach disagree.

`lift_tail_pop_reach.py` counts `gen_model.epilogue_pop_run(ins)` and said FILLED = 18 of the 781
tail-flagged units (30 over all machine-lifted units).
`lift_tail_epilogue_check.py` counts `model_generated(...)["pops"]` and said only 4 of those 781 change.

Both are true of different things, and only one of them is what ships: **lift.py reads `m["pops"]`, not
`epilogue_pop_run`.** model_generated overwrites `m["pops"]` further down (the multi-exit recovery that
takes the pops from the whole body's save/restore pairs), so an answer the walk produced can be
discarded before the lift ever sees it. Measure the gap instead of picking a favourite.
"""
import os
import sys

HERE = r"D:\Projects\ffxi_disassembly\Cow_kuluu_xi_anything\tools\cow\ghidra"
sys.path.insert(0, HERE)
os.environ["COW_MODEL_TAIL_POP_RUN"] = "1"
import gen_model  # noqa: E402
import lift_frame_predicates as FP  # noqa: E402
import lift_clobber_predicate_blindness as T  # noqa: E402

if not gen_model.TAIL_POP_RUN:
    sys.exit("REFUSING: knob did not reach the module")

run_filled = model_filled = discarded = 0
discarded_examples = []
tail_units = 0
for a in FP.lifted_units():
    t = FP.read_unit(a)
    if "machine-lifted" not in t or "TAIL CALL" not in t:
        continue
    bl = T.blines(a)
    if not bl:
        continue
    m = gen_model.model_generated(bl)
    ins = m.get("ins") or []
    if not m.get("tail_jump") or gen_model._epilogue_pop_run_strict(ins):
        continue
    tail_units += 1
    from_run = gen_model.epilogue_pop_run(ins)
    from_model = m.get("pops") or []
    if from_run:
        run_filled += 1
    if from_model:
        model_filled += 1
    if from_run and not from_model:
        discarded += 1
        if len(discarded_examples) < 6:
            discarded_examples.append("0x%s run=%s model=%s ok=%s why=%s"
                                      % (a, from_run, from_model, m.get("ok"), m.get("why")))

print()
print("=" * 78)
print("the tail pop-run: what the WALK answers vs what model_generated hands to lift.py")
print("=" * 78)
print("  tail-flagged units with no strict epilogue        : %d" % tail_units)
print("  FILLED by epilogue_pop_run(ins)                   : %d" % run_filled)
print("  FILLED in m['pops']  (what lift.py actually reads): %d" % model_filled)
print("  ANSWERED BY THE WALK, THEN DISCARDED              : %d" % discarded)
for e in discarded_examples:
    print("     %s" % e)
print()
if discarded:
    print("  The number that ships is %d, not %d. The walk is right and something downstream of it"
          % (model_filled, run_filled))
    print("  overwrites the answer - which is exactly the 'two readers of one frame' pattern this")
    print("  thread keeps hitting, one level further inside gen_model.")
else:
    print("  No gap: the walk's answer is the model's answer.")
