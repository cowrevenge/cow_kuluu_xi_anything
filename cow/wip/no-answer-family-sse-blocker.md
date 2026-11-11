# The rows that never answered: 116 of them are one unlifted function, and the label `hang` was wrong twice

Population: the 331 `lift_proof_all.json` rows whose `why` is `hang` (211) or `no_row_output` (120) —
rows with **no verdict at all**, plus 49 separate `timeout` rows. The prior turn profiled their bodies
(`lift_noanswer_profile.py`) and found nothing: small units 95% vs 97% baseline, backward goto 34%/29%,
the only 2x ratios (`indirect call`, `size:big`) covering ~20 and ~3 units. Two hypotheses were left;
this turn ran both to ground and then found a third by *running one unit*.

## 1. The seed theory was untestable, and the tool said "DEAD" when it meant "empty"

`lift_noanswer_seed_probe.py` first printed:

> The seed theory is DEAD too: no-answer rows are LESS likely to carry pinned states than the ones that answered.

That was a lie produced by an empty intersection. Every group — including the *passing* control — scored
0% seed coverage, which is the standing dead-filter signature. The tripwire (`seed_info()` on a real
seed file) fired correctly, so the parser was fine; the populations were not. **All 31 files in
`cow/seeds/` are hand-written units** — `100083b0` → `src/unsorted/cow_100083b0_counted.c`,
`100dbe30` → `src/net/cow_100dbe30_net_clock_reset_accum.c`, `102d7c47` →
`src/geom/cow_102d7c47_rotation_matrix_from_axis_angle.c` — and **zero of the 31 appear as a row in the
lift ledger**. Lifted units get their states from the fuzzers; `cow/seeds/` is read by
`cowdiff.py:load_seeds` for hand entries only.

The tool now computes the intersection first and refuses to compare rates across an empty one: *"THE
QUESTION IS UNANSWERABLE HERE, not refuted."* A zero from a filter that cannot judge its input reads
exactly like a finding, which is why this kept producing confident sentences.

## 2. The blocker found by running one unit instead of counting a thousand

`0x100309b0` is booked `hang` — *"run alone; silent for 12s (parked in a host call or a register-only
loop - no in-process budget can reach it)"*. Run standalone at `--states 1` it does not go silent for
twelve seconds; it dies immediately and answers in 63s:

```
[recomp] FATAL at 100309b8: unimplemented: movups xmm0, xmmword ptr [ecx]
  100309b0 state 0: fault (... fault -536870899/-1073741819 @00000000 ...)
{"entry":"100309b0","states":1,"mismatches":1,"reason":"fault","blocks":4,"blocks_total":41}
```

All 37 unreached instructions are SSE: `movaps / shufps / mulps / addps / movlps / movss`. The two
sides disagree about the **machine**, not the arithmetic: side B (our lift) took Ghidra's reading and
computes scalar `float`s (`rdf32`, `fVar1..fVar17`), which runs fine; side A — `generated/all/funcs_*.c`,
the recompiler's own translation, i.e. **the oracle** — reaches `RT_UNIMPL` (`guest.h:159` → `rt_fatal`).
A unit like that has no reachable PASS: the mismatch we report is the oracle's own death, not a
conversion defect.

`lift_unimpl_census.py` counts, per verdict class, units whose generated body carries ≥1 `RT_UNIMPL`:

| class | units | carries ≥1 RT_UNIMPL |
|---|---|---|
| pass | 6466 | **0 (0%)** |
| fail-compared | 3701 | 1 (0%) |
| no-answer | 331 | **26 (8%)** |
| timeout | 49 | 0 (0%) |

