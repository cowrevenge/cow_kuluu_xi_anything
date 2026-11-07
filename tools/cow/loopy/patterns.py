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
    ("string_op_not_modelled", "gen_model: model rep movsb/stosb/scasb (and the cmps/scases) so the lift "
                               "can emit them; today every function containing one is refused whole."),
    ("x87_not_modelled", "FIRST SLICE SHIPPED 2026-11-08 (gen_model.x87_shape): the lift now admits an x87 "
                         "unit only under a shallow-scratch CONTRACT - the stack empty before its own push, "
                         "never deeper than one, empty at every call and at the end, and no instruction "
                         "naming an ST register. Under that contract the guest's top/st0 are provably "
                         "untouched, so Ghidra's float-on-locals arithmetic is a real implementation and "
                         "the generated body is not needed. MEASURED on the whole family (1,949): 353 "
                         "admitted, 160 survived the other refusals + syntax gate, and 77/160 = 48.1% "
                         "proved. THE CONTRACT WORKED: 0 of 160 rows failed on st0 or top - the FP state "
                         "agreement held on every unit admitted. Failures are the ordinary lift kinds "
                         "(memory 42, eax 18, no_row_output 11, edx 9), split by shape: pure-copy units "
                         "(fld/fstp only) fail on REGISTERS 23/55, units with float arithmetic fail on "
                         "MEMORY 54/105 with memory 40/51 of their failures - which is the double-vs-float "
                         "intermediate (the runtime holds double and fcw 0x027F makes fr_cw the identity; "
                         "Ghidra uses float locals and rounds per step). NEXT FIX, priced by the same "
                         "census: carry FP values in double and round only at the store, which is a "
                         "ghidra_c type-model change, not more gating. "
                         "WHAT THE GATE STILL REFUSES, with full-family counts: op_not_in_slice:fild 397, "
                         "push_beyond_one 378, op_not_in_slice:fcomp 251, pops_caller_state 143, "
                         "leaves_value_on_stack 96, fp_live_across_call 84, st_register_operand 57, "
                         "op_at_wrong_depth 45, fcom 42, fdiv 40, fsqrt 13, fdivr 8, fnstcw 8, fsincos 7. "
                         "fild/fistp are the biggest single group and need the control-word rounding "
                         "modelled (fist32_cw rounds nearest-even; a C cast TRUNCATES, which is why they "
                         "are not in the slice); push_beyond_one needs a genuine FP-stack model. DO NOT "
                         "transcribe the generated body's X87 statements as an implementation - that body "
                         "is what cowdiff compares AGAINST, so agreement would be by construction. The "
                         "gate is locked by lift_selftest.py's X87 cases (one per clause), so a clause "
                         "cannot be quietly widened."),
    ("indirect_call_not_modelled", "bridges: extend cow_bridge_indirect / rt_call_indirect to the target "
                                   "expressions the generated body can name."),
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
    ("no_ret_in_body", "gen_model: the body has no reachable return to transcribe."),
    ("purge_ambiguous", "gen_model: which words the callee pops cannot be decided from the body."),
    ("unbound_register", "gen_model: a register is read that the lift cannot materialise."),
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
        out.append({"kind": "failure", "pattern": key, "count": count, "sample": fsample.get(key),
                    "action": "group a sample of these before touching the lifter - the last four "
                              "breakthroughs came from better words in the FAIL line, not from theory."})

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
