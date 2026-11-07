# Loop notes worth acting on (found 2026-11-05 while converting 0x102d7c47)

Four things came out of the axis/angle rotation matrix that do not belong in its source header. Recorded
here so they are not lost; none of them is a defect in a converted unit.

## 1. The oracle's NaN payloads are not reproducible from C, and are not even x87-faithful

`fadd`/`fmul` with TWO NaN operands of different payloads return the payload of whichever operand the
compiler put in the destination register. The guest's x87 has a rule (the first source, quieted); the
generated translation we are proved against does not follow it consistently, and the choice does not
follow the written order of the operands either (`build/probe_nan_codegen.c`: both orders of the same
addition compile to the same allocation).

What that cost on this unit: three separate cowdiff rounds to find that the (0,1) field wanted the
memory operand's payload, the (1,2) field wanted the operand reached by index, and the (2,2) field wanted
the cosine out of `[ebp-4]` rather than the product that had been in st(0). The two additions therefore
carry an explicitly stated rule (`cow_fadd_m` / `cow_fadd_r` in
`src/geom/cow_102d7c47_rotation_matrix_from_axis_angle.c`); the multiplications and subtractions are plain
expressions because the harness agreed with them at every site it exercised. Mutation M9 (swap the
operand order of the memory-form multiply) is MISSED on purpose and recorded as such: no state can
separate the two spellings, so the source order there carries no meaning.

Consequences for the loop:

- **Every float unit with more than one NaN-bearing input can hit this.** Expect it in the matrix,
  quaternion and spline families. The cheap defence is what this unit now does: state the rule where
  cowdiff disagrees, and keep a two-NaN seed state so the rule is guarded.
- A seed state that wants two NaN operands must pin BOTH of them to *different payloads* (0x7fc00000 and
  0x7ff00001 worked), or the question never gets asked.
- If someone wants hardware-faithful NaN payloads instead, the place to change is those two functions, and
  the harness will report the disagreement - it is a policy choice, not a bug.

## 2. Hand-written seed states must pin what the fuzzer controls

`guest_fill()` fuzzes `df` (and the registers) even for pinned states. Three consequences, all of which
bit this unit:

- A state that names an axis/vector is only that vector **with DF clear**. With DF set, `movsd`-based
  copies walk the wrong way and the arithmetic reads never-initialised frame slots. `mkseed_102d7c47.py`
  now pins the entry's frame copy (`frame_axis`, the three words at 0x00993bd0) in every state, so a state
  means what it says either way. Units that convert `movsd` copies and do NOT pin the frame (0x102d9502 is
  one) have states whose intent depends on a coin flip.
- A state that wants to observe a rounding difference must be checked against the *field it targets*: the
  first product round-trip state separated the (0,1) field only, so mutation M2 (using the register value
  for the (1,0) field) passed until a second state was added for +0x10.
- Adding a hand state shifts every fuzzed state's index, and so the whole fuzzed cohort: an added state
  can make previously-unseen inputs appear (this unit gained a failure at 696 that had never run) and hide
  ones that were covering something.

## 3. `cowdiff --no-build` after a mutation run tests the MUTANT binary

`build/cowdiff/cowdiff_<hex>.exe` is left as the last mutation built. `--no-build` on a clean tree then
reports the mutant's behaviour as ours - it looked like the callee-saved pops had stopped working. Always
let cowdiff rebuild (or delete the exe) after `mutate.py`.

## 4. A pinned write is capped at 32 bytes, silently

`parse_pin_write` stops at 32 bytes (`while (*q && out->n < 32)`), and does not report truncation.
`cow/seeds/102d7ef1.json` writes all sixteen matrix sentinels in ONE entry of 64 hex-pairs, so only the
first eight fields were ever sentinelled; the notes claim sixteen. `cow/seeds/102d7c47.json` splits its
sentinels into two 32-byte writes for that reason. Worth a check of the other seeds that write more than
32 bytes per entry, and possibly a hard failure in the harness when a `bytes` string is longer than 64
characters.

