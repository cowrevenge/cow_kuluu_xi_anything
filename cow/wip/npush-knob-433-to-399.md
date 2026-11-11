# The frame-walk knob: 23 proven, 433 contaminated, 399 tightened, 734 pinned — and the bug my "safety argument" hid

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

## Resolution: the LIFO rule, and the false alarm that got me there

The design item above (pair by **stack depth**, not register name) is now implemented, and the numbers moved
in the right direction:

| | closure rule | + position | + position/count/LIFO |
|---|---|---|---|
| newly liftable | 433 | 399 | **734** |
| newly refused | 15 | 13 | **2** |
| moved to another gate | 376 | 366 | 653 |

The root cause was one line in `_tail_pops_loose`:

```python
if m == "ret" or m == "leave":
    continue          # <- skipping `ret` walks straight across an exit-path boundary
```

A function with two exits each ending `pop esi; ret` therefore reports **two** pops for **one** save — which
is precisely the over-collection that agreed with `_head_pushes`' over-collection and let the closure test
pass while an argument push was eaten.

`frame_save_addrs_of` now requires three things at once, because each one alone was observed to fail:
**position** (a save precedes the first control-flow transfer), **count** (the saves equal the pops on ONE
exit path), and **LIFO order** (`reversed(saves) == pops`).

`lift_frame_save_spec.py` pins all of it on three real corpus units plus a synthetic two-exit body — and the
spec's own output shows the bug it exists to stop:

```
synthetic two-exit path: one save across two exit paths;
                         loose reads ['esi','esi'], single-path reads ['esi']
```

A spec pinning only the case the rule was designed for is how the bug ships; `f_10123350` (two adjacent
`push esi`, position cannot separate them) and the synthetic two-exit path are the two cases that broke the
first two attempts.

**A false alarm worth recording, because I nearly "fixed" a non-problem.** Right after the change I read
`lift_site_read.py` reporting `npush=11` for `f_10316337` with the knob set, and concluded the motivating
case had regressed. It hadn't: `lift_site_read.py` **pops every `COW_*` variable at import** — by design, so
a read never silently inherits a knob — and therefore always shows the knob-off view. The diagnostic that
set the environment explicitly showed `npush=8` and all four saves. Two lessons in one: a tool that hides a
knob's effect must be labelled loudly enough that I notice, and "the instrument says it broke" is a claim
about the instrument until proven otherwise.

**Still true after all this:** 734 is a report-only gain under a rule that is now pinned but **not yet
proven**, and the 23 cleanup-witnessed units remain the only slice with an independent witness. Nothing is
bookable until the measured re-lift runs, and these units still need a whole-population lift to obtain their
layout macros.


## Round two of the same lesson: a frame save is callee-saved, *by definition*

The two remaining regressions were read rather than assumed benign — which is what found the next bug.
`f_1020a730`:

```
head            : ['ecx']            <- push ecx at 1020a736
first transfer  : 0x1020a737         <- the CALL, one byte later
frame_save_addrs: ['0x1020a736']     <- my rule called it a frame save
site -> 10103f80 npush=0             <- the thiscall `this` vanished
```

`push ecx` immediately before a call is the classic thiscall `this` on the stack: an **argument**. The rule
adopted it because `_head_pushes` tests membership in `gen_model.SAVED_REGS = (ebp,esi,edi,ebx,eax,ecx,edx)`
— correct for scanning an *epilogue* (a body may legitimately save `eax`) and wrong for deciding what a
*frame* is.

The right definition already existed, in `lift.py`: `CALLEE_SAVED = (ebx,esi,edi,ebp)`. This is the
duplicated-rule drift pattern again, but this time **by omission** — I reused a similar-looking constant from
another module instead of the correct one, which is worse than duplicating, because it looked like reuse. Now
`CALLEE_SAVED` is defined once in `gen_model` and imported by `lift.py`; `frame_save_addrs_of` accepts only
callee-saved candidates; and the spec gained `f_1020a730` (saves must be **empty**, `npush` must stay **1**),
because a rule added after a defect is only real if a test would have caught the defect.

| knob state | newly liftable | newly refused |
|---|---|---|
| closure rule only | 433 | 15 |
| + position | 399 | 13 |
| + single-path count + LIFO | 734 | 2 |
| **+ callee-saved requirement** | **679** | **1** |

