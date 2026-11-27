# 0x101b00b0 - the lift resolves `[esp + disp]` into the wrong sp0-relative slot

Status: **defect measured, fix not attempted.** Worth 4,324 B, and it is the tip of a class: this is the
mechanism behind `call args` failures on aim's `seek: starts at <block>` states.

## The measurement

The original's three pushed words for the second call to `0x101b5d10`:

```
101b0f90  mov  edx,[esp+0x23dc] ; push edx
101b0f97  push edx
101b0f98  mov  eax,[esp+0x23dc] ; push eax     <- same spelling, different word: the push moved esp
101b0f9f  mov  ecx,[esp+0x14]   ; push ecx
101b0fa7  call 0x101b5d10                       ; thiscall, 3 stack words
```

`src/lifted/cow_101b00b0.c:1750` answers all three from frame locals, and 4 lines earlier it sets the pre-call
esp itself (`g->esp = sp0 - 0x23d0u`):

```
    t369 = cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, loc_23dc, loc_23d8, loc_23d4);
```

Asking the unit, in a scratch copy, what it and the guest memory actually hold (one run, reproduces first
time; `esp=00cc1400 sp0=00cc37d0`):

| what | value |
|---|---|
| the unit passes (its `loc_23dc`, read from `sp0-0x23dc`) | `7d31027f` |
| `[g->esp + 0x14]` - the word the original used for that slot | **`bfe77d1b`** |
| judge, argument index 2 of `call=2:101b5d10` | **A=`bfe77d1b`  B=`7d31027f`** |

Right address `0x00cc1414`, unit read `0x00cc14fc`: **the slot key is off by 0x18.** Two different pieces of
memory, not two different computations - which is why the values are never close.

## Why this is invisible on a normal run

On a run that enters at the function top, that slot is written before it is read (`loc_23dc = 0x28u;` at
L1745 on the path to L1750), so the cached local holds the right value and the address it would have been
re-read from never matters. 566 states of this same unit pass on exactly that. The address is exercised for
the first time when the cache starts cold - and the only cold-cache states are aim's mid-function
`starts at <block>` ones. Consistent with what aim keeps printing: `the original finishes 6 of 642 new
states`, `72 units FAIL on a state the aim reached`.

## Reproduce it

```
python build/dbg_slot_addr.py      # or the copy beside this note: dbg_slot_addr.py
```

It stays entirely out-of-tree: the state is read from `build/aim/seeds_fail/101b00b0.json` (the shed rule's
own archive) and copied into a private seeds dir via `COW_SEEDS_AUTO`, and the unit is compiled from a
private tree via `COW_LIFT_SRC`. Nothing writes into `build/aim`, which the live aim step owns, or into
`src/lifted`.

## The fix, narrowly stated

The code that turns a `[esp + disp]` access into an sp0-relative slot key, for the case where the running esp
is not sp0. The three reads above were keyed as if they sat at the same depth when one of them (`[esp+0x14]`)
does not. Slot addressing must be a function of the esp at the instruction, not of the frame base alone.

Do not land it blind: this is the most load-bearing code in the lifter, a wrong base poisons every lift the
next cycle makes, and step 6 re-lifts every non-gold function (the faddp rule's six units are already
queued there). Test alone in a scratch tree against this unit plus the `call args` states in
`build/aim/seeds_fail/`, and the falsifiable form is that a real fix moves the call-args / memory / st0
failures on block-start states **together**. If only this unit moves, the 0x18 is a local quirk and not the
class.

Two earlier readings of this same evidence are recorded in `docs/cow/onepass/WORKLOG.md` (16:35 and 17:05)
and both were wrong about the mechanism - the first blamed `slot_read`/`slot_write` caching, which the
emitted text refutes (the slots *are* read from guest memory). The instrument above is what settled it.
