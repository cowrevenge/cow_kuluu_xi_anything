# The loop

I am the conversion loop. Read this at the start of every unit and again after any compaction or
restart, then continue from `cow/wip/`. State lives in the repo — ledger, names.csv, git log,
`loop.log`, `cow/wip/` — never only in chat.

## First call, every time

`python tools/cow/loopy/loopy.py next` (or the `loopy_next` MCP tool). It reads the ledger, resumes any `in_progress` unit from
`cow/wip/<hex>/`, and hands back the job: the hex, where the generated body is and how many instruction
sites it has, the callee count, attempts left, and the style rules. After a compaction that call IS the
resume step - do not re-plan from memory and do not pick a unit yourself. Then convert, and finish with
`loopy_submit`, which runs the gate and does the ledger, wraps, status docs, the single commit and the
push in code, returning the next unit in the same result. A summary cannot end the loop, because "this
unit is done" is a tool call whose result is the next job.


## Ground rules (every one of them has already bitten once)

- **PowerShell 7 only**, unwrapped, chained with `;`. Never `powershell -Command` / `pwsh -Command`.
- Each shell call is a **new process**: background jobs die with it. Anything long goes to
  `Start-Process -WindowStyle Hidden` with output to a log, then poll the log.
- Parse **only** output in a format you asked for (`--json`, `-format json`); otherwise read it raw first.
- PowerShell is case-insensitive with short aliases (`h r gc ls cd sc`): never name a function,
  variable or alias with a short name; always `$`.
- Call only tools in the tool list, by their exact names. Read the error and retry correctly; never
  end a turn on a failed call.
- Settle every question by **reading code** — the generated C first, then the oracles. Never launch
  the game, the launcher, Docker or LSB. No registry writes, nothing under `C:\PhoenixXI`.
- **Never run `goose doctor`** (it starts an agent session; it is not a read-only check).
- No throwaway `python -c`: a probe worth running twice is a file in `tools/cow/` with argparse.
- Never commit game data: no DLL/DAT/ROM bytes, no copied tables, nothing from `generated/` or `build/`.
- Upstream `recomp/`, `meta/`, `tests/` are read-only. The three `# COW:` lines in `tools/build.py`
  are the only upstream edit. Our code: `cow/ layout/ src/ runtime/cow/ tools/cow/ docs/cow/` and the
  marked block in `README.md`.
- Git: commit, fetch, plain fast-forward push to `origin main`. No reset, stash, rebase, force-push,
  branch switch or new branch. **If a push is rejected, stop and report.**
- Every push runs `python tools/cow/status.py --describe '<the commit being made>'` first and includes
  its outputs (README block, `STATUS.md`, `NAMES_TODO.md`).

## Oracle order

1. **the generated C** (`generated/all/funcs_*.c`) — the truth about this build, byte for byte;
2. `vendor/kuluu/.agents/skills/retail-observe/references/*.md`;
3. `vendor/cow_ffxi_disassembly` — pass docs for meaning, and `Disassembly_Tools/artifacts/
   ffximain_tables_v0.zip` (class names, vtables, strings, seeds, leaked source paths) for names;
4. `vendor/xi-on-anything` (the pristine fork) for how the runtime and hosts are meant to work;
5. `vendor/xi-tools` and `vendor/POLUtils` for DAT/ROM formats.

The vault's tables describe **its** build, not ours: only 60.44% of our function bytes match it
(`python tools/cow/image_cmp.py --mode functions`). A claim from an oracle is usable once
`image_cmp.py`/`oracle_probe.py` or the generated C confirms it; class-name and string addresses are
stable, so those transfer; a vtable slot only after `--mode vas` says the bytes match.

## Per unit, forever

1. **Precheck.** Tree clean apart from this unit's own WIP; `HEAD == origin/main`; build green at HEAD
   (`pwsh -NoProfile -File tools/cow/build_check.ps1`). If the model or the build is down, wait and
   retry — do not quit.
2. **Resume first.** Any ledger row with `status=in_progress` continues from `cow/wip/<hex>/`.
3. **Pick next.** `status=todo`, lowest `leaf_rank`, then smallest `size`. A `cycle=true` group is
   **one unit**. Mark it `in_progress` with a one-line note.
4. **Convert.** Read the generated body and the oracles; write the user function and the
   `COW_ADAPTER`; add what you learned to `layout/` and `cow/names.csv`. Apply the name step; **never
   stall on a name**: evidence → descriptive guess → placeholder.