## 5. A read or a store MOVED by one instruction is observable even when both sides fault

cowdiff compares the whole tracked memory on a faulted state too (only `esp` is skipped when a side
faults). So on a state where a fuzzed pointer is unmapped, the side that died first has written a shorter
prefix of the stack, and the comparison reports `memory` - not `fault`. f_102d8019's first `fsub` reads
`[at]` three instructions after the `fld` that reads `[eye]`, with a `push esi` between them; reading both
operands together made eight fuzzed states disagree at the pushed-esi word while BOTH sides faulted with
0xC0000005. Mutation M1 in `cow/mutations/102d8019.json` is exactly that regrouping, and it is caught.

Consequence for every future unit: transcribe reads and writes in instruction order, do not group an
operand fetch with the operation that consumes it if anything (a push, a store, a pop) sits between them in
the listing. "It's only a read" is not true when the read is what faults.

## 6. Some transcription gaps are unobservable, and should be said so

Two mutations in this family were MISSED and are recorded rather than fixed:
- f_102d7c47 M9: swapping the operand order of a `fmul dword ptr [m]`. No state can tell - the compiler
  picks the destination register and the C order does not reach it.
- f_102d8019 M2: loading a raw `mov ecx,[ebp-0x14]` at its store instead of at its load. Nothing writes
  that slot in between in any state (only the stubbed callee would), so the six-instruction gap carries no
  meaning. Its sibling on the d column, where a store *does* intervene, is caught at state 318.

Both are the honest version of "the checker does not compare this", and the mutation file says why.

## 7. One-off: a flaky image comparison

One run of `cowdiff 0x102d7c47` (the run that also rebuilt) reported a single memory mismatch at
`@101ac944 8bffffdc/8bfffffc` in state 696 - a code word neither side writes, one byte apart, with no
fault and equal esp/eax/edx. The following four runs (same binary, same seed) passed. Left unreproduced;
if it comes back on another unit it is a harness problem, not a unit problem, and the place to look is
what writes into the image region during a state (the IAT-binding step and the table-refresh chain are the
candidates).

## CORRECTION: the partial-register refusal IS priceable - my "no_adapter" finding was my own bug (2026-11-07)

Yesterday I wrote here that releasing `partial_register_write` could not be priced because a 120-unit
sample came back `no_adapter: 103/117`, and drew the lesson "a refusal cannot be priced by proving its
units until the units are reachable". **The lesson was built on an artifact and is withdrawn.**

`no_adapter` has nothing to do with adapters. In `lift_proof.py` it is booked at two places that
hardcoded `src/lifted` while my experiment pointed the prover at a scratch tree via `COW_LIFT_SRC`:
the `isfile` presence check, and the list of files handed to the compiler. So every scratch-only unit
was booked `no_adapter` for not being in the committed tree - and, worse, the units that *were* in the
committed tree got the **committed file compiled instead of the file under test**. Two experiments, two
confident numbers, both measuring the wrong directory.

With both lines following `LIFTED_DIR`, the same 120-unit sample prices the pattern honestly:

    pass 40/120 = 33%   |   eax 38 - memory 13 - compile:C2109 6 - compile:C2100 6 - edx 6 - fault 5
                        - compile:C2065 2 - hang 2 - out-of-region 1 - timeout 1

So `partial_register_write` (4,448 refused) is worth roughly **+780 proven units** at today's quality,
and the population would grow 5,290 -> ~7,646, which DROPS the README rate from 74.1% to ~61.5% while
raising the absolute count. Priority is "more functions proven correct", so the release is right and the
rate drop is the honest cost of telling the truth about the denominator.

The shape of the failures says where to spend the effort next: `eax` is the single biggest group
(38 of 120), and `eax` wrong is precisely what a whole-register assignment does when the guest wrote
only al/ax/ah. The refusal and the failure group are the same bug. **Fix the write width in the lifter and
the refusal can go away with it** - that is priority (a) work, and it is now priced.

