# The rows that never answered: one real blocker found, one theory retired, one experiment running

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
unimpl at all**. 27 units ledger-wide is 0.26% of the population; the case for implementing SSE is made
by the corpus-wide count, not by this table, and that count has not been taken yet.

Two of my own filters were dead before the numbers above were trustworthy: the census's `UNIMPL_RE`
required lowercase hex and missed the `u` suffix (`RT_UNIMPL(0x100309B8u, "movups ...")`), silently
degrading every site to `<unparsed RT_UNIMPL>` — caught by the tripwire that demands the exemplar be
flagged *specifically for movups*.

## 3. The build-time theory, killed by reading the code it accused

The obvious suspicion — 12s of silence vs 63s of measured wall time, so `hang` is just cl/link — is
wrong. `lift_proof.py:943-978`: the solo pass runs each suspect row against `exe_of[e]`, the exe already
linked for its chunk, with `rows=[e]` and *no rebuild*; where no exe survives it books
`harness_timeout`, not `hang`. So the 12s window contains no compile, and the silence is in-process.
The comment's parenthetical ("parked in a host call or a register-only loop") is still an
interpretation, not a measurement.

## 4. The experiment still open: does the silence belong to the unit or to the chunk?

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

## 5. Where the rest of the loop stands while this runs

Nothing booked — the halt is honored and no knob is on. The measured re-lift (170 accepted units, 22
booked-pass, via `lift_relift_run.py --apply` + `lift_relift_verdict.py`) is still gated on the harness
lock, which the population audit (`reverify.py --jobs 8 --depth booked`, pid 20748, pinned `d8705dba`)
holds; at ~3.5s/unit it has roughly four hours left. The three `hang`-adjacent tools here are read-only
and ran alongside it.
