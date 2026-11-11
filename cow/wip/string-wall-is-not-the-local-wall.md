# The string wall and the local wall are not the same wall: 123 units are reachable, 2 are not

Both questions were "can the frame binding reach them?". Both were asked with the same shared classifier
(`gen_model.frame_leas`, one home). The answers are opposite, and the difference is worth the turn it took
to find: `lift_string_frame_witness.py`.

| | string `operand_stack_frame` | local `local_address_escapes` |
|---|---|---|
| population (live) | **503** | **43** |
| condemned register witnessed by a guest lea **on the straight-line prefix** | **130 (26%)** | **4** |
| lea exists but sits **below the first control transfer** (`d` is a fiction) | 238 (47%) | 28 |
| no lea for that register at all (a copy or a load) | 36 (7%) | 11 |
| ebp-relative | 99 (20%) | 0 |
| **clean slice after the keep-alive question** | **~123** | **2** |

So the local *escape* half stays rejected (three mechanisms for two units — see
`local-half-is-per-path-tracking.md`), while the string half has a real, bounded target. The distinction is
not obvious from either earlier census: both populations looked like "frame slots the model can't name".

## Why 123 of the 130 are actually reachable

The prefix-witnessed 130 split by where the buffer sits and whether the unit reserves it:

```
  local region only | locals>0                123
  argument slots only | locals==0               6
  local region only | locals==0                 1
```

That split is the whole difference from the local-escape half:

* **123** point into the **reserved-locals region** — the prologue already lowered `g->esp` for them, so the
  bytes exist in guest memory, cowdiff's frame window covers them, and no per-path esp tracking is needed
  because the lea is on the prefix. What is missing is only the *string model's* permission to treat a
  witnessed stack provenance as explained.
* **6** point at **argument slots** with no locals at all — that is the param binding's own territory.
* **1** points into a local region the unit never reserved: **no bytes to point at**. That row is the
  keep-alive wall, not a naming problem, and it is why "130 nameable" would have been the wrong headline.

## Cross-checks that ran before any of this was believed

* The population and the per-register tally reproduce the independent census exactly — **503** units and
  `edi=1147, esi=616, ecx=129, eax=2`. Two tools, two enumeration paths, same numbers; if either had drifted
  the comparison would have caught the fork rather than the reader.
* The classifier proved it can **both fire and refuse** on fixtures built through `model_generated` (never
  hand-made dicts): a direct `lea edi,[esp+0x10]` before a `rep movsb` must be witnessed, and
  `lea ebx,…; mov edi,ebx` must **not** be — the census's own typical case, so a walk that over-claims fails
  here rather than in a note.
* Every rule is the module's own: `string_shape` for the verdict, `string_op_of` / `_str_form` / `STR_USES`
  / `_str_prov` for which register was condemned, `frame_leas` for what the guest said. Nothing here
  re-implements a decision, which is the discipline that has been violated four times this session and is
  always discovered later.
* `frame_leas` was **extracted, then proven equivalent**: after moving the classifier into `gen_model` and
  deleting `lift_local_feasibility.py`'s private copy, its full histogram and tallies came back
  byte-identical, and the independent tallies script (still carrying its own copy) agreed with both.

## What is next, in rank order

1. **String provenance for witnessed slots** — `_str_prov` returns `stack-witnessed` when the condemned
   register is prefix-witnessed by `frame_leas`; that name joins `STR_EXPLAINED` (one tuple, two consumers
   — the bug that once produced a `operand_stack-const` refusal by being added in only one place), behind a
   measurement-only knob with `--apply` refused and preflight deliberately unregistered. Target ~123 units,
   gate ~6. Nameable ≠ liftable: the `rep` clauses (width, direction flag) and cowdiff still decide.
2. **Release the queue the harness is holding** — the cleared 170-unit re-lift, and the 679-unit npush list
   that needs a whole-population lift for its layout macros.
3. **Re-measure the hang/timeout families on a free box** — the wall half of the row budget makes the 116-row
   `f_10316337` family and the 9-unit timeout class suspect until then, and both were used to justify design
   work.
4. `argcount_mismatch` re-rank, now that the escape gate is fixed and the reasons distribution has moved.

Deliberately skipped this turn: the full-image refusal ranking. Same reason as last turn — one more heavy
process steals wall-clock from rows the audit is judging, and a contention-induced `hang` is a fabricated
finding, not a slow run.

Reads only; no knob touched; nothing booked; judged directories untouched.
