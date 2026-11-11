# The 136-unit state-0 cluster — what has been ruled out, and where to look next

Consolidates a full day of elimination so the next session starts at the frontier instead of
re-running dead ends. Nothing here is un-proved; the ledger is untouched.

## The signature

```
(memory) first at state 0, ours=0x10313417  guest=0x00000000   region=stack
```
with sibling slots at `0x993b38/44/48/54/58/60/70/78` (same value). **136 units.** Fails at state 0,
i.e. before any fuzzing depth is involved - this is not a depth artifact, and it is reproducible
from a forced fresh build with the judge's own controls passing.

## Ruled out (each was a plausible story; each is dead)

| hypothesis | how it died |
|---|---|
| the dropped `0x100dc1f0` wrap | cluster fails identically with the wrap installed and removed; **0/394** recovered at 2000 states |
| booking depth | cluster diverges at **state 0**, not >400 (that is the *other* 204-unit class) |
| stale `generated/` | side A `funcs_000.c` hashes **identical** across a full regeneration (142,252 lines) |
| the judge changed | `cowdiff.py` untouched since 11-06 05:41; every first booking is at/after 11:59 the same day (minute-precise) |
| phantom object side effect | `cleared_before_tick` -> `tick_wrap_count` was renamed **in place**, +0x4c/+0x50, matching the guest bytes - so the frozen object wrote the same bytes |
| newly-booked callee polluting callers | **0/40** cluster units bridge to a newly-claimed address; `0x103134c6` is neither newly-claimed nor stale |
| untracked-image drift | DLL unchanged since 11-03, `build.h` since 11-02 |
| judge non-reproducibility | two independent regenerations from trees of 7,751 and 10,547 lifted files gave **byte-identical `table.c`** |

Also note **62 of the 136 additionally have stale bookings** (pass booked 11-06 11:59, source
overwritten 11-07 05:46) - so those rows certify bytes that no longer exist and should be
re-gated, not trusted. The other 74 are booked after their last source change and are the pure form
of the defect.

## What I traced by hand today (the expensive part, so it doesn't get repeated)

`0x10010350` - a 4-instruction unit - read against the generated guest body and its bridge. Guest:

```
10010350: push 0x10010360
10010355: call 0x103134c6        ; pushes retaddr 0x1001035A; the callee's own `ret` pops it
1001035a: pop ecx                ; consumes the 0x10010360
1001035b: ret
```

**The lifted unit is bookkeeping-correct.** Working both sides from entry esp = E:

- guest: `E-4` (push 0x10010360) -> `E-8` (call) -> callee pops to `E-4` -> `pop ecx` -> `E` -> `ret` -> **`E+4`**
- ours: bridge pushes args then retaddr -> `E-8` -> callee pops to `E-4` -> `cleanup 0` -> adapter `pop ecx` -> `E` -> `g->esp = sp0` -> `rt_return` -> **`E+4`**

Same final esp, same words written, same register results (`ecx = 0x10010360` both sides; the
bridge sets `ecx`/`eax` to values they already hold and deliberately leaves `edx` alone via
`(void)edx_in`, which matches the guest because nothing wrote it). The literal `268501856` in the
lift **is** `0x10010360` - I first read it as `0x100103C0` and nearly chased a nonexistent
off-by-`0x60` bug. Do not re-litigate that; do the arithmetic once.

**Conclusion: the divergence is inside the `f_103134c6` subtree, not in these 136 units.** That
callee is documented as *"reached from 107 lifted call sites"*, which is exactly the shape of a
defect that would show up as one signature across 136 unrelated units.

## Where to actually look next

1. **Read `f_103134c6`** (in `generated/all/funcs_052.c`) and walk its callees for a lifted unit
   that writes into the stack window *below* the caller's frame - the reported slot (`0x993b60`,
   ~11 words) sits below the entry frame, i.e. scratch used by the callee subtree.
2. `0x10313417` is a **code address, not a symbol** (it appears only as a branch target), so look
   for a `call` whose return address is `0x10313417` - i.e. a call site ending at that address -
   and ask why our side leaves it and the guest has zero there.
3. Compare against the **43 "shallow" failures** (fail below booked depth, different signatures):
   if any of them reach `f_103134c6` too, that widens the shared-subtree theory beyond the 136.
