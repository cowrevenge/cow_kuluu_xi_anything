# Style — what a converted function has to look like

The target is source that reads like intent: *"menu_open: find the menu, push it on the stack, show
it."* Real types, named fields, no numbers that only the disassembler could love. A function is not
done when it compiles or when it looks right — it is done when `tools/cow/gate.ps1 <hex>` says PASS,
and PASS means the differential test (`tools/cow/cowdiff`) proved it behaves like the generated
original.

## Where things live

| path | what goes there |
|---|---|
| `layout/` | **the only place an address is written down**: structs, enums, globals, vtables, typed handles, bridges to unconverted callees |
| `src/<subsystem>/*.c` | one converted entry per function: the user function + its adapter (`ui/ net/ entity/ gfx/ audio/ util/ …`) |
| `src/unsorted/` | a function whose purpose is not established yet; it moves when the purpose is |
| `runtime/cow/` | generated: the wrap registration TU (never edited) |
| `cow/` | the loop's state: `wraps.json` (generated), `names.csv`, `seeds/`, `unreached/`, `wip/` |
| `docs/cow/` | this file, `LOOP.md`, `MACHINERY.md`, `STATUS.md`, `NAMES_TODO.md`, `SETUP_REPORT.md` |
| `tools/cow/` | every script: probes are files with argparse, never `python -c` throwaways |

Upstream's tree is not ours: nothing under `recomp/`, `meta/` or `tests/` is edited, and
`generated/`/`build/` never enter git. The only upstream edit is the three `# COW:` lines in
`tools/build.py` (see `MACHINERY.md`).

## The unit: a cluster; the file: one entry = one user function + one adapter

The unit the loop reads, gates and commits is a **cluster** - one object and the functions that touch
it, or a caller and its small callees (`python tools/cow/cluster.py 0x…`, and `LOOP.md` says why). The
**file** is still one entry: a normal C function - real argument and return types, structured control
flow, **no `goto`**, names - plus an adapter that speaks the guest ABI. The adapter sits in the same
file between `/* COW_ADAPTER BEGIN */` and `/* COW_ADAPTER END */`; the readability gate only inspects
code outside that block, because marshalling is generated shape, not a reading of the game. A
cluster of five entries is five files and **one** commit.

A <=8-byte entry is not a file at all: it is a **row** in `src/tables/cow_trivial_rows.def` (see
*No stubs*). Anything smaller than 8 bytes that arrives with its own `.c` is refused by the gate.

Behaviour is compared on: `eax`/`edx`/`st0` (the return), `ebx`/`esi`/`edi`/`ebp` (callee-saved), `esp`
after the return, every guest memory write (address, size, value, order) and every call out (target,
args, order). **CPU flags are not part of the contract** - a caller cannot observe them across a call,
so user code neither sets nor documents them.

Rules that make the result reviewable:

- no `0x10xxxxxx` literal outside `layout/`;
- **no line-by-line disassembly in `src/`** - a purpose + evidence list instead (see *The header*);
- no `rd8/rd16/rd32/wr32/...` with a numeric offset in user code — go through a struct field or a
  named view;
- no `goto`, no call to `f_<hex>` or `rt_orig_` from user code (only adapters and `layout/calls.c`
  may reach the generated world);
- calls between converted functions are plain C calls by name;
- no `TODO`/`FIXME`/`stub`/`NotImplemented`, no empty body, and no body that is a bare pass-through to
  another function unless the original genuinely is one;
- every identifier we invent is registered in `cow/names.csv`; a guess or placeholder also has to show
  up in `docs/cow/NAMES_TODO.md`. A guess never blocks the loop — naming is a step, not a wall.
- **no defensive checks the original does not have.** If the game dereferences an argument unconditionally,
  so do we: a null guard is a behaviour change, and cowdiff compares behaviour.

## `layout/` — addresses, and only here

`layout/cow.h` is the door and is the only file user code includes. It defines:

- `CowAddr` — a 32-bit guest address, including 0 for null;
- `COW_IMG(va)` / `COW_VIEW(type, va)` / `COW_GLOBAL(type, name)` — a static table or global inside
  the image. These add the relocation delta (`RD` in `guest.h`), because inside the retail launcher
  FFXiMain is *not* at `0x10000000`;
- `cow_ptr(handle)` / `COW_AS(type, handle)` — a handle read out of guest memory, which is already a
  runtime address and must **never** take `RD`;
- `COW_ASSERT_OFFSET(structure, field, off)` / `COW_ASSERT_SIZE` — every field of every struct that
  overlays guest memory gets one, so a wrong offset is a compile error. Bytes nobody has read stay
  inside an `opaque_NN[NN]` array so they cannot be used by accident;
