# Is the frame-slot wall one mechanism or forty? For 77% of it: one

Three populations wait on the same design (`refusal-ranking-and-escape-split.md`): the units refused
`string_op_not_modelled_operand_stack_frame`, the **70** whose push naming needs a local slot
(`push-operand-wall.md`), and `f_10316337`, whose conversion unblocks **116** `hang` rows. Before anyone
designs "bind a frame slot to a guest stack address", the question is whether that design has a bounded
shape — or whether it is forty designs in a coat.

The refusal comes from one coarse line in `gen_model._str_prov`:

```python
if mnem == "lea":
    return "stack" if ("esp" in src or "ebp" in src) else "derived"
```

`lea edi,[ebp-0x20]` and `lea edi,[esp+eax*4]` get the **same verdict** and are not the same object. The
first is `frame_base + constant`: nameable the moment the adapter knows where it reserved the locals, which
it already does (`g->esp -= 0x10u` for locals). The second depends on an index register the body rewrites,
and no frame binding reaches it.

`lift_strprov_shapes.py` asks the module which register it condemned (`string_shape` / `_str_prov` — not a
re-implementation of the provenance rule, which is how censuses here have gone wrong) and then answers a
separate question with the module's own `_writes_reg` / `_dst_reg`: **what wrote that register before the
rep**.

## Result — 21,891 units scanned, 503 refused on `operand_stack_frame`, 1,894 condemned registers

| producing shape | count | share |
|---|---|---|
| **CONSTANT-FRAME `lea reg,[base ± const]`** (all offsets summed) | **1,449** | **76.5%** |
| `not-lea:mov` (a copy — chain root not followed here) | 270 | 14.3% |
| `not-lea:dec` (a loop step on a frame-derived register) | 84 | 4.4% |
| indexed / other | remainder | ~4.8% |

Top individual shapes, all constants: `[esp+0x10]` 125, `[ebp-0x2c]` 77, `[esp+0x14]` 65, `[esp+0x18]`,
`[ebp-4]` 36, `[esp+0xc]` 35, `[ebp+0x1c]` 33, `[ebp+8]` 31, `[esp+0x40]` 31 … Condemned registers:
`edi` 1,147, `esi` 616, `ecx` 129, `eax` 2 — exactly the string destination/source pair, which is what the
theory predicts.

**The design is bounded.** Three-quarters of the wall is one instruction shape: a register aimed at a
fixed offset from the frame. A single mechanism — bind the adapter's reserved local region and name
`[base ± const]` — addresses it, and the same mechanism is what the 70 push units and `f_10316337` need.
That is the strongest case the loop has built for one piece of design work.

## What this does NOT establish, stated because the temptation is obvious

* **Nameable ≠ liftable.** Addressing the destination is one of the clauses; the `rep` loop still has to
  satisfy width, direction-flag and the rest of `string_shape`, and the unit still has to pass `cowdiff`.
  This sizes the *gate*, not the payoff.
* **The 23% is not dead, it is un-followed.** `not-lea:mov` / `not-lea:dec` are cases where my classifier
  looks only at the **last** writer. The module's own rule follows chains recursively, so a chain rooted in
  a constant `lea` is probably nameable too — the true nameable share is **≥77%**, and a second pass that
  follows chains is the honest next measurement. What is genuinely unreachable is the `INDEXED`
  (`[esp+eax]`) shape, and the selftest exists specifically to stop that being counted as nameable.
* **503 vs 431, and why both are right.** The lift histogram reported 431 for this reason; this scan finds
  503 units whose `string_shape` verdict is `operand_stack_frame`. The histogram counts the reason a unit
  was *refused on* (first bail wins), while this classifies the string model's verdict even in units that
  fail something earlier. Quoting either as the other would be a denominator swap; both numbers are here.

Tripwires that ran: the population must be non-empty (503); the classifier must produce ≥2 distinct shapes;
and the fixture pair — `lea edi,[ebp-0x20]` **must** land in CONSTANT-FRAME while `lea edi,[esp+eax]`
**must not** — is built through `parse_instructions`, never as hand-made dicts, since `_writes_memory`
reads a `stmt` field hand-made dicts do not have (this session's last dead filter).

## Where this leaves the queue

The frame-slot binding is now the ranked #1 design item with a measured shape, a named population per
slice, and a selftest that can tell a false positive from a true one. It is still a **design**, not a knob
turn — and the standing rule from `gen_model.py:2461` applies to any first cut: a measurement knob may make
a population *countable and proveable*, never shippable, and must never be set for a run whose files are
kept.

Nothing booked, no knob on, `src/` untouched. The population audit (pid 20748) still holds the harness;
the re-lift queues (170 accepted + 23 frame-walk + 82 frame-read) are waiting on it.
