# The local binding ships 54 compiling units — and the number that meant nothing first

Date: 2026-11-11. Machinery: `tools/cow/ghidra/lift.py` (`--dump-pre-bind`, `--gate-dir`,
`write_layout_files`, local binding decided before the rewrite), `lift_local_bind_gate.py`,
`lift_gate_can_fail.py`.

## What the retraction actually was

`COW_MODEL_LOCAL_BIND_MEASURE` reported "54 newly liftable", and reading one artefact showed

    CowU32 *rd32((uint32_t)rd32((uint32_t)slot_local_224);

which is not C. The count was retracted to 0. This is what was wrong, and where each lesson came from.

## The cause was upstream of the binding, in the Rewriter

`--dump-pre-bind` (writes `newbody` exactly as the binding receives it, into `build/` only) showed that
Ghidra wrote `undefined **local_224;` and the artefact contained `CowU32 *rd32((uint32_t)local_224);`.
`ghidra_c.Rewriter._derefs` walks the text character by character and treats a `*` as a dereference unless
the previous significant character is an operand (`IDENT_CHARS` or `)]`). In `Type **name;` the second star
is preceded by the first star, so it reads as a load: `*local_224` → `rd32((uint32_t)local_224)`, inside a
declaration. Then my removal regex — written against Ghidra's spelling, correctly — matched nothing, and the
substitutions rewrote the name inside the wreck.

So the binding was never the broken part. The declaration had to be removed while it was still a declaration.

**Fix**: the decision and the declaration removal moved above `rw.rewrite()`; only the substitutions stay
after it, because the expression being stored is the Rewriter's business (image constants, calls,
subscripts). The declaration is recognised on Ghidra's text with `_LOCAL_DECL_RE`, which excludes any line
containing `(`, `=` or `[` — an assignment, a call and an array are each unrepresentable by construction.

Why deleting it is safe here, measured rather than assumed: **no unit in the population dereferences or
subscripts its bound local** (0 of 58, `build/scratch/prebind_deref_use.py`). If one had, deleting the
declaration would have cost the Rewriter the width it reads off that type and turned 54 releases into 54
`bare_deref_width_unknown` refusals. `body` is dead after `rw.rewrite()` until it is rebound at the
COW_LIFTED slicing (`build/scratch/probe_body_dead.py`), so the deletion cannot leak into another pass.

## The second trap: report-only "lifted" has never met a compiler

`lift.py` prints `lifted` in report-only mode where `lifted == emitted`, and the measurement knobs refuse
`--apply` — so the syntax gate was **unreachable** for them. Every "released N" this session was an emitter
count. `--gate-dir DIR` fixes that without weakening the refusal: it writes the run's bodies *and its own
layout* into a `build/` directory (validated by the same guard as the dumps) and compiles them with the real
`syntax_gate()`. The layout writer was **extracted** into `write_layout_files()`, not copied — a second
generator of `lifted_addresses.h` is the forked-rule defect this repo has now met five times.

And because "0 rejected" from a gate nobody has seen refuse anything is the same trap as a zero from a
predicate that cannot fire, `lift_gate_can_fail.py` checks both directions: it feeds the gate the mangled
declaration shape and requires a refusal **and** the file moved out of the tree, then feeds it the same body
made valid and requires a pass. A gate that refuses everything discriminates nothing either.

## The number, at the only standard that counts

    control: 5 shipped units compiled through --gate-dir      (the gate can pass, on real files)
    --gate-dir .../on: emitted 54, compiled 54, did not compile 0
    OFF arm: 0 lifted (all 65 refuse on local_address_escapes) — capability tripwire
    QUOTE ONLY THE COMPILED NUMBER: 54 newly liftable.

54 of 65 compile. The other 11 have no unique witness or no declared width and keep their honest refusal.
One unit read end to end against the guest by hand (`build/scratch/check_slot_by_hand.py`): Ghidra's
`lea eax,[esp+0x12c]` at `esp = sp0-556` is `sp0-256`, and the adapter declares `slot_local_224 =
(CowU32)(sp0 - 0x100u)`. That is the arithmetic the guest executed, not a convention.

## What is still NOT claimed

Compiling is not being right. These 54 have not been judged by cowdiff, so:

* nothing is booked, and the STOP from the independent re-verify still stands;
* the knob still refuses `--apply`;
* the release is a *candidate* population for proof, and the proof needs the harness, which the whole-image
  audit held all session.

Three sub-mechanisms are still counted separately and must not be merged into one number: the string witness
(5 released on its own population), param binding (32, report-only), and now local binding (54 compiling,
0 proved).

## Regression state after this change

`lift_selftest.py` 258/258, `inertness_check.py` 125/125 knob-off byte-identical, frame-save / param-witness /
tail-pop specs green, `lift_epilogue_pairing_spec.py` at its documented known-open `rc=1` (unchanged file),
`lift_relift_run_check.py`, `reverify_attrib_check.py`, `lift_relift_verdict.py --selftest` green.
