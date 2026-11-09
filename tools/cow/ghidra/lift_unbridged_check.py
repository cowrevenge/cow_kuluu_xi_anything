"""Check for tools/cow/ghidra/lift_unbridged_diag.tail_call_tag - the sub-classifier that decides whether
an intra-body tail call is a flag-only fix or a per-path-pop job.

The rule this file exists to enforce is the one this census has now tripped over twice: a detector whose
regex silently matches nothing reports a confident answer about every unit, and that answer looks like
progress. So the check runs the SHARED function (imported, never re-typed - a copy here would pass while
the real detector rotted) against units whose bodies were read by eye.

    python tools/cow/ghidra/lift_unbridged_check.py
"""
import importlib.util
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
sys.path.insert(0, HERE)

spec = importlib.util.spec_from_file_location(
    "lift_unbridged_diag", os.path.join(HERE, "lift_unbridged_diag.py"))
diag = importlib.util.module_from_spec(spec)
spec.loader.exec_module(diag)

import lift as liftmod                                     # noqa: E402

FAILED = []


def check(what, cond, detail=""):
    if not cond:
        FAILED.append("%s%s" % (what, (": " + detail) if detail else ""))


def body_of(ctx, key):
    """The generated body lines for a unit, exactly as the census reads them."""
    return [l if isinstance(l, str) else str(l) for l in (ctx.bodies.get(key) or [])]


def model_of(ctx, key):
    """Refusal target for a unit, or None if it is no longer refused the way the census expects."""
    e = None
    with open(diag.DUMP, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            if not line.strip():
                continue
            try:
                d = json.loads(line)
            except ValueError:
                continue
            if str(d.get("addr", "")).lower().replace("0x", "") == key:
                e = d
                break
    if e is None:
        return None, []
    ctx.problems = []
    liftmod.emit({"addr": "0x" + key, "c": e.get("c") or "", "param_count": e.get("param_count")}, ctx)
    probs = list(ctx.problems)
    ctx.problems = []
    # positional, like the census: the tag belongs to the problem that DECIDED the refusal
    raw = str(probs[0]) if probs and str(probs[0]).startswith("no_generated_call_site_for_FUN_") else ""
    import re
    return (re.sub(r".*FUN_", "", raw).strip() if raw else None), probs


def main():
    ctx = liftmod.Ctx(diag.DUMP, "12.2")

    # ---- clause 1: the unit read by eye must classify as the pop case, not the sound case. 0x10018b00 pops
    # esi at 10018b1e and tail-jumps at 10018b1f (verified by printing its generated body), so a tag that
    # says "NO pops in the body" is a regex that matches nothing - the exact bug this pins.
    tgt, _ = model_of(ctx, "10018b00")
    check("exemplar still refuses on the tail target", tgt == "10071050", str(tgt))
    tag = diag.tail_call_tag(tgt, body_of(ctx, "10018b00"))
    check("exemplar is an INTRA-BODY TAIL CALL", tag and "INTRA-BODY TAIL CALL" in tag, str(tag))
    check("exemplar is NOT filed as pop-free (it pops esi before the jmp)",
          tag and "NO pops" not in tag, str(tag))
    check("exemplar is filed as needing per-path pops", tag and "per-path pops" in tag, str(tag))

    # ---- clause 2: the POP_RE spelling itself, isolated from any unit. Both a pop and a non-pop are fed in
    # so the pattern cannot pass by matching everything or nothing.
    check("POP_RE matches the generated pop spelling",
          bool(diag.POP_RE.search("{uint32_tv=rd32(esp);esp+=4;esi=(uint32_t)(v);}")))
    check("POP_RE does not match the ret spelling",
          not diag.POP_RE.search("esp+=4;REGS_STORE;return;"))
    check("POP_RE does not match the adapter's g-> spelling (that is a different layer)",
          not diag.POP_RE.search("{uint32_tv=rd32(g->esp);g->esp+=4u;g->esi=v;}"))

    # ---- clause 3: the three tail sub-cases are reachable and distinct, over a real sample. A split that
    # puts everything in one bucket is not a split.
    with open(diag.REFUSALS, encoding="utf-8") as fh:
        refusals = json.load(fh)
    addrs = [k.lower().replace("0x", "") for k, v in refusals.items()
             if str(v).startswith("leftover_unbridged_call")][:80]
    seen = {}
    for key in addrs:
        t, _ = model_of(ctx, key)
        if not t:
            continue
        tg = diag.tail_call_tag(t, body_of(ctx, key))
        if tg:
            seen[tg] = seen.get(tg, 0) + 1
    buckets = {("tail" if "INTRA-BODY" in k else "nontail") for k in seen}
    check("the tail and non-tail halves are both reachable", buckets == {"tail", "nontail"}, str(seen))
    popsplit = [k for k in seen if "INTRA-BODY TAIL CALL" in k]
    check("the tail cases do not all land in one bucket", len(popsplit) > 1, str(popsplit))
    print("buckets over %d sampled refusals:" % len(addrs))
    for k in sorted(seen, key=lambda x: -seen[x]):
        print("  %4d  %s" % (seen[k], k))

    if FAILED:
        print("\nFAILED %d:" % len(FAILED))
        for f in FAILED:
            print("  - " + f)
        return 1
    print("\nOK: tail_call_tag discriminates, on a unit read by eye and in isolation")
    return 0


if __name__ == "__main__":
    sys.exit(main())
