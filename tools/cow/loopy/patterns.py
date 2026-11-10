"""The lift pattern queue - what `loopy next` should be handing out, and in what order.

Phase B's priority order (docs/cow/LOOP.md) is:

    a. fix the biggest LIFT PATTERN (a refusal family, or a failure group that is really one bug in
       lift.py / gen_model.py / ghidra_c.py / the bridges), rerun, commit what newly passes;
    b. get the lifted-but-failing units passing;
    c. hand-convert an address only when the lift REFUSES it and no pattern fix is in reach.

The volume is in (a). Before this file, `loopy next` only knew about (c): it read the ledger and handed
out a hand unit, which is how the loop came to spend a turn on a 771-line switch/goto oracle that the
lifter is the right place for. So `pick()` asks this module first, and only falls through to the ledger
when no pattern is in reach.

WHY THE STALENESS GUARD IS THE WHOLE POINT OF THIS FILE
--------------------------------------------------------
Every number here comes from a snapshot: `lift_refusals.json` is what the lifter refused AT THE TIME it
ran, and `lift_proof_all.json` is what cowdiff said AT THE TIME it ran. Both were trusted when they were
stale earlier in this project, and both produced confident nonsense - the single-entry case that mattered
was a note claiming "this address is not in the refusal set, so lift.py will emit it", read off a stale
file; measured on the unit itself it books `x87_not_modelled`. A refusal list is a snapshot of a lifter
that changes every session.

So every pattern carries `measured_at` and the queue refuses to rank anything older than the lifter files
it depends on. When it is stale the answer is `regenerate` - not a guess, and not a silent fall-through to
hand work. A queue that quietly ranks yesterday's population is worse than no queue, because it looks
authoritative.

USAGE
    python tools/cow/loopy/patterns.py            # ranked JSON, top first
    python tools/cow/loopy/patterns.py --top      # just the one to work on
"""

import argparse
import collections
import json
import os
import sys
import time

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, os.path.join(ROOT, "tools", "cow", "ghidra"))

REFUSALS = os.path.join(ROOT, "build", "cow_lift", "refusals.json")
PROOF_ALL = os.path.join(ROOT, "cow", "lift_proof_all.json")

# the files whose behaviour defines the population; if any is newer than the snapshot, the snapshot is a
# description of a lifter that no longer exists. Deliberately NOT lift_proof.py: what the lifter REFUSES is
# decided by these three, and counting the proof runner here made the snapshot go stale on every plumbing
# change to grading - which is not a change in what exists to be lifted.
LIFTER_FILES = ["tools/cow/ghidra/lift.py", "tools/cow/ghidra/gen_model.py",
                "tools/cow/ghidra/ghidra_c.py"]

