# The 23-unit knob was really 433 — then 399: how reading one regression found a bug in my own fix

The frame-aware push walk (`COW_MODEL_NPUSH_FRAME_AWARE`, shipped inert at `f1004949`) was priced at **23
newly-liftable units**. A whole-image comparison put it at **+418 lifted**. An 18x disagreement about my own
knob needed settling, and settling it found the knob was eating real argument pushes.

## Settling the two numbers

They were both true and both partial:

- **23** came from `lift_npush_price.py`, which priced the census of call sites carrying a **non-zero
  cleanup** constant — the right way to *prove* the walk was wrong (`cleanup/4` is the independent witness),
  but a subset of everything the walk mis-measures.
- The whole-image figure covers all sites, including cdecl ones with `cleanup == 0` that the census
  deliberately excluded.

`lift_report_diff.py` now computes the claim as an actual unit-level list rather than two counts, and prints
newly-liftable / newly-refused / moved-to-another-gate separately, because "moved" is not a win.

## The bug, found by the rule that says read one before trusting the rest

The diff reported **15 regressions** — units that lifted before the knob and were refused by it. Naming them
showed all 12 argcount ones were `ghidra1_push0`, which looked benign ("the inflated count was agreeing with
Ghidra by luck"). My own instruction says verify that rather than assert it. Reading `f_10036360`:

```
10036360  push esi              <- the real frame save
10036361  mov esi, [esp+8]
10036367  je  ...
1003636c  je  ...
1003636e  push esi              <- A REAL ARGUMENT PUSH, immediately before the call
1003636f  call 0x10036830
```

and the knob's internals:

```
_head_pushes      : ['esi', 'esi']            <- adopted the argument push
_tail_pops_loose  : ['esi', 'esi']            <- two exit paths pop esi
closure holds?    : True                      <- a bug agreeing with a bug
frame_save_addrs  : [0x10036360, 0x1003636e]  <- the argument is DELETED from the count
```

`_head_pushes` deliberately tolerates interleavings and does **not** stop at a conditional jump, so it
walked past two `je`s and adopted the argument push; the loose tail reader over-collected by exactly the same
amount, so `reversed(head) == pops` — the rule I called "the whole safety argument" — was **satisfied by two
wrong lists that agreed**. A test that agrees with a bug is not a test.

**Consequence, stated plainly: the +433 was contaminated.** Some of those units "newly lifted" because the
knob removed an argument push, which is wrong plumbing the guard used to catch.

## The fix, and what it does not yet cover

Head saves must now lie **below the first control-flow transfer** in the body — a prologue save happens
before a function has branched anywhere, while after a transfer `push <saved reg>` is usually an argument.
The pairing test is re-checked against only the survivors, so it can no longer be satisfied by agreement.

- `f_10036360`: **fixed** — `frame_save_addrs = [0x10036360]`, the argument push is counted again.
- `f_10123350`: **not fixed** — `push esi; push esi; push 0x2a; …; call`, both esi pushes precede any
  transfer, and the second is very likely an argument. Position cannot separate them.

What actually separates them is **which push the epilogue `pop` restores, by stack depth** — LIFO pairing by
position, not by register name. That is a design item, not a condition, and it is recorded as the gate this
knob must pass before it is ever enabled.

## What may be quoted

| claim | status |
|---|---|
| **23 units** | **proven** — the cleanup-witnessed census; `cleanup/4` independently confirms the walk was wrong |
| **399 units** | **upper bound** on the whole-image gain, still contaminated by the `f_10123350` ambiguity; do not book from it |
| 13 regressions | named, with the mechanism understood and one exemplar unresolved |
| 366 "moved gate" | explicitly **not** a win |

Corrected after the tightening: newly-liftable **433 → 399**, regressions **15 → 13**. The knob stays **off
by default**; inertness 125/125 and `lift_selftest` 255/255 re-run after the change, judged directories
clean, nothing booked.

The uncomfortable part worth keeping: I shipped the knob, wrote a commit message calling the closure rule
"the whole safety argument", and it was protecting nothing in exactly the shape it was built for. What
caught it was not the test suite — it was reading one regression's instructions, which the loop's rules
already required.
