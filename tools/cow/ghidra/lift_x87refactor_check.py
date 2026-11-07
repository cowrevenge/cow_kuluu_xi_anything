"""Did the x87_shape refactor (form-based dispatch + the `allow` parameter) change what is ADMITTED?

The refactor moved `fstp`/`fistp` out of the per-op depth check and onto the balance rules, which changes
the sub-REASON some refusals carry. That is only harmless if no unit that used to be refused is now let
through. Reasoning said so; this checks it, because "no behaviour change" is exactly the claim that has
been wrong before in this project.

Compares the committed refusals.json against the working tree's, for the x87 family only, and separately
re-derives the liftable set both ways for every unit in it.

    python tools/cow/ghidra/lift_x87refactor_check.py
"""
import json
import os
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)

import gen_model          # noqa: E402
import trivial_audit      # noqa: E402

# the sets as they were BEFORE the form-based dispatch, transcribed literally
OLD_PUSH = {"fld", "fldz", "fld1", "fldpi"}
OLD_ONES = {"fst", "fstp", "fadd", "fmul", "fsub", "fsubr", "fchs", "fabs"}


def old_shape(ins, sites):
    """x87_shape as it behaved before the refactor - kept here, not in gen_model, so it is frozen."""
    call_addrs = {s["addr"] for s in sites}
    depth = peak = 0
    ops = set()
    import re
    for c in ins:
        mn = (c.get("mnem") or "").lower()
        stmt = c.get("stmt") or ""
        if isinstance(stmt, list):
            stmt = "\n".join(stmt)
        text = (c.get("text") or "").lower()
        is_fp = mn in gen_model.X87_MNEMS or "X87_PUSH" in stmt or "X87_POP" in stmt
        before = depth
        depth += len(re.findall(r"X87_PUSH", stmt))
        depth -= len(re.findall(r"X87_POP", stmt))
        if depth < 0:
            return {"liftable": False, "why": "pops_caller_state"}
        peak = max(peak, depth)
        if not is_fp:
            if (c.get("mnem") or "") == "call" and before > 0:
                return {"liftable": False, "why": "fp_live_across_call"}
            continue
        ops.add(mn)
        if "st(" in text:
            return {"liftable": False, "why": "st_register_operand"}
        if mn in OLD_PUSH:
            if before != 0:
                return {"liftable": False, "why": "push_beyond_one"}
        elif mn in OLD_ONES:
            if before != 1:
                return {"liftable": False, "why": "op_at_wrong_depth" if before == 0 else "op_beyond_one"}
        else:
            return {"liftable": False, "why": "op_not_in_slice:" + (mn or "marker")}
    if depth != 0:
        return {"liftable": False, "why": "leaves_value_on_stack"}
    if peak > 1:
        return {"liftable": False, "why": "stack_too_deep"}
    if not ops:
        return {"liftable": False, "why": "markers_only"}
    return {"liftable": True, "why": None}


def main():
    # NOT from git: build/ is gitignored, so "git show HEAD:build/cow_lift/refusals.json" returns nothing
    # and the comparison silently runs over an empty population and reports "0 changes" - a vacuous PASS,
    # which is the worst kind of green. The population is taken from the current snapshot plus the units
    # that were admitted (they are the ones with an x87 body AND a file in src/lifted), which covers both
    # sides of the decision boundary without needing a file that does not exist.
    with open(os.path.join(ROOT, "build", "cow_lift", "refusals.json"), encoding="utf-8") as fh:
        now = json.load(fh)
    refused = {k for k, v in now.items() if str(v).startswith("x87_not_modelled")}

    lifted_x87 = set()
    ldir = os.path.join(ROOT, "src", "lifted")
    for f in os.listdir(ldir):
        if f.endswith(".c"):
            lifted_x87.add(f[4:-2])

    bodies = trivial_audit.body_index()
    pop = sorted({k.lower().replace("0x", "") for k in refused} | lifted_x87)
    print("population: %d refused-as-x87 + %d lifted files = %d to compare"
          % (len(refused), len(lifted_x87), len(pop)))

    changed_admit = []
    changed_reason = []
    n = 0
    for key in pop:
        body = bodies.get(key)
        if not body:
            continue
        m = gen_model.model_generated(body)
        if not m or not m.get("ok", True) or not m.get("has_x87"):
            continue
        n += 1
        sites = m.get("call_sites") or []
        ins = m["ins"]
        old = old_shape(ins, sites)
        new = gen_model.x87_shape(ins, sites)
        if bool(old.get("liftable")) != bool(new.get("liftable")):
            changed_admit.append((key, old.get("liftable"), new.get("liftable"), new.get("why")))
        elif old.get("why") != new.get("why"):
            changed_reason.append((key, old.get("why"), new.get("why")))

    print("compared %d units with x87" % n)
    if n == 0:
        print("VACUOUS: no units compared - the population is empty, so '0 changes' means nothing")
        return 2
    print("CHANGED ADMITTANCE (the dangerous one): %d" % len(changed_admit))
    for k, o, nw, why in changed_admit[:12]:
        print("   0x%s  old_liftable=%s new_liftable=%s (%s)" % (k, o, nw, why))
    print("reason-only differences: %d" % len(changed_reason))
    seen = set()
    for k, o, nw in changed_reason:
        if (o, nw) not in seen:
            seen.add((o, nw))
            print("   %s -> %s" % (o, nw))
    return 1 if changed_admit else 0


if __name__ == "__main__":
    sys.exit(main())