The number that matters is the zero on the PASS row: the oracle has never once passed a unit it cannot
execute. That makes `RT_UNIMPL` the first genuinely *named* pattern this population has produced — the
`eax` (1134) and `memory` (1319) buckets stayed shape-noise at 10%/11% under `--drill`. It has one owner
(the runtime's opcode table, `RT_UNIMPL` sites) and the histogram says in what order:
`movaps 175, shufps 133, mulps 105, addps 74, movss 63, addss 48, movups 44, movlps 25, movhlps 16,
movhps 16, subps 7, prefetchnta 6, unpcklps 6, pand 5`.

**Not claimed:** that SSE is *why* those rows say `hang` rather than `fault` (the chunk exe and the
standalone exe report differently — see §4), and that it explains the group: **305 of 331 carry no
unimpl at all**. Whether it is worth anyone's time is answered in §2b, and the answer is no.

Two of my own filters were dead before the numbers above were trustworthy: the census's `UNIMPL_RE`
required lowercase hex and missed the `u` suffix (`RT_UNIMPL(0x100309B8u, "movups ...")`), silently
degrading every site to `<unparsed RT_UNIMPL>` — caught by the tripwire that demands the exemplar be
flagged *specifically for movups*.

### 2b. And then the census killed its own finding, on the size question

A named blocker is only worth anyone's weekend if it is big. `--corpus` asks the whole corpus, including
the units nobody has lifted yet:

```
units defined in generated/all: 21891
of them carry >=1 RT_UNIMPL:    211 (1.0%)
  ...already machine-lifted: 27   never lifted: 184

top  8 mnemonics  ->  14 units become diffable (0.1% of corpus)
top 12 mnemonics  ->  23 units become diffable
top 20 mnemonics  ->  90 units become diffable (0.4% of corpus)
```

Per-**unit** mnemonic frequency (not sites — one vector loop can hold 35 sites and would otherwise
order the work wrongly): `movq 84, movaps 78, mulps 73, femms 72, pfmul 69, addps 69, shufps 67,
movss 63, pfadd 60, movd 59, punpckldq 57, punpckhdq 50, pxor 47`. The ranking is SSE *plus 3DNow!*
(`femms/pfmul/pfadd` — AMD-only) plus MMX (`movq/movd/punpck*`): three instruction sets, not one.

So the honest recommendation is **no**: implementing the vector opcodes is not the lever. It unblocks
26 of 331 no-answer rows and 27 lifted units — real, and it is the entire truth about those units —
but even a top-20 opcode set makes **90 of 21891** units (0.4%) merely *diffable*, not passable. Anyone
who spends a week on `movaps` expecting the 4081-failing mountain to move will be disappointed by two
orders of magnitude. This number is the useful part: it closes the avenue, and it closes it in the
direction that matters — the value is not in the opcode table, so it is in what lift.py does.

## 3. The build-time theory, killed by reading the code it accused

The obvious suspicion — 12s of silence vs 63s of measured wall time, so `hang` is just cl/link — is
wrong. `lift_proof.py:943-978`: the solo pass runs each suspect row against `exe_of[e]`, the exe already
linked for its chunk, with `rows=[e]` and *no rebuild*; where no exe survives it books
`harness_timeout`, not `hang`. So the 12s window contains no compile, and the silence is in-process.
The comment's parenthetical ("parked in a host call or a register-only loop") is still an
interpretation, not a measurement.

## 4. The experiment as designed (kept for its decision table; §5 is the result)

A chunk packs 400 instrumented originals into one process. A row that never prints in that company is
not necessarily a row that never prints alone. `lift_hang_sample.py` selects 10 no-answer units with
**no** unimpl site (SSE-blocked ones excluded, with a tripwire proving the exclusion can fire) and hands
over the command; it is running as `build/lift/hang-chunk1.log` with `--chunk 1 --states 400
--solo-idle-secs 60 --idle-secs 240 --rerun --out build/lift/hang-chunk1.json` (scratch, not the ledger
— nothing here books anything).

| outcome | meaning |
|---|---|
| answers now (pass or a compared fail) | the silence was the **chunk**, not the unit: the 331 are unverified rows, and the fix is patience/harness shape, not lifted code |
| silent again at 60s | it is the unit: `hang` stands, label stays "needs a run to see where it spins" — a trace/debugger job, not a lift job |
| mixed | the group is two groups; split and count each |

Sample: `0x100648d0, 0x10085990, 0x10087910, 0x1008aa80, 0x100eab80, 0x10260af0, 0x102ef252, 0x10327840,
0x10327c58, 0x103280b8`.

## 5. The experiment's answer: `hang` is two groups, and neither of them is what the label says

Ran as `build/lift/hang-chunk1.log` with `--chunk 1` (one exe, one row, no neighbours), 400 states,
60s solo fuse, 240s chunk idle, `--out build/lift/hang-chunk1.json` — scratch, nothing booked.

| unit | ledger said | alone it says |
|---|---|---|
| 0x100648d0 | `hang` | **`edx`** — 10 mismatches, first at state 1 |
| 0x10085990 | `no_row_output` | **`eax`** — first at state 0 |
| 0x10087910 | `no_row_output` | **`eax`** — first at state 0 |
| 0x1008aa80 | `no_row_output` | **`memory`** — first at state 4, image store=value |
| 0x100eab80 | `hang` | silent, chunk of one |
| 0x10260af0 | `hang` | silent, chunk of one |
| 0x102ef252 | `hang` | silent, chunk of one |
| 0x10327840 | `hang` | silent, chunk of one |
| 0x10327c58 | `hang` | silent, chunk of one |
| 0x103280b8 | `hang` | silent, chunk of one |

So the label was wrong in both directions at once, which is why no body-feature profile could ever have
found a separator: **4 of 10 were never hangs at all.** They print ordinary comparison verdicts the
moment they stop sharing a process with 399 other instrumented originals — `edx`, `eax`, `eax`,
`memory`, i.e. exactly the classes the failing population is made of. Whatever lost those rows in the
chunk pass was a property of the harness run, not of the unit. The other **6 of 10 do not return even
alone at 60s**, and `hang` is the honest word for them.

Bounds on that, said plainly: n=10. "Roughly half" is 4/10 with a wide interval, not a census — but the
claim it supports is only existential ("some `hang` rows are chunk artifacts"), and that one is proven
by four units that now print verdicts.

Two things follow.

1. **The histograms understate.** `lift_failure_patterns.py` counts 4081 failing rows and treats the 331
   no-verdict rows as a separate, unclassifiable group. Some of that group is `eax`/`edx`/`memory`
   wearing a different label, so the class sizes I have been quoting are lower bounds by an unknown
   amount, and any "the eax bucket is 1134 strong" sentence carries that caveat now.
2. **None of it passed.** Zero of the ten came back PASS, so this reclassifies; it does not prove
   anything and threatens no booking. The halt stands on its own numbers.

The real hangs cluster: three of them sit at `0x10327840 / 0x10327c58 / 0x103280b8`, and `0x10327850` is
already booked as one of the 9 `timeout` units. Five spins, three of them within ~800 bytes of each
other and near a sixth slow unit, is not ten unrelated loops — that is a **shared callee**. Checking what
those addresses call (a bridge into not-yet-lifted code, or one host import) is the next real lead on
this group, and it is a cheaper lead than a debugger.

Reclassifying all 305 would cost 305 × (build 30-60s) ≈ 3-5h at `--chunk 1` under audit contention; at
`--chunk 25` it is ~12x fewer builds. Not worth spending while the audit holds the harness for its last
hours — but it is the job that turns "some of the 331 are mislabeled" into a number, and it should run
with a mid-size chunk once the lock frees.

## 6. The head of the thread: 116 of the 211 `hang` rows park in ONE unlifted function

Following one sampled spinner to its end (`lift_hang_callee_scan.py`, then `lift_hang_families.py`)
produced the largest single cause found in this whole investigation:

```
f_10316337 is called by 119 unit(s) in generated/all; 116 of them have a ledger row
  their ledger verdicts: {'hang': 116}
  is f_10316337 itself lifted? NO
```

**116 of the 211 `hang` rows — 55% of the class — are units whose only call target is `f_10316337`**, a
function that has never been lifted. Not 116 unit defects; one missing conversion standing in front of a
family. This is also why §0's body-feature profile could never find a separator: most of those units are
thunks (`{ REGS_STORE; f_10316337(g); return; }`) — the spin was never inside them.

Guards that make the number mean something: `0x10327840` must land in the `f_10316337` family (capability
tripwire, it does); **0 passing units call `f_10316337`** (discrimination — the first version of this scan
was a dead filter that matched only `cow_bridge_call_` while lift.py emits `cow_bridge_tail_`, and still
printed "NO SHARED CALLEE", so a refusal now fires if the predicates yield nothing).

Full decomposition of the 331 no-answer rows:

| bucket | units | what it means |
|---|---|---|
| family `f_10316337` (unlifted) | 116 | one conversion, then re-measure |
| other `MISSING CONVERSION` families (`f_1002c8f0` 4, `f_10313d30`/`f_100875d0`/`f_102d2c36`/`f_102e7670` 3 each) | ~19 | same shape, smaller |
| `lifted and runnable` families (`f_10087660` 7, `f_10087b20` 3, `f_1015e790` 3) | 13 | the spin is real code — trace it |
| call-free, no callee at all | 101 | includes the 26 SSE-blocked units from §2; only a trace reaches these |
| multi-target (unattributable) | 46 | left unattributed on purpose |
| chunk artifacts (proved in §5) | ≥4 | mislabeled; really `eax`/`edx`/`memory` |

### What the head of the thread is blocked on, and what I will not do about it

`f_10316337` is **not in any queue** — the only place it appears outside `generated/` is
`layout/lifted_bridges.h`. It **is** already decompiled (`functions_all.jsonl` has it), so it is liftable
in principle, and `lift.py --entries 0x10316337` (report-only, writes nothing) says why it is not:

```
by reason:
  argcount_mismatch_10320fb3_ghidra4_push11           1
```

Ghidra says 4 arguments at caller `0x10320fb3`; the bytes push 11. That refusal class is **2,134 units**
and it is already parked in `cow/skip_patterns.txt` with evidence, after `lift_pushdiag.py` censused 250
refused units and found 1,095 of ~1,300 call sites "unnameable" (`lea <r>,[esp+IMM]` ~180,
`mov <r>,dword ptr[...]` ~110 — which `_operand_expr` refuses on purpose — transitive `mov <r>,<r>` ~90,
`pop <r>` ~97), concluding the fix needs each pushed word materialised into a local at push time, which
the lifted body cannot express in general. `loop-notes.md:303` is explicit: *do not invent an arg-count
rule*.

So the new datum is not a rule, it is a **price tag the parked entry never had**: the parked class has at
least one member whose downstream cost is now measured at 116 blocked rows, with a single named exemplar
(`f_10316337` at caller `0x10320fb3`) that is small enough to read end-to-end. That is the argument for
revisiting `argcount_mismatch` in priority order — not evidence that it is easy, and not permission for me
to guess at it while the census above stands unrebutted.

Nothing here was booked or written to a judged directory: the audit holds the harness and `src/`, `layout/`
are MATERIAL under it, so lifting `f_10316337` waits until the audit finishes — a new `src/lifted/` file
plus a `lifted_addresses.h` edit mid-audit is exactly the material move `reverify.py` is watching for.



## 7. Loop state while the audit finishes

The chunk-of-one run was stopped after its answer was in hand (4 answered / 6 silent, all ten recorded
above); letting its four retry rounds finish would have cost the audit another hour of the machine, and
the audit is the gate on the re-lift, which is the larger payoff.

Nothing booked — the halt is honored and no knob is on. The measured re-lift (170 accepted units, 22
booked-pass, via `lift_relift_run.py --apply` + `lift_relift_verdict.py`) is still gated on the harness
lock, which the population audit (`reverify.py --jobs 8 --depth booked`, pid 20748, pinned `d8705dba`)
holds; at ~3.5s/unit it has roughly four hours left. The three `hang`-adjacent tools here are read-only
and ran alongside it.