4. Instrument, don't guess: the 9 **timeout** units and this cluster both need runs that show *where*
   the sides first differ. `cowdiff` already prints `esp=%08x/%08x` at the first mismatch (added
   11-09, reporting-only) - read that back before writing any new detector.

## Two-sided read of the exemplar (2026-11-11, harness free) — one culprit found, and a theory killed

`cowdiff 0x100298d0 --json --states 2000`, read line by line rather than inferred from the model:

```
[recomp] FFXiMain.dll mapped at 10000000 (host ...), 0 relocations, 294 imports bound to thunks
[cowdiff] bound 97 unbound hint/name IAT slots
100298d0 state 0: memory (eax 00000000/00000000 edx 00940008/00940008 esp 00993be4/00993be4
                     fault 0/0 @00993b60 10313417/00000000)
{"entry":"100298d0","states":2000,"seed":12345,"mismatches":1,"first_state":0,"reason":"memory",
 "blocks":3,"blocks_total":3,"pass":false}
```

Every register agrees, including `esp`; the image is at its preferred base with **0 relocations** (so RD=0 and
no rebasing story is available); 3 of 3 blocks reached, so this is not a coverage artefact. One word differs.

**What the exemplar turned out to be.** `0x100298d0` is a two-instruction stub with nothing of its own to get
wrong:

```
100298d0: call 0x100298e0
100298d5: jmp  0x100298f0        ; tail
```

Proving its two callees separately split them cleanly: `0x100298e0` **PASSES** (3/3 blocks), and
**`0x100298f0` FAILS standalone, at state 0, with the cluster's exact signature** `@00993b60 10313417/00000000`.
It is a four-instruction thunk:

```
100298f0: push 0x10029900 ; call 0x103134c6 ; pop ecx ; ret
```

Its emitted lift hands the argument correctly (`npush=1`, `{268605696u}` = `0x10029900`, retaddr
`COW_IMG(COW_ADDR_LIFT_100298FA)`), and its esp trajectory matches the original step for step. The divergent
word sits at `esp_entry - 0x84`, i.e. **inside `f_103134c6`'s own frame** - so the difference is in the state
entering that callee, which is where the esi lead already pointed.

**A fan-in theory, measured and rejected.** A tail-jumping stub failing because its target is broken is the
shape that would explain a whole cluster at once, so I tested it instead of enjoying it: transitive
reachability (call/jmp targets, depth 6) of `0x100298f0` from all 123 cluster units, with a tripwire on the
edge I had read by eye.

```
of 123 cluster units: 1 reach 0x100298f0 within depth 6, 122 do not
```

One. The exemplar itself. So `0x100298f0` is a real, isolated, individually fixable bug - and it is **not**
the cluster's cause. Any write-up that said "the cluster is fan-in onto one thunk" would have been a story
about one unit dressed as 123.

**A premise in this note is wrong, though the conclusion survives it.** Line above: *"0x103134c6 ... and
0x10313110 ... are both unlifted."* `src/lifted/cow_103134c6.c` **exists** (verified by stat, and by
`lifted=True` from the walker; `0x10313110` and `0x10313417` are genuinely not lifted). The reason it doesn't
change anything is the one that should have been stated: the bridge body calls the generated original
directly - `f_103134c6(g);` in `layout/lifted_bridges.c` - so both sides execute the same callee regardless of
whether an adapter also exists. Right conclusion, wrong justification, and a "both sides are identical"
argument resting on a file-existence claim nobody checked is the kind of premise that outlives its usefulness.

**Two stale rows found** (the owed re-gate item, concrete instances): `cow/lift_proof_all.json` says
`0x100298f0` passes (states=300) and `0x100298d0` passes (states=400). Re-run today at both 400 and 2000
states, both FAIL deterministically at **state 0**. So they are booked as proven and do not pass - which is
what the halt is about, and a third confirmation that a map row is a claim, not a measurement.

**Still open. What is NOT the cause, now also measured:** argument passing on the thunk (correct), esp
trajectory (matches), image rebasing (RD=0, 0 relocations), block coverage (3/3, 5/5), and fan-in onto this
thunk (1/123). The next real step is the one that needs instrumentation rather than reading: capture the full
register + stack-slot state at the entry of `f_103134c6` on both sides, since that is the last place the two
can still differ.

## The shared callee is reached by ALL 123 — and the causal story still doesn't close

Re-running the reachability walker with the *right* target (`--target 0x103134c6`) turns the earlier 1/123
into something else entirely:

```
of 123 cluster units: 123 reach 0x103134c6 within depth 6, 0 do not, 0 had no body
depth distribution: {1: 63, 2: 60}
```

**Every member of the cluster reaches `0x103134c6`.** And proving it on its own reproduces the signature in
isolation:

```
COWDIFF FAIL 103134c6 10 mismatch(es), first at state 0 (memory) fault 0/0 @00993b68 10313417/00000000 x12 stack
{"entry":"103134c6","states":400,"seed":12345,"mismatches":10,"first_state":0,"blocks":9,"blocks_total":9,"pass":false}
```

Same value, sibling slot (`b68` vs `b60`), 9/9 blocks reached, deterministic at state 0. So the label
"123-unit cluster" has a genuine single point of fan-in — which is what the note was reaching for since the
first paragraph.

**But the obvious conclusion is wrong, and the harness says so.** "One broken lifted file, seen from 123
callers" would be the finding — except that side B never executes the lifted `cow_103134c6.c` when it is a
callee: `layout/lifted_bridges.c` calls `f_103134c6(g)` directly, and I chased the only dispatch I could find,
`thunk_dispatch` (cowdiff.c:616), into `runtime/portable/thunk.h` - it is the **import** seam
(`THUNK_BASE 0xFFF00000`, reached from `rt_call_indirect` for functions with no translation), not a route to
lifted adapters. So a defect in the lifted `0x103134c6` cannot propagate to its callers.

Two things are therefore both true and do not yet fit:
1. all 123 reach this callee, and it fails alone with the same value;
2. the callee's lifted file is not on side B's path, so its failure and the callers' failure must share a
   **cause**, not a **file**.

The likeliest shape of that shared cause is the state entering the callee: the 123 callers and the standalone
run all end up in `f_103134c6`'s subtree with a register or a stack word that differs from side A, and the
same `ja 0x10313417`-style branch decides whether the word `0x10313417` is ever written. That is consistent
with the esi lead that was previously scored "overlap 0" — the overlap test asked about lifted units in the
subtree, which by (2) is the wrong question.

**What would close it, and what I will not do instead.** Capture the full register file plus the argument
slots at the entry of `f_103134c6` on both sides, for one caller and for the standalone run, and diff. That is
instrumentation in a judged file, and until it says something the sentence "123 units, one bug, fixed" is a
story with a nice number on it. The reachability statistic is real; the causal claim is not earned yet.

## This turn: the branch's cause is `esi`, and three more theories died measuring it

Following the word to its source in ground truth (`funcs_052.c`) instead of theorising:

```
13970|  /* 103133f6: cmp esi, -0x20 */     cf = (a < b); zf = (r == 0); ...   a = esi
13983|  /* 103133f9: ja 0x10313417 */      if ((!cf && !zf)) goto L_10313417;
14059|  { ... wr32(esp, 0x10313417u + RD); REGS_STORE; rt_call_indirect(g, t); ... }
14061|  L_10313417: ;
```

* **The divergent word is a return address.** `0x10313417` is pushed before an **indirect** call at 14059; the
  `ja` at 0x103133f9 either falls into that push or jumps past it to the same label. One branch, one word.
* **Flags are not the carrier** (my first hypothesis). The `cmp esi, -0x20` two instructions earlier sets both
  `cf` and `zf` locally, so `ja` fires iff **`esi > 0xFFFFFFE0`**. `esi` decides it, which is what the note's
  original esi lead said - the earlier "overlap 0" scored it against the wrong location, not the wrong register.
* **The entries cannot be the clobberer.** With the predicate first proven able to fire (on `0x102de39f`, whose
  `push ebp/esi/edi` I read by eye), all 123 cluster entries contain **zero** callee-saved pushes: they are
  stubs. An entry that saves nothing cannot fail to restore it.
* **And nothing lifted runs below the entry**: `lifted_bridges.c` and the generated originals call `f_<hex>(g)`
  directly, and `thunk_dispatch` is the import seam. So the code that runs below the entry is identical on both
  sides by construction.

