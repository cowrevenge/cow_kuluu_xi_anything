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

## argcount_mismatch: parked on measurement, and a census bug that nearly sent me the wrong way (2026-11-07)

`argcount_mismatch` (2,134) is parked in `cow/skip_patterns.txt` with its evidence, after the same
measure-first pass that killed the last two theories about it. Of ~1,300 sampled call sites, 1,095 guessed
as `unnameable`. The producers of the registers we could not name:

| what wrote it | count | why it cannot just be named |
|---|---|---|
| `lea <r>,[esp+IMM]` | ~180 | a frame address; `g->esp` at the call is wrong because the pushes themselves move it |
| `mov <r>,dwordptr[...]` | ~110 | memory operand - `_operand_expr` refuses these deliberately and rightly |
| `mov <r>,<r>` | ~90 | poisoned transitively by one unnameable source |
| `pop <r>` | ~97 | value is whatever was on the stack |
| never written | ~41 | the only provably safe subset, and too small to be the family |

So the fix is materialising each pushed word **at push time**, which the lifted body cannot express in
general: Ghidra turned the pushes into call arguments, so there is no position left to put a statement at.
That is a design change, not a pattern tweak - and both cheap answers were already tried and are recorded as
failed, so nobody re-buys them (`g->reg` fallback 20/207 = 10%, `never written` narrowing 837 to 833).

