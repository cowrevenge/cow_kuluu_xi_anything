# The push-naming wall, measured: 95% of it is the class that already failed three times — and a 319-unit slice that isn't

The thread: 116 of the 211 `hang` rows park in `f_10316337` (`no-answer-family-sse-blocker.md` §6). It is
in the Ghidra dump, so it is liftable, but `lift.py` refuses it. After `COW_MODEL_NPUSH_FRAME_AWARE`
corrected the miscounted `npush` (`npush-frame-walk.md`), it refuses one gate later:

```
push_values_why: unnameable:dwordptr[ebp+8]
```

That line is in `_push_values`: `return bail("unnameable:%s" % (_short_op(word)))`, and
`lift_pushmnem_census.py` files the whole thing as `not-a-register` — *"a value widening cannot name at
all"*. True of the widening that tool prices. Not a statement about every operand, and the difference is
worth a day of someone's life or five minutes of this file.

## The shapes (41,286 bailing sites, corpus-wide, both walk positions)

| operand shape | sites | share |
|---|---|---|
| **plain-register** (`push edx`, env has no entry) | 39,690 | **96.1%** |
| frame-relative (`[ebp+N]`) | 732 → 747 (walk fixed) | 1.8% |
| odd-or-other (immediate-ish remnants) | 366 | 0.9% |
| reg-indirect (`[eax+0x10]`) | 252 | 0.6% |
| stack-relative (`[esp+N]`) | 109 → 153 | 0.3% |
| absolute (`[0x10311c6c]`) | 109 | 0.3% |

`plain-register` is precisely the family with the graveyard: *"any plain register"* released 207 units and
passed 10%; *"never written anywhere"* was sound but empty (837→833); *"not written before the call"*
released 57 and passed **5 of 58 = 8.6%**, dominated by `memory` and `callee-saved register`, and it also
silently rewrote 37 already-proven files until `call` counted as a write. Three attempts, three proofs of
failure. So 96% of the wall is not waiting for a clever idea; it is waiting for something that does not
look like those three.

## The number that actually decides, per unit

Sites are the wrong denominator when one unit owns 116 rows: `_push_values` bails on the **first**
unnameable word, and a unit lifts only when every push at every site is named. So `--unit-yield` filters
by what a unit needs *in total*:

```
blocked-by-plain-register      8,403   (95.0% of 8,848 bailing units)
salvageable-by-frame-naming      319   ( 3.6%)
blocked-by-other-shapes          126   ( 1.4%)

f_10316337 (the callee behind the 116-row hang family) salvageable? YES
```

**319 units** have nothing but `[ebp+N]`/`[esp+N]` bails anywhere in them — no plain-register bail that
would put them back in the graveyard. One of them is the 116-row prize. The candidate spelling is
principled rather than a fourth guess: the adapter already computes the frame base (`uint32_t sp0 =
g->esp;`), and `rdf32(frame + N)` reads the same guest memory the guest read, at the same point in
straight-line code. It is not the mistake of handing a callee the *entry value* of a register the guest
recomputed.

They are also **clustered**, which is what makes a 3.6% slice look like a feature rather than confetti:
66 of the 319 sit inside ~12 KB around `0x10328xxxx` (23 at `0x103283`, 15 each at `0x103282`/`0x103284`,
13 at `0x103281`), then `0x1031ef` and `0x102e5b`. One repeated code shape, repeated a lot.

## What this does and does not license

It licenses a *priced* attempt: implement `[ebp+N]`/`[esp+N]` push naming behind a knob, then run the
existing chain — `lift_relift_preflight.py` (scratch tree, real syntax gate, gate-capability control) →
`lift_relift_run.py --apply` → `lift_relift_verdict.py` — on `cow/wip/frame-naming-candidates.txt`, and
book only what the proof passes.

It does not license any of these, and the tool refuses if it cannot see them:
* **319 is an upper bound on units that get past this gate**, not units that lift, and certainly not units
  that pass. `cleanup_mismatch`, `calls_unknown_symbol`, `leftover_overlay` and the syntax gate all still
  stand downstream, and the walk fix's own pricing showed how often "past one gate" just means "into the
  next one" (230 of 253 candidates moved rather than freed).
* **95% of the wall is untouched.** Anyone tempted by the plain-register 96% should re-read the three
  killed attempts before writing a predicate, and price through `lift_pushmnem_census.py` (which exists
  so a candidate costs one run instead of one argument).
* Nothing here is booked, no knob is on, and `src/` was not touched — the population audit still holds the
  harness.

Tripwires that ran: the exemplar must bail on exactly `unnameable:dwordptr[ebp+8]` and be filed
`frame-relative(ebp)`; and the classifier must be able to fire on all three reference buckets
(`frame-relative`, `plain-register`, `reg-indirect`) or the tool refuses rather than print a shape table
that is decoration.
