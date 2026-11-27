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

## Phase 12 (2026-11-19): the judge wrote junk folders into C:\

- OnePass5's cycle reached 72.054% (18,273 gold). Seek's hard clock fired once: 0x102c69ef (seek.ev on an expression too deep to evaluate as a tree; contained by the clock, its root fix is next).
- THE BUG: empty folders with 1-3 byte non-ASCII names in the root of the user's C: drive, in bursts of 10-13 (one per prover), the same bytes run after run. Root cause read off the code: inside a state the runtime's file shims do what they are asked for real; on a Windows host vfs_host_path maps the guest path straight to the host path, and a relative name is joined to the guest cwd, which starts at C:\ (vfs.c g_cwd). A fuzzed pointer read as a name made a folder. The same path could have deleted, moved, truncated or written any file a fuzzed string named, and written the saved registry. Not seen in the sandbox: on Linux an unmounted guest path fails before the host is touched.
- JUDGE 17 (cowdiff.c): inside a state the harness refuses every call that changes the disk or the saved registry: CreateFileA/W unless it opens an existing file for reading only, DeleteFileA, CreateDirectoryA, RemoveDirectoryA, MoveFileA, CopyFileA, SetFileAttributesA, SetCurrentDirectoryA, WriteFile, SetEndOfFile, FlushFileBuffers, RegCreateKey(Ex)A, RegSetValueExA, RegDeleteValueA, RegDeleteKeyA. Answer: failure, last error 5 (access denied), the call's own pop count; the same on both sides.
- Selftest row "disk": a unit that calls mkdir, delete and create-for-write must PASS with the mock dispatching none of them (the harness answers), and its answers are checked by hand. A deliberately wrong pop count fails it (checked).

## Phase 13 (2026-11-19): 72% -> on to 100: what keeps the rest from gold

- OnePass6 (judge 17, the disk fix) was built but not run: the user wants the disk fix to ride with progress.
- Read the published WHY.csv (72.054%): of the bytes not gold, 52% are silver/weak (states miss some
  instructions), 12% no clean state, 7% memory, 6% rise refusals (esp), the rest small.