Also true, and worth not losing: I had to restore `cow/lift_proof.json` afterwards. The scratch run had
written 690 lines of verdicts for files that no longer exist into the HAND proof record. An experiment
that grades a scratch tree must not be allowed to sign the real ledger.


## The partial-register pattern, fixed in the lifter and measured (2026-11-07)

Priority (a) executed end to end on the largest refusal family. Same 120-unit sample, three states of the
lifter, nothing else changed:

| lifter | pass | what the losses were |
|---|---|---|
| released with no model (`COW_LIFT_ALLOW_PARTIAL`) | 40/120 = **33%** | eax 38, memory 13 - the whole-register assignment lying |
| + width model (`partial_write_sequence` / `apply_partial_widths`) | 76/120 = **63%** | eax 1, memory 1 - and 41 compile failures |
| + `(int)&DAT_` cast fix and subscripted image symbols | 84/120 = **70%** | C2100 10, memory 6, C2065 4, edx 4, eax 3 |

Three things worth keeping from this.

**The width model is the fix, and it works the way the refusal said it should.** `gen_model` now returns
the ordered width of every write to a tracked register (`full`/`low8`/`high8`/`low16`) straight off
the generated instruction list - the only place the width survives - and the lift rewrites the k-th
assignment to `g->R` into a masked merge when the k-th guest write touched only part of it. Alignment is
by POSITION, which is a strong assumption, so it is *checked*: if the counts disagree for any register the
body writes partially, nothing is rewritten and the unit keeps the refusal it always had. Shipping stays
gated on having a model, not on hoping cowdiff agrees. The first 120-unit run after the model dropped eax
from 38 to 1 - that is the bug being real and the fix being the right one.

**The compile failures were two unrelated lifter bugs wearing the released population's clothes.** Once
the units were emitted, the dominant loss was not semantics, it was that they did not compile:

* `(int)&DAT_104ca438` came back as `(int)& rd32(COW_IMG(...))` - C2102, *'&' requires l-value*. The
  rewriter's address-of detection refused to treat a closing paren as anything but an operand end, so a
  TYPE CAST before the `&` read as bitwise-and. Fixed by looking back for the matching paren and asking
  whether it encloses a type - from a CLOSED LIST, not "any identifier", because `(a) & b` is an AND and
  guessing that the wrong way corrupts an expression. An unrecognised word stays AND: it reproduces the
  old C2102, which is a refusal, and a refusal is the safe direction.
* `(COW_IMG(COW_ADDR_LIFT_10377C58))[param_2]` - C2109/C2198, *subscript requires array or pointer type*.
  Ghidra types a `DAT_` as `undefined4 *` and then subscripting it looks legal in its own C, but
  `COW_IMG` yields an address integer, not a pointer object. Now both the read and the store form become
  `rd32`/`wr32` at the dword-scaled address. That alone took C2109 from 23 rows to 1.

**Sample-first earned its keep again.** Each of the three measurements above took ~5 minutes on 120 units;
the full population is 5,661. The '&' fix and the image-subscript fix were each chosen because a compile
group was visible in the sample, not because the code looked wrong. And the width model would have been
*reverted* on a bad reading if I had trusted the first number (33%) instead of asking what the remaining
losses actually were - at 33% the model looked like a failure, and it was really a correct model whose
units could not compile.

Selftests went 53 -> 68 to cover all of this (7 width cases incl. the refusal on misalignment, 6 address-of
cases, 2 image-subscript cases). Population with the model: 5,437 -> 5,661 emitted.


## The string-op refusal was mostly a prefix-match bug - fixed, and deliberately NOT released (2026-11-07)

`string_op_not_modelled` was the queue's top pattern at 2,560 refusals. A delegated census of the whole
population found the refusal predicate was:

    m["has_string_op"] = any(c["mnem"] in STR_MNEMS or c["text"].lower().startswith(STR_MNEMS) ...)

