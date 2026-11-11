# The string witness knob, and the 55 local escapes the string gate was hiding from me

Three results, one of which corrects a decision I recorded yesterday (same session, ~2 hours ago).

## 1. The knob: `COW_MODEL_STR_WITNESS_MEASURE`

`_str_prov` returns `"stack"` for any `lea reg,[esp|ebp ...]`, and `"stack"` is not in `STR_EXPLAINED`, so
the string model refuses the unit as `string_op_not_modelled_operand_stack_frame`. The new knob returns
**`"stack-witnessed"`** — and admits it only on a triple, each part of which has already caused a defect
this session when it was missing:

* the lea is on the **straight-line prefix** (`frame_leas` says so) — past the first control transfer
  `c["d"]` is a path property and the offset is a fiction;
* **nothing rewrites the register** between the lea and the `rep` — a witnessed address the body then
  overwrites is not a witness (same staleness class as `_push_values`' `stale:<reg>` bail);
* base is `esp`, so the offset is sp0-relative and means the same thing once the adapter emits it.

Deliberately **narrower** than `COW_MODEL_STR_PROV_MEASURE`, which admits any `[base+-const]` lea anywhere.
The name joined `STR_EXPLAINED` (the **one** tuple — adding it in two places once produced a
`operand_stack-const` refusal), and knob-off is byte-identical because nothing *produces* the verdict unless
the knob is set: inertness 125/125, `lift_selftest` 258/258, both specs green. Measurement-only as usual:
`--apply` refuses in `lift.py`, and the name is deliberately absent from the re-lift preflight's ATTRS.

Read before writing, per the rule — `f_10002840`:

```
sub esp,0x118 / push ebp / push esi / push edi        -> frame = sp0-0x124
mov ecx,0x40 ; xor eax,eax
lea edi,[esp+0x24]                                      -> edi = sp0-0x100, on the prefix
rep stosd dword ptr es:[edi],eax                        -> memset of the RESERVED buffer
```

## 2. What it releases, and what it unmasks

Priced on its own population (`lift_str_witness_price.py`, both arms scrubbed of every other `COW_*`,
partition-asserted):

| arm | lifted | argcount-blocked |
|---|---|---|
| string knob only | **6** (5 newly liftable vs 1) | 81 |
| npush knob only | 1 | 0 (string gate blocks first) |
| **both knobs** | **10** | **13** |

So `COW_MODEL_NPUSH_FRAME_AWARE` resolves **68 of the 81** argcount refusals in this family — the
frame-eating backward walk again, and the cluster names it: seven contiguous callees at `0x101c3xxx`
(`3d00`×12, `3a90`×9, `3de0`×9, `3e10`×9, `3db0`×7, `3f40`×4, `3e40`×3), **every one disagreeing by exactly
two words** except `3e40` (one). A walk that bills frame saves to a call produces exactly that signature.
No new code is needed for those; the npush list is a **delivery** problem (it needs a whole-population lift
for its layout macros).

## 3. The correction: "the local half is 2 units" was measured on a filtered population

Yesterday's note concluded: local escapes = 43 units, **2** clean, don't build. That measurement is sound
*for the 43 units the escape gate could see* — but the escape gate is not the first gate. The string gate
refuses earlier, so any unit that would refuse on **both** was counted as a string unit and never entered
the local population.

Opening the string gate (plus the npush fix) exposes **65 more units refusing on `local_address_escapes`**.
Classified with the shared primitives:

```
  ESCAPED LOCAL witnessed and pushed                       55
  witnessed lea exists but does not line up (count/not pushed)  10
```

**55, not 2.** The first cut of that test printed `65 of 65` — and a 100% bucket is the moment to distrust
your own predicate, not to celebrate: it had asked *"does the body contain SOME witnessed local lea"*, which
is near-tautological for a population **defined** by a witnessed string destination. The question that means
anything is whether the **escaped local itself** is witnessed and reaches a callee (count equal, register
pushed at the first call site — the param witness's own conditions). That tightening moved 100% → 85% and
is the number worth quoting.

Same lesson, third time this session: **first-bail-wins histograms hide work from each other**
(string→argcount, escape→argcount, now string→local-escape). A population defined by "the current refusal
name" is a population pre-filtered by every gate in front of it, and a rejection measured on it is a
rejection of what the gate chose to show.

## Where the queue stands now

1. **Local binding on witnessed slots** — target 55 units (subject to the next gate after it), on the same
   witness conditions the param binding uses. This is now the biggest reachable slice and the natural next
   mechanism; it must start, as these always do, by reading one of the named units end to end
   (`0x101a8530`, `0x101beba0`, …) and answering the keep-alive question per unit. The precondition does
   hold, but only after being measured — I wrote "by construction" first, which is reasoning, so it was
   checked: **65 of 65 report `locals > 0` and contain a `sub esp,N`**. *Reserved* is still not the same as
   *still holding the bytes when the callee writes*, and that is the question the read has to answer.
2. **Delivery, not code**: the npush frame-walk list (679 report-only) and this string slice both need a
   whole-population lift to regenerate the layout macros — blocked on the audit releasing the harness, then
   on the merge-vs-regenerate decision with its delete-one-macro control.
3. Re-measure the hang/timeout families on a free box; then the `argcount_mismatch` re-rank, which today's
   numbers say is partly the same `0x101c3xxx` cluster under a different gate.

## Instrument notes

* A scratch script set `COW_MODEL_STR_WITNESS_MEASURE` in the environment **before importing** `gen_model`,
  which silently changed the *definition of the population* (the condemned-register test asks for
  provenance `"stack"`, and the witnessed ones answered `"stack-witnessed"` instead) — it reported 16 units
  where the priced run reported 130. Scrub `COW_*` before importing, define the population, then flip the
  module constant explicitly so both states are visible. The permanent tools already do this; the scratch
  one re-learned it, and now says so in its own header.
* `lift_str_witness_price.py` carries the partition assertion that has caught this parser bug twice
  (`refuse 0x…:` keys keeping their colon made "lifted" equal the whole population).

Nothing booked; no knob left on in the environment; `src/`, `layout/`, `ledger/`, `runtime/` untouched. The
independent audit still holds the harness.
