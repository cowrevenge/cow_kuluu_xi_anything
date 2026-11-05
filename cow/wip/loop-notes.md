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