5. **Gate.** `pwsh -NoProfile -File tools/cow/gate.ps1 <hex>` (add `-SkipBuild` while iterating; the
   final run must be full).
   - **PASS** → `setstatus.py <hex> --status done --name <n> --file <path> --oracle <evidence>
     --verified true`, then `genwraps.py`, then the **FINISH** commit.
   - **FAIL** → **CHECKPOINT**, fix, re-run; at most **3 attempts**. Still failing → copy the attempt
     to `attempts/<hex>/` (gitignored), restore **only the paths you touched for this unit** from HEAD
     (`git checkout HEAD -- <paths>`), `setstatus --status failed --note "<the gate's reason>"`, then
     the **FAIL** commit, and move on. The gate decides; my opinion does not.
6. **Every 50 finished units**: review that batch against the oracles — names, types, layout only; the
   gate must still pass; **REVIEW** commit.
7. **Append one line to `loop.log`** and post it in chat:
   `2026-11-03T12:34:56Z 0x100083b0 cow_incr_counter_if_active guess done 8.4`
   (UTC, entry, name, confidence, result, minutes).
8. Delete `cow/wip/<hex>/` in the same commit that finishes or fails the unit. Next unit. Do not stop
   for names, failures or long runs.

## Commit points

| when | message |
|---|---|
| FINISH — a unit passes the gate | `cow: <hex> <name> [<confidence>]` — one commit per finished unit |
| FAIL — a unit is given up | `cow: <hex> failed: <reason>` |
| CHECKPOINT — any gate run that does not pass, and at least every 15 min inside a unit | copy WIP to `cow/wip/<hex>/` (tracked, never compiled), `status=in_progress` with a one-line note, `cow: checkpoint <hex>: <note>` |
| RESUME — after compaction/restart | re-read this file, the ledger and `cow/wip/`, then `cow: resume <hex>` |
| REVIEW — after each review pass | `cow: review <first>..<last>` |

## Tools

```
python tools/cow/ledger.py                    # rebuild the ledger from meta + generated/all
python tools/cow/setstatus.py --summary        # where the loop stands, what is in progress
python tools/cow/cowdiff.py 0x… --json         # the behaviour proof (also --count, --write-unreached)
pwsh -NoProfile -File tools/cow/gate.ps1 0x…   # the judge
python tools/cow/genwraps.py [--check]         # publish the wraps the ledger says are done
python tools/cow/status.py --describe '<msg>'  # README block, STATUS.md, NAMES_TODO.md
python tools/cow/rename.py <old> <new> [--confirm]
python tools/cow/build_check.ps1               # host + difftest + boot64 (BUILD_CHECK PASS/FAIL)
python tools/cow/oracle_probe.py / image_cmp.py# what the oracles still mean for our build
```

## Halt only on

a `STOP` file in the repo root (finish the current unit first) · a rejected push · a red build at HEAD
that I cannot fix within my own last commit · an unexpectedly dirty tree · 10 consecutive failures.
On a halt: write `docs/cow/LOOP_HALT.md` with the reason, run `status.py` (the README shows
**HALTED** and why), commit, push, stop.

## Proof before booking (the no-stub rule)

The unit is not ours to book until we can say **who calls it**. `tools/cow/chain.ps1 -Units N` runs the
whole recipe per unit:

```
python tools/cow/mkret.py <hex> --write --prove --json   # reads the original AND asks who owns the address
python tools/cow/loopy/loopy.py submit <hex> --name <from the proof> --confidence <c> --file <f> --oracle <citation>
```

`--prove` (which calls `tools/cow/vtable_model.py`) accepts two kinds of owner: the address is a slot in a
table of code pointers - a virtual method, named `cow_vf<N>_at_<vtable>` or `cow_<vocabulary>_vf<N>` - or
code reaches it with `call`/`jmp`/`push`, which makes it a called leaf named `cow_return_at_<hex>`. With
neither, the file is not written and the row is booked `failed` with that reason; `tools/cow/gate.ps1`
refuses the same thing from the other direction (a 1-3 site body with no owner in the ledger is a stub).

`unk_*` names are not booked. The names we could not do better than are placeholders in
`docs/cow/NAMES_TODO.md`, and a review pass (`python tools/cow/review_pass.py --recent 50 --apply`) is
what promotes them when the vendor tables or a vtable's vocabulary support it.

## Every turn ends with a loopy call (the rule that keeps the loop alive)

The loop is only alive if the last thing a turn does is ask loopy for work. So, always, in this order, at
the end of every turn - including a turn that ends in a summary, an answer, or a complaint:

```
python tools/cow/loopy/loopy.py next        # hand out the next unit (resumes whatever is in_progress)
```

and if `loop_forever.ps1` is not running, start it first:

```
Start-Process pwsh -ArgumentList '-NoProfile','-File','tools/cow/loop_forever.ps1','-Hours','9','-Batch','40' `
    -WindowStyle Hidden -RedirectStandardOutput build\forever.out -RedirectStandardError build\forever.err
```

If the last call of a turn is anything else - a status report, a question, a "looping!" - the loop has
stopped, because nothing else starts it. A progress note is not progress: the commit is progress, and the
commit only happens behind `loopy submit`.
