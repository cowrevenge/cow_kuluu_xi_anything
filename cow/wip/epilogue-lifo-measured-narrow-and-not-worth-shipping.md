# `COW_MODEL_EPILOGUE_LIFO`: real, narrow, and not worth shipping on this evidence

Date: 2026-11-11. Knob still OFF; nothing booked; tree clean. Harness was free for this, and the proof ran
into a scratch record (`build/`, gitignored) - the official map was not touched.

## Why I went here

One of the 9 relift "regressions" (`0x102de39f`) was read end to end, and the read exposed something bigger:
with **no knob set at all**, the current lifter emits

```
prologue:  g->esp -= 4u; wr32(g->esp, g->ebp);   /* 0x102de3a8: push ebp */
           g->esp -= 4u; wr32(g->esp, g->esi);   /* 0x102de3a9: push esi */
           g->esp -= 4u; wr32(g->esp, g->edi);   /* 0x102de3b2: push edi */
epilogue:  { ... g->ebp = v; } /* pop ebp */     <- one pop for three pushes
banner  :  0 push(es) [-], pops [ebp]
```

`esi`/`edi` are never restored, and the single `pop ebp` reads the top of the stack - which holds **`edi`'s**
saved value. That is the shape `lift_epilogue_pairing_spec.py` has been holding open at `rc=1`.

## The two things the baseline arm caught before I believed anything

**Drift, not knobs.** The bisect's no-knob arm showed two of the three sampled "regressions" move with every
knob OFF: the committed files predate the current lifter. Across the batch, **8 / 170 (5%) drift**. A relift
that reports regressions against committed bytes is therefore measuring staleness as well as the knob; only
the units that do *not* move in the baseline arm are attributable. (`lift_knob_bisect.py` now has that arm;
without it three innocent knobs were about to be indicted.)

**The spec passes.** With `COW_MODEL_EPILOGUE_LIFO=1`: 4/4 positives and 4/4 negatives, `rc=0` - benign
interleavings are stepped over *when the pops close against the leading pushes*, and the walk still stops at
memory writes, calls, and unaccountable pops.

## Measurement on its own population

Sampled 120 lifted units whose adapter pushes callee-saved registers and never pops them
(`lift_frame_predicates.adapter_unpaired`, proven to fire on the exemplar `0x10003070` -> `['edi']`):

| under the knob | units |
|---|---|
| unpaired → **balanced** | **20** |
| still unpaired, byte-identical | 100 |
| files the knob rewrote at all | 20 |
| regressions, units lost, collateral edits | **0** |

Read by eye, the 20th file's change is exactly right: `1 push(es) [ebx]` → `2 push(es) [ebx, edi]`, with the
pushes emitted at the guest's own addresses (`0x10003072 push ebx`, `0x10003073 push edi`) and popped in
reverse order. Balanced, LIFO-correct, no over-pop.

## Proof: a small gain, and a warning about the metric

Proving those 20 against the official map:

| | before | after |
|---|---|---|
| passing | 3 | **5** |
| **broken by the knob** | — | **0** |

No regression, +2. But note the ratio: **only 5 of the 20 "structurally fixed" units pass.** Seventeen were
failing before and still fail, for unrelated reasons (`eax` 2, `edx` 2, `memory`, `fault`, `timeout`,
`callee-saved register`). So `adapter_unpaired` is a **weak predictor of defectiveness**: a missing restore
that cowdiff never observes is not a bug anyone is suffering, and fixing it does not make the unit pass.

**I caught myself misreading this.** The first thing I wrote down was "the proof says NO" from `lift_proof`'s
failure histogram - which is a distribution over the units that fail, not a verdict on the cohort. The join
against the map is what showed 0 broken. A histogram read as a verdict is the same error class as a zero from
a predicate that cannot fire; the fix is the same: ask the artifact the question you actually mean.

## Decision

**Not shipped.** `COW_MODEL_EPILOGUE_LIFO` stays off. The evidence for it is real (0 regressions, +2, spec
green, no collateral) and the evidence against shipping now is that the measured gain is 2 units on a
120-unit sample of a ~270-unit class, obtained by editing 20 files - and the population was chosen by a metric
that only a quarter of its members turn out to care about. Before this can be a ship decision it needs:

1. the whole ~270 cohort proved, so the gain and the null are both bounded;
2. the 17 still-failing units bucketed by cause, because if a missing pop were their problem they would have
   flipped - so the class label "unpaired push" is not the defect's name;
3. the drift arm subtracted from every verdict (5% of the batch moves with no knob at all).

What is kept: the baseline/drift arm in `lift_knob_bisect.py`, the spec result, and the negative conclusion -
which is a cheaper answer than shipping and reverting.