- A sample of 30 near-gold silver units (miss 1-6 sites), judged with COWDIFF_UNREACHED: the missed site is
  the instruction after a call in 20 of 29. Three causes, each fixed at its root:
  - judge2.dead_sites + cowdiff.instrument(dead=): instructions that only follow a call which never returns
    (libjpeg's error_exit, longjmp) are not sites. Control flow read off the generated body in address order;
    a body that runs off its end, or jumps through a register, has nothing dead; only runs that start right
    after a noreturn call. 18 functions, 84 sites in the image. (cowdiff.py joins JUDGE_FILES.)
  - judge2._gamecore_slot: the 142 gamecore table thunks (`mov eax, [0x10456a2c]; jmp [eax+K]`) pop 0
    (specs/gamecore-slots.files.txt: every slot is __cdecl). The table pointer is 0 in the judge's world, so
    every call faulted; now they can be answered like any other callee.
  - seek: `call reg` where the register is an INPUT of the state (a block-entry state) gets the function in
    the input itself (trivial function or a fake stub), placed before the inputs are.
- Sample result: 11 of 30 near-gold silver went gold (2 dead sites, 4+2 gamecore/stub, 3 call-reg). Left:
  CreateFontIndirectA return (import), `call ebp` with a trivial fn, branches the states do not take.
- No-clean-state sample (20 functions, rise lifts, one seek round): 12 still none. Seen: an import with no
  shim (USER32!GetKeyboardLayout: FATAL), a callee answered beyond STUB_CALLEES, a string pointer from an
  unanswered callee. Not fixed here.
- Checks: g60 60/60, 38/38 gold units that call gamecore thunks stay gold, judge selftest OK (disk row),
  judge2 selftest 64.

## Phase 14 (2026-11-19/20): the bench, and the fixes it pointed at (judge 17, OnePass8)

- THE BENCH (sandbox, /home/claude/bench): 150 non-gold functions drawn by size (cap 6 KB weight) from the
  published WHY.csv (72.054%); for each, the GitHub unit and rise's lift, judged, then aimed seek rounds; the
  best tier counts. Projected total = 72.054 + 27.946 * (bench bytes gold / bench bytes). Baseline (the code
  the user had, one aim round): 73.93%. That said small fixes do not reach 90%.
- What stopped units, read off the bench's unreached sites: 517 runs of missed instructions; 181 began right
  after a call, 112 mid-block (the state died there), 192 on a branch arm. The states die; the code is fine.
- BIG FUNCTIONS WERE CAPPED: a row held 512 pinned states (cowdiff.c PIN_STATES_MAX) and seek made 128 a run,
  for functions of 2,000-7,000 blocks. Now 1536 per row (PIN_SRC_MAX 49152; aim/cycle PIN_MAX, lift_proof),
  seek makes up to 1024 for a function with that many blocks left, starting each missed block directly first.
  0x1008f740 (12 KB) weak 68% -> GOLD; 0x10057fb0 (23 KB) 57% -> 99.6%; 0x10005a40 67% -> 98%, in two rounds.
- RETURN SITES ARE BLOCKS (rise build_cfg): the instruction after every call starts a block, so a state can
  start there when the callee dies in the judge's world. Same refusals as before on 40 functions tried.
- THE CLOCK THROUGH A POINTER (cowdiff.c pinned_clock): QueryPerformanceCounter, GetSystemTimeAsFileTime,
  GetSystemTime, GetLocalTime answered from the state's stream inside a state. 0x102750b0 (the game timer)
  stored the counter's low word and every caller FAILed `memory` on it (0x1026f920: fail -> gold).
- x87: (rise) a callee is handed every value it reads (callee_xtakes: _CIpow takes 2, leaves 1), bottom first,
  and gives back takes+delta values in order; a block-entry case pops the function's own pushed values off the
  guest's stack after reading them (st.xd); (rise + judge2) the CRT intrinsic dispatchers _cintrindisp2/1
  (0x1031dd70: -1, takes 2; 0x1031ddae: 0, takes 1), followed through `mov edx, T; jmp D`. Bench st0 FAILs:
  14 -> 6 gold, 6 silver, 2 other.
- rise: an argument word whose address is handed to a callee (`lea edx, [esp+0x10]; push edx; call`) is memory
  from then on (0x10252c50: fail -> gold).
- seek: drives with the lift's own frame mode and attempt (rise.lift_cfg), and a stub's argument count is
  what the unit passes at that site (rise.EMIT_NARGS): a register save had been counted as an argument and the
  judge compared a word nobody passed (0x1008e9a0: call args FAIL -> silver).
- THE IMPORTS THE JUDGE DOES NOT LINK (user32.c, ws2.c, d3d8.c, dinput.c need SDL/sockets/devices): "no shim
  yet" ended every state that called one. tools/cow/mk_import_pops.py writes tools/cow/judge_import_pops.h
  (119 imports, the words each pops, from the shims' RET counts or the Win32 ABI); inside a state cowdiff.c
  answers them from the state's stream. 0x10008020 (GetKeyboardLayout): no clean state -> gold.
- seek: a read or write in the null page is a dead end (the branches before it are tried the other way),
  including the string instructions' esi/edi; a word the function stored is made an object through what it
  stored. No-clean-state sample of 20: 12 -> 6.
- seek: Model.ev evaluates each subexpression once per evaluation (0x102c69ef's 5.3-hour hang: 32 s now).
- cowdiff.c entry_arm: a block-entry fix that leaves esp on no committed page starts the state at the entry
  instead (0x100311a0 ended its chunk).
- Checks: judge selftest OK (disk row), judge2 selftest 64, g60 60/60 (before the last changes; rerun in the
  drop's own check).

## Phase 15 (2026-11-19/20): silver to gold, seek and x87

- seek starts a state only at a block the unit has a `case` for; others are driven to from the entry
  (0x1009ee60: 154 of 182 states had run from the entry with the block's registers).
- x87 count of a call through a pointer: credited +1 when the code after it pops below its depth (the ABI
  allows 0 or 1). judge2.x87_delta and rise.callee_xdelta now apply the same rule, so the harness's stub
  and the lift agree (0x100aaef0 is 1; 0x100a6240's fnstsw read TOP one too high).
- seek: a branch that reads `[arg + answer]` with the answer an object can revise the answer and decide the
  bytes it then reads (0x10076ab0).
- rise: when the return from a direct call meets another path with a different esp, that call never
  returns (exit()); the path ends there and the lift starts again (0x1027d6e0).
- frames over 4 KB: pin region `deep` (512 KB below the entry esp) and seek's FRAME_DEEP
  (0x100311a0: 867 -> 1264 of 1849 blocks).
- seek drives with the call cleanup rise's scan settled on (0x100f9eb0, 0x102f6c31: "esp differs").

## Phase 16 (2026-11-20): after OnePass8 (79.37%)

- judge build: every block start of a lifted unit (COW_AT) is a watchdog tick, so a loop of ours that
  touches no memory is bounded by the row budget instead of hanging its whole chunk (0x1031bb89).
- seek: a 32-bit div/idiv is a condition, the divisor != 0 (0x10057fb0: every state started at 0x100585b0
  divided by 0).
- seek: drives run on the call cleanup the unit was EMITTED with (rise.EMIT_POPS), and an indirect call on
  that count is sure: both sides go on with the same esp (398 of 1174 functions stopped on "an indirect call
  whose cleanup the code does not say" in OnePass8's first aim round).
- seek: a drive or a block start that reached its target and dead-ended after it (null page) keeps the
  state (0x10165070: 1266 -> 1273 of 1273 blocks, gold).
- seek: a callee's answer used as a length or index can be revised, and the bytes it then reads decided.
- rise: indirect calls through the same global object's slot share one cleanup (0x1017de20).
- aim: a unit that stopped moving is tried again when seek.py or rise.py changed.

## Phase 17 (2026-11-22): OnePass10, 2.1 - the aim was aiming at almost nothing

- aim: the two keys are split. A site list is now compared with lift_proof's OWN `sites_key` (4 fields: judge,
  unit, seeds_auto, seeds), called through `states_key(e)`, not copied. The stall memo keeps
  `states_key + tools_sha + the text judged`, and aim.py's own sha is inside `tools_sha`, which releases the
  units the broken pass stalled in `build\aim\state.json` without hand-editing the memo. Before: with 5 fields
  against the header's 4, `site_list(e)[0] == key(e)` was never true, so every round re-ran the census, `aimed`
  kept only the `fresh_only` units, and the rest were marked `stall=STALL_ROUNDS` and left aside (OnePass9
  step 7: 812 units, 361 aimed, round 2 "18 units (794 left aside: stopped moving)"). After, dry and read-only
  (`python tools/cow/aim.py --census`): 20,323 of 20,724 site lists recognised as their unit's current states,
  401 legitimately stale (the unit's text changed since: judged once again); of 656 candidates, 302 AIMED now
  and 269 after a census round, 85 left aside because every site is reached (the grind's lane), 0 held by the
  stall memo. `python tools/cow/aim.py --selftest` writes a list through lift_proof's `write_sites`, reads it
  back through `site_list()` and fails if the header and `states_key` ever drift apart again, so this cannot
  come back silently.
- next: 2.3 (drop the pinned state a try FAILs at and re-judge the rest) and 2.4 (the per-unit outcome file
  why_table reads). 2.2 is held for the AuditFix drop, which is not in `$HOME\Downloads` yet.
- aim (2.3): a try that FAILs on one of its OWN new pinned states sheds that state and judges the rest again, up
  to 8 times, instead of throwing every state seek made for the unit away (OnePass9 round 1: 294 of 353 FAILed,
  101 of them silver/weak, 1.71% of the code). `first_state` is counted the way the harness numbers pins
  (cow/seeds first, then the merged file: tools/cow/cowdiff.py:load_seeds), so a FAIL at a hand-written state or
  past every pinned one is the unit's and sheds nothing, as before. Each dropped state goes to
  `build\aim\seeds_fail\<entry>.json` with the judge's why, and the kept states file is written clean.
  `--selftest` stands in for the judge and covers all three cases.
- why_table (2.4): aim writes `build\aim\outcome\<entry>.json` each round (aimed or not and why, seek states,
  seek exit, try verdict, states shed, kept), and SITES.csv reads it: "not aimed: ...", "seek gave no states:
  ...", "aimed states FAILed at state N: ...", "new states never ran: row budget". "seek made a state for it;
  the judge's run went elsewhere" is left for the one case it was written for: a KEPT state built for that block
  that did not reach it. Before, 23,970 of 26,720 missed sites carried that sentence; today they say the truth
  first ("the aim has not reported on it yet", 26,767 sites / 480 units) until the next aim pass fills it in.
- next: 2.2 with the AuditFix drop (`$HOME\Downloads\AuditFix.zip` is not there yet), then the cycle.
- step 3 (par_prove.py): a unit whose row the chunk process never printed, in BOTH passes, is booked `crash`
  with the prover's why (tier fail, why crash, judge and src set so `answered()` is true) and is not retried
  again this cycle. It used to be left with no tier at all, which reads as "no verdict", so the same handful was
  paid for at the start of every cycle: 9 minutes for 5 units in p1, then 6 to a chunk, then the same again.
  Listed for the lifter in `build\lift_par\crashed.txt` and in the cycle log; the five from p1/p2_1122_041132 are
  **10109180, 10284970, 102a8270, 10306a9d, 1031b860** (0x1031b860 is the one named in the log pull). These are
  not mismatches: the judge never saw the row, so they are the lifter's, the ExitThread / unbounded-recursion
  shape `lift_proof.py:1441` describes. The same rule is reachable on its own for a run that started before it
  existed: `python tools/cow/par_prove.py --book-crashes`.
- the panel (2): the line already publishes why and when it stopped (heartbeat.json `phase: "stopped: judge
  check failed"`, `at: 2026-11-21 00:19:41`; checks.json has both check lines), and `conveyor.py status` now
  prints that as its first line through `line_banner()`: `LINE STOPPED: <reason>, since <time>`, `LINE DOWN: no
  heartbeat since ... (pid N gone)`, `LINE RUNNING: <phase>, heartbeat Ns ago (pid N)`. Four cases in
  `conveyor.py --selftest` (63 passed, 0 failed). What cannot be fixed from the repo: the panel process the user
  is looking at (pid 24668, started 2026-11-19) runs `C:\Users\Owner\Downloads\CowPanel\cow_panel.py`, and that
  file and its folder are GONE from disk, so the RUNNING header is a dead panel reading a dead OnePass9 drop
  console (installer pid dead, log 28.0h old) as live. It needs the panel file back; the fix is one call, show
  `line_banner()` for the line and treat a dead drop pid or a stale log as stopped, never as running.
- the panel has a home now: `tools\cow\panel\cow_panel.py`, in the repo, committed, started from there
  (`pythonw tools\cow\panel\cow_panel.py`). It lived in `$HOME\Downloads\CowPanel`, Downloads is a temp folder,
  it was purged, and the purged panel's process sat on screen for three days showing a dead drop as RUNNING.
  `--print-state` asks the window's question without a window; what it says on this box right now:
  `header : RUNNING: cycle (pid 36676) | 11 provers | that drop console is not this run's: it last wrote 28.6h ago`
  `line   : STOPPED: judge check failed, since 2026-11-21 00:19:41`
  The rules now: RUNNING only of a pid the process list can see; `procs()` returning nothing is UNKNOWN, never
  running (the old `installer="?"` was truthy, which is the second way a dead drop stayed RUNNING); a drop
  console silent for over 30 min is not the console of what is live and never ages the header; a stopped line
  shows `STOPPED: <reason>, since <time>` in the header and in its own row, read from the line's heartbeat
  (`phase`, `at`), which is the file that already carried it.
- aim (2.3, corrected the same day): the shed rule **never fired** in this cycle's round 1. 288 units FAILed and
  nothing was shed, because the code read `rec["first_state"]` and the proof ledger does not keep that field:
  `judge2.make_record` stores tier, verdict, grade, why, states, blocks, clean, afault, asym, contract, src,
  judge and (for a fail) `raw`. My selftest passed anyway because it invented records with the field set, which
  is the lesson again: a zero from a predicate I never proved can fire is not a result. `_first_state(rec)` now
  reads the index out of the raw line with the judge's own pattern (`judge2._WHY_RE`, "first at state N (why)"),
  and the selftest has a fourth case whose record carries only `raw` (it sheds state 3; without the fix it
  sheds nothing). aim.py writes no regex of its own for the harness's sentence.
- step 7, aim round 1, first numbers with the aim actually aiming: **791 units in, 0 left aside as "stopped
  moving"** (OnePass9: 812 in, 361 aimed, round 2 "18 units, 794 left aside"). The census judged 651 of them that
  had no site list for their current states; seek made **2484 states for 386 of 437** units, plus **6322** states
  that start at a block no state had reached; **392** tries judged, **14 moved up a tier** (silver->gold 9,
  weak->gold 4, weak->silver 1), **19** reach more of their sites, **NEW GOLD 13**; **288** units FAIL on a state
  the aim reached, listed in `build\aim\fails.txt` for the lifter (that is real difference, not machinery).
- the panel (2), same day, two more lies removed. (a) `drops()` listed only a zip carrying `install_*.py` or a
  panel, so the user dropped `OnePass10_rise.zip` (a GOOSE_*.md brief, a patch, rise.py: an AGENT drop, applied
  by the agent, nothing to run) and the panel showed only OnePass9: it was asked to show a drop that was plainly
  in Downloads. It lists AGENT drops now. `--print-state` says: `OnePass10_rise.zip [AGENT (GOOSE_RISE_FIXES.md)];
  OnePass9 [install_onepass9.py]; CowPanel [PANEL]; rl-phase2 [AGENT (nat-masq-mode.patch)]`. Run drop extracts an
  agent drop and says the agent applies it, instead of offering to run a file that does not exist.
  (b) The panel collapsed "the line announced a stop" and "the heartbeat stopped beating" into one word, so with
  the line gone since 08:04 (its model call timed out) the row read **STOPPED: no reason given**. They are two
  states now: `LINE DOWN: no heartbeat since 2026-11-22 08:04:39 (pid 34824 gone, last phase waiting for the
  model)` and `DOWN: ... TimeoutError: timed out`, versus a real `STOPPED: <reason>, since <time>`. And the
  header keeps the line's news whatever else it is showing, which the earlier refactor had silently dropped.
- step 2, the dead entries, committed (`44e1a5d4e` tools, `835829ab0` ledger and names). I did not trust the
  brief's numbers: I re-scanned the image myself (every rel32 target, every 4-byte value naming a ledger entry in
  the data sections at any offset, the same in .text only where a decoded instruction carries it as an operand,
  plus the vtable and rt_table slots). **388 of the 400 booked-unproven rows (1,495 bytes) are named by nothing
  anywhere and are now status `dead`** with the scan in their note. **12 are real** and stay gold: each is
  registered by an init routine (`mov dword ptr [edx + 0x54], 0x100a33d0` in 0x100a3310 and its 11 siblings;
  0x1031b05d is the second of four handler addresses stored from .data 0x103d0966). The reason the chain called
  those 12 unreached is a blind spot in `owner_index.py`: it looked only at ALIGNED dwords, and an immediate
  `mov [slot], imm32` sits wherever the instruction puts it. It now counts that rule too (19,333 owned of 21,761,
  1,002 more than before), which is the root cause, not a patch around it.
  Ledger: `setstatus.py` accepts `dead` and refuses it without the note; `ledger.py` carries status/name/file/
  note per entry so a rebuild cannot turn them back into `todo` and put them on the queue again; `chain.ps1`
  books a still-unproven entry `dead`, never `thunk`, and the retry selects on `failed`, so mkret.py and the
  judge never see it again. Scoreboard: `conveyor.load_functions` and `status.py` leave `dead` out of the
  universe, the gold count and the denominator, next to the thunks. Names: `addnames.py --remove` (refuses a name
  still cited by the ledger or the C) took out the 70 `unk_return_noop` rows for these bodies and the row whose
  id was the literal `12`; the 12 real ones are named from what references them.
  **The percentage did not move** (19,606 gold, 94.192% before and after), and the honest reason is that the chain
  had already removed them from the count by booking them `thunk`. They were not inflating the score; they were
  labelled as 5-byte jmp stubs. STATUS.md now reads `thunks 325 (not conversion work) - dead 388 (nothing in the
  image reaches them)`.
- step 2, the last 6%, the first root cause (`rise`, committed as a machinery commit this session). The biggest
  group in WHY.csv was 91 silver units at 70-99% of their blocks whose missed sites all said
  `not aimed: stopped moving`; 0x101b29f0 was one of them, blocked at 101b2c9d with
  `esp differs at 101b2cbf (-472 vs -480)`. It was NOT a seek bug and not a state bug. The code is

      101b2c9d  mov esi, dword ptr [0x10329320]      user32!MapVirtualKeyA
      101b2caa  call esi
      101b2cac  mov ebx, dword ptr [0x1032931c]      user32!keybd_event
      101b2cb4  call ebx
      101b2cbd  call esi                              <- the same import, two blocks later
      101b2cbf  ...

  rise finds an indirect call's import by reading the register's VALUE (`ld(COW_IMG(slot))`), which is there in
  the block holding the load and gone in the next one - at a block's entry every register that is not a frame
  address is a fresh input, and rise makes a block of every return site. So the fourth call named nothing, its
  cleanup was guessed from the four words pushed in front of it (16) where the callee pops 8, its twin got 8
  where it pops 16, and the two halves of one scan met at 0x101b2cbf eight bytes apart. `reg_iat_import` now
  walks back from the call - the block's own instructions, then past its start through the single predecessor it
  falls in from - to the last thing that wrote the register: an import-slot load names the import, any other
  write names nothing, and past a call an unprotected register names nothing. One answer or none. `solve_pops`
  got the same rule so the frame the solver fits is the frame the executor walks.
  **Measured, not assumed.** First version set `is_import`, which also took the import's argument list and the
  emitted shape, and an A/B through `conveyor.prove` on the 134 functions the pattern reaches said
  `UP 3 DOWN 4`: 0x101b29f0 to gold, and 0x1000fdc0 / 0x1024a460 / 0x1024a7c0 to `fail (call args)`. Reading
  those three: their committed units are CLEANED C, not the machine lift, so my raw lift was never their gold
  file - the DOWNs were my test's artifact, but the shape change they showed was real and unwanted. The rule now
  answers the cleanup and nothing else; re-measured, the emitted code of exactly ONE of the 121 liftable
  functions differs from the pre-change lift, 0x101b29f0, and it judges **gold** (was silver on 3145 states).
  `conveyor.py check` with the change in: RECHECK OK 0 of 200, AUDIT OK 30 of 30 must-kill, logic 100%.
  seek.py's side of it: where an indirect call does resolve to a slot, the answer the drive pins pops what that
  import's shim pops (tools/cow/judge_import_pops.h), not what the pushes say; the state seek makes for
  0x101b29f0 pins no IAT word (checked in the JSON).
  One unit is not 6%, and that is the point of writing it down: the rule is worth what the A/B measured, no more.
- step 2, the `tail jump with esp off` class: looked at, **deliberately not fixed**, and here is why so nobody
  spends a day re-deriving it. 27 units / 3,653 bytes (0.116% of the code) are refused by
  `if self.esp_off() != 0: raise Refuse('tail jump with esp off the return address ...')`. Every offset in the
  class is a multiple of 4 and all but three are negative. Taking the biggest (0x103268d6, refused at 0x10326995
  with esp -80): the code is

      1032697f  push [ebp+0x1c]; push [ebp+0x18]; push esi
      10326986  push [ebp+0x10]; push [ebp+0xc]; push [ebp+8]
      1032698f  call dword ptr [0x103292ac]        kernel32!CompareStringA (6 args, callee pops 24)
      10326995  jmp 0x10326b41                     <- refused

  and 0x10326b41 is a SHARED SEH EPILOGUE:

      10326b41  lea esp, [ebp - 0x4c]              <- esp is re-established from ebp, first instruction
      10326b44  mov ecx, [ebp - 0x10]
      10326b47  mov dword ptr fs:[0], ecx          <- the unwinder link is unhooked
      10326b4e  pop edi; pop esi; pop ebx; leave; ret

  So the arrival esp is DEAD: the target overwrites it before anything reads it, and the refusal is over-strict
  for this shape. It is also not a one-line relaxation. The emit path below the check does
  `if self.gesp != 0: self.stmt('g->esp = sp0;')` - it hands the tail callee the RETURN ADDRESS, not the frame
  the original arrives with - and that behaviour is load-bearing for every other tail unit. Changing the tail
  contract to let an esp-off jump through means changing what g->esp is on a tail call, and the property it
  protects (`ret with esp off the return address`, the class that keeps 46 more units from being written at all)
  is only checked by the judge ON THE STATES THAT REACH IT. A wrong tail that no state reaches stays quiet.
  0.116% of the code is not worth a frame-contract change the judge can only sometimes audit: this wants the
  SEH story done properly (rise recognising a tail target that establishes esp from its own frame pointer, and
  the tail emit passing the real esp), not a widened `if`. The class is left refused and the reason written down.
- step 2, where the aim round's states actually go, measured rather than guessed (`build/aim/pins/*.txt`, the
  per-state end record aim writes). Across every pinned state of every unit the line has aimed: **46,653 clean
  against 20,763 afault - 31% of the states the machinery pays to judge are thrown away by the original
  faulting on them.** Each `afault` line carries the exception code and where it died, so the waste is
  attributable instead of a vibe:

      c0000005 (access violation)  5,956        e000000d NO_TRANSLATION  1,599      e000000e STATE_BUDGET  203

  The access violations are null-ish dereferences, overwhelmingly: `last=` = 0 (553), 0xc (361), 0x8 (247),
  0x18 (135), 0x4 (117), 0x14 (102). A state left a pointer at 0 and the original followed it into the null
  page. That is the seek side's to own: `m.pointerize()` gives an object to every value the PATH uses as a
  pointer, and these are the pointers it never saw - the ones that arrive as a stubbed callee's answer, or sit
  in an object field the drive read symbolically but the original dereferences for real.

  The NO_TRANSLATION group is more interesting and mostly NOT a seek bug. `last=` is the address the original
  tried to EXECUTE and the harness had no code for (cowdiff.c:2970 raises COW_EX_NO_TRANSLATION there, and
  cowdiff.c:2111 is why the addresses look strange: the harness unmaps 0x00100000..0xFFF00000 to catch stray
  accesses, so anything at or above 0xFFF00000 is the harness's own). By states lost:

      0xfff01270 x646, 0xfff01280 x127, 0xfff01260 x39, 0xfff00700 x24   harness stub region, ~836 states
      0x00000000 x162, 0xfffffffe x26, 3, 1, 8, 2  ~x70                call through a null/garbage pointer
      0xc0de8370 x28, 0xc0de83f0 x10, 0xc0de84c0 x8                    seek's OWN FAKE_LO stubs (0xc0de0000)
      0x009c0040, 0x009c8040                                            a vtable slot left pointing into heap data

  Two things follow, and neither is a judge change. The biggest single bucket (~836 states) is the original
  jumping into the harness's 0xfff00000 stub area with nothing pinned there - a STATE shape problem: a slot
  the state was expected to fill was left empty. The 0xc0de* bucket is seek handing out its fake-callee
  addresses on paths the original then takes for real, which is the `lift_proof lets these through` promise
  not holding for those states. Both are in seek's and aim's remit, and the 0xc0de*/0xfff0* ones are cheap to
  find because the pins files name the address. **Read the correction below before acting on this paragraph:**
  I tested whether that naming makes the whole fault population attributable and it does not - 1,137 of 7,683,
  and the other 85% is a different bug (nested pointer depth), so "cheap for all of it" was my guess, not a
  measurement. A fault at 0xfff01270 does mean "this state left a stub slot unfilled", not "this unit is
  beyond the judge"; most of the null-page faults do not mean anything the state itself says.
  What is NOT true, and was my starting guess: the NO_TRANSLATION targets are not unwritten game functions.
  364 distinct addresses, and the top 15 cover 1,163 of the 1,600 states - none of them is a ledger entry
  waiting for a unit. So "write the missing 246 functions and the states will stop faulting" is wrong, and
  writing it down is the point: it is the kind of plausible chain of reasoning that costs a day.
  The fix this points at is a feedback channel - aim already learns which SITES a unit misses and feeds that to
  seek; the same loop could feed each faulting state's `last=` back, so seek fills or drops the slot that
  caused it instead of regenerating the same faulting state every round. That is a design change to two files
  the cycle is running through, so it waits for a quiet cycle, and it is the first thing to pick up next.
- correction to the entry above, same day, because I tested the premise instead of assuming it and it did not
  hold. The claim "both are cheap to find because the pins files name the address" is only true for a minority.
  Taking every faulting state that has a recorded address (7,683) and asking whether that address appears in
  the unit's OWN state JSON (cow/seeds_auto/<entry>.json, the state the judge ran):

      1,137   the address IS in the state   -> attributable, a feedback channel can act on it
      5,487   the address is NOT in the state -> the ORIGINAL computed it at run time
        796   the state index is beyond the file (shed since that judging)
        263   no seeds_auto at all (the state was fuzzed, not pinned)

  So ~15%, not "both". The attributable 15% is exactly the group I named as seek's own - the 0xc0de* FAKE_LO
  callees and the 0xfff0* harness stub slots - so that part of the entry stands and is still the cheap win.
  The other 85% is the access-violation bulk, and its cause is not a slot the state left empty: it is the
  original walking DEEPER than the drive modelled. seek gives an object to "every register, argument or loaded
  word the path uses as a POINTER", which is one level, along the driven path; the original then reads
  obj->field and follows THAT as a pointer, and the field is 0 because nothing ever materialized it. A fault at
  last=0, 4, 8, 0xc, 0x14, 0x18 is a null base with a real offset - `mov eax, [ecx+0xc]` with ecx still 0 -
  which is why the addresses cluster so tightly at the bottom of the null page.
  What that means for the fix, in priority order: (1) the FAKE_LO / unfilled-stub half of NO_TRANSLATION is
  genuinely cheap and genuinely seek's, do it first; (2) the null-deref bulk wants NESTED pointer depth -
  fields of an object that are themselves read as pointers get an object too, at least one level past the
  driven path - which is a different change than a feedback channel and one that could inflate every state's
  memory footprint (the state has PIN_WRITES_MAX and a heap to fit in, so unbounded depth is not free); (3) a
  feedback channel keyed on `last=` alone would chase 15% and call it a win, which is how a change like that
  gets shipped and does nothing. Recorded so the next pass starts from the measurement, not from my guess.
- second correction the same day, and this one retires the recommendation itself. I checked whether the fault
  rate is a BUG in some state family by grouping every pinned state with a verdict by its `note` (who made the
  state and how), across the 650-odd units that have both a pins file and a seeds_auto file:

      aim: starts at block                        38,001 clean  16,334 afault   30%
      seek: starts at (built with regs/stubs/mem)  4,387 clean   1,835 afault   29%
      seek: drives to                              1,546 clean     933 afault   38%
      judge: its own fuzzed state                    356 clean     447 afault   56%
      aim: the entry, registers as objects           209 clean       2 afault    1%
      aim: the entry, registers and arguments        230 clean       4 afault    2%
      aim: the entry, as it comes, its callers       151 clean       4 afault    3%
      aim: the entry, arguments as objects           192 clean      15 afault    7%

  So the empty-looking `aim: starts at block` state is NOT the problem I thought it was an entry ago: it faults
  at 30%, the same as seek's fully-built block-start states at 29%, and 9,232 of its faulting states DO carry
  regs. And the two "nested pointer depth" and "fault-cause feedback channel" prescriptions from the two
  entries above both die here: the mid-block families fault at one rate whatever they contain, which is what
  you expect when the reason is that the block needs a pointer no state can guess - an object for `eax` does
  not help if the block wants `[[0x1045666c]+0xc]+0x3945c` to be a live object. The families that DO fault
  rarely (1-3%) are the entry states that hand out objects, and they cannot cover a missed mid-function block
  at any price, because they start at the entry.
  The honest conclusion, which is the opposite of a fix: **the 31% state waste is not a bug in state
  generation.** It is the price of starting functions mid-block, it is uniform across every way of doing it,
  and there is no smarter state to write for that 85% of faults. Anyone is welcome to re-run the family table
  (it is 60 lines over build/aim/pins + cow/seeds_auto) before spending a day on either of the two ideas I
  wrote down earlier today - I spent the hour, both were wrong, and the entry-states-are-broken story would
  have been believed because it looked so tidy.
  What the remaining 5.5% does need is the boring thing: the rise refusals lifted (246 functions never written,
  the ret-esp-off and non-frame-esp classes, per unit, with the frame solver in the way) and coverage for the
  120 units that pass and simply have not been run enough. The aim round and the 20x grind are already pointed
  at the second of those, which is why the right move for this session was to measure and correct, not to
  ship a third theory.
- one narrowing on the `ret with esp off` class, from tracing 0x10249615 (the biggest, 1,238 bytes) rather
  than theorising about it. It is not a call-cleanup guess: the instrumented scan shows **no call in the
  function had a guessed pop at all**. What the trace does show is the block holding the epilogue entered with
  the wrong frame depth. The block starts at 0x10249ac6 with `esp = -12` and spends 40 bytes on the way out:

      10249ad4  pop edi / pop esi / pop ebx / pop ebp     +16   ->  esp -12+16 = +4
      10249ad8  add esp, 0x18                              +24   ->  +28
      10249adb  ret                                              refused: esp off 28

  For that `ret` to be legal the block must be entered at esp = -40 (16 bytes of saved registers plus a 24-byte
  frame), so the path into it lost 28 bytes of the prologue's allocation. ~~That is the shape of the whole
  class: an *inbound* path that skips a prologue allocation - the jump-table and SEH-handler entries into a
  function,~~ **FALSIFIED two entries below, and it should have been tested before it was written: that block
  has a SINGLE intra-function predecessor, and the function has ZERO inbound pointers from outside its body, so
  there is no foreign entry point in the story at all. ~~The real cause for this one unit is a wrapped alloca the
  probe rule does not see through - and only 1 of the 46 units calls it, so the class of 45 is unexplained.~~
  **That cause is dead as well, killed by the one question I should have asked before writing it: can the
  helper move the CALLER's esp? It cannot.** `0x10311bfb` is `push 1; push [esp+8]; call 0x10312fe8;
  pop ecx; pop ecx; ret` - two words in, two words out, `pop=0` - and its callee `0x10312fe8` begins
  `cmp dword ptr [esp+4], -0x20; ja …` and guards a call to `0x10313014`, which opens
  `push ebp; mov ebp, esp; push -1; push 0x1034a1a8; push 0x1031d0ac; mov eax, dword ptr fs:[0]; push eax;
  mov dword ptr fs:[0], esp`: a **structured-exception handler registration**, not an alloca. No `_alloca`
  hands the caller's esp back where it found it, and 4 pops plus `add esp, 0x18` (40 bytes) could never
  balance a 260-byte allocation - a contradiction that was sitting in the trace I already had in front of me.
  So `info['probe'] == False` was CORRECT, there was never a missing allocation, and the "1 unit / 1,238 bytes"
  I attached to it is not on offer: a byte count pegged to a wrong mechanism is not a measurement.
  The sentence stays, struck through, because writing a class-level claim off one trace with no test of the
  generalisation is precisely the mistake the correction records.**
  which enter mid-function and never ran the `sub esp` the epilogue balances - and the fact merge then insists
  every path into that block agrees on one esp. So the fix is not in the call rules at all; it is what rise
  believes about esp on an entry that is not the function's own first instruction, which is the same
  frame-contract ground I declined to break for the tail-jump class at 0.116%%. Same judgement here: this wants
  a rule about foreign entry points, written deliberately, with the 46 units named in it - not a widened
  comparison found by trial while a cycle is running on the boxes that check it.
- **correction, and I am deleting a claim I committed an hour ago as `0b189c097`.** That entry said the
  `ret with esp off` class is "the shape of the whole class: an inbound path that skips a prologue allocation -
  the jump-table and SEH-handler entries into a function". It is not, and I should have tested it before
  writing it, which is exactly the rule I applied twice earlier today and skipped here. The test, on the same
  unit the entry was based on:

      block @10249ac6  predecessors: ['0x10249abf']              <- ONE, and it is inside the function
      inbound pointers to interior addresses of 0x10249615..0x10249aeb:
          from inside the body: 0
          from OUTSIDE the body: 0                               <- no jump table, no handler table

  So there is no foreign entry point anywhere in the reasoning. What the trace actually shows, and this part
  does reproduce, is the prologue:

      10249615  push ebx / push esi / push edi
      10249618  push 0x104                  <- 260 bytes
      1024961d  mov [esp + 0x18], 0
      10249625  call 0x10311bfb             <- the allocation helper
      block @1024962a  esp = -16            <- the 260 bytes never happened

  and 0x10311bfb is a WRAPPED alloca:

      10311bfb  push 1
      10311bfd  push dword ptr [esp + 8]
      10311c01  call 0x10312fe8             <- the real one
      10311c06  pop ecx / pop ecx / ret

  rise's probe detection knows the canonical `mov eax, N; call __chkstk` and does not see through a wrapper
  that forwards the size on the stack, so `info['probe']` is False, the call is modelled as an ordinary callee
  that pops its own argument, and the frame stops 260 bytes short - which is why the epilogue's 4 pops plus
  `add esp, 0x18` land 28 above the return address.
  **How much that is worth: one unit.** Of the 46 in the class, exactly **1** calls 0x10311bfb. So this is not
  the class fix either; it is a real and correctly-diagnosed single-unit fix (teach the probe rule to look
  through a one-level wrapper that forwards the size), worth 1,238 bytes = 0.04% of the code, and it waits for
  a quiet cycle like everything else that touches the frame. What the class of 45 still needs is a cause, and
  I do not have one: I have now produced three theories about it today (call-cleanup guess - falsified, no
  guessed pops in the function; foreign entry points - falsified, zero inbound pointers; alloca - real but one
  unit) and the honest state of the record is that the class is unexplained. Anyone tempted to write a rule
  for it should start by asking the same three questions of a second unit, which costs about ten minutes and
  would have saved me three committed entries.
- closing entry on the `ret with esp off` class for today, so the record ends on what is known rather than on
  the last guess. Four mechanisms were proposed and all four are dead, each killed by a check that cost minutes:

      call-cleanup guessed wrong      -> instrumented the scan: NO call in 0x10249615 had a guessed pop at all
      foreign entry point (jump table,
        SEH handler entering mid-body) -> the refusing block has ONE intra-function predecessor, and the
                                         function has ZERO inbound pointers from outside its body
      wrapped _alloca not seen by
        the probe rule                -> the helper is esp-neutral (push 2 / pop 2, pop=0) and its callee
                                         installs an fs:[0] handler: a guard routine, so probe=False is right
      "1 unit is fixable, 1,238 bytes" -> retracted: that number was tied to the wrong mechanism

  Status: **46 units / 4,252 bytes (0.135% of the code), unexplained.** The facts that are solid and worth
  keeping: the epilogue is `pop edi; pop esi; pop ebx; pop ebp; add esp, 0x18; ret` (spends 40) and the block
  holding it is reached with esp = -12, so the model is 28 bytes short of what that epilogue balances; the
  prologue pushes ebx, esi, edi and one word whose value is 0x104; nothing in the function writes esp other
  than the 15 `add esp, N` cleanups listed in the trace, and no `mov esp,` / `and esp,` exists anywhere in it.
  Whoever picks this up should start from those six facts and NOT from a new theory of the class: ask what a
  SECOND unit's epilogue and block-entry esp are (ten minutes), and only generalise when two units agree. The
  temptation to explain a 46-unit class from one trace is exactly what produced three wrong entries today, and
  two of them got committed before the check that would have stopped them.
- the class has a mechanism now, and this one is measured rather than argued, because the class itself supplied
  it. Asking what the 46 have in common instead of reasoning from one unit: **32 of the 46 report the SAME
  offset, N=44**, and none of the 46 has an SEH frame, a `mov esp,`/`and esp,`, or a `leave` anywhere in it -
  which retires the three stories above by construction and not just by my one example. All 32 are ~32-byte
  x87 helpers with one shape (verified on 0x1031e1be, 0x1031e262, 0x1031e306):

      fstp xword ptr [esp + 0xc]      ; the function has NO prologue: zero pushes, no `sub esp`
      fxch st(k) / fld st(0)
      fstp xword ptr [esp]
      fstp xword ptr [esp + 0x20]
      call 0x1031dfe0                 ; the helper: pop=0, nargs=6 - it consumes nothing of the frame
      fxch st(k+1)
      fld xword ptr [esp + 0x20]
      add esp, 0x2c                   ; 0x2c = 44 = the number the refusal reports
      ret

  So the 44 bytes cannot be this function cleaning up after its own pushes - it never pushed anything - but the
  `add esp, N` sits a few x87 instructions after a call, which is exactly the window `cleanup_after()` looks in
  when it decides an `add esp, N` belongs to the preceding call's arguments. rise therefore hands the 44 to the
  call, the frame arrives at the `ret` 44 bytes high, and the lift is refused. The arithmetic closing (the
  reported N equals the add's immediate, in all 32) is what makes this credible where my other four theories
  were guesses.
  The discriminator a fix should use, and why it is safe: an `add esp, N` after a call can only be that call's
  argument cleanup if the function actually PUSHED those bytes since its last call (`count_args`), and here it
  pushed nothing at all. The rule earns its keep on the ordinary `push args; call X; add esp, 8`, and this
  case is precisely the one where it should not fire. That is a narrow, principled condition - not a widened
  comparison - and it comes with its own negative test: the 32 units must lift AND the audit's must-kill set
  must still die, because a frame rule that lets a real esp error through is worse than the refusal.
  Size of the prize, said plainly so nobody over-invests: 680 bytes over 32 units = 0.02% of the code, plus
  possibly the tail of other N values if they turn out to be the same shape with different constants. It is
  the first thing to do when the cycle is quiet, with `rise.py` untouched while provers are running, and A/B'd
  the way the import-slot fix was - lift the class, diff the emitted text against the pre-change lift, judge
  the difference, and keep it only if gold rises and nothing falls.
- step 2, and the first **machinery** bug of the session rather than a lifter one, found by asking the pipeline
  its own question instead of theorising. `build/cycle/rise_verdicts.json` is the file cycle.py writes for
  exactly this purpose - "what the judge said about every lift, kept or not: why a function with no unit still
  has none" - and reading it turned the 246 unwritten functions from a wall into a distribution: 86 `fail /
  no clean state` (the original faults on every state: beyond this judge, not short of one), 54 `silver` (the
  grind's business), 28 `fail / memory` (real per-unit lift bugs), and **13 `nocompile` + 5 `hang`**.
  Those last 18 are a bug in the loop, not in a unit. Step 4 removes every added unit outside KEEP_TIERS and
  passes the list to `ledger_drop`, which puts them in `state.json`'s `rejected` under
  `rej_key = lifter_stamp/judge_id` - and grow skips anything in `rejected` for as long as the lifter and the
  judge are unchanged. A transient therefore **permanently retires a function**: the compile failures came from
  24-way prover contention, and six of the 13 I re-judged by hand on a quieter box compiled and answered
  normally (fail/memory, timeout, no clean state). Six functions the pipeline had silently given up on.
  Fixed in `b65505041` along the line the daily recheck already draws in its own words - *a row that ran out of
  time has not been given a different ANSWER, on a loaded machine it has been given none, which is why recheck
  asks such a row again ALONE* - but split by cost after I checked my own first version:
  `NO_ANSWER` (nocompile, timeout, hang, none) is **never retired**, the file just goes so nothing unanswered
  sits in src/lifted where one bad body stopped `cl` from starting at all; `NO_ANSWER_REASK` (nocompile only)
  is settled **this cycle** on one prover, one unit per chunk, so the contention is absent. My first draft
  re-asked hangs too with a cap of 80, which I caught on reading: a hang row costs its whole wall budget (the
  prover kills it near 135s), so 80 of them serially would have added hours to a cycle to settle units that
  were going to be retried anyway. Property test over the transcribed logic covers all six behaviours plus a
  300-timeout cycle that must re-ask nobody, retire nobody and pay no serial tax.
  Not exercised end to end - that needs a full cycle - and it changes no verdict that exists, only what happens
  to verdicts the machinery never produced. Worth watching in the next cycle's step 4 line: it should now say
  "asking N compile failure(s) again on one prover, M left for the next cycle un-rejected".
- follow-up on the 86 `no clean state` rise lifts, because the easy reading of that verdict does not survive a
  check. `no clean state` is the label the pipeline uses for "the original completes on no generated input -
  beyond this judge", and it is what keeps those functions unwritten. So: had seek actually been given them?
  A missing `cow/seeds_auto/<entry>.json` cannot answer that (seek writes no file when it makes no states), but
  `build/aim/seek_out/<entry>.why.json` is written for every unit seek is handed, so it says whether seek ran.

      the 86 lifts booked no clean state:
          54   seek has run on them (a .why.json exists)
          32   NEVER put in front of seek
           0   missing from rise_tree - so the fallback at cycle.py:465-479 had every file it needed to
               hand them over, and did not.
      and of the 4 that do have pinned states, 0 have a single recorded CLEAN state.

  So 32 functions are sitting in the ledger labelled beyond the judge on the strength of FUZZED STATES ALONE.
  That is not what the label means, and it is not what the ground rules allow: the rule is "no unreachable
  exemptions - every site is readable code, so every site gets a state that reach it", and a state the original
  completes on has not been asked for in 32 of these cases. This is the same shape as the bug fixed in
  `b65505041` an hour earlier - a class of functions quietly falling out of the loop with a verdict that was
  never really earned - but I am stopping at the measurement. Two candidate causes are visible from here and
  they need different medicine: either step 7's candidate list is dropping them (it reads
  `rise_verdicts.json`, which is overwritten by the LAST step-6 run, so a lift judged in an earlier cycle than
  the one whose verdicts file is on disk is invisible), or seek is being handed them and exiting before it
  writes anything for them (which would make the missing why.json a seek bug, not a selection bug). Telling
  those apart is one careful cycle of logging, not a theory, and I have earned no credibility for guessing at
  a third one today. What is solid and worth keeping: **the phrase "no clean state" currently means "the judge
  got no clean state from what it was given", which for 32 units was only ever random fuzz - so the count of
  functions genuinely beyond this judge is not 86 and may be far fewer.**
- **correction to `e4bfe22a0`, and this one retires my own alarm.** I wrote that 32 functions carry a
  beyond-the-judge label earned from fuzzed states alone. They do not. All 32 **have a unit in `src/lifted`**,
  and `aim.candidates` adds a rise lift only `if e not in shas` (aim.py:1075) - a function that already has a
  unit is not rescued by handing seek its discarded rise text instead. The exclusion is by design and correct;
  the 32 are ordinary `fail`/`timeout` units, not mislabelled unwritten ones. My "the count genuinely beyond
  this judge is not 86" line was reading a rise-lift table as if it were a scoreboard, and I should have asked
  what the selector does before calling it a bug. For contrast, 10 of the 54 that *were* sought also have a
  unit, so the two sets overlap in exactly the way `e not in shas` predicts.
  Re-measuring the selector over every unit in src/lifted, it is in fact sound and I found no bug in it:

      gold                        21,000   not sought  (nothing to seek)
      silver / weak                 101 / 20   admitted
      fail / no clean state           49       admitted   <- the "original faults" case IS covered for units
      fail / memory                   11       not sought
      timeout / timeout                7       not sought
      fail / eax, callee-saved,
        fault, edx, call args         22       not sought
      none / hang                      2       not sought

  So `no clean state` is already admitted for units (49 of them), which is the case I had implied was missing -
  it was not. What genuinely never reaches seek is **25 units**: 11 `fail/memory`, 7 `timeout`, and 7 with a
  concrete register/fault reason, plus 2 hangs. Of those the 7 `timeout` and 2 `hang` are the only ones where
  I can argue the pipeline contradicts itself - it says elsewhere that a row which ran out of time was given no
  ANSWER, then declines to give them the states that might make them answerable. 25 units is a rounding error
  against 176 KB of remaining code, so this stays a note, not a change: the selector is fine, my alarm was
  wrong, and the honest inventory of the last 5.7% is unchanged - 49 units whose original faults on every
  state they have been given, 11+7 with a real mismatch to fix one at a time, and the 246 unwritten functions
  whose rise lifts come back `fail` for reasons that are per-unit work.


- 2026-11-27 14:05 FADDp's NaN IS THE DESTINATION OPERAND [THE RULE IS RIGHT - the "six units to gold" claim below is REFUTED, see the 19:10 entry] - the class that was 8 units, and the two forms
  that must not share a rule (tools/cow/rise/rise.py, layout/x87.h). Started from the 11 fail/memory units
  that already have a unit file: read the judge's own per-word line and 8 of them differ ONLY in a NaN
  payload - both sides leave a quiet NaN and the bits disagree (ffff25ff/ffe80722, 7ffffffb/7fffffff,
  ffffd653/fffa8b99, ffffffff/fffffffa, ffc98330/ffc983fa). The other 3 differ in an actual number, so
  `fail/memory` was never one thing. 0x1006d270 was the cheap one: 869 clean states and exactly ONE
  mismatching state, i.e. one defect between here and gold.
  Three of my own theories died first, each killed by its own A/B and not by argument: (1) that the lifter
  hoisting `mov edi,[esp+0x60]` and the `[esp+0x10]` reload out of the loop was unsound under fuzzed-pointer
  aliasing - putting both reads back where the original has them left the IDENTICAL mismatch; (2) routing
  the add through layout/x87.h's cow_fadd_r; (3) routing the multiply through cow_fmul_m. (2) and (3)
  looked like no-ops only because lift_proof prints the MASKED detail: I very nearly wrote "the rule does
  not matter" off a line of `#` placeholders. The unmasked values live in the JSON's `raw`; print those.
  What settled it was printing the STATE. A scratch copy of the unit (COW_LIFT_SRC, the sanctioned
  out-of-tree mechanism) that fprintfs its own inputs and outputs for the one state the judge named. Round
  r of this dot product reads the SAME four source words for all four of its outputs - `mov ecx,ebx` sits at
  the j-loop head, only the arg3 window slides - and two of those words are NaN, so the last `faddp st(1)`
  adds an accumulator that is ALREADY a NaN to a product that is a DIFFERENT NaN. The original leaves the
  accumulator's payload (0xffff25ff); the bare C expression leaves the product's (0xffe80722). Three runs
  arbitrate it: bare = FAIL, `cow_faddp` answering with the destination = GOLD, and the src-operand rule
  (what the header's other two forms do) = the same FAIL. So the popping form hands back the DESTINATION
  operand, which is the OPPOSITE of the rule layout/x87.h already carries for the memory and st(0) forms -
  and that is why applying the header's existing rule here changed nothing and nearly got recorded as a
  dead end instead of a near-miss.
  Measured before generalising, and the measurement refused me twice. Routing the memory form through
  cow_fadd_m and the st(0) form through cow_fadd_r as well fixed NONE of the units it was aimed at (the 3
  remaining NaN failures all contain a memory add and are still fail) and moved two proven gold units to
  fail/st0. Both rules live in the reference's codegen, not in the x87, so a rule measured at one shape does
  not license another shape. rise now carries the FORM down to the emit (`arith(..., form='m'|'r'|'p')`) and
  routes the popping add only; x87.h says so at each helper, including the numbers of the units that refused
  the wider change. Stable 3/3 gold on all five: 0x1006d270, 0x1006d7e0, 0x10171440, 0x10280160, 0x102d94b7.
  This cannot demote a proven unit, and it is worth writing down because my own A/B said it could: cycle.py
  step 6 writes every gold unit into rise_skip.txt and keeps a new text only where it RANKS HIGHER, so gold
  files are never re-lifted by a machinery change. My three "gold -> fail" controls were an artifact of
  proving gold units out-of-tree against a layout that had moved under me - `git log` shows layout/
  republished by scoreboard commits while the runs were going, and 0x10026ad0 failed identically WITHOUT
  ever emitting cow_faddp, which is the tell that the controls were untrustworthy rather than the wins.
  Recheck a control's lift text against the committed file before believing a control at all.
  Still open in this class, with the evidence attached: 0x102d2440 went clean 48 -> 303 from this rule and
  now fails on an IMAGE word whose top byte differs (00042444/05042444, A last-stored 0x00000000, B
  0x00000005) - a store-width defect, not a NaN, and a different investigation; 0x102d6428 and 0x102fa570
  are unchanged and both still NaN, both with memory adds. The next honest step there is to MEASURE the
  memory form's rule on the shape the lifter emits, the way this one was measured, rather than borrow the
  one f_102d7c47 supplied.

  Follow-up, same sitting: 0x1027f000 was measured separately and is GOLD too, so the class the rule
  closes is six units, not five - it had been left out of the NaN list because its first mismatch read
  inf-vs-NaN rather than NaN-vs-NaN, which is what a missing quieting looks like from one word. The rest
  of the harvest (17 not-gold units with a file carry the form) arrives by itself: this is a RISE_FILE
  change, so the next cycle's step 6 re-lifts every non-gold function and keeps each text only where it
  ranks higher. Nobody should hand-lift those; the 12 that are silver already pass and need coverage,
  which is aim's work, not this rule's.


- 2026-11-27 14:40 THE LAST 105 KB, MAPPED BY THE MACHINERY'S OWN ACCOUNTING (no code change; this is
  the map the next passes should work from). The scoreboard's not-gold bytes are 176,215 B over 457 units,
  and they are NOT spread flat: `states reach 70-99% of its blocks` 91 units / 77,304 B and `30-70%` 15
  units / 21,601 B, i.e. **105,094 B - 60% of everything left - is 134 units whose lift already PASSES and
  whose states simply never arrive at some block**. Everything else is small: rise refusals (46+27+26+14+10
  units, ~12 KB), judge `memory` (24+11), `no clean state` (49+41), timeouts (7). So gold to 100% is mostly
  a STATE-REACHABILITY problem, not a correctness problem, and the refusals are a rounding error next to it.
  Two things I checked before believing anything about it:
  - Is any of it structurally impossible? A block a clean state can never leave (a `jmp $` self-loop, or an
    `int3`/`ud2` trap) is a missed site forever, because gold asks for the site reached in a state that
    COMPLETES. Measured over the whole pool: **ONE unit, 0x10159ff0, 1,589 B** - its 504th block is
    literally `1015a4c6: jmp 0x1015a4c6` (EB FE), reached when `call 0x10156b50` answers 0, and its pinned
    states end `code=e000000e` (the state budget). So that one unit needs a judge-side word about whether a
    site inside an unexitable loop counts (judge2.dead_sites already declines sites after a call that never
    returns, so there is precedent) - and judge2.py is in JUDGE_FILES, so that is a re-baseline decision for
    the user, NOT a change to make while grinding. The answer for the other 133 units is no: they are
    reachable, the states just never get there. My theory that this pool was quietly impossible died at 1
    unit out of 134.
  - What does seek SAY blocks them? seek writes seek_out/<entry>.why.json per unit it is handed, so this is
    the machinery's own accounting and not my guess. Of the 134: **44 units (11,459 B) were never handed to
    seek at all** (no why.json), and 60 more have a why.json with NO blocked site recorded while blocks
    remain unreached (40,250 B) - so 52 KB of the pool has no explanation on file, which is the single most
    actionable fact here and an observability gap in aim/seek, not a physics limit. Of what IS recorded: 46
    sites `reached, but the run does not finish: cannot send the branch that way` (30,429 B held), 23
    `cannot send the branch that way`, 14 `time budget` (6,036 B), 8 `switch`, 7 `too many steps (a loop it
    cannot leave)`, and 9 null-page ones.
  The one concrete instance worth having looked at is 0x1004a980 - **14,011 B, the biggest single unproven
  unit on the board**, weak, blocks 2409/3678. Its blocked sites all carry x87 right on top of them:
  `fcomp dword ptr [0x103295d8]` then `fnstsw ax`, `fst dword ptr [ebx+0xe8]`, `fld/fadd` - a branch whose
  guard is the x87 status word has nothing for a symbolic solver to grab, since C3/C2/C0 are computed by
  fcom() from modelled doubles rather than carried as solver variables. That is a plausible root cause for
  the 30 KB bucket. DO NOT take that from this note as settled: my classifier for it is unsound - I looked
  at the eight instructions BEFORE the blocked site, but the branch that decides whether a block is entered
  lives in its PREDECESSOR, so for a taken jump I was reading the wrong window, and the buckets came out
  61 "plain integer" / 8 "x87 flag" while the "plain integer" windows are visibly full of `fmul` and `fstp`.
  Anyone picking this up should re-derive it off the predecessor's terminator, and should NOT hand-run seek
  on a pool unit while aim is mid-flight in the same build/aim tree (this session already ate one corrupted
  artifact that way).
  Not touched this sitting, still queued: the three NaN units whose rule needs measuring on the lifter's
  own shape (0x102d2440 - now a store-address defect after the faddp rule took it 48->303 clean, and
  0x102d6428, 0x102fa570), the AuditFix drop (2.2 recheck depth) whose zip has still never appeared in
  Downloads, and the ret-with-esp-off class, which stays closed until someone starts from a second unit.


- 2026-11-27 15:05 WHAT ACTUALLY STALLS THE COVERAGE POOL - the aim's own records say it, and my `st0`
  theory about them died (no code change). aim/outcome/<entry>.json carries `last_try`, so a stalled unit
  says what its one round did instead of only that it stalled. Of the coverage pool, **120 units are
  parked as "stopped moving: 1 round(s) with these states and these tools"**, and reading the giants:
    0x1004a980 (14,011 B, the biggest single unproven unit on the board): seek made **674 states**, and the
      try died as `fail/st0` with `dropped: [{index: 776, why: "st0"}]` - ONE state out of 674 sank it.
    0x10011a00 (5,355 B): 32 seek states, `dropped` three of them, every one `why: "st0"`.
    0x1017de20 (13,056 B, 3365/3483 blocks): `new_states_the_original_faults_in: 1`, "the original faults in
      every new state (1): nothing new was judged" - one state, and the ORIGINAL faulted in it, so it is not
      even a comparison.
  So the shape of the last 100 KB is not "the search is too weak"; it is **single bad states vetoing whole
  tries**, and the veto lands on `st0` - the x87 top register the judge compares after the call. That is the
  same register the faddp NaN rule decides, which made it an obvious suspect.
  TESTED, NOT ASSUMED, AND IT IS NO: re-lifted the six fattest stalled units with the rise that landed today
  (out-of-tree, COW_LIFT_SRC) and graded them. 0x1004a980 2409/3678 -> 2409/3678, 0x1017de20 3365/3483 ->
  3365/3483, 0x10011a00 1266/1425 -> 1266/1425: **nothing moved**. The pool's `st0` is some other x87 rule,
  not the popping add. Anyone tempted to re-run that experiment should note the other half of the result:
  three of the six came back WORSE (0x1008b460 1108->1084 blocks, 0x101b00b0 1239->1199 blocks and clean
  1300->627, 0x10276900 silver -> `timeout`, "1 mismatch(es), first at state 316 (timeout)"). Harmless where
  it lives - step 6 keeps a text only where it RANKS HIGHER, so the old unit stays - but it is the price of
  the helper: `cow_faddp` carries a NaN test on every popping add, and a state that was already near the
  step budget can now run out of it. `st0` and coverage are coupled through codegen, so a lift that fixes a
  value can still lose sites.
  Two things this leaves for the next pass, both stated as questions with the evidence attached and NOT
  settled here:
  - the shed rule. aim is supposed to drop one bad pinned state and re-judge the rest, yet 0x1004a980's
    record ends at `try: fail/st0, blocks 0/0` with a single state dropped. Blocks 0/0 says the coverage was
    never measured at all. Is the shed-and-rejudge reached on the `st0` path, or does an early `fail`
    short-circuit it? If it short-circuits, a unit one good state away from gold is parked on the strength
    of one bad state - which is 120 units in this pool alone. aim.py is LIVE in the running cycle; do not
    edit it mid-flight, and do not hand-run seek into build/aim while it owns that tree.
  - `STALL_ROUNDS=1` may be right after all. The memo key is states+tools+text, so a re-round with identical
    inputs is deterministic and would produce the identical result - more rounds would be pure prover waste.
    The unlock is a changed input, not another attempt: which is exactly why today's rise change matters for
    these units even though it did not fix them.


- 2026-11-27 15:35 WHAT IS ACTUALLY LEFT IN THE POOL, AND THE FIRST REAL LEAD ON IT (no code change; one
  of my own framings corrected by measuring instead of sampling). seeds_fail/<entry>.json is the shed rule's
  own dump - every dropped state with the why the judge gave - so it is a pile of ready-made reproducers,
  594 units and 713 states. Their classes are NOT what I said two notes ago: having looked at three big
  units I had leaned on `st0`, and the whole pile says `st0` is **31 of 713 (4%)**. The distribution is
  `no clean state` 478, `fault` 63, `callee-saved register` 41, `memory` 39, `st0` 31, `call args` 30,
  `edx` 27, `eax` 4. Restricted to the 105 KB coverage pool it is `no clean state` 57, `call args` 26,
  `memory` 20, `st0` 11, `callee-saved` 10, `fault` 7. Two conclusions:
  - the dominant class is the ORIGINAL faulting in the synthesized state, which is not a unit defect at all
    and independently confirms this session's family-table finding (state waste is not a generation bug);
  - the biggest FIXABLE class in the pool is **`call args`, and it is concentrated**: 0x101b00b0 (4,324 B,
    silver 1239/1292) carries it, plus `memory` and `fault` too - three different defects on the fattest
    actionable unit in the pool.
  Took the cleanest one: state index 7, all input registers ZERO, so nothing about it is stochastic. The
  judge names `call=2:101b5d10/101b5d10` - both sides call the SAME target - and argument #2 differs,
  A=0xe36ac8d3 against B=0x52b83703. The site is
      101b0f90 mov edx,[esp+0x23dc] ; push edx
      101b0f98 mov eax,[esp+0x23dc] ; push eax        <- same spelling, DIFFERENT address: a push sits
      101b0f9f mov ecx,[esp+0x14]   ; push ecx            between the two reads
      101b0fa5 mov ecx,esi ; call 0x101b5d10
  and the unit emits `cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, t487, arg3, arg4)` with
  `arg4 = rd32(sp0 + 0x10u)`. That resolution is CORRECT for the third pushed word - [esp+0x14] measured
  one push below the entry esp is [sp0+0x10] - so this is not an esp-model error: both sides read the same
  address and disagree on the bytes, which means one side put something different there EARLIER. The
  lifter's own text has no store into the incoming argument area at all (zero hits for a write to
  [sp0+0x4..0x24]), so the suspect is a store the original makes that the lift does not, in a slot the lift
  modelled as a plain value.
  I stopped there rather than push it. Pinning state 7 down needs the state replayed, and replaying a seek
  state means writing into build/aim while aim is LIVE in the running cycle and owns that tree - the exact
  mistake this session already paid for once. It is also a different bug from the one I fixed today: the
  three records on this unit (a missed store of 1 to 0x00b8ac70, this call-args divergence, and a
  0xE000000D no-translation divergence where the unit's esp ran to 0x00cc0fbc) are three separate defects,
  so the unit will not fall to one change. Next pass: replay state 7 AFTER aim is idle, or read the store
  the original makes to that slot from the instruction trace rather than from my own esp arithmetic - a
  linear esp walk over a function this size lies, and it did: it placed a byte store at the misaligned
  offset sp0+0x7, which is the tell that the scan, not the game, was wrong.


- 2026-11-27 15:55 AIM WAS SPENDING ITS PROVERS ON A ROW THAT CANNOT ANSWER (tools/cow/aim.py). The cycle
  that started at 09:50 is STILL in aim round 1 three hours later (checked against the clock, not the log's
  pass tags, which do not count hours - my first draft of this line said six and was wrong), and the log says why in a line repeated 19
  times: `1 came back with no answer: once more, 6 to a chunk`. The unit is 0x101b00b0 - the same 4,324 B
  one whose call-args defect I looked at an hour ago - and its row comes back with no pattern and no why at
  all, i.e. it hangs. That is not an answer, so re-asking it is in keeping with System 2.1's rule that a
  row which ran out of time was given none, and the re-ask exists honestly for a row starved by load. The
  bug is the SCOPE: `_judge` re-asks everything unanswered once PER CALL, and aim calls `_judge` on every
  bisect pass and every shed pass. A hang is a property of the state, so the same silent row was re-asked
  19 times, each one costing the prover its full kill time, in a step that still had hours of other work
  queued behind it. The grind already knows better: cycle.py keeps `asked = set()` for exactly this ("one
  that came back with no answer is not asked twice"). aim was the one place that had not been told.
  Fix: a module-level `_ASKED` of (unit, seeds_dir, states, unit sha). One re-ask per JUDGING
  CONFIGURATION rather than per call - keyed on the configuration and not the unit so that a unit whose
  states genuinely changed is asked again, because new states really are new news and a permanent per-unit
  ban would silence a fixable unit forever. Property-tested in aim's own selftest (`_reask_selftest`,
  stubbing P.fan_out): a new silent unit is asked twice (the pass and its one re-ask), the same
  configuration a second time is asked once, and changing `states` re-opens the re-ask. `aim selftest OK`,
  and the printed re-ask lines come out 2-of-3 exactly as intended.
  Side effect worth knowing: aim.py is inside tools_sha, and tools_sha is part of the stall memo's key, so
  this change also releases the 120 units aim had parked as "stopped moving" for another attempt with the
  states they have. That is the mechanism my 15:05 note said the pool needs (the unlock is a CHANGED INPUT,
  not another identical round), and the re-ask cap is what keeps that release from turning into the same
  19x waste on the units that hang.


- 2026-11-27 16:10 WATCH COULD NOT TELL A STOPPED LINE FROM A DEAD ONE (tools/cow/conveyor.py). The routine
  is `conveyor.py watch`, and its act=True branch starts the line whenever `state != "running"`, with three
  exceptions - prover broken, judge check failed, died three times recently. A RUNNING CYCLE is not among
  them, although the cycle stops the line itself at step 1 (so nothing proves in the same build directory as
  the line) and starts it again at step 10. So for the whole middle of a cycle - three hours today, and the
  cycle has been up since 09:50 - watch and the cycle are pointed at each other: had I started the routine
  while it ran, watch would have started the line under it, which is the very condition conveyor refuses
  elsewhere with "the line is running and proves in the same build directory" and which lift_proof.py
  documents as two provers corrupting each other.
  Not a hypothetical, and checked rather than assumed: `watch --look --minutes 0` against the live cycle
  printed `NEXT The line is not running: python tools/cow/conveyor.py start.` With act=True it would have
  done it. It is also why the line has looked "down" for most of this session while everything was healthy:
  nothing was wrong, the cycle owned it, and no record said so.
  Fix: `cycle_running()` asks the process table for a live cycle.py and the restart branch leaves the line
  down when there is one, saying so in the `did` list (`left the line down: cycle.py (pid 40596) owns it -
  it stopped the line at step 1 and starts it again at step 10`), and NEXT becomes "Nothing to do". Asked of
  the process table and NOT of a marker file: a marker a crashed cycle left behind would keep the line down
  forever, and a line quietly down for a day is the failure this supervisor exists to prevent (that cost a
  day once already). A pid answers to its name now or it does not - the same rule the panel's RUNNING truth
  uses, and the reason a stale heartbeat reads DOWN and not STOPPED.
  `conveyor selftest: 63 passed, 0 failed`, and while confirming it the daily gates reported green with
  today's machinery in the tree: RECHECK OK 0 of 200 re-proven gold units changed verdict, AUDIT OK must-kill
  30 of 30 died at once, 0 missed at the standard depth. Watch is now running alongside the cycle instead of
  being withheld from it.


- 2026-11-27 16:35 A LEAD WORTH MORE THAN THE UNIT IT CAME FROM ~~an argument-area slot read from a LOCAL~~ [MECHANISM BELOW IS WRONG - corrected 17:05, read that entry before acting on this one]: an argument-area slot read from a LOCAL
  instead of from guest memory (rise; NOT fixed here, stated so it gets tested rather than re-derived).
  Followed the `call args` class down with the reproducer the shed rule had already kept for me, replayed
  entirely out-of-tree (COW_SEEDS_AUTO + COW_LIFT_SRC into my own dirs - build/aim stays untouched while aim
  owns it): `python build/dbg_repro.py`. It reproduces first time, every time, and it is deterministic -
  only the garbage words change between runs, which is itself a clue.

  The judge's raw line is what cracked it, because it prints the state's INPUT words:
      call=2:101b5d10/101b5d10  @00000002 bfe77d1b/7d31027f
      args=f5d89ab5,db3e17cb,7d31027f,bfe77d1b
  Both sides make the same call to the same target. The word compared is argument index 2, and the two
  answers are not two similar numbers - they are, exactly, `args[3]` for the original and `args[2]` for the
  unit. The original read the incoming word at [sp0+0x10]; the unit produced the one at [sp0+0xc]. One slot
  apart, always, whatever the values are.

  The site is src/lifted/cow_101b00b0.c:1750:
      cow_thiscall(g, COW_IMG(0x101b5d10u), self, 3, loc_23dc, loc_23d8, loc_23d4);
  from the original
      101b0f90 mov  edx,[esp+0x23dc] ; push edx
      101b0f97 push edx
      101b0f98 mov  eax,[esp+0x23dc] ; push eax      <- same spelling, DIFFERENT word: the push moved esp
      101b0f9f mov  ecx,[esp+0x14]   ; push ecx
      101b0fa7 call 0x101b5d10
  With the state's esp already inside the big frame (in=esp 0x00cc1404 against the comparison's 00cc37e4),
  [esp+0x23dc] resolves to sp0+0x10 - the INCOMING ARGUMENT AREA. The lift spelled those three reads as
  frame locals `loc_23dc/23d8/23d4`, i.e. it answered them out of its own modelled slot table instead of
  from the guest memory that the state had filled.

  The asymmetry is visible in rise.py and is the whole point:
    - slot_write (1909): `if off >= 4 or (off == 0 and size)` - "the caller's memory: a real write, and the
      slot is forgotten", so a write to the argument area goes to guest memory at frame_addr(off);
    - slot_read (1838): records args_read for off >= 4 and then `s = self.st.s.get(off)` - and when a symbol
      exists for that offset it RETURNS THE SYMBOL.
  So the argument area is written as memory and read as a local. On a run that enters at the function top
  that is invisible (the prologue populates what the model has too, and the words usually agree), which is
  why 566 states of this unit are clean. It bites on the states AIM MAKES: a `seek: starts at 101b0c70`
  state enters mid-function, so the frame and argument memory hold the words the state planted and the
  local holds nothing that agrees with them. That is the same population as aim's `17398 states start at a
  block no state reached`, `the original finishes 4298 of 18893 new states`, and the `72 units FAIL on a
  state the aim reached` - all of which are exactly "entered somewhere other than the top".

  FALSIFIABLE PREDICTION, which is why this is written as a lead and not a fix: initialise the modelled
  frame slots that resolve into the caller's area (off >= 4) from guest memory at the point the unit is
  entered for a mid-function start - or stop modelling them as slots at all and route their reads through
  rd32(frame_addr(off)) the way the writes already go through wr32 - and the class that should move together
  is the argument/memory/st0 failures on block-start states: this unit (4,324 B), the other 25 `call args`
  states in seeds_fail, and a share of the 72 that FAIL on a state aim reached. If instead only this one
  unit moves, the hypothesis is wrong in detail and what it established stands anyway: the write path is
  memory and the read path is a local, and that is not symmetric.
  Not attempted this sitting, deliberately: rise.py is the component whose change re-lifts every non-gold
  function on the next cycle, and it is mid-cycle with a rise change already queued (the faddp rule, six
  units waiting on step 6). Two untested lifter changes in one re-lift would make it impossible to say which
  one did what, and the last time I let that happen the cycle's verdicts were the thing I couldn't read.


- 2026-11-27 17:05 THE 16:35 LEAD: THE EVIDENCE STANDS, THE MECHANISM I WROTE DOES NOT (correction, and the
  corrected version is the one to act on). I claimed the argument area was "written as memory but read as a
  local", pointing at slot_read returning `self.st.s.get(off)` where slot_write does a real write for
  `off >= 4`. That is not what the emitted unit does, and anyone implementing from it would have fixed
  something that was never broken. Checked against src/lifted/cow_101b00b0.c:
      L9672-9675   loc_23dc = rd32(sp0 - 0x23dcu);   loc_23d8 = rd32(sp0 - 0x23d8u);
                   loc_23d4 = rd32(sp0 - 0x23d4u);   g->esp = sp0 - 0x23dcu;
  so the slots ARE loaded from guest memory at the mid-function entry. My `slot_read`/`slot_write` reading
  was a plausible-sounding story told from two function headers, and the emitted C refutes it. The rule I
  keep breaking and keep having to relearn: the lifted text is the witness, not the lifter's prose.
  WHAT IS ACTUALLY ESTABLISHED, with the numbers:
    - The reproducer is real and deterministic (build/dbg_repro.py, out-of-tree via COW_SEEDS_AUTO +
      COW_LIFT_SRC). Same call both sides, argument index 2 differs, and the two answers are two different
      WORDS OF THE STATE, one slot apart - not two near-equal computations.
    - The original's `[esp + 0x23dc]` is measured against the esp AT THAT INSTRUCTION. The lift emitted
      `rd32(sp0 - 0x23dcu)`: same magnitude, OPPOSITE SIGN, and relative to the entry esp rather than the
      running one. Those two spellings are facts read off the two texts. What the original's address ACTUALLY
      resolves to is NOT yet established - that is the same static esp arithmetic that produced the wrong
      mechanism above, and it needs the trace below, not my arithmetic. (The unit also does `g->esp = sp0 -
      0x23dcu`, so the two sides at least agree about where the frame is; the disagreement is about which
      word inside it these three slots are.)
    - Why no one has noticed: on a run that enters at the function top, those slots are WRITTEN before they
      are read (L1745 `loc_23dc = 0x28u;` on the path to L1750), so the cached local is right and the
      address it would have been re-read from never matters. 566 states of this unit pass on exactly that.
      The address only gets exercised when the cache starts COLD - which is precisely and only the
      `seek: starts at <block>` states that aim makes.
  So the corrected, sharper statement of the lead - and it points at the same population as before, which is
  why it still matters: **a frame slot whose value is always written before read on the top-entry path gets
  an address that is never checked, and mid-function entry checks it for the first time.** The suspect is
  the resolution of a large `[esp + disp]` displacement into an sp0-relative slot address (sign and
  running-esp base), not slot caching. Aim's own log puts the size of the exposed population beyond doubt:
  `the original finishes 6 of 642 new states` in round 2 and `72 units FAIL on a state the aim reached`.
  How to test it without another guess: in a SCRATCH copy of the unit, print at the call (a) the three
  loc_ values as emitted, (b) rd32 of the address the original actually uses - esp as the guest had it plus
  0x23dc - and (c) the same slot's value as the guest memory holds. If (a) != (c) and (c) == what side A
  passed, the address resolution is the bug and the fix belongs in the code that turns `[esp + disp]` into a
  slot key. Do not change rise.py's frame modelling from this note alone: it is the most load-bearing thing
  in the lifter, a wrong sign there poisons every future lift, and a rise change also re-lifts every non-gold
  function on the next cycle - where the faddp rule's six units are still queued and must stay attributable.


- 2026-11-27 17:25 MEASURED AT LAST: the lift folds a `[esp + disp]` read into the WRONG sp0-relative slot,
  and only mid-function entry can see it (build/dbg_slot_addr.py; the 16:35 and 17:05 entries are superseded
  by this one - keep only this). I asked the unit instead of trusting my arithmetic, and it answered in one
  run. Scratch copy, one printf at the call, same out-of-tree machinery (COW_SEEDS_AUTO + COW_LIFT_SRC), so
  build/aim and src/lifted were never touched:

      esp=00cc1400  sp0=00cc37d0
      the unit passes (loc_23dc, loc_23d8, loc_23d4) = 7d31027f, 00000000, 00000000   <- rd32(sp0-0x23dc/23d8/23d4)
      [g->esp + 0x14]                              = bfe77d1b
      the judge, argument index 2 of call=2:101b5d10: A=bfe77d1b  B=7d31027f

  A's value is, exactly, the word at `[esp + 0x14]` - the third pushed value, from `101b0f9f mov ecx,
  [esp+0x14]`. The unit answered that slot from `sp0 - 0x23d4`. With the lift's own `g->esp = sp0 - 0x23d0u`
  four lines earlier, the right address is 0x00cc1414 and the unit read 0x00cc14fc: **the same word's slot
  key is off by 0x18.** It reproduces first time and the two values are never near each other - they are
  different memory, not different arithmetic.

  Why the fleet has not drowned in this: on a run that enters at the function top, that slot is WRITTEN
  before it is read (L1745 `loc_23dc = 0x28u;` on the path to the call, and the other two likewise), so the
  cached local carries the right value and the address it would have been re-read from never matters - which
  is exactly why 566 states of this same unit are clean and only the aim-made state catches it. The address
  gets exercised for the first time when the cache starts COLD, and the only states that do that are aim's
  `seek: starts at <block>` ones. So this is a defect in the machinery that aims at coverage, sitting in the
  path that coverage work runs through, which is consistent with the two numbers aim keeps printing:
  `the original finishes 6 of 642 new states` and `72 units FAIL on a state the aim reached`.

  Where to look for the fix, stated narrowly enough to be testable and not to be confused with the earlier
  guesses: the code that turns a `[esp + disp]` access into an sp0-relative slot key, when the running esp is
  not sp0 (here it is sp0-0x23d0, set by the modelled pushes and `g->esp = sp0 - 0x23d0u`). The three reads
  came from `sub ebx,eax`-era displacements and one plain `[esp+0x14]`, and they were keyed as if all three
  sat at the same depth. A correct fix makes the slot address a function of the esp at the instruction, not
  of the frame base alone.
  NOT ATTEMPTED, and this is the reason rather than a lack of tries: that code is the most load-bearing thing
  in the lifter, a wrong sign or base there poisons every lift the next cycle makes, and the next cycle's
  step 6 is already going to re-lift every non-gold function for the faddp rule's six units. Two untested
  changes to frame modelling and the faddp harvest in one re-lift would leave me unable to say which did
  what - the attribution mistake this session has now made in three different forms. Test it alone, in a
  scratch tree, against the unit above plus the 25 other `call args` states in seeds_fail, and only then let
  it near rise.py; the falsifiable form is that a real fix moves the call-args/memory/st0 failures on
  block-start states TOGETHER, and if only this unit moves then the 0x18 is a local quirk and not the class.


- 2026-11-27 17:55 THE TWO HANGERS WERE SLIPPING BETWEEN TWO NETS (tools/cow/par_prove.py). Two units had
  been reported as `unjudged units: 2` by watch all session and picked up again by step 3 of every cycle:
  **0x10109180 and 0x10306a9d**, 854 B together, both hanging inside a bridged callee - the pair I looked at
  earlier and deliberately left alone, because rewriting the harness's watchdog for 854 bytes was the wrong
  trade. What changed my mind is not that trade but where they now sit: step 3 is IN FRONT of step 6, and
  step 6 is what re-lifts the whole not-gold fleet. Every cycle pays ~135 s of prover per pass, two passes,
  to ask a question that has no answer, before it is allowed to harvest anything.
  Read the record rather than guess at it: `tier=None, why='hang', judge='', src_match=False`. That single
  record falls between the two nets this module has, which is the whole bug:
    - `judge_rest`'s `settled` matches only `tier == "timeout"` - a bounded answer the harness produced;
    - `book_silent_crashes` matched only `why == "no_row_output"` - a process that returned without printing;
    - and `answered()` needs judge AND src AND a tier, so it calls this "no verdict" forever.
  The hang record is written bare (`{"pass": False, "why": "hang", ...}` at lift_proof.py:1494) with no tier,
  judge or src, so nothing can ever match on judge or src for it. Two shapes of "the row never came back",
  one booking path.
  Fix: `book_silent_crashes` now books `hang` as well as `no_row_output`. Booked the existing way - `fail`
  with `why=crash`, **carrying the current judge and src**, onto the list the lifter reads. That choice is
  the part worth stating: the tempting alternative was to treat `why in ("hang","no_row_output")` as settled
  in `judge_rest`, and it would have been wrong, because those records have no src to match - so a settled
  row stays settled even after the lifter emits a completely different text for it, and a unit that a future
  rise change could finally prove would be skipped for ever. Booking with the src does the opposite: answered
  for this text, un-answered the moment the text changes.
  Property-tested with the ledger stubbed (the running cycle has its own step 3 in flight on exactly these
  units, and `crashed.txt` is saved and restored because the lifter reads it): only `no_row_output` and
  `hang` are booked; `timeout`, a blank `why`, `no_adapter` and a missing record are not; each booked record
  carries tier/why/judge/src; `answered()` is true after booking (step 3 stops asking) and **false again
  under a new sha** (a re-lift still gets judged). `py_compile` clean.
  Honest scope note: this helps the NEXT cycle. The one running now loaded par_prove before the edit, so it
  pays the tax once more and its step 3, using the old gate, will still not book these two.


- 2026-11-27 18:20 `fnstsw WITHOUT A COMPARE IN THE BLOCK` IS NOT AN OVER-STRICT REFUSAL (10 units, 1,212 B -
  measured, then dropped; recorded so nobody spends a week on it). The refusal fires when rise's symbolic
  "pending compare" is unknown at the fnstsw (`fsw_word`, tools/cow/rise/rise.py), which has the shape of an
  over-strictness I have been right about before: the fcom that set the flags is often in the block that
  FALLS IN to this one. So I asked, and my first answer was an artifact of my own walker - it scanned the
  block in reverse and treated the fnstsw itself as x87-dirtying (`fnstsw` starts with 'f'), so it reported
  `blocked-by-fnstsw` for 7 units without ever looking at a predecessor. fnstsw READS the condition flags;
  exempting it is what made the question answerable at all.
  With the walker fixed, what actually stands between each refused fnstsw and its compare:

  | the answer | units | bytes |
  |---|---|---|
  | a compare one block upstream, **and** a 2- or 3-way join elsewhere in the same unit | 2 | 823 |
  | a compare one block upstream, **and** an `fst` elsewhere (which moves TOP, and TOP is in the status word) | 1 | 163 |
  | `fstp`, `call`, `fnclex`, or the function entry (flags from the caller) | 7 | 226 |

  The arithmetic that ends it is not in the table, it is in how a refusal works: **rise refuses a UNIT, not an
  instruction**, so clearing one fnstsw in a unit that has two blocked ones releases nothing. The three units
  with a `carry:1` in them each have a second, legitimately-blocked fnstsw, and the join/calls/entry cases are
  not over-strict at all - at a join two paths can carry different compares, a call hands the flags to someone
  else, and at the entry the flags belong to the caller. A transitive carry therefore buys **zero whole
  units** for real dataflow work, and this class is closed unless someone also wants to model the incoming
  status word at entries and a per-predecessor compare at joins, which is a different and much larger offer.
  The general thing worth keeping from it: before sizing a "class" of refusals, check whether the blockers
  inside each unit are independent - a class whose every member has two or more distinct blockers collects
  nothing no matter how many blockers you fix. Same reason the tail-jump class (27 units, 3,653 B) stayed
  declined.


- 2026-11-27 19:10 **I WAS WRONG ABOUT THE SIX UNITS, AND THE PIPELINE CAUGHT IT** [UPDATE 20:10: the pipeline later KEPT them anyway - read the 20:10 entry before taking either entry as the answer] (a correction to the
  14:05 entry, which must be read with this). That entry said the faddp rule made 0x1006d270, 0x1006d7e0,
  0x10171440, 0x10280160, 0x102d94b7 and 0x1027f000 gold, "stable 3/3 gold on all five" plus one, and that
  the harvest was queued for the next cycle's step 6. The next cycle ran. **None of the six is gold.** They
  are still `fail/memory`, exactly as before, with `src/lifted` untouched since November 16.
  It is not a lift difference either, and that is what makes it a real finding rather than a lost experiment.
  Step 6 DID lift them with the new rule - `build/cycle/rise_lifted/cow_1006d270.c` carries the two
  `cow_faddp` calls - and comparing that text with the one I had proved out-of-tree gives **byte-identical
  code** (10798 vs 10798 chars, and the same for 0x10171440, 0x10280160, 0x102d94b7). So the very same unit
  text is `gold` in my harness and `fail/memory` in the cycle's.
  The clean counts say why, and they were in front of me the whole time:
      my run      tier=gold  clean=100      <- stopped at the clean target
      the cycle   tier=fail  clean=868      <- ran deep, and found a mismatch my run never reached
  So what the rule fixed is real and was measured properly: the state-69 NaN payload on 0x1006d270, arbitrated
  three ways (bare = FAIL, destination operand = GOLD, src operand = the same FAIL). What I then did wrong was
  read "GOLD" off a run that **stopped early** and call the unit converted. These units have a SECOND defect
  further along, only visible below the clean target, and my A/B could not see it because it never got there.
  "Stable 3/3" was reproducibility of my own shallow run, not evidence about the unit - three identical
  measurements of the wrong quantity.
  The methodological rule this leaves, which is the part worth keeping:
    - **A verdict is only as deep as the run that produced it.** An out-of-tree A/B must be compared against a
      run made the way the pipeline makes it (same tree construction, same env, same chunking), not against a
      hand-built tree with `--solo` and a short fuse. My scratch trees also carried their own copy of `layout/`
      (a hazard lift_proof.py:75-95 already warns about); I distrusted my controls for exactly that reason
      earlier and did not apply the same suspicion to my WINS.
    - Before claiming a unit converts, ask for the run's `clean` and `blocks` and check they are consistent
      with a full-depth pass. `gold` beside `clean=100` while the pipeline books `clean=868` for the same text
      is the tell, and it was sitting in the data I printed.
    - The pipeline's keep-step is STRICTER than my ad-hoc harness, which is the good news: step 6 judges the
      changed lifts in bulk and deep, so a text that only passes shallow is not kept. My claim would have been
      - and was - caught without corrupting anything. The scoreboard never moved, and no wrong unit was
      published.
  What still stands from the 14:05 entry: `faddp st(i)` really does answer with the DESTINATION operand when
  both operands are NaN, the opposite of the rule layout/x87.h carried for the other two forms; the widening
  to `cow_fadd_m`/`cow_fadd_r` really was measured and did break two proven gold units on st0; and the rule is
  still the right thing to emit. What does not stand: that it converted six units. It removed one defect from
  six units that each have another one behind it. `conveyor status` stayed at 19,612 / 94.369% throughout, and
  the commit message's "five units are stable gold x3" should be read as refuted by this entry.


- 2026-11-27 19:20 THE DEEP RUN REPRODUCES IT, AND HANDS OVER THE REAL DEFECT (companion to the 19:10
  retraction). `lift_proof --deep` on the cycle's own new text for 0x1006d270 gives exactly the pipeline's
  verdict - `fail/memory clean=869 afault=1130` - where my shallow run had said `gold clean=100`. So the
  retraction is confirmed by reproduction, not by argument, and the same command is the way to check any of
  the other five.
  What the deep run also gives, which the shallow one could not: the mismatch that actually blocks the unit.
      1 mismatch(es), first at state 1614 (memory) @1061e514  A=81fff641  B=5dfff641  x2 image store=value
      A:1/ffffe281   B:1/fff6415d
  Read the two pairs together and it is not a word-wide arithmetic disagreement at all: the low three bytes
  agree (`fff641` both sides) and only the TOP byte differs, `81` against `5d` - and those same two bytes are
  the LOW byte of each side's last stored value (`...81` and `...5d`). So it is a **single-byte store whose
  computed value differs**, at 0x1061e517, hit twice (`x2`). A state 1614 of 2000: a corner the clean target
  of 100 never walks to.
  That is the shape worth noting for the rest of the class, because it says how the earlier mistake was made:
  `why=memory` on a unit whose booked `clean` is at the target is not one defect but "the first defect below
  where we stopped looking". Anyone picking up these six should start from `--deep`, read the first mismatch
  as bytes rather than words, and compare the differing byte with the low byte of each side's last store -
  which in this instance narrows a whole unit to one byte of one computation in one state.
  Not attempted this sitting: the byte itself. The rule that landed (faddp answers with the destination
  operand) stays, is still correct on its own measured evidence, and still removes the state-69 NaN defect -
  it just does not, on its own, make any of these six gold.


- 2026-11-27 19:50 THE PARKED POOL IS NOT WAITING FOR A BETTER PROMPT (measured; two of my own hypotheses
  died in the checking). The scoreboard's own line says of the parked units: "three attempts failed; waiting
  for a better prompt or judge", and `watch` was reporting `NEXT Every size has been picked through` while
  41.9 KB sat unpicked - which reads like the drafting loop gave up too early. It did not, and the note is
  pointing at the wrong machinery.
  What is actually there, from the line's own park file (`cow/conveyor/parked.tsv`, keyed by judge/prompt -
  1,675 rows, of which **313 are parked under the current key `401ff8958bf8/p1`**):
      223 units / 16,589 B   "no clean state: the original completes on no generated input"
       11 / 10 / 8 / 6       fail: memory / fault / edx / eax
  Of those 223, **76 units (9,500 B) have no unit file at all** - the line will never draft them, which is
  what "nothing left to pick" means in bytes.
  Two hypotheses, both tested against the evidence rather than argued, and both wrong:
   1. *"The park rule is freezing work it shouldn't."* Suggested itself because 81 of the 223 DO have a clean
      state recorded in their own `build/aim/pins/<entry>.txt`. But the intersection of {no unit file} and
      {has a clean pin} is **empty**: the 81 already have units (they are parked for other reasons), and the
      76 with nothing have no clean state anywhere on record. The rule is not over-freezing.
   2. *"The booking is stale, so they are frozen on evidence that no longer applies."* Checked directly: units
      whose park reason is no-clean-state, whose pins record clean states, AND whose booked verdict says
      clean=0 or why=no clean state - **0 units**. The verdicts and the pin files agree. Nothing is stale.
  What survives, and it is the useful part: for this pool the wall is that **the original itself completes on
  no generated input**. No draft can be judged for a unit whose reference side never finishes, so a better
  prompt, a different temperature, or another attempt buys exactly nothing - the judge cannot compare what did
  not run. That makes the scoreboard's "waiting for a better prompt or judge" a mis-attribution for the
  9,500 B (and for the wider 16,589 B), and it points the work somewhere else entirely: at the initial world
  the harness hands the original - registers, pointers, what callees answer - which is exactly where aim's
  `states at the entry of a unit with no clean state from it, callees answered` line already lives and is
  winning rarely. So this is a STATE-SYNTHESIS problem upstream of any unit, not a drafting problem, and the
  line's decision to stop picking is correct rather than premature.
  Worth doing next, by whoever picks this up: treat "make the original complete" as its own measurable target
  for these 76 (a pin whose side-A outcome is clean is worth more than a draft), instead of counting them as
  drafting failures. Nothing here was changed - the picker is right, so leaving it alone is the fix.


- 2026-11-27 20:10 GOLD IS SOUND AT DEPTH; THE KEEP-STEP IS WHAT IS NOT (38/38, and it changes who the six
  units are wrong about). After finding that 0x1006d270 is booked `gold` from a run that stopped at the clean
  target (`clean=100 afault=146 blocks=49/49`) while a `--deep` run of the **byte-identical text** gives
  `fail/memory clean=869 afault=1130`, mismatching at state 1614, the obvious fear was that gold itself is
  shallow - 19,079 of 21,014 booked-gold units have `clean` at the target, so the suspicion was well founded
  enough to test rather than argue.
  It is not the case. Random samples of booked-gold units, deep-run (no early stop, 2000 states): 8/8 hold,
  then 30/30 hold - **38 of 38 still gold at depth**, with clean counts from 593 to 2000. Established gold
  survives being pushed far past the threshold it was booked at, so the scoreboard is not a house of cards
  built on an early stop.
  What the finding actually indicts is narrower and more actionable: **the keep-step judges shallow.** Step 6
  re-lifts, runs the changed lifts with the booking flags, and keeps the ones that rank higher - and the
  booking flags stop at the clean target. So a *new* text can be kept, and booked gold, on a pass that never
  reaches the states where it is wrong. All nine units this cycle's step 6 kept carry the new `cow_faddp`
  rule, and at least 0x1006d270 among them fails when run deep. The established population is safe because it
  was chased to full coverage over many cycles; the intake is not screened at all.
  The fix is therefore NOT what I first thought (raising the clean target). `GOLD_CLEAN` and the flags come
  from `judge2.judge_flags`, and judge2.py is in JUDGE_FILES - changing the threshold voids all 19,621 proofs
  for a policy tweak. The cheap version lives in cycle.py, which is not a judge file: **deep-check a lift
  before keeping it** - or keep on the shallow pass and queue the newly kept ones for a `--deep` confirmation,
  demoting any that do not hold. Same information, no re-baseline, and it is the difference between "gold"
  meaning *proven* and meaning *not yet contradicted*.
  Consequences I own from this thread, in order, because the sequence is the lesson:
   1. I claimed six units converted, on a run that stopped at the clean target. Wrong, and wrong for a reason
      visible in my own printed data (`clean=100`).
   2. I retracted, correctly: the same text failed at depth.
   3. The pipeline then kept those very units anyway - so my retraction was right about the unit and wrong
      about the outcome, and the reason it was wrong is this entry's finding, not luck.
   A claim about a verdict has to name the depth it was measured at, and a keep rule has to test at the depth
   it is willing to be believed at.