with bare `"movs"` in `STR_MNEMS`. A **prefix** match on a mnemonic. So `movsx ecx,ax` (sign-extend)
and `movss xmm0,[ecx]` (SSE scalar move) both "contained a string instruction": **1,328 of the 2,560
functions - 51.9% - have no string instruction in them at all**, and both mnemonics are ones the lift
already models perfectly well. Nothing was missing; the classifier was wrong.

Replaced with `gen_model.string_op_of(c)`, which returns the canonical form (`"rep movsd"`, `"scasb"`)
or None: whole-word match on the optional repeat prefix plus the mnemonic, with `\b` after the width
letter doing the exclusion. It returns WHICH op rather than a boolean, because the next step is modelling
one idiom at a time and needs the census per function. Two traps handled deliberately: `movsd` is *both*
the string move and an SSE scalar move, so an unprefixed match must show the segment-qualified destination
(`es:[edi]`) the string form always carries - otherwise the fix just relocates the false positives; and
`lods` is proved by `esi` rather than a destination register, since its destination is al/ax/eax by
width. 20 STROPS cases in the selftest lock both directions, because a false *negative* here ships an
unmodelled loop and is worse than a refusal.

The census also settled where the truth lives for when the rep family gets modelled: the **generated body
already contains complete C loops** (`while (ecx) { wr32(edi, rd32(esi)); esi += (df ? -4 : 4u); ... }`)
with the direction flag honoured and flags computed for scas/cmps, while Ghidra renames EDI/ESI/ECX to
`puVarN`/`iVarN`, folds byte counts into element counts, initialises the `scas` counter to -1, drops
the flag model, and re-associates four consecutive `rep stosd` into one loop with three stores. Model it
off the generated body, not Ghidra.

**Second fix, found while measuring this family:** `*param_1` immediately after a cast - Ghidra's
`(int *)*param_1` - was read as a multiplication and left in the output, where the type pass turned the
cast into `CowU32` and produced `*(CowU32)param_1`: C2100, "you cannot dereference an operand of type".
54 of the 299 released units. The test was the one I had already written for `&` (`_is_cast_paren`:
a `)` closes a cast when what it encloses is a type from the closed list), so this is one line reusing
tested logic, and an unknown word stays a multiplication - which reproduces the old C2102 refusal rather
than guessing. One case remains genuinely unfixed: `*(int *)rd32(x)`, a typed deref with a call operand.
That is the next pattern, not this one.

**NOT RELEASED, on purpose.** The family measured 72/299 = **24%** pass on the first run - far below the
partial-register family's 86% - and the re-measurement after the deref fix was interrupted. So `src/lifted`
was left at 5,586 and no `--apply` was run for real: the classifier changes are committed, but nothing
new is in the tree. The numbers before release are roughly +299 population for +72 proven, which would take
the README from 74.8% to ~72.2% - more absolute units, a worse rate, and it is exactly the kind of trade
that should be decided on a clean measurement of the fixed lifter rather than on the interrupted one.

## The interruption, and what it exposed

The command was cut off mid-`--apply` with a `--rerun` proof queued. Three consequences, all repaired,
and one of them only detectable because I built a tool for it afterwards:

* `layout/` had been regenerated for the **scratch** population (7,283 bridges vs the committed 6,175) -
  `--apply` writes those files into the repo even when `--out-dir` points elsewhere. Restored from HEAD.
* Orphaned child processes from the interrupted run were still alive and could still write. Killed first,
  and only the two whose StartTime matched the interrupted launch - not every python on the box.
* **`cow/lift_proof_all.json` was deleted**, not merely modified: the atomic save (temp + rename) was
  caught mid-flight. It is tracked, so `git checkout HEAD --` recovered it, and it verified fully
  consistent afterwards: 5,586 verdicts, 5,586 files, 4,177 proven, zero files without a verdict and zero
  verdicts without a file.

The reason that recovery took three attempts is worth recording: the first two commands produced *no output
at all* and exit 1, because the missing file raised inside a compound PowerShell line and swallowed
everything. I read that as "the command is broken" twice before checking the file directly. Two habits
follow - check the simple fact before debugging the complex command, and don't chain a checkout behind a
python invocation that can die.