**The part worth keeping is the measurement bug.** My first census reported 528 offenders "last written by
`pop`", which pointed straight at modelling `pop` - a substantial piece of work for no reason. The bug
was `wrote[-1]`: the last write *anywhere* in the body. A function's epilogue `pop ebx / pop esi / pop
edi` runs **after** its calls, so it shadowed the instruction that actually produced the pushed value.
Restricting to writes before the call changed the answer completely (`lea`/`mov`/`pop` reordered, and
`pop` fell from first place to fourth).

Two habits fall out of it. A census is a program and gets the same suspicion as one - if it returns a
suspiciously tidy answer, check what window it sampled before believing the conclusion. And when a
measurement is load-bearing enough to justify a week of work, it is worth stating the window in the code
rather than assuming the reader will notice the epilogue problem. The fix now says exactly that in a comment,
because the wrong version is what a future reader would otherwise reproduce.

## The x87 first slice: a contract, not a heuristic - 4,332 of 5,971 proven (2026-11-07)

The queue handed back `x87_not_modelled` with the census already in its action text, and the action named
the first slice. Two things had to be measured before writing anything, because both had produced confident
nonsense earlier in this session.

**Is the family real?** `has_x87` fires on an x87 mnemonic OR on the text `X87_(PUSH|POP|STORE)` anywhere in
a body's statements - and the generated CALL template contains `REGS_STORE; X87_STORE; f_xxx(g); REGS_LOAD;
X87_LOAD;`. If that template were emitted for every call, the family would be largely a template artifact and
the "fix" would have been deleting a marker match. Measured (tools/cow/ghidra/lift_x87markers.py): 1,948 of
1,949 refusals use a real x87 mnemonic, 1 is marker-only, and a control group of thousands of call-containing
units refused for OTHER reasons comes back fp=False. The family is genuine. That check cost one script and
ruled out building a model on a phantom.

**The design.** cowdiff compares `o->top` and `o->st0 = g->st[g->top]` at return (tools/cow/cowdiff.c:1157),
so an x87 lift is only honest if the guest's FP state at return is what the original leaves. It is provably
so in exactly one shape: the unit uses the FP stack as SCRATCH. So `gen_model.x87_shape` reads the generated
body's own instruction list and requires - empty stack before its own push, never deeper than one, empty at
every call, empty at the end, and no instruction naming an ST register. Under that contract top/st0 are
unchanged by us and by the original alike, and the only FP effect cowdiff can see is what the unit stores to
guest memory - which Ghidra does model, as ordinary float arithmetic on locals. The arithmetic is therefore
Ghidra's, never the generated body's: lifting the oracle's `X87_PUSH`/`fr_cw` statements would agree by
construction, which is a failure wearing a success's clothes.

Reading the recompiler's actual renderings changed the gate before it was written (`fst` does not pop, and
`fadd`/`fmul`/`fsub`/`fsubr`/`fchs`/`fabs` with a MEMORY operand emit neither PUSH nor POP) - so an op has to
be checked against the depth it happens AT, not against its push/pop delta. `fsubr` reverses the operands.
`fldcw` changes the rounding of everything after it. `fistp` rounds nearest-even per the control word where a
C cast truncates, which is a silent systematic wrong answer and why fild/fistp are excluded even though the
census counted them "simple". Each clause has its own case in lift_selftest.py (18 added, 108/108 pass), so a
clause cannot be quietly widened later; one of those cases caught my own wrong expectation (two pushes books
`push_beyond_one` BEFORE the `fmul st(1)` is ever reached) and the assertion was fixed, not the gate.

**Result, measured on the whole family (1,949):** 353 admitted, 160 survived the other refusals and the
syntax gate, 77/160 = **48.1% proven**. The number that matters is the one that is NOT there: **0 of 160
rows failed on st0 or top.** The contract held on every unit it admitted - that is the evidence that gating
on shape is the right mechanism, as opposed to releasing and hoping.

**Release decision (rule 1: more functions proven correct, nothing faked).** Released at 48.1%, as the
string-op family was released at 28%: only cowdiff-passing units count, the denominator is honest, and the
absolute count goes up 4,255 -> **4,332** while the ratio dips 73.2% -> 72.6%. Refusing to ship a correct
model because its rate is modest would be faking the denominator, which is the same crime in the other
direction. Released units cannot reach the player until they are ledger-promoted; the refusal protects the
report, not the player.

**Where the remaining failures point.** The failure split by shape is the next piece of work, and it is not
a gate problem: pure-copy units (fld/fstp only) pass 23/55 and fail on REGISTERS (eax 14, edx 7,
no_row_output 8) - ordinary lift problems these units would have had with or without x87; units with float
arithmetic pass 54/105 and fail on MEMORY (40 of their 51 failures). That is the double-vs-float
intermediate: the runtime keeps `g->st[]` as double and fcw is pinned 0x027F, whose PC field makes `fr_cw`
the identity, while Ghidra declares `float` locals and rounds per step. So the fix is a type-model change in
ghidra_c (carry FP values in double, round only at the store), not more gating in gen_model - recorded in the
queue action so the next turn does not re-derive it.

**Refusals still open, counted over the whole family** so nobody re-censuses it: fild 397, push_beyond_one
378, fcomp 251, pops_caller_state 143, leaves_value_on_stack 96, fp_live_across_call 84, st_register_operand
57, op_at_wrong_depth 45, fcom 42, fdiv 40, fsqrt 13, fdivr 8, fnstcw 8, fsincos 7. fild and push_beyond_one
are the two big ones and each is its own piece of work (control-word rounding; a real FP-stack model).

**Process notes.** `lift.py --entries <353> --out-dir scratch --apply` proved the rate, then the release went
through a FULL-population `--apply` so `layout/` was regenerated for the real tree rather than for the
scratch subset - the trap that bit this project once already. The full run doubled as a determinism check: 0
content changes to the 5,811 committed units, and the only 28 "modified" files were the ones recovered by
`git checkout` after the pruning incident, differing in line endings only (index LF, writer CRLF). Those are
committed alongside so the "N files modified" signal stays meaningful for the next run. `lift_record_check.py`
reports RECORD CONSISTENT: 5,971 files, 5,971 verdicts, 0 missing, 0 stale.

## no_ret_in_body was a tail call: 4,332 -> 4,889 proven, and a guard that was eating the family (2026-11-07)

The queue handed back `no_ret_in_body` (1,601) with a one-line action - unmeasured, so the first move was
the census (tools/cow/ghidra/lift_noret_diag.py), not the lifter. It came back 199/250 static `jmp FUN_x`,
27 indirect, 23 ending at a call, 1 other; 245 of 250 end in `jmp`, and 137 are two-instruction bodies. The
biggest family in the report was the guest **tail-calling**, which gen_model had no concept of: no `ret` to
transcribe, so the whole unit was refused.

The oracle states the semantics outright: `jmp 0x10196a10` renders as
`{ REGS_STORE; f_10196a10(g); return; }` - a call into the target with no return-address push and no
cleanup, because the TARGET's `ret` is the one that pops the return-address slot (rt_return is
`g->esp += 4 + argbytes`, runtime/runtime.h:88). Ghidra already gives the matching shape. Three things had
to be right, each of which is a silent-wrong-answer if missed:

1. **the adapter epilogue vanishes.** Pops, `g->esp = sp0` and `rt_return` would each act on a frame the
   target already returned from. Note what is deliberately NOT required: balanced pushes/pops. A guest
   `push ebx; jmp target` really does let the target's `ret` pop the saved ebx, and the lift reproduces
   exactly that by replaying the push and having no epilogue. (My first comment claimed the gate required
   balance; it does not, and the claim was corrected in place rather than left as a plausible lie.)
2. **a separate bridge form** - `cow_bridge_tail_X` pushes no return address and cleans nothing, or the
   callee reads its arguments one word too high and returns to garbage.
3. **registers only when nameable.** The lifted body keeps what it computes in Ghidra locals, so `g->reg`
   at the jump is the ENTRY value. It is passed only for a register the body never writes at all
   (gen_model.registers_never_written - provably still the incoming one) or one the prologue maintains;
   anything else REFUSES the unit. That rule is the argcount_mismatch failure (20/207 = 10%) kept from
   happening again in a new place.

**The bug that measurement caught and thinking did not.** My first `note_tail()` refused a tail unit if its
target was also called normally anywhere in the image, reasoning that two bridges would collide on one name.
They do not - `cow_bridge_tail_X` and `cow_bridge_X` are different symbols - and since almost every function
IS called normally by someone, that guard was quietly refusing most of the family. It survived a single-entry
preview (which emits fine, because no other unit is in the run to register the normal call) and only showed
up as a contradiction: **the preview emitted 0x10199770 and the batch refused it** as
`leftover_unbridged_call`. Removing the guard took the emitted population 6,567 -> 6,760 and
`leftover_unbridged_call` 1,381 -> 931. The lesson to keep: a single-entry preview and a full run are
DIFFERENT MEASUREMENTS, and when they disagree, the disagreement is the bug - chase it, do not pick a side.

**Released**: 789 new units, 557 proven (70.6%), tree at **4,889 of 6,760 (72.3%)** - the family landed at
the tree average, and the ratio held, which is what a real pattern fix looks like. 11 selftest cases lock
the contract (TAILJUMP + UNWRITTEN, 119/119).

**One cost, stated plainly**: the `--out` merge meant my "new files" filter was wrong (`git show HEAD
--name-only -- src/lifted` lists that commit's files, not the tree's), so the proof re-measured 6,600 units
instead of 789 - about an hour of machine time. The record is better for it (everything re-graded against
the current lifter), but the filter should have been `git ls-files src/lifted`. Noted so it is not repeated.

**Next pattern, already visible**: `hang` is now the largest failure group (118), introduced by this family -
a tail unit whose target parks on a fuzzed register. Census it with tools/cow/lift_hang.py before touching
anything; it is a new group, not a reason to doubt the 557 that passed.

## The x87 memory failures were not rounding: a float argument was being read as an integer (2026-11-07)

The queue came back to `x87_not_modelled` with an action I had written myself, naming the next fix: "carry
FP values in double and round only at the store", justified by the arithmetic units failing on `memory`
40/51. That reasoning was plausible and **wrong**, and checking it before implementing it is what saved a
type-model change that would have fixed nothing.

The check took one unit. The memory failures were dominated by `fld` + ONE arithmetic op + `fstp` - and a
single float operation rounded once at the store is the same answer whether the intermediate was float or
double, so per-step rounding could not have been the cause for them at all. `lift_bodypeek.py` on
0x100271f0 showed the actual bug in one line:

    generated:  fld dword ptr [esp+8]   -> X87_PUSH(rdf32(A))
                fmul dword ptr [eax]    -> x87_s0 = fr_cw(x87_cw, x87_s0 * rdf32(A))
    Ghidra:     void FUN_100271f0(float *param_1, float param_2)   {*param_1 = param_2 * *param_1;}
    emitted:    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));

The adapter read EVERY argument with `rd32` into a `CowU32`, so the float parameter entered the body as its
raw bits and was multiplied as an integer. Ghidra had said `float` in the prototype and the lift had thrown
that information away. The double-vs-float theory was a story that fit the group label (`memory`) rather
than the evidence.

Fix: `gen_model.param_types(c)` reads Ghidra's declared parameter types, and lift.py declares a non-pointer
`float`/`double` parameter as that type and reads it with `rdf32`/`rdf64`. Register arguments deliberately
keep the old behaviour: the guest put bits in ecx/edx, and reinterpreting a register as a float is a change
that needs its own evidence rather than a free inference from a decompiler's guess. An unrecognised type
spelling falls back to the integer default, i.e. exactly the previous behaviour, so an unknown costs a
cowdiff failure and never a new silent behaviour.

Measured on the same 160 x87 units: 77 -> 95 pass (+18), **0 regressions**, memory 42 -> 26. Full-tree
release: 42 files changed, re-proved, 4,889 -> **4,905 proven of 6,760 (72.6%)**, 0 regressions, record
consistent. 5 cases in PTYPES lock it (124/124).

**Two tool traps hit and recorded, both of them mine:**
1. `lift_proof.py` treats an existing `--out` record as a CACHE and skips entries already graded. Re-grading
   changed files needs `--rerun`, which also *deletes* the old verdict first (the tool's own comment
   explains why: `setdefault` left 149 rows sitting at a stale `link_error` across three runs). My first two
   attempts silently re-graded 4 units and 0 units and reported success - "LIFT PROOF 0/0 pass" is a
   sentence that should never be accepted as a result.
2. Building an address list from `git diff --name-only` pulled in git's `LF will be replaced by CRLF`
   warnings as if they were filenames, so 38 of 42 entries were junk. `git status --porcelain` plus a
   regex, or `git ls-files`, are the right sources - the third time this session a shell-text scrape
   quietly produced a shorter list than I thought I was processing.

**The lesson worth keeping**: the action text in patterns.py is my own writing, and it was confidently
wrong. A queue action is a hypothesis with a number attached, not a work order - the next turn should read
it as a suggestion about where to look and still check the units first.

## `memory` is not one bug, and two of my own checks were vacuous before they were real (2026-11-07)

The queue stayed on x87, so the first move was to price the biggest refused sub-form (`op_not_in_slice:fild`,
397) instead of widening the gate on intuition. The asymmetry that made it worth asking: **fild is exact** (a
signed int32 fits a double; there is no rounding mode to get wrong) while **fistp is not** (the generated body
uses `fist32_cw(x87_cw, ...)`, which rounds per the control word - nearest-even at the pinned fcw 0x027F -
where a C `(int)` cast truncates). One refusal string was covering two different problems.

Measured (lift_fild_diag.py): allowing `fild` alone would admit only **46 of 300 (~15%)**, and those units
need the conversion to come through Ghidra correctly anyway - `(float)rd32(A)` is wrong for a negative, the
oracle does `(double)(int32_t)rd32(A)`, so it is the same sign-extension class of bug as the float-argument
one fixed earlier today. ~60 units for a change with real correctness risk. Not taken. Recorded so the next
turn does not re-derive it as an obvious win.

Then the larger target: `memory`, 661 failing rows, the biggest failure group in the tree. The group label
suggests one bug. lift_memshapes.py bucketed the harness's own detail text and the story is: store=value 317,
store=missing 244, store=extra 100; **region stack 544 of 661**; 419 fail at state 0 (deterministic - a path
is simply wrong) and 199 only later (input-dependent). The stack-region dominance pointed at a satisfying
single explanation - the decompiler deletes the frame, so a mid-body `mov [esp+4], eax` becomes an unread
local and the lifted body never performs the write.

**It is 89 of 544 (16%), not 544.** The other 455 are slots both sides wrote with different values, which is
argument-push content - the argcount/push_values family that is already parked on measurement. So the fix
that moves `memory` is the parked one, not a new frame-store replay. Had I built the frame-store replay on
the label, I would have written a "body as semantics" feature for a sixth of one group.

**Two vacuous checks caught before they could certify anything, both mine:**

1. `lift_stackstores.py`'s first detector matched NOTHING. The generated body does not spell
   `wr32((uint32_t)(esp + 4), v)` - it computes the address into a temp
   (`uint32_t A = (uint32_t)(esp + 0x4u); wr32(A, ...);`), so my regex saw no frame stores in 544 units and
   was about to report "this is not the frame-store bug" **while looking at the frame-store bug** (0x10028aa0,
   which the peek tool had printed on screen two calls earlier). A census regex that silently matches nothing
   is worse than no census: it delivers a confident negative. Now pinned by `lift_stackstores_check.py`, which
   asserts the by-eye unit IS found and a plain getter is NOT - so the detector cannot regress to matching
   nothing.
2. `lift_x87refactor_check.py` first reported "0 changes, exit 0" because it read its baseline from
   `git show HEAD:build/cow_lift/refusals.json` - and **build/ is gitignored**, so the baseline was an empty
   dict and it compared zero units. It now builds the population from the live snapshot plus the lifted files,
   refuses to report success on an empty population, and on the real 1,765 x87 units confirms the
   form-based `x87_shape` refactor changed neither admittance nor reason strings.

**A queue bug worth noting**: `patterns()` consulted FAMILIES for refusal families but hardcoded its
boilerplate for FAILURE groups - so the measured `memory` action I wrote was in the file and the queue kept
answering "go and group these" for a group I had just grouped. A tool that ignores its own research is the
quiet version of having done none. Fixed: failures now resolve through `family_of()` too, with the old
boilerplate kept as the unclassified fallback.

Also this turn: `x87_shape` gained a form table (`X87_FORM`) and an `allow=` parameter so census tools price a
proposed widening through the production gate instead of re-implementing it and drifting - the exact mechanism
by which the wrong double-vs-float advice got written yesterday. `allow` raises for an op with no defined
form, so a census cannot wish one into existence. 124/124 selftests; no units or layout changed this turn
(the lift run was report-only).

## Refusal counts are FIRST-failure counts: depth 2 was a 378-unit lever that turned out to be worth 2 (2026-11-07)

The x87 queue stayed at 1,605, so the plan was to price the structural widening rather than reason about it.
`x87_shape` gained `max_depth` (alongside `allow`), implemented as a real knob - and the first version was a
knob that did nothing: the push clause was still hard-wired to `before != 0`, so a legal second push was
refused before `max_depth` was ever read. The census would have reported numbers from a flag with no effect.
Fixed to compare the actual depth-after-push; `lift_x87refactor_check.py` then confirmed over 1,765 x87 units
that `max_depth=1` changes neither admittance nor reason strings, and the 124 selftests (which include the
depth cases) still pass - which is the evidence the default reproduces the old rules, not my say-so.

**The answer: 2 units of 1,605.** Not 378. Relaxing the push clause exposes the next clause immediately -
those units fall to `st_register_operand` (239), which is precisely what the contract predicts: to combine
two FP values you must name `st(1)`. A unit that reaches depth 2 *without* naming an ST register can only be
LIFO scratch, and such units barely exist.

**The general lesson, and it applies to every number I have quoted this session**: a refusal reason records
the FIRST clause that fired, not the BINDING constraint. So "fild 397 + push_beyond_one 378 + fcomp 251" is
not a list of what each fix unlocks, and summing them is meaningless. The only honest price of a widening is
re-running the production gate with that one clause relaxed and counting what becomes LIFTABLE - which is
what `allow=` and `max_depth=` exist for, and what found the 46/300 for fild and the 2/1605 for depth 2. An
earlier version of this file quoted sub-form counts as if they were opportunity sizes.

Conclusion on x87: it is close to mined out for SAFE wins. What is left needs genuine design, not a
widening - `st_register_operand`/`pops_caller_state`/`leaves_value_on_stack`/`stack_too_deep` all need a real
FP-stack model in the lifted body, `fp_live_across_call` needs the X87_STORE publication, `fcomp`/`fcom` need
the condition codes, `fdiv`/`fsqrt` need helpers that do not exist, and `fistp` needs control-word rounding.
Refusing all of them is correct: each is a wrong answer wearing a plausible one.

**`bare_deref_width_unknown` (1,245) - diagnosed partially, and it is NOT the float-argument situation.**
The tempting read was "another dropped type". The dominant declaration behind the refusals is `void *pvVar1`
- and a `void *` carries NO width, so there is nothing to recover by parsing better; the width lives in the
generated body's instruction (`mov eax, dword ptr [p]`), and reaching it means aligning a Ghidra expression
to an instruction, which is the positional-alignment trap that killed the partial-register widening at 10%.
Also stated honestly: my census attributed a cause for only 85 of 250 sampled units, so the family is NOT
diagnosed and its 1,245 is not yet a price. The `DAT_xxxx` sub-shape (`*DAT_10456a28 = 0xb0;`) is its own
question - a global whose type Ghidra left untyped.

**A habit worth naming, because it bit three separate times this session**: `except Exception: pass` around a
call to a method I had invented (`rw._collect_types`) would have made the census report "no uncaptured bare
deref" for every unit and looked like a clean negative. Same shape as the frame-store regex that matched
nothing and the refactor check reading a gitignored path. A tool that cannot fail loudly is a tool that
certifies nothing - verify the API exists, and make an empty result an error rather than a pass.

## String ops are not blocked by a missing loop: they are blocked by the deleted frame (2026-11-07)

x87 is priced out for safe wins, so the loop moved to `string_op_not_modelled` (1,261) on the theory that
`rep stos/movs` set no flags and would be a clean first slice. Two censuses (lift_stringdiag.py,
lift_stringframe.py, the latter pinned by lift_stringframe_check.py against a unit read by eye) and the
answer is that the theory was about the wrong axis:

  * 98% are `rep` forms (293/300), so there is no cheap unprefixed slice.
  * The real blocker showed up in one Ghidra body. For
      `lea edi,[esp+0xc] ; mov ecx,0x25 ; rep stosd es:[edi],eax`
  Ghidra emits `uint local_94[37]; puVar7 = local_94; for (i=0x25; i; i--) { *puVar7 = 0xffffffff; ... }`.
  **The decompiler deleted the frame.** The guest wrote its own stack; the lifted C writes a host local that
  cowdiff cannot see in the stack region. No quality of rep-loop model fixes that, because the destination
  is gone from the body.
  * At least 170/300 (57%) are FRAME-BOUND on that evidence. The other 130 came back `other` from an operand
  walk that is too crude to price them (`lea edi,[eax+4]` lands in `other`), so the honest statement is
  "at least 57% blocked, the rest UNPRICED" - not "0 nameable, park it". The 0 is the frame-store-regex
  failure mode waiting to be believed, and the by-eye check is the only reason it was not.

**Why this matters beyond string ops.** The same root cause - Ghidra replacing guest-frame memory with host
locals - is the best explanation for the 455 `store=value`/`store=missing` rows in the stack region that the
memory census could not otherwise account for. One cause, two of the largest groups in the report.

**The design it points at, written down so the next turn starts from evidence rather than a hunch.** The
mapping is NOT a positional guess, which is what killed the partial-register widening: Ghidra names its
locals by frame offset (`local_94`, `local_c`), and the generated body independently shows which of those
addresses were ever taken (`lea edi,[esp+0xc]`). So:

  1. from the generated body, collect the frame offsets whose address was taken (lea/mov from esp/ebp);
  2. for each matching Ghidra local (`local_<offset>`), route its accesses to the GUEST frame at that
     offset - the adapter already reserves `m["locals"]` bytes and knows sp0;
  3. a local that never had its address taken stays a host local: it is a compiler temp, and promoting it
     would ADD stores the original never made (the `store=extra` direction, which is the failure mode to
     avoid here).

Step 1 is the discriminator and it comes from instructions known to execute, not from the decompiler's
opinion. That is what makes it a model rather than a transcription: the loop shape is x86 ISA (width from
the mnemonic, direction from df), the operands come from the lifted body, and the frame aliasing comes from
the generated body's own address-taking.

Not started this turn: it is a real piece of work, and starting it half-way through a long census turn is how
the last few wrong turns here got made. What this turn produced instead is the knowledge that the cheap
version does not exist, which sub-form is blocked, and that two of the report's biggest groups share one
cause worth attacking properly.

## `leftover_unbridged_call` was one join: Ghidra names a thunk by its target (4,905 -> 5,108 proven, 2026-11-07)

Instead of starting the frame model mid-turn (the notes say that is how wrong turns get made), the loop went
to the family where a guard bug of mine had previously hidden ~450 units - and the refusal label had never
been decomposed. lift_unbridged_diag.py runs the SAME code path the lifter does (classify + emit, one shared
Ctx, problems reset before the call exactly as _main does) and reports what the rewriter actually recorded,
because `leftover_unbridged_call` is produced by scanning the final text for a `COW_UNBRIDGED_` marker and so
loses which case fired.

Result: **94% (283/300) was a single problem**, `no_generated_call_site_for_FUN_x`. One unit explained it:
the guest does `call 0x1002c8b0`, whose generated body is one instruction `jmp 0x10028aa0`, and Ghidra renders
the call as `thunk_FUN_10028aa0(param_1)` - naming the thunk by its TARGET. The generated body records the
site at the address the guest actually called, so the exact-address join between the two missed and the
WHOLE UNIT was refused over a naming convention. A 931-unit family was one lookup.

Fix: `gen_model.thunk_target` / `follow_thunks` (single-instruction `jmp f_x(g)` only - two instructions is
not a thunk, and merging functions on a guess is worse than leaving them apart), and a second-chance index of
sites by their resolved target. Two decisions inside it worth keeping:

  * the BRIDGE is emitted for the site's address - what the guest called and what side A calls;
  * the register INPUTS are read from the function that finally RUNS, not the thunk. A thunk's body is one
    jmp and reports "takes nothing in ecx", which would have dropped every thiscall `this` through a thunk
    and reintroduced the null-pointer-store failure this project already fixed once. Those two addresses are
    different, and using one for both purposes is the bug waiting to happen here.

Released: 284 new units, **203 proven (71.5%)**, tree **4,905 -> 5,108 of 7,044 (72.5%)**, 0 regressions -
and the regression risk was genuinely zero rather than assumed, because the full re-lift changed no existing
file's content (verified with `--ignore-cr-at-eol`, after two earlier releases where that flag was the only
thing separating EOL noise from real drift). 5 THUNKS cases lock it, one per clause, and one of them caught
my own wrong expectation: I asserted a thunk CYCLE should resolve to the second address, and the code
correctly returns the start, which is the safe behaviour (it degrades to no-resolution, so the unit is
refused as before rather than bridged into a loop). The assertion was fixed, not the code.

The 131 still refused are NOT the same bug and stay refused for good reason: Ghidra emitted a call the guest
never made at that site (verified - the body has one call, Ghidra shows two, and the phantom target is a real
multi-instruction function, so this is Ghidra recovering control flow the entry does not contain). Bridging
that would execute a function the guest never called here. Refusing is the correct answer, and it is now the
recorded answer rather than an unexamined label.

## indirect_call_not_modelled (1,268) is Ghidra's FOLDED vtable callee - and the clause refusing it is the only thing stopping a host call shipping (2026-11-07)

Two censuses, both on samples of the family's own units (`lift_indirect_diag.py`, `lift_indirect_ghidra.py`).

**1. The guest-instruction side is one wall.** Tagging every place `_target_expr` returns None
(`gen_model.call_reg_values` now keeps a `why_unnamed` per register) gives, per site:

    762  mem UNNAMED      (call dword ptr [reg+disp])     <- 93% of all sites
      49  reg UNNAMED
       8  unknown UNNAMED
       0  abs UNNAMED     (no bug in our code - the good news, and only knowable by checking)

and of the 762: **745 are `mem-base-unnameable:<reg> = written-by-unnameable-instruction:mov`**. The base
register holding the vtable pointer was written by a LOAD (`mov eax,[esi]`), which `_operand_expr` refuses
outside the effect-free tail window for a sound reason: the value depends on memory as of that instruction,
and the lifted body re-evaluates the expression at the call. Naming it is the frame-aliasing model, not a
widening. So "allow loads at call sites" is priced out, and the 24 `merge-jump-target` sites with it.

**2. The C side is a different bug, and it is the one that matters.** Ghidra writes the vtable call with the
pointer load folded into the callee: `(**(code **)(*param_1 + 0x24))()`. `ghidra_c._calls` cannot see that
form - its indirect alternative needs a bare identifier inside `(* ... )(` - so **nothing bridges it**. The
deref pass, which runs later and does not know the text is a call, converts the reads and leaves the call:

    (*rd32((uint32_t)(rd32((uint32_t)piVar2 + 8))))(piVar2);

That compiles. It is a host call through a value read from guest memory: no return address pushed, no
REGS_STORE/REGS_LOAD, no `rt_call_indirect`. `leftover_problems` did not name it (`leftover_code_ptr`
cannot fire - the deref pass ate the `code **` text first), and a scan of every lifted file in the tree
found exactly one `(*` computed-pointer call in 7,044 files, inside a comment. So nothing has shipped, and
the reason nothing has shipped is the `indirect_call_not_modelled` clause refusing the unit for a *different
reason*. A guard that holds by accident is not a guard: with a 1,268-unit family, relaxing that clause is
the obvious move, and it would have shipped this. `leftover_problems` now refuses
`host_call_through_computed_pointer` structurally (balanced-paren scan, comments stripped), with a
selftest case that also pins the OLD pattern's blindness.

**3. What the fix is worth, by what the callee READS.** Counting folded callees as one lump over-prices
them: the syntax is the work, the leaves are the cost.

    147/250  RELEASABLE: regex widening only     callee = params / image globals / constants only
      70/250  callee reads a Ghidra local         needs the frame model (the string family's wall too)
      29/250  site count != callee count          positional pairing unsafe: refuse, do not guess

Per site: 260 params-only, 120 image globals only (both expressible today), 154 local/stack (not). Two
traps found on the way there: `0x44` matches `[A-Za-z_]\w*` as `x44`, which made a third of the param-only
callees look like an unknown class (strip numbers before extracting identifiers), and a `\( \s* \*`
pattern alone counts every deref inside an `if` as a call.

**The rule for the fix.** Widen the call pass AND bridge in the same change; the guard above makes the
order safe to get right, because a call the bridge refuses is now refused by name rather than compiled.
Pair sites to callee texts only when the counts agree, and refuse the unit when they do not.

## `bare_deref_width_unknown` (1,239) is still UNDECOMPOSED, and its census tool is the thing that is wrong (2026-11-07)

`lift_bare_deref_diag.py` reported 42 of 200 sampled units as "PARSING GAP: declared, not captured", with
the biggest class `void* *pvVar1` / `param_1* *param_2` / `void* *local_c`. Acting on it - counting the star
run in `collect_pointer_decls` so a two-star declaration gets the pointer width (4) instead of asking
TYPE_MAP for the word `void` - changed **nothing**: 13,611 refusals before and after, byte-identical
reasons per address, 0 units emitted. Reverted.

Two things to take from that, because both have cost a turn before:

  * The tool's own first line was the warning and it should have been read first: 136 of 200 units had
    "no uncaptured bare deref found by this tool's own scan". A census that cannot reproduce the refusal on
    two thirds of the population is not measuring the lifter, it is measuring itself. The declarations it
    blames are partly artifacts of its own regex - `param_1* *param_2` is what you get when a declaration
    pattern spans the comma between `char *param_1, char param_2`.
  * The shape of the answer is still probably a parsing gap (`void` and typedef'd element types genuinely
    have no TYPE_MAP entry - the probe confirmed `void* *pvVar1;` and `void **pp;` both come out of
    `collect_pointer_decls` with an empty table). But that is a hypothesis about a class the tool picked,
    not about the population. Before another scanner change, the bail-out in `_derefs` has to say which
    name it gave up on and whether the text ever declared it, the way `_push_values` named its four bail
    outs and turned 2,134 `argcount_mismatch` into a countable breakdown. That line, not a scan of the
    body, is the only thing that knows what it was looking at.

## `bare_deref_width_unknown`, measured by the bail-out instead of by a scan: it is NOT the parsing gap the tool said (2026-11-07)

`ghidra_c.Rewriter.bare_derefs` now records what the deref pass actually gave up on (the operand text, and
whether the body ever wrote a `*` in front of that name), and `lift_bare_deref_diag.py --lifter` reads that
instead of re-scanning the body. On 150 units, over 395 bail-outs:

    193  the name is never written with a `*` anywhere   (DAT_10463948, fVar14, ...)
    176  the operand is not a NAME at all                 (param_1 + 0x14, piVar3 + 0x3ec, ...)
     26  declared with a `*`, no width we know            (`void *` 24, `u_long *` 1, `DWORD *` 1)

The old tool's headline class - 42 of 200 "declared, not captured" - is 26 of 395 sites when the lifter
answers, and only 24 of them are the `void *` shape whose scanner fix released nothing. Its other big
claim, `param_1* *param_2`, is an artifact of its own regex spanning the comma between `char *param_1,
char param_2`. So the two classes the lifter reports that the tool never mentioned are where the volume is:

  * **176 non-name operands.** The width lookup is `if re.fullmatch([A-Za-z_]\w*, expr): ptr_names.get(expr)`
    - a bare identifier only. `*(param_1 + 0x14)` where `int *param_1` is declared is a perfectly typed
    read: the element width is `param_1`'s. Taking the base identifier out of a sum with constants and
    asking the same table is the same rule, one level up. Worth measuring next, per unit, not per site.
  * **193 never-declared names.** Some are recoverable from a cast Ghidra wrote elsewhere in the body
    (`if (DAT_10463948 != (int *)0x0)` says what DAT_10463948 holds); some, like `param_1 * param_2`
    recorded as an operand, look like a MULTIPLICATION read as a dereference - a false refusal, which is
    the same `_before_is_operand` ambiguity the deref pass has been patched for repeatedly. Both need
    naming before anything is built.
  * Per unit: 63 of 150 have ONE bail-out, 54 have two, 31 have three or more. A fix that clears one site
    releases none of the multi-site units, so the release price is "units whose every bail-out is in the
    class I fixed" - and that is the number to compute before touching `_derefs`.

## CORRECTION to the note above, written before anyone acts on it: the 176 non-name derefs are NOT "one rule, one level up"

I wrote that taking the base identifier out of `*(param_1 + 0x14)` and asking `ptr_names` for its width was
the same rule one level up. It is not, and implementing it that way would ship a wrong address, not a wrong
width. Ghidra wrote a BARE deref of an expression, which means the expression is POINTER arithmetic in
Ghidra's type system: `param_1 + 0x14` with `int *param_1` is `param_1 + 0x14 * 4` in bytes, whereas the
`*(int *)(p + 0x14)` form the cast branch handles means 0x14 BYTES. So the two questions on those sites are
(i) what the element type is - which is exactly what is missing - and (ii) what the offset scales by, which
is the same missing type. A width from `ptr_names` answers neither: the summands of a pointer-typed base
must be multiplied by that width, and if the base is a plain integer the summands are already bytes and the
element type is unknown again.

The `*(undefined2 *)(param_1 + 1)` family is this exact confusion having already shipped once. So the
measure-first step on that class is not a scanner change: it is recording, per bail-out, whether the base is
declared as a pointer (scale = element size) or as an integer (scale = 1) and what the element type is, and
only then pricing a subset where both are known - per UNIT, since 87 of 150 sampled units have two or more
bail-outs and a unit is refused by its worst one.

## `fild` (~400 refused): the queue's blocker is real, but it is one rule about a cast, not a missing conversion (2026-11-07)

The x87 queue action says the fild sub-form is refused partly because "(float)rd32 is wrong for a negative".
Checked with a throwaway probe over 120 sampled fild units, and the shape it describes is this:

    Ghidra wrote        int  iVar3;  ...  fVar = (float)(iVar3 * *(float *)GLOBAL);
    we emit             fVar = (float)(iVar3 * rd32(COW_IMG(...)));

`GHIRDA_TYPES` does NOT map bare `int`/`short`/`long`/`char` at all, so the signed local stays signed - the
loss is not in the declaration. It is in the operand: `rd32` returns an unsigned word, so the mixed product
is computed in UNSIGNED arithmetic and only then converted, and 37 of the float/double casts found in that
sample sat over a local Ghidra had declared signed with no `int32_t` anywhere in the emitted text.

Why that is one rule and not a model: for `+ - *` the unsigned and signed 32-bit RESULTS ARE THE SAME
PATTERN (two's complement), and only the conversion differs - so `(float)(int32_t)(expr)` is exactly right
where the guest's operand was signed. It is NOT a general fix: `/ % >> <` and the comparisons genuinely
diverge between signed and unsigned, so a rule that wraps those would be wrong. The safe contract is narrow
and statable: **at a `(float)`/`(double)` cast, if the operand contains a `rd*` read and names a local
Ghidra declared with a signed type, convert through `(int32_t)`.** Locked by a selftest case, plus one for
the shape it must NOT touch (`(float)(a / b)` with a signed local - refuse or leave, but do not guess).

The rest of the price is unchanged from the measured numbers: admitting fild through the contract gate
takes 46 of 300 (~15%), so this rule is worth roughly 60 units, not 400 - and only if cowdiff agrees, which
is the only opinion that counts here. 65 of the 120 had NO float/double cast in Ghidra's C at all, so
whatever they compute, this rule cannot be their blocker; do not book them under it.

## `fild` measured through the PROOF, not the gate: 2 of 17. And the cleanup that nearly deleted the tree (2026-11-07)

The queue said `fild` "needs the signed conversion named". I built that conversion (the int32_t cast rule,
selftested, 0 files changed on the shipped population), then priced the gate widening behind a measurement
flag - and the answer is: **admitting `fild` emits 17 units and 2 of them pass.** Failures were `memory` 6,
`edx` 4, `eax` 3, `fault` 2. The prerequisite was necessary and nowhere near sufficient; the blocker was
never the conversion alone. `lift_fild_diag.py` already said why the rest stay down - of 146 fild-only
units only 46 even pass the gate, and they are still blocked by push_beyond_one (38), fp_live_across_call
(20), and further ops outside the slice. And the 300 units that need `fistp` at all cannot be lifted while
a C cast truncates where `fist32_cw` rounds nearest-even at the pinned control word. So the sub-form is
closed, correctly: the gate is not being over-strict here, it is refusing units whose registers the proof
says are wrong.

**THE NEAR-MISS, because the rule that was broken is a rule I have relied on all loop.** To undo a
measurement run I ran:

    Get-ChildItem src/lifted -Filter *.c | Where-Object { $_.LastWriteTime -gt (Get-Date).AddMinutes(-12) } | Remove-Item

That deleted **hundreds of shipped, tracked** lifted files. `lift.py --apply` rewrites every file it emits,
so mtime says "touched by that run" for the whole population, not "created by that run" - timestamps cannot
distinguish new files from refreshed ones. `git checkout -- src/lifted layout` restored them (7,044 files,
tree verified clean, HEAD intact), which is the only reason this is a note and not a halt. The rule going
forward: **to undo a lift run, restore from git - `git checkout -- src/lifted layout` - never delete by
mtime, glob, or "files I expect to be new".** The list of a run's new files is `git status --short
src/lifted | '^\?\?'`, which is exactly how the 17 were identified in the first place; the deletion should
have used that same list.

## The folded vtable call is bridged now, and the thing that made it work was PASS ORDER, not the translation (2026-11-07)

`ghidra_c._computed_calls` recognises `(**(code **)(*param_1 + 0x24))()` and routes it to
`cow_bridge_indirect`. First version ran LAST in `rewrite()` and released **nothing**. The reason is the
finding worth keeping: by then the deref pass has already eaten the callee's `*`s and refuses them as bare
derefs of unknown width, so the unit booked `bare_deref_width_unknown` for what is really a call this pass
could bridge. Running the call pass **before `_derefs`** turned 0 into 96 emitted / 23 proven (5,108 -> 5,131,
0 regressions), and dropped `indirect_call_not_modelled` 1,268 -> 919 and `bare_deref_width_unknown`
1,239 -> 1,159. A pass's position in the pipeline is part of its semantics; "run it last so it sees the
final text" was the plausible-sounding wrong answer, and it hid for a whole measurement cycle.

**Two records, and the wrong one reads as green.** `cow/lift_proof.json` is the hand record (the default
`--out`) and `cow/lift_proof_all.json` is the lifted population record that `status.py` counts. Proving into
the default gave "23 pass" in the terminal, `0 newly passing` against the population record, and a
comfortable false `0 regressions`. `lift_proof.py` even documents the rule at its own `--out`; the check
that caught it was refusing to accept that a number I liked had no source.

**Read-count cross-check, because the alternative is a wrong address.** `_callee_read` handles both spellings
(Ghidra's raw `**(code **)...` and our own post-deref `*rd32(...)`) and returns the number of guest reads it
performed; `lift.py` compares it against the site's `target_desc`, which came from the generated body. The
outermost `*` of `(**(code **)(X))()` is the CALL IDIOM, not a memory read - count it and you jump through
one pointer too many, and a call to the wrong address is the one failure in this family that can still look
healthy to cowdiff. Pinned by `lift_folded_check.py` (11 spellings, both directions) and two selftest cases.

**The `u`-suffix bug, committed twice in two days.** `re.findall(r"[A-Za-z_]\w*", expr)` matches the `x24u`
inside `0x24u` and the `u` inside `36u`, so scanning an expression for identifiers before deleting the
numeric literals rejects every displaced address as if it named a forbidden variable. Yesterday it made a
third of the param-only indirect callees look like an unknown class; today it silently refused every
translated vtable target. Strip numbers first, always, in any "what names appear in this C expression" scan.

**The queue's silence was a bug, now a job.** A queue-action edit of mine `SyntaxError`'d `patterns.py` and
`loopy.py`'s `except Exception: return None` turned that into a quiet fallback to hand units - the loop did
priority (c) work for an hour while its own output claimed priority (a). `pattern_task()` now returns a
`pattern-queue-broken` job naming the exception. Verified by breaking the queue on purpose, on a copy, and
asserting the job comes back (`build/`, throwaway by design - a guard nobody has seen fire is a guard that
does not exist).

**Still refused, on purpose:** a callee reading a Ghidra LOCAL (149 of 560 sampled sites) and chained loads -
that is the frame-aliasing model, the same wall the string family waits on. Units whose site and callee
counts disagree (`indirect_site_call_count_mismatch`, 20 of them previously emitting a raw host call) refuse
rather than pair positionally to a call that may not exist - Ghidra deletes unreachable blocks and the
generated body does not know that.

## `string_op_not_modelled`: three measurements today, two of them mine, each wrong in a different way (2026-11-07)

The queue's action inherited **57% frame-bound** from `lift_stringframe.py` and told the next turn to build
the frame-aliasing model before writing any rep loop. Measuring it properly with
`tools/cow/ghidra/lift_stringprov.py` (600 units, two seeds agreeing within 2 points) gives:

    32%  frame-bound        needs the frame model
    26%  unnameable         the walk gave up - say "unknown", not "nothing left"
    21%  LIFTABLE NOW       no new model at all
    21%  load-bound         needs named loads - THE SAME WALL as the indirect family

Two of my own bugs stood between that and the number I nearly wrote down:

  * **Provenance was evaluated over the whole body instead of at the rep.** `ecx` written by a load *after*
    the string operation counted against the unit, and a stale value from the top of the body could flatter
    it. Provenance is a property of a **point in the program**; `upto=` the rep index is now mandatory in the
    tool. This alone moved frame-bound from 22% to 32%.
  * **Every form was scored on esi/edi/ecx.** The ISA says `scas`/`stos` never read `esi` and `lodsb` never
    reads `eax`, so units were being refused - or admitted - for registers the instruction does not touch.
    The register set is now read off the mnemonic (`USES`).

And the older figure was worse: 57% came from a walk whose own docstring admitted it was too crude for 43%
of units. The lesson is not "measure twice", it is that **a census tool is code and has the same right to be
wrong as any other code** - so it gets a second seed, and the number in a queue action has to name the tool
and the method that produced it, not just the number. A number that moves 10 points when I fix a bug in the
measuring instrument was never a measurement.

**What to build, per the numbers rather than per the story:** (a) the rep loop gated on provenance at the
rep (~21%, no new model, and the GATE - not the order of work - is what stops frame-bound units shipping
with silently skipped stack writes); (b) naming a load (~21% here, 762/820 sites in indirect - one model,
two families, the largest combined win left); (c) frame aliasing last, and it is **not** the arithmetic
identity the previous note assumed - the founding example maps guest `[esp+0xc]` to Ghidra `local_94`, so the
local number is not the esp offset and any aliasing must be established per unit by dataflow.

## The string gate shipped as a GATE, not a loop-emitter - and the reading that found it (2026-11-07)

The queue's action said "write the rep loop". Reading one unit's three views with the new
`lift_bodypeek.py --rewritten` showed there was **no loop to write**: for

    lea edi,[esi+0x70] / mov ecx,0x14 / xor eax,eax / rep stosd es:[edi],eax

Ghidra already emits `puVar2 = param_1 + 0x1c; for (iVar1 = 0x14; ...) { *puVar2 = 0; puVar2 = puVar2 + 1; }`
and our passes turn that into `wr32((uint32_t)puVar2, 0)` over a `CowU32 *` - C's own ×4 scaling reproduces
both the +0x70 base and the 4-byte step. The semantics were already correct; `has_string_op` was refusing the
whole FUNCTION for containing a rep, and 1,261 units were paying for it.

So `gen_model.string_shape` is a gate with four named clauses - form (only `stos`/`movs`: `scas`/`cmps`
leave zf/cf from their last comparison, which is what cowdiff compares), direction (no `std`; measured 0 of
600 units, costs nothing and removes a silent mis-aim), width (from the MNEMONIC, an x86 fact), and
provenance (every register the form actually READS, evaluated AT the rep). `lift.py` now refuses
`string_op_not_modelled_<clause>`, so the family stays groupable and each sub-form is individually priced.

Result: 126 emitted, 68 survived the syntax gate, **19 passed the proof** (5,131 -> 5,150, 0 regressions).
Refusals now read: operand_load 314, operand_stack_frame 285, form_scas 275, form_cmps 109, std 4 - which is
the census confirmed against the production gate, the way every price in this file should be obtained.

**Two things this turn did NOT fix, stated plainly.** (a) 5 of the 68 were `out-of-region write`: the
provenance gate accepted a unit whose pointer arithmetic still ended up aiming at host memory. The proof
caught it - that is the harness working, not shipping - but the gate is one clause short of sufficient, and
the gap is in typed-pointer arithmetic (`p = q + N` scaled by the C type, which is right only while `p`
stays a real pointer type). (b) `form_scas`/`form_cmps` refuse 384 units for a register-file fact: a body
containing ONE `scas` is refused whole, even if its `stos` forms were liftable. Per-rep refusal (drop the
unmodelling-able rep's unit only if it is load-bearing) is the cheap next slice and needs a decision about
what the lifted body does with the flags it no longer sets.

## 2026-11-07 (late): bare_deref_width_unknown priced properly - and it released 0

The queue handed this family (1,183) with action "unclassified". Priced it from the lifter's **own bail-out
record** (`lift_bare_deref_diag.py --lifter`, 300 units), the only view of it that has been right so far -
the tool's original body-scan mode measured itself and recommended a fix that released nothing.

**The pricing error I was about to make.** A site histogram cannot price a per-unit refusal. By sites,
`base + displacement` (`*(local_1c + 0x1c)`, `*(piStack_20 + 8)`) is the biggest class at 250 of 875; by
UNITS it frees **zero**, because no unit has only that kind. Added `unit_subsets` to the tool for exactly
that question ("a fix buys only the subsets it covers"): 169 undeclared-only, 55 noname-only, 29 mixed, 3
star-typed. Any future price for this family comes from that table, not from the site list.

**One genuine bug, and it was a fake deref.** `void` is in KEYWORDS, and the override that makes
`return *(int *)(p + 4)` a dereference (added for the 749-file C2100 family) fires on type specifiers too -
so every `void *pvStack_c;` in Ghidra's declaration block, and every `(void *)0x0` cast, was read as a
dereference *of the declared name*, whose width cannot exist because a declarator star has no operand to
type. Split out as `ghidra_c.DEREF_KEYWORDS` (statement keywords only). Four selftest cases pin it, including
`an_untyped_dereference_after_return_still_refuses` so the real guard cannot be quietly disabled again.

**It released 0 units.** 159 units stopped saying bare_deref and started saying something true instead
(`calls_unknown_symbol_operator_new` +107, `_malloc`, `EnterCriticalSection`) - they are the CRT allocator
wrappers - and 59 reached the syntax gate, which rejected all 59. My first comparison claimed "+59" because I
diffed an old post-`--apply` snapshot against a new **report-only** one: exactly the pre-gate/post-gate trap
lift.py's own comment at line 1421 warns about. The file count in src/lifted (7,207, unchanged) is the only
number that means a release.

**Where the wall actually is: the gate's rejects, whose messages nobody was reading.** lift.py books
`does_not_compile_C2065` and discards the message; the message names the identifier, and the identifier IS
the fix. Built `tools/cow/ghidra/lift_rejected_errors.py` (the gate's own flags, messages canonicalised) and
ran it over all 1,397 rejects:

    C2065 on Ghidra POINTER LOCALS   puVar1 91, iVar2 56, iVar1 52, pfVar2 51, piVar1 47, uVar1 43 ...
    C2109 subscript on non-array     297   (the same locals: puVar1[0] where the type became an integer)
    C2198 too few arguments          233   of which `void wr32(uint32_t,uint32_t)` 178 - a STORE WITHOUT
                                          ITS VALUE: one arity bug, not 178 broken bodies
    one-word widenings               uRam104569fc 20 (SYM_RE knows DAT_, not Ghidra's Ram label), UNK_ 36,
                                          true 35 (_replace_bools misses that shape), code 43 (C2091)

So the biggest single lever in the tree is **the dropped pointer-local declaration**: one cause behind C2065,
C2109 and this family's typed-deref width. A `T *p` local in the guest IS a 32-bit address; dropping the
declaration when `T` cannot be mapped is what breaks all three at once. That is next, and it is a model
decision, not a regex.

**Footgun now recorded in the queue, because I walked into it:** `lift.py --apply --entries <list>` PRUNES
every src/lifted file the run did not write - with `--entries`, that is all 7,207 proven units. It only
survived because "to undo a lift run, restore from git; never delete by mtime" was already in this file. The
prune is worse than an mtime delete: it is silent, automatic, and inside the tool.

### Correction, same day: the "biggest single lever" claim above is WITHDRAWN

It was measured against `build/lift/rejected/`, which until now only ever GAINED files: 1,397 bodies from
every lift run since the directory existed, most produced by lifters that no longer exist. The current
`--apply` books **59** gate rejects. `lift.py`'s gate now prunes the directory to the run that made it (and
removed 1,338 stale files on its first run), and `lift_rejected_errors.py` refuses to describe a pile older
than the lifter. A third instance of the same mistake in one day - census input must be the current thing.

Re-measured over the 59 that are real, the identifier behind the message:

    ppuVar1 31        Ghidra pointer locals dropped by the types pass        (the hypothesis survives, at 1/10
                                                                        the size I claimed)
    uRamH     20      SYM_RE knows DAT_, not Ghidra's Ram-labelled image dword
    bVar1/2/4 34 + bool 8   ONE cause: `bool` has a TYPE_MAP entry but no GHIRDA_TYPES entry, so `bool
                        bVar1;` survives into C11 without stdbool.h - the declaration fails and every use of
                        the name fails with it
    wr32 too many args 3, rd32 redefined 4, ExceptionList/_Size/sizeInBytes/format/this 2-3 each   (the last
                        group is CRT/SEH internals, probably refuse-not-lift territory)

So the gate family is three small table additions, ~15-25 units if they all pass the proof - not a headline
fix, and each deserves its own measured commit. `does_not_compile` is ~59 of 13,523 refusals for a reason: a
unit that reaches the gate has already survived every clause.

## 2026-11-07 (later): bare_deref released +79 - and the fix was a WRONG PARSE, not missing information

Queue handed `bare_deref_width_unknown` again (1,024) with my own action saying "what is left here is small".
It was not small, and the reason it looked small is that the site histogram had been hiding the one class
that mattered. Family now **1,183 -> 1,024 -> 403**; population **5,150 -> 5,229 proven**.

**What the per-unit table said once I stopped truncating it.** I had written "the biggest site class frees 0
units" from a `most_common(14)` print - a truncated list, which is the site-histogram mistake again in a
tastier hat. Printing all rows showed `name: image global (DAT_)` at 26 (later 73) single-kind units: a real
lever, and the only one left in the family.

**The bug, in the branch I had already read three times.** `SIMPLE_EXPR` walks `name OP operand` for *any*
operator, so the operand of `*param_2 & 0x1f` came back as `param_2 & 0x1f`. Unary `*` binds tighter than
every binary operator - `*p & 0x1f` is `(*p) & 0x1f`, the mask belongs to the VALUE - so this was not a
failed lookup, it was a **read of the wrong guest address** waiting for a width to be found. It never emitted
because the over-long string then missed the bare-name lookup that supplies the width. That is the fourth
guard-by-accident found in `_derefs` alone (typed cast after the star, `'' in ")]"`, the keyword override,
and this), and the pattern is worth naming: *a refusal that is caused by the same bug as a would-be wrong
emission hides the bug, and the bug survives every "safe because it refuses" review.*

Fixed as `_read_deref_operand` (a primary: name + postfix chain; a parenthesised operand still goes to
`_balanced`, because inside parentheses the arithmetic *is* the address) plus `Rewriter.bare_width`, which
takes the element type from the BASE of `*(piVar1 + 8)` - the element type of a sum is the element type of
its pointer operand. 3 new selftest cases (149/149), one of which is the parenthesised form and FAILED first:
it is the case that found the second half of the fix. Had I weakened the assertion to match the code, the
`base + constant` class - 250 sites - would still be refusing.

**Numbers, in the order that makes them mean something:** 400 sampled units -> 239 stopped bailing;
report-only `emitted` 7,266 -> 7,481; `--apply` (gate) -> src/lifted 7,207 -> 7,403 (+196, 78 rejected);
`git status` + `lift_changed.py` both said **0 shipped files changed bytes**, so nothing proven owed a
re-proof; proof of the 196 into `cow/lift_proof_all.json` -> **79 pass (40.3%)**. BUILD_CHECK PASS
host/difftest/boot64 with the 196 in the tree. Failures: edx 28, memory 27, eax 21, fault 15, callee-saved 14,
hang 9, timeout 3 - the normal spread, no new failure mode, which is the check that a parse fix is a parse fix.

**What is left in the family is ONE class, and the answer is not in Ghidra.** `*DAT_10456700` - a bare deref
of an image global - is 171 sites / 73 of 400 units. I asked the decompiler directly whether it wrote the
type down: `functions_all.jsonl` fields are addr, c, signature, params, callees, insns, span, cc, purge,
ghidra_name and flags - **no field types a global**. So the width must come from the generated body, which
states the width of every access it makes at that absolute address: take it when the address is read there at
exactly one width, refuse when it is ambiguous or absent, and never default to a dword. That is the next
change, and the queue action now says so with the field list as the evidence.

**Self-inflicted, caught before it shipped:** my first version of the new queue action was a string spanning
raw newlines - the exact `patterns.py` SyntaxError that once made the queue hand out hand work for an hour.
It now gets a parse check, an import check, and a "no raw newline in action" assertion in the same command
that deletes the probe.

## 2026-11-07 (later still): `form_scas`/`form_cmps` were a lie about the harness - 384 units, worth 1

Queue handed `string_op_not_modelled` (987). I took the production gate's word instead of a census tool:
`operand_load` 314, `operand_stack_frame` 285, **`form_scas` 275, `form_cmps` 109**, `std` 4.

**The reason in my own gate comment was false, and I had written it.** It said scas/cmps "leave zf/cf from
their last comparison, which is precisely the state cowdiff compares". I checked the comparator rather than
the prose: `tools/cow/cowdiff.c:17-23`, the harness's own header - *"Flags are deliberately not compared: the
contract (docs/cow/STYLE.md) is the return value, the callee-saved registers, esp, memory and calls out, and a
caller cannot observe flags across a call."* No lifted body sets flags for ANYTHING - `add` and `cmp` do not
either - so refusing a string form for not setting them was refusing for a property the lift does not model
anywhere in 7,400 units. `status.py`'s README line said the same thing as my comment, which is what made it
feel true: **prose about a checker is not the checker.**

**Measured, not argued.** Knob on, report-only: emitted 7,481 -> 7,491. **Ten units, not 384.** The `form_`
clause ran BEFORE the provenance clause, so it was masking it: the moment the form stopped condemning them,
242 of those units refused on `operand_load` and 74 on `operand_stack_frame`. Two of the family's five
categories were a phantom, and everyone who read the ranking was being told the wrong thing about where the
wall is. Kept the widening anyway (a false refusal is the error I have been correcting all day), gate: 8 of 10
survived, proof: **1 of 8 passed** - `0x10017d90` and friends failed as `store=extra`/`store=missing`, i.e.
the loop writes stack slots the guest did not, which is the out-of-region gap already recorded below and is
exactly why the proof is the only acceptable report.

Population **5,229 -> 5,230**; src/lifted 7,403 -> 7,411; family 987 -> 919 with its categories now
truthful (`operand_load` 556, `operand_stack_frame` 359, `std` 4). BUILD_CHECK PASS host/difftest/boot64.

**Selftest discipline paid for itself again.** Three of the four new cases exist to stop the widening being
read as "compare forms are safe": scas with a load source and scas with a frame destination must BOTH still
refuse, and `lods` is pinned as the closed door. The runner grew an optional 5th element (the form list) so a
knob-era case could state its own contract; and I caught myself shipping a comment that promised a
`COW_LIFT_ALLOW_LODS=1` which I had not built - a knob documented but not existing is a knob someone will
trust later, so the comment now says nobody has priced lods and there is no knob for it.

**What the queue should be working from now:** the string family is not a form problem, it is **naming a
LOAD** - 556 units here, and the same wall at 762 of 820 sites in `indirect_call_not_modelled`. One model,
two families, ~1,300 units, and it is the last large un-parked thing on the board.

## 2026-11-09: two stale claims closed, and they were silently blocking the lift

`0x102d9ad8` and `0x102d9c65` had been sitting `in_progress` since 2026-11-07 with no name, no file and no
work - one was claimed purely to test the `COW_LOOPY_HAND_FIRST` fallback. That is not just untidy:
`lift.py` skips any row whose status is `done|failed|wip|in_progress`, so a phantom claim **removes the unit
from the lifted population forever**, and nothing anywhere reports it. Both are also in `cow/skip.txt`, whose
stated purpose is to let the LIFT pattern queue lead - so the ledger status was contradicting the very park
that was supposed to hand them to the lifter.

Set both back to `todo` with the reason recorded, and re-measured what the current lifter actually says about
them: **both refuse `x87_not_modelled_op_not_in_slice:fild`**. Two corrections fall out of that. (1) The real
blocker for `0x102d9ad8` is the parked x87 family, not switch/goto as `docs/cow/LOOP.md`'s own worked example
says - the note now says so. (2) `todo` was chosen deliberately over `failed`: `failed` blocks the lift too,
and a future lifter that CAN do fild would still walk past them in silence. `todo` self-heals - when the x87
model lands they get lifted with nobody having to remember. Population candidates went 20,730 -> 20,732 and
both now appear in the refusal snapshot, which is the proof they are visible again.

Also finished: the `indirect_call_not_modelled` and `string_op_not_modelled` queue actions were both telling
the next turn to build things that had already shipped, or quoting family sizes from before this session.
`_computed_calls` / `computed_pointer_calls` / `host_call_through_computed_pointer` / `lift_folded_check.py`
exist, so the action now says READ THEM FIRST and points at the one remaining wall (naming a load, shared by
three families). The string action quotes the production gate (919 = load 556 + frame 359 + std 4) instead of
the retired 1,261.

**Two tooling bugs caught by the patch script I wrote to do this, both worth keeping in mind.** Its
end-of-entry finder required the closing `),` at the entry indent, but the action strings are indented one
further - so it ran past the entry and DELETED `leftover_unbridged_call`; it then printed "14 FAMILIES
entries intact" against no baseline, which is a check that cannot fail. Fixed by (a) ending on a line that
both closes the tuple and starts with a quote, since a comment can end in `),` but is never an action string,
and (b) capturing the live key list from the module before editing and refusing if it changes at all. The
restore script had its own version of the same mistake: it tested "already present" with a substring search,
which matched a prose mention of the key while the entry was genuinely gone - the parsed-key check caught it
and refused to write.

## 2026-11-09: a build that hangs silently is a worse bug than a build that fails

Continued the queue-hygiene work (two phantom `in_progress` rows released to `todo` — they were **blocking
the lift**, because `lift.py` skips `done|failed|wip|in_progress`, and a phantom claim therefore deletes a
unit from the population with nothing reporting it; both re-measured as
`x87_not_modelled_op_not_in_slice:fild`, so `todo` was chosen over `failed` deliberately: `failed` blocks the
lift equally well and needs a human to remember. Candidates 20,730 -> 20,732).

Then I ran `build_check.ps1` and it produced **no output at all for 30 minutes**. What it actually was, in
order of discovery — each one corrected a guess of mine with a fact:

1. **The child had no timeout.** `& python build_cached.py host` is a bare blocking call. The child was wedged
   at 0.5 s of CPU while its parent had already been killed by my own tool timeout. Fixed: `Start-Process` +
   `WaitForExit(deadline)`, `taskkill /T` on wedge (the compiler is the *child* of the child), exit 124
   WEDGED with a stated reason. Proved by forcing a 1-second deadline: FAIL in 1s.
2. **The lock waited for a dead process.** The takeover rule was "older than 20 minutes" — a guess about a
   fact already recorded in `owner.txt` (`pid=`). Now it takes over immediately when that pid is not alive.
3. **A stranded test binary was poisoning the link.** `build\boot.exe`, orphaned at 15:57 by my manual
   `Stop-Process` (**which kills a process, not a tree**), held a handle, and every later link died
   `LNK1104: cannot open file` — which looks exactly like a broken unit and would have been blamed on one.
   `build_check` now sweeps its own orphaned build binaries first, and on a diagnosed `LNK1104` moves the
   delete-pending output aside (rename is legal where delete is not) and retries once.

**Two things I got wrong on the way and had to correct from evidence, both worth remembering.** I asserted
the orphan lock was the cause; it wasn't — my run had *won* the lock and hung in the child. And my first
sweep printed `killing orphaned build binary…` for a zombie that `taskkill` cannot reap, i.e. it reported an
action it had not performed — the same class of false report as the stale queue actions and the 1,397-reject
census. **A harness line must describe the outcome, never the attempt**; verify by re-testing the predicate
after the action.

**Rules earned:**
- A blocking call in the loop's own harness needs a deadline. "It finished in 44 s this morning" is not a
  bound on how long it can hang, and a silent hang burns the whole turn budget without producing a verdict.
- `Stop-Process`/`Kill()` does not take the tree. To kill a build, kill the tree or you leave its test
  binaries holding handles; then diagnose with **rename vs delete**: rename succeeds + delete is denied =
  delete-pending = a live handle, which is a process to find, not a disk to clean.
- `git status` cannot see this class of trouble at all: `build/` is gitignored, so an orphan process, an
  orphan lock, ~90 stale one-shot mutators and stale proof-entry lists were all invisible. Cleanup of a
  gitignored scratch tree is real maintenance, not tidiness — a stale `--list` file hands the proof the wrong
  population, and this session's own tool comment records that it once booked `no_adapter` for units that did
  not exist.

## 2026-11-09 (later): NAMING A LOAD shipped - +20 proven, and the wall moved to the frame

Queue handed `string_op_not_modelled` (919) with my own action saying the one thing left worth building was
naming a load, shared across three families. Built it as `gen_model._str_load_named` and the family is now
**512**; population **5,230 -> 5,250 proven** of 7,556 lifted.

The rule: `mov esi, dwordptr[eax+0x10]` where eax explains itself AT THE LOAD is a dword read of a known
guest address - which is exactly what `rd32()` of that expression says - so it is admissible. Everything else
keeps its own refusal name: an index register, a scale, a non-dword width, an unresolvable base, and `stack`
which stays the frame model's wall. Four selftest cases pin the refusals rather than the admission, because
the dangerous direction for a widening is swallowing a refusal it never examined. Provenance of the base is
evaluated at the LOAD, not at the rep and not over the body - the bug that once moved this family ten points.

**Measured in the order that makes numbers mean something.** Report-only with an opt-in knob first: emit
7,532 -> 7,653 (+121), `operand_load` 556 -> 52. Then made permanent (knob inverted to opt-OUT,
`COW_LIFT_NO_STRLOAD=1`, so the A/B stays possible without anyone remembering to set a variable), `--apply`:
**7,411 -> 7,556 files** (+145 past the syntax gate, 97 rejected), `lift_changed.py`: **0 shipped files
changed bytes**, so no re-proof was owed. Proof of the 145: **20 passed (13.8%)** - in line with the
session's exchange rates, which is the reason nothing is booked before cowdiff speaks. BUILD_CHECK PASS on
host/difftest/boot64 (and the hardened check killed and verified a zombie `boot.exe` on the way).

**The instructive part: 380 reasons did not disappear, they moved downstream.** `operand_stack_frame`
285 -> 431 and `operand_unnameable` 0 -> 25 as units that the load clause had condemned earlier reached the
clause behind it. A reason count that falls is not a release; the file count and the proof are, and this is
the third time today the same shape has bitten (the `void *` declarator, the scas/cmps forms, and now loads).

**So the family has ONE wall left, and it is the frame.** Frame aliasing must be done by DATAFLOW: the
founding example maps guest `[esp+0xc]` to a Ghidra `local_94`, so the local number is not the esp offset and
subtraction cannot establish the correspondence. It is also what the argcount/push family is stuck on, so the
model is worth building once for both - and the queue action now says that, with today's numbers and the
out-of-region count (7 of 145 releases aimed at host memory and only the proof stopped them) recorded as the
gate clause still missing.

## 2026-11-09 (later): the loop's biggest failure group may be comparing crashed processes

Queue handed `memory` (858). Re-censused on the CURRENT population instead of trusting the 661-row numbers
carried in the action (they were two releases old): missing 384 / value 340 / extra 134; stack 683 of 858;
513 deterministic at state 0.

Then I read one unit by eye, as the action instructs, and it refused to behave like the theory. `0x10028740`
has three mid-body `push ebx/esi/edi` that Ghidra turned into locals; the adapter's replay is **balanced**
(3 pushes, 3 pops, `g->esp = sp0`) - so the "we replay pushes without pops" story I was about to write was
wrong, and I only know that because I looked. What the unit actually shows is
`fault -1073741819/-1073741819`: **both sides crash with the same access violation**, and the 12-byte esp
difference is two crashes stopping at different depths.

So I measured the idea instead of arguing it: **625 of 858 memory rows (73%) carry the same nonzero exception
code on both sides, and exactly 0 rows have only one side faulting.** Only 233 rows are clean comparisons.
The loop's largest failure group is mostly post-crash bookkeeping, not wrong stores.

**And the field that would settle it is masked away.** `cowdiff.c:1642` formats a fault address and both
values as `%08x/%08x`, but what the proof RECORDS has the digits stripped - `@# #/#`, `A:0/# B:1/#` - which
is exactly what makes the census group by shape, and also what makes this question unanswerable from the
record: I cannot tell whether the two sides faulted at the SAME guest PC. The raw cowdiff line still has the
addresses, so the data exists; it is the stored row that loses it.

**Next step, deliberately not taken this turn:** add the fault PC (and differing addresses) to the stored row,
then re-group - the 858 should split into a small real-memory group and a large agreed-crash group. That is
not a lifter change and it is not free: it touches what cowdiff counts as a mismatch, i.e. **the definition of
PASS**, so LOOP.md's mutation policy binds - `tools/cow/mutate.py` must prove a real wrong-store mutant is
still caught before any crash-agreement rule ships. Relaxing a memory comparison on the theory that it is
"only post-crash noise" is precisely the kind of plausible-wrong change the loop refuses rather than ships,
and a PASS that means "we did not look" is a failure. The queue action now carries the numbers, the masked-
field diagnosis, and that constraint in that order.

No units moved this turn. The value is that 858 rows now have a measured composition, a named blocker, and a
falsifiable next step, instead of a 661-row census and a theory about pushes.

## 2026-11-09 (later): the memory family split 72/28 - and my "73% is post-crash noise" claim was wrong

Queue handed `memory` again. I set out to expose a fault PC so the 625 both-sides-fault rows could be
classified. **There is no fault PC to expose**: `Guest` has no `eip` - the guest PC is not data in this model -
and only side A is coverage-instrumented (`cow_cov`), so "did both sides stop at the same instruction?" is not
an askable question. What WAS in scope at the comparison site, and cheap, was `oa.esp`/`ob.esp`. Adding
`esp=%08x/%08x` to the FAIL line is reporting-only (parsers match the prefix; PASS semantics untouched), and
`lift_proof` already keeps the whole line in `raw`, so nothing had to be re-plumbed.

New tool `tools/cow/ghidra/lift_frameshift.py` reads it back. Re-proved all 858 memory rows (940 s) and the
family splits:

    596 (72%)  esp EQUAL      -> a real wrong content difference. The lifter's problem.
    228 (28%)  esp DIFFERS    -> frame shift, every one a small multiple of 4 (+4 x85, +8 x28, +12 x21,
                                 +16 x21): 'N words too many on the stack' = push/cleanup/argcount, NOT here.

So the "both sides crashed, we are comparing corpses" story I wrote into the action an hour earlier was wrong
in the dominant direction - 72% have identical esp and differ in content. The unit I built it on
(`0x10004d80`) is in the esp-**equal** group, and the 12-byte drift I quoted for it had come from a
*different* unit's per-state line. The retraction is in the action text rather than quietly edited out.
**Lesson: a shared crash is not a reason to distrust a comparison, and a narrative built on one unit read in a
hurry outruns the evidence. Measure the discriminator before writing the conclusion.**

**Checker-integrity item, unresolved:** re-proving flipped 17 rows FAIL -> PASS. The edit was reporting-only,
so the likely cause is earlier verdicts having been computed against a binary older than the sources (a
wedged/aborted build had just been cleaned up). Benign direction - but the same staleness could produce
PASS -> FAIL, which would be a false-green emergency rather than a curiosity.

**Mutation policy, honoured properly** (LOOP.md: always mutate when a harness feature changes):
`100026e0` control - wrong stored value on a fully covered unit (36/36 blocks) -> **CAUGHT**, `reason=memory`,
10 mismatches. My cowdiff change did not weaken the comparison. `10001e10` - the same mutation on a
5/9-blocks unit -> **not observable**: four blocks never execute, so no checker could see it. Recorded in
`cow/mutations/` as *unobservable*, not as a hole - LOOP.md's point that the two look identical in a log and
mean opposite things. The actionable half: `cow/unreached/10001e10.txt` does not exist, so a unit is booked
proven with four of nine blocks never exercised and no note explaining it.

Population: **5,250 -> 5,267 proven** of 7,556 (the 17 re-proven rows), `memory` 858 -> 824.


## 2026-11-09 (late): the indirect family's load-naming model - built, measured, and demoted to a classifier

The queue handed over `indirect_call_not_modelled` (829) and the previous session's note said the shared
win was "naming the load that writes an indirect call's base register". It was built and it is now kept as
**a classifier with no emitter**, because measurement says the emitter is invisible today.

**What was found first, by measuring instead of assuming.** A census that re-implemented the lifter's own
rules reported `1,051 of 1,051 refusing sites: register never written in the body` - false, produced by a
backward scan that stopped at the first `call`. Rewritten to use the lifter's code (`_last_write`,
`_load_nameable`) and with a new one-level-deeper tag (`target_why_deep`), the family is what it always was:
`call [reg+disp]` where `reg` came from `mov reg, dwordptr[addr_reg]` and `addr_reg` is itself unnamed.
Two loads deep, every time.