- `COW_HANDLE(type, name)` — a guest pointer stored inside a struct as its own type, with exactly one
  deref helper (`name_get`) and one null test (`name_null`);
- `COW_VT` / `COW_VT_FN` / `COW_VT_THISCALL` in `layout/vtables.h` — a vtable slot is a `CowAddr` and is
  called through `guest_thiscall`/`guest_call`, never cast to a host function pointer. The binary is
  `/GR-` (no RTTI), so a vtable is declared only after `tools/cow/image_cmp.py` confirms the bytes at
  that address match our build;
- `layout/calls.h`/`calls.c` — typed prototypes for callees we have not converted. The bare address
  appears only in `calls.c`, and the bridge goes through the runtime's call machinery rather than
  `f_<hex>(g)` (that is what marshals `Guest`, `esp` and the guest lock).

Static data the game already has (item tables, string tables, zone data) is read through a typed named
view onto the loaded image — `item_table[id].name` — and **never copied into the repository**: those
bytes are Square Enix's, and `.gitignore` keeps `*.dat`/`*.dll`/`generated/` out.

Lists, arrays and hash tables the game builds at runtime get proper types with iteration helpers in
`layout/` or `src/util/`, so user code says `cow_list_each(list, it)` rather than chasing `next`
pointers by hand.

## The header: a purpose, then the evidence - never the listing

Every converted file opens with a comment that says two things and nothing else: **what this is for**,
in plain language, and **the evidence for each claim in it**, as a list. Not the disassembly. The
generated file *is* the disassembly, the build keeps it honest against the bytes, and a copy of it here
rots the first time the reading changes while crowding out the reading itself. `gate.ps1` fails a file
whose user code carries more than a handful of address-tagged instruction lines.

The shape:

```c
/* f_100dc210 - let the connection clock follow the live millisecond tick, and count the times
                 the tick has come round behind it.          <- the purpose, 1-4 lines

   Evidence                                                   <- one line per claim, each with
   - callee is winmm!timeGetTime .... 0x100dc210 calls 0x100dbe00, a `jmp [0x10329400]`;
                                      tools/cow/iat_slot.py 0x10329400
   - +0x50 = last tick stamped ....... read 0x100dc21b, written 0x100dc222; sibling
                                      f_100dc260 returns it
   - 0xE0000000 is a wrap margin ..... cmp/jb at 0x100dc228-0x100dc22e; 2^32 ms is ~49.7
                                      days, 0xE0000000 ms ~43.5 (the arithmetic is our
                                      reading: guess)
   - one caller ...................... tools/cow/callers_of.py -> 0x100dbeef, inside
                                      f_100dbeb0 after it marks the clock alive

   Proof: cowdiff 406 states, 17/17 sites, 812 pinned answers; cow/seeds/100dc210.json
   Name: cow_advance_net_clock_tick (guess)
*/
```

Rules that keep it an evidence list and not a transcript:

- every claim points at **something checkable**: an address, a caller, a `file:line` in an oracle or in
  `layout/`, or a tool invocation that produces it. A claim with no pointer is a guess and says so;
- one instruction is cited when it *proves* something; a run of them is the listing, and belongs in
  `generated/all` - or, if it is reading material for the next person, in `docs/cow/` or the commit
  message, where rot does not matter because it is dated;
- the register contract, the pop count and the caller are stated **once**, with their proof;
- what is unknown stays labelled unknown, and is not filled in with a plausible name.

The 2026-11-05 rework measured the difference on the three files that predated this rule: their
headers were 60-67 lines, of which 12-19 were disassembly rows, and the whole file 112-122 lines.
Rewritten to purpose + evidence they are 40-50 lines of header and carry *more* of the reading, not
less - because each line now states a claim and its proof instead of restating a mnemonic.

## The worked example: `f_100083b0`

The generated original (`generated/all/funcs_000.c:55114`) is 24 bytes:

```
100083b0  mov eax, dword ptr [esp + 4]      ; arg0: the object
100083b4  test byte ptr [eax + 0x1c], 1
100083b8  je  0x100083c0                    ; bit 0 clear -> no increment
100083ba  mov eax, dword ptr [esp + 8]      ; arg1: pointer to the counter
100083be  inc dword ptr [eax]               ; (*arg1)++
100083c0  mov eax, 1                        ; always returns 1
100083c5  ret 8                             ; stdcall, two arguments
```

`layout/structs.h` — the object, with a proof per field:

```c
typedef struct CowCountedObj
{
    uint8_t opaque_00[0x1c]; /* never read by a conversion; do not name a field here without bytes */
    uint8_t flags_1c;        /* bit 0 (COW_COUNTED_FLAGS_ACTIVE) gates the increment */
} CowCountedObj;

COW_ASSERT_OFFSET(CowCountedObj, opaque_00, 0x00);
COW_ASSERT_OFFSET(CowCountedObj, flags_1c, 0x1c);
COW_ASSERT_SIZE(CowCountedObj, 0x1d);
```

