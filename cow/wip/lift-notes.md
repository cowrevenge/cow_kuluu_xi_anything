# Phase B - the machine lift (hand loop paused 2026-11-06)

Decision (a): lift the whole graph with **generic bridges to the generated originals**. Any callee not yet
lifted is called through its bridge, which calls `f_<hex>(g)` - the same symbol side A calls - so every
function is lifted and proven independently, with no ordering dependency between them.

## The architecture, and why it is split this way

A lift is stitched from two sources because neither alone knows the whole story:

| | source | gives |
|---|---|---|
| semantics | Ghidra's decompiled C (`C:/ghidra_out/functions_all.jsonl`) | structure, arithmetic, control flow |
| plumbing | `generated/all/funcs_*.c` | frame, argument convention, call sites, stack cleanup |

Ghidra throws the guest frame away: pushes become locals, `ret 0x10` vanishes, `this` in ecx becomes an
anonymous parameter, and every call site's stack traffic disappears. A lift that **guessed** at those
compiles, runs, and is wrong - the worst outcome, because it looks like a conversion. So
`tools/cow/ghidra/gen_model.py` reads the plumbing back off the recompiler's own translation of the same
bytes (one `/* 10017067: call ... */` comment per guest instruction), and only the computation comes from
Ghidra.

New files: `gen_model.py` (plumbing), `ghidra_c.py` (Ghidra C -> cow C), `lift_proof.py` (batch proof),
`lift_report.py` (histograms/census), `lift_selftest.py` (rewriter regression), `lift_probe.py` (reading).
Generated outputs: `src/lifted/cow_<hex>.c`, `layout/lifted_bridges.{c,h}`, `layout/lifted_addresses.h`.

## Baseline numbers (first run, --states 300)

- candidates (ledger rows, unnamed, <=4000 B): **20,738**
- lifted and compiling: **5,458**
- pilot proof on 272 of them: **130 pass = 47.8%**
- after the live-register fix (same 272): **144 pass = 52.9%** (`eax` 84→71, `memory` 38→27, `edx` 7→4,
  `fault` 13→**26** - that group went the wrong way and is next)
- whole population, first 400: **215 pass = 53.8%**; fail groups `eax` 90, `memory` 49, `fault` 39,
  `edx` 5, `other` 2. (Full run: `cow/lift_proof_all.json`, ~14 chunks, several hours.)

## The second `eax` pattern: a setter that returns its own argument

The `eax` group survived the live-register fix at 90/400, and the survivors were a **family at consecutive
addresses** (`0x10002d50, 2d70, 2da0, 2dc0, 2de0, 2e00, 2e20, 2e40 ...`) - which is itself the tell that a
group is one pattern and not ninety:

```
mov eax, [esp+4]        ; the argument, into eax
mov [0x10456acc], eax   ; store it
ret                     ; ...and leave eax = the argument
```

Ghidra models that as `void DAT_10456acc = param_1;` - a store with no result - so the lift never wrote
`g->eax` and returned a fuzzed eax where the original returns its argument. `expressible_write` had
deliberately refused register-indirect loads (correctly: a fuzzed `[ecx]` faults, and the harness compares
the memory prefix up to the fault), but `[esp+4]` at the top of a function is not a wild read - it is the
argument the adapter already reads. So:

- `ESP_ARG_RE` / `EBP_ARG_RE` recognise an argument read **only while nothing has moved esp / after
  `mov ebp,esp` respectively**, and express it as `("stackarg", k)`, resolved to the lifted function's
  `param_k`.
- That read also **defines the parameter list**: an entry that loads an argument and never mentions it
  again gives Ghidra no reason to name a parameter, so `nparams` must come from the frame, not only from
  what the decompiler chose to use.

Two ordering bugs fell out of this and the compile gate caught both, which is what the gate is for:
the prologue named `param_1` before it was declared, and then used `sp0` before it was declared. The
argument reads now sit above the frame because they are reads of the caller's frame at the esp the entry
arrived with - no push can move that, so their position cannot change what they see.

