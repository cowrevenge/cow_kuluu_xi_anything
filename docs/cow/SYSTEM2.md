# SYSTEM 2: the conveyor

Brief for the conversion agent. Repository `D:\projects\ffxi_disassembly\Cow_kuluu_xi_anything`, branch `main`.
This replaces `docs/cow/LOOP.md` for machine conversion. Read all of it once, then do the phases in order.
Every command is run from the repository root.

## 0. The short version

- The loop did not stall because the conversions were bad, and not because you worked badly. It stalled
  because the judge (`cowdiff`) was wrong in both directions at once: it failed correct code and it passed
  code it had never checked. One harness bug produced the whole 136-unit cluster. Section 1 has the evidence.
- This delivery repairs the judge (judge v2) and replaces one-unit-per-turn conversion with a production
  line, `tools/cow/conveyor.py`: the local model drafts units, the judge proves them a batch at a time, only
  what is proven is kept, and the line commits by itself.
- Your job changes. You do not convert units by hand and you do not investigate individual failures. You
  install the system, run the baseline, start the line, and keep it running: read four numbers, turn five
  knobs, and improve the prompt when a pattern of failures shows what the model misunderstands.
- The number that matters is the PROVEN C line of `docs/cow/SCOREBOARD.md`. It must go up every day. The
  goal is 1% of the code bytes a day. A day at 0 is a problem to solve that same day.

## 1. What was wrong, with the evidence

### 1.1 The harness leaked the heap between its two runs (the 136-unit cluster)

For each state the harness runs side A (the original), puts the world back, runs side B (the unit), and
compares. "Puts the world back" restored the image, the arena, the stack and the TEB. It did not restore
the guest heap, and it did not restore the allocator's own bookkeeping in `runtime/portable/gwin.c`.

