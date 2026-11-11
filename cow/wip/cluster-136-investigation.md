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
