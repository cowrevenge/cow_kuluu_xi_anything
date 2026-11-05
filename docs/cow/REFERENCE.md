# REFERENCE — what one converted function has to look like

This is the yardstick, not the grind. One function, done the way every unit is supposed to be done:
read from our own image, named only where something proves the name, every field through `layout/`,
and the checker *shown* to work by breaking the conversion on purpose. The loop does not restart until
this has been reviewed.

The unit: **`0x1015ee40` — `cow_ui_open_main_menu`** (`src/ui/cow_1015ee40_open_main_menu.c`).
85 bytes, 28 instruction sites, 5 gates, 2 calls, 3 callers.

---

## 1. The candidates, and why this one

The brief was: 40-200 bytes, real logic (branches and at least one call), and a purpose that kuluu,
LSB or the vendored xi-on-anything already pins down **in code** - not a guess from a string.

| candidate | size | what the oracle pins | pin, file:line |
|---|---|---|---|
| **`0x1015ee40`** (chosen) | 85 B, 2 callees | opens a named window on the UI manager, gated on five "someone else owns the screen" checks; the named window is `menuwind` | the record it pushes is readable in our image: `python tools/cow/peek_bytes.py 0x10371b4c --len 24` → `menu    menuwind`; `tools/xi_mcp.py:260` — "the open menu's name (e.g. "loby2win", **"menuwind"**; empty when none)"; `vendor/xi-on-anything/host/modern.c:65` — `MENU_OPEN = 0x1015e350 thiscall mgr (const char* name, bool, bool)` and `modern.c:1700` calls it as `{ name, 1, 0 }`, exactly the three words this body pushes; the manager `0x10621838` is `modern.mgr` in `meta/builds.json` for our 2026-10-05 build |
| `0x1012b2d0` | 175 B, 2 callees | the mounted-command menu builder: reads 13-byte action lists at `0x1036F390`, filters each through `0x1012AF30` | `vendor/kuluu/.agents/skills/retail-observe/references/2026-10-02-mounted-command-menu.md:24-25` |
| `0x10118e90` | 128 B, 4 callees | the query-window row selector — "selects one-based row 2 through `0x10118E90` at `0x10210ECB`" | same doc, `:13-14` |

**Why `0x1015ee40` won.**

1. **Its pin is in our bytes, not somebody's prose.** The other two are pinned by one sentence in a
   kuluu observation note whose own header says it inspected *retail-2026-09*
   (`f2245d1c...` - a different build from ours). `docs/cow/LOOP.md` warns only ~60% of function bytes
   match that vault, so a slot or layout quoted there needs `image_cmp.py` before it is usable. This
   unit's central fact - which window it names - is a string I read out of `FFXiMain.unpacked.dll`
   myself with `tools/cow/peek_bytes.py`, and the same record is pushed by a sibling site
   (`0x1014E7D7`, `tools/cow/refs_to.py 0x10371b4c`) through the same callee.
2. **Its callees are small enough to read to the end.** The gate-4 query `0x101b5c90` is 25 bytes and
   is literally `return [this+0xf108] == 4 || == 5` (`generated/all/funcs_030.c:50342`), so gate 4 is a
   *proved* condition, not a named guess. `0x1012b2d0`'s meaning depends on an 825-byte filter
   (`0x1012af30`, 16 callees) that is still `todo`; the reference would have been a black box.
3. **Every branch in it is individually testable.** Five independent gates on five different memory
   locations, which is exactly what hand-written `cow/seeds/` states are for - so this function can
   demonstrate both what cowdiff proves **and** (below) where it stops. A builder that fills a window
   object the harness cannot construct would have proven much less.

Rejected early: `0x1015e350` (MENU_OPEN itself - 466 bytes, 17 callees, outside the brief) and
`0x101b5c90` (25 bytes - under the size floor, no call).

---

## 2. The original, annotated line by line

