# loopy — the harness that owns the loop

Planned as a stdio MCP server in Python at `tools/cow/loopy/`, added to Goose as an extension. Three
tools, so the model never has to remember the procedure and can only report a unit by calling a tool
whose result always contains the next job:

| tool | what it does | what it returns |
| --- | --- | --- |
| `loopy_next` | resume any `in_progress` unit first, else pick `status=todo` with the lowest `leaf_rank` then smallest `size`, mark it `in_progress` with a note | hex, where the generated body lives, callees and their status, the style rules to obey — or `STOP: end your turn now` |
| `loopy_submit(hex)` | runs `tools/cow/gate.ps1` itself; on PASS does **all** bookkeeping in code — ledger row, `genwraps.py`, `status.py`, one commit, `git fetch`, fast-forward push | PASS → the next unit in the same result. FAIL → the gate lines and attempts left; on the third failure it does the fail bookkeeping itself and hands over the next unit |
| `loopy_checkpoint(hex, note)` | copy work in progress to `cow/wip/<hex>/`, set `status=in_progress` with the note, commit `cow: checkpoint <hex>: <note>` and push | the same unit, so the model keeps going after a compaction |

## Why it belongs in code

- "I'm done with this one" is a tool call, so a summary cannot end the loop; only `loopy` says stop.
- Git, the ledger and the status docs leave the model's hands. Two failures that have already happened
  in `loop.log` become impossible: gating a batch without running `status.py` (gate answered
  `GATE FAIL … status generated docs are out of date`, so the units were not FINISH-committed), and
  batching sixteen units into one commit against the one-commit-per-unit rule.
- Fewer tokens per unit: the model writes only the conversion.
- `/grind` stays as the backstop if the model ends a turn anyway.

## Integration contract (so a drop-in lands clean)

Repo: `C:\cow_kuluu_xi_anything`, branch `main`, remote `origin` = the fork, pushes are plain
fast-forward and `git fetch` runs immediately before every push. **Goose is looping and pushing to
`main` right now**, so `loopy` is delivered as a zip and integrated by Goose (never pushed by a second
writer while the loop runs), or a `STOP` file is dropped in the repo root first and Goose finishes its
current unit and halts.

Reuse what exists; do not reimplement it:

- `tools/cow/next.py` — pick the unit (`--json` gives entry/size/callees/cycle).
- `tools/cow/setstatus.py` — the only sanctioned ledger writer; refuses a `done` row without a name and
  an existing file, and refuses thunks. Columns:
  `entry,end,size,thunk,status,name,file,oracle_refs,verified,callees,leaf_rank,cycle,note`.
- `tools/cow/genwraps.py [--check]` — regenerate `cow/wraps.json` + `runtime/cow/cow_wraps.c` from rows
  with `status=done`. Wrap keys are `cow_<entry hex>` and never change on rename.
- `tools/cow/status.py --describe '<the commit being made>' [--check]` — regenerates the README
  `COW-STATUS` block, `docs/cow/STATUS.md`, `docs/cow/NAMES_TODO.md`; excludes its own outputs from the
  dirty check.
- `tools/cow/gate.ps1 <hex> [-SkipBuild] [-Json]` — the judge; 18 checks, plain
  `GATE PASS|FAIL <hex> <check> <reason>` lines plus `GATE VERDICT`, exit 0/1.
- `tools/cow/gate_batch.ps1 -Entries a,b,c` — sequential gate over units (keep the per-unit commit in
  `loopy`, not in the batch).
- `tools/cow/cowdiff.py <hex> [--json] [--count] [--write-unreached --reason …]` — the behaviour proof.
  One harness per entry (`build/cowdiff/cowdiff_<hex>.exe`) and a lock at `build/cowdiff/.lock`,
  because two runs sharing `build\all64` objects raced before.
- `tools/cow/build_check.ps1 -Targets host,difftest,boot64` — `-Targets` must be ONE comma string
  (a `[string[]]` parameter arrives as one element through `Start-Process -ArgumentList`).

## Rules the implementation has to keep

- Long work goes to `Start-Process -WindowStyle Hidden` with a log, then poll; every shell call is a
  new process, so background jobs die with it. A gate run is ~45 s, a full build ~60 s — the MCP
  server must not block a tool call for minutes without a timeout story.
- One commit per finished unit: `cow: <hex> <name> [<confidence>]`; failures
  `cow: <hex> failed: <reason>`; checkpoints `cow: checkpoint <hex>: <note>`; resume
  `cow: resume <hex>`; reviews `cow: review <first>..<last>`.
- Delete `cow/wip/<hex>/` in the same commit that finishes or fails the unit.
- No reset, stash, rebase, force-push or branch switch. **A rejected push is a halt**: write
  `docs/cow/LOOP_HALT.md`, run `status.py` so the README shows HALTED and why, commit, push, stop.
- Halt only on: a `STOP` file in the repo root (finish the current unit first), a rejected push, a red
  build at HEAD not fixable inside the last commit, an unexpectedly dirty tree, or 10 consecutive
  failures. `loopy_next` owns returning `STOP: end your turn now` for all of them.
- Never commit game data: no DLL/DAT/ROM bytes, no copied tables, nothing from `generated/` or
  `build/` (`.gitignore` enforces; the gate and `loopy` should assert it before committing).
- Upstream `recomp/`, `meta/`, `tests/` are read-only; the only upstream edit is the three `# COW:`
  lines in `tools/build.py`. `loopy` must not widen that.
- `loop.log` line per unit: `2026-11-03T15:55:00Z 0x1012ac30 <name> <confidence> <result> <minutes>`.

## Where the state lives (never only in chat)

`ledger/functions.csv`, `cow/names.csv`, `cow/wraps.json`, `cow/seeds/<hex>.json`,
`cow/unreached/<hex>.txt`, `cow/wip/<hex>/`, `loop.log`, `docs/cow/LOOP.md` (re-read at the start of
every unit and after any compaction), `docs/cow/STYLE.md`, `docs/cow/MACHINERY.md`,
`docs/cow/STATUS.md`, `docs/cow/NAMES_TODO.md`, `docs/cow/LOOP_HALT.md`.