Cost of not checking the count: the first attempt **lost 100 units** (C2065 387 → 487) and I nearly
launched a 3-hour proof on it. A lift run's pass count has to be compared against the previous run's
*refusal histogram*, not just its pass rate, or a regression hides inside an improvement.

## Two honesty fixes in the reporting path

- **`lift_grade.py`** re-reads the per-chunk harness logs and groups failures by the reason cowdiff
  printed itself, in `first at state N (why)`. My first classifier grepped the failure line for keywords -
  and that line always contains `fault 0/0` in its register dump, so the histogram could have invented a
  `fault` group out of its own parser. (It happened to agree here; it would not have in general, and
  "the checker said so" is worthless if the checker is being read wrongly.)
- **A row that spins inside one fuzzed state** never returns to any loop where a time check could live, so
  the per-row budget rides on the **coverage counter** (`cow_tick`, sampled every 4096 ticks). One row had
  burned 1054 s of CPU and stalled 399 behind it. Note `cow_tick` must not be `static`: the instrumented
  bodies live in another TU, and all ten chunks died on LNK2019 before that was fixed.

## Where the loop is now

**Half the population graded (2,800 of 5,458): 1,074 pass = 42.9% over the 2,505 that answered**, 295 still
unanswerable (the side-B hang). Fail groups: `memory` 547, `eax` 439, `fault` 371, `edx` 68.

The rate has been revised downward three times as the sample grew - 56.5% (one chunk), 50.0% (1,705), 42.9%
(2,505) - and that is the point of grading in bulk: **an early sample of consecutive addresses is not a
sample of the image.** Entries are ordered by address, so they arrive grouped by subsystem, and chunk 0's
geometry helpers are not the same population as chunk 4's. Any pass rate quoted from a handful of chunks
should be read as a ceiling, not an estimate.

Tools added this round: `lift_hang.py`, which names the entry that makes a chunk stop reporting. Its first
version inferred the culprit from the tail of the chunk log and blamed a trivial two-parameter setter for a
hang it was nowhere near - a chunk that is merely *still running* looks identical to one that hung. It now
reads `build/lift/hang_c*.txt`, written by the killer with the exact list of entries that never reported.
Ground truth from the component that detected the problem, not a guess about it.

`lift_proof` also requeues a killed chunk's unreported remainder (up to `--retries` passes) instead of
booking 150 real verdicts as unknown, because the hang is deterministic and each pass grades up to the next
culprit.

## The regression that mattered most: the lifted tree broke the GATE

Dropping 5,458 files in `src/lifted` made `cow_build` add **5,497 sources to one `cl` command line**, which
Windows cannot even start (`WinError 206`). That does not fail a unit - it fails the *checker*: `cowdiff.py`
could not build, so `gate.ps1` could not run. A checker that cannot run is worse than a strict one, because
nothing complains: the loop just stops being able to say no.

Fixed the way the repo already fixes this for the link - `cow.link_args` re-spells a too-long `link` into an
`@response` file - by adding the fourth COW hook line, `cow.compile_args`, in `tools/build.py`'s `cl`
invocation. `python tools/cow/cow_build.py --selftest` now proves both hooks without starting a compiler.

Two things that fix taught:

- **MSVC response files do not accept `/I` and its directory on separate lines** (`D8004: '/I' requires an
  argument`). The command line carries them as two tokens, so the writer must glue them back into `/Idir`.
  My first selftest passed *against* this bug because its fixture used only single-token arguments: **a
  fixture simpler than reality proves nothing.** The fixture now carries `/I dir` pairs and asserts no bare
  `/I` survives and all 4,000 sources still appear.
- The documented invariant said "the three `# COW:` lines in `tools/build.py`". It is now four, and both
  docs were wrong until they were updated - a stale invariant is how the next person deletes a line they
  were told should not exist.

