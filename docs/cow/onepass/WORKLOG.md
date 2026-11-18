# One pass to 100%: work log

The record of the "one pass" session (cloud sandbox, 2026-11-17 to 2026-11-18): what was found, what was
changed and why, and what is still open. It is a reference so the work survives the session. Nothing in this
folder is live machinery: the code changes sit in `wip_vs_0cd6db0a.patch` and reach the tree only through a
panel drop and `tools/cow/commit.py`, as always.

## Ground rules this work runs under

- The judge is `tools/cow/cowdiff.c`. Gold = PASS, at least 100 clean states, every site reached in a clean state.
- Any change to `judge2.JUDGE_FILES` means a new judge id and one re-judge. All judge changes go out in ONE drop.
- No "unreachable" exemptions. Every site is readable code, so every site gets a state that reaches it.
- No file goes to the user until the sample is at 100%. One drop, one re-judge.
- Root-cause fixes only. Each fix below names the unit that showed the bug.

## Timeline

### Phase 0: inputs (start of session)
- The user supplied generated/, the Ghidra dump, build/cycle, the retail DLL, the Cow panel and the Grind13 installer.
- Built a Linux harness so the judge runs here: `linshim.py` (signals in place of SEH), image objects with
  `-DCOW_TICK_MEMORY`, `linprove.py`, and `lin_lift_proof.py` (lift_proof's main with gcc).
- Measured baseline: the ledger had 20195 units, 16940 gold (45.5% of code bytes).

### Phase 1: judge 14 (already on main as df25fa76)
- Same-crash coverage, inconclusive overflows, a switch jump is not a tail call, 512 states per row.
- The aim (`tools/cow/aim.py`): seek driven at the sites the judge misses, round after round.
- docs/cow/SITES.csv.

### Phase 2: block entry (in the patch)
- A state can start at any block (`--pin-entry`). Side A gets `CE_<addr>` labels plus a switch on
  `cow_entry_at`. Side B (rise unit) gets `COW_AT(addr)` labels, a `COW_BLOCK_ENTRY` switch, and
  `cow_entry_fix_<entry>()`, which puts the guest in the shape the unit assumes at that block.
- `CowBatchRow.entry_fix`. The aim adds two entry states for every block with unreached sites.
- Seek's start-at-block drive picks the block's own inputs (`to_state` sets `entry`).
- Selftest rows: dead / deadentry / deadentrywrong.

### Phase 3: seek capacity and solver
- Float translation to z3 Reals; masked self-loads (`x = f(x)`); deep-fold loop values; args as memory.
- Indirect calls carry `sure`. Only a pop count the code proves is answered (`pop_forced`, vslot agreement).
- Capacity: PIN_STATES_MAX 512, PIN_WRITES_MAX 256, PIN_STUBS_MAX 32, PIN_ANSWERS_MAX 64, PIN_SRC_MAX 16384.

### Phase 4: rise fixes found by real FAILs
| unit | symptom | root cause | fix |
|---|---|---|---|
| (32 of 127 refusals) | esp-off / ret / tail refusals | pop counts guessed | `solve_pops`: z3 over the frame |
| 10262020 | callee-saved esi differs | original pops esi itself, unit never restored it | `saved_by_original()`: push/pop pairs in a function that calls restore `g->reg = in_reg` at exit |
| 100b5210 | eax upper bytes differ | a value loaded from a frame word was re-read AFTER the word was overwritten | `slot_write` binds live loads of that word to a temp before the store |

### Phase 5: judge 15 (in the patch; one more judge id, ships in the same drop)
| unit | symptom | root cause | fix |
|---|---|---|---|
| 10262020 | esi/esp differ in fuzzed states | a made-up object's method popped 12 bytes for a 4-byte call: the original came back off its own frame | `ret_pop1` row field (from `callee_purge`). A state where side A returns with esp not at sp0+4+N is set aside like a fault: counted, never compared. Decided from side A only. |
| 102dbe10 | B faults, A does not | sandbox regions were contiguous: a heap overrun ran into the stack and through the original's locals | 64 KB uncommitted guard granules around arena, repair heap and stack |
| 1005f820 | st0 differs | the harness answered `_ftol` without popping its x87 operand | `judge2.x87_delta()` (path walk over the generated sites, callees counted, tail calls through pointers count 0). Callees that change the x87 stack are never answered; they run |

- Selftest rows added: brokeframe (PASS), brokeframe0 (FAIL eax). judge2 selftest: x87 cases.
- Debug aids in cowdiff.c (off by default): `COWDIFF_TRACE_STATE=N` traces any state, prints both sides'
  esp/eax/last access, x87 top/st0, and a side B block trace when a unit is built with tracing COW_AT.

### Phase 6: seek reach
| unit | symptom | fix |
|---|---|---|
| 100f0840 | site after `call eax` never reached | `call reg` where reg was loaded from memory gets the same slot treatment as `call [mem]`; a slot only decided as "some object" may take the function address |
| (all) | failing states lost between rounds | aim keeps them in `build/aim/seeds_fail/` |

## Measurements (50-unit sample of silver/weak units, `/home/claude/work/sample2.txt` in the sandbox)
- Start of session: 0 gold.
- After block entry + aim: 30 gold, 14 silver, 5 weak, 1 fail.
- After the phase 4-6 fixes: 33 gold, 12 silver, 3 weak, 2 fail (the 2 fails are old ledger rows not yet re-judged).
- The six units that FAILed on real differences: all PASS now (10262020, 102dbe10, 100b5210, 1005f820 gold or silver;
  100f0840, 100f2a70 gold).

## Open, in order
1. Coverage gaps on silver units: entry states fault on garbage pointers in frame words and in the
   callees they call (100b5210: 55 of 86 pinned states afault). Entry states need their frame pointers and
   the callees on the path laid down the way seek lays them down from the entry.
2. Entry-state `call reg` where reg is a block input (free atom): give it a fake function too.
3. Units whose every state faults in the original (100426f0) and the two 0/0 rows (10261640, 10308374).
4. rise refusals: esp-off CRT fragments, non-frame esp, x87 depth, probes.
5. Non-rise silver/weak/fail units: relift with rise.
6. Then the drop: one zip for the panel, installer modeled on Grind13 (manifest against main, stop line,
   install, z3, selftests, commit.py --machinery, cycle).

## Note on main moving
main had its own commits since this session started (judge 14 drop df25fa76, scoreboards). The patch here is
against 0cd6db0a. The drop is always rebuilt against the latest main before it goes out.
