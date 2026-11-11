# 58 of the 66 credible clobbers are one defect: the push is emitted but not modelled

Measured 2026-11-11 with `tools/cow/ghidra/lift_clobber_predicate_blindness.py --halfmodel SINGLE-EXIT`
(static; no builds, no cowdiff). Complements `clobber-count-corrected.md`, which reduced 168 claimed
clobbers to 66 the predicate can actually judge.

## The split

| count | shape | what breaks |
|---:|---|---|
| **58** | **push emitted but not modelled** | **esp AND the register** |
| 8 | save dropped entirely | register only; esp stays consistent |

Examples: `0x10003070(edi)`, `0x1006c050(esi)`, `0x10072db0(edi)`, `0x10098f50(edi)` / and
`0x10072c30(esi)`, `0x10131810(esi)` for the second group.

## The mechanism

Guest `f_10003070`:
```asm
10003073: push edi
...       edi = edx + 0x48
1000309a: pop edi
```
Our lifted file emits the save:
```c
g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10003073: push edi */
g->edi = (uint32_t)((uint32_t)(g->edx + 0x48u));
```
but the frame model says:
```
MODEL  pushes=['ebx']  pops=['ebx']  locals=0
```
so **nothing restores it**: `edi` returns as `edx + 0x48`, and esp is left 4 below where the guest
returns it.

It is a *disagreement*, not an omission - two components read the same `push <reg>` and reach different
conclusions:

- the **body replayer** sees it and emits the store;
- **`model_generated`'s frame read-back** does not record it in `pushes`, so no pop is ever paired with it.

So the fix is a single-source-of-truth question, not a whitelist entry: whichever component drives the
epilogue must be the one that decides the body's pushes, or both must consult the same list. Adding
registers to only one side leaves the two halves able to disagree again.

## What this is NOT (two claims I made and then checked)

**Not a lead for the 136-cluster.** An earlier draft called these "the strongest remaining lead" for the
cluster signature, because a broken esp plus a stale word in a compared stack slot look like the same
story. Checked against `cow/reverify.json`:

```
cluster size                   : 136
overlap  cluster x flagged-66  : 0
overlap  cluster x the 58      : 0
```

Disjoint populations. Similar shape, no shared units. The cluster remains **unexplained** after three
candidate mechanisms have been examined and rejected: the dropped `100dc1f0` wrap, booking depth, and
now this.

**Not a false green.** An earlier draft said all 58 "sit in the claimed-proven population", implying
`cowdiff` is blind to a clobbered callee-saved register. Spot-checking the four examples the tool prints
against the ledger:

```
units named in the bucket      : 4
booked pass in the ledger      : 0
```

**None is proven.** That is what a broken lift is supposed to look like - it fails proof and stays in
the unproven pool, so this is the pipeline working, not a coverage hole. The judge-blindness framing is
retracted.

*Full-population check (done, not deferred).* Counting the shape across every single-exit body and
joining to `cow/lift_proof_all.json`:

```
units matching PUSH-EMITTED-BUT-NOT-MODELLED : 74
  booked pass in the ledger  (candidate false greens) : 12
  unproven                   (pipeline correctly refusing) : 62
  e.g. 0x100ebd70, 0x100ef950, 0x1018c6b0, 0x10284970,
       0x102de39f, 0x102de613, 0x102de762, 0x102de9f4
```

So **62 are the system working correctly** - a broken lift fails proof and stays unproven. But **12 are
booked as proven while carrying a clobbered callee-saved register and an esp that is off by four**. Four
of those (`0x102de39f`, `0x102de613`, `0x102de762`, `0x102de9f4`) also appear among the 394 re-verify
failures, so the ledger's `pass` is already contradicted for them independently. Those 12 - not 74, not
58 - are the units that reopen the judge-coverage question, and each needs an individual look before any
claim about `cowdiff` blindness is made.

