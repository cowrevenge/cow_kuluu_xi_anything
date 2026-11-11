# The sub-word read that computed zero - and the judge that cannot see it

Status: **mechanism fixed behind `COW_LIFT_OVERLAY_READ` (OFF). Nothing booked.** The halt stands;
`cow/reverify.json` untouched.

## What was wrong, in one line

`ghidra_c._overlays` lowered Ghidra's member access `X._off_width_` as

```
(((uint64_t)(X) << (8*off)) & ((1 << (8*width)) - 1))
```

A read must bring the field **down**: `(X >> 8*off) & mask`. Shifting **up** and then masking the bottom
bits keeps the zeros the shift just introduced:

* `off >= width` → the expression is **identically zero** - a condition that can never be true;
* `0 < off < width` → the wrong bits, in the wrong place.

`off == 0` is the common case (`._0_4_`, `._0_2_`) and is unaffected in both directions, which is exactly
why this survived: the majority of Ghidra's member accesses are low-field extracts.

## The unit that proved it, read end to end

`0x10230280`. Ghidra: `if (*(int*)(param_1+100) == 0 && DAT_1047fe8c._3_1_ == '\x01')`. Ours shipped:

```
if ((rd32((uint32_t)(param_1 + 100)) == 0) && ((((uint64_t)(rd32(COW_IMG(COW_ADDR_LIFT_1047FE8C))) << 24) & 0xffu) == '\x01'))
```

`(X << 24) & 0xff` is `0`, so the condition is `0 == 1`, and **the two calls inside that `if` are
unreachable**. `cow/lift_proof_all.json` records this unit **pass=True**. (With a high enough `off` the
shipped form is worse than zero: `(uint64_t)X << 96` is undefined behaviour in C.)

That is the same blindness family as the judge's `RD=0`: cowdiff compares what the seeded state
exercises, and a zero in the path makes a wrong expression and a right one agree.

## Measured, this session

`tools/cow/ghidra/lift_overlay_read_census.py` (membership decided by the **production** predicate, and
computed with the knob OFF so a measurement cannot move its own denominator):

```
units whose Ghidra text reads a VALUE sub-word at off>0 : 137
  of which shipped in src/lifted                        :  17
  recorded pass=True : 10   pass=False : 7              (the 10 are defects hiding behind zero data)
  not yet lifted                                         : 120
  excluded, named not hidden: address-label bases 17, constant bases 0
```

Independent cross-check: a raw grep for the emitted shape found 19 files; 17 value-base + 2 address-label
= 19. The two populations agree.

`tools/cow/ghidra/lift_overlay_read_spec.py` — 7 harmed shapes fixed against the **definition** of the
member access (expected value computed as `(x >> 8*off) & mask`, evaluated with C's `uint64_t`
semantics), 9 shapes provably inert (off==0, address labels, unknown bases, unlowerable widths, numeric
literals), can-fire asserted in both directions.

`tools/cow/ghidra/lift_overlay_read_gate.py` — through the real compiler, 145 units, both arms:
**21 units changed bytes, 0 broken, 0 released, 8/8 controls compile in both arms.**

A/B verdicts (`build/scratch/overlay_ab.py`, same units/states/seed/build):
**FAIL→PASS 0, PASS→FAIL 0, 0 of 10 controls flipped.** The fix is compile-neutral and
verdict-neutral.

## Two things that tried to fool me, and how they were caught

1. **The whitelist would have made the fix a silent no-op.** The member-access regex swallows the text
   *before* `._o_w_`, so a read in a condition arrives as `if (DAT_10482f40` and a returned one as
   `return (param_2`. A predicate anchored at position zero rejects both - and a no-op knob reports
   **zero**, indistinguishable from "no defects here". The census caught it because `0x10314508`'s
   `param_2._2_2_` was missing from a population that demonstrably contains it: 6 shipped units, then 17
   once the predicate classified the identifier the field is actually taken from. The spec now pins
   `if (...)`, `return (...)`, negation and `&&`-tail contexts permanently.
2. **My own classifier filed `DAT_x` as a constant.** `DAT_x._3_1_` is a *load from a global* (runtime),
   not a compile-time constant - the mis-bucket would have deleted the exemplar unit from the population.
   Pinned in the census self-test, and the default bucket is now the inclusive one with `other` reported
   rather than folded into `const`.

Also worth keeping: my first gate tool read the compared directory from a module-level holder the caller
had to remember to set - a ready-made way to compare both arms against the same directory and conclude
the knob changed nothing. It now takes the directory explicitly.

## The bigger finding: cowdiff cannot pin a register argument

I tried to make the judge *see* this class: a temporary seed pinned the byte at `0x1047fe8f` to 1 and
zeroed `arena+0x64`, predicting off-arm FAIL / on-arm PASS. **Both arms passed - the experiment did not
fire**, so it proves nothing about the fix (its own output says that).

The reason is structural, and it is about the harness, not this unit:

* `cowdiff.c:960-962` - the seed's `args` are written to the **stack** (`sp + 4 + 4i`);
* `cowdiff.c:963-969` - `guest_fill` **fuzzes every register**, `ecx` and `edx` included;
* the seed vocabulary is `args`, `nargs`, `mem`, `answers`, `stubs`, `on_call` - **no register pin**.

So for an entry whose argument arrives in `ecx` (thiscall/fastcall - the majority here), a branch gated
on that argument having a particular value is reachable only by luck, ~1 in 2^32 per state. The
short-circuit `*(int*)(param_1+100) == 0` is a fuzzed-pointer load that is almost never true, so the
`&&` skipped the sub-word read on **both** sides, and the arms agreed.

Consequences, stated as claims to be tested rather than as conclusions:

* **A PASS on a unit whose behaviour depends on a register argument is weak evidence.** It says the two
  sides agreed on paths that were exercised; the argument-dependent path may never have run. This is a
  *coverage* hole, distinct from the zero-data masking above, and it plausibly reaches into the halt's
  52 fault-asymmetry rows (fuzzed pointer arguments faulting on both sides is agreement, not proof).
* The obvious next lever is a `regs` pin in the seed vocabulary (`{"regs": {"ecx": "arena"}}`), applied
  in `guest_fill` after the fuzz and before the run, on **both** sides. That is a harness change, it
  changes what proof can claim, and it must not be smuggled in under a lift fix. It is OWED, not done.

## What this fix may and may not be credited with

May: the emitted C is wrong by the definition of the syntax it translates, the fix makes it right, it
costs nothing in the compiler and nothing in verdicts, and it cannot move the shipped majority (off==0
is byte-identical on both arms).

May not: any cowdiff evidence. The judge cannot currently see this class at all - not on the fuzzed
states, and not through the seed mechanism. Until a register pin exists, the argument is
correctness-by-definition plus compile-neutrality, and that must be said out loud when this is proposed
for booking. The 120 not-yet-lifted units are the same: the fix is a necessary condition for them, not a
demonstrated release (the gate emitted 35 of 145 - the rest refuse for other reasons).

Untouched, named: the **address-label** bases (17 units) want a narrow load at `addr+off`, not a shift in
either direction; sub-word **stores** (183 units) want read-modify-write and are refused today (0 ship);
fields above bit 31 of a base modelled as one `CowU32` (`uStack_178._4_4_`) need the struct-split work.
None of those are credited to this knob, and the spec asserts they stay untouched.
