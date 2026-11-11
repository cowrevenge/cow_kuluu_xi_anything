# The relift's controls moved, and it was the knob I had called shippable

Date: 2026-11-11. No booking; the STOP still stands. `src/lifted` and `layout` were reverted to `6cb615b5`
after this investigation and are clean.

## What happened

`lift_relift_run.py --apply` (170 units, knobs `COW_LIFT_EPILOGUE_MATCH_PUSHES`, `COW_LIFT_TAIL_EPILOGUE`,
`COW_MODEL_TAIL_POP_RUN`, `COW_MODEL_NPUSH_FRAME_AWARE`) was launched. Before waiting for its proof, the
tool's own guard was pre-computed from disk (`build/scratch/relift_dirty_check.py`): 172 lifted files dirty
against a 170-unit list. The two extras were **controls** - units the knobs are supposed to leave
byte-identical. A control moving is the alarm the control list exists to raise, so the run was killed, its
lock released, and the tree reverted before any of its numbers could be quoted.

## What the controls actually said

`git diff` on the two, captured first (`build/scratch/control-break-diff.txt`):

```c
 /* 0x100142b0 */
-commits: (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103502E8) }   /* rebased */
+knob run: (const CowU32[]){ 271909608u }                        /* 0x103502E8 as a raw literal */

 /* 0x10014200 */
-commits: (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_104568F8)) }  /* a live read of a global */
+knob run: (const CowU32[]){ g->eax }                                 /* whatever eax holds now */
```

The second is the worse of the two and it is not cosmetic: a bridge argument that was a **live load of a
global** became a register read. If anything between the load and the call moved `eax`, the callee is handed a
different word, and nothing in the emitted C looks wrong.

## Which knob, established the only way it can be

`build/scratch/knob_bisect_controls.py`, report-only with `--dump-c`, comparing to the committed bytes:

| arm | controls |
|---|---|
| **no knobs at all** | **byte-identical** |
| `COW_LIFT_EPILOGUE_MATCH_PUSHES` | unchanged |
| `COW_LIFT_TAIL_EPILOGUE` | unchanged |
| `COW_MODEL_TAIL_POP_RUN` | unchanged |
| **`COW_MODEL_NPUSH_FRAME_AWARE`** | **both controls change, exactly as above** |
| all four together | same two changes |

The no-knob arm is what makes this a finding rather than an accusation: it shows the committed bytes are
reproducible, so the difference belongs to a knob and not to lifter drift since those files were booked.
One knob, reproducing on its own, is the answer.

## What I am NOT claiming

`COW_MODEL_NPUSH_FRAME_AWARE` did not introduce raw addresses into the corpus. A scan of all 10,547 shipped
lifted files finds **1,866 address-shaped literals in code, all of them inside the `COW_LIFTED` body** - the
region whose own header states *"Readability rules do not apply here by design"*. Bare literals there are
existing practice, not this knob's damage. The finding is narrower and still disqualifying: **the knob is not
inert outside the population it targets, and it changes the value source of a bridge argument.** A knob that
rewrites units it was never asked to touch, in a way that swaps a live memory read for a register, cannot be
shipped on the strength of a gain count - and the 433→399 npush measurement that made it look attractive was
taken with this knob in play.

## Why cowdiff would never have caught this

The proof harness maps the image at its preferred base (`RD = 0`), so `COW_IMG(x)` and the bare `x` are
numerically equal under the judge. A relift PASS could not have distinguished the two renderings, and the
live-read-versus-register change only bites on states where `eax` was written between the load and the call.
This is the shape where only the controls can tell you, which is the argument for keeping them in the batch
rather than asserting byte-identity from the emitter.

## Method notes (three of my own tools were wrong before they were right)

- The first bare-address scan split each **line** on `/*`, so a multi-line banner comment (`TAIL CALL: this
  entry ends in \`jmp 0x10001e30\``) counted as code: a headline of 1050 that was mostly prose.
- Masking comments with a single **space** then destroyed the line numbering - a 20-line header became one
  line, so per-line lookups read the original file at shifted offsets and "found" 1866 including header
  sentences like *"Readability rules do not apply here by design"*. Masking must emit the same number of
  newlines.
- The tripwire itself was blind at first: `(?![\w.])` after the digits rejected `271909608u` because the
  `u` suffix is a word character - so the scanner could not see the very literal that motivated it. Each
  version was caught only because the script printed sample lines to read by eye.

## Status and next

`COW_MODEL_NPUSH_FRAME_AWARE` is **not shippable as it stands**: it must be made inert outside its target
population, and its bridge-argument value source must come from the same path the committed lift uses. Until
then the relift list must be re-priced **without** it (`--knobs` minus that one), and any gain it produced is
suspect. The four knobs are otherwise still off by default and the relift wrote nothing that survived.