Four figures, three bugs, and each one was found by **reading a unit** while the test suite passed every
time. The scoped, cleanup-witnessed census improves under the same rule: **23 → 38**.

**The one remaining regression is not a naming problem.** `0x1022de70 → local_address_escapes` is the
frame-local escape class from earlier this session (`lift_frame_escape_callee.py`): a host C array's address
handed to a callee. With corrected push accounting the stricter check now fires on a unit that used to lift
while carrying an escape cowdiff cannot observe. Reported, not deleted — and worth reading **before** the
re-lift rather than after.

The number to quote now: **679 newly liftable, 1 regression, report-only**, under a rule pinned by a
four-case spec — still not proven, and still needing a whole-population lift for layout macros.


## The last regression read to the end: `0x1022de70` is the check working, not the knob failing

I said this one was "worth reading before the re-lift rather than after". Read, and it is not a lost
capability at all. The guest body, from `lift_site_read.py`:

```
1022de70  sub esp,8               <- two esp-relative locals
1022de73  lea eax,[esp]           <- address of local #1
1022de77  push esi                <- the frame save (callee-saved, below the first transfer)
1022de78  mov esi,ecx
1022de7a  lea ecx,[esp+8]         <- address of local #2
1022de7e  push eax                <- argument: &local #1
1022de7f  push ecx                <- argument: &local #2
1022de80  mov ecx,esi
1022de82  call f_10221be0
```

Site data with the knob on: `npush=3  pushed=['ecx','eax','esi']  push_values=COMPLETE`,
`npush_stop='prologue'`, and the epilogue pops `['esi']` - so the count is now right: esi kept as the
frame save, both address pushes counted. What changed is that correct accounting exposes the two `lea`
results as arguments, so the emitted C passes `&<local>` into a callee - the one thing the rewriter
refuses outright. The only producer of that refusal name is `ghidra_c.py:1836-1853` (`&local_N`,
`&...Stack_N`, `&_Stack_N`), pinned by `lift_selftest.py:506`
(`address_of_a_c_local_escapes_is_refused_not_shipped`). I did **not** dump this unit's emitted C - there
is no report-only facility for it - so that attribution rests on the rule's ownership plus the
disassembly, not on a line of C in front of me.

And the unit was never a pass. Both records read from the files, not from my notes:

- `ledger/functions.csv`: `0x1022de70,0x1022deb6,70,false,todo,,,,false,...` - `status=todo`,
  `verified=false`. Never booked.
- `cow/lift_proof_all.json`: `"pass": false, "why": "memory"`, raw
  `10 mismatch(es), first at state 0 (memory) fault -1073741819/-1073741819 @00993bcc 00993bdc/00000001
  x2 stack store=value A:1/00993bdc B:1/00000001 ...`.

Per `cowdiff.c:8-11` side **A** is the instrumented *generated translation* and side **B** is **our**
adapter; per `cowdiff.c:1199-1204` and `:1232`, `@%08x` is the mismatching address, the `x/y` pair after it
is the value each side left there, and `A:1/... B:1/...` is store-count/last-value at that word. So at
guest stack word **0x00993bcc** the reference left **0x00993bdc** - a frame address, inside the compared
frame window, i.e. the guest storing a pointer into its own frame - and our side left **0x00000001**, both
having stored exactly once. The escape class, showing up as an *observable* memory failure rather than a
hidden one.

**Verdict: the refusal is correct and stays.** The knob is not losing a unit; it removes one from the
lifted set that lifted *because* the mis-counted push hid those two address arguments from the escape scan
- a unit that already fails cowdiff at state 0 for the reason the escape check names. Reported, not
deleted.

Two consequences worth pinning so nobody re-derives them:

1. **The re-lift decision is unaffected.** One refusal, correct on its face, is not a reason to hold
   `COW_MODEL_NPUSH_FRAME_AWARE`.
2. **The "cowdiff is blind to escapes" framing needs a caveat.** It is blind to a *callee writing host
   memory* through a leaked array address - which is why the 14 booked-pass escape units pass. It is **not**
   blind when the guest's own behaviour is to store a frame address as a *value*, because then our side
   cannot produce that value at all. So a pass inside that escape group is weaker evidence than it looked:
   it means "no frame address was ever stored where it mattered, in these states", not "the escape is
   harmless". That is a second reason the 14 should not be treated as settled until the re-gate runs.
