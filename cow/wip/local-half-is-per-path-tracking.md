# The local half is not a smaller version of the param half — it is per-path esp tracking, and 2 units is not a mechanism

`COW_MODEL_PARAM_BIND_MEASURE` reached 32 units because a stack argument's slot is **forced**: `sp0 + 4u +
4k`, above every push, whatever the body does. The tempting follow-on was "now do locals the same way, with
the witness pointed below sp0 instead of above". `lift_local_feasibility.py` tests that idea on its own
population (43 units still refusing on a local escape, verified live through `classify()` + `emit()`) and
the answer is no, with numbers.

## The three questions, answered from the data

The note said these had to be answered before building anything. They are, and one tool answers all three.
The tallies below were **recomputed independently** of the printed histogram (the Q1/Q2/Q3 partitions each
sum to 43), because the first draft of this page quoted "35 of 43" and "2 more" from adding up the printed
buckets by eye — and the real figures were 41 and 0. A number you read off a table and re-added in your
head is not a measurement.

**Q1 — where is the source of truth?** Only where a guest `lea reg,[esp±const]` exists *and* the model's
per-instruction esp delta is trustworthy, i.e. on the straight-line prefix before the first control
transfer. Of 43:

| Q1 bucket | units |
|---|---|
| `after-branch` — the address leas sit **below** the first `j*`/`call`, where `d` is a path property, not a fact | **28** |
| `no-lea` — there is no stack `lea` at all; Ghidra folded the address out of existence | **11** |
| `prefix-witnessable` | **4** |

**Q2 — do the bytes stay alive?** Of 43: **22** reserve their locals in the prologue (`locals > 0`), **17**
grow the frame by pushes only, and **4** have a `sub esp,N` that the prologue scan never reached — so the
emitted adapter does not reserve the region the "local" would live in. A third arm of the classifier
(*no* frame growth at all) **never fired on this population**, so it is reported as unexercised rather than
quoted as a result. For the prefix-witnessable pair, `locals == 0`: the slot Ghidra calls `local_4` is a
word the guest used *below* esp while pushing — a **pushed temporary**, not a reserved local, and a third
mechanism again.

**Q3 — what stops it naming the wrong slot?** The witness needs one addressed name per witnessed lea.
**41 of 43** fail that count outright (`1 names vs 0 witnessed leas`, `2 vs 1`, `3 vs 0`, `1 vs 2`...). Of
the four prefix-witnessable units, **two** are clean (`f_10009ea0`, `f_10009ee0`: one `local_4`, one lea at
`sp0-4`); the other two have two witnessed leas for one name, which is a guess.

## The decision, and the standard it was measured against

**Do not build the local binding.** The clean slice is **2 units out of 43**, and the mechanism required is
not "the param witness, pointed the other way" but per-path esp tracking plus a pushed-temporary model plus
a folded-address recovery path — three new semantics for two units.

That is judged against the bar this repo already uses, and records itself next to the other rejected work
so nobody re-runs the idea: SSE implementation was killed at 90/21,891 (0.4%); a `g->reg` widening at 5 of
58 (8.6%); `rdf32(frame+N)` was rejected for the `f_10316337` family because that unit needs a local slot
too. Two units with three mechanisms behind them is worse than all of those.

The 42 stay refused, which is where they have always been, under a name that says what is missing. The
list `cow/wip/local-witness-candidates.txt` exists so the pair can be re-checked if per-path tracking ever
arrives for another reason - it is **not** a queue, and nothing is queued from it ("a queue count is not a
pipeline").

## What this does for the ranked list

The frame-binding design is now **finished as a design**: the param half is implemented behind a
measurement-only knob at 32 units, and the local half is measured to a wall with its shape named. The next
real lever is elsewhere, in this order:

1. **Release the queue the harness is holding.** `relift-run-170.txt` is staged one command away, and the
   679-unit npush list needs a whole-population lift for its layout macros. Both are waiting on the audit,
   not on thinking.
2. **Re-measure the hang/timeout families on a free box** (`leaked-cowdiff-processes.md`) — the wall half
   of the row budget means some of the 116-row `f_10316337` family and the 9-unit timeout class may be
   contention artefacts, and both were used to justify design work.
3. **`argcount_mismatch` (2,943)**: the frame binding turned out to gate only ~53 report-only units, so this
   family needs a fresh cause-level ranking now that the escape gate is fixed — the reasons distribution has
   moved under the changes landed today, and the stale table is the trap `lift_refusal_ranking.py` exists
   to catch.

## Two defects in the measuring tool itself, caught before its answer was used

* The first version printed lea addresses as `0x268475951` — `hex(int(str(a), 16))` applied to an **int**,
  which re-reads the decimal digits as hex and produces something that looks like a code address and is
  not one. Bucket logic compares addresses to each other so it was unaffected, but a printed address that
  is wrong is worse than none: a reader would look for an instruction that does not exist. Fixed with one
  `hexof` formatter that accepts int or hex-string and refuses anything else, then **re-run to confirm the
  buckets did not move** — they are identical, which is the only thing that makes "it was a display bug" a
  statement rather than an excuse.
* The patch script for that fix silently matched nothing at first and was caught by its own probe
  (`"hexof(l['addr'])" missing`); its fallback then edited the normalised copy instead of the raw file.
  Both failure modes are the reason every patch in this repo asserts an anchor count before writing and
  re-reads afterwards.

Reads only; no knob touched; nothing booked; judged directories untouched. The audit still holds the
harness.