Disassembly from `generated/all/funcs_025.c:40063`, cross-checked against the 85 bytes in the image
(`python tools/cow/peek_bytes.py 0x1015ee40 --len 85 --as hex`).

| address | bytes | instruction | what it is |
|---|---|---|---|
| `1015ee40` | `a1 6c875710` | `mov eax, [0x1057876c]` | the gate object pointer (a global; also overwrites the caller's eax, which is why no tail returns the caller's value) |
| `1015ee45` | `66 83 78 68 00` | `cmp word [eax+0x68], 0` | **gate 1** |
| `1015ee4a` | `75 46` | `jne 0x1015ee92` | not opened |
| `1015ee4c` | `8a 48 59` | `mov cl, [eax+0x59]` | **gate 2** |
| `1015ee4f` | `84 c9` | `test cl, cl` | |
| `1015ee51` | `75 3f` | `jne 0x1015ee92` | not opened |
| `1015ee53` | `8b 88 c4000000` | `mov ecx, [eax+0xc4]` | **gate 3** |
| `1015ee59` | `85 c9` | `test ecx, ecx` | |
| `1015ee5b` | `75 35` | `jne 0x1015ee92` | not opened |
| `1015ee5d` | `8b 0d 402d6610` | `mov ecx, [0x10662d40]` | the presentation-mode object becomes `this` |
| `1015ee63` | `e8 286e0500` | `call 0x101b5c90` | **gate 4** - its 25-byte body is `return [this+0xf108] in {4,5}` |
| `1015ee68` | `84 c0` | `test al, al` | |
| `1015ee6a` | `75 26` | `jne 0x1015ee92` | not opened |
| `1015ee6c` | `a1 d4316610` | `mov eax, [0x106631d4]` | the optional second gate object |
| `1015ee71` | `85 c0` | `test eax, eax` | it may be absent |
| `1015ee73` | `74 07` | `je 0x1015ee7c` | absent → open anyway |
| `1015ee75` | `66 83 78 1c 00` | `cmp word [eax+0x1c], 0` | **gate 5** |
| `1015ee7a` | `75 16` | `jne 0x1015ee92` | not opened |
| `1015ee7c` | `6a 00` | `push 0` | arg3 |
| `1015ee7e` | `6a 01` | `push 1` | arg2 |
| `1015ee80` | `68 4c1b3710` | `push 0x10371b4c` | arg1 = the DAT record `menu    menuwind` |
| `1015ee85` | `b9 38186210` | `mov ecx, 0x10621838` | `this` = the UI manager |
| `1015ee8a` | `e8 c1f4ffff` | `call 0x1015e350` | MENU_OPEN |
| `1015ee8f` | `b0 01` | `mov al, 1` | **opened** - only al is written, the top three bytes stay the callee's |
| `1015ee91` | `c3` | `ret` | pops 0 |
| `1015ee92` | `32 c0` | `xor al, al` | **not opened** - only al is written, the top three bytes stay the last load's |
| `1015ee94` | `c3` | `ret` | pops 0 |

The three pushes are cleaned by the **callee**: there is no `add esp, 0xc` after the call, and
`f_1015e350`'s own tails are `esp += 16` (return address + 3 args). That is why the bridge in
`layout/calls.c` is `guest_thiscall_at(...)` with the site's return address replayed, not a plain
`guest_thiscall`.

---

## 3. The user code

`src/ui/cow_1015ee40_open_main_menu.c` - one function, no addresses outside `layout/`, no numeric
offsets in a `rd*`, no stub, no `goto`, and the adapter marked so the readability rule skips it.