Verified end to end with the full lifted tree present: `COWDIFF PASS 102d8019 states=28 blocks=131/131` and
`GATE VERDICT PASS 102d8019 (19 checks)`, including a 2,008-state cowdiff.

## A hang the harness's own watchdog cannot see

The per-row budget rides on `cow_tick`, which is called from the coverage counter in the **instrumented
side A**. A hang inside **our lifted body** - a Ghidra `while (true)` whose exit condition did not survive
translation - never reaches it, and one such entry held a chunk at 97% CPU indefinitely (1169 s and
counting). Instrumenting side B is not an option (it is generated from Ghidra's C, and the counter lives in
guest-memory accessors shared with the game build), so the batch is now bounded from outside: `run_chunk`
watches the chunk's **output**, and because the harness prints a line per row, an advancing chunk is a chunk
that keeps talking. Silence for 120 s kills it, the rows it already graded are kept, and the remainder is
booked `harness_timeout` - explicitly *not* a conversion failure. `--retry-why` requeues those (and the
blocked buckets) on a later pass, because treating "we never got an answer" as a permanent verdict would
quietly shrink the population until the numbers flattered us.

## Bookkeeping fixes needed to land any of this

`commit.py` could not commit the build fix: `tools/build.py` was outside both areas, so a legitimate COW
hook edit reported as "dirty outside the loop's areas". Machinery mode now owns `TOOL_FILES =
['tools/build.py']`, and it now *excludes* the derived `docs/cow/STATUS.md` and `NAMES_TODO.md` - the bug
recorded in `cow/wip/NOTES.md` (a tool commit carrying a progress line derived from an uncommitted ledger
row). `README.md` was dirty from the paused hand unit and was restored to HEAD; `status.py` regenerates it
from the ledger at the next unit commit, so nothing was lost.

**Landed: `43262e45`** - 16 paths: the seven `tools/cow/ghidra/` tools, `cowdiff.c/.py/_batch.h`,
`cow_build.py`, `commit.py`, `tools/build.py`, `LOOP.md`, `MACHINERY.md`. The lifted tree and generated
layout correctly stayed out of the tooling commit.

## Two more harness bugs, both found by running the whole population

9. **The whole-image build cannot swallow 5,458 lifted sources.** `cow_build` adds `src/**` to every
   whole-image build, so `compile_stale` built a cl command line past the Windows limit
   (`WinError 206`). The image and the runtime are now compiled once by `lift_proof` itself, in batches
   with a response file, and cached by mtime in `build/lift/img` - one 18-minute cost, not 14 of them.
10. **"Link whatever is in build\\all64" links orphans.** `build\all64` still holds `cow_<hex>_ret.obj`
    for files deleted when the trivial table replaced them, so the fallback link died with LNK2005
    against `cow_trivial.obj`. Only objects deliberately compiled are linked now - never a directory
    glob. A cache you glob is a cache of ghosts.

Refusals, whole image: `indirect_call_via_code_ptr` 2119, `string_op_not_modelled` 1788,
`goto_or_labels` 1451, `x87_not_modelled` 1432, `does_not_compile_C2100` 1295, `no_ret_in_body` 1227,
`leftover_unbridged_call` 687, `C2065` 387, `switch` 381, `bare_deref_width_unknown` 311,
`indirect_call_not_modelled` 301, `C2057` 255, `C2109` 208, `leftover_odd_width_type` 194.

Pilot failure groups: `eax` 84 (31%), `memory` 38, `fault` 13, `edx` 7.

## Census that drove the build order (`lift_report.py --needs`)

`ecx_in` 83.3%, `has_call_insn` 66.1%, `has_ghidra_symbol` 46.5%, `indirect_call` 12.5%, `x87` 10.1%,
`goto` 7.1%, `float_math` 7.1%, `string_op` 5.3%, `switch` 3.7%, `unaff_or_in` 2.7%.

## Bugs found by PATTERN - each one cleared hundreds of units