**The gap that made the first model look worthless.** `_operand_expr` names a literal, a register, and - with
`allow_load` - `dwordptr[<bare register>]`. It does **not** name `dwordptr[esi+0xc]`, the single most common
load shape in this family: the bracket holds an address *expression*, which only `_lea_expr` knows. So the
rule admitted the load and then could not name it, and the model measured 0 releases. Borrowing lea's
base+displacement form is what made any site flip at all. Recorded as a documented gap in `_operand_expr`,
not as a behaviour change: naming it in the return-value tail would re-price proven units.

**The soundness hole, found by reading my own comment.** The docstring claimed substitution was early-bound.
True for literals and already-built sub-expressions; false for `g->reg`, which is a **live read of the guest
register cell when the expression is evaluated** - and for a read deferred into a call, that is after
everything the guest did in between. The window rule (no memory write / call / branch / push between the load
and the consuming site) cannot catch it, because the *address itself* is what moved. The tightened rule
refuses any deferred expression containing `g->`. The loose version had named 197 sites; the sound one names
12, and **all 12 are then refused by `bare_deref_width_unknown`**, so the population does not move at all.
That is why the code is a classifier: the dependency runs the other way. Fix deref widths and this becomes
visible; fix it first and it is a way to read memory at the wrong moment.

**A verdict almost recorded backwards.** `lift.py --apply` with the model on left 45 files modified, and
proving them returned `16/45 pass, 23 memory failures` - which I wrote down as "the model is unsound". A
CONTROL RUN on the reverted tree returned the identical 16/45, same units, same patterns: the 45 were
`git status` stat-noise (their committed copies carry CRLF, the lifter writes LF - `git diff` sees nothing),
29 of them were **already FAIL rows**, and only 7 files had real content changes. Proving those 7 (6 of them
PASS units) gave **6/6 pass**: the model is sound on every shipped unit it touches. Two lessons, both paid
for: *a changed-file count is not a change*, and *an unverified control turns a measurement into a story*.
`lift_changed.py` now normalises newlines before comparing, with a two-sided check - EOL churn yields a
re-proof set of 0, a real edit still yields 1.