**The 58-vs-74 warning is resolved - and both numbers are retired.** They were never two counts of
one thing; they were two questions with one name. Everything about this shape now comes out of
`tools/cow/ghidra/lift_clobber_predicate_blindness.py --reconcile`, which runs ONE predicate
(`emit_state`) over explicitly NAMED populations and prints a ladder (transcribed at this commit - run
the command for the numbers as of today's tree):

```
P1  the classified clobber class, single-exit
      L0 emitter/reader disagree about the push : 58 of 66
      L1 AND the lift never restores it         : 58
      L2 AND the ledger still says pass         : 4
P2  whole lift, guest saves+restores the register, exactly one ret
      L0 disagreement                           : 439 pairs / 243 units
      L1 AND never restored                      : 137 pairs / 81 units
      L2 AND booked pass in the ledger           : 25 pairs / 12 units
```

**A dead filter had to be caught first.** The ledger join printed `0` for both populations, which
would have been reported as "no false greens". It was `booked_pass()` calling `io.open` in a module
that never imported `io` - a `NameError` swallowed by `except Exception: _ledger = {}`. The join is
now backed by a module-load tripwire that refuses to run unless a unit known to be booked pass reads
as pass. The same trap, third time this session.

**Vocabulary check before believing L1.** `--spellings` prints every distinct shape of a `g-><r> =`
line in the disagreement population, because a restore the counter cannot recognise is counted as an
absence. Every shape it printed is a *modification* (`g->edi = edx + 0x48`, `rd32(esp+0x10)` replays,
"the value the entry loaded and the decompiler dropped"), not a restore. L1 survives that check.

**A THIRD counter, and why it is bigger.** Reading the shipped adapters directly - no model, no
generated body - `tools/cow/ghidra/lift_frame_predicates.py` counts the units whose prologue pushes a
callee-saved register that nothing ever brings back:

```
  C (code-level)                                : 270 units / 413 pairs
  C and L1                                      : 81      <- L1 is entirely INSIDE C
  C only                                        : 189     <- the ladder's gates excluded them
  L1 only                                       : 0
```

L1 nests in C with nothing outside it, so the two counters do not contradict each other: C is the
defect a reader can verify on the file itself, and L1 is the subset where the frame *model* also
disagrees. The 189 are mostly the multi-exit and tail-call units the classifier already declared
unjudgeable, plus those where the guest never popped the register either. **For "does this unit
clobber the caller's register", quote C = 270. For "does the model know about the push", quote the
ladder. Never quote one as the other.**

## Why it is still worth fixing

58 units that cannot pass proof because of one systematic disagreement is a throughput item, and the
defect is mechanical rather than mysterious. It is also the third distinct frame-handling defect found
in this area today (the `add esp` run-breaker, the LIFO contiguity rule, and this emitter/model
split), which suggests `gen_model`'s frame read-back and the body replayer need a single shared
definition of "what this entry pushes" rather than three patches to two readers.

The 8 `SAVE DROPPED ENTIRELY` units are a different bug - no push statement and no model entry, so esp
stays consistent and only the register leaks. Fixing the disagreement above will not touch them.

## Deliberately not done

No fix attempted. It changes plumbing shared by every lifted unit and needs `lift_selftest` cases per
shape, a knob, and a measured sample - and since these units are (so far) unproven, the payoff is
measurable directly: how many of the 58 newly pass `cowdiff` after the fix. The population audit still
owns `build/`.

## The fix is in, behind a knob - measured re-lift still decides

`lift.py` grew `complete_pops()` (`COW_LIFT_EPILOGUE_MATCH_PUSHES`, OFF by default) plus
`tools/cow/ghidra/lift_matchpushes_check.py`. The reason it is a real defect and not just a leak:
in `src/lifted/cow_10003070.c` the prologue pushes ebx then edi, and the epilogue pops only ebx -
which reads `rd32(g->esp)`, the slot the LAST push left there. So ebx returns holding **edi's** saved
value and edi is never restored. One disagreement, two corrupted registers.

The rule refuses rather than guesses: it declines when the walk's pop list is not a subsequence of the
LIFO order, when the unpaired register is volatile (popping eax would eat the return value), when
`leave`/a frame pointer already owns ebp, and on tail-call and intra-tail units where the inline path
pops a list gen_model admitted separately - completing only the epilogue there would reintroduce the
same two-readers bug on the other path.

`lift_matchpushes_check.py` proves three things on the real emitter: the 12 picked candidates gain the
pops in LIFO order, 40/40 controls come back **byte-identical** off/on, and the banner prose changes
only when the epilogue did. Fixing the emitter does not make the shipped files wrong-by-model any
less; the population claim that matters is C=270, and the payoff claim still has to be earned:
**how many of C newly pass `cowdiff` after a re-lift.** Nothing is booked for that until it is run.
