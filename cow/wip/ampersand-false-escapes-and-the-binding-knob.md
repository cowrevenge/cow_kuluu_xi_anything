# `x & param_3` is not `&param_3`: a shipped gate was refusing units for an operator that was not there

Two results in one sitting, the second caused by the first.

1. **The escape gate has a false-positive class, now fixed and pinned.** `ghidra_c.leftover_problems`
   refuses `local_address_escapes` / `param_address_escapes` on patterns like `r"&\s*param_[0-9]+"`, which
   cannot tell the **unary address-of** operator from the **binary bitwise-and** operator. Ghidra emits both
   constantly. **13 of the 107 units** in the escape population were refused for an address that never
   happened; with the context test in place, **13 of 13 lift** (report-only; nothing booked).
2. **My new binding knob then broke five of them**, because I wrote a second implementation of the same
   context test. Reading one regression found it; the knob now imports the shared rule.

## The evidence, from the units themselves

`lift_ampersand_context.py` classifies every `&name` by the character before the `&` (past whitespace) —
operand character ⇒ binary — and refuses to report at all unless its two exemplar tripwires fire in
**opposite** directions:

```
exemplar tripwires fired: 0x1001ac50 = address-of, 0x102efd3a = bitwise and
population: 107 units
  GENUINE address-of taken        : 94
  refused on a BITWISE AND alone  : 13   <- false positives of the shipping rule
  no &name at all                 : 0
```

What a false positive actually looks like (printed, not summarised):

```
0x100725c0   FUN_10072610(param_1,param_2,param_3 & param_4,param_4,DAT_...)
0x10107210   piVar1 = (int *)(param_4 + (param_1 & param_2 & 0xffff) * 0x...)
0x10193980   return ~(1 << (param_1 & 0x1f)) & param_2 | param_3 << ...
```

None of those hands a pointer to anybody. The list is `cow/wip/escape-false-positives.txt`.

The fix masks binary-AND occurrences before the three `*_escapes` patterns run
(`ghidra_c.mask_binary_ampersands`), leaves every other pattern looking at the original text, and is pinned
by three new `lift_selftest` cases (now **258/258**), including the one that keeps the fix honest:

```
address_of_a_stack_param_still_refuses_alongside_a_bitwise_and
    FUN_10009f20(&param_1, param_2 & param_3);     -> must STILL refuse
```

so a "fix" that simply deleted the rule could not pass. The gate still refuses genuine escapes on live
units: `0x1001ac50` → `param_address_escapes`, three others → `local_address_escapes`.

Why narrowing a safety gate is acceptable here, in the words of the code being changed: the clause exists
because *"Refusing puts the pattern in the histogram instead of hiding it inside a `memory` failure"* — it
is a **diagnosis** aid. cowdiff remains the arbiter; a genuine escape that slipped through still fails the
memory comparison, while a false refusal costs a unit and produces no evidence at all.

## The knob, and the five units it broke

`COW_MODEL_PARAM_BIND_MEASURE` binds a **stack** argument whose address is taken to its real guest slot:
the adapter passes `sp0 + 4u + 0xXku` as the formal's value, `&param_k` becomes `param_k`, and every other
use becomes a live `rd32` of the slot (which also removes the staleness class where Ghidra reads the
argument *after* a call that was given its address). Measurement-only: **off by default**, `--apply`
refuses, and deliberately unregistered in the re-lift preflight's ATTRS.

Measured on its own population, through the real lifter, both arms scrubbed of every other knob:

| | knob OFF | knob ON |
|---|---|---|
| lifted | **13** (the releases above) | **46** |
| newly liftable by binding | — | **33** |
| regressions | — | **0** |
| moved to another gate (not a win) | — | 16 |

**The first measurement said 52 newly liftable and had five regressions.** `f_10221320` was one of them:

```c
bool __thiscall FUN_10221320(int param_1, uint param_2)
{
  return (*(uint *)(param_1 + 0x6c) & param_2) != 0;      /* BITWISE AND. no address taken. */
}
```

With the gate fixed it lifts. With my knob on it was **refused**, because the binding block had its own
`re.finditer(r"&\s*param_(\d+)\b", newbody)` — the same context-blind test that produced the 13 false
refusals — decided the unit needed a binding, and then refused it as an unresolved mapping. A measurement
knob that turns a liftable unit into a refusal is worse than one that does nothing, because the histogram
makes it look like progress. It is now `for _tok, _ctx in ghidra_c.address_of_names(newbody)` — the shared
rule, which existed before I wrote the fork and would have saved the whole detour had I used it first.

