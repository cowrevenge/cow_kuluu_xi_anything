# The 828-row both-fault stack family: three mechanisms tested, none of them the answer

`memory / stack / both-fault` is the largest well-shaped group in the failing-lifted population — 828
rows, where both sides raised the same exception and `regions_equal` compared the frame anyway (it has no
faulted guard, unlike the register comparison). Last turn I flagged it as the next candidate. This turn
tested three explanations for it. All three are real but partial, and the family is still unexplained.

## The measurements

| test | tool | result |
|---|---|---|
| where is the differing word? | `lift_bothfault_stack_family.py` | **91% inside `0x993b00-0x993c40`** — the frame window |
| whose value is missing? | same, after fixing a swapped A/B label | dominant shapes are all **A(theirs)=value, B(ours)=00000000**, i.e. the reference wrote and we did not |
| is it our three frame defects? | `lift_bothfault_frame_join.py` | **80 / 828 (10%)** — 35 unpaired push, 52 over-pop, 4 dropped tail epilogue. **748 are clean by all three** |
| is it unreproduced `[esp+N]` stores (Ghidra locals)? | `lift_frame_store_probe.py` | only **94 / 748 (13%)** have a guest `[esp+N]` write at all; 62 of those reproduce none. So this mechanism reaches ~8% of the family |

## Fourth test: does our prologue push fewer words than the guest? (`lift_push_shortfall_probe.py`)

The prologue is a scan that stops at the first instruction it cannot express, so a guest that saved three
registers could get two pushes from us - and the unwritten slot is exactly a zero the harness finds. My
three predicates cannot see this because they all compare our pushes to **our** pops, never to the
**guest's**.

The first version counted every `push` in the body, which would have made almost every unit look "short"
and proved nothing: most body pushes are *argument* pushes reproduced by `cow_bridge_*`, not by the
prologue. Narrowed to head saves (`gen_model._head_pushes`, the same function the emitter's closure rule
uses), with a can-fire tripwire (`0x100098e0`: guest head saves 3, ours 2):

```
     326  same number
     311  no head saves at all (the compared words are not prologue slots)
      90  ours SHORT (76 by 1, 10 by 2, 2 by 3, 2 by 4+)     -> 12%
      21  ours MORE than the guest (the emitter's own push backfill)
```

## The aggregate, and what it means

| mechanism | reach within the 748 |
|---|---|
| the three staged frame predicates (unpaired push / over-pop / tail drop) | **80 (10%)** |
| guest writes `[esp+N]` that we never reproduce | 94 (13%) have such a write at all; 62 reproduce none |
| our prologue pushes fewer head saves than the guest | **90 (12%)** |
| no head saves whatsoever | **311 (42%)** |

**Four tests, four slices, no dominant cause.** And the single largest bucket - 42% of the family has no
head saves at all - says the compared frame words are frequently *not* prologue slots, which is precisely
why a prologue-shaped fix could never explain this group. The remaining cause is not in the four places
I have looked from population level, so I am stopping the guessing here: the family's next step is the
one-unit end to end read (`cowdiff --json`, generated body, our file, the address the harness named),
and the re-lift's expected effect on this family is the **80 rows** the join attributed - not 828.

## Three dead filters this thread caught before they became conclusions

This family fight was mostly a fight with my own predicates, which is the honest description:

1. `wr32((uint32_t)(esp …` — a spelling the generator **never produces**. It returned "0 of 748 units
   have an esp-relative store", which would have killed the locals hypothesis on false evidence. Caught by
   sampling 400 units and finding the pattern in zero of them.
2. Requiring `[esp` immediately after the mnemonic — but the recompiler writes
   `mov dword ptr [esp + 4], eax`, with the size keyword and `ptr` in between. The can-fire tripwire
   refused the measurement (`REFUSING: the stack-write predicate cannot see the unit it was written
   against`) instead of letting it print a histogram.
3. The tripwire unit itself was wrong twice: `0x10004d80` only **reads** `[esp+4]` (`mov edx, dword ptr
   [esp + 4]`), and my replacement was a guess. The one now in the file (`0x10002e60`) was picked by
   scanning bodies for a destination operand at `[esp+N]`. A tripwire has to be an exemplar somebody
   actually looked at, or it is a second opinion from the same imagination that wrote the filter.
4. And a **swapped A/B label** in the example printout, which is the most expensive kind of cosmetic bug:
   it would have told a reader "our side holds the image pointer" when the reference side does, sending
   someone to fix the wrong program. The corrected labels are what made the table one-sided and readable.

## What happens next

Not a fourth population-level guess. The next step on this family is one unit, read end to end: the
generated body, our file, and the exact address the harness named — which needs `cowdiff --json`, i.e.
the harness lock the population audit still holds. Three clean members are named by
`lift_bothfault_frame_join.py` (`0x10004d80`, `0x10009710`, `0x10009730`) to start from.

Meanwhile the staged re-lift remains the only measured, ready-to-run win: its expected effect on this
family is exactly the **80 rows** the join attributed to the three frame predicates, and no more. Anyone
(including me, next week) who is tempted to claim the 828 will be fixed by it should read the 10% first.