**Checker-integrity item from the previous section, CLOSED.** The feared PASS→FAIL case did not happen:
comparing the record before and after this session's runs gives 0 PASS→FAIL and 0 FAIL→PASS, 5,267 pass
either way. The rows that "flipped" were the already-failing ones being re-graded with the new `esp=` field
in their detail line, plus one `hang` row that graded as a real `memory` failure when run alone.

Population: **unchanged at 5,267 proven** of 7,556. Refusal families unchanged. The next job is
`bare_deref_width_unknown` (403, plus the 12 latent here and 12 more that the earlier loose run exposed),
not this one.

## 2026-11-09 (late, second entry): image globals get their width from the generated body

The indirect family's own action text now points here, and it was right to: with the deferred-load model
measured at zero units, every one of its releases was landing on `bare_deref_width_unknown`. So that family
got the treatment instead, priced the sanctioned way - **per unit, not per site**, using
`lift_bare_deref_diag.py --lifter`, whose "what a fix for each kind would free" line said:

    75 units freed  (of 103 units carrying it)   name: image global (DAT_)

**The finding.** A bare `*DAT_10456a28 = 0;` in Ghidra's C carries no type, so the deref pass refused it
rather than guess a dword - correct behaviour against a wrong default, but it left the whole class stranded.
The width is not missing, it is only missing *from the decompiler*: the generated body renders the same
access as `{ uint32_t A = (uint32_t)(0x10455C28u + RD); eax = (uint32_t)(rd32(A)); }`. `rd32`/`wr8`/... is
the plumbing, and the generated body is the authority on plumbing. So `gen_model.guest_global_widths(ins)`
maps image address -> (bytes, is_float) from the accessor the body actually used, and `Rewriter.bare_width`
consults it for `DAT_`/`PTR_` names.