1. **lift.py classified every function as calling itself.** `classify()` scanned the call list over
   Ghidra's whole `c`, which begins with its own signature `void FUN_100d1230(void)`. Every candidate
   matched `FUN_<self>` and was refused `calls_unconverted_peer`: **0 of 20,738 lifted**. Scanning the
   body and excluding the function's own name took that to 4,632 with no bridges at all.
2. **`_sig_prev(...) in ")]"` is always True for the empty string** - `'' in ")]"` is True in Python. A
   dereference at the start of a statement (i.e. almost all of them) was read as a multiplication and
   left as `*(int *)(p) = v;`. Silent: the file looked translated.
3. **`re.sub` processes escapes in a replacement template.** Substituting a body containing `'\0'` put a
   raw NUL byte into the C file - reported as `C2137: empty character constant`, with nothing connecting
   it to the return statement that caused it. Replacements that carry source text must be functions.
4. **`&` before a symbol is address-of *or* bitwise AND, and the token decides.** The character-level test
   read the `n` of `return &PTR_x` as an operand and turned "address of" into "load from" - so
   `mov eax, 0x103515a0` became a load and eax came back as the dword stored there. Symmetrically,
   deciding "that was an AND" and not putting the consumed `&` back emitted `a b` for `a & DAT_x`.
5. **A bare `*p` must use the declared width.** `*pChar` read as `rd32` touches four bytes where the
   guest touched one - a memory-trace divergence that has nothing to do with the expression's value.
6. **Stale objects silently proved the wrong version of a unit.** `build\all64` already holds
   `cow_<hex>.obj` (cow_build adds `src/**` to the whole-image build), and the link deduped by keeping
   *theirs* - so a fixed lift was still proven against the pre-fix `.obj`. The fix proves nothing it just
   compiled. Dedupe must keep ours.
7. **A batch that reports only failures looks like a crash.** Table mode printed a line per FAIL and
   nothing per PASS: 142 lines for 272 rows read as "the run died", when it was a 47.8% pass rate.
8. **`rt_fatal` killed every remaining row.** It now has a fallback in the harness: the existing SEH route
   first (both sides agree on a fault), and a row-armed `longjmp` when nothing caught it, so one unshimmed
   import cannot end the run.

## The pattern just closed: a register the original leaves live

`0x10001e10`: the entry opens `mov eax, [0x103d3c88]`, tests it, and if set calls `0x10311bf0` and zeroes
the global. Ghidra keeps the *test* and discards the *value*, so on the not-taken path side A leaves
`eax = 0` and side B leaves the fuzzer's `eax`. That was the largest group (84 entries, 31%):

> a lifted body never materialised a register the original held live at exit or at a call site.

Fixed, and the fix is the same principle as everything else in Phase B - read it off the generated body:

- `gen_model.prologue_ops()` walks the leading **straight-line** instructions and returns them as an
  ordered program, and `lift.py` emits the adapter's opening from that program rather than reconstructing
  pushes/frame/locals separately. Order is load-bearing: `push esi` then `mov esi,[global]` must push the
  caller's esi, and the reverse order must push the loaded value.
- `expressible_write()` replays only what cow can state without inventing a fault: immediates, image
  constants, reads of a **global** (a constant address, so it cannot fault somewhere the original had
  not), and register copies. A register-indirect load (`mov eax,[ecx]`) is deliberately NOT replayed -
  with a fuzzed ecx it faults, and the harness compares the memory prefix up to the fault.
- The same fact feeds the bridges: `callee_facts` now reports `wants_eax` (the callee reads eax before
  writing it), the bridge sets `g->eax = eax_in`, and the call site passes the tracked expression - or
  `g->eax`, which is a no-op, when the lift cannot work it out. This is the hand units' `eax_in`
  ("eax at that site is the owner pointer, loaded earlier and untouched since"), automated.
  Refusing on unknown eax would have cost a large slice of the population for no measured gain, so the
  no-op is the honest default and is visible in the generated line.