`tools/cow/ghidra/lift_record_check.py` is the durable version of that lesson: population is the files on
disk, so "is the record consistent with the tree?" should be a question with a one-command answer, asked
after any interrupted run rather than reasoned about. (It needed the three-climbs-from-the-directory root
fix - the same off-by-one that made `compile_one.py` claim the bridges did not compile - and now says so
in a comment, because this is the third time that particular mistake has cost me a detour.)

## String-op family released at 28% - and why the rate drop was the honest choice (2026-11-07)

The re-measurement finished: **78/283 = 28%** pass, up from 24% before the deref-after-cast fix. Weak -
only about a third of the units that even compile pass, against 96% for the partial-register family.

Released anyway. **5,811 lifted / 4,255 proven (73.2%)**, down from 74.8% on the ratio, up by 78 on the
number that actually matters.

The reasoning, because it is the kind of choice that is easy to get quietly wrong:

* **The classifier is correct.** `movsx` is not a string instruction. Once that is fixed, the lifter
  legitimately emits these 283 units. Withholding them to keep a flattering denominator would be the same
  mistake as only committing the ones that pass - it makes the ratio a performance instead of a measurement.
  Refusing to ship a correct fix because its side effects look bad in a headline is faking in the other
  direction, and it is the subtler one.
* **Record and tree have to agree.** The 283 were already proven into `cow/lift_proof_all.json`. Shipping
  the files without the verdicts, or the verdicts without the files, is the inconsistency that
  `lift_record_check.py` exists to catch. Releasing is what makes the two match.
* **The 205 failures are inert.** They cannot reach the game (ledger done -> genwraps -> table.c is the only
  door, and done needs a verdict), and their grouped failures are precisely the next worklist.

**The syntax gate pruned 58 of the 283** - `emitted 5869` but `lifted 5811`. Those are units whose C
does not compile, and their verdicts then described files that no longer existed. `lift_record_check.py`
flagged exactly that (58 stale rows), and `lift_record_prune.py` is new and does one job: delete a verdict
only when its file is absent, report-only by default, atomic write. Population is the files on disk.

One of the pruned 58 is `0x10018ca0` - the unit diagnosed with the unfixed `*(int *)rd32(x)` typed-deref
bug. That agreement between two independent mechanisms is reassuring, and it names the next job: that bug is
worth roughly 20 C2100 rows plus 18 C2065 in this family alone.

Also fixed: `lift_record_check.py` had a hardcoded "HEAD expectation: 5586 files / 4177 proven" left from
the previous release, so it was contradicting a perfectly healthy record. A safety tool that cries wolf is a
safety tool nobody reads - it now asks git.

## Two refusals measured before touching the lifter (2026-11-07)

**partial_register_write residue: parked, because the refusal is correct.** The queue offered it with
advice to "improve the alignment". Before writing an alignment algorithm I censused 200 refused units
(`tools/cow/ghidra/lift_partial_diag.py`, read-only). Result: ~200/200 misaligned, and the mismatch is
almost entirely **n_C = 0** - registers the generated body writes 2-9 times that the decompiled C never
assigns at all, with bare `return;` so the return stamp adds none. My own hypothesis (the return stamp
double-counting `g->eax`) is in the tool's docstring and is **wrong for this population**: the extra==returns
shape is 26 units, the n_C = 0 shape is the whole rest.

So Ghidra optimised the register away - usually `eax`, which is the caller's return value, and which
cowdiff compares at return. Those units cannot be lifted from Ghidra semantics at any alignment: releasing
them would ship an `eax` that still holds the entry value. Reaching them means using the generated body
as SEMANTICS rather than as plumbing - a different, much larger project. Parked in `cow/skip_patterns.txt`,
which `pattern_task` honours, with the evidence recorded next to it so the next reader does not re-derive it.