Three conservatisms, each with a failure mode behind it: the accessor's address must resolve to exactly one
image-range literal (directly, or in the local it reads - the `A = (0x10455C28u + RD)` form), because
`wr32(A, 0x10340760u)` would otherwise record the stored **value** as an address the guest reads; an
instruction with two accessors is skipped, because whose literal is whose is unknowable; and an address
accessed at two different widths is dropped rather than resolved by whoever got there first. Float accessors
are recorded as float and then **refused** at the deref - this pass does not model a float global.

**Result, through the harness and nowhere else:** emitted 7,653 -> 7,666, thirteen new units, **10 pass, 3
fail**. Population **5,267 -> 5,277 proven** of 7,569. The three failures are the honest price of the rule
and are named rather than buried: `0x10174790` (memory), `0x101ed610` (callee-saved ebx), `0x1026ff10`
(eax) - all three read like a value whose width came from the global's accessor while the object actually
being read was the one the global POINTS at. They stay unproven and out of the table.

**A guard, not a fix.** The first run linked nothing: one unit emitted `rd32rd32((uint32_t)(COW_ADDR_... +
4u * 7u))` - Ghidra's `DAT_106644e4[7]`, a *subscript through* a global, which is not "read the global". Its
symptom was `unresolved external symbol rd32rd32` at LINK time, which takes down the whole chunk and hides
the good units beside it. So `leftover_problems` now refuses a doubled accessor shape outright: the same
lesson as `host_call_through_computed_pointer` - a translation that cannot be right should book a named
pattern, not compile into a linker error or, worse, into a PASS rate.

