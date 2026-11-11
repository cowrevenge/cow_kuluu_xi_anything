# Localising the fault-asymmetry pile — the harness could never say *what* it touched

Status: **instrument landed; nothing booked; the halt stands** (`cow/reverify.json` untouched,
394 @ `02b111fca3`).

## The pile, split by the only question that separates diagnoses

`tools/cow/reverify_bucket.py` bucketed 52 of the 394 as `runner-or-state-divergence`, and its own
vocabulary said what was wrong with it: *"side B (ours) faulted (0xc0000005) and the other did not"*. That
one sentence covers at least four different diseases. Splitting it by which side faulted:

```
52 = 13 OURS faulted (all 0xc0000005)  +  36 the ORIGINAL faulted  +  3 both
```

The 13 are the ones that can only be *our* doing, so they went first. **All 13 reproduce at 2000 states on
today's bytes** — none of them is a stale booking, which was not assumed: it is the failure mode this repo
already paid for once (a "control" that failed in both fresh batches while the booking map said pass).

They reproduce above the depth that booked them. `0x10071bd0` passes 12/12 at 200 states and fails at
**state 1719**; the booking runner's depth is 400. So the harness's fuzz stream, not the code, is what
eventually reaches them.

## The instrument

`cowdiff.c` never read the SEH record. It now does — `cow_fault_filter` captures the faulting **address**,
the access **type** (read/write/DEP-execute) and the **exception address**, and one extra line prints them
per faulting state. `tools/cow/cowdiff_fault_detail.py` drives it over a unit list.

Two things had to be got right, and both were got wrong first:

1. **The batch path is quiet and masks everything.** The first version scraped `lift_proof` output, got
   `first at state #`, `fault 0/-#`, and printed *"fault detail captured: 0/13"* — a zero that was one
   sentence away from being believed as *"no faults to explain"*. Per-unit `cowdiff.py` is the path that
   prints. The tool now hard-exits on zero fault lines over a known-failing list.
2. **The fault pc is not a cross-unit key, and a histogram of them is a lie.** Each unit is linked into
   its **own** executable (`build\cowdiff\cowdiff_<hex>.exe`) and the exe is ASLR'd, so no mask makes one
   unit's pc comparable to another's. The first version grouped by `pc&0xfffff` and announced *"13
   distinct sites → NOT one pattern"* — a conclusion drawn from a key that cannot answer the question. The
   useful key is the **guest** address: the harness prints where it mapped the image, so subtracting that
   base turns the SEH record's host address into the address our code actually asked for. The pc is still
   printed, labelled for depth on one executable only.

This TU **does not include `<windows.h>`**, on purpose (the file says so twice: windef's macros collide
with the recompiler's own Win32 declarations in `guest.h`/`k32.h`). So `LONG`/`EXCEPTION_POINTERS` don't
exist there; the two SEH structs are spelled locally with `size_t` for the pointer-sized `ULONG_PTR`.

**Inertness was measured, not asserted.** Re-running the same 29-unit batch, same states, same seed,
against a record taken from the *untouched* build: **29/29 verdicts identical**. "Reporting-only by
construction" is a claim; this repo's history is a list of such claims that turned out to be vacuous.

## What it already says

On a 5-unit sample of the 13 (`--units 0x10071bd0,0x1011a430,0x10197030,0x10269c10,0x102de613`):

| unit | state | op | guest address touched | where |
|---|---|---|---|---|
| `10071bd0` | 1719 | read | `0xe110028e` | outside every region |
| `1011a430` | 616 | read | **`0x14`** | near-null |
| `10197030` | 805 | write | **`0x27`** | near-null |
| `10269c10` | 550 | write | `0x68477446` | outside every region |
| `102de613` | 757 | read | **`0x2`** | near-null |

The original never faulted on any of them, and our side never touches a valid pointer. So the pile is
**at least two diseases**, not one:

* **near-null** (`0x2`, `0x14`, `0x27`) — a base that is 0 in our lift where the guest had a real pointer,
  plus a struct offset. That is a *pointer source* modelled wrong, and it is the same family as the
  invented-argument work: something we bind or load is zero where the guest's was not.
* **garbage** (`0xe110028e`, `0x68477446`) — a value used as an address that was never an address.

Before this, both were the same line of text, and every triage of the 52 started by guessing which one it
was looking at.

## Also worth recording: the unit I nearly "fixed"

The first hypothesis for `0x10071bd0` was an unbalanced push/pop replay — the epilogue looked like a `pop`
without a matching `push`. **Reading the adapter showed the push there, correct, on line 49** (`g->esp -=
4u; wr32(g->esp, g->esi); /* 0x10071bd0: push esi */`). The hypothesis died by reading, in about a minute,
which is the whole argument for reading before building a mechanism.

## Owed, in order

1. **Run the tool over the 36 original-faulted rows** — the majority of the pile, and untouched. If a
   meaningful fraction of them are the *harness* faulting (a fuzzed pointer the guest also held), that is
   a comparison-scope question like the dead-stack 137, not 36 units of conversion work.
2. **The near-null sub-class**: for each, find which pointer is 0 on our side and where the guest got it.
   This is where a pattern may actually exist, and it is adjacent to the register-argument work — note
   that `guest_fill` **fuzzes ecx/edx and the seed vocabulary cannot pin a register** (see
   `overlay-read-shift.md`), so some of these may be unreachable states rather than defects.
3. The `regs` pin in the seed vocabulary, still owed, still the higher-leverage instrument.
