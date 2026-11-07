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
                               "either.)"),
    ("string_op_not_modelled", "MEASURED - the cheap version of this does not exist, and the reason is not a "
                               "missing rep loop. lift_stringdiag.py: 98% (293/300) are `rep` forms, so there "
                               "is no unprefixed single-move slice to start with. The real blocker, from one "
                               "Ghidra body read by eye: for `lea edi,[esp+0xc]; mov ecx,0x25; rep stosd "
                               "es:[edi],eax` Ghidra emits `uint local_94[37]; ... *puVar7 = 0xffffffff;` - "
                               "THE DECOMPILER DELETED THE FRAME, so the lifted C writes a host local where "
                               "the guest wrote its own stack, and cowdiff sees nothing in the stack region. "
                               "No rep-loop model fixes a destination that is not in the body. At least "
                               "170/300 (57%) are FRAME-BOUND (lift_stringframe.py, pinned by "
                               "lift_stringframe_check.py against that by-eye unit); the other 130 are "
                               "UNPRICED because the operand walk is too crude - read that as 'unknown', not "
                               "as '0 left to do'. "
                               "THE SAME ROOT CAUSE EXPLAINS 455 `store=value`/`store=missing` rows in the "
                               "memory group, so the worthwhile fix is the frame-aliasing model, not a rep "
                               "loop: (1) from the GENERATED body, collect the frame offsets whose address was "
                               "ever taken (`lea reg,[esp+N]`) - instructions known to execute, not the "
                               "decompiler's opinion; (2) route the matching Ghidra `local_<offset>` accesses "
                               "to the guest frame at that offset (the adapter already reserves m[locals] and "
                               "knows sp0); (3) leave address-untaken locals as host locals - promoting those "
                               "would ADD stores the original never made, which is the store=extra direction "
                               "to avoid here. The loop itself is easy and legitimate: width from the "
                               "mnemonic and direction from df are x86 ISA facts, NOT the oracle's rendering "
                               "- do not copy the generated body's `while (ecx) { wr32(edi, ...); edi += "
                               "(df ? -4 : 4u); ecx--; }` text, which would agree by construction. "
                               "DO NOT start by writing the loop: do the frame aliasing first, or the string "
                               "slice ships units that silently skip the guest's stack writes."),
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
     # DO NOT follow the old wording of this action. It said "extend the bridges to the target expressions
     # the GENERATED BODY can name", and the census (tools/cow/ghidra/lift_indirect_diag.py, 300 units,
     # 2026-11-07) showed the generated body names almost none of them: 762 of 820 sites are the vtable form
     # `call [reg+disp]` whose base register was written by a LOAD (`mov eax,[esi]`), which
     # `call_reg_values` refuses to name outside the effect-free tail window - correctly, because the value
     # depends on memory as of that instruction. Naming a load is the frame-aliasing model, not a widening.
     # The volume is on the OTHER side: Ghidra writes the call with the pointer load folded into the callee,
     # `(**(code **)(*param_1 + 0x24))()`, which ghidra_c._calls cannot see at all (its indirect alternative
     # needs a bare identifier), so nothing bridges it and the deref pass leaves a RAW HOST CALL through a
     # guest pointer. Priced by what the callee READS (lift_indirect_ghidra.py, 250 units): 147 need only a
     # wider call regex (params / image globals / constants), 70 read a Ghidra local (the frame model's, and
     # the string family's, wall), 29 have a site-vs-callee count mismatch where positional pairing is
     # unsafe and the unit must refuse. THE PREREQUISITE IS ALREADY IN: leftover_problems now refuses
     # host_call_through_computed_pointer, verified against all 7,044 shipped units (0 regressions) and
     # pinned by a selftest - so the clause can no longer be relaxed to ship that call by accident. Widen the
     # call pass AND bridge in the same change, pair sites to callees only where the counts agree, and do not
     # infer the number of guest reads from Ghidra's leading `*` soup: cross-check it against the site's
     "bridges + ghidra_c: RECOGNISE and BRIDGE Ghidra's folded vtable callee in the same change. The call "
     "pass cannot see `(**(code **)(*p + 0x24))()` today, so nothing bridges it; widen it AND route the "
     "callee to cow_bridge_indirect, pairing sites to callees only where the counts agree. Do NOT count "
     "guest reads from Ghidra's leading `*` soup - cross-check the number against the site's target_desc, "
     "because the outermost `*` is the call idiom and not a read."),
    ("leftover_unbridged_call", "bridges: names the call sites that fell through every bridge rule."),
    ("leftover_undefined", "lift/ghidra_c: symbols the rewriter could not resolve to a name."),
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
                          "computed one. Also do not invent an arg-count rule."),
    ("cleanup_mismatch", "gen_model: the `add esp,N` / `ret N` attribution disagrees with the body."),
    ("calls_unknown_symbol", "lift: name the external in addresses.h and bridge it."),
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
    ("memory", "MEASURED - this is NOT one bug, and the label is a symptom. lift_memshapes.py over the 661 "
               "failing rows: store=value 317, store=missing 244, store=extra 100; region stack 544 of 661 "
               "(image 87, arena 30); 419 fail at state 0 (deterministic - one path is simply wrong) and "
               "199 only later (input-dependent - arithmetic or rounding). The tempting single explanation, "
               "a frame-relative store Ghidra deleted when it turned the frame into locals "
               "(`mov [esp+4], eax` never happening), was CENSUSED AND IS ONLY 89 OF THE 544 (16%) - see "
               "lift_stackstores.py, whose detector is pinned by lift_stackstores_check.py. The other 455 "
               "are stack slots BOTH sides wrote with different values (`store=value A:1 B:1`), i.e. "
               "argument-push content, which is the argcount/push_values family already parked below: a fix "
               "there moves this group, a new hack here does not. TWO WARNINGS FROM THE WORK ITSELF: (1) the "
               "first version of the frame-store detector matched NOTHING, because the generated body "
               "computes the address into a temp (`uint32_t A = (uint32_t)(esp + 4); wr32(A, v);`) instead "
               "of spelling `wr32((uint32_t)(esp...` - and it confidently reported '0 of 544, so this is not "
               "the frame-store bug' while looking at the frame-store bug. A census regex that silently "
               "matches nothing is worse than no census: it delivers a confident negative. Validate a "
               "detector against a unit you have read by eye before believing any number it prints. (2) A "
               "group label hides at least three distinct bugs; only reading units separates them, which is "
               "what lift_bodypeek.py is for."),
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