```c
uint32_t cow_ui_open_main_menu(void)
{
    const uint32_t gate_addr = rd32(COW_ADDR_UI_IDLE_GATE_PTR);
    const CowUiIdleGate* gate = COW_AS(CowUiIdleGate, gate_addr);
    if (gate->word_68 != 0u)   { return gate_addr & ~0xffu; }   /* gate 1 */
    if (gate->byte_59 != 0u)   { return gate_addr & ~0xffu; }   /* gate 2 */
    if (gate->dword_c4 != 0u)  { return gate_addr & ~0xffu; }   /* gate 3 */
    const uint32_t mode = cow_call_ui_mode_is_4_or_5(rd32(COW_ADDR_UI_MODE_OBJECT_PTR));
    if ((mode & 0xffu) != 0u)  { return mode & ~0xffu; }        /* gate 4 */
    const uint32_t second_addr = rd32(COW_ADDR_UI_SECOND_GATE_PTR);
    if (second_addr != 0u)
    {
        const CowUiSecondGate* second = COW_AS(CowUiSecondGate, second_addr);
        if (second->word_1c != 0u) { return second_addr & ~0xffu; }   /* gate 5 */
    }
    const uint32_t shown = cow_call_ui_show_window(COW_ADDR_UI_MANAGER, COW_ADDR_MENUWIND_RESOURCE,
                                                   1u, 0u);
    return (shown & ~0xffu) | 1u;                                /* opened */
}
```

The `& ~0xffu` / `| 1u` shapes are not decoration: each tail writes **only** al and keeps whatever the
previous load left in the rest of eax, and cowdiff compares the whole register. A "cleaner"
`return 1;` would be a real behavioural difference from the game.

Support that went with it:

| file | what was added |
|---|---|
| `layout/addresses.h` | `COW_ADDR_UI_IDLE_GATE_PTR`, `COW_ADDR_UI_MODE_OBJECT_PTR`, `COW_ADDR_UI_SECOND_GATE_PTR`, `COW_ADDR_UI_MANAGER`, `COW_ADDR_UI_SHOW_WINDOW_FN`, `COW_ADDR_UI_MODE_IS_4_OR_5_FN`, `COW_ADDR_MENUWIND_RESOURCE` - each commented with the instruction that reads it |
| `layout/structs.h` | `CowUiIdleGate` (+0x59/+0x68/+0xc4), `CowUiSecondGate` (+0x1c), `CowUiModeObject` (+0xf108), all with `COW_ASSERT_OFFSET` |
| `layout/calls.{c,h}` | `cow_call_ui_show_window`, `cow_call_ui_mode_is_4_or_5` |
| `runtime/portable/gthread.{c,h}` | `guest_thiscall_at` - a bridge that replays the call site's return address and incoming eax, so the guest stack bytes match what the original call left |
| `tools/cow/peek_bytes.py` | reads bytes out of the mapped image by VA - the tool that turns "I think this is a string" into evidence |
| `cow/seeds/1015ee40.json` | 6 hand-written states, one per gate plus the open path |

---

## 4. Evidence table

Confidence: **proved** = a line of our build's disassembly or a byte in our image; **guess** = a
purpose inferred from proved behaviour; **unknown** = we cannot say, and do not pretend otherwise.

