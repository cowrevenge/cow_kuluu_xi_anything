# The two biggest failure buckets are not patterns — measured before writing a fix for either

LOOP's first priority is "fix the biggest lift pattern", and the failing-lifted population has 4,081
rows sitting in `cow/lift_proof_all.json` with the harness's own reason recorded. Grouping them was
cheap and static (no harness lock, which the population audit still holds), and it says the obvious
reading of that priority order is wrong.

## The histogram (`lift_failure_patterns.py`)

```
  count  kind                   region   store     fault      state
   572  eax                    -        missing   no-fault   state0
   562  eax                    -        missing   no-fault   later
   259  fault                  -        missing   no-fault   later
   247  fault                  -        missing   no-fault   state0
   244  memory                 stack    missing   both-fault state0
   237  edx                    -        missing   no-fault   later
   211  hang                   -        -         -          -
   196  edx                    -        missing   no-fault   state0
   183  memory                 stack    value     both-fault state0
   156  memory                 stack    missing   both-fault later
   124  callee-saved register  -        missing   no-fault   state0
   120  no_row_output          -        -         -          -
   115  callee-saved register  -        missing   no-fault   later
    96  memory                 stack    value     both-fault later
    88  memory                 stack    value     no-fault   state0
    85  memory                 stack    extra     both-fault state0
```

`hang` (211), `no_row_output` (120), `timeout` and the 8 rows I refused to book are named as themselves
rather than dumped in an `(unparsed)` bucket — a hang counted as a comparison failure would have sent
someone chasing a lifter bug that does not exist.

## The two biggest kinds fail the "is it one defect?" test

`--drill <kind>` splits a kind by which side is zero and what *kind of value* the other side holds
(zero / small-constant / harness-stack-arena / image / heap-ish).

| kind | rows | dominant shape | verdict |
|---|---|---|---|
| `eax` | 1134 | `ours=0, theirs=harness-stack/arena` — **111 (10%)** | no dominant shape |
| `memory` | 1319 | `theirs=0, ours=small-constant` — **148 (11%)** | no dominant shape |

**So neither is a pattern.** A "fix the lifter's eax returns" patch — the single most tempting piece of
work this data invites — would have been aimed at a bucket that is really ten mechanisms of ~40 rows
each, and it would have been measured against nothing. The tool prints that verdict itself
(`-> NO dominant shape. Do not write one fix for this kind; read three rows first.`) so the conclusion
does not depend on my mood later.

## What this does point at

* **`callee-saved register` 239 rows** — small enough to be one shape, and it is exactly what this
  session's three knobs attack (270 unpaired pushes, 209 over-pops, 30 tail epilogues). That is the
  coherent pattern of the set, and its payoff is the re-lift the queue is already staged for.
* **`memory` + `stack` + `both-fault` — 828 rows** (244+183+156+96+85+64). A coherent *family*: both
  sides fault at the same place, and the harness still compares stack memory afterwards. Whether those
  stack diffs are real behavioural differences or artefacts of how far each side got before the same
  exception is a question worth one careful read — it is the largest well-shaped group left, and the
  register comparison already has a fault gate, so a symmetric blind spot may exist here too.
* **`hang`/`no_row_output` (331 rows)** are a harness/pipeline problem, not a lifter one — they should
  never be counted as lift defects at all.

## Two mistakes this file caught in itself, in the making

1. `DETAIL_RE` required hex, but `detail` is the **folded** line — addresses and values are masked to
   `#`. Result: `(unparsed)` on **100% of 4,081 rows**, i.e. a clean empty histogram that reads like
   "no pattern found". The by-eye tripwire on `0x10002460` turned that into a refusal.
2. `--drill eax` then reported **1134/1134 rows with both sides zero** — impossible for a mismatch —
   because for register kinds the compared values live in the trailing `reg=<name> A/B` clause, while
   the `@addr va/vb` pair is memory-diff bookkeeping. The fix that mattered is not the regex, it is the
   **contradiction guard** now in the tool: *"the two sides are equal" cannot explain a reported
   mismatch, so that parse refuses.* Every confident wrong number in this loop started as a filter
   answering a question it was not capable of answering; the guard makes that class of mistake exit
   non-zero instead of printing a table.
