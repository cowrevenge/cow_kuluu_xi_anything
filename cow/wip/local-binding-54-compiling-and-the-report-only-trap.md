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

## The gate earned its keep on the FIRST use: the param binding's "32" was 28

`lift_param_bind_gate.py` runs the same treatment over `COW_MODEL_PARAM_BIND_MEASURE`, whose "32 released"
came from last session's report-only run and had never been compiled either:

    emitted 45 -> compiled 41; 4 bodies cl refused
      0x10204683, 0x10204793   C2106 '=': left operand must be l-value
      0x10062e20, 0x10245480   C2100 you cannot dereference an operand of type 'uint32_t'

Two were the binding's fault and two were not, and telling them apart needed the file and a compiler, not the
count. `lift_compile_one.py` (new: one file, the gate's own flags, cl's full output with **line numbers** —
`syntax_gate` reports a code and a message, which is not a diagnosis) put the C2100 on line 28:

    wr8((uint32_t)(*(CowU32)rd32((uint32_t)puVar1) + 0x1a), ...);

`puVar1`, not a bound param. That is the pre-existing `*(CowU32)(...)` Rewriter family, unmasked by the knob
because the unit never reached the gate before — not a binding defect, and not this knob's job to fix.

The C2106 pair **was** mine: `*(T *)(param_k + n) = v` becomes an l-value expression whose base is the formal,
and the binding's value-use substitution turned that base into `rd32(...)`, producing `(...) = 0;`. The
existing "the body writes it" guard only looked for `param_k = ...`, so a write *through* it slipped past.

### The guard that could not fire, and what caught it

The first version refused at *decision time*, checking `newbody`. It changed nothing — the two units came
back as gate rejects again. Two reasons, both instructive:

1. **The line does not exist yet.** `(((uint64_t)(rd32((uint32_t)param_1)) << 16) & 0xffffu) = 0;` is not
   Ghidra's text; `apply_partial_widths()` writes it in later, from the generated body's partial register
   writes. Any guard that must see the shipped form has to read the **assembled `text`**, which is where the
   mangled-local-declaration guard already lives. Same lesson twice in one session: a predicate that runs
   before the damage exists cannot see the damage.
2. **It counted `{`/`}` as nesting**, so every statement in a function body sat at depth ≥ 1 and the
   predicate returned False for the entire corpus — it refused nothing at all. My six hand-written cases all
   passed because none of them was inside a function body. What caught it was running the predicate against
   the real artefact cl had rejected (`build/scratch/why_lvalue_missed.py`): "the guard fired no refusals" is
   a result to investigate, not a clean run.

So `_name_in_lvalue` now counts only round and square brackets, treats `{`/`}` as statement boundaries, and
has **10 permanent cases in `lift_selftest.py`** (268/268) — wrapped in function bodies like the C that
actually reaches it, including the two lines that motivated it. The decision-time copy was *removed* rather
than kept as belt-and-braces: two places deciding "is this param bindable" is the forked-rule defect, and the
later one is the one that sees the truth.

Re-priced after the fix: `emitted 43, compiled 41, did not compile 2`, gained **28 of 28 compile**, and the
two store-through-slot units now refuse as `param_bound_lvalue_position` with the offending line available
under `--verbose` — an honest refusal with a diagnosis, instead of a file for the gate to sweep up.

## Permanent tools added

`lift_gate_can_fail.py` (the gate must refuse invalid C **and** accept valid C), `lift_local_bind_gate.py`,
`lift_param_bind_gate.py`, `lift_slot_witness_check.py` (re-derives every bound slot from the disassembly,
with its own limit stated in the output), `lift_compile_one.py`. Plus `--dump-pre-bind` and `--gate-dir` in
`lift.py`, and the layout writer extracted to `write_layout_files()` so `--apply` and `--gate-dir` share it.

`lift_slot_witness_check.py` says it best and it is worth repeating here: all 54 slots match an address the
guest computed, **but which of the guest's prefix leas was the right one for this local, and whether the
callee reads the word back, is cowdiff's question.** Nothing here is booked, and the STOP still stands.