## Other open patterns, in rough size order

- `fault` (26 of the pilot, and **growing** - 13 → 26 across the live-register fix). One side faults and
  the other does not, or the codes differ. Needs its own pass before anything else, because a fix here
  is likely to move several other groups.

- `indirect_call_via_code_ptr` / `indirect_call_not_modelled` (2,420) - vtable and jump-table dispatch.
  Needs a bridge over `rt_call_indirect`, plus the target chosen from guest memory.
- `string_op_not_modelled` (1,788) - `rep movs/stos` etc. The adapter must read `df` (loop-notes has the
  two traps we already learned hand-converting these).
- `x87_not_modelled` (1,432) - cowdiff compares `st0` and the FPU top, so a float-returning entry needs
  the x87 stack modelled, not just C float arithmetic. `layout/x87.h` already has the measured rules.
- `goto_or_labels` + `switch` (1,832) - structuring. The COW_ADAPTER block is exempt from the readability
  rules, so Ghidra's *unstructured* form is legal there; that is the cheap unlock, and it does not need a
  CFG reconstruction in the user function.
- `C2100` (1,295) "indirection requires pointer operand", `C2109`, `C2057`, `C2065` - more shape work in
  `ghidra_c.py`; each needs an example before it gets a rule.
- `no_ret_in_body` (1,227) - data blobs, tail jumps, and noreturn paths. Mostly correctly refused; the
  tail-jump ones want a jmp bridge.
- `bare_deref_width_unknown` (311) - the rewriter refuses rather than default a `*p` to four bytes. The
  fix is Ghidra's *declaration* of that local, which we are not collecting in one form or another.
- `cleanup_mismatch_*` / `argcount_mismatch_*` - where the push count read off the bytes and Ghidra's
  parameter list disagree. Refusing is correct (shipping a knowingly-wrong esp is not), but the count says
  Ghidra's argument recovery is unreliable around calls with FPU work interleaved.

## The `memory` group, diagnosed (the biggest group: 547)

The family at `0x10009e20 / 9e60 / 9ea0 / 9ee0` shows it. The guest does this:

```
push ecx                      ; a scratch slot reserved IN THE GUEST FRAME
xor  eax, eax
push 1                        ; another one
mov  word ptr [esp+4], ax     ; writes 2 bytes back into the first slot
...
call 0x10009f20               ; callee receives POINTERS INTO THOSE SLOTS
```

Ghidra folds the slots into C locals - it names them `local_4`, `local_8`, ... by their frame offset - so the
lift emitted:

```c
CowU32 local_4;  local_4 = 0;
cow_bridge_10009f20(g, ..., (const CowU32[]){ ..., &local_4, &local_4, 1, 1 }, ...);
```

**`&local_4` is a host address.** It is handed to a guest callee that treats it as a guest pointer and
writes through it, so the writes land outside guest memory: invisible to the memory trace, and a latent
corruption of the harness's own process. No amount of other correctness saves this - the entry cannot pass.

Interim decision: **refuse it, do not ship it.** `leftover_problems` now reports
`local_address_escapes` for `&local_NN` / `&_Stack_NN`, and `lift_selftest.py` has a case for it. Refusing
is the honest state: those units are not converted, and leaving them in the population as `memory` failures
made the biggest fail group look like a near-miss problem when it is a not-yet-implemented one.

