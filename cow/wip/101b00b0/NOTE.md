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
is not sp0. Named, so the next pass starts inside it rather than hunting:

- `frame_split(e)` (`tools/cow/rise/rise.py:67`) folds `base + k` into a single offset from sp0, understanding
  three esp bases - `SP`, `SP1` (at `VBASE`) and `SP2` (at `VBASE2`) - and returns that offset;
- `key_s(off)` (`:1259`) is the slot key it becomes, and `frame_addr(off)` (`:80`) is the reverse fold that
  emits the address.

So a slot's identity is "offset from sp0", obtained by collapsing whichever esp base was live at the
instruction. That is where the 0x18 went missing: the three reads above were keyed as if they sat at the same
depth, when one of them (`mov ecx,[esp+0x14]`) does not - its live esp base is not the one the fold used. The
fix is to make the slot address a function of the esp at the instruction rather than of the frame base alone;
the two places that must agree are `frame_split`'s collapse and `frame_addr`'s expansion.

Before changing anything, confirm the diagnosis on a second unit: `build/aim/seeds_fail/` holds 25 other
`call args` states, and the same probe (print what the unit passes against `[g->esp + disp]`) should show the
same kind of base-collapse error. If only 0x101b00b0 does, the 0x18 is local and not the class.

## How big the blast radius could be (correlation, measured 17:40 - and its confound named)

Every dropped state in `build/aim/seeds_fail/` carries its own `note`, so the failures can be split by
whether the state entered at the function top or mid-function. Of 713 dropped states, ~31% are mid-function,
which is the baseline. The comparison-type verdicts are concentrated there far beyond it:

| the why the judge gave | states | mid-function share |
|---|---|---|
| `memory` | 39 | **100%** |
| `st0` | 33 | **97%** |
| `call args` | 30 | 63% |
| `callee-saved register` | 41 | 63% |
| `no clean state` | 478 | 22% (DEPLETED) |

That pattern is what the cold-cache story predicts - the address only matters when the slot was never written
- and the `no clean state` row is what makes it more than a tautology: mid-function states are not simply
"the states that fail", they are specifically the states that fail by *comparison* rather than by the
original faulting. The honest confound: a verdict like `memory` or `st0` can only be reached by a state that
completes, so any property that changes completion rates shifts these shares; and aim was separately reporting
that mid-function states complete rarely (`6 of 642` on one unit), which pushes the other way. So this
sizes the prize, it does not prove the mechanism - the instrument above does that for one unit, and only the
fix landing and moving `memory`, `st0` and `call args` **together** settles whether they share it.

### And a correction to the size of that prize: the judge's `why` is not a defect class

Checked by looking at what the other `call args` drops actually are, rather than trusting the label. The 30
`call args` states split first of all into **8 units calling game code and 2 units calling the harness's own
import stubs (`0xfff0xxxx`)** - two different machinery. And inside the game-call eight the signatures are
not one defect:

| unit | what the two sides passed | reads like |
|---|---|---|
| `0x101b00b0` | `bfe77d1b` / `7d31027f` | this note: the word read from the wrong cold frame slot |
| `0x10040220` | `108c6f2e` / `db954a67` | same family - two unrelated words of unplanted memory |
| `0x101ab820` | `00000005` / `00000000` | a small constant the unit never produced, not an address at all |
| `0x10278010` | `00000000` / `10278412` | the unit passed **an address inside its own function** where the original passed 0 |

So `call args` is a *reporting* category covering at least four defects, and the same caution applies to
`memory` and `st0`. Read the table above as "which trigger exposes these", not as "one fix collects ~100
units". Anyone sizing a fix should split by what the sides actually passed, as here, and expect this note's
mechanism to account for a minority of the eight - which is also why it must be tested unit by unit before it
is allowed anywhere near rise.py.

Do not land it blind: this is the most load-bearing code in the lifter, a wrong base poisons every lift the
next cycle makes, and step 6 re-lifts every non-gold function (the faddp rule's six units are already
queued there). Test alone in a scratch tree against this unit plus the `call args` states in
`build/aim/seeds_fail/`, and the falsifiable form is that a real fix moves the call-args / memory / st0
failures on block-start states **together**. If only this unit moves, the 0x18 is a local quirk and not the
class.

Two earlier readings of this same evidence are recorded in `docs/cow/onepass/WORKLOG.md` (16:35 and 17:05)
and both were wrong about the mechanism - the first blamed `slot_read`/`slot_write` caching, which the
emitted text refutes (the slots *are* read from guest memory). The instrument above is what settled it.
