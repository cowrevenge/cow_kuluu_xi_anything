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

Full proof of the current tree running in the background (`cow/lift_proof_all.json`, 14 chunks, ~3 h).
Last measured whole-population rate: **53.8% (215/400)**, with `eax` 90 / `memory` 49 / `fault` 39 /
`edx` 5 / `st0` 2. The `eax` fix above should take the largest group down substantially; the run will say
by how much.

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

## Rules this phase keeps

- Hand units and the trivial table are **untouched**: `lift.py` skips any ledger row that is `done` or has
  a name. Those addresses belong to their readers.
- Nothing that does not compile stays in `src/` - `lift.py`'s syntax gate moves rejects to
  `build/lift/rejected/` and books the compiler's error code as the refusal reason, because `src/**` is
  compiled into the real host builds and one bad file turns BUILD_CHECK red for the repository.
- Bare guest addresses live only in `layout/`: the bridges and the address macros are generated there.
- A lift asserts nothing about meaning: no Evidence block, name is `cow_lift_<hex>`, naming and structs
  come later, by cluster.
