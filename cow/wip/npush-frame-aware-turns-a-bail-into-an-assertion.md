# NPUSH_FRAME_AWARE: the mechanism, in two sub-bugs — a bail became an assertion

Date: 2026-11-11. **NOT COMMITTED while the relift runs** (its 170 lifted files are in the working tree and a
unit-mode commit would sweep them in). Written from `build/scratch/npush_callsite_diff.py`.

## The finding, in one line

`COW_MODEL_NPUSH_FRAME_AWARE` does not change `pushes`, `npush`, or the `pushed` list on the two control
units — those are **byte-identical off/on**, which killed my first story ("it ate an argument push", the
failure the source itself documents at `_tail_pops_single_path`). The only key of `model_generated()` that
differs is `call_sites[0]`, and within it exactly two fields:

| field | knob off | knob on |
|---|---|---|
| `push_values` | `None` | `['271909608u']` / `['g->eax']` |
| `push_values_why` | `'pending-vs-pushed'` | `''` |

So the knob's effect is to **turn off a bail**. Off, the model declines to name the pushed values, and
`lift.py` falls back to the only authoritative source it has — the generated body's own statement. On, the
model asserts values, `lift.py` believes it, and both asserted values are wrong.

This is the inversion worth writing down: the safe state was the refusal. A mechanism that makes the model
more confident makes the output worse, and nothing in the emitted C looks wrong.

## Sub-bug 1 — the rebase is dropped

```
guest   100142b1:  push 0x103502e8
body               { uint32_t v = (0x103502E8u + RD); esp -= 4; wr32(esp, v); }
committed bridge   (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103502E8) }     <- +RD preserved
knob bridge        (const CowU32[]){ 271909608u }                           <- RD gone
```

The knob's value path reconstructs the operand from the disassembly text and loses the `+ RD` that the
generated body carries. `COW_IMG(...)` is what makes an image address correct when the host image is not at
its preferred base; a bare literal is only equal to it when `RD == 0` — **and the proof harness always maps at
the preferred base**, so `RD == 0` under the judge and cowdiff can never see this. That is precisely the class
of defect that only controls catch.

## Sub-bug 2 — a partial write is read as a whole register

```
guest   10014200:  mov ax, word ptr [0x104568F8]     <- 16-bit write to eax
guest   10014207:  push eax
committed bridge   (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_104568F8)) }  <- the value actually stored
knob bridge        (const CowU32[]){ g->eax }                                   <- the whole 32-bit register
```

`eax`'s low half is the load; its top half is whatever was there on entry. The generated body models this as a
partial write (the `apply_partial_widths` machinery exists for exactly that), so naming the pushed value
`g->eax` is only right if the high half is known to be unchanged *and* irrelevant. The committed rendering
sidesteps the question by reading the memory the guest read.

## Why the bail was firing, and what the knob changed

`push_values_why == 'pending-vs-pushed'` is the guard that says: the values pending in the walk do not line up
with the `pushed` list, so refuse to name them. `NPUSH_FRAME_AWARE`'s head-push walk tolerates register-only
interleavings (`push esi; push eax` with a `mov` between them, the shape at 0x10014207), which reorders the
pending bookkeeping just enough that the comparison now *appears* to line up. The guard is satisfied by the
knob's own more permissive view of the head, not by the guest agreeing.

That is the same class of failure the file already warns about in `_tail_pops_single_path`: *"two wrong lists
agreeing is not a safety argument."* Here the head walk and the pending list agree with each other and
disagree with the disassembly.

## What must happen before this knob can ship

1. `push_values` must never be populated with a value that drops `+ RD` for an image-resident constant. The
   cheapest correct rule: only accept a value the generated body already states in rebased form; a disassembly
   text operand is not that.
2. A pushed register whose last write was PARTIAL must not be named as the register. Either keep the bail or
   use the partial-width machinery that `apply_partial_widths` already has.
3. The guard's satisfaction must be checked against the disassembly, not against the knob's own head walk —
   i.e. `pending-vs-pushed` has to compare like with like.
4. **Then** re-measure the 433→399 claim. Until 1-3 are done, the gain is not a gain: it is a count of units
   where the model stopped refusing, and refusal was the correct answer.

## Standing rule this protects

A measurement that improves because a check stopped firing is a regression wearing a graph. The number to
quote is not "how many units lifted" but "how many units lifted that also PASS, with every control byte-identical".
