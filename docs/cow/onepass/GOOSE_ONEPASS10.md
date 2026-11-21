# GOOSE brief: OnePass10, the last 20% (silver, weak, no unit)

You are working on cow_kuluu_xi_anything on the user's Windows machine. Read this whole brief before you
touch anything. Commit it to the repo as `docs/cow/onepass/GOOSE_ONEPASS10.md` with your first machinery
commit.

## 0. Hard rules (no exceptions)

- Repo: `D:\Projects\ffxi_disassembly\Cow_kuluu_xi_anything`, branch `main`, ff-only. That checkout is the
  system of record. Never reset, stash, rebase, force-push, switch branches or create side branches. Never
  delete files you did not create.
- NOTHING runs on or writes to C:. All builds, provers, temp files, judge states and scratch go under
  `build\` inside the repo. No `%TEMP%` / `$env:TEMP`. The only things in `$HOME\Downloads` are drop zips and
  log zips.
- Never touch the SG.GS network. Never write to `C:\PhoenixXI`, never launch the game, Docker, LSB, or touch
  the registry. Behaviour is settled by reading code, never in-game.
- Never use the user's name in anything you write. Write "the user".
- No em dashes or en dashes anywhere (code comments, commits, docs).
- Surgical root-cause fixes only. No workarounds, no reverts as a fix, no "improving" things this brief does
  not ask for. If a fix needs something outside its scope, stop and write down why in WORKLOG.
- No throwaway probe experiments. Reproducing a listed failing unit with its saved states (section 3) is
  the work, not a probe. Once you have the cause, fix it.
- Judge files (`judge2.JUDGE_FILES`: cowdiff.c, cowdiff_batch.h, judge2.py, runtime/guest.h, simd.h, gwin.c,
  cow/retuse.json, cowdiff.py, judge_import_pops.h, kobj.c, k32_io.c, k32.c ...) change the judge id and
  force a full re-judge of 20,684 units (about 40 min, then a regold). Batch EVERY judge-file change into ONE
  change set, gate it, and re-judge once. Never change judge files twice in a pass.
- Commits go through `tools/cow/commit.py` (machinery commits with `--machinery`). Every commit message ends
  with:
  ```
  Co-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>
  Claude-Session: https://claude.ai/code/session_01J6eZ7iJxTe881askLpos1Y
  ```
- Push finished work to GitHub `cowrevenge/cow_kuluu_xi_anything` (fast-forward only) so the repo never
  falls behind the machine.
- Don't go quiet. After each step, write one short status line in `docs/cow/onepass/WORKLOG.md` and in
  your reply: what changed, the numbers, what's next.

## 1. Where it stands (from the 2026-11-22 log pull, HEAD 989ebaec1)

- 18,962 gold, 79.944% of code bytes. Judge `15c934038e44`. 1,101 functions are not gold (19.86%).
- WHY.md: silver 435 fns 11.33% (+37 fns 0.35% with all blocks reached but too few clean states), weak 66
  fns 2.66%, no unit / parked about 4.6%, fail about 0.7%.
- 205 silver units miss 5 sites or fewer, 345 miss 20 or fewer (6.7% of code). Silver is close, it is NOT
  the hard part.
- The line is STOPPED: `cow: line stopped by its judge check` (see 2.2).

## 2. Proven bugs. Fix these first, in this order (none are judge files)

### 2.1 aim.py: OnePass9 broke the aim. It aimed at almost nothing. (THE big one, 11.36% of code)

Evidence: OnePass9 drop log, step 7: `aim round 1: 812 units`, only 361 aimed, `aim round 2: 18 units (794
left aside: stopped moving)`. In `build\aim`: 387 silver/weak units (11.36% of code) HAVE a site list in
`build\aim\sites` but were never put in `seek_list.txt`.

Cause: OnePass9 item 7 added `tools_sha` (sha of seek.py + rise.py) to `aim.key(e)`, so the key now has 5
fields. That same key is also compared with the site-list header, and
`tools/cow/ghidra/lift_proof.py: sites_key()` writes that header with 4 fields
(`jid/unit sha/seeds_auto sha/seeds sha`). So `site_list(e)[0] == key(e)` is never true:
- every round re-runs the census on every unit,
- `aimed` only keeps `fresh_only` units,
- every other unit gets `stall=STALL_ROUNDS` under the new key ("gold now, a FAIL, or every site reached"
  branch), and round 2 leaves them aside.

Fix (aim.py only):
- Split the two keys. `states_key(e)` = exactly lift_proof's 4-field `sites_key` (use the same function, or
  call it, don't copy it). Compare site lists with `states_key`. The memo/stall key stays
  `states_key + tools_sha`.
- Add aim.py's own sha to `tools_sha` (aim.py is part of what a round runs). That also releases the units
  wrongly stalled in `build\aim\state.json` by the broken pass, without hand-editing the memo.
- Add a selftest to aim.py that writes a site list through lift_proof's `write_sites` and checks that
  `site_list()` matches `states_key()`. This bug must not come back silently.

Acceptance: a dry aim census on the current tree puts the 387 units back into `aimed`.

### 2.2 conveyor.py recheck: a false "JUDGE UNSTABLE" stopped the line and demoted 5 golds

Evidence: `build\conveyor\conveyor.log` 2026-11-21 00:19: `RECHECK JUDGE UNSTABLE: 5 of 200 ... (2.5%)`,
then `JUDGE CHECK FAILED: the line is stopping`. The 5 units (`build\conveyor\recheck\proof_alone.json`):
102442f0, 1025d690, 10286620, 102da371, 102e2877. All five are `verdict: pass` with no mismatch. Only
coverage dropped (192/195, 39/48, 75/84, 397/415, 76/84) because the recheck re-proved them at about 2,000
states. 102442f0 took 40,000 states to go gold (`build\cycle\regold_extra.json`: `[40000, 4]`).

Cause: `conveyor.recheck()` re-proves at the default depth, not the depth the gold was earned at. Then it
writes the lower tier into the ledger ("the record is whatever the judge says now"). `cycle.regold()`
already knows the rule, "a new judge does not take gold away by spending less", but recheck does not
follow it.

Fix (conveyor.py only):
- Recheck each sampled unit at the depth its record says (`rec["depth"]`, `"N states, B times"`, and
  `regold_extra.json` as cycle.regold_snapshot reads it), with the same pinned states the record was
  proven with.
- Only a changed COMPARISON verdict (pass to fail, or a different mismatch) counts toward UNSTABLE. A lower
  tier with `verdict: pass` at the same depth is a real coverage change: report it separately, don't
  stop the line for it.
- For the three units with no depth on record (1025d690, 10286620, 102da371), find out what states made them
  gold: compare the ledger record's `states`, `clean`, `src` and the seeds sha with the recheck run. If the
  same file, same states and same judge really give a different tier, that IS instability. Then say so in
  WORKLOG with the two records side by side.
- Re-prove the 5 units at their real depth and write the true verdicts back to the ledger.
- Add a selftest case: a gold-at-40000 unit that comes back silver at 2000 is not UNSTABLE.

Acceptance: `python tools/cow/conveyor.py check` passes. The line can be started again.

### 2.3 aim.py: one bad state throws away every new state for the unit

Evidence: OnePass9 aim round 1 judged 353 units and 294 of them FAILed, so every try for those units was
dropped (step 4: a `fail` tier never ranks higher). `build\aim\fails.txt` + `build\aim\seeds_fail\`
hold them. 101 of those are silver/weak units (1.71% of code).

Fix (aim.py only): when a try comes back FAIL, the judge reports `first_state`. States `< n_pins` are the
pinned ones, in the order of the merged json. Drop that state, judge the rest again, and repeat up to 8
times or until the try passes. Keep the passing remainder by the normal rank rule. Every dropped state goes
to `build\aim\seeds_fail\<entry>.json` with its why, for the lifter. If the failing state is a fuzzed one
(`>= n_pins`), the FAIL belongs to the unit (a real lift difference): keep today's behaviour.

### 2.4 why_table.py: "seek made a state for it; the judge's run went elsewhere" is a lie

Evidence: 23,970 of 26,720 missed sites (90%) carry that label. It is only the fallback for "seek's
why.json has no reason for this block". In OnePass9 most of those units were never aimed at all (2.1).

Fix: aim writes a per-unit outcome file each round (`build\aim\outcome\<entry>.json`): aimed or not and why,
seek states made, seek error, try verdict, states dropped as FAIL (index + why), kept or not. why_table reads
it and names the real reason: "not aimed: <why>", "seek gave no states: <error>", "aimed states FAILed at
state N: <why>", "new states never ran: row budget". Keep "went elsewhere" ONLY for a kept state that was
built to reach the site and didn't reach it in the judge's run.

## 3. Real work: needs reproducing on this machine (judge-file changes go in ONE batch)

Use the saved states in `build\aim\seeds_fail\<entry>.json` and run the unit alone through the judge (the
same lift_proof path aim uses, `--solo`, `COWDIFF_TRACE_STATE=N` for the failing state). That is the
reproduction. Then fix the cause.

### 3.1 A few pinned block-entry states make EVERY fuzzed state fault on side A ("no clean state" on silver units)

Evidence: 12 silver units FAIL the try with `no clean state`, `clean=0 afault=2002..2006`, for example
102c5c44 (494 clean before, blocks 194/195), 10038520, 10142940, 102c5423, 10244c30, 102ef474. Their try
holds only 2 to 6 new pinned states ("aim: starts at block X", args 0, optional regs as heap objects).
Without them, the same 2,000 fuzzed states (seeds are per index, judge 15) gave hundreds of clean states.
So something a pinned block-entry state does leaks into every state after it. Since afault is side A, the
lift has nothing to do with it.

Read first in cowdiff.c `run_entry`: the REPAIR queue (a repair child copies its parent `me`, including
`me.pin`; "repairs take every state until the row has its first clean one"), the corpus parents carrying
`me.pin`, `entry_arm` / `entry_fix_side`, and what `snap_restore` does not put back after an entry-fix side
that faulted. Find the exact leak, fix it at its root, and add a cowdiff selftest: a row with a faulting
block-entry pin first must still get the clean states it gets without the pin.

### 3.2 Side B faults where side A doesn't on aimed states (silver/weak `fault` FAILs, about 35 units)

Evidence (fails.txt): `fault 0/-1073741819 @00000000`, B's esp well below A's (B faulted deeper), for
example 102ab880, 10270860, 10263900, 10303b89, 10317c51, 102bca0a. Reproduce each with its seeds_fail
state. For each one, decide from the code whether:
(a) it's a real lift difference: fix it in rise.py (relift) so the unit is right on every path, or
(b) the state is not a world the original could see. Then the seek model is wrong (see 3.3). Fix seek,
not the judge.

### 3.3 seek's model after a call doesn't match the harness

After a call, `seek.py` turns ecx/edx into free atoms (`clob_<addr>_ecx/edx`) and lets the solver pick any
value. But the harness's pinned answer (`cow_answer_stub` in cowdiff.c) only sets eax: ecx and edx keep
the values they had before the call. On a path that reads ecx/edx after a stubbed call (for example
0x10022190 reads `eax+edx+0xa` after 0x10022170), seek builds a state that the judge then runs down another
path. Fix in seek.py: after a call the harness answers with a pinned stub, ecx/edx = their values before
the call. After a call whose real body runs, a branch on them is "blocked: a branch on what <callee> left in
ecx/edx" (a real reason in why.json), not a made-up state.

### 3.4 memory / call args / edx / callee-saved / st0 FAILs on aimed states (silver/weak, about 40 units)

These are real lift differences until shown otherwise. Same loop: reproduce with seeds_fail, read the
original vs the lift at the first differing store or call, fix rise.py at the root, relift, gate.
Known single units from earlier passes: 0x1017de20 (B frame slot off), 0x1003db60 (frame word read off),
0x100cbde0 (x87 top off by one after vtable calls), 0x10171930 (lift spins in a float loop on one
state), 0x10311ef0 (sites inside a strchr tail: seek can't follow tail jumps).

### 3.5 Original code that hangs in a register-only loop

0x10281830 (log2 loop via 0x10281700), 0x10247960: side A has no tick, so nothing bounds the row. A
timer/thread watchdog in cowdiff.c (in the same judge batch as 3.1).

## 4. Order of work

1. 2.1, 2.2, 2.3, 2.4 (aim.py, conveyor.py, why_table.py: no re-judge). Selftests pass, machinery commit,
   push, WORKLOG line.
2. Run the cycle (`tools/cow/cycle.py`). Report after the aim: units aimed, states made, tries FAILed,
   states dropped, new gold, the new %. Expect the silver bucket to move a lot now that it is actually
   aimed.
3. 3.3 and the rise fixes from 3.2/3.4 (seek.py / rise.py: no re-judge). Commit, cycle, report.
4. 3.1 + 3.5 together as the ONE judge-file batch. Run the judge selftests and `gate.ps1` on a sample,
   re-judge once, regold, cycle, report.
5. Then the no-unit lane, by WHY.md bytes: judge memory (34 fns 1.11%), not judged (7, 0.63%), no clean
   state (25 + 114 parked), fault, st0, and the rise refusals (esp set to a non-frame value, ret/tail jump
   with esp off, variable stack probe, fnstsw without a compare, irreducible).
6. Restart the line (`conveyor.py start`) once the judge check passes.

## 5. Finish line

90% is a checkpoint, not a stop. The goal is 100%: every function gold (judge PASS, at least 100 clean
states, every instruction site reached) AND named, typed and moved out of `src/lifted` into
`src/<subsystem>`, each still proven by `gate.ps1 <hex>` PASS. Naming runs alongside the proofs: a guess or
placeholder name is fine, but it goes in `cow/names.csv` / NAMES_TODO through `tools/cow/addnames.py` and
`tools/cow/rename.py <old> <new> --confirm`. A name never stops the loop.

When you hand anything to the user: one zip with a new unique name in `$HOME\Downloads`, run from the Cow
panel, and the log pull through `build\logpull` (text files only, under 20 MB).