# Refusal families, keyed by prefix, each with the thing that would have to change. A family is a
# PATTERN only if one change clears many units; `argcount_mismatch_10029038` and friends are per-address
# accidents and must not be allowed to masquerade as a family, so they are folded together and capped.
FAMILIES = [
    ("partial_register_write", "MEASURED - this residue is NOT an alignment bug, do not 'improve the "
                               "alignment'. The width model (partial_write_sequence + apply_partial_widths) "
                               "already landed and released ~2,260 units at 86% of those that compile. A "
                               "200-unit census of what is still refused (lift_partial_diag.py) came back "
                               "~200/200 misaligned with the mismatch almost entirely n_C = 0: registers "
                               "the generated body writes 2-9 times that the decompiled C NEVER assigns, "
                               "and the returns are bare `return;`, so the return stamp creates none "
                               "either. Ghidra optimised the register away - usually eax, the value the "
                               "caller reads. The alignment check is refusing correctly; releasing these "
                               "would ship units whose eax is the entry value, i.e. failures. Reaching "
                               "them means reconstructing the register's final value from the generated "
                               "body itself (the body as semantics, not as plumbing) - a different and "
                               "much larger piece of work than a pattern tweak. PARKED, see "
                               "cow/skip_patterns.txt. (History: the advice here first said this family "
                               "was unpriceable because a sample returned 'no_adapter' - withdrawn, that "
                               "was two hardcoded src/lifted paths in lift_proof.py. Don't re-derive that "
                               "either.) "
                               "THE PARKING IS MEASURED AND PARTLY WRONG - do not skip this family on the "
                               "strength of the paragraph above. 2026-11-10: with the repaired "
                               "COW_LIFT_ALLOW_PARTIAL the whole-tree run released 2,797 units beyond the "
                               "current population, and a seeded random 150-unit sample through lift_proof "
                               "gave 48 PASS = 32.0% (build/partial_proof.json). That is the best pass rate "
                               "of any candidate measured in this repo - the g->reg fallbacks were 10% and "
                               "8.6%, the global-load rule released 5 - and it projects to roughly +895 "
                               "proven units, a 16% jump on a population that moved +19 in a good session. "
                               "The sentence above about shipping units whose eax is the entry value "
                               "describes the FAILING two-thirds correctly (of 102 failures: eax 45, memory "
                               "25, fault 15, edx 9, callee-saved 6) and states it as if it covered all of "
                               "them, which it does not: a third are genuinely correct, and proof - the "
                               "arbiter this loop already trusts - identifies which. WHAT SHIPPING ACTUALLY "
                               "REQUIRES, which is why it was not done in the same breath as measuring it: "
                               "these units exist only while the alignment refusal is off, and a knob-off "
                               "`lift --apply` PRUNES anything the run did not emit, so shipping means "
                               "making the widening the default with an opt-out for measurement, proving the "
                               "whole released set, and committing what passes - leaving ~1,900 drafts, "
                               "which is the state the tree is already in (7,751 lifted, 5,431 proven). Two "
                               "hazards, both hit today: do not run the independent re-verify concurrently "
                               "with a staged release, because cow_build discovers sources from the tree and "
                               "one non-compiling file fails the fresh build of every unit the audit checks "
                               "(the audit was stopped for this, and needs restarting after the decision); "
                               "and delete the untracked set BY NAME before `git checkout HEAD -- src/lifted "
                               "layout/`, which restores only tracked files - the 2,797 sat in the tree "
                               "until removed explicitly."),
    ("string_op_not_modelled",
     # THIS FAMILY HAS BEEN MIS-MEASURED REPEATEDLY, and the mis-measurements were all bugs in the measuring
     # tool, not in the code. An early census scored provenance over the WHOLE body instead of AT THE REP (a
     # register written by a load afterwards condemned the unit, and vice versa) and scored every form on
     # esi/edi/ecx when the ISA says scas/stos never read esi and lodsb never reads eax; each fix moved the
     # numbers by ten points. Two rules earned their place: provenance is a property of a POINT in the
     # program, and the register set is an ISA fact PER MNEMONIC. Both are in gen_model.string_shape and
     # pinned by STRINGSHAPE in lift_selftest.py; cross-check any new number with a second seed.
     # WHAT IT IS NOW, read from the PRODUCTION gate rather than a census (build/cow_lift/refusals.json):
     # operand_load 556, operand_stack_frame 359, std_direction_flag 4 - total 919. The form categories are
     # GONE, and that is worth understanding rather than celebrating: scas/cmps were refused 384 units on the
     # claim that they "leave zf/cf, which cowdiff compares", and the comparator says the opposite about
     # itself (tools/cow/cowdiff.c:17-23 - "Flags are deliberately not compared... a caller cannot observe
     # flags across a call"). Admitting them freed 10 emitted units, not 384, because the form clause had been
     # RUNNING BEFORE the provenance clause and masking it: 242 of those units refuse on load-provenance and
     # 74 on frame-provenance the moment the form stops condemning them. A refusal built on a mis-read of the
     # harness is a pricing error, and prose ABOUT a checker is not the checker.
     # SO THIS IS A PROVENANCE FAMILY, NOT A FORM FAMILY, and both halves of that are now measured rather than
     # argued. The rep loop over const / never-written / derived operands AT THE REP shipped first (the
     # string_shape gate, +19 then +1). The LOAD wall shipped on 2026-11-09 as gen_model._str_load_named: a
     # dword load of `dwordptr[base+disp]` whose base itself resolves AT THE load is a read of a known guest
     # address, which is what rd32() says - so it is admissible, while an index register, a scale, a non-dword
     # width or an unresolvable base each keep their own refusal name (four selftest cases pin exactly that,
     # because the dangerous direction is a widening that swallows a refusal it never examined). Measured:
     # emit 7,532 -> 7,653, gate +145 files, PROOF +20 (13.8%), and operand_load 556 -> 52. The remaining
     # ~380 did not vanish - they moved DOWNSTREAM to stack_frame (285 -> 431) and unnameable (0 -> 25),
     # which is what removing an early refusal looks like and the reason a reason count is never the report.
     # WHAT IS LEFT is ONE wall: operand_stack_frame 431, i.e. frame aliasing. It is NOT the arithmetic
     # identity it looks like - the founding example maps guest [esp+0xc] to a Ghidra local_94, so the local
     # number is not the esp offset and the correspondence has to be established per unit by dataflow, never
     # by subtraction. The same model unblocks the argcount/push family, so build it once.
     # WHAT TO KEEP REFUSING. rep forms are 98% of the population (lift_stringdiag.py), so there is no
     # unprefixed single-move slice to harvest. Width comes from the MNEMONIC (b/w/d) and direction from df,
     # both x86 facts, and a form whose width cannot be read is refused rather than guessed. No std anywhere
     # (measured 0 of 600, so it costs nothing and removes a class of silent mis-aim). Do NOT copy the
     # generated body text `while (ecx) { wr32(edi, ...); edi += (df ? -4 : 4u); ecx--; }` - that body is what
     # cowdiff is compared AGAINST, so imitating it is not evidence. lods stays refused: nobody has priced
     # it, so there is no knob for it and no claim about what it would release.
     # TWO KNOWN GAPS, stated so they are not mistaken for closed. (1) The gate is one clause short of
     # sufficient: out-of-region WRITES keep arriving through it - 5 of the first 68 releases, and 7 of the 145
     # from the load-naming slice - because provenance accepts typed-pointer arithmetic that still aims at
     # host memory once the variable stops being a real pointer type. The proof caught every one of them,
     # which is the harness working, but the gate should refuse them and the units are not free: 7 units of
     # proof time went to bodies that should never have been emitted. (2) The ~455 store=value / store=missing
     # memory rows share the frame cause now that the load cause is largely closed; do not count them as a
     # separate family and do not fix them here.
     # PRICE EVERYTHING THROUGH THE PROOF, never a reason count: a reason that disappears has usually just
     # moved downstream. The exchange rate this session was emit 126 / gate 68 / prove 19, and emit 10 /
     # prove 1.
     "gen_model + the frame-aliasing model: the LOAD wall was NAMED on 2026-11-09 (gen_model._str_load_named "
     "- a dword load of `dwordptr[base+disp]` whose base resolves at the load; emit 7,532 -> 7,653, gate "
     "+145 files, proof +20 proven; operand_load 556 -> 52). The family is 512 and the wall is now "
     "operand_stack_frame 431: map a Ghidra local to the guest slot it was loaded from BY DATAFLOW - the "
     "founding example maps guest [esp+0xc] to a Ghidra local_94, so the local number is NOT the esp offset "
     "and subtraction cannot do it. Share the model with the argcount/push family, which is stuck on the "
     "same unnamed frame slots. Also close the out-of-region clause in the gate: 7 of the 145 releases aimed "
     "at host memory and only the proof stopped them."),

    ("x87_not_modelled", "FIRST SLICE SHIPPED 2026-11-07 (gen_model.x87_shape): the lift now admits an x87 "
                         "unit only under a shallow-scratch CONTRACT - the stack empty before its own push, "
                         "never deeper than one, empty at every call and at the end, and no instruction "
                         "naming an ST register. Under that contract the guest's top/st0 are provably "
                         "untouched, so Ghidra's float-on-locals arithmetic is a real implementation and "
                         "the generated body is not needed. THE CONTRACT WORKED: 0 of 160 admitted rows "
                         "failed on st0 or top - the FP state agreement held on every unit admitted. "
                         "THE NEXT CLAIM IN THIS FILE WAS WRONG, AND IT IS LEFT HERE AS A WARNING: it said "
                         "the arithmetic units failed on `memory` because of the double-vs-float "
                         "intermediate and named that as the next fix. It was a story that fitted the group "
                         "label. Those units are single-op (fld + one arith + fstp), where per-step rounding "
                         "CANNOT differ, so the theory could not explain them. Reading one unit with "
                         "lift_bodypeek.py found the actual bug in a line: the adapter read every argument "
                         "with `rd32` into a CowU32, so the decompiler-said `float param_2` entered the body "
                         "as raw BITS and was MULTIPLIED AS AN INTEGER (0x100271f0: `*param_1 = param_2 * "
                         "*param_1` for a guest fld/fmul/fstp). Fixed via gen_model.param_types: a "
                         "non-pointer float/double parameter is declared as that type and read with "
                         "rdf32/rdf64. +18 on the same sample, 0 regressions, memory 42 -> 26, tree 4,889 -> "
                         "4,905. Locked by PTYPES. LESSON: a queue action is a hypothesis with a number "
                         "attached, not a work order - check it against units before building on it. THE "
                         "REMAINING memory group (26) is UNEXPLAINED; 0x100271f0 now fails with ONE mismatch "
                         "at state 22 (`store=extra A:2 B:1`), which is not a rounding shape at all. "
                         "PRICED, AND CLOSE TO MINED OUT FOR SAFE WINS. The sub-form counts below are "
                         "FIRST-FAILURE counts, not opportunity sizes, and they do not add up to what any "
                         "one fix unlocks - two widenings were measured through the PRODUCTION gate "
                         "(x87_shape's allow=/max_depth= knobs) instead of reasoned about: allowing `fild` "
                         "admits 46/300 (~15%, and those still need the signed conversion named, since "
                         "(float)rd32 is wrong for a negative), and raising peak depth to 2 admits 2 of "
                         "1,605, because relaxing the push clause only exposes st_register_operand - which "
                         "is the contract WORKING, since combining two FP values requires naming st(1). "
                         "WHAT EACH REMAINING SUB-FORM NEEDS, so nobody re-prices them from here: "
                         "st_register_operand / pops_caller_state / leaves_value_on_stack / stack_too_deep / "
                         "op_at_wrong_depth need a real FP-stack model in the lifted body; "
                         "fp_live_across_call needs the X87_STORE publication before the bridge; "
                         "fcomp/fcom need the condition codes; fdiv/fdivr/fsqrt/fsincos/fpatan need helpers "
                         "layout/x87.h does not have; fistp/fist need control-word rounding (fist32_cw "
                         "rounds nearest-even at the pinned fcw where a C cast TRUNCATES). "
                         "FILD WAS MEASURED TWICE, AND THE SECOND MEASUREMENT KILLED THE FIRST. I wrote "
                         "that it was 'one rule about a cast' - the rule is real and shipped "
                         "(_signed_float_casts: at a (float)/(double) cast whose operand contains a rd* read "
                         "and names a local Ghidra declared int/short/long/char, convert through (int32_t); "
                         "for + - * the 32-bit pattern is sign-agnostic so this is exact, and / % >> < are "
                         "left strictly alone because there the sign changes the RESULT - locked by three "
                         "selftest cases). But the RULE WAS NOT THE BLOCKER. With it in place, admitting "
                         "fild through the gate (COW_LIFT_ALLOW_FILD=1, measurement-only, never for a run "
                         "whose files are kept) emitted 17 units and the PROOF passed 2: memory 6, edx 4, "
                         "eax 3, fault 2. So do not re-open this sub-form for a cast fix - the units are "
                         "wrong in their registers and memory, which is the same evidence that the gate is "
                         "refusing correctly. lift_fild_diag.py says why the rest stay down even before the "
                         "proof: of 146 fild-only units only 46 pass the gate at all, blocked by "
                         "push_beyond_one (38) and fp_live_across_call (20) and further ops outside the "
                         "slice. And 65 of 120 sampled fild units have NO float/double cast in Ghidra's C "
                         "at all, so no cast rule can ever be their story. "
                         "Fresh-snapshot counts: fild 403, fcomp 262, "
                         "st_register_operand 239, pops_caller_state 143, leaves_value_on_stack 127, "
                         "stack_too_deep 118, fp_live_across_call 98, op_at_wrong_depth 47, fcom 44, "
                         "fdiv 42. Each refusal is a wrong answer wearing a plausible one, so refusing is "
                         "correct - these are separate design work, not knob turns. DO NOT "
                         "transcribe the generated body's X87 statements as an implementation - that body "
                         "is what cowdiff compares AGAINST, so agreement would be by construction. The "
                         "gate is locked by lift_selftest.py's X87 cases (one per clause), so a clause "
                         "cannot be quietly widened."),
    ("indirect_call_not_modelled",
     # THE FOLDED-CALLEE HALF OF THIS ACTION WAS OBSOLETE and is kept as a warning, because a queue that
     # sends you to re-implement shipped work is worse than no queue. It used to say "the call pass cannot see
     # `(**(code **)(*p + 0x24))()` today, so nothing bridges it; widen it". That shipped on 2026-11-07 and
     # was widened again in d41d93f9 ("folded callee reaches through a cast group - 5 of 150 released"):
     # ghidra_c._computed_calls recognises the folded form and routes the callee through
     # Bridges.bridge_indirect("EXPR:<reads>:<expr>", args), running BEFORE _derefs on purpose - after it, the
     # deref pass eats the callee stars and the unit books bare_deref_width_unknown, which loses the unit AND
     # mislabels it. leftover_problems now refuses host_call_through_computed_pointer structurally, so a
     # folded callee cannot compile as a host call through guest memory, and lift_folded_check.py pins the
     # contract: 11 spellings, each asserting BOTH the target expression AND the read count.
     # READ _computed_calls BEFORE TOUCHING IT. If your plan is "widen the call pass", you are late.
     # WHAT THE REMAINDER ACTUALLY IS, measured twice (lift_indirect_diag.py on the site side,
     # lift_indirect_ghidra.py on the Ghidra side): the wall is NAMING A LOAD. 762 of 820 sites are the
     # vtable form `call [reg+disp]` whose base register was written by a LOAD (`mov eax,[esi]`), which
     # call_reg_values refuses to name outside the effect-free tail window - correctly, because the value
     # depends on memory as of that instruction. The rest are folded callees _computed_calls still refuses: a
     # CHAINED load, or a base that is a bare DAT_ - and that residue is the same thing still sitting in
     # bare_deref_width_unknown. THE CLAIM THAT THEY ARE ONE JOB WAS TESTED AND IS FALSE IN THIS
     # DIRECTION: the register-value-expression model was built for this family, tightened, and
     # measured - it moves 12 sites off this clause and ZERO units, because every one of the 12 is
     # then refused by bare_deref_width_unknown. The dependency runs the other way: fixing deref
     # widths is what makes any of this visible. Work bare_deref first.
     # WHAT NAMING A LOAD MUST NOT BE. (a) Not `g-><reg>` at the site: the lifted C keeps values in Ghidra
     # LOCALS, so a register read at the call is the ENTRY value - tried in the argcount family, 20 of 207
     # passed. (b) Not a count read off Ghidra leading star-soup: the outermost star of `(**(code **)(X))()`
     # is the CALL IDIOM, not a read - cross-check it against the site target_desc (reg:0, mem:1, abs:1).
     # (c) Not positional site-to-callee pairing when the counts disagree: that path must REFUSE, because a
     # mis-paired site books the wrong return address in a body that compiles.
     # WHAT WAS BUILT, so nobody rebuilds it blind: a window rule (gen_model._load_nameable) plus an
     # early-bound expression, kept as a CLASSIFIER with no emitter - lift_indirect_diag.py prints its
     # verdict per site. It is inert by design; see the action below for the two clauses a real
     # emitter must have (nameable address expression, and no `g->reg` in a deferred address).
     # THE HONEST SHAPE OF A FIX: a small dataflow model over the GENERATED instruction list that materialises
     # a register value as an EXPRESSION (typically `rd32(base + disp)`), evaluates it at the site, and
     # REFUSES when the register has more than one surviving definition between the load and the site. Build
     # it once and share it with the string family. Price it through the PROOF, never the reason count: this
     # session two one-model attempts emitted 95 and passed 23, and emitted 10 and passed 1. That is the
     # exchange rate to expect, and the reason nothing is booked until cowdiff agrees.
     "gen_model + ghidra_c: this family is 829 -> 667 after the FOLDED-CALLEE IMAGE-GLOBAL FOLD shipped "
     "(ghidra_c.fold_image_globals -> _callee_read, +36 proven). Read that function before touching the "
     "family: a bare `DAT_hex` in Ghidra's C is the VALUE at the address, so it folds to `*(COW_IMG(...))`, "
     "and folding it to the macro ADDRESS instead skips a guest read - 3 reads where the generated body "
     "performs 4 - which compiles and only cowdiff catches. Contract cases in lift_selftest.py's FOLD table, "
     "verified to fail against that exact mutation. WHAT IS LEFT, priced on units not sites: (1) "
     "`doubled_accessor` is CLOSED (32 -> 0): it was subscripting through a global Ghidra never typed. "
     "`DAT_x[n] = v` reaches _image_subscripts as `rd32(COW_IMG(...))[n] = v` - the rd32 is _symbols "
     "reading the global's VALUE - and the pass had only the address form, so its read rule matched inside "
     "that read and emitted `rd32rd32(...) = v`. IMG_SUB_PTR_WRITE/READ now keep the base FETCHED "
     "(`wr32((uint32_t)(rd32(COW_IMG(x)) + 4u*(n)), v)`), which is what the generated body does (`mov "
     "ecx,[x]` / `mov dwordptr[ecx+4],eax`); dropping that inner rd32 is the one-pointer-too-few bug and two "
     "contract cases assert it. Pre-existing, merely uncovered by the fold - and note 28 of the 32 fell "
     "straight through to another wall, so the guard had been hiding the shape, not the count. "
     "(2) 27 sites book `indirect_target_not_nameable_*` because their "
     "`target_desc` is `unknown` (e.g. `call [ecx*4+0x1035097c]`) - there is nothing to cross-check the "
     "read count against, so the conservative refusal is correct and scaling/indexing is a real model, not a "
     "loosened check. (3) The remainder is the LOAD-NAMING wall: the deferred-read model is measured at zero "
     "units and its classifier (`_load_nameable`) has no emitter - see the findings above before rebuilding "
     "it, especially the `g->reg` live-read hazard. Do not attach that emitter until (1) and (2) are gone." " MEASURED STRUCTURE 2026-11-10, and it says stop rather than go. tools/cow/ghidra/lift_indirect_ambig_census.py (tripwired on 0x1000e030, read by eye: push ebx / mov ebx,[0x10329174] / call ebx, refused as reg-unnameable:ebx=merge-jump) counted how many indirect sites each refused unit has, because every attempt to name a callee has had to answer that question and none did: 667 units, 412 with EXACTLY ONE site (62%), 245 with two or more. One site means the target is forced and there is nothing to confuse, so the family looked tractable at 62%. IT IS NOT, and the reason is the trap in reading a count without reading what it counts: splitting the 412 by why the model could not name the target gives mem-base-unnameable 338 (eax 189, edx 91, ecx 45, esi 13), reg-unnameable 39+, and only 11 already named. The 338 are the two-load chain - a base register whose value came from a LOAD - which is the exact wall the deferred-read model was built for, tightened, and MEASURED AT ZERO UNITS RELEASED because all of them then fall to bare_deref_width_unknown. So tractable-site-count and nameable-target are different questions, and the optimistic one was the one being quoted. THE 11 ALREADY-NAMED UNITS WERE NOT A MISS, THEY WERE A MISLABEL, and it is now fixed: they are refused by the tail-call guard in lift.py (a body that ends in a tail jump AND has an indirect call elsewhere has a path the walk cannot follow, and TAIL_ADAPTER_TMPL has no epilogue to restore a frame across it), which reused this reason string. They now book indirect_call_not_modelled_tail_call_body - same PREFIX, so every census that scopes by prefix still sees them, but a callee-naming model can no longer be priced against units it could never release. The guard is correct and must not be relaxed to earn those 11. DO NOT re-price this family on its size. It is parked behind the deref-width wall, same as the folded-callee finding above, and the two sub-populations need different things: the 338 need bare_deref_width_unknown gone first, the 245 multi-site ones need statement-level matching between two renderings of one computation, which has already been tried here and rejected as unsound."),
    ("leftover_unbridged_call", "lift.py bridge() + the adapter. MEASURED 2026-11-09"
                                "(tools/cow/ghidra/lift_unbridged_diag.py --n 300, sub-classifier pinned by"
                                "tools/cow/ghidra/lift_unbridged_check.py): 228 of 300 refuse on"
                                "`no_generated_call_site_for_FUN_x`, and that splits 155 INTRA-BODY TAIL CALLS / 73"
                                "target-nowhere-in-body. An intra-body tail call is a `jmp T` on ONE path of a body whose"
                                "other path returns (exemplar read by eye, 0x10018b00: `call 0x10071ec0`, then a path"
                                "`pop esi` / `jmp 0x10071050`, and another `pop esi` / `ret`) - Ghidra writes"
                                "`FUN_10071050(); return;`, but gen_model.tail_jump_of only fires for a SINGLE terminal"
                                "tail jump with no ret, so no call site is recorded and bridge() refuses it correctly."
                                "THE FACT THAT SETS THE FIX: for 138 of the 155 the generated body already renders that"
                                "mid-body jump as `{ REGS_STORE; f_T(g); return; }` while the ordinary path says `esp +="
                                "4; REGS_STORE; return;` - the tail path deliberately does NOT pop, because the target's"
                                "`ret` pops our caller's slot. The original already does the tail as a host call, so NO"
                                "runtime change is needed; what is missing is that in a LIFTED unit the cleanup is not"
                                "per-path: ADAPTER_TMPL runs `{epilogue}; g->esp = sp0; rt_return(...)` once, after"
                                "`cow_lift_x(g)` returns, on EVERY path. THE DESIGN, AND THE SPLIT THAT PRICES IT: make"
                                "the lifted function report which way it left (return int, 0 = returned normally, 1 = I"
                                "tailed out), stamp 0 on the ordinary returns in return_values(), emit the tail as the"
                                "existing `cow_bridge_tail_T(g, ecx, edx, eax)` + `return 1;`, and skip the adapter"
                                "epilogue when the flag says tailed. That is the WHOLE FIX FOR 103 OF THE 155 - the"
                                "bodies with no pops at all, where there is nothing to place. The other 34 are NOT: the"
                                "guest popped before it jumped (0x10018b00 pops esi at 10018b1e and jumps at 10018b1f),"
                                "and gen_model keeps pops as SETS precisely because a multi-exit function pops its saved"
                                "registers once per path (gen_model.py:342), so a pop line sitting before the tail in"
                                "TEXT is a hint and never permission. Those need the pops emitted INLINE on the tail"
                                "path, and running the adapter's pops afterwards reads `rd32(esp)` at an esp the target's"
                                "`ret` already moved - a corrupted read, not a harmless no-op. START WITH THE 103. TWO"
                                "THINGS NOT TO DO: (1) do not touch the single-tail TAIL_ADAPTER_TMPL path - the units"
                                "through it pass today and a wrong epilogue there is a double-pop, not a partial result;"
                                "(2) do not believe a textual 'the body already popped, so this path is safe' split - a"
                                "first cut of the diag tag said exactly that and was killed by reading the adapter,"
                                "because in a lifted unit the pops live in the ADAPTER, not the body. THE DETECTOR TRAP"
                                "THIS FILE HAS NOW MET THREE TIMES: the generated body spells pops through LOCALS (`{"
                                "uint32_t v = rd32(esp); esp += 4; esi = (uint32_t)(v); }`), not `g->esp`, and its"
                                "statements must be searched WITH whitespace for `jmp 0xT` and WITHOUT it for the"
                                "call/pop forms; every wrong version printed a confident, uniform, wrong census, and the"
                                "only thing that caught them was running the classifier on a unit that had been read by"
                                "eye. Build behind an opt-in knob like its siblings and measure ~20 of the 103 before any"
                                "full run. The 73 target-nowhere rows are a separate question (Ghidra invented or moved"
                                "the call); do not average them in."),

    ("leftover_undefined", "lift/ghidra_c: symbols the rewriter could not resolve to a name."),
    ("leftover_odd_width_type",
     "Added 2026-11-10: this family had NO entry, so it was never ranked, never sampled and never handed "
     "out - 262 refusals invisible to `loopy next`. MECHANISM: ghidra_c refuses when Ghidra states a "
     "3/5/6/7/10-byte object (problems `odd_width_{3,5,6,7,10}`, plus the emitted-text check at "
     "ghidra_c.py:1703 for `int3`/`uint5`/`short7` tokens). The dominant source is NOT exotic data - it is "
     "Ghidra's spelling of a PARTIAL REGISTER WRITE. 0x1002d310 is the case: the guest ends `mov al, 1`, the "
     "authority renders it as `eax = (eax & 0xFFFFFF00u) | (uint8_t)(0x1u);`, and Ghidra renders the same "
     "thing as `CONCAT31((int3)((uint)uVar1 >> 8), 1)` - so the `int3` that trips the check is an artefact of "
     "the partial-write idiom, and the C that represents it correctly already exists in the partial-register "
     "model. MEASURED across all 262 (0 units lacked a body): 214 bodies contain a partial-register write = "
     "82%, and 48 do not. So this is a ~214-unit opportunity behind ONE rendering rule, plus 48 units behind "
     "genuine odd-width field support - do not price them as a single job, and do not claim 100% on the "
     "strength of the one unit that made the mechanism obvious. BEFORE BUILDING: (1) re-take the snapshot - "
     "these counts predate the partial-register default-release in 6e79b1eb, which moves units between this "
     "reason and partial_register_write, so the size is a pre-flip number; (2) the refusal is DELIBERATE and "
     "pinned by the contract case `odd-width-refuses-rather-than-pads` (lift_selftest.py:1621) - it exists to "
     "stop a 3-byte object being silently padded. Relax only the CONCAT31/int3 spelling, keep refusing what "
     "cannot be represented, and add a case for the distinction: a loosened check that pads odd widths yields "
     "units that compile, run, and disagree with the oracle. Sizes are friendly (97 tiny, 117 small, 46 "
     "medium, 2 large), so proof is cheap. RESIDUAL: the 48 non-partial units are the real odd-width problem "
     "and need their own census. Also still unqueued, from the same check of the snapshot against FAMILIES: "
     "`goto` 413 and `unresolved_register_or_overlay` 395 (median 226 and 146 bytes, all todo). `thunk` 313 "
     "is NOT a blind spot - all 313 are status `thunk` with median size 5 bytes and belong to the table "
     "route, which is why no lifter family claims them. (Checked by import, 13 assertions; one of them failed "
     "first on `0xFFFFFF00u` because the sentence-glue regex did not exclude hex literals - the assertion was "
     "the defect, not this text. An earlier draft of this entry DID ship broken: interleaving comment lines "
     "with string continuations silently dropped every comment from the value, so the action began mid-sentence "
     "at `eax = ...` and contained the orphan fragment `one = 82%, 48 do not`. Verify queue text by reading the "
     "LOADED string, never the source, and read its first and last 100 characters: presence checks pass on "
     "garbage, and `loopy next` hands this text to a worker verbatim.)"),
    ("goto",
     "Added 2026-11-10 after finding that lift.py's classify() STOPPED refusing gotos (Phase B, 2026-11-06: "
     "'refusing these cost 1,451 provable functions ... the body is emitted inside the COW_LIFTED exempt "
     "region') while ghidra_c's leftover table still carried `(r\"\\bgoto\\b\", \"goto\")` and enforced it "
     "perfectly - 0 of 10,548 shipped files contain a goto. A documented decision never reached the code that "
     "actually decided, and 413 units sat on it. The rule is not simply wrong though: a dangling goto is "
     "broken C, so the sound condition is 'every goto target has a label in this body', not 'goto allowed'. "
     "Implemented behind COW_LIFT_ALLOW_GOTO with exactly that condition. PRICED: 42 of the 413 release. THE "
     "OTHER 371 ARE THE FINDING, not a shortfall - with goto allowed they refuse on `label_<hex>`, which is "
     "_symbols() (ghidra_c.py:1511) refusing LAB_<hex> outright: Ghidra's labels are never converted to C "
     "labels at all, so a goto has nothing to jump to. That is the 'a reason that disappears can simply have "
     "moved downstream' trap, met again - the snapshot showed 0 units booking a label_ reason precisely "
     "because every one of them was hidden behind its goto refusal, so counting the published reasons "
     "understated the label blocker by 371. THE REAL TARGET IS THEREFORE LABEL CONVERSION, not the goto "
     "rule: rename LAB_<hex>: definitions and goto LAB_<hex> references consistently to a C label, and this "
     "family (up to ~413) opens. Two cautions for whoever does it: keep `caseLAB_` refusing until the switch "
     "shape is read (it interacts with Ghidra's recovered jump tables, and a mis-renamed case label is a "
     "silent fallthrough), and note that leftover_LAB still refuses any surviving LAB_ token, which is the "
     "check that catches a partial rename. DONE THE SAME DAY, behind COW_LIFT_LAB_LABELS. The two rules are "
     "ONE feature and pricing them separately was the error: lab alone emits 0, goto alone 42, TOGETHER 309 "
     "emitted / 280 surviving the syntax gate. A conjunctive pair measured independently understated the "
     "prize 6.7x - a renamed label whose goto is still refused is no use, and an allowed goto with nowhere to "
     "jump is no use either. Two knobs gating two halves of one mechanism must be priced as the combination. "
     "VERIFIED on the 280 rather than assumed: all 280 contain a goto, 0 retain any LAB_ token (leftover_LAB "
     "is the partial-rename net), and 0 contain a goto whose target label is missing from the same body. THE "
     "BUG THE CONTRACT CASES CAUGHT, which is the whole argument for writing them: the first version guarded "
     "`caseLAB_` by testing whether the preceding word was `case`. SYM_RE's alternation matches `caseLAB_` at "
     "the `c`, so kind arrives as \"caseLAB_\" while the preceding text is `case 3: ` - ending in a colon - so "
     "the guard never fired and the rewriter silently turned a case label into `case 3: L_10001fe5:`. That is "
     "not a compile error, it is a fallthrough into the wrong case. The population sweep had reported `0 files "
     "contain caseLAB_` and looked CLEAN *because the bug had renamed them*: a check cannot tell 'refused' "
     "from 'quietly rewritten' unless it also asserts the rewritten form is absent. Fixed by testing the kind "
     "group, with the preceding word kept as a net, and a case pinning it - 237/237. caseLAB_ still refuses, "
     "via `case_label_<hex>`, until the switch/jump-table shape is read. One more harness trap worth naming "
     "because it is easy to repeat: assigning an env var the STRING \"0\" leaves it PRESENT and "
     "`os.environ.get()` returns the truthy \"0\", so an A/B built that way ran every arm with both knobs on - "
     "unset means remove the variable. STATUS: 280 released, none through lift_proof yet. Released, not "
     "proven."),
    ("unresolved_register_or_overlay",
     "Added 2026-11-10: 395 refusals with no queue entry, so the loop never saw them. Fires on "
     "lift.py:1233 when Ghidra's C still contains `unaff_`, `_Overlay` or `__x86.` - the decompiler saying "
     "out loud that it could not bind a register. TOKEN CENSUS over all 395 (lift_report.py --reason "
     "unresolved_register_or_overlay): unaff_EBP 211, unaff_ESI 117, unaff_EDI 72, unaff_EBX 68, "
     "unaff_retaddr 61, in_EAX 14, in_ST 14, in_FPUS 4, odds below that. WHAT THAT SAYS: this is not exotic "
     "runtime, it is the CALLEE-SAVED SET AND THE FRAME POINTER - exactly the registers the adapter does "
     "track, because the generated body models their push/pop. Read by eye, 0x10328185 (size 10): "
     "`int unaff_EBP; FUN_10311bf0(*(undefined4 *)(unaff_EBP + -0x54));` where the guest plainly used EBP and "
     "`g->ebp` is available. HYPOTHESIS, NOT A PRICED FIGURE: map unaff_<REG> to g-><REG> only when the "
     "generated body NEVER writes that register before the use - the same `written_ever` gate gen_model "
     "already computes, and the only version of this that has ever been sound. DO NOT reach for a bare "
     "g->reg fallback: the argcount_mismatch entry records three such fallbacks measured at 10%, 8.6% and "
     "empty, all three justified by reasoning that was locally correct and globally wrong. THREE THINGS THIS "
     "ENTRY DOES NOT CLAIM. (1) No release count: the hypothesis has not been priced, and pricing must mean "
     "scratch A/B plus lift_proof, not a token tally - 211 unaff_EBP tokens are not 211 units. (2) "
     "unaff_retaddr (61) is a different animal - the return address is [esp+..], not a register, and mapping "
     "it to g->ebp would be the same off-by-one-frame bug the frame work keeps hitting. (3) in_ST/in_FPUS (18) "
     "belong to x87_not_modelled, not here. PREREQUISITE NOW FIXED, and it was blocking the census: "
     "lift_report.py --reason raised AttributeError because subpattern() referenced lift.FUN_CALL_RE, "
     "lift.THUNK_CALL_RE, lift.CALLED_RE (gone from lift.py) and lift.C_ALLOWLIST (moved to ghidra_c). A "
     "diagnostic that crashes produces no number at all, and the absence reads as 'bucket never sized'. "
     "Report-only regexes now live in lift_report.py, marked as such so they cannot be mistaken for shipping "
     "logic, and C_ALLOWLIST is imported rather than getattr'd with a fallback - a defaulted-away allowlist "
     "would count printf and malloc as unresolved guest symbols, which is a confident wrong number. "
     "PRICED THE SAME DAY, replacing the caution above with a number: implemented behind COW_LIFT_UNAFF_REG "
     "(classify admits only when EVERY unaff_/in_ token is one of the eight GPRs; emit binds to g-><reg> only "
     "if gen_model says the generated body never writes that register, and books the original refusal if it "
     "does). Scratch A/B over all 395: knob OFF 395 candidates / 0 emitted; knob ON 395 candidates / "
     "**89 released**. The other 306 are the honest remainder - non-GPR tokens, or the body writes the "
     "register so Ghidra's 'unaffected' claim is contradicted by the authority. RELEASED IS NOT PROVEN: these "
     "89 have never been through lift_proof, and the family that taught that lesson did it at 32%, so budget "
     "for roughly a third until the run says otherwise. Two findings from building it, both kept because they "
     "generalise. (1) The declaration in Ghidra's C is `int unaff_EBP;` - token `unaff_EBP`, not `EBP`. The "
     "first version matched the bare register name, deleted nothing, and the use-substitution then rewrote the "
     "DECLARATION's identifier, shipping `int g->ebp;`. The syntax gate rejected all 95, which is the gate "
     "earning its keep: a wrong substitution here is a compile error, not a wrong answer. (2) The new selftest "
     "counter was nearly named `ubad`, which a section further down already rebinds to 0 - so every failure "
     "in the new section would have been discarded while the suite printed 'N/N cases pass'. Renamed to "
     "una_bad and registered in the sum; 235/235, and MUTATION-TESTED: dropping the never-written check turns "
     "exactly the contradicted-authority case red. That case is the whole soundness argument, so an "
     "unconditional binding would have looked green."),
    ("argcount_mismatch", "lift.py, at a CALL SITE: the body pushed npush words while Ghidra passed "
                          "len(args). Systematic, not per-address (pushes > params in ~2,000 of 2,134). The "
                          "refusal fires only while the pushed words are GUESSED, and the reason for that "
                          "is now MEASURED - census of 200 refused units (tools/cow/ghidra/lift_pushdiag.py, "
                          "tags set by gen_model._push_values): unnameable 837, no-pushed-record 189, "
                          "pending-vs-pushed 62, stale 4. The offenders are PLAIN REGISTERS: _operand_expr "
                          "does `return env.get(text)`, so a register written by an instruction _value_expr "
                          "cannot name has no env key and the WHOLE unit is refused. NEXT STEP: census the "
                          "mnemonics _value_expr returns None for and extend its coverage, so env gains a "
                          "key - that is the only sound way in. DO NOT fall back to g-><reg> for an unnamed "
                          "register: tried 2026-11-07, released 207 units, 20/207 = 10% passed (eax/edx "
                          "mismatches, hangs, timeouts, out-of-region writes). The lifted C keeps register "
                          "values in Ghidra LOCALS, so g->reg at the call is the entry value, not the "
                          "computed one. Also do not invent an arg-count rule. ""THREE `g->reg` FALLBACKS HAVE NOW BEEN MEASURED AND ALL THREE ARE DEAD - do not build a fourth without beating these numbers. (a) any plain register: 207 released, 10% pass. (b) only a register the body NEVER writes ANYWHERE: sound, and empty - 837 unnameable bails became 833. (c) the local condition, `R not written at any address below the call`, which is the one that looked exactly right because it is the actual safety argument (it counts post-call writes as harmless, unlike (b), and excludes pre-push writes, unlike (a)): measured 2026-11-10 through the PRODUCTION gate with a tripwired census - it releases 57 units and the PROOF passes 5 of 58 = 8.6%, dominated by memory (34) and callee-saved register (16). Same signature as (a), reached by a predicate that looked sound, which is the lesson: a locally-provable claim about a register is not the same as a claim about what the guest PUSHED. (c) also silently rewrote 37 ALREADY-PROVEN files until `call` was counted as a write to eax/ecx/edx - `_writes_reg` excludes calls, a callee writes those, and `call_reg_values` already models it, so a predicate that disagrees with it is simply wrong. That catch came from one check worth keeping forever: **count the files a purely additive edit changed, and demand it be zero.** The classifier and its tripwire live in tools/cow/ghidra/lift_pushmnem_census.py (pinned on 0x100013c0, where `push ebx` before `call 0x10014c10` is clean and `push esi` is not); it prices any fourth candidate in one run. Fresh census of the 13,186 unnameable bails on 2,884 units: 5.7% local-clean, 91.3% written before the call, 3.0% not a register. So the family is not one dict lookup away - the registers really are computed, and naming them needs the value model, which means _value_expr coverage over mnemonics, not a fallback. THE CENSUS THAT ASKED FOR, RUN 2026-11-10 (build/probe_bailmnem.py - promote it into lift_pushmnem_census.py before it is needed again): all 12,787 unnameable bails across 2,660 units, each attributed to its CHAIN ROOT rather than its surface mnemonic. That distinction was the whole job - `mov R,S` is supported, so the first pass of this probe blamed mov for 52.9% of bails, which was an artifact of the question it asked. Roots: mov on [esp+disp] 2,013 / lea on [esp+disp] 1,547 / deref base=esi 1,228 + 455 / mov global [imm] 398 / [ebp+disp] 391 + 101 / never-written 1,465. WHAT A FIX BUYS is counted as units whose EVERY bail shares one root, because bail counts do not release units, whole profiles do: frame [esp+disp] 399 + 154, [ebp+disp] 34 + 3, deref base=esi 144 + 62, global [imm] 45. THE FINDING: the frame-offset binding, not the pointer chase, is the biggest single lever in the largest family - ~590 units on that root alone - and it is the same mechanism the memory group's frame escape needs (19 there) and the operand_stack_frame refusals (431). The pointer-deref half has to name the base first, which is the wall the deferred-load emitter already hit at zero. VALIDATED on a unit read by eye before the number was written down: 0x10001d21 is `mov ebx, dword ptr [esp+8]`, the generated body says `uint32_t A = (uint32_t)(esp + 0x8u); ebx = (uint32_t)(rd32(A));`, and `push ebx` at 0x10001d27 feeds the bail at the call on 0x10001d2a. NOT YET PRICED, and do not price it by reasoning: 399/154 assume a frame read is emittable, i.e. that g->esp still equals the guest esp at that instruction - which is what folding pushes into a bridge argument array destroys. 0x100940b0 is that case in the flesh: four real pushes became `2u, (const CowU32[]){0u, g->esp}`, so the words never reached guest memory and ecx was handed the wrong esp. Price it as (a)/(b)/(c) were priced - production gate, tripwire on 0x100013c0, and count the files a purely additive edit changed, demanding zero. THE ~590 FIGURE ABOVE IS WRONG BY 26x, CORRECTED THE SAME HOUR - read this before building the emitter: `lift_bailroots.py --price-frame` applies the two gates the emitter actually has to respect, and the release count falls in stages - chain root 590, +straight-line esp 180, +the load wall 23. WHAT SURVIVES: 23 units for a lea-only emitter, because `lea R,[esp+d]` merely FORMS an address and a frozen `sp0 + (d+d)` names it soundly, while `mov R,[esp+d]` READS guest memory and 157 more units die on that. The load rule is not a small add-on - gen_model's push walk passes no allow_load on purpose, and the version that did released 12 sites and ZERO units, then was found unsound besides (an address expression holding `g->reg` is a LIVE read, not the frozen value). So the emitter is a 23-unit job, not a 590-unit one, and it is worth doing only alongside the frame-pointer form (118 units whose first blocker is `[ebp+N]`, same mechanism with a frozen `fp0`) or not at all. THE REAL PRIZE IS ELSEWHERE: 2,074 refused units are blocked by a pointer chase, one load deep, and the reason nobody can name it is recorded a few sentences above as `bare_deref_width_unknown`. That family is the gate on the largest group of refusals in the repo, and the width is knowable in principle - the generated body always spells `dword ptr` / `byte ptr` on the very instruction being named. Price THAT before falling in love with another emitter. THE AUTHORITATIVE ATTRIBUTION, same day - stop re-deriving the environment in census scripts and read the walk's own label instead. gen_model now carries `push_values_cause` on the site (one reporting-only line in the caller, written only when the bail is `unnameable:`, read by nobody but the census; selftest 228/228 and an unrestricted scratch run reproduced 7,751 files byte-identical while pruning exactly its 1 planted decoy), and `lift_pushwhy.py` groups the population by it. UNITS WHOSE SOLE CAUSE IS ONE THING: written-by-unnameable-instruction:mov 383, `named` 211, never-written 126, merge-jump-target 73, :lea 71, ? 31, clobbered-by-intervening-call 29, :add 12. READ THE 211 BEFORE SPENDING ANYTHING ON IT: a cause of `named` is not a contradiction, it is an as-of mismatch - why_unnamed is sampled at the CALL while _push_values names the word from the env snapshot taken at the PUSH, so those units pushed a value that only became nameable afterwards. Making that label honest needs the cause stored in `pending` per push, not per call, and until then the 211 is a measurement artifact wearing a prize's clothes. Per-site bail counts for reference: unnameable 13,186, no-pushed-record 3,674, pending-vs-pushed 787, stale 65 - the queue's 13,186 cross-checks exactly, which is the first sign this census was pointed at the right thing. And a hazard worth knowing before you try to re-lift a sample: `lift.py --apply --entries <sample>` does not lift a sample, it PRUNES the population to it - measured at `pruned_stale 7751`, the entire lifted tree deleted, recovered only because it was committed. This is the second time that flag combination has done damage (see the 203,000-line lifted_addresses.h note at lift.py:1306). It now refuses outright when any of --entries/--limit/--min-size/--max-size differs from its default, tested both ways: restricted keeps a planted decoy, unrestricted still prunes it. THE NEXT FIX IS ALREADY SPECIFIED, AND IT HAS A TRAP IN IT - read this before writing the obvious line. `lift_pushwhy.py --price-globals` prices a load rule narrowed to DIRECT GLOBALS (literal address, no base register, no chase, width stated by the authority, nothing writing that global between the push and the call): **18 units**, list at build/cow_lift/global_load_releasable.txt, each one eyeballed against the generated body - e.g. 0x1001ab60 bails on `ecx` whose writer the authority spells `mov ecx, dword ptr [0x1047d128]` and compiles to `uint32_t A = (uint32_t)(0x1047D128u + RD); ecx = rd32(A);`. THE TRAP: `_operand_expr` already names that shape when `allow_load=True` is passed - `dwordptr[0x1047d128]` comes back as `rd32((uint32_t)(0x1047d128u))` - so the implementation looks like one word in the push walk at the `_value_expr` call. It is not. That string carries a BARE GUEST ADDRESS WITH NO `+ RD`, and the harness maps the image at the preferred base so RD is 0 in every cowdiff run: those 18 units would PASS, be booked proven, and read the wrong address the moment the client is relocated. This is the same structural blind spot that made COW_LIFT_REBASE_IMG measure zero units while being necessary, and it is why the rule must route the address through `_img_macro`/`COW_IMG(macro)` exactly as `IMM_PLUS_RD_RE.sub(_rd, ...)` does at gen_model.py:1132-1137, and carry contract cases in lift_selftest.py - cowdiff CANNOT arbitrate an RD question, so a pass rate is not evidence here. Also measured, so the shape of the remaining family is known and nobody re-derives it: within the `written-by-unnameable-instruction:mov` cause the sources split into frame [esp/ebp+disp] 1,517 bails / 479 units, deref [esi+..] 966/186, plain register copies (chain, not load) 341+159, global [imm] 288/63, deref [eax/edi/edx/ecx/ebx+..] 314/281/242/161/101, movsx 161/35, no-base 97/13 - `units` there means all the unit's mov-caused bails share the shape, NOT that the unit has no other obstacle, which is the distinction that turned a 479 into a 23 once the gates were applied. WHERE THE MACRO HAS TO BE REGISTERED, traced so the next session does not spend an hour finding it: there is exactly one correct registrar, `Ctx.img_literal` (lift.py:1185) - it returns `COW_IMG(COW_ADDR_LIFT_xxxx)` AND inserts into `ctx.layout`, and `layout/lifted_addresses.h` is written from `ctx.layout` alone (lift.py:1553), so an expression that merely SPELLS the macro name compiles only by luck of someone else having registered that address, and otherwise fails to link. `COW_IMG(x)` already IS `x + RD` (gen_model.py:450), so do not add a second `+ RD` to it. The awkward part is ordering: the push walk runs inside `call_reg_values`, called from `model_generated` (gen_model.py:383) with a throwaway `{}` - there is no ctx yet at that point, which is why `expressible_write`'s existing global-load form (`rd32(_img_macro(...))`, gen_model.py:1255) can do it and the push walk cannot copy it. So either thread a dict through and merge it into ctx.layout at adapter time, or post-process the emitted `push_values` expressions in lift.py where ctx exists and call `ctx.img_literal` there. Second best is fine; inventing a third macro mechanism is not - and note there is NO pass that auto-rebases bare image hex in emitted expressions, which the 0x10004d80 story already proved when a bare `0x1034f8d4` reached the file and had to be fixed behind COW_LIFT_REBASE_IMG. KILLED 2026-11-10 AFTER BEING BUILT AND MEASURED - the rule above was implemented behind COW_LIFT_GLOBAL_LOAD, proved inert with the knob off (all 7,751 files plus the 3 layout files content-identical after CRLF normalisation), then run with it on: it released 5 units and all 5 passed cowdiff, but 307 previously-proven files changed and 125 of them now FAIL. Net -120. Reverted; the implementation is not in the tree. WHY, and this part generalises: the emission decision `use_measured` at lift.py requires a COMPLETE measured list, so a unit that previously bailed on a global-load word and fell back to Ghidra's argument list - and was PROVEN that way - flips onto the measured list the moment that word becomes nameable. Naming one more word therefore replaced a proven argument list with a wrong one 125 times. The measured push list is not uniformly more trustworthy than the decompiler's, so ANY future widening of push naming must be gated to un-refuse only: never let it flip `use_measured` on a unit that previously fell back, or 5 new units cost 125 old ones. THREE CORRECTIONS FROM THE SAME RUN. (1) The screen above priced this at 18 and the emitter released 5, because the screen tested the assembly text while the emitter requires GLOB_READ_RE's canonical STATEMENT. A screen that does not use the emitter's exact predicate overstates - the same class of error that turned a headline 479 into a real 23, one layer up. (2) What I wrote an hour ago about there being no auto-rebase pass is WRONG for this shape: lift.py `image_loads(expr, ctx)` already rewrites `rd32((uint32_t)(0x...u))` into `rd32(COW_IMG(COW_ADDR_LIFT_xxxx))` via `ctx.img_literal`, registering the macro and leaving non-image addresses alone, and it is the single rebase arbiter. So the correct design was always to emit the NUMBER form from gen_model and let image_loads do the rest, with no layout_macros threading - which is also why the registrar note above should be read as pointing at image_loads, not at a new mechanism. (3) An earlier commit today claimed a scratch re-lift was `byte-identical` when nothing had been compared. This checkout is CRLF in the worktree and LF in the blobs, so a raw byte compare declares all 7,751 files different and only a CRLF-normalised compare means anything; demand-zero is not a real check until you have watched it fail for a reason that is not line endings. The 5 released units are recorded in cow/attempts for their entries, and lift_pushwhy --price-globals remains to re-price any variant that respects the un-refuse-only rule."),
    ("cleanup_mismatch", "gen_model: the `add esp,N` / `ret N` attribution disagrees with the body."),
    ("calls_unknown_symbol", "THE QUEUE USED TO SAY: name the external in addresses.h and bridge it. THAT WAS WRONG, AND FOLLOWING IT WOULD HAVE SHIPPED A SILENT DIVERGENCE. None of the 151 names appears anywhere in generated/all (checked: EnterCriticalSection, CloseHandle, operator_new, _malloc and the rest, all ZERO occurrences). Side B does not call these functions, so making side A call them by name would diverge from the oracle that decides whether a lift is real. MEASURED and priced by tools/cow/ghidra/lift_iat_route_census.py, tripwired on 0x1000ff70, whose generated body performs call dword ptr [0x1032918c] - a slot that resolves to EnterCriticalSection ONLY from its own hint/name record, because the PE import directory does not index it. A resolver that reads the directory alone will conclude not-an-import and stop, so read the slot contents. THE FAMILY IS THREE PROBLEMS, and the split is clean at 100 percent versus 0 percent. (1) WIN32 IMPORTS, all slot-bearing: EnterCriticalSection 48/48, CloseHandle 16/16, ReleaseMutex 12/12, timeGetTime 9/9, about 85 units. The guest goes through an IAT slot and side B emits rt_call_indirect(g, rd32(COW_IMG(slot))). The lift must reproduce the INDIRECT CALL, not the symbol. A slot is matchable when iat_slot resolves it to the very name Ghidra printed - the name appears on BOTH sides, which is the cross-check discipline _target_expr already uses against target_desc, not a positional guess - and the counts on the two sides must agree or the whole name is refused. (2) CRT FUNCTIONS STATICALLY LINKED INTO THE CLIENT, zero slot-bearing: operator_new 205/0, _strncpy 61/0, _malloc 21/0, _strncmp 17/0, _strlen 11/0, __ftol 10/0, fcos 9/0, rsqrtss 12/0, about 350 units. These are NOT imports. Read 0x10001bb0: the guest does call 0x10311bfb, side B emits f_10311bfb(g), and Ghidra printed operator_new(0xdc4) because it RECOGNISED a guest function and renamed it. What is wanted is a bridge to that guest address, which is the leftover_unbridged_call machinery keyed by a name instead of by FUN_x. The route that needs no statement-level provenance: such a name denotes ONE guest address image-wide, so learn name-to-target from the sites where it is unambiguous (a unit with a single call, or a name unique inside the unit), then cross-check every occurrence against that target and REFUSE THE WHOLE NAME if any site disagrees. A name mapping to two addresses is not a function, it is Ghidra guessing, and guessing here means calling something other than what the guest called. (3) GAME FUNCTIONS GHIDRA NAMED, zero slot-bearing: FastExitMediaState 57/0. Same mechanism as (2), and the name is evidence the disassembly carries real symbols for these - check whether one is already in layout/addresses.h before deriving anything. 510 of 791 units have no call/jmp dword ptr [slot] at all, which is what killed the single-theory reading of this family. THE HAZARD THAT NEARLY COST AN HOUR, recorded because it is the sixth time this loop has met it: the census matched dwordptr[ against the instruction TEXT field, which keeps the assembler spacing (call dword ptr [0x...]), so it matched NOTHING and confidently reported 0 of 791 have a slot, build nothing here. The pinned unit had been read by eye minutes earlier and visibly contained that call, so the tripwire caught it. Search TEXT with whitespace and the normalised fields without it, and never print a number the tripwire has not licensed."),
    ("no_ret_in_body", "SHIPPED 2026-11-07 (gen_model.tail_jump_of + Bridges.note_tail + "
                       "TAIL_ADAPTER_TMPL): a body with no `ret` is now lifted when it ends in exactly one "
                       "static `jmp` whose own translated statement is `REGS_STORE; f_<hex>(g); return;` - "
                       "the guest's tail call. 1,601 refused -> 349. The three things that made it "
                       "dangerous, all handled: the adapter gets NO epilogue (the target's `ret` is the one "
                       "that pops the return-address slot - rt_return does `g->esp += 4 + argbytes`, so a "
                       "second one moves esp two frames); the tail bridge pushes no return address and "
                       "cleans nothing up; and a register the target reads is passed only as `g->reg` when "
                       "the body NEVER writes it (gen_model.registers_never_written) or from the prologue's "
                       "maintained value - never a guess, which is the argcount_mismatch failure at 10%. "
                       "MEASURED: 789 new units, 557 proved (70.6%), tree now 4,889 of 6,760. Locked by 11 "
                       "cases in lift_selftest.py (TAILJUMP + UNWRITTEN). "
                       "TWO LESSONS RECORDED HERE, because both were caught by measurement and not by "
                       "thinking: (1) my first note_tail() refused a tail unit whenever its target was also "
                       "called normally anywhere in the image, on the theory that two bridges would share a "
                       "name - they do not (`cow_bridge_tail_X` vs `cow_bridge_X`), and since almost every "
                       "function IS called normally, that guard was quietly eating most of the family; a "
                       "one-entry preview emitted 0x10199770 while the batch refused it as "
                       "leftover_unbridged_call, and only that discrepancy found the bug. (2) The remaining "
                       "failures are dominated by `hang` (118 of them), a NEW top-of-list group this family "
                       "introduced - a tail unit whose target parks on a fuzzed register. That is the next "
                       "pattern to census (tools/cow/lift_hang.py), not a reason to doubt the 557. Still "
                       "refused, deliberately: indirect tail jumps (27/250 in the census), two tail jumps "
                       "(two exits), and bodies where Ghidra dropped the tail call (31, "
                       "tail_jump_not_in_ghidra)."),
    ("purge_ambiguous", "gen_model: which words the callee pops cannot be decided from the body."),
    ("unbound_register", "gen_model: a register is read that the lift cannot materialise."),
    ("memory", "MEASURED - this is NOT one bug, and the label is a symptom. Current census (824 rows, "
                                "lift_memshapes.py): store=missing 384 / value 340 / extra 134; region stack 683 of 824; "
                                "513 deterministic at state 0. THE SPLIT THAT MAKES IT PLANNABLE, measured 2026-11-09. "
                                "cowdiff now prints `esp=%08x/%08x` at the first mismatch (ADDED 2026-11-09, reporting "
                                "only - it decides nothing about PASS) and tools/cow/ghidra/lift_frameshift.py reads it "
                                "back out of the proof record's `raw` field. Of 824 memory rows: 596 (72%) have BOTH "
                                "SIDES AT THE SAME ESP - genuine wrong content, the lifter's problem - and 228 (28%) are "
                                "a frame SHIFT, every one a small multiple of 4 (+4 x85, +8 x28, +12 x21, +16 x21...), "
                                "i.e. 'N words too many on the stack', which belongs to the push/cleanup/argcount "
                                "families and must NOT be fixed here. Start with the biggest deterministic shape, "
                                "value|stack|state0|esp-equal (196), and read units with lift_bodypeek.py - run "
                                "lift_frameshift.py first for the address lists. A CLAIM OF MINE THAT MEASUREMENT KILLED, "
                                "kept so nobody re-buys it: because 625 of 858 rows raise the SAME exception code on both "
                                "sides, I wrote that the family was 'mostly comparing corpses at different depths' and "
                                "that the first job was to expose a fault PC. Both halves were wrong. There IS no guest "
                                "PC to expose - `Guest` has no eip (the guest PC is not data in this model) and only side "
                                "A is coverage-instrumented, so 'same fault site?' is not askable; and measuring esp "
                                "instead showed the noise share is 28%, not 73%. The unit the story was built on "
                                "(0x10004d80) is esp-EQUAL - a real bug - and the 12-byte drift quoted for it had come "
                                "from a different unit's per-state line. Two rules: a shared crash is not a reason to "
                                "distrust a comparison, and a narrative built on one unit read in a hurry outruns the "
                                "evidence. Measure the discriminator before writing the conclusion. THINGS THAT ARE STILL "
                                "TRUE FROM THE EARLIER CENSUS, no need to re-derive: the tempting single explanation - a "
                                "frame-relative store Ghidra deleted when it turned the frame into locals (`mov [esp+4], "
                                "eax` never happening) - is ONLY 89 of 544 stack rows (16%), see lift_stackstores.py "
                                "pinned by lift_stackstores_check.py; and store=value rows where both sides wrote the "
                                "slot with different values are argument-push content, i.e. the parked "
                                "argcount/push_values family: a fix there moves this group, a new hack here does not. A "
                                "CHECKER-INTEGRITY WATCH, not yet explained: re-proving these rows after rebuilding the "
                                "harness flipped 17 FAIL -> PASS. The edit was reporting-only, so the likely reading is "
                                "that earlier verdicts came from a binary older than the sources (a wedged build had just "
                                "been cleaned up). That direction is benign. But if a rebuild ever flips PASS -> FAIL, "
                                "that is a false-green emergency, not a curiosity: the same staleness that hid these 17 "
                                "could hide a wrong unit that should have failed. TWO WARNINGS FROM THE WORK ITSELF: (1) "
                                "the first frame-store detector matched NOTHING, because the generated body computes the "
                                "address into a temp (`uint32_t A = (uint32_t)(esp + 4); wr32(A, v);`) instead of "
                                "spelling `wr32((uint32_t)(esp...` - and it confidently reported '0 of 544, so this is "
                                "not the frame-store bug' while looking straight at it. A census regex that silently "
                                "matches nothing delivers a confident negative: validate a detector against a unit you "
                                "have read by eye before believing its numbers. (2) A group label hides at least three "
                                "distinct bugs; only reading units separates them. (3) A CLAIM I MADE AND MEASUREMENT "
                                "KILLED, 2026-11-09, so nobody re-buys it including me: I read 0x10004d80 (row "
                                "`103d3cc0/00993760`, esp-equal), saw the lift pass a bare `0x1034f8d4` where the "
                                "generated body pushes `(0x1034F8D4u + RD)`, and concluded the group held an un-rebased "
                                "image-address bug. The fix shipped behind COW_LIFT_REBASE_IMG=1 and PROVED NOTHING: 140 "
                                "lifted files changed, 0 units newly passed, 0 flipped to fail. The reason is the "
                                "finding, and it is bigger than one rule - the portable proof harness maps the image at the "
                                "PREFERRED base (runtime/portable/pe.c calls rt_set_image(rt_image_base), commented 'at the "
                                "preferred base: RD = 0'), so rt_reloc_delta is 0 in EVERY cowdiff run and COW_IMG(x) == x "
                                "there. "
                                "Proof cannot see address rebasing AT ALL: not a wrong rebase, not a missing one, not "
                                "even a double `COW_IMG(COW_IMG(x))`. So the proven population has a correctness "
                                "dimension the judge is structurally blind to, and any rule whose only effect is on "
                                "relocated addresses must be justified by matching the recompiler's translation plus "
                                "contract cases in lift_selftest.py (the REBASE group), not by a pass rate. The rebasing "
                                "is right and stays behind its knob - it matters to the real client, where the image does "
                                "move; what was wrong was my reading of the row. The exemplar's mismatch is STILL "
                                "UNEXPLAINED, and note the trap that made it look explained: two spellings differing in "
                                "the same unit is a hypothesis, not a cause. Only the A/B run was evidence, and it said "
                                "no. (4) ONE mechanism a second read unit DID yield, and it is not the group's: a Ghidra "
                                "frame local becomes a HOST array (`CowU8 auStack_10[16];`) whose ADDRESS is handed to a "
                                "callee, where the guest had done `sub esp,0x10; lea ecx,[esp+8]` and pushed ecx. "
                                "Measured by tools/cow/ghidra/lift_frame_escape.py, which REFUSES to print a count if the "
                                "unit this was read from stops being visible to it (its first version matched nothing and "
                                "reported 0 across 196 units - fifth meeting of that failure, and the tripwire is what "
                                "makes it the last): 15 `memory` rows carry such an escape, AND SO DO 6 UNITS THE RECORD "
                                "CALLS PROVEN. Of the 7 proven units that declare a frame array at all, 6 leak the "
                                "address, so when the frame becomes an array the escape is the rule, not the exception. "
                                "Proof cannot see this for the same structural reason as the rebase class - the "
                                "differential compares GUEST memory, and a host pointer a callee never writes through in "
                                "the exercised states differs nowhere. THE FIX IS SHARED WITH THE STRING FAMILY: bind "
                                "such a local to the guest stack address the adapter already reserves (`g->esp -= 0x10u; "
                                "/* locals */`), which is exactly the per-frame-offset work parked as "
                                "`operand_stack_frame` (431 refusals) - one fix, two families. Refusing instead was "
                                "rejected on measurement, not instinct: it would pull 6 proven units out of the "
                                "population, so it needs the fix in hand rather than a reflex. ESCAPE PRICED AT POPULATION SCALE 2026-11-10 (lift_frame_escape.py --all-failing then --proven, tripwire passed both times): of 2,320 failing units, 32 declare a host frame array and 19 leak its address (18 pushed-argument, 1 access-address); of 5,431 PROVEN units, 7 declare and 6 leak. Read that before spending a session on it: this is NOT a throughput play. 19 units is 0.25% of the population and 2% of this group, so the prize is the 6 units that pass proof today while handing a callee a HOST pointer where the guest had a stack address - invisible to the differential for the standing reason (the exercised states never write through it) and live corruption in the real client. Price it as a correctness fix, not as units. The bigger half of this group is still value|stack|state0|esp-equal (196), whose mechanism nobody has identified yet. CORRECTION TO THE SENTENCE ABOVE, same day, because it is misleading and the next reader will be me: 19 units is the price of the frame ESCAPE only, which is the visible tip. The mechanism underneath it - binding frame-relative accesses to the guest stack the adapter reserves - was censused later the same day across argcount_mismatch and looked worth ~590 units on its own root alone (mov [esp+disp] 399, lea [esp+disp] 154, the ebp pair 37) - SUPERSEDED WITHIN THE HOUR, read argcount_mismatch before acting on this figure: 590 was a chain-root count, and the release number falls as each gate the emitter must actually respect is applied - 180 with gen_model's straight-line esp requirement, and **23** once the load wall is honoured, because `lea R,[esp+d]` only forms an address while `mov R,[esp+d]` reads guest memory and 157 units die on that. The 431 operand_stack_frame refusals and these 19 escapes are unaffected by the correction. So: do not read the 19 as the size of the job or as a reason to skip it. Also censused, from the same 196-unit shape: store=value splits by what the two sides wrote into the slot, and the esp-equal classes where both sides hold stack pointers a word apart (22) or ours is a number where theirs is a stack pointer (29+15) are push-folding artifacts, which is the queue saying again that this group's content bugs are paid for in the push/frame family and not here. THE ESCAPE FIX IS A THROUGHPUT PLAY AFTER ALL - this entry got it wrong twice, and the second error was worse than the first. It is not refused by `memory` rows: ghidra_c.py:1679-1696 refuses it as its OWN reason whenever Ghidra's C takes an address, `&local_N` / `&…Stack_…` -> `local_address_escapes` (141 units) and `&param_N` -> `param_address_escapes` (116 units) = **257 refused units**, both with a contract case in lift_selftest. Neither reason has a queue entry, which is how a 257-unit family stayed invisible to `loopy next`. So the sizing this entry carries is a set of partial views of one mechanism: 19 (escapes found inside the failing group) + 257 (escapes refused at the rewriter) + the 6 proven units the differential cannot see at all, and the same binding also gates `string_op_not_modelled_operand_stack_frame` at 431 - call it ~690 refused units plus a correctness hole, which makes it the second largest target in the repo behind partial_register_write, not the 19-unit curiosity this entry once called it. LESSON, stated because it recurred three ways today: a census of the FAILING group cannot size a REFUSAL family, and neither can a census of one refusal string when the same mechanism is refused under several. Count over the refusal snapshot by mechanism, not by the bucket you happened to be standing in. FIVE FAMILIES ONCE HAD NO QUEUE ENTRY (goto, unresolved_register_or_overlay, thunk, leftover_odd_width_type and the two escape reasons, about 1,640 refusals) and THAT SENTENCE WENT STALE WITHIN A DAY, which is why it is retired rather than repeated: the first three gained keys in b0e3a295, c41df38e and ab742cc6 and the remaining six gained them on 2026-11-10, so a session following the sentence would have re-triaged work that already has an action. Invisibility is now a CHECKED PROPERTY instead of something somebody remembers to write down - run tools/cow/loopy/queue_unqueued.py, which walks the refusal snapshot against FAMILIES using family_of's own first-prefix-match rule and exits non-zero when a family above the floor has no key (--selftest plants a blind spot and insists the tool call it out, so a clean zero means something). Read what it prints before deciding where the next pattern fix goes."),

    ("bare_deref_width_unknown",
     # Measured from the LIFTER'S OWN bail-out record (lift_bare_deref_diag.py --lifter). The tool's original
     # body-scan mode measured ITSELF - it claimed a 42/200 parsing gap and the fix it recommended released
     # exactly 0 units - so read only the --lifter view, and price on its PER-UNIT table, never its site
     # histogram: the refusal fires on a unit's worst site, so a 250-site class can free zero units, which is
     # precisely what the biggest class did here.
     # 1,183 -> 1,024 -> 403, in two changes on 2026-11-07, both real bugs rather than missing information:
     #   (1) DEREF_KEYWORDS. `void` is a KEYWORD, so the override that makes `return *(int *)(p+4)` a
     #       dereference also read every `void *pvStack_c;` declarator and every `(void *)0x0` cast as a
     #       dereference OF THE DECLARED NAME - a width that cannot exist, because a declarator star has no
     #       operand to type. Released 0 units on its own (those units are the CRT allocator wrappers and
     #       fail later), but the family could not be priced while it was lying about them.
     #   (2) THE BARE DEREF NOW READS A PRIMARY. Unary `*` binds tighter than EVERY binary operator, so
     #       `*p & 0x1f` is `(*p) & 0x1f` - the mask belongs to the value. `SIMPLE_EXPR` walked `name OP
     #       operand` for any operator and handed back `param_2 & 0x1f` as the ADDRESS. Had the width been
     #       found, the emitted read would have gone to the masked address: the wrong guest memory in a body
     #       that compiles. It never emitted because the over-long string then failed the bare-name lookup
     #       that supplies the width - the fourth guard-by-accident found in this one pass. Fixing the parse
     #       and adding `Rewriter.bare_width` (the element type of a sum is the element type of its pointer
     #       operand, so `*(piVar1 + 8)` takes its width from piVar1) took the family from 1,024 to 403 and
     #       the population from 5,150 to 5,229 proven (196 emitted past the gate, 79 passed: 40.3%).
     # WHAT IS LEFT, as of 2026-11-09, in two changes.
     #   (3) THE IMAGE GLOBAL (`*DAT_x`) IS SHIPPED, not pending. The width came from where the note below
     #       always said it should - the GENERATED body's own accessor at that absolute address
     #       (gen_model.guest_global_widths -> Rewriter.bare_width), with three refusals: an address read at
     #       more than one width, an accessor whose address is not a single literal, and any FLOAT access.
     #       403 -> 329 units, 10 more proven (5,267 -> 5,277). One unit that this turned into
     #       `rd32rd32(...)` is now refused structurally by leftover_problems' `doubled_accessor` instead of
     #       failing the chunk at LINK time. DO NOT rebuild this half.
     #   (4) THE FAMILY IS NOW ONE JOB: Ghidra's folded multi-star deref, `**(T **)EXPR` - a pointer read
     #       through a pointer, which _read_deref_operand walks away from because the operand after the first
     #       star is itself a star. Priced PROPERLY it is 234 of 400 sampled units, and it is the largest
     #       single un-parked model on the board. It was almost missed: the per-kind table said "1 unit",
     #       because a kind is a 40-character canon_shape SPELLING and this one job arrives as dozens of
     #       spellings that differ only in trailing text - and because the kind sets were joined with '+' and
     #       split on '+' again, while the spellings themselves contain '+'. lift_bare_deref_diag.py now
     #       prices on TRANSLATION JOBS (unit_jobs, tuple-keyed): `--lifter --freed-by "deref:2-star"`.
     #       Same lesson as the site-histogram mistake, one level deeper: a grouping that fragments a job
     #       prices it at nothing, and a wrong zero closes real work.
     # The model itself: `**(T **)EXPR` reads a pointer at EXPR and then an object of T's width through it, so
     # it is `rd32(rd32(EXPR))` with the outer width from _width_of(T) - refuse when T is unknown, refuse when
     # EXPR is not nameable, and NEVER default the outer width to a dword. Expect it to overlap
     # indirect_call_not_modelled, whose remaining wall is the same chained pointer.
     "ghidra_c: BOTH halves of this family that could be TRANSLATED now SHIP - the image-global width (+10 "
     "proven) and the folded multi-star deref `**(T **)EXPR` -> `rd32(rd32(EXPR))` with the object width from "
     "the cast (+24, family 329 -> 188). Read the rule before touching it: k stars are k reads, the first k-1 "
     "dwords because the guest is 32-bit and the last the cast's element type; an unknown element type, or a "
     "leading/cast star-count DISAGREEMENT, still refuses rather than defaulting to a dword. WHAT IS LEFT IS "
     "NOT A DEREF PROBLEM: measured 311 of 311 remaining `**(` bail-outs are CALLEES - "
     "`(**(code **)(**(int **)(DAT_1045666c + 0xc) + 200))(...)` - which _derefs refuses on purpose, because "
     "rewriting one emits a HOST call through an address fetched from guest memory and the "
     "leftover_problems guard for that looks for star soup this pass has already deleted. DO NOT weaken that "
     "refusal to earn units. The job belongs to indirect_call_not_modelled's folded-callee machinery: "
     "`Rewriter._callee_read` returns None for that shape only while the base is spelled `DAT_...`. DO NOT "
     "fix it by admitting `DAT_` to its whitelist: in Ghidra's C a bare `DAT_hex` is the VALUE at the "
     "global, not its address, and the generated body proves it on 0x10003b60 - `mov eax,[0x1045666c]` then "
     "`mov eax,[eax+0xc]` then `mov ecx,[eax]` then `call [ecx+0xc8]`, i.e. FOUR reads, "
     "`rd32(rd32(rd32(rd32(G) + 0xc)) + 0xc8)` - mind the nesting, which `_callee_read` already gets right "
     "once the global is a macro (its own output for that form puts the last offset OUTSIDE the third read). "
     "Whitelisting the name instead reads `COW_IMG(G)+0xc` and shifts "
     "every read by one level: it compiles, and disagrees with the oracle. The correct substitution is the "
     "one this module already applies to a bare `DAT_hex` elsewhere - value form `rd32(COW_IMG(macro))`, "
     "address form only behind `&` - applied to the callee text BEFORE the whitelist, with the read-count "
     "cross-check against target_desc and cowdiff as the arbiters. Price any proposal with "
     "lift_bare_deref_diag.py --lifter --freed-by \"deref:\" on the per-JOB table (never per-kind: a kind is a "
     "spelling, and one job fragments into dozens of them, which once priced a 234-unit model at 1), and "
     "prove it through lift_proof: a reason that disappears can simply have moved downstream."),
    ("does_not_compile",
     # The gate's own rejects: units the lifter emitted and the compiler refused. This is LOOP.md priority 2
     # (lifted-but-failing) seen from the one place that tells the truth about it - the compiler's message.
     # lift.py books `does_not_compile_C2065` and DISCARDS the message, and the code alone is useless: C2065
     # is a hundred different missing declarations. tools/cow/ghidra/lift_rejected_errors.py compiles the
     # rejects with the gate's own flags and histograms the message with its identifier canonicalised, which
     # is how '54 C2065s' becomes 'the types pass drops Ghidra pointer LOCALS'.
     # ONCE MEASURED over 1,397 rejects (2026-11-07) - SEE THE TRAP BELOW, that pile was stale, so treat every
     # number in this block as a hypothesis to re-take, not as a price:
     #   - Ghidra pointer locals never declared: puVar1 91, iVar2 56, iVar1 52, pfVar2 51, piVar1 47,
     #     uVar1 43, ppuVar1 31, pbVar1 18 ... and their twins C2109 'subscript requires array or pointer
     #     type' 297 (`puVar1[0]` on something the types pass turned into an integer). ONE cause - a
     #     declaration whose element type the rewriter cannot map is dropped instead of becoming a guest
     #     address - and the largest single lever in the tree.
     #   - C2198 'too few arguments for call' 233, of which `void wr32(uint32_t,uint32_t)` 178: a STORE
     #     emitted without its value. One arity bug in one pass, not 178 broken bodies.
     #   - Small and each a one-line widening, worth doing only after the two above: `uRam104569fc` (20 -
     #     Ghidra's Ram-labelled spelling of an image dword, absent from SYM_RE), `UNK_` (36), `true` (35,
     #     _replace_bools not firing on that shape), `code` (C2091 function returns function, 43).
     # TWO TRAPS, both stepped in on the day this was written: (1) build/lift/rejected only ever GAINED files,
     # so a census of it counted rejects from every run since it was created - 1,397 bodies where the current
     # snapshot books ~59 does_not_compile units - and the pointer-local story below was priced on that pile.
     # IT IS AN UNTESTED HYPOTHESIS NOW: lift.py's gate prunes the directory to the current run, the tool
     # refuses to describe a pile older than the lifter, and the numbers must be re-taken after a fresh
     # `--apply` before anyone plans from them. The lesson is the one this file already carries twice: a
     # census whose input is not the current thing measures the census. (2) NEVER `lift.py --apply --entries
     # <list>`: the prune step deletes every src/lifted file that run did not write, which is all 7,207
     # proven units. Recover with `git checkout -- src/lifted layout`.
     # NOTE THE SIZE: a unit that reaches the gate has survived every refusal clause, so this family is
     # ~59 of 13,523 - not where a 1,000-unit win lives. It is where the units that got through are WRONG.
     "python tools/cow/ghidra/lift.py --apply first (that prunes the rejects to this run), then "
     "tools/cow/ghidra/lift_rejected_errors.py - it reads the message the gate throws away. Do NOT plan from "
     "the pointer-local story below: it was measured against a stale pile and needs re-taking. Also do not "
     "start from the error-code histogram in lift.py: that is the label, not the bug."),

    # ---- THE FAMILIES THE RANKED QUEUE COULD NOT SEE. Added 2026-11-10, the day
    # tools/cow/loopy/queue_unqueued.py made invisibility a number instead of a sentence somebody happened to
    # notice: it walks build/cow_lift/refusals.json against FAMILIES with the same first-prefix-match rule
    # `family_of` uses, and exits non-zero when a family above the floor has no key. Counts below are from the
    # snapshot taken that day (10,055 refused units). Each was confirmed at its raise site in the lifter before
    # being written here, and every zero that tool prints must be taken after `--selftest`, which plants a
    # blind spot and insists the tool call it out.
    ("thunk", "NOT A HOLE - do not spend a cluster here. Measured 2026-11-10: all 313 rows refused by the "
              "is_thunk clause in lift.py:classify (lift.py:1267) carry ledger status `thunk`, which is the same "
              "disposition the README already uses for 713 entries as not-conversion-work, so the refusal IS the "
              "answer and there is nothing to fix. The one finding that would live here is a `thunk` row whose "
              "generated body in generated/all/funcs_*.c is not a bare jmp/call - that is a misclassification in "
              "meta, to be checked against the ledger and not by teaching lift.py to emit a body for it."),
    ("local_address_escapes", "THE BIGGEST UNTRIAGED MECHANISM IN THE REPO, and one fix carrying three names: "
                              "these 141 rows come from the leftover_problems table in ghidra_c.py (ghidra_c.py:1740-1757) "
                              "firing on Ghidra's `&local_N` / `&uStack_N`, the same missing binding refuses "
                              "string_op_not_modelled_operand_stack_frame (431) from gen_model.py, and it already "
                              "leaks silently in units the record calls proven. Read the `memory` action before "
                              "writing code - it carries the whole measurement history, including a claim about "
                              "this family's size that was corrected twice in one day. The fix: bind the frame "
                              "local to the guest stack slot the adapter already reserves (`g->esp -= 0x10`) so a "
                              "callee is handed the guest address instead of the host address of a C array. "
                              "lift_frame_escape.py owns the detector and its tripwire; --selftest is mandatory "
                              "there because its first version matched NOTHING and reported 0 across 196 units. "
                              "Do NOT just delete the clause: cowdiff cannot see this class at all (the "
                              "differential compares guest memory and the exercised states never write through "
                              "the pointer), so the release has to be justified by contract cases in "
                              "lift_selftest.py, never by a pass rate."),
    ("param_address_escapes", "The `&param_N` twin of local_address_escapes - 116 rows from the same "
                              "leftover_problems table in ghidra_c.py (ghidra_c.py:1756), and part of the same "
                              "one mechanism shared with string_op_not_modelled_operand_stack_frame (431) and "
                              "the escapes lift_frame_escape.py finds inside the failing `memory` group. Read "
                              "local_address_escapes for the history instead of re-deriving it. What differs is "
                              "only where the storage lives: a param was read off the INCOMING frame, so the "
                              "binding has to name the adapter's pushed-argument area rather than the locals a "
                              "function subtracts for itself. Price it with lift_frame_escape.py and land it "
                              "with a contract case in lift_selftest.py for the same reason - proof cannot "
                              "arbitrate an address-binding question."),
    ("tail_jump_not_in_ghidra", "34 rows, refused at lift.py:1130 when the guest body has a tail `jmp target` "
                                "but Ghidra's C never emitted the call to it (`tail.used` is false). The refusal "
                                "is correct as written: shipping that unit returns without becoming the callee, "
                                "so the caller reads a result that was never computed. The fix is to stop asking "
                                "the decompiler - TAIL_ADAPTER_TMPL in lift.py already gets the target from the "
                                "guest walk, so drive the tail from the disassembly the recompiler trusts and "
                                "keep the refusal for the case where the two disagree. Check the frame/esp "
                                "bookkeeping against tail_reg_writes in gen_model.py before assuming the "
                                "existing tail epilogue is reusable."),
    ("host_call_through_computed_pointer", "23 rows, and the clause raising it (ghidra_c.py:1338, plus the "
                                           "leftover scan at ghidra_c.py:1817, both over computed_pointer_calls) "
                                           "is the only thing between the lift and the worst bug this pipeline "
                                           "could ship. Ghidra folds a vtable call into its own callee expression "
                                           "- `(**(code **)(*p + 8))(p)` - and unless something bridges it, the "
                                           "deref pass turns the READS into guest reads and leaves the CALL as C: "
                                           "a HOST call through a value read from GUEST memory, no return address "
                                           "pushed, no REGS_STORE/REGS_LOAD, callee entered with the guest "
                                           "registers in no defined state. Do not relax the clause to release "
                                           "the 23; the docstring on computed_pointer_calls in ghidra_c.py says "
                                           "explicitly that a guard holding by accident is not a guard, because "
                                           "this shape was only ever caught by an UNRELATED refusal. The fix is "
                                           "the bridge pass to rt_call_indirect, written on purpose."),
    ("leftover_concat", "22 rows where Ghidra's bit-concatenation intrinsic survived the rewriter - the "
                        "`CONCAT44`/`CONCAT13` pattern in the leftover_problems table of ghidra_c.py "
                        "(ghidra_c.py:1790). Small, closed and mechanical: CONCATab(x, y) is `((uint##ab##_t)x "
                        "<< b) | (uint##ab##_t)y` with both widths taken from the intrinsic's own two digits, "
                        "so it belongs beside the other Ghidra-spelling rules in ghidra_c.py and not in lift.py. "
                        "Verify operand widths against the generated body on a sample first: a concat with the "
                        "wrong shift is a silent value bug, and a leftover_problems clause that has been widened "
                        "into emitting the wrong value is the one outcome worse than the refusal it replaced."),
]


