# Rule 10(c) stop - decision memo

Line stopped 07:25, `build/conveyor/STOP` present, no `conveyor run` process. Judge untouched (rule 4);
`audit()` and `conveyor.py` untouched (rule 6). Nothing here restarts anything - it is the evidence for a
decision that belongs to the user.

## The stop, verbatim

```
AUDIT LOW: 29 of 37 mutants killed (78.4%), 30 unit(s) sampled -> cow/conveyor/audit.json
```

Kinds: bump-constant 9/5, drop-store 14/1, flip-compare 5/1, bump-return 1/1. Gate is 90%.
Not load: `audit()` counts a timeout as KILLED, so load can only inflate the rate - a survivor really
passed while broken.

## All 8 survivors, each with a control that fires

Every row: A = committed file (gold, so the unit's judge path works), B = the audit's mutant (gold, so the
recorded survivor reproduces today), C/D = a mutation on the same path that must be visible.
Run through the shipped `conveyor.prove()`, arms under `build/scratch`, nothing in `src/`, no judge file,
and the proof record is not reachable from `prove()` (verified: all six control subjects still hold exactly
one row, `src` sha1 == committed bytes, `tier=gold`, judge `7f9969cd916e`, of 10,610 records).

| unit | kind | what the mutation actually touched | control outcome | why the mutant is not a judge hole |
|---|---|---|---|---|
| 0x10054460 | bump-return | text inside a `/* */` block | n/a - definitional | byte-identical after comment stripping: invalid mutant |
| 0x10054460 | bump-constant | `g->ecx = self - 0x30u` | store at top of body -> **FAIL memory** | ecx after a call is not in the compared set |
| 0x10100ad0 | bump-constant | bridge `npush` 4 -> 5 | real pushed arg VALUE on same call -> **FAIL memory** | callee never reads the extra slot (see D) |
| 0x1000d320 | bump-constant | bridge `npush` 2 -> 3 | real pushed arg VALUE -> **FAIL eax** | same |
| 0x10081a50 | bump-constant | bridge `npush` 1 -> 2 | real pushed arg VALUE -> **FAIL fault** | same |
| 0x10081a50 | drop-store | removed `wr32(1047d578, 0)` | same store, value `0xA5A5A5A5` -> **FAIL memory** | that address IS compared, so it already held 0 in every clean state |
| 0x1001b870 | flip-compare | `(param_2 & 1) != 0` -> `== 0` | store INSIDE that branch -> **FAIL memory** | branch genuinely exercised (stack args come from `fuzz_word`); guarded callee `f_10028710 -> f_10028aa0` (a list unlink) has no compared effect in the clean states |
| 0x100050e0 | bump-constant | eax mask `0xffffff00` -> `0xffffff01` | mask `0xffff0000` -> **FAIL eax** | adapter replays `xor al,al`, so bit 0 is provably 0 |

### The arity rows are measured, not argued

The audit's mutant bumps `npush` without extending the args array, so the extra push reads
`args[npush]` **past the end** of the compound literal - undefined behaviour, and its survival could have
been luck about adjacent host stack. Arm D bumps `npush` *and* defines that word as `0xdeadbeef`, so the
only remaining difference is the callee's view of slot `npush`:

| unit | A committed | B audit mutant | D defined bump |
|---|---|---|---|
| 0x10100ad0 | gold 11/11 | gold 11/11 | gold 11/11 |
| 0x1000d320 | gold 8/8 | gold 8/8 | gold 8/8 |
| 0x10081a50 | gold 19/19 | gold 19/19 | gold 19/19 |

Scope note: that is measurement over the sampled clean states, not a universal proof. `args[0]` is pushed
last and does not move, and the adapter sets `g->esp = sp0`, so the extra word sits below the returned esp
- which the contract excludes anyway.

## What the gate number actually depends on

`audit()` divides by every mutant it generated, including ones that cannot be seen. The eight survivors
form a DISJOINT taxonomy (each mutant counted once):

| # | class | row | basis |
|---|---|---|---|
| 1 | invalid by definition (comment-only) | 0x10054460 bump-return | byte-identical after comment stripping |
| 2 | excluded by contract (`ecx` after a call) | 0x10054460 bump-constant | SYSTEM2 judge v2 list; control store fired (memory) |
| 3-5 | inert push-count bumps | 0x10100ad0, 0x1000d320, 0x10081a50 bump-constant | arm D gold with the pushed word defined |
| 6 | equivalent by data (0 stored to an already-0 word) | 0x10081a50 drop-store | value changed to 0xA5A5A5A5 -> caught (memory) |
| 7 | equivalent by data (branch guards an inert callee) | 0x1001b870 flip-compare | store inside the branch -> caught (memory) |
| 8 | equivalent by data (mask bit provably 0) | 0x100050e0 bump-constant | mask 0xffff0000 -> caught (eax) |

The rate as a function of which exclusions the contract licenses:

| denominator | rate | vs 90% gate |
|---|---|---|
| all 37 mutants (as shipped) | 29/37 = **78.4%** | fails |
| minus the comment-only mutant | 29/36 = 80.6% | fails |
| minus the `ecx` mutant too | 29/35 = 82.9% | fails |
| minus the 3 `npush` mutants too | 29/32 = **90.6%** | passes, barely |
| minus the 3 equivalent-by-data mutants too | 29/29 = **100%** | passes |

**Correction to my earlier wording, kept in the open:** I previously quoted "29/33 = 87.9% excluding
comment+ecx only" and "29/30 = 96.7% also excluding the three npush rows". Those buckets overlapped - my
classifier had labelled 0x10100ad0 and 0x1000d320 `ecx_only` only because `g->ecx` appears in the changed
line, while they are also two of the three `npush` rows. The ladder above counts each mutant exactly once.

So the stop turns entirely on a question I am not allowed to settle myself: whether `audit()` may
pre-screen its own mutation set against the judge v2 contract. The mutation set was evidently calibrated
for the old always-compare-eax judge, which is why it keeps producing invisible mutants. Note that even
the narrowest defensible exclusion - dropping only mutants that cannot be observed at all - clears the
gate at 90.6%, so this reads as a mutation-set calibration failure, not as evidence of a weak judge.

## Options

- **(a) recommended** - one scoped exception: `audit()` skips mutants that are comment-only, confined to
  `g->ecx`, or confined to a guest bridge's push count, and requires a mutation to touch a compared
  observable. Cost: a `conveyor.py` edit (rule 6), which I will not make unilaterally. Reversible, keeps
  the gate honest, and the prescreen is checkable against the contract list in SYSTEM2.
- **(b)** re-issue the delivery with a contract-aware mutation set (drop-store/flip-compare/bump-constant
  aimed only at compared observables). Cleanest, but it is your artifact, and it re-opens the 90% number on
  a fresh sample.
- **(c)** declare the gate advisory and restart the line as-is. Cheapest; leaves a self-check that cannot
  fail meaningfully.

## Unrelated but still open, needing a word

The baseline prover is still running (pid 10164, `lift_proof.py`, solo ~940/7473, 1,857 passed) and is
still booking gold under the judge now under review. Say **"stop"** and I end it; otherwise I leave it,
because rule 10 names the line, and discarding ~13h of in-flight progress is not my call.

Scoreboard when this was written: PROVEN C **1,434 functions / 36,079 bytes / 1.15%**, judge
`7f9969cd916e`, HEAD `c7c8905f`.
