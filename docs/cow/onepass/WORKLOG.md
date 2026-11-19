# One pass to 100%: work log

The record of the "one pass" session (cloud sandbox, 2026-11-17 to 2026-11-18): what was found, what was
changed and why, and what is still open. It is a reference so the work survives the session. Nothing in this
folder is live machinery: the code changes sit in `wip.patch` and reach the tree only through a
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

### Phase 7: what OneP1 (judge 14) cost on the user's machine, and why (2026-11-18)
Ledger at 585b8107 (before) vs 0cd6db0a (after): +116 gold units, but code bytes fell.
| loss | count | cause | fix |
|---|---|---|---|
| gold -> silver | 301 | grind golds (12000+ states) re-judged at 2000 states after the new judge id | cycle step 3b `regold`: units gold under an earlier judge are re-judged at the depth their gold took, before publishing. 10007860/1000f420/10028ba0 back to gold at 40000 states |
| gold -> fail | 179 | mostly judge-14 harness faults; 12 sampled: 9 pass under the newer judge, 2 real Ghidra-lift bugs rise lifts gold (1009d0d0, 102f0914), 1 needed a seek state (1005e1a0) | all 12 back |
| (both) | ? | `g_pin_stub_calls[8]` while PIN_STUBS_MAX went to 32: a state with 9+ answered callees overwrote `g_active_pin` by one byte; side B then ran real callees where A got answers | array sized PIN_STUBS_MAX |

Other fixes in this phase:
- x87: answered callees now DO what the callee does to the x87 stack (row table `x87`, `judge2.x87_delta`
  path walk) instead of being excluded. Only callees whose count cannot be told run for real.
- rise printer: `(uint16_t)a * (uint16_t)b` and `(uint8_t)x << 24` are int arithmetic in C (overflow is UB);
  narrow left operands of `*` and `<<` are cast to uint32_t.
- seek: the critical-section imports get a zeroed, unowned CRITICAL_SECTION (10261640: no clean state -> 81/85).
- Gold regression check: 60 units gold on main, all gold under the sandbox judge. This check now gates every drop.

### Phase 8: the last sample units, and the drop (2026-11-18)
- judge2: callee_purge follows tail calls; CRT table shims are pop 0 when every caller cleans up; the x87 walk
  settles a float result through a pointer call by the ABI (unknown x87 counts ~2500 -> 159 functions).
- seek: critical-section imports get an unowned section; `call reg` slots; index words decided (`settle`);
  dest-src copy loops; L._argw set as rise's own lift does; a caller cleanup a few instructions after a call.
- rise: `cleanup_after` (add esp after a call beats the vtable guess); block-entry fix sets the known part of a
  register (`_known_part`).
- aim: states belong to the text they were built for (`unit` key, fresh_only retry); block-entry inputs go
  where the fix reads them (`_as_the_fix_reads`); census round is not a stall; failing units with a newer
  rise text are aimed; old states first, new ones appended.
- judge: every state's seed is its own (random states numbered among random states), so added pins never
  renumber what random states found (102a64f0: 249 -> 210 with new states, 267/267 with this).