def lifter_mtime():
    return max((os.path.getmtime(os.path.join(ROOT, f)) for f in LIFTER_FILES
                if os.path.exists(os.path.join(ROOT, f))), default=0.0)


def family_of(reason):
    for prefix, action in FAMILIES:
        if reason.startswith(prefix):
            return prefix, action
    return reason, "unclassified - read a sample of this reason before deciding it is a pattern."


def load_refusals():
    if not os.path.exists(REFUSALS):
        return None, "absent"
    age = lifter_mtime() - os.path.getmtime(REFUSALS)
    if age > 1.0:
        return None, "stale (%.0f s older than the lifter)" % age
    try:
        with open(REFUSALS, encoding="utf-8") as fh:
            return json.load(fh), "fresh"
    except (ValueError, OSError) as exc:
        return None, "unreadable (%s)" % exc


def load_proof():
    if not os.path.exists(PROOF_ALL):
        return {}, "absent"
    age = lifter_mtime() - os.path.getmtime(PROOF_ALL)
    try:
        with open(PROOF_ALL, encoding="utf-8") as fh:
            d = json.load(fh)
        return d.get("results", d), ("fresh" if age <= 1.0 else "stale (%.0f s older than the lifter)" % age)
    except (ValueError, OSError) as exc:
        return {}, "unreadable (%s)" % exc