**Selftest discipline kept:** 8 cases for `guest_global_widths` (one per conservatism, including both
directions of the "store value is not an address" clause) and 5 for `bare_width` on globals - the not-in-map
and float cases assert the refusal, because a silent dword default is the bug this family exists to avoid.
One of those cases caught a real bug on the spot: the accessor regex missed every `rdf32`/`wrf32`, which
would have made 2,897 float accesses invisible to the map. Suite: 158 -> **171/171**.

**Process note, because it bit twice.** Throwaway files in `build/` do not reliably survive to the next
turn: a patch script gone missing silently aborted an edit (the tool then reported "no replacement
happened", which is the good outcome), and a notes file gone missing meant commit 4ce161b7 said "loop notes"
while carrying only regenerated README/STATUS. Long-lived text goes through the edit tool against the real
file, and a one-shot script has to be written and executed in the same turn.

Next: the residue of this family is `operand is not a name` (635 sites), whose biggest shape is Ghidra's
folded `(**(code **)(DAT_xxxx + 0xc) + n)` chains - the same two-load wall the indirect family reports, now
sitting behind a rule that can name the global itself.

## 2026-11-09 (late, third entry): the folded multi-star deref shipped - and the queue text nearly shipped a bug

**Shipped: +24 proven, 5,277 -> 5,301 of 7,604.** `**(T **)EXPR` is now translated instead of refused. k
stars are k reads: the first k-1 read POINTERS (dwords, because the guest is 32-bit) and the last reads the
object at the cast's element type. Three clauses, each of which refuses rather than guesses:

* the leading star count must EQUAL the cast's star count - `**(int *)p` is not `**(int **)p`, and which one
  Ghidra meant is not ours to choose;
* an element type `_width_of` cannot size (`code`, a typedef, an unknown struct) refuses - the exact place
  where "default to a dword" turns a one-byte guest read into a four-byte one, which is the bug the whole
  family refuses for;
* a deref with a `(` after it is a CALLEE, not a value.

That third clause is the one that mattered, and **the selftest caught it, not the harness**. My first version
rewrote `(**(code **)(piVar2 + 8))(piVar2)` into `(rd32(...))(piVar2)` - a host call through an address
fetched out of guest memory, precisely the hazard `leftover_problems` refuses as
`host_call_through_computed_pointer`. My pass *deletes the star soup that guard pattern-matches*, so the
result walked straight past it. The refusal therefore lives inside `_derefs`, in front of every path that can
emit a read. Two lessons in one case: a text-matching guard is only as good as the text left behind it, and
the reason the folded-callee case was already a contract test is the reason the suite exists.

The callee test then failed twice for subtler reasons, both now contract cases: the scanner reaches
`**(code **)` a second time with its pointer on the INNER star, so "is there a `(` before the deref" must be
asked at the start of the star RUN, not at `body[i-1]`; and the lookahead may only step over `)` when a group
genuinely opened at the stars, or `if (x == **(int **)q) (f)(1);` reads as a callee and a good unit is
refused for a call that has nothing to do with it. Suite 171 -> **178**.

**A mutation check on my own new cases found one that asserted nothing.** I "loosened" the module by
weakening the REGEX, when the clause lives in the CALLER's `len(g1) == len(g3) >= 2` test - so the careless
build behaved identically and the case passed anyway. Re-run with the caller loosened, that build emits
`rd32(rd32(param_1))` for `**(int *)param_1` (two levels where the guest read one) and books NO problem, so
the case does bite. "It passed" is not evidence until something has shown it can fail.

**Measured after shipping:** `bare_deref_width_unknown` 403 -> 329 -> **188**, and **311 of 311** of the
remaining `**(` bail-outs are CALLEES. This family is no longer a deref problem; the job moved to
`_callee_read`, which returns None for the folded callee while the base is spelled `DAT_...`.

**The trap I nearly wrote into the queue.** My first action text said the fix was to admit `DAT_` to
`_callee_read`'s whitelist. I checked that against the generated body before shipping it, and it was wrong:
`0x10003b60` runs `mov eax,[0x1045666c]` / `mov eax,[eax+0xc]` / `mov ecx,[eax]` / `call [ecx+0xc8]` - four
reads, `rd32(rd32(rd32(rd32(G) + 0xc)) + 0xc8)`. A bare `DAT_hex` in Ghidra's C is the VALUE at the global,
not its address, so whitelisting the name reads `COW_IMG(G) + 0xc` and shifts every read by one level: a body
that compiles and disagrees with the oracle. `_callee_read` already gets the nesting right once the global is
a macro; what is missing is the value-form substitution the module already applies to a bare `DAT_hex`
elsewhere. The queue text says so explicitly now, because a plausible-but-wrong framing is the expensive
thing to leave in writing - it does not merely fail, it fails while looking like progress.

Population: **5,301 proven of 7,604 lifted** (69.7%). Families: partial_register_write 1,594 /
indirect_call_not_modelled 829 / x87 796 / leftover_unbridged_call 490 / string operand_stack_frame 431 /
goto 399 / bare_deref 188.

## 2026-11-09 (late, fourth entry): the folded callee reaches through image globals - +36

The callee job this entry named is done. `**_callee_read` translated the chained-pointer callee as soon as
its base was a macro and returned None while it was still spelled `DAT_...`; the fix is
`ghidra_c.fold_image_globals`, and the whole risk of it sat in one distinction: in Ghidra's C a bare
`DAT_hex` is the **value at** the address, not the address. Folding it to `COW_IMG(...)` skips a guest read
- 3 reads where the generated body performs 4 - compiles, links, and only cowdiff would notice. So the fold
emits the value form `*(COW_IMG(...))` (one star over a macro leaf, which `_addr_subexpr` already reads as
exactly one guest word) and the address form only behind `&`. Nothing new is parsed: the substitution feeds
the audited parser, and the read count comes out of the existing star bookkeeping for lift.py to
cross-check against `target_desc`.

**Result:** emitted 7,701 -> 7,752, `indirect_call_not_modelled` **829 -> 667**, 143 more callees bridged,
51 new units with **zero** already-proven files disturbed, **36 pass** -> population **5,337 of 7,655**
(69.7%). The 15 failures are the known `memory`/`eax` shapes (`store=missing`, the frame-accounting family),
not the fold: the one I read had a walk-named target, so it was never a folded callee at all.

**Contract cases, and proof that they bite.** Five FOLD cases in `lift_selftest.py` (178 -> 183), covering
value form, `&`-address form, `PTR_`, the four-read count, and a `DAT_` inside a longer identifier that must
survive untouched. Then the check that matters: I mutated the fold to the plausible address form and the
read-count case failed (3 vs 4) - an assertion that passes against its own bug is not an assertion. The
mutation runs against a patched copy of the module in memory, not against the shipped file.

**What the fold uncovered, in its own named bucket.** 32 units now book `doubled_accessor`: `*DAT_x[n] = v`
- a subscript STORE through an image global - comes out as `rd32rd32(...) = v`, an rvalue where an lvalue
was meant. That is a pre-existing bug in the array/subscript path, which the fold merely exposed by letting
those units get further than they used to; the guard refuses them, so nothing wrong shipped and the job is
named rather than hidden. 27 more book `indirect_target_not_nameable_*` because their `target_desc` is
`unknown` (`call [ecx*4+0x1035097c]`) - there is no guest count to cross-check against, so the conservative
refusal is correct and indexing/scaling is a real model, not a check to loosen.

**Correction, one entry later - and the reason to read a unit before naming a mechanism.** The paragraph
above described the doubled accessor as `*DAT_x[n] = v`, "a subscript store through an image global". Close
enough to sound actionable, wrong in the part that mattered: Ghidra writes `DAT_x[n] = v` with **no leading
star**, and the `rd32(` that gets doubled comes from `_symbols` reading the global's *value*. The real
distinction is that the global is **untyped and pointer-valued** - the guest fetches the pointer and then
addresses through it (`mov ecx,[x]` / `mov dwordptr[ecx+4],eax`). My first isolated repro TYPED the global
and converted cleanly, which would have "disproved" the bug and closed it wrongly; it only reproduced once I
dropped the declaration, i.e. once I matched how globals actually arrive. Fixed by
`IMG_SUB_PTR_WRITE`/`IMG_SUB_PTR_READ` in `_image_subscripts`, which keep the base fetched
(`wr32((uint32_t)(rd32(COW_IMG(x)) + 4u*(n)), v)`) - dropping that inner `rd32` is the one-pointer-too-few
bug again, so two contract cases assert on its presence (selftest 183 -> **185**, and both verified to fail
against a module with the new rules disabled). `doubled_accessor` 32 -> **0**, +4 proven (**5,341 of
7,659**), and `0x1020a420` - the unit that motivated the guard last turn - now lifts and passes.


The instructive number: **28 of the 32 fell straight through to another wall** (partial_register_write,
goto, odd_width). So the guard had been hiding a *shape*, not a count. A named refusal is worth having
precisely because it makes the shape findable; it is not a promise of units on the other side.

**Two things this entry re-taught.** (1) The queue text I wrote last entry nearly instructed a future
session to admit `DAT_` to that whitelist - the wrong-address fix, phrased as the obvious one. Checking the
generated body before shipping the *text* caught it; a wrong queue note is expensive precisely because it
looks like progress. (2) A patterns.py action edit left the replaced string's tail behind as an adjacent
literal: it compiled, and the action would have read new-then-stale. The integrity check is now
`len(FAMILIES) == 15` plus every action a single-line `str` plus an assertion that the retired sentence is
gone - not just "the module imports".

Scratch files keep vanishing between turns (`build/` and once `cow/wip/`), so patch scripts are now applied
with the edit tool against the real file, and anything that must run is run in the same call it is written.

## 2026-11-09 (late, fifth entry): leftover_unbridged_call - the fix is lift.py, and my own sub-tag killed itself

Handed `memory` (839) to the queue last session and moved to `leftover_unbridged_call` (495). Census at
`--n 300`: **228 of 300 refuse on `no_generated_call_site_for_FUN_x`**, splitting **155 intra-body tail
calls / 73 target-nowhere**. Added that sub-classifier to `lift_unbridged_diag.py`; it misfired twice in
ways worth writing down.

**(1) It read the canon'd problem string** (`canon()` replaces hex with `x`), so the target lookup
matched nothing. Fixed by capturing `raw_probs` before the clear. Same trap as the `--freed-by` census:
a classifier reads RAW; only the bucket label may be canon'd.

**(2) My first sub-tag was a confident wrong answer, caught by reading the unit I claimed to have read.**
I split the 155 by "does a `pop`/`ret` line appear before the `jmp` in the body text" and called the 68
"upper bound of the safe subset" - reasoning that if the body already popped, bridging the tail as a
plain call cannot double-pop. False, for a structural reason: in a LIFTED unit the cleanup is not in the
body at all. `ADAPTER_TMPL` runs `{epilogue}; g->esp = sp0; rt_return(...)` once, after
`cow_lift_x(g)` returns, on *every* path - so the order of Ghidra's text inside the body cannot spare a
tail path anything. The tag is deleted and the reasoning recorded here so nobody re-buys it; the
detector now splits on something load-bearing.

**The measurement that changed the plan.** For **138 of the 155** the generated body already renders that
mid-body jump as `{ REGS_STORE; f_T(g); return; }`, while the ordinary path says `esp += 4; REGS_STORE;
return;` - the tail path deliberately does not pop, because the target's `ret` pops our caller's slot.
Read 0x10018b00 and both lines are side by side (`10018b1e: pop esi` / `10018b1f: jmp 0x10071050`). The
original already does the tail as a host call; the lift only lacks a per-path exit. Last session's
conclusion - "needs a runtime 'we tailed out' signal, therefore defer it" - was wrong about where the
signal lives: the lifted function can RETURN it (`return 0` / `return 1`) and the adapter skips its
epilogue on 1. That is a lift.py change, not a runtime change, and it leaves the single-tail
`TAIL_ADAPTER_TMPL` units that pass today alone. Kept in the queue entry with the honest risk that
multi-path pushes/pops collapsed into one epilogue may push some of the 138 into the frame-shift
`memory` rows instead of to PASS - which is why it goes behind an opt-in knob and gets measured on ~20
units before any full run.

Also dropped an unverified "557 units pass through the tail adapter" from the queue text: that number
came from a different census, and a queue note gets read as fact by whoever picks it up next.

## 2026-11-09 (late, sixth entry): the tail-call fix gets priced, and two checks were missing

Followed the fifth entry's design far enough to price it, and the pricing changed the shape of the
work. `tail_call_tag()` in `lift_unbridged_diag.py` now splits the 155 intra-body tail calls by the
only structural fact that decides cost: **103 bodies have no pops at all**, so the `return 1` /
skip-the-adapter-epilogue flag is the entire fix for them; **the other 34 pop before they jump**, and
for those the pops have to be emitted inline on the tail path, because the adapter epilogue runs after
`cow_lift_x` returns and doing those pops then reads `rd32(esp)` at an esp the target's `ret` already
moved. Not a no-op - a corrupted read. Start with the 103.

**Two detector bugs in my own new code, both caught by a check file rather than by me.** (1) The
refactor collapsed the body text with `.replace(" ", "")` *before* searching `jmp\s+0x...`, which
can never match: every unit in the sample was filed as "target appears nowhere in the body", and the
number looked plausible. (2) The first pop regex looked for `g->esp`, but the GENERATED body pops
through locals - `{ uint32_t v = rd32(esp); esp += 4; esi = (uint32_t)(v); }` - only the adapter uses
`g->`. That one reported 138/138 units "sound", which is the worst kind of wrong: a uniform, confident
answer about a population. Same lesson as the frame-store census, third time meeting it - and this
time the fix was structural, not diligent: `lift_unbridged_check.py` runs the SHARED function (imported
from the diag, never re-typed, or the check passes while the detector rots) against 0x10018b00, the
unit I read line by line, plus the pop pattern in isolation with both a matching and a non-matching
string so it cannot pass by matching everything or nothing.

**The queue had no integrity check at all.** The summary I inherited said "patterns.py integrity
check: 15 entries, single-line actions, retired sentence absent" - and there was no such thing in the
tree. It had been ad-hoc `python -c` one-liners, which is precisely what disappears between turns.
`tools/cow/loopy/patterns_check.py` now commits those clauses plus two more that came out of thinking
about how the queue actually lies: a **RETIRED list** (the adjacent-literal accident is invisible to
Python - the only thing that can see a stale tail is a list of sentences that must not come back), and
**reachability** (a key that matches nothing is dead research that reads like progress - but a family
that hits zero because it got FIXED must keep its prose, so the test is "in the snapshot OR spelled in
the lifter sources", not "nonzero today").

Then the mutation run caught a false green in the mutation harness itself: `shutil.copy` preserves
mtime, so after a restore the checker reimported a stale `.pyc` and reported the PREVIOUS mutation's
clause. Two rows looked fine while proving nothing. Clearing `__pycache__` per run made attribution
honest, and the isolated re-test of the newline mutation is what showed the discrepancy instead of
letting me read it as a pass. A mutation harness that misattributes is worse than none, because it
reports "all cases bite".

Also caught, by the new check rather than by intent: five queue actions name `gen_model` or
`ghidra_c` with no `.py` and my first version called them unactionable. That clause was wrong, not the
queue - a check that fails the thing it guards for its own narrowness gets the clause deleted next
week, so it was widened to the queue's actual vocabulary. Two keys (`purge_ambiguous`,
`does_not_compile`) matched no live row and are spelled in the sources: families at zero, which is a
success the queue is allowed to remember.

Selftest 185/185, patterns_check 80/80, unbridged check green, three commits pushed.

## 2026-11-09 (late, seventh entry): intra-body tail calls shipped - +33 proven, and a guard that guarded the wrong thing

The design the fifth and sixth entries priced is now code, and it moved the number: **5,341 -> 5,374 proven of 7,713** (+33, from 54 emitted). The lifted function returns `int` - 0 = returned normally, 1 = I left through a tail - and ADAPTER_TMPL skips `{epilogue}; g->esp = sp0; rt_return(...)` on 1, because on that path the target's own `ret` returned for this entry. The tail call itself is the existing `cow_bridge_tail_*`, and the single-tail `TAIL_ADAPTER_TMPL` path was not touched. Gate: pop-free bodies only (`gen_model.intra_tail_jumps`); the 34 that pop before they jump stay refused until per-path pops exist. 8 INTRATAIL cases (selftest 185 -> **193**), each verified to fail against a module with its clause deleted - including the one that matters, drop-the-pop-gate, which would otherwise skip a restore the guest really performed.

**Two things I did that were nearly bad writes, both from testing rather than from the feature.**

(1) To prove the new `int` return was safe I ran the proof on the 54 units - without `--out`, which defaults to the **hand** record. `lift_proof.py` has a guard precisely against this, and it let me through: the guard built its stray list from `a.entries` only, so the ordinary invocation, `--list`, walked straight past it and wrote 54 lifted verdicts into `cow/lift_proof.json` - the file the gate reads to decide a hand unit is proven. The comment above it says this happened twice before, to 296 verdicts. The guard had been checking *how you were asked*, not *what you were about to do*. Fixed to run on the resolved entry list from `load_entries()`, whatever flag produced it. Second attempt, my first version of the fix compared against "has any row in the ledger", which is worse than useless: `lift.py --apply` files every lifted unit it emits as `todo`, so every stray has a row and nothing would ever look stray. The distinction is **status**, and `done` is the one the gate itself reads. Both records restored with `git checkout` before anything was committed.

(2) Then I tested the guard by running it on a real hand entry. It passed the guard, went on to build, and wrote a row saying that **proven hand unit 0x10001370 failed with `no_adapter`** into the hand ledger. A test of a safety check is not read-only by default. Reverted; the general rule is that anything which exercises a writer must write to a scratch path, and I should have known that on a day whose previous entries are about checker integrity.

**Housekeeping the tree taught me again.** After the run, `git status` showed 100 modified lifted files for a 54-unit change: 46 were the committed-CRLF-vs-lifter-LF illusion, and `git diff --numstat` confirms zero content lines in them. Restoring those (`git checkout -- src/lifted`, safe once you have *measured* that they are EOL-only) keeps a units commit to the 54 files that actually changed. And commit.py is deliberately two kinds of commit: the `--machinery` one refused to stage the unit paths and said so in a note, so the units needed their own `--cluster` commit - which is also the right shape, because the machinery is a different claim from the 33 verdicts.

**Still owed, and it is the queue's own number now:** `memory` is at 845, still the top pattern, and the intra-body tail work moved the 21 failures of this batch into it and into eax/edx rather than clearing any of that. The tail family is also not finished - the 34 pop-before-jump units need the pops emitted inline on the tail path, which is per-path work, not a flag.