`layout/enums.h` — the bit, with the instruction that proves it:

```c
enum { COW_COUNTED_FLAGS_ACTIVE = 1u << 0 };
```

`layout/handles.h` — the pointer type and its one deref helper:

```c
COW_HANDLE(CowCountedObj, cow_counted_obj_h)
```

`src/unsorted/cow_100083b0_counted.c` — the function, then the adapter:

```c
#include "cow.h"

uint32_t cow_incr_counter_if_active(cow_counted_obj_h obj, CowCounter* counter)
{
    CowCountedObj* o = cow_counted_obj_h_get(obj);

    if ((o->flags_1c & COW_COUNTED_FLAGS_ACTIVE) != 0u)
        *counter += 1u;
    return 1u;
}

/* COW_ADAPTER BEGIN - ... the gate skips this block ... */
void cow_adapter_100083b0(Guest* g)
{
    cow_counted_obj_h obj;
    CowCounter* counter;
    uint32_t eax;

    obj.v = rt_arg(g, 0);
    counter = COW_AS(CowCounter, rt_arg(g, 1));
    eax = cow_incr_counter_if_active(obj, counter);
    rt_return(g, eax, 8); /* eax = 1, esp += 4 + 8: exactly `mov eax,1 / ret 8` */
}
/* COW_ADAPTER END */
```

Read from top to bottom it says: *if the object is counting, bump the caller's counter and report
success.* Nothing in it is a raw address; the only number outside `layout/` is the `8` in the adapter,
which is the calling convention and is inside the block the gate skips.

It is in `src/unsorted/` because the purpose is a guess (`cow/names.csv`,
`confidence=guess`), and it compiles into every whole-image build from the day it is written — the
build is what stops the style example from rotting. When `tools/cow/gate.ps1 0x100083b0` passes, the
ledger row goes to `done`, `genwraps.py` publishes `cow_100083b0` in `cow/wraps.json`, and the
generated entry starts calling this code instead of the translation.

## Naming (short form; the loop's version is in `LOOP.md`)

For every identifier: name it from evidence (an oracle file:line, a string, a caller, a packet id);
if the evidence is thin, make it a descriptive **guess**; only if even a guess is impossible, use a
placeholder (`unk_fn_<hex>`, `UnkStruct_<offset>`, `COW_ADDR_UNK_<hex>`). Confidence and evidence go
in `cow/names.csv`, and `docs/cow/NAMES_TODO.md` is the generated fix-up list. Renaming later is
`python tools/cow/rename.py <old> <new> --confirm` — wrap keys (`cow_<entry hex>`) never change, so a
rename can never orphan a live host.

## No stubs

A body that does nothing is not a conversion; it is a note that the file was not read. `ret`-sized
originals are legal only with an owner in the ledger, and the name has to carry what that owner is:

| what we proved | citation in `oracle_refs` | the name |
| --- | --- | --- |
| the whole body is a known shape, <=8 bytes | `COW_TRIV_<KIND> value=0x… pop=N; called from 0x…` (generated by `tools/cow/mktable.py`, re-derived by `--check`) | a **row** in `src/tables/cow_trivial_rows.def`, adapter `cow_<hex>` - not a file |
| the address is a slot in a RTTI-bounded table of code pointers | `vtable 0x1033acd0 slot 38/117 - a virtual method` (a table over **128** slots is a jump table and the gate refuses the citation) | `cow_vf38_at_1033acd0`, or `cow_menu_vf2` when the vtable's own slots cite a name |
| code reaches it with `call`/`jmp`/`push` | `called from 3 code site(s): 0x10…, ...` | `cow_return_at_101e1a50` |
| neither | - | not booked: the unit is `failed` with the reason and the file is never written |

`tools/cow/mktable.py --write` is what turns a proven shape into a row (it re-derives kind/value/pop
from `generated/all`, and `--check <hex>` re-derives one row so it cannot drift from the bytes);
`tools/cow/table_proof.py` proves all 943 of them in one batched harness run and writes
`cow/table_proof.json`, which is what the gate reads per row. For a real function, `mkret.py --prove`
still does the asking (it calls `tools/cow/vtable_model.py`, which bounds a citable table at 128 slots
by its RTTI CompleteObjectLocator), and `tools/cow/gate.ps1` is what refuses: a 1-3 instruction-site
body passes the readability checks only when the ledger names the owner and the name is not `unk_*`,
and a <=8-byte entry with a file of its own fails outright. Shapes do not get files; unproven entries
do not get booked.
