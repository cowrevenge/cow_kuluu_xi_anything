# argcount_mismatch has no cheap slice left: three hypotheses, three measurements, three deaths

The class is 2,884 refusals — the biggest in the image and the binding constraint behind everything else
this loop has measured. Three separate times in two days it looked like a hidden measurement bug was in
there waiting. Three times a measurement said no. Recording the deaths together, because the useful object
is the *shape* of the class, and it is now settled enough that the next turn should not re-derive it.

## The instrument, not just the numbers

Standing rule: **no mechanism without reading one unit end to end.** So `lift_site_read.py <addr>` now
prints, per call site, exactly what the argcount guard saw — `npush`, `npush_walk`, `npush_stop`,
`npush_delta`, `cleanup`, the pushed operands, the `push_values` bail — **beside the 14 guest instructions
those numbers were measured from**, plus what the callee reads (`callee_facts`). Numbers next to their
source, so a human can disagree with a model rather than trust it. That is the tool five rejected
mechanisms and one 466-unit false discovery were each asking for.

Reading `f_100013c0` paid for itself immediately:

```
call @0x100013d0 -> f_10014c10
   npush=2  pushed=['esi','ebx']  push_values_why='unnameable:esi'
   push ebx        <- frame save
   push esi        <- frame save      (prologue_len = 0, so the walk billed them to the call)
   mov esi, ecx    <- esi is written AFTER its own push: g->esi at bridge time is the copy,
                      so refusing 'unnameable:esi' is CORRECT, not timidity
   callee reads: ecx=True eax=True    (thiscall-shaped)
```

Two things visible at once: the **frame-save-billed-as-argument** shape my `COW_MODEL_NPUSH_FRAME_AWARE`
knob already fixes, and a **correct** refusal that a naive "just use `g->esi`" widening would have turned
into the documented 10%/8.6% failure. Both only legible with the instructions on the screen.

## Death 1 — "the prologue boundary is swallowing pushes" ( hoped: another 23-unit win )

`no-pushed-record` is 3,674 sites / 1,160 units and my first diagnostic showed 2,037 sites with a plain
`mov` above the call — a mnemonic the walk does *not* break on, which looked like a mis-set boundary. That
diagnostic was itself the error: **the instruction above a call says nothing about where a 30-instruction
backward walk gave up.** So the walk was made to record its own reason (`site["npush_stop"]`, added the way
`push_values_why` is — behaviour-free: inertness 125/125, selftest 255/255, six regression checks green):

| real break reason | sites |
|---|---|
| control-flow (`call` 1,508, `je` 931, `jne` 461, `ret` 278, `jmp` 262, others 143) | **3,583** |
| `prologue-before-any-push` | **34** |
| `depth>24` | 13 |

**98.7% structural.** The promising slice was 34 sites. Reaching across a branch for argument pushes is a
design whose failure mode is guessing values from paths that never merge — the killed widenings' error.

## Death 2 — "they're register arguments; the guard compares the wrong quantities"

The `f_100013c0` read made this look like the real story (callee reads ecx/eax, stack pushed nothing,
Ghidra still lists arguments). Measured at scale by parsing `(ghidra_A, push_P)` out of the 2,884 refusal
strings themselves:

| shape of disagreement | refusals | share |
|---|---|---|
| both non-zero and different — a genuine disagreement | 1,887 | **65.4%** |
| push N, Ghidra lists **none** | 907 | 31.4% |
| push 0, Ghidra lists args — the category error | **90** | **3.1%** |

**3.1%.** A real bug worth knowing about and not worth a redesign of the class. Recorded so nobody spends a
turn on it expecting 1,508 units.

## Death 3 — the 466-unit "discovery" (last turn, kept here for the pattern)

`never-written` looked like 466 units inside a dead class. It was my predicate walking only to the *push*
instead of the whole body: split on `written_anywhere` and **466 → 5**, with 461 being the
written-after-push variant already measured at 5 of 58 = 8.6%.

## What is actually left

- **The naming wall owns the class.** The 907 `push N, ghidra lists none` units are refused *despite* the
  guard having an exemption for exactly that case — `use_measured` says the decompiler's count "is not
  evidence of anything" once the pushed words are named. They are refused because naming fails. So the
  route into them is naming, which has three published failures — not a counting rule.
- **`lift_strprov`/`callee_facts` is the only measured cheap win so far:** the frame binding, 17 units in
  argcount + 36 on the string side ≈ **53 report-only**, gating 831 that need something else too.
- **175 units** are blocked only by a measurement bail (`pending-vs-pushed` / `pushed-vs-npush` /
  `no-pushed-record`) — the honest residue worth one more look, with the caveat that `no-pushed-record` is
  now known to be structural, so its share of the 175 is not a fix target.

Nothing here is booked, no knob is on, and judged directories are clean. The population audit (pid 20748)
still holds the harness; the re-lift queues and the owed corruption-window check wait on it.
