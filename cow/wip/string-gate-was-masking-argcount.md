# What the string gate was really hiding: 394 units clear it, 36 lift, and 241 were waiting behind argcount

Priced the frame-slot design before building it, using the loop's own pattern: a **measurement-only knob**
plus a report-only run. The number came back saying the design I had just spent a turn promoting is not
the binding constraint — and along the way I caused an incident that is the more important entry in this
file.

## 0. The incident: my control run truncated the shared bridge table

To test the *specificity* of a guard I had just added, I ran the guarded command once **without** the
knob — `lift.py --entries 0x99999999 --apply`. Nothing matched, nothing lifted, and the run still rewrote
`layout/lifted_addresses.h`, `layout/lifted_bridges.h` and `layout/lifted_bridges.c` **from its own empty
`ctx.layout`**. 6.7 MB of generated bridges — the callee table every lifted unit calls through — went to
nothing. Restored with `git checkout` (committed, so recoverable); verified byte-identical to HEAD, sizes
back to 6,687,952 / 3,019,597.

Why it is worse than a bad edit: `layout/` is MATERIAL, and the population audit (pid 20748) was reading
those files at the time. **Follow-up owed:** when `cow/reverify-booked.json` lands, check for
`compile_blocked` / `build_exception` / `link_error` / `no_row_output` verdicts that could belong to that
~2–3 minute window and re-run those units before any of the audit's numbers are used. A transient build
failure recorded as a unit's verdict would otherwise be attributed to the code, not to me.

And the root cause was not carelessness alone — it is a missing guard that had already bitten twice. The
prune step refuses to delete on a restricted run (`lift.py:1849` records `--apply --entries` on a 500-unit
sample reporting `pruned_stale 7751` and deleting the whole lifted population), and `lift.py:1671` records
*this exact* bridge-table trap in prose. The prune got a guard. The layout write — which is worse, because
every lifted file `#includes` what it writes — did not.

**Fixed:** the layout write now requires the same whole-population invariant as the prune, and prints why
it skipped. Strictly protective: it can only *prevent* a write, never cause one. Verified behaviourally in
a scratch `--out-dir`: guard fires, `git status` on `src/ layout/ runtime/ ledger/ meta/` stays empty.
(The message itself printed as `its ownselection` / `woulderase` until I fixed the adjacent-literal
spacing — a safety message you have to re-read is one that gets skipped.)

**Lesson, written down so it costs less next time:** a *control* for a write-guard must not itself perform
the write. The safe specificity test was "same command, knob set → refuses; knob unset, no `--apply` →
proceeds", not "run the dangerous branch and hope the entry doesn't exist".

## 1. The knob: `COW_MODEL_STR_PROV_MEASURE`, and it cannot write files

`gen_model` admits `lea reg,[base ± CONSTANT]` as explained provenance (`_str_lea_const` refuses anything
with an index register, so `[esp + eax*4]` stays refused); `lift.py` **refuses `--apply` while the knob is
set**. That last part is the point: admitting the provenance without binding the frame emits a body whose
string destination is an unnamed address — it compiles, it looks right, and cowdiff compares *guest*
memory, so a callee that never reads it back would let the row PASS. The discipline in `string_shape`'s
own docstring ("the refusal guards the report, not the player") is now enforced in code, not prose.

Guard verified: knob set + `--apply` → `REFUSING…`, exit 1. Knob off → proceeds.

## 2. The bug the price run caught in my own knob

First price run: `string_op_not_modelled` only fell 512 → 489 and just 5 units lifted — while a **brand new
reason** appeared: `string_op_not_modelled_operand_stack-const`. An admitted value was being *re-reported*
as a refusal, which is worse than the original because it looks like a fresh family rather than an
unfinished knob.

Cause: the explained-provenance list existed **twice** — I added `stack-const` to `_str_prov`'s chain
inheritance but missed the identical tuple in `string_shape`'s final gate:

```python
if p not in ("const", "never-written", "derived", "load-named"):
    return {"liftable": False, "why": "operand_" + p[:18], "forms": seen}
```

Fixed by collapsing both consumers onto one module-level `STR_EXPLAINED`. This is the same lesson as
`frame_save_addrs_of()`, which had to be shared by two walkers for exactly the same reason — the second
time this session a rule duplicated in two places has drifted, so it is a pattern, not a slip.

## 3. The result, which reorders the queue

Whole image, report-only, both positions:

| | knob off | knob on |
|---|---|---|
| lifted | 11,230 | **11,266 (+36)** |
| `string_op_not_modelled` | 512 | **118** (residue now led by `operand_load`) |
| `argcount_mismatch` | 2,702 | **2,943 (+241)** |

**394 units clear the string gate. Only 36 lift. 241 of them were waiting behind `argcount`.**

So `operand_stack_frame` was a *masking* refusal for most of its population, and the ranking it produced
was misleading: the frame-slot mechanism is genuinely single (85% — `strprov-shapes-bounded.md`), but
building the binding alone buys **~36 units report-only** before proof, not the 431 the bucket size
suggested. `argcount_mismatch` is now measured at **2,943 — the binding constraint**, and it is the class
where the frame-slot work and the push-naming work converge anyway (the 70 local-slot units, and
`f_10316337`, both need the frame bound *and* the push named).

`lifted` here means "the emitter produced a body", not "passes cowdiff" — and none of it is bookable,
because the emitted destinations are not yet bound to guest stack addresses. It is an upper bound on a
first slice, measured instead of assumed.

## 4. Verified before committing

Judged directories clean (`src/ layout/ runtime/ ledger/ meta/ cow/wraps.json`); inertness 125/125
byte-identical with the knob off; `lift_selftest` 255/255; the six regression checks green; the shape
census selftest still passes in both directions.