def patterns(limit=12):
    """Ranked pattern tasks. Refusal families first (they are unemitted volume), then failure groups."""
    refusals, ref_state = load_refusals()
    proof, proof_state = load_proof()

    out = []
    if refusals:
        fam = collections.Counter()
        sample = {}
        for addr, reason in refusals.items():
            if isinstance(reason, dict):
                reason = reason.get("reason") or str(reason)
            key, action = family_of(str(reason))
            fam[key] += 1
            sample.setdefault(key, addr)
        for key, count in fam.most_common(limit):
            _, action = family_of(key)
            out.append({"kind": "refusal", "pattern": key, "count": count,
                        "sample": sample.get(key), "action": action})

    fails = collections.Counter()
    fsample = {}
    proven = 0
    for addr, v in proof.items():
        if v.get("pass") is True:
            proven += 1
            continue
        why = str(v.get("why") or "ungrouped")
        fails[why] += 1
        fsample.setdefault(why, addr)
    for key, count in fails.most_common(limit):
        # consult FAMILIES, exactly like the refusal branch does. This used to hardcode the boilerplate,
        # so a measured action written for a FAILURE group (like `memory` below) never reached anyone -
        # the text existed in the file and the queue kept printing "go and group these" for a group that
        # had been grouped. A queue that ignores its own research is worse than no queue.
        _, action = family_of(key)
        if action == "unclassified - read a sample of this reason before deciding it is a pattern.":
            action = ("group a sample of these before touching the lifter - the last four breakthroughs "
                      "came from better words in the FAIL line, not from theory.")
        out.append({"kind": "failure", "pattern": key, "count": count, "sample": fsample.get(key),
                    "action": action})

    out.sort(key=lambda p: -p["count"])
    # If nobody has asked the CURRENT lifter what it refuses, the ranking is half a picture and the
    # missing half is the unemitted volume - which is exactly where priority (a) lives. Saying
    # "here are the failures I know about" while the refusal set is unknown would let the queue look
    # authoritative about a population it has not measured, so the queue's own top task becomes the
    # regeneration. It is still returned in `patterns` so an operator can see what is there.
    top = None
    if ref_state != "fresh":
        top = {"kind": "regenerate", "pattern": "refusal-snapshot",
               "count": len(refusals) if refusals else 0,
               "sample": None,
               "action": "the refusal snapshot is %s; run lift.py --reasons-out "
                         "build/cow_lift/refusals.json (report-only, no --apply) before ranking anything. "
                         "Until then the biggest pattern is unmeasured, and a queue that ranked half a "
                         "population would be guessing." % ref_state}
    return {"generated": time.strftime("%Y-%m-%dT%H:%M:%S%z"),
            "refusals": ref_state, "proof": proof_state,
            "lifted_proven": proven, "lifted_total": len(proof),
            "usable": bool(out) and ref_state == "fresh",
            "blocker": None if top is None else top,
            "patterns": ([top] if top else []) + out}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--top", action="store_true", help="print only the pattern to work on now")
    args = ap.parse_args()
    d = patterns()
    if args.top:
        if not d["usable"]:
            b = d.get("blocker")
            if b:
                b["refusals_state"] = d["refusals"]
                print(json.dumps(b, indent=1))
                return 2
            print(json.dumps({"usable": False,
                              "why": "no ranked pattern: %s / %s" % (d["refusals"], d["proof"])}))
            return 2
        p = d["patterns"][0]
        p["refusals_state"] = d["refusals"]
        print(json.dumps(p, indent=1))
        return 0
    print(json.dumps(d, indent=1))
    return 0


if __name__ == "__main__":
    sys.exit(main())