**Where that leaves it.** The only lifted code that executes is the entry, and it is a stub whose plumbing I
have read and matches (argument pushed with the right value, retaddr correct, esp trajectory identical, no
flags or callee-saved registers involved). Every mechanism from the frame neighbourhood is now exhausted -
this is the sixth - so the honest state is the one the note has kept insisting on: the next move is a
**two-sided capture at the entry of `f_10313110`** (register file + argument slots), for one cluster caller and
for the standalone `0x103134c6` run, and diff. That is instrumentation in a judged file, and it is the only
thing left that can see the difference; I am not generating a seventh story to avoid it.

### The method failure worth keeping
My first version of the callee-restore scan used `/\*[0-9a-f]{8}:\s*push` - no space after `/*` - while the
generated text is `/* 102de3a8: push esi */`. It could not match a single line, and it returned a clean 0 for
all 123 units. Worse, the script **printed a confident explanation of why the zero was expected** ("the cluster
units are stubs, so `guest saves esi` being 0 is EXPECTED, not a bug") - a plausible excuse written *before the
measurement ran*. The excuse happened to survive contact with the fixed regex this time, but that is luck, not
method: an unfireable predicate plus a pre-written reason is the most convincing kind of wrong answer, because
it disposes of the doubt that would otherwise have checked it. Predicate fires first, narrative second, always.

## Method warnings for whoever picks this up

- Every counter today that silently matched nothing produced a **confident wrong answer**: a bare-hex
  vs `0x...` key mismatch reported "0 of 136 ever booked pass"; a regex matched `mismatch(es)` and
  labelled 383 units kind=`es`; a struct parse counted only `uint32_t` and put a field at `+0x14`
  when the file documents `+0x4c`. **Pin one exemplar you have read by eye and assert on it.**
- Sampling the `>400`-divergence class at 400 states **cannot fail**. Two of my own claims died
  because the test could not have come out the other way.
- `generated/` is gitignored: the judge can move with no commit to bisect. `reverify.py` now records
  a hash manifest and a `depth_mode`; read both before believing a verdict.

## LEAD (same day, from the trace above) - callee-saved `esi` across a lifted unit

The branch that decides everything is flag-dependent on a **callee-saved** register:

```c
/* cmp esi, 0xFFFFFFE0 */  cf = a < b;  zf = r == 0;
/* 103133f9: ja 0x10313417 */   if ((!cf && !zf)) goto L_10313417;
```

`0x103134c6` (the callee our cluster units enter) and `0x10313110` (which owns the `ja` and the
indirect call) are **both unlifted**, so both sides execute identical code there. A divergence is
therefore only possible through **state entering that code** - and `esi` is exactly the register the
branch reads.

So the candidate mechanism: **a lifted unit reached inside this subtree fails to preserve `esi`**
(the guest pushed/popped it, the lift does not), corrupting the caller's `esi`, flipping the `ja`,
and deciding whether the imported call at `0x10313411` happens at all. One broken callee explains
one signature across 136 unrelated callers - which is precisely what the data shows.

**Not confirmed.** What is measured: lifted files DO write callee-saved registers -
`g->esi` in **3,354 / 10,547**, `g->edi` 923, `g->ebx` 627, `g->ebp` 406 - so the mechanism is
available, and lifts that model it correctly exist (e.g. `cow_100013a0.c` has the `pop esi`).

**The targeted test, cheaper than a broad scan:** walk `f_103134c6`'s callee set, keep the lifted
ones, and for each compare the generated body's `push esi` / `pop esi` pair against the lifted
unit's adapter. A generated body that saves and restores `esi` while the lift restores only some of
them is the bug. Start with callees reachable from a *single* cluster unit rather than the whole
population - one confirmed culprit is the finding, not a histogram.

*(The first attempt at that count used `-Pattern "g->esi\s*=" -SimpleMatch`, so `\s*` was matched
literally and it reported **0 files** - a confident false negative, contradicted only because the
very next command found hits. Counted correctly above. This is the third time today a silently
non-matching detector produced a wrong number; assert on an exemplar.)*

## MECHANISM FOUND - `gen_model` drops callee-saved push/pop pairs (same day)

The `esi` lead is **confirmed**, on a unit read end to end, and it is a *frame-extraction* bug.

`0x10014c90` (one of the 136) has a complete callee walk of 642 generated nodes / 255 lifted units
containing three clobber candidates. The first, **`0x1015e910`**, was read directly.

**guest** (`generated/all/funcs_025.c:37247`):
```asm
1015e917: push esi        ; save callee-saved
1015e918: mov esi, ecx    ; use it as scratch
        ...  pop esi      ; restore (matched over the full body by the predicate)
```
**ours** (`src/lifted/cow_1015e910.c:53`):
```c
g->esi = g->ecx;   /* 0x1015e918: the value the entry loaded and the decompiler dropped */
```
The file contains **no `push esi`, no `pop esi`, and no `g->esp -= 4u` anywhere**. Its adapter states
its own frame as:

```
Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no,
0 locals, pops [-], ret 4.
```

**That line is a lie** - the generated body has a `push esi`. `gen_model`'s frame read-back does not
count callee-saved pushes, so the lift gets both halves wrong:

1. **the register is not preserved** - the caller gets back `esi == ecx`;
2. **the stack slot is never reserved** - our esp during the call sits 4 above the guest's, so every
   compared stack word below the frame is off by one slot.

(2) is what matches the cluster signature - *a code address in a stack slot where the guest has
zero* - and one broken callee explains one signature across many unrelated callers.

Population scale, measured with a predicate first proved capable of firing:

| clause | lifted units |
|---|---:|
| generated writes / pushes / pops esi | 3,560 / 3,560 / 3,560 |
| lift writes `g->esi` | 3,354 |
| lift restores esi | 3,240 |
| **clobber candidate (all of the above, minus restore)** | **113** |

The first version matched `wr32(esp, esi)`, which the generator **never** emits (a push is
`uint32_t v = esi; esp -= 4; wr32(esp, v);`). That clause was unsatisfiable, so the subtree walk
returned a clean **0 from a dead test**. The population run exposed it. Reliable form: the
instruction comment `/* ADDR: push esi */`.

Note the seed split, which is itself informative: `0x10010350` walked complete (63 nodes) with **no**
candidate, so not every member of the 136 is explained by this - the group still holds more than one
bug, as this repo's own queue warns a group label always does.

## Fix location (deliberately NOT applied)

`gen_model`'s frame/plumbing read-back must count `push/pop <callee-saved>` and emit both the esp
adjustment and the restore. It decides `N push(es)` for **every** lifted unit, so the 136 cluster and
plausibly the 43 "shallow" failures are downstream of it.

Not attempted this turn: it rewrites the plumbing of every lifted unit, needs `lift_selftest` cases,
a measured sample, and a quiet `build/` - which the population audit is using. Reckless here is
worse than slow.


## Rejected #5: the over-pop mechanism (`lift_cluster_overpop_join.py`, measured)

A new counter appeared today - `lift_frame_predicates.adapter_overpops` counts adapters that **pop a
callee-saved register they never pushed** (209 machine-lifted units; 207 of them carry the lift's own
"this entry also pushes N words mid-body" note, 2 do not). An over-pop reads a word the entry never
saved, and the word below a frame's saves is the return address - which is exactly the shape of the
cluster's signature value `0x10313417`. It was the best-looking hypothesis of the set, because it
predicted the value, not just the failure.

Measured:

```
  cluster units in reverify's failures   : 136
  of them OVER-POP                       : 0
  of them over-pop OR unpaired push      : 0
```

**Zero. Dead**, like the other four. The join tool prints that verdict itself, so it cannot be
misremembered later.

## What five zeros mean

| # | mechanism | measurement |
|---|---|---|
| 1 | dropped `0x100dc1f0` wrap | recovers **0 of 394** at 2000 states |
| 2 | booking depth | explains the 204 deep-fail group, **0 of the 136** |
| 3 | phantom struct offset (`tick_wrap_count`) | renamed in place at the matching `+0x4c/+0x50`; not it |
| 4 | callee-saved `esi` lead | overlap **0** |
| 5 | over-pop reading the return-address slot | overlap **0 / 136** |

A population that survives five independent, well-motivated mechanisms is telling you its cause is not
in the area those mechanisms live in. The frame-handling neighbourhood has now produced two REAL
findings (270 unpaired pushes, 209 over-pops) and zero explanations for this cluster - they are their
own defect, with their own payoff waiting on the re-lift.

**What I will not do** is generate mechanism #6 from the same neighbourhood. The next step on the 136 is
the boring one that has not been done properly: pick ONE unit, run both sides, and diff what they
actually did - not what the lift's model says they should have done. `cowdiff --json` on one cluster
unit, plus the store/call logs, read line by line. If that does not localise it, the cluster stays
OPEN and gets reported as open, not quietly re-bucketed until something fits.