| thing | claim | where it comes from | confidence |
|---|---|---|---|
| `0x1015ee40`, 85 B, end `0x1015ee95` | the function's extent | `meta/FFXiMain.2026-10-05.meta.json` → `ledger/functions.csv`; body `generated/all/funcs_025.c:40063`; bytes `peek_bytes.py 0x1015ee40 --len 85` | proved |
| `cow_ui_open_main_menu` | it opens **the main menu** | pushes `0x10371b4c` whose bytes are `menu    menuwind` (`peek_bytes.py`); `tools/xi_mcp.py:260` names `menuwind` as "the open menu's name"; `host/modern.c:65` names the callee `MENU_OPEN` and `modern.c:1700` calls it `{name,1,0}`; `meta/builds.json` `modern.mgr` = the `this` at `0x1015ee85` | guess (named by the window it opens; the *menu's role* is the oracle's word, not ours) |
| 3 callers, all `this` = the UI manager | who enters it | `tools/cow/callers_of.py 0x1015ee40` → `0x1012BE34`, `0x101417B5`, `0x1015DD41`; the first two are preceded by `mov ecx, 0x10621838` (`0x1012BE2F`, `0x101417B0`), the third by `mov ecx, esi` (`0x1015DD3F`) | proved |
| `ecx` is dead on entry | the adapter may ignore it | the body overwrites `ecx` at `0x1015ee53`/`0x1015ee5d` before any read; the third caller hands in a different object (`esi`) and nothing changes | proved |
| the answer is ignored by callers | al is our contract with the disassembly, not with a caller | `0x1012BE39` = `pop esi / ret 8`, `0x101417BA` = `ret 4`, `0x1015DD46` = `xor eax, eax` (`peek_bytes.py` on each) | proved |
| `COW_ADDR_UI_IDLE_GATE_PTR 0x1057876c` | global holding the gate object | the `mov eax,[...]` at `0x1015ee40` | proved (its **contents' class** is a guess) |
| `CowUiIdleGate.word_68` | nonzero → do not open | `cmp word ptr [eax+0x68], 0` at `0x1015ee45` | proved (offset/test); **what it means is unknown** |
| `CowUiIdleGate.byte_59` | nonzero → do not open | read at `0x1015ee4c`; the same offset is written with 1 on the two log-handler objects by `0x1012BE1E` (`mov byte ptr [eax+0x59],1`, eax=`[0x1062193c]`) and `0x1014179D`/`0x101417A6` (`mov byte ptr [..+0x59], al`, al=1), and `modern.c:96` calls those globals "the chat log's handler (`logwindo`)" | proved (offset/test, and that 1 is written to it elsewhere); "claimed/busy" is a guess |
| `CowUiIdleGate.dword_c4` | nonzero → do not open | `mov ecx,[eax+0xc4]` + `test ecx,ecx` at `0x1015ee53/59` | proved (offset/test); **meaning unknown** |
| `COW_ADDR_UI_MODE_OBJECT_PTR 0x10662d40` | the presentation-mode object | loaded into `ecx` at `0x1015ee5d` immediately before the gate-4 call | proved (as the callee's `this`) |
| `CowUiModeObject.presentation_mode` @ `+0xf108` | the dword gate 4 tests | `0x101b5c90` body: `mov eax,[ecx+0xf108]`, `cmp eax,4`, `je 1`, `cmp eax,5`, `je 1`, else `xor eax,eax` (`generated/all/funcs_030.c:50342-50385`) | proved (offset and test); **what modes 4 and 5 are is unknown** |
| `cow_call_ui_mode_is_4_or_5` = `0x101b5c90` | true only for 4 or 5, `this`-call, pops 0 | call at `0x1015ee63`; body above; bare `ret` at `0x101b5ca2`/`0x101b5ca8` | proved |
| `COW_ADDR_UI_SECOND_GATE_PTR 0x106631d4`, `CowUiSecondGate.word_1c` | optional object; when present and nonzero → do not open | `0x1015ee6c`/`0x1015ee71`/`0x1015ee75` | proved (offset/test); **meaning unknown** |
| `COW_ADDR_UI_SHOW_WINDOW_FN 0x1015e350` | the window request; `thiscall mgr(char* name, bool, bool)`; callee pops 3 args | call at `0x1015ee8a`; `vendor/xi-on-anything/host/modern.c:65` (same address, same contract) and `:1700`/`:1843` (`guest_thiscall(MENU_OPEN, MGR, 3, {name,1,0})`); `generated/all/funcs_025.c:34241` starts `mov eax,[esp+4]` and its tails are `esp += 16` | proved |
| `COW_ADDR_UI_MANAGER 0x10621838` | the UI manager singleton used as `this` | `mov ecx, 0x10621838` at `0x1015ee85`; `meta/builds.json` 2026-10-05 `modern.mgr`; two callers load the same value before calling us | proved |
| `COW_ADDR_MENUWIND_RESOURCE 0x10371b4c` | the DAT category+name record `menu    menuwind` | pushed at `0x1015ee80`; bytes `6d 65 6e 75 20 20 20 20 6d 65 6e 75 77 69 6e 64` read from the image; record layout `host/datui.h:7` ("u8 flag, category[8] ("menu    "), name[8]"); the same record is pushed at `0x1014E7D7` (`tools/cow/refs_to.py 0x10371b4c`, 9 refs) | proved |
| args `1` and `0` (`0x1015ee7c`/`0x1015ee7e`) | the two bools MENU_OPEN takes | `modern.c:65` documents `(const char* name, bool, bool)` and `:1700` passes `{name,1,0}`; **what each bool selects is unknown** | guess |
| `al = 1` opened / `al = 0` refused | the return convention | `b0 01` at `0x1015ee8f`, `32 c0` at `0x1015ee92`, both followed by bare `ret` | proved |
| the top three bytes of eax are kept | why the conversion returns `x & ~0xffu` | no instruction between the last load (`0x1015ee40`/`0x101b5c90`/`0x1015ee6c`/`0x1015ee8a`) and the `ret` writes eax wholesale | proved |

Anything not in this table was not claimed: the meaning of gates 1/3/5, what presentation modes 4 and 5
are, and what MENU_OPEN's two bools do all stay **unknown**, in the source comments and in
`cow/names.csv` as `guess`/`placeholder` rows that `docs/cow/NAMES_TODO.md` lists for a review pass.

---

## 5. Proof the checker works

### 5.1 Baseline - PASS

```
$ python tools/cow/cowdiff.py 0x1015ee40
seeds: 6 hand-written state(s) from cow/seeds/1015ee40.json: gate 1: the word at +0x68 is nonzero ...
cowdiff 1015ee40: image 0x10000000+0xc15000 arena 0x00980000 stack 0x00990000 states=2000 seed=12345 nargs=4
COWDIFF PASS 1015ee40 states=2006 blocks=26/28
  unreached: /* 1015ee8f: mov al, 1 */
  unreached: /* 1015ee91: ret */
```

The 6 seeds are in `cow/seeds/1015ee40.json`; each one zeroes a 32-byte neighbourhood around the field
it is about to set, so a conversion that reads the *wrong offset* reads a deterministic 0 instead of a
lucky fuzz byte.

**How we know the seeds are not decoration.** They were broken to begin with. The first version wrote
the gate-object pointer as `"00981000"` - but `pin_apply` memcpys the string as raw bytes, so the dword
became `0x00109800`. Every "gate" state then read zeros, fell through to the open path, both sides
faulted identically, and cowdiff said PASS while testing **no gate at all**. The tell was the coverage
line: the abort tail `1015ee92/1015ee94` sat in `unreached`. After the byte-order fix the unit sees the
values it was given (`gate=00981000 w68=0001`, `b59=01`, `c4=00000001`, ...) and the unreached pair moved
to the open tail. A PASS whose block list does not include the branch you wrote is not a PASS.

### 5.2 Mutations - each one MUST fail

| # | mutation | result |
|---|---|---|
| **M1** | gate 1's branch flipped: `if (gate->word_68 != 0u)` → `== 0u` | **FAIL**, 4 mismatches |
| **M2** | wrong field offset: gate 2 reads `+0x5a` instead of `+0x59` | **FAIL**, 1 mismatch |
| **M3** | wrong return value: gate 3 returns `gate_addr \| 1u` (claims "opened" while refusing) | **FAIL**, 1 mismatch |

```
# M1 - python tools/cow/cowdiff.py 0x1015ee40 --states 0
  state 0: eax (eax 00981000/00000001 edx 1007a5e3/00993bd4 esp 00993be4/00993be4 fault 0/0 ...)
  state 3: eax (eax 00000000/00981000 edx 10c14ff8/10c14ff8 esp 00993be4/00993be4 fault 0/0 ...)
  state 4: eax (eax 00983000/00981000 edx 000000b1/000000b1 esp 00993be4/00993be4 fault 0/0 ...)
  state 5: fault (eax 00000001/00981000 edx 00993bd4/00981246 esp 00993b9c/00993be4 fault -1073741819/0 ...)
COWDIFF FAIL 1015ee40 4 mismatch(es), first at state 0 (eax)

# M2 - the byte at +0x5a is pinned to 0, so side B sails past gate 2 and takes the open path
  state 1: fault (eax 00981000/00000001 edx 00993945/00993bd4 esp 00993be4/00993b9c fault 0/-1073741819 ...)
COWDIFF FAIL 1015ee40 1 mismatch(es), first at state 1 (fault)

# M3 - side A refuses with al=0, side B refuses with al=1
  state 2: eax (eax 00981000/00981001 edx 000000aa/000000aa esp 00993be4/00993be4 fault 0/0 ...)
COWDIFF FAIL 1015ee40 1 mismatch(es), first at state 2 (eax)
```

All three required mutations are caught. The source was restored after each and the baseline re-run.

### 5.3 What the checker does NOT see (two probes, reported rather than hidden)

| # | probe | result | reading |
|---|---|---|---|
| **P4** | throw the open tail's contract away: `return (shown & ~0xffu) \| 1u` → `return 0u` | **PASS** | the open path is unverified in its last two instructions |
| **P5** | change a pushed argument: `cow_call_ui_show_window(..., 1u, 0u)` → `2u` | **FAIL** (state 5, memory) | the arguments and the guest stack are checked even on the path that faults |

P4 is the honest hole. The `open` state gets past all five gates and reaches `call 0x1015e350`; the
window-opener chain then walks the UI manager at `0x10621838`, which DllMain never populates, and
**both sides fault at the same place**. `cowdiff.c` compares only the fault *flag*
(`if (oa.faulted != ob.faulted) why = "fault";`) and skips every register comparison when a side
faulted, so whatever the conversion returns after that call is never compared. Two consequences for
the loop:

1. `mov al, 1` / `ret` (`0x1015ee8f`, `0x1015ee91`) are recorded in `cow/unreached/1015ee40.txt` with
   that reason, and the al=1 contract rests on the disassembly, not on the harness.
2. "both sides faulted" is not a pass. Any unit whose interesting tail is *after* a call into an
   uninitialised subsystem should be treated as uncovered, not green. The cheap fixes are for
   `cowdiff.c` to also compare the faulting address, or for the harness to wrap such callees - both
   are machinery work for the rework, not for this reference.

What *is* checked, by `cowdiff.c`'s own comparison chain: `eax`, `edx`, `ebx`, `esi`, `edi`, `ebp`,
`esp`, `st(0)`/`top`, the byte contents of image+arena+stack (`regions_equal`), the number of guest
calls and their targets and arguments - all of it per state, 2006 states here.

---

## 6. Gate

```
pwsh -NoProfile -File tools/cow/gate.ps1 0x1015ee40
```

(its full output is in the commit message; the verdict line is what matters.)

---

## 7. What the loop has to copy from this

- **Read the block list, not just the word PASS.** A seed that does not move `blocks=N/M` to cover the
  branch you wrote is not testing anything; this unit's first "PASS" tested nothing.
- **`--pin-mem` bytes are raw.** A pointer is little-endian on the wire: `0x00981000` is `"00109800"`.
- **Zero the neighbourhood.** Pin 32 bytes of zeros around a field before setting it, or a wrong-offset
  bug reads fuzz and looks fine.
- **`al`-style partial-register contracts are the conversion.** `x & ~0xffu | 1u` looks silly and is
  the difference between matching the game and not.
- **Name what you can prove, and write `unknown` for the rest.** Half of this function's "meaning" is
  unknown and is labelled so in the code, in `layout/structs.h`, and in the table above.
