"""Is an unpaired push actually a CLOBBER? A realised/unrealised split, before any payoff claim.

The judge is not blind - tools/cow/cowdiff.c line 17 and ~1159 compare ebx/esi/edi/ebp and esp after
the return. So a booked-pass unit with an unpaired callee-saved push has only one innocent explanation:
our code never writes that register AFTER the push, so nothing needed restoring. `push edi` with no
 intervening write to edi and no pop is a no-op on the caller's view (esp is pinned by `g->esp = sp0`).

That distinction decides what the measured re-lift is worth. Only REALISED clobbers can flip under
COW_LIFT_EPILOGUE_MATCH_PUSHES; the unrealised ones are already correct and would fail a payoff claim
for no reason. Order matters, so the file is read the way it executes:

    1. adapter prologue  - up to the cow_lift_<hex>(g, ...) call
    2. the lifted body   - cow_lift_<hex>()'s own text (it is ABOVE the adapter in the file, which is
                           exactly why a naive text-position test would get this backwards)
    3. adapter epilogue  - the pops, `g->esp = sp0`, rt_return

A register is realised when something writes g-><r> in (1) after the push line, or anywhere in (2).
"""
import io
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import lift_frame_predicates as FP  # noqa: E402

CALL_RE_TMPL = r"cow_lift_%s\(\s*g"


def segments(text, a):
    """(prologue_after_args, body, epilogue) in EXECUTION order."""
    if "COW_ADAPTER BEGIN" not in text:
        return "", "", ""
    adapter = text[text.index("COW_ADAPTER BEGIN"):]
    m = re.search(CALL_RE_TMPL % a, adapter)
    call = m.start() if m else len(adapter)
    prologue, epilogue = adapter[:call], adapter[call:]
    begin = text.index("void cow_lift_%s(" % a) if ("void cow_lift_%s(" % a) in text else None
    body = ""
    if begin is not None:
        end = text.find("COW_LIFTED END", begin)
        body = text[begin:end if end > 0 else len(text)]
    return prologue, body, epilogue


def realised(text, a, r, push_pos_in_prologue):
    """Does anything write g->r after the push, or inside the body?"""
    pro, body, epi = segments(text, a)
    after = pro[push_pos_in_prologue:] if push_pos_in_prologue >= 0 else pro
    wr = re.compile(r"g->%s\s*=[^=]" % r)
    if wr.search(after):
        return True, "prologue write after the push"
    if wr.search(body):
        return True, "written inside the lifted body"
    return False, "no write to g->%s after the push - the caller cannot observe it" % r


def classify_unit(a):
    text = FP.read_unit(a)
    if "machine-lifted" not in text:
        return None
    unpaired = FP.adapter_unpaired(text)
    if not unpaired:
        return None
    pro, _b, _e = segments(text, a)
    out = {}
    pos = 0
    pushes = []
    for m in re.finditer(r"g->esp -= 4u; wr32\(g->esp, g->(\w+)\)", pro):
        pushes.append((m.group(1), m.start()))
    for r in unpaired:
        pp = next((p for rr, p in pushes if rr == r), -1)
        out[r] = realised(text, a, r, pp)
    return out


if __name__ == "__main__":
    import json
    LEDGER = os.path.join(FP.ROOT, "cow", "lift_proof_all.json")
    with io.open(LEDGER, encoding="utf-8", errors="replace") as fh:
        ledger = json.load(fh)
    if len(ledger) < 5000:
        sys.exit("REFUSING: ledger too small (%d)" % len(ledger))

    realised_units, unrealised_units = {}, {}
    for a in FP.lifted_units():
        c = classify_unit(a)
        if not c:
            continue
        if any(v[0] for v in c.values()):
            realised_units[a] = [r for r, v in c.items() if v[0]]
        else:
            unrealised_units[a] = sorted(c)

    def bp(a):
        return bool((ledger.get(a) or {}).get("pass"))

    print()
    print("=" * 72)
    print("unpaired pushes split by whether OUR code writes the register after the push")
    print("=" * 72)
    print("  REALISED (a clobber the caller can observe)     : %3d units" % len(realised_units))
    print("     of which the ledger says booked pass          : %3d   <- if >0, explain or reopen the judge"
          % sum(1 for a in realised_units if bp(a)))
    print("  UNREALISED (pushed, never written - no-op)      : %3d units" % len(unrealised_units))
    print("     of which the ledger says booked pass          : %3d   <- expected: correct lifts"
          % sum(1 for a in unrealised_units if bp(a)))
    print()
    print("  realised, booked pass : %s"
          % ", ".join("0x%s(%s)" % (a, ",".join(r)) for a, r in
                      list((a, r) for a, r in realised_units.items() if bp(a))[:8]))
    print("  realised, unproven    : %s"
          % ", ".join(["0x%s" % a for a in realised_units if not bp(a)][:8]))
    print("     (count)              : %d" % sum(1 for a in realised_units if not bp(a)))
    print()
    if "10003070" not in realised_units:
        sys.exit("REFUSING: the by-eye exemplar 0x10003070 is not REALISED - the split is wrong")
    print("  tripwire: 0x10003070 realised as %s" % realised_units["10003070"])