That is the **fourth forked-rule incident this session** (`CALLEE_SAVED`, `STR_EXPLAINED`, this ampersand
test, and the escape binding). The pattern is consistent: I re-implement a test that already has a home
because the home was written minutes later than the need for it was perceived. The remedy is not more care,
it is: before adding a predicate, grep for one.

## What the 19 still-refused units say (and why the knob refuses them)

`lift_param_map_check.py` destroyed a comfortable assumption. lift.py maps Ghidra's `param_1..N` to
"(register arguments first, then stack slots)" by subtracting `len(reg_order)`, and for the units that
matter there is **no evidence for that**:

```
units taking a param address : 66
  reg_args EMPTY (mapping forced by arithmetic alone)  : 47
  reg_args non-empty (mapping depends on the assumption): 19
  signature names `this` explicitly                    : 0    (and cc == "unknown" on every one)
```

With `cc=unknown` and no `this` in the signature, nothing says whether Ghidra numbered the register
argument among `param_1..`. For `f_1001ac50` the guest evidence says it did **not** — Ghidra's `&param_1`
is the slot the guest reached as `[esp+4]`, while ecx is `this` and is never numbered. Subtracting
`len(reg_order)` there hands the callee a neighbouring slot — silently. So the knob binds **only** where
`reg_order` is empty, and names the rest `param_slot_mapping_unresolved` (14 of them still refuse that way,
5 more are hidden behind earlier gates). Note that this is the *first* time this assumption has been
visible at all: before the knob, all 64 refused on one generic name and the mapping question could not
arise.

The sound route to those 19 is a **witness**, not a rule: bind `param_i` only when a guest
`lea reg,[esp±const]` on the straight-line prefix resolves to exactly that slot — the same kind of
independent witness `cleanup/4` provided for the npush walk.

## Two instruments earned on the way

* **`--dump-c` (lift.py)** — writes emitted bodies for `--entries` into a `build/`-only directory, with no
  `written` list, no prune, no layout. Without it there was *no way to look at what the knob produces*,
  because a measurement knob must not `--apply`. Every claim about the binding is now backed by a body
  someone read; `lift_param_bind_verify.py` re-checks the artefacts (bound units carry slot arithmetic, no
  address-of survives, the bitwise-AND unit is *not* bound) and refuses to let the pricing be quoted when
  they disagree — which is exactly what it did once.
* **`lift_unit_read.py`** (previous commit) — the end-to-end read that started this, by showing the
  exemplar I designed the mechanism on was *not* in the released set.

## A commit-discipline miss, recorded because it is the kind of thing that quietly becomes a habit

The intent was three commits: the gate fix, then the knob, then this note. What actually happened is that
`commit.py --machinery` stages **everything dirty under `tools/cow`**, so `69ad47b3` - whose message
describes only the ampersand fix - also carried `lift.py`'s binding block, `--dump-c`, and the three
binding tools (8 files, 681 insertions). The message therefore under-describes its own commit.

Not fixing it by rewriting history: `69ad47b3` is pushed, and the independent audit is judging **this**
HEAD - re-verifying a commit while it is being re-verified is precisely the confusion `source_mismatch`
exists to prevent. So the correction is forward, here and in the commit message that follows.

The reusable rules:
  * `commit.py` prints `staged: N`, not the list. **Read `git show --stat HEAD` after every commit** - a
    count is not a description, and this is the second time this session that an unexamined commit output
    nearly became a false record (the first was the layout truncation, where a control run wrote shared
    material and only a follow-up read of sizes caught it).
  * Land a shipping-behaviour change and an experimental knob in **separate working states**, not separate
    intentions. If both are dirty, the commit that says one thing carries both.

## State


Nothing booked; the halt stands. `src/`, `layout/`, `ledger/`, `runtime/` untouched. The only shipping
behaviour change is the escape-gate context test (which releases 13 units on this population and refuses
none of them). Inertness 125/125, `lift_selftest` 258/258, frame-save spec pinned. The population audit
(pid 20748) still holds the harness, so the 46 released units have not been put near cowdiff — and per
`leaked-cowdiff-processes.md`, their eventual hang/timeout rows must be read on a free box.