- Sample: 47/50 gold. 60 gold-on-main units: 60/60 gold.
- Open: 100426f0 (callee drives a D3D device through COM; needs a device model), 1003d220 (coverage still
  growing), 1020ebf0 (FAILs only after 10256ad0 in the same Linux chunk: host-side state leaking between rows,
  possibly specific to the sandbox's Linux harness; not reproduced on Windows yet).
- Drop: OnePass2.zip (judge 15, regold with regold_extra.json from the 585b8107 ledger).

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

## Phase 9 (2026-11-18, after OnePass2 went in)

- Judge chunks were dying whole (every row after one bad row lost, "not judged"). Three causes, all fixed at root, sandbox only so far, for the next drop:
  - cowdiff.c: a state never starts a real thread. CreateThread inside a state is answered by the harness (logged, fake handle, thread id written). 0x10265d00 started 0x10265cd0 on a fuzzed `self`, the thread faulted outside every guard and ended the process.
  - runtime/portable/gwin.c: cow_walk decommits pages a run created instead of memsetting them. A fuzzed operator new of 2.9 GB (0x101a07e0) left 2.9 GB resident per prover after every restore; two provers side by side got OOM-killed. Peak 3.5 GB -> 208 MB, verdict unchanged.
  - runtime/portable/k32.c: ExitProcess asks the fatal hook first (as ExitThread already did). 0x10320be7 reached _amsg_exit -> ExitProcess(255) and ended its chunk. Now gold.
- rise.py import_args: shim bodies parsed by brace matching. A one-line shim swallowed the shims after it, so Enter/LeaveCriticalSection and 168 other imports had no known pop count and rise guessed (0x10265d00 popped edi from the wrong slot). Known imports 126 -> 291 (0 changed, 170 gained). 306 non-gold functions call one.
- Checks: g60 still 60/60 gold, judge selftest OK (57 rows). nu24 sample: all 24 judged now (was 10). imp40 sample (non-gold callers of the gained imports): 9 gold of 35 lifted.
- Origin note: worklog pushes to main from the sandbox made the user's commit.py push fail (not a fast-forward). No more pushes from the sandbox; the next drop carries the worklog.
- kobj.c/k32_io.c: the handle table and the named-object table are now world the harness puts back (k_cow_save/restore, k32_cow_save/restore, called from snap_save/snap_restore). Side A's CreateMutexA got 0x100 and side B 0x104 (0x10113d30, "memory" fail); now gold. Handles a run opens are closed, ones it closed come back. judge2 JUDGE_FILES gains kobj.c, k32_io.c, k32.c. Mock gets empty stubs.
- After both: imp 9 -> 12 gold of 35, nu24 6 -> 8 gold, g60 60/60, judge selftest 57 rows OK, judge2 selftest 64.

## Phase 10 (2026-11-19, OnePass3c in: judge 16, commit 05920b7ff pushed)

- OnePass3 and 3b stopped at the merge check before changing anything: git's "could not open directory" warning (stderr, merged by P.run) was read as a dirty file. 3c reads stdout only, skips a missing folder, and was tested against clones with the folder missing / identical / different. It merged, installed, passed, committed and pushed.
- rise solve_pops: call-site guess for every unknown call (no `add esp` after -> the words pushed in the block since the last call). 0x1004e8d0's `call [edx+0x50]` was solved as 0, then 64; now 12.
- rise solve_pops: the x87 stack depth joins the same z3 system (a variable in {-1,0,1} per call with no xdelta, one depth per block, ret/tail = the function's result 0 or 1); x87 refusals now go to it too. 0x1004e8d0 (15 KB) lifts.
- All 136 no-unit functions refused for frame shape relifted: 43 now lift, 107,910 bytes (6.2% of code). Left: 32 CRT x87 fragments entered mid-frame ("ret with esp off (44)", 680 bytes), 10 esp differs (27 KB), tail jumps off by N.
- rise solve_pops also models the stack probe (`mov eax, N; call __chkstk`: esp -= N) and `and esp, -16` (a free aligned base); both made it return None before. 0x1017de20 (13 KB) and 0x101b00b0 (4 KB) lift. Now 48 of the 136 shape-refused functions lift (~125 KB).
- Judged so far (37 of the first 43, sandbox, one seek pass, no aim): 4 gold, 12 silver, 11 weak, 10 fail (6 st0, 3 no clean state, 1 callee-saved). The st0 fails are few states each (0x1004e8d0: 2 mismatches, 536 clean): suspect the x87 choice is ambiguous where a +1 and a -1 cancel on one path. Next: read xdelta off direct callees' own bodies so fewer calls are unknown.
- Left refused: 1000e250 (frame unsat, 260 bytes apart), exit()-style callees that never return (1027d6e0, 10102340, 103185ec), 32 CRT x87 fragments entered mid-frame.
- Sandbox lesson: never wait blind on a captured subprocess; chunks now write their output to /tmp/<tag>/cN.out as they go.
- OnePass3c on the user's machine, 1.8 h in: 46.9% proven (was 44.4% published), regold gave 333 back, grow 1,417 new gold, step 6 judging 3,886 rise lifts (first 920: 20 gold, 366 silver, 221 weak, 302 fail). Aim and grind not reached yet.
- solve_pops: calls of one direct target share one x87 variable; the function may take x87 inputs (x_ret in -4..1, depth down to -4), a deviation from a call's own guess costs 2, an odd x_ret costs 1. Still 48 of 136 lift; 4 gold / 12 silver of the first judged set hold (one silver, 0x10153310, text unchanged, now fails `call args` in 3 states under a different seek state set: a latent mismatch, not this change).
- THE st0 FAILS ARE NOT THE SOLVER. Root cause read off 0x102f182d: `fild; fmul; fld; call 0x10312cd0` is _CIpow, which TAKES two x87 values and GIVES one. rise knows a callee's x87 effect only as a net number (xdelta), which is None for it (deep calls), and a net -1 cannot say "takes 2, gives 1": the unit hands over one value and loses the result. NEXT: a callee x87 signature (takes, gives) in Image.info, read off the entry (values read before any is pushed) and the exits; the call hands `takes` values and takes `gives` back. The CRT's _CI* family and compiled helpers both need it. Expect it to move the "lifts; judge: st0" (0.9%) and part of "fail" buckets too.
- OnePass4 (rise.py + this log only; judge id unchanged, so nothing is re-judged; the cycle's rise step reruns because the rise stamp changed). To be run after OnePass3c's cycle says CYCLE DONE.

## Phase 11 (2026-11-19): OnePass3c's aim hung

- OnePass3c's cycle reached 47.44% (16,102 gold), then aim round 1's seek sat on function 3,264 of 3,265 for 5.3 hours. The function's time budget is only asked for between drives; a drive that never returns is never asked.
- seek.py: a hard clock per worker (COW_SEEK_HARD_SECONDS, default FUNC_SECONDS_MAX * 1.25 + 120 = 1,620 s). Past it the worker names its function in <out>/hung.txt and ends itself; the run gives that function up ("hung: over the hard time limit"), names it, and deals the rest out again. Tested with a forced hang.
- Which function hung and why is not known yet: the next run prints its name. OnePass4 (rise only) was not run: held until the takes/gives x87 fix is in.