The real fix, when it is built: Ghidra's stack locals must become **guest frame slots**. The entry already
reserves the frame (the generated body's pushes / `sub esp, N` are read by `gen_model`), so a `local_NN`
name has to resolve to `(uint32_t)(frame_base + N)` and be passed as a number, never as `&`. That also
fixes the entries whose locals are read back after a pinned callee wrote through a pointer - the same bytes,
seen by both sides or by neither.

## Where the hangs actually live: inside a bridged callee, where no counter runs

The first entry `lift_hang`'s successor named (`0x10054380`) turned out to be innocent:

```c
cow_bridge_100543a0(g, ..., 1u, (const CowU32[]){ param_1 + -0x30 }, ...);   /* then return 1 */
```

Our lifted body is three lines and cannot loop. The loop is in **`f_100543a0`, the callee**, which both
sides execute for real via the bridge - and that is precisely the point of decision (a) (prove each
function against the oracle for its callees). The consequence nobody had faced: **`cow_tick` exists only in
the instrumented copy of the ENTRY.** A plain generated callee has no counters, so the harness's per-row
budget is blind to every hang below the entry - which is most of the graph, since bridged calls are the
normal case.

So the budget is structurally limited to side A's own body, and a loop in a callee - reachable identically
from both sides - can never be interrupted from inside. Options, none of them free:

- **instrument the callees too** - correct, but a chunk would compile thousands of instrumented bodies
  (the bridges reach 5,093 distinct functions), which is the compile cost the batch exists to avoid.
- **tick from the guest memory accessors** (`rd32/wr32` in `runtime/guest.h`) - catches every loop that
  touches memory, but it puts a counter in the hot path of the REAL game build, which is not ours to
  slow down for a test harness.
- **isolate from outside** (what is in place now): the chunk idle-watchdog plus head-of-chunk bisecting
  costs ~120 s and exactly **one** lost verdict per hung entry, and the run keeps going.

Chosen: keep (c) for now - hung entries are rare (2-3 per 800) and each is bounded - and treat (a) as the
real fix if the hang count turns out to be large enough to matter. Recorded so the next person does not
"fix" the watchdog by moving the check somewhere that also cannot see a callee.


## I broke the tree myself, and the guard that now prevents it

While a proof batch was live, I ran `lift.py --entries 0x... --apply` as a spot-check to confirm the
partial-register refusal. `--apply` rewrites not only `src/lifted/**` but the **shared generated layout** -
`layout/lifted_bridges.c` and `layout/lifted_addresses.h` - which every lifted file `#include`s. A
three-entry spot-check rebuilt that table from three entries: the batch woke up to a tree with **5,458 lift
files and 0 bridges**, i.e. unbuildable, and several chunks of grading were wasted before I noticed.

The mistake was treating a build-input writer as a read-only probe. Fixed structurally: **`--apply` now
acquires the same `build/.build.lock` the harness and builds use**, so a spot-check waits for the batch
instead of sabotaging it. (`lift.py --entries ... ` without `--apply` remains a safe, lock-free report.)

Recovery was a full re-lift, which also applied the two pending refusals for real:

| | before | after |
|---|---|---|
| lifted | 5,458 | **4,185** |
| bridges | 5,093 | 3,247 |

and the refusal histogram gained `partial_register_write_*` (**3,810**), which is now the largest single
reason after indirect calls. `does_not_compile` fell to 1,335 - some of those were the same units failing
later in the pipeline for a symptom of the same disease.

**What this changes about the numbers already quoted:** roughly 1,273 units that had been counted as
"lifted" were code that disagreed with the oracle about register width or about where a local lives. They
are no longer in the population. Any pass rate quoted from the earlier batches includes them, so those
figures are now known to be optimistic in their denominator as well as provisional in their sampling.
Grading restarted over the honest population, retaining the 2,392 verdicts whose units are still lifted.


## Rules this phase keeps

- Hand units and the trivial table are **untouched**: `lift.py` skips any ledger row that is `done` or has
  a name. Those addresses belong to their readers.
- Nothing that does not compile stays in `src/` - `lift.py`'s syntax gate moves rejects to
  `build/lift/rejected/` and books the compiler's error code as the refusal reason, because `src/**` is
  compiled into the real host builds and one bad file turns BUILD_CHECK red for the repository.
- Bare guest addresses live only in `layout/`: the bridges and the address macros are generated there.
- A lift asserts nothing about meaning: no Evidence block, name is `cow_lift_<hex>`, naming and structs
  come later, by cluster.