The cluster units register static destructors: `push <dtor>; call 0x103134c6; pop ecx; ret`. `0x103134c6`
is the C runtime's `atexit`, and the `_onexit` behind it asks `_msize(table)` and, when the table is full,
calls `realloc(table, size + 16)`. After `DllMain` the table is full. So at state 0 side A grows the table
(the reallocation's call chain pushes the return address `0x10313417`), and side B, running in the heap
side A left behind, finds room and never makes that call. One word differs:
`@00993b60 10313417/00000000`, at state 0, once.

- 133 of the 136 cluster units have exactly 1 mismatch in 2000 states, at state 0.
- Your probe was right: both sides agree on esp and the word is below the final esp. It is dead stack. The
  reason A has it and B does not is simply that A ran first.
- It is also why the batch runner booked passes that single-entry `cowdiff` then failed: a row that runs
  second in a process starts in a heap where the table has already grown.
- Reproduced on the unmodified harness with the real allocator and a mock image:
  `first at state 0 (memory) ... @00193bc0 10313417/00000000 ... store=missing A:1/10313417 B:0/00000000`.
  The same unit run second in the same process passes. A function that allocates, compared against ITSELF,
  fails. That last control (A against A) is the one that would have found this in ten minutes.

### 1.2 The judge demanded things no caller can see

It compared every stack byte below the returned esp, eax and edx of functions that return nothing, four
words above every import's return address whether or not the import takes four arguments, and it ran half
its states with the direction flag SET (no Win32 caller can do that), so a plain forward copy was "wrong".
First mismatch of the 4,081 failing lifted units: memory 1,319 (1,032 on the stack, 468 of those below the
final esp), eax 1,134 (595 where the lifted body is `void`), edx 433, fault 506 (mostly: the original
faults on a garbage pointer and the unit does not), callee-saved 239, hang 211.

This is why the lifter needed 2,400 lines of rules to replay frames and register leftovers, and why even
the hand units carry adapters that reproduce pushes "because cowdiff compares stack memory byte for byte".

### 1.3 The judge passed things it had not checked

- Of 6,466 lifted units recorded proven, 4,383 reached every instruction site. 2,083 did not; 971 reached
  less than half; 396 less than a quarter (`0x1000aab0`: 4 of 112). All were booked at 300 or 400 states.
- A site reached only on the way to a fault counted as covered.
- Shown on the mock, 2000 states each, old comparison: a unit that is wrong only behind `cmp eax, 0x1f4`
  PASSES (the branch is never reached). A unit that returns an uninitialised local PASSES (the stack page
  was zero). A unit that writes a wrong value into a freshly allocated block PASSES (only the addresses of
  such writes were compared). A float unit that ignores x87 precision control PASSES (only 53-bit mode was
  ever run; the game mostly runs in 24-bit).

### 1.4 The honest size of the work

21,038 functions (thunks excluded, at most 32 KB each), 3,140,766 code bytes. 9,909 of them, 83% of the
bytes, have no unit of any kind. The lifted units cover 16.8% of the bytes; the ones recorded proven, 6.9%;
recorded proven AND fully covered, 2.8%. Readable hand units: 32. Most of the program has not been touched,
and the functions that hold most of the bytes are the ones between 128 and 2048 bytes long.

### 1.5 Process

A full day went into theories about the 394 before an A-against-A control was tried. The loop halted on
failing units. The rule "report, do not un-prove" (which came from the previous brief, and was wrong) left
the records saying one thing and the judge another. All three are fixed by rule below, not by effort.

## 2. Rules

Standing rules, unchanged:

1. Never touch the SG.GS network. Never write into `C:\PhoenixXI`. Never commit game files or generated C.
   Never launch the game, Docker or LSB. No registry writes.
2. Git: one branch (`main`), fast-forward pushes only, through `tools/cow/commit.py`. No reset, stash,
   rebase, force-push, or branch switching.

New rules:

3. **The judge's verdict is the record.** A unit that is not gold is not proven, and its record says so by
   itself. Nothing is "reported instead of un-proved", and nothing halts because units fail.
4. **The judge is frozen.** `tools/cow/cowdiff.c`, `tools/cow/cowdiff_batch.h`, `tools/cow/judge2.py`,
   `runtime/guest.h`, `runtime/portable/gwin.c`, `cow/retuse.json`. Do not edit them. Each edit changes the
   judge id, which voids every recorded proof and costs a full baseline. If you think the judge is wrong:
   two lines in the journal with one entry and its verdict line, park the units, carry on.
5. **The lifter is frozen.** `lift.py --apply` is not run again. The conveyor owns `src/lifted` from now on.
6. **No new tools.** `tools/cow/ghidra` holds 143 scripts. You may edit exactly two things: the prompt text
   in `tools/cow/conveyor.py` (section 8.3) and `cow/conveyor/config.json` (section 8.2).
7. **45 minutes.** No single problem gets more. Then one journal line, park it, move on. A unit is never
   worth an hour: there are twenty thousand.
8. **Ten lines a day** in `cow/conveyor/journal.md`. Nothing else is written down. Commit subjects stay
   under 100 characters and have no body.
9. **A claim needs a before and an after** on a named entry. A cause without an exemplar that flips is a guess.
10. **Stop-the-line events. These five, and only these:**
    (a) `judge_selftest/run.py` builds and reports a wrong row, or a `--selftest` fails;
    (b) `conveyor.py recheck` prints `JUDGE UNSTABLE`;
    (c) `conveyor.py audit` reports a kill rate under 90%;
    (d) the line stops with `PROVER BROKEN`;
    (e) gold per batch stays under its gate after the prompt changes allowed for it: the pilot after
        three (section 7), or a whole day under 4 gold per batch after two (section 8.2).
    On a stop: `python tools/cow/conveyor.py stop`, write the exact output in the journal, tell the USER in
    at most ten lines, and wait. Do not repair the judge yourself.
11. The hand loop (`loopy next`, `loopy submit`, `reverify.py`) is paused. Do not run it.
12. When the line is running and the numbers are fine, there is nothing to do. Idle is correct. Do not fill
    the time with investigations.

## 3. What is in the delivery

`$HOME\Downloads\System2.zip` holds `SYSTEM2.md` (this file), `install-system2.ps1`, `system2.patch`, and
`files\` (every file of the patch in full, for reference). The patch was made against commit `acf11bf7`.

| file | what it is |
| --- | --- |
| `tools/cow/cowdiff.c`, `cowdiff_batch.h` | judge v2: the world fix, the contract comparison, clean-state counting, the richer states, `--self`, failing inputs printed |
| `runtime/portable/gwin.c`, `gwin.h` | save and restore of the heap pages and the allocator's bookkeeping |
| `tools/cow/judge2.py` | what a verdict means: flags, contract, tiers, the record, the retuse table |
| `tools/cow/ghidra/lift_proof.py` | the batch prover, now judge v2 by default; two provers can run at once |
| `tools/cow/cowdiff.py` | single entry: `--judge 2`, `--self` |
| `tools/cow/conveyor.py` | the production line |
| `layout/cow_call.h` | how a unit calls guest code (`cow_cdecl`, `cow_stdcall`, `cow_thiscall`, ...) |
| `tools/cow/judge_selftest/` | 29 mock unit pairs with the one correct verdict for each |
| `tools/cow/commit.py`, `status.py`, `ghidra/lift.py` | small guards: unit files travel with their verdict; the README shows the scoreboard; the lifter cannot overwrite a conveyor unit |

Everything was built and tested on Linux against a mock image. **None of it has run on this machine, with
MSVC, or against the real image.** Phase 1 is where that happens, and its checks are there for that reason.

**If the patch does not apply** (the install script says so and changes nothing): `git apply --check` names
the file. If it is `commit.py`, `cowdiff.py`, `lift.py`, `lift_proof.py` or `status.py`: apply the rest with
`git apply --exclude=<that file> "$HOME\Downloads\System2\system2.patch"`, then port that file's hunks by
hand from `files\<path>` (they are marked `SYSTEM 2`, `judge2` or `JUDGE`). If it is `cowdiff.c`,
`cowdiff_batch.h`, `gwin.c` or `gwin.h`: do not merge by hand. Stop and report
`git log --oneline acf11bf7..HEAD -- <file>`.

## 4. Phase 0: retire the old loop (10 minutes)

```powershell
git mv cow/reverify.json cow/wip/reverify-legacy-judge.json
python tools/cow/loopy/loopy.py clear --because "System 2: judge v2 replaces the legacy re-verify"
```

Add one line at the top of `docs/cow/LOOP.md`:
`> PAUSED. Machine conversion is run by docs/cow/SYSTEM2.md. The hand loop below is not in use.`

The 394 are not investigated further. Phase 2 judges every unit again and the old list stops mattering.

## 5. Phase 1: install judge v2 and prove it on the real image (about 2 hours)

One exception to rule 4, valid until the end of step 5 only: if `cowdiff.c` or `gwin.c` does not COMPILE
with MSVC, that is a porting slip in the delivery (it was compiled with gcc), not a decision of the judge.
Fix the syntax and nothing else (a declaration, a cast, a missing include), change nothing about what is
compared or generated, and write the exact change in the journal.

**Step 1. Install.**

```powershell
Expand-Archive "$HOME\Downloads\System2.zip" "$HOME\Downloads\System2" -Force
powershell -ExecutionPolicy Bypass -File "$HOME\Downloads\System2\install-system2.ps1"
```

It must end with `judge2 selftest: 52 passed, 0 failed`, `conveyor selftest: 25 passed, 0 failed`,
`judge id: 8d58abb5a6fe` and `INSTALLED`. A different judge id means a judge file differs from what was
shipped: stop and report.

**Step 2. The judge, judged.**

```powershell
python tools/cow/judge_selftest/run.py
```

Expected: `LEGACY 16 row(s) checked, 0 wrong`, `V2 29 row(s) checked, 0 wrong`, `SELF 29 row(s) checked,
0 wrong`, `JUDGE SELFTEST OK`. Read `run.py` once: each row is one decision of the judge with its reason.
- `THE MOCK DID NOT BUILD`: that is the test rig (it links `plat_win.c`, which may want symbols the mock
  does not stub). Twenty minutes to add the missing stubs at the top of `judge_selftest/mock.c`, which is
  not a judge file. Not solved in twenty minutes: one journal line, go to step 3.
- It builds and a row is wrong: rule 10(a).

**Step 3. The world fix on the real image, with the OLD command line.**

```powershell
python tools/cow/cowdiff.py 0x10010350
python tools/cow/cowdiff.py 0x100298d0
python tools/cow/cowdiff.py 0x100298f0
python tools/cow/cowdiff.py 0x10029930
```

Before, each printed `COWDIFF FAIL ... 1 mismatch(es), first at state 0 (memory) ... @00993b60
10313417/00000000`. Now at least three of the four must print `COWDIFF PASS ... grade=exact judge=1`.
No new flag is involved: this is the same comparison as before, in a world that is put back properly.
If all four still fail at state 0 with `10313417/00000000`, the fix did not take on this machine: run
`python tools/cow/cowdiff.py 0x10010350 --self`, and report both outputs (rule 10).

**Step 4. The control that was missing.**

```powershell
python tools/cow/cowdiff.py 0x10010350 --self
```

`--self` runs the original against itself and must PASS. Whenever a failure looks like the harness, this is
the first thing to run, before any theory.

**Step 5. The retuse table** (who reads whose return registers; built once from the Ghidra dump).

```powershell
python tools/cow/judge2.py --retuse D:/projects/ghidra/ghidra_out/functions_all.jsonl
```

Expected: `RETUSE OK: <n> functions -> cow\retuse.json` and two lines of counts. Copy the three lines into
the journal. `RETUSE FAIL` means the path is not the dump `lift.py` reads (`COW_LIFT_DUMP`). From this
moment the judge is complete and rule 4 applies. Note the new id: `python tools/cow/judge2.py --judge-id`.
Then look at one unit under the full judge; the first line it prints is the contract it is judged under:

```powershell
python tools/cow/cowdiff.py 0x10010350 --judge 2
```

**Step 6. Forty units under judge v2.**

```powershell
New-Item -ItemType Directory -Force build | Out-Null
python -c "import json; d=json.load(open('cow/wip/reverify-legacy-judge.json')); f=[x['unit'][2:] for x in d['failed'] if x['track']=='lift'][:20]; p=json.load(open('cow/lift_proof_all.json')); g=[k for k in sorted(p) if p[k].get('pass')][:20]; open('build/j6.txt','w').write('\n'.join(f+g)+'\n')"
python tools/cow/ghidra/lift_proof.py --list build/j6.txt --out build/j6.json --rerun
```

The first run recompiles the allocator and relinks: allow 10 to 20 minutes. It ends with a
`TIERS gold .. silver .. weak .. fail ..` line and `LIFT PROOF ...`. Put the TIERS line and
the wall time in the journal. There is no pass mark for the counts. Stop only if every row is `error` or
`nocompile`, or the run takes more than 30 minutes: treat either as rule 10(d).

**Step 7. Commit.** Two commits, because `commit.py` keeps tools and units apart:

```powershell
python tools/cow/commit.py --machinery --subject "cow: machinery - judge v2 and the conveyor (docs/cow/SYSTEM2.md)"
python tools/cow/commit.py --subject "cow: System 2 - call helpers, retuse table, legacy re-verify archived"
```

## 6. Phase 2: the honest baseline (runs by itself, several hours)

Every unit in `src/lifted` is judged again by judge v2. Start it detached and leave it:

```powershell
Start-Process python -ArgumentList 'tools/cow/ghidra/lift_proof.py','--out','cow/lift_proof_all.json' -WorkingDirectory (Get-Location) -WindowStyle Hidden -RedirectStandardOutput build\baseline.out -RedirectStandardError build\baseline.err
Get-Content build\baseline.out -Tail 3      # to look in on it
```

It first syntax-checks every file (`syntax: n/N files` lines), then prints one line per chunk of 400 units
and saves after each. If it dies, run the same command again: it skips what this judge has already graded.
**Go straight on to Phase 3 while it runs**: the conveyor uses its own build directory, and both write the
ledger entry by entry, so the two do not collide. A prover run of your OWN while either is running needs
its own directory too, or the two overwrite each other's files: in that shell, first
`$env:COW_LIFT_BUILD='build\lift_hand'; $env:COW_LIFT_TAG='h'`.

When `baseline.out` ends with `LIFT PROOF ...`:

```powershell
python tools/cow/conveyor.py status
python tools/cow/commit.py --subject "cow: judge v2 baseline - <gold> gold of <total> lifted units, <x>% of code bytes"
```

The number will not be the old 6,400. Many old failures become gold, because what they failed on is no
longer compared. Many old passes become silver or weak, because they never reached all their instructions.
Do not explain the difference and do not try to move it. It is the first number that is true, and it is the
starting line.

## 7. Phase 3: the conveyor

**What it does.** For each function: the prompt holds the original's instructions (the recompiler's own
listing, the ground truth), Ghidra's C, what every callee's convention is, and the exact contract line. The
model answers with one C function and a three-line adapter. A batch of 40 is proven in a scratch tree. Gold
units move into `src/lifted` with their record. A unit that fails goes back to the model with the judge's
verdict in words (what differs, both values, and the inputs of the failing state), up to three rounds, and is
then parked in `cow/conveyor/parked.tsv`. A draft that agrees with the original but that the judge cannot
fully cover is kept as silver or weak and counts for nothing. Nothing a model writes is trusted: a unit
exists in the tree because the judge proved it, and for no other reason.

**Step 1. The model answers.**

```powershell
python tools/cow/conveyor.py llm-check
```

Expected: `LLM OK: model <name> answered 'READY' in <n>s ... key sent`. The key is read from Goose's own
provider file. If it prints `key NOT FOUND` and the server refuses: set `$env:COW_LLM_KEY` in the shell that
starts the line. Never write the key into the repository, the journal, or a commit.

**Step 2. Three units, in full view** (15 minutes; this checks the wiring, not the units).

```powershell
python tools/cow/conveyor.py pick --n 10
python tools/cow/conveyor.py one 0x<an entry from the list> --show
```

Read the prompt once, so you know what the model sees. Then the reply, then the verdict. Do it for three
entries. What must be true: the reply is C in the stated shape, it compiles, and a verdict comes back in
words. If every verdict is `IT DOES NOT COMPILE` with the same error, that is one fix (an include path, or
one sentence of the prompt), not three problems. If the prompt has no `THE DECOMPILER'S READING` section,
the dump path is wrong: set `$env:COW_LIFT_DUMP`.

**Step 3. The pilot: one batch in the foreground.**

```powershell
python tools/cow/conveyor.py run --batches 1
```

**Gate: at least 8 gold of the 40.**
- 8 or more: step 4.
- Fewer: open the verdicts of the ten smallest failures (`build\conveyor\<batch>\log\<hex>.r1.txt`, at the
  end of each file) and group them by the judge's first sentence: RETURN VALUE, MEMORY, STACK POINTER, DOES
  NOT COMPILE, FAULTS, CALLS. The largest group is what the model misunderstands. Fix that one thing in the
  prompt (section 8.3) and run the pilot again. Three tries. Still under 8: rule 10(e), and report the
  group counts with three example logs.

**Step 4. Start the line.**

```powershell
Start-Process python -ArgumentList 'tools/cow/conveyor.py','run','--hours','168' -WorkingDirectory (Get-Location) -WindowStyle Hidden -RedirectStandardOutput build\conveyor\run.out -RedirectStandardError build\conveyor\run.err
```

It survives Goose stopping, waits when the model server is busy or restarting, commits every 30 minutes
when it has new gold, and ends on `python tools/cow/conveyor.py stop`. It re-reads its config every batch;
a prompt edit needs a stop and a start.

Two minutes later `Get-Content build\conveyor\conveyor.log -Tail 2` must show a `conveyor start` line and
the log must keep growing. If the process died when your command returned, the shell tool ends its children:
start the line outside that process tree instead (the same works for the baseline in section 6):

```powershell
Invoke-CimMethod -ClassName Win32_Process -MethodName Create -Arguments @{ CommandLine = 'cmd /c python tools/cow/conveyor.py run --hours 168 > build\conveyor\run.out 2>&1'; CurrentDirectory = (Get-Location).Path }
```

A process started that way does not see variables set in your shell. If you needed `COW_LLM_KEY` or
`COW_LIFT_DUMP`, put them in `build\conveyor\env.json` (`{"COW_LIFT_DUMP": "D:/..."}`): `build\` is never
committed.

## 8. Every day

### 8.1 The check (five minutes; then `Start-Sleep -Seconds 900` and check again)

```powershell
Get-Content build\conveyor\conveyor.log -Tail 6
python tools/cow/conveyor.py status
```

Four numbers: **gold per batch** (the `+N gold of 40 picked` lines), **the PROVEN C percentage** and its
change since yesterday, **seconds per reply**, and **how old the last log line is**. A log silent for more
than 45 minutes: read `build\conveyor\heartbeat.json`; if its `at` is old, the process is gone or stuck in
the prover (`build\conveyor\<batch>\prove.log`): stop it and start it again.

### 8.2 The five knobs (`cow/conveyor/config.json`; create it with only the keys you change)

| key | start | change it when |
| --- | --- | --- |
| `size_max` | 128 | `pick --n 40` returns fewer than 40, or five batches in a row gave under 4 gold: go to the next of 256, 512, 1024, 2048, 4096. Never down. |
| `parallel` | 1 | on day one try 2, then 4. Keep the value with the most attempts per hour. |
| `clean_share` | 0 | set 0.25 after the first day that brought 300 gold. It rewrites gold machine lifts as readable C, kept only if gold again. |
| `allow_x87` | false | set true after three days of steady numbers. If gold per batch halves, set it back and write one line. |
| `rounds` | 3 | leave it. |

A whole day under 4 gold per batch, at whatever size, is that day's problem: read ten verdicts, find the
largest group, fix the prompt (8.3). If two prompt changes do not move it, that is rule 10(e).

### 8.3 The prompt is yours to improve

This is the one place where thinking pays, because a sentence that prevents a common mistake raises the
yield of every batch after it. `SYSTEM`, `EXAMPLE`, `COMPARES` and the wording in `build_prompt`, in
`tools/cow/conveyor.py`.

- Evidence first: at least five failures with the same judge sentence and the same cause, read in their
  `log\<hex>.rN.txt`.
- One change at a time. Bump `PROMPT_VERSION` (`p2`, `p3`, ...): parked units become eligible again.
  Stop the line, start the line.
- Measure: gold per batch over the next three batches against the previous three. Keep it if it is not
  worse. Revert it if it is. One journal line either way.
- At most two prompt changes a day.
- Never tell the model how to satisfy the judge on particular inputs, and never soften a rule about memory
  or calls. The prompt explains the original program better. It does not explain the judge away.

### 8.4 Once a day: is the judge still a judge (20 minutes)

```powershell
python tools/cow/conveyor.py stop
python tools/cow/conveyor.py recheck --n 200
python tools/cow/conveyor.py audit --n 30
```

Wait for `conveyor end` in the log after the stop (it ends between two replies, within a few minutes), and
start the line again afterwards (section 7, step 4). `recheck` proves 200 gold units again: the same file under
the same judge must get the same verdict. `audit` breaks 30 gold units on purpose in four ways and requires
the judge to notice. `JUDGE UNSTABLE` is rule 10(b). A kill rate under 90% is rule 10(c). Survivors are
listed in `cow/conveyor/audit.json`.

### 8.5 The journal

`cow/conveyor/journal.md`, one block a day, at most ten lines: the date; gold functions, bytes and percent
from `status`; the change since yesterday; batches, attempts, gold per batch; knobs changed; prompt
version; the three largest parked reasons with counts; anything stopped. The line's next commit carries it.

### 8.6 Commits

The line commits its own work (`cow: conveyor +N gold ...`). You commit only a prompt change:
`python tools/cow/commit.py --machinery --subject "cow: machinery - conveyor prompt p3: <what>"`.
`commit.py` now refuses a unit file under `src/lifted` that has no verdict of the current judge for the file
as it is. That is deliberate: never edit a unit by hand after it was judged.

## 9. Reference: what judge v2 compares

Every state: side A, world restored (image, arena, stack, TEB, **every heap page, the allocator's
bookkeeping**), side B, compare.

| compared | not compared |
| --- | --- |
| eax and edx, as far as a caller can see them (the contract, below) | bits of eax/edx that no caller reads |
| ebx, esi, edi, ebp, and esp after return | stack memory below the returned esp |
| the direction flag and the x87 control word on return | the unit's own argument slots (declared by `stack_args`) |
| st(0) and the x87 stack depth (two NaNs are equal) | what the original leaves on states where the ORIGINAL faults |
| every byte of live memory, including blocks allocated during the call | junk above an import's real arguments |
| every call to an imported function: which, in what order, how many arguments, their values | |
| a fault in the unit where the original does not fault | |

**The contract.** A register is ignored only when all three hold: Ghidra's own signature says the bits are
not part of the result (`void`, a byte, a word, not 64-bit); at least one direct caller exists; and no
direct caller reads more (Ghidra shows such a read as `extraout_EAX` or `extraout_var`). Otherwise it is
compared in full, as before. A unit's `COW_CONTRACT` line can only make its contract stricter.
`python tools/cow/judge2.py --explain 0x<entry>` prints the contract of one function and the reason.

**The states.** Up to 2000 a row. The arena and the caller's frame are refilled per state; dead stack holds
rubbish, not zeros; the constants a function compares against, and the fields it reads them from, are taken
from its own instructions and planted in its inputs; the direction flag is clear on entry; half the states
run the x87 in 24-bit precision.

**The tiers.** `gold`: PASS, at least 100 states completed cleanly on both sides, and every instruction of
the original reached in such a state. Only gold is called proven, and `"pass": true` in
`cow/lift_proof_all.json` now means gold and nothing else. `silver`: PASS with at least 30 clean states and
70% of the instructions. `weak`: PASS with less. `fail`: a mismatch. `noisy`: the harness disagrees with
itself on that function (`--self` fails), so its failure says nothing about the unit. `nocompile`, `hang`,
`timeout`, `error` (the machinery did not answer): as named.

**The record.** Each entry names the file (`src`, a sha1) and the judge (`judge`, the id) it is valid for.
Change either and the record is void: the unit shows as `stale` until it is proven again. A baseline run
without `--rerun` re-proves exactly the stale ones.

**A FAIL line** now ends with what the state started from: `in=eax:..,ecx:..,...` and `args=..` (the first
stack words). `python tools/cow/conveyor.py one 0x<entry> --show` turns it into sentences.

**Where things live.**

| path | what | committed |
| --- | --- | --- |
| `cow/lift_proof_all.json` | the ledger: one record per unit | yes |
| `cow/retuse.json` | who reads whose return registers (a judge file) | yes |
| `docs/cow/SCOREBOARD.md`, `cow/conveyor/daily.tsv` | the scoreboard and its day-by-day line | yes |
| `cow/conveyor/config.json`, `parked.tsv`, `journal.md`, `audit.json` | knobs, parked units, the journal, the last audit | yes |
| `cow/conveyor/attempts/` | what was tried per unit | no (the repository ignores `attempts/`) |
| `build/conveyor/` | `conveyor.log`, `heartbeat.json`, and per batch `log/<hex>.rN.txt` (prompt, reply) and `prove.log` | no |

## 10. Known limits. Park them; do not investigate them.

- **No direct caller** (virtual methods, callbacks): eax and edx are compared in full, leftovers included.
  Many of these will be parked. Expected.
- **Silver and weak**: the judge could not reach every instruction, usually because a branch needs data the
  generator did not produce. Rewriting the unit cannot change that. They are kept and counted separately.
- **Noisy**: something outside guest memory is not restored between the two runs (a host handle table, for
  example). Parked by the line itself.
- **More than 4096 words written to freshly allocated memory** in one call: reported as `out-of-region
  overflow`. Parked.
- **Floats**: a unit must apply `fr(g, x)` to every x87 result, as the original does, or it fails in the
  24-bit states. Two different NaNs stored to memory still count as a difference.
- **ecx after a call** was never compared and still is not.
- Each unit is proven against the ORIGINAL versions of whatever it calls, one unit at a time. Nothing in
  the running program uses these units yet. That is section 11.

## 11. Later, and only on the USER's word: putting proven units into the program

Proven units are not wired in. `recomp.py --wraps` takes its list on the command line, and the 975 wraps of
today already fill most of what a command line can hold, so thousands more need a wraps file, which is an
edit to the recompiler's interface. After that: `genwraps.py` learns to register gold units, with
`COW_NO_WRAPS=1` to turn them all off and `COW_WRAPS_ONLY=<file>` to bisect, and
`cowdiff.exe --boot-digest` (already in this delivery) prints one line for `DllMain` (every import call
hashed, memory hashed) that must be the same with the units in and out. Do not start this. When the line
has run for some days, the USER decides.

## 12. Reporting to the USER

When asked, and at each stop: at most ten lines. Proven functions, bytes and percent, and the change since
yesterday, all read from `docs/cow/SCOREBOARD.md` and never from memory. Gold per batch. What you changed
(knobs, prompt version). The largest parked reasons. Anything stopped, with the exact line. No theories.
