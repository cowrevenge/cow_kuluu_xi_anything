# argcount_mismatch (2,884), sliced: the frame design clears 17 units on its own — and is a prerequisite for 831 more

`string-gate-was-masking-argcount.md` moved the target: the string gate was masking, and the binding
constraint is **`argcount_mismatch`**. `lift_argcount_frame_slice.py` asks the only question worth asking
about a class that three `g->reg` widenings already failed to open — not *can we name registers at push
time* (three measured NOs) but **what produced the register that today comes out `unnameable`** — because
`cow/skip_patterns.txt` contains one un-followed line from the 2026-11-07 census: `lea <r>,[esp+IMM] ~180`.
A pushed register whose value is a frame-relative constant is the same object the string family's 85% slice
is. Live report-only run: 2,884 argcount units, 17,635 unnameable register pushes inspected.

## The partition (units, asserted to sum to the population)

| bucket | units |
|---|---|
| every unnameable push is CONSTANT-FRAME `lea [base ± const]` | **12** |
| …plus the *sound* never-written case (register never written **anywhere** in the body) | **5** |
| some pushes nameable, at least one is not — **needs the frame binding AND something else** | **831** |
| none are — loads, chains, `pop`, `movsx` | 1,840 |
| no unnameable *register* push at all (memory-operand bails; a different design's case) | 196 |
| unscanned | 0 |
| **total** | **2,884** |

**The design's own yield is 17 units; its real value is that it is a *prerequisite* for 831 more.** Quoting
either figure alone misrepresents it — and quoting the *site* counts (the 325/265/244/231/199 rows above the
table) would badly overstate it, because a unit clears only when **every** unnameable push at **every** site
is nameable. That lesson has now been re-learned three times in this loop (319→82, 82→36, and here).

Combined with the string side, the frame-binding feature is worth **~53 report-only units** and gates
**831** others. `clears` means "the emitter produces a body" — never "passes cowdiff".

## The number that nearly got away: 466 → 5

First run put **466 units** in a `never-written` bucket — an apparent discovery inside a class everyone has
given up on. It was my own predicate being quietly weaker than the one that had already been disproved.

My `root_shape` stops its walk at the push, so "no producer found" meant *"never written **at or before the
push**"*. The two rules the loop actually priced are different:

* **"never written ANYWHERE in the body"** — sound, and measured nearly empty (837 → 833).
* **"not written at any addr < call"** — the weaker local rule, released 57 units and **passed 5 of 58 =
  8.6%**, dominated by `memory` and `callee-saved register`, and it silently rewrote 37 already-proven files
  until `call` was counted as a write.

A register written *after* the push passes my walk and fails the safety argument for exactly the reason those
runs failed: by bridge time `g->R` holds the recomputed value, not the word the guest pushed. So I split the
bucket on `written_anywhere`:

```
never-written candidates:  466   ->  5      (the sound, whole-body rule)
written-after-push         461   ->  folded into "needs something else"
```

**461 of the 466 were the third variant of an idea that is already dead.** Announcing 466 would have burned
another week re-running an experiment with a published result. The graveyard line is where they belong:
`gen_model._writes_reg` excludes calls, and a callee writes `g->eax/ecx/edx` — so a register untouched by
the *body* can still be changed by a `call` sitting between the push and the bridge.

## Discipline notes

- The first version's remainder printed **-196**: the "no unnameable register push" units were counted in
  their own bucket *and* in `blocked`. Now an asserted partition (`assert sum == len(real)`,
  `assert real + no_push + unscanned == len(units)`) — arithmetic that announces its own double count
  should be an exception, not a line someone squints at.
- Selftest pins both directions of the classifier: `lea ecx,[esp+0x10]` → `push ecx` **must** be
  frame-nameable (it is the parked census's shape), and `lea ecx,[esp+edx]` → `push ecx` **must not** be.
- The population comes from a live report-only run (cached to `build/lift/argcount-units.txt`), not from a
  frozen table — the last turn's stale-C2100 lesson.
- Nothing booked, no knob on, judged directories clean, audit (pid 20748) still holds the harness.