The lesson is the one this session keeps charging me for: the queue's action text is a *claim*, and I have
now shipped three stale ones (`no_adapter`, "not in the refusal set", "improve the alignment"). Each cost
a detour. The fix is cheap and I keep not doing it - when a pattern is measured, rewrite its action in the
same commit. Both actions in `patterns.py` are corrected now: partial-register says explicitly *do not
improve the alignment*, and argcount says explicitly *do not invent an arg-count rule*.

**argcount_mismatch (2,134): systematic, and the lever is elsewhere.** Its action claimed these were
"per-address accidents, plumbing to triage, not a family". A census of the reason strings contradicts that:
pushes exceed Ghidra's parameter count in ~2,000 of 2,134 (+2: 743, +1: 645, +3: 307), commonest shapes
`ghidra=1 push=3` and `ghidra=0 push=2`. And reading the refusal site: it is at a **call site** (the
address in the reason is the *callee*), and it fires only `while the pushed words are still being GUESSED`
- the code itself says a measured push list makes the decompiler's argument count worthless. So the work is
making `push_values` measure instead of guess, and because one callee blocks many callers, a single fix
releases a swarm. That is the next investigation.

## argcount_mismatch: measured, widened, killed by a sample, and the gate hazard it exposed (2026-11-07)

The queue offered `argcount_mismatch` (2,134) with advice to make `push_values` measure instead of
guess. It refused a unit whenever a call site's pushed words could not be named. That is four different
conditions hidden behind one word, so I tagged each bail-out in `gen_model._push_values` (no behaviour
change) and censused 200 refused units with `tools/cow/ghidra/lift_pushdiag.py`:

| why | sites |
|---|---|
| unnameable | **837** |
| no-pushed-record | 189 |
| pending-vs-pushed | 62 |
| stale | 4 |

The offenders were plain registers - `push edx` in a body whose `env` had no key for it: `_operand_expr`
does `return env.get(text)`, so an untracked register silently became "cannot name this argument" and the
**whole unit** was refused. Releasing them looked like a one-line fix, and the narrow version (fall back to
`g->reg` only for registers the body never writes) was a near no-op - 837 to 833 - which told me the
registers *are* written, just by instructions the model cannot name.

So I widened it: any plain register falls back to `g->reg`. **207 units released, 20/207 = 10% passed** -
worst release of the session - and the failures were `eax`/`edx` mismatches, 8 hangs, 3 timeouts and an
out-of-region write: the signature of a callee handed the *entry* value of a register instead of the value
the guest computed. My justification ("a lifted body reproduces register writes as assignments to `g->reg`")
was simply false - the lifted C carries register values in Ghidra locals, so `g->reg` at the call is
whatever the frame started with. **Reverted.** The tags and the census tool stay; they are behaviour-free and
they are what turned a vague 2,134 into a table that could be tested and killed in one 5-minute run.

The real find is a harness bug that would eventually have destroyed work. `syntax_gate` compiled and
pruned from the module constant `LIFT_DIR` while the run honoured `--out-dir` - so `--apply --out-dir
scratch` compiled the **committed** tree and deleted from it whatever the compiler disliked. My scratch run
deleted 28 proven files (they were judged against scratch-generated `layout/` headers). Recovered with
`git checkout -- src/lifted`, no loss. Both paths now follow the run's directory, and I verified the fix
the only way that counts: a fresh scratch apply left `src/lifted` at 5,811 with **0 tracked deletions**,
and pruned its 58 non-compiling files from *scratch* where they belong.

I also had to restore the record rather than prune it. Pruning deletes verdicts whose file is missing, which
was right twice before, but here 28 deleted committed files had made real units look "new" - so they were
re-proved against scratch bodies and two genuine passes were overwritten. `lift_record_check.py` showed
4,253 where HEAD had 4,255, and that mismatch is what said prune was the wrong tool: an overwritten verdict
has to come from git, not from a cleanup script. Restoring gave 5,811 verdicts / 5,811 files / 0 stale.
