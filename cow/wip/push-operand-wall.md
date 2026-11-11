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

---

## Postscript: the feasibility gate said no, and said it before any code existed

`lift_frame_read_feasibility.py` tests the design above against the bytes, classifying **every** frame/stack
push at **every** site of the 319 (classifying only the first bail would hide a `[ebp-0x14]` behind an
innocent `[ebp+8]`, and the design would then be built for a case that fails on the second push):

| what a unit needs | units | reachable by `rdf32(frame+N)`? |
|---|---|---|
| clean arg-slot, frame present, no write between push and call | **82** | yes — the only sound case |
| arg-slot but **no frame setup** (ebp is still the caller's) | 41 | different address model |
| **LOCAL-SLOT** (`[ebp-4]`, `[ebp-0x14]`) | **70** | **no** — our body keeps that in a C local and never writes the slot |
| esp-relative only | 122 | needs esp-at-push |
| unsafe (a write lands in (P, C)) | 4 | no |

And the exemplar is the reason to have asked: **`f_10316337` → `ARG-SLOT, LOCAL-SLOT`.** It pushes four
caller arguments *and* `[ebp-4]` — the slot its own body wrote at `10316341` (`mov dword ptr [ebp - 4],
eax`), which Ghidra turned into a C local. A "read the frame" feature would name the four arguments and
then read garbage for the fifth: a confident wrong value, a unit failing at `memory`, and a bug report
pointing at lift.py instead of at the naming. **So the 116-row family is not unlocked by this design.**

Corrected claim, stated plainly: `push-operand-wall.md` above calls the population "319 salvageable".
Salvageable by *a* naming, yes. Salvageable by the one naming with principled grounds — **82**, about 0.9%
of the 8,848 bailing units. The 116-row prize needs the local-slot job: keeping a frame slot alive so a
push of it can be named, which is a different and larger feature, and is now a measured requirement
instead of a hunch.

Three dead filters in my own tool, all caught by its own tripwires before any of them became a finding:

1. `_writes_memory` is true for `push` — a push writes memory, that is its job — so each of a call's eight
   argument pushes was declared a hazard to the others: 116 "unsafe" units and a classification that
   collapsed onto the last push only. The hazard rule must exclude the call's own push run.
2. **The quietest one: the sign was parsed and thrown away.** `([-+](...))?` captured the minus in one
   group and the code read the digits from the other, so `[ebp-4]` became `+4`, locals were invisible, and
   "0 units need the hard case" looked like a fact about the corpus. It was arithmetic. The tool's own
   warning — *LOCAL-SLOT never fired… check f_10316337, which pushes [ebp-4]* — is what sent me back to
   the regex instead of to the conclusion.
3. The per-unit rollup credited a unit with every category the global tally contained, so the exemplar
   appeared to need five mutually exclusive things at once.

Lists for whoever picks this up: `cow/wip/frame-read-clean82.txt` (the sound slice) and
`cow/wip/frame-read-clean82-needs-local.txt` (the 70 that a memory read cannot reach).
