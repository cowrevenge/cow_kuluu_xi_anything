"""Check the epilogue single-source rule (COW_LIFT_EPILOGUE_MATCH_PUSHES) two ways.

1. UNIT: complete_pops() over literal cases - the exemplar, and controls that must make it REFUSE
   (volatile registers, an order the walk and the push list cannot both be right about, a register the
   body already restores, a frame-pointer ebp that `leave` owns).

2. END TO END through the real emitter: take units straight out of src/lifted, decide from THE CODE
   (not from the banner) whether the adapter pushes more registers than it pops, run lift.emit() with
   the knob off and on, and require
       widening candidates  -> the missing pops appear, in LIFO order, and the banner says so
       identical controls   -> byte-for-byte the SAME text off and on
   The control population is chosen from the code because the banner is the thing that lied: a unit
   whose banner says "1 push(es) [ebx] ... pops [ebx]" still emitted a `push edi` in its prologue.

Nothing here compiles or proves anything - it checks the emitter's output text. The measured re-lift
is what decides whether the knob ships on.
"""
import io
import json
import os
import re
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)
DUMP = os.environ.get("COW_LIFT_DUMP", "D:/projects/ghidra/ghidra_out/functions_all.jsonl")
LIFT_DIR = os.path.join(ROOT, "src", "lifted")
# THE code-level predicates live in lift_frame_predicates.py - one definition, imported here
# and by the overlap script. Aliases keep the rest of this file readable.
from lift_frame_predicates import (ADAPTER_PUSH_RE as PUSH_RE,
                                   ADAPTER_POP_RE as POP_RE,
                                   adapter_pushes, adapter_pops, adapter_unpaired,
                                   lifted_units, read_unit)

import lift  # noqa: E402

fails = []


def eq(what, got, want):
    if got != want:
        fails.append("%s: got %r want %r" % (what, got, want))
        print("  FAIL %s\n       got  %r\n       want %r" % (what, got, want))
    else:
        print("  ok   %s -> %r" % (what, got))


print("=" * 72)
print("1. complete_pops() - literal cases")
print("=" * 72)
BODY_CLEAN = "void f(){ /* nothing touches the registers */ }"

eq("exemplar 0x10003070 shape (push ebx,edi; pop ebx)",
   lift.complete_pops(["ebx", "edi"], ["ebx"], BODY_CLEAN, False, False),
   ["edi", "ebx"])
eq("already complete",
   lift.complete_pops(["ebx"], ["ebx"], BODY_CLEAN, False, False),
   ["ebx"])
eq("three saves, walk saw the last two",
   lift.complete_pops(["ebx", "esi", "edi"], ["edi", "esi"], BODY_CLEAN, False, False),
   ["edi", "esi", "ebx"])
eq("REFUSE volatile push (eax is the return value)",
   lift.complete_pops(["ebx", "eax"], ["ebx"], BODY_CLEAN, False, False),
   None)
eq("REFUSE an order that contradicts LIFO (walk popped ebx before edi, but edi was pushed last)",
   lift.complete_pops(["ebx", "esi", "edi"], ["ebx", "edi"], BODY_CLEAN, False, False),
   None)
eq("a partial list that IS LIFO-consistent gets completed, not refused",
   lift.complete_pops(["ebx", "esi", "edi"], ["ebx"], BODY_CLEAN, False, False),
   ["edi", "esi", "ebx"])
eq("REFUSE a register the body already restores",
   lift.complete_pops(["ebx", "edi"], ["ebx"],
                      "x\n{ uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */\n",
                      False, False),
   None)
eq("ebp belongs to leave, not to a pop we add",
   lift.complete_pops(["ebp", "edi"], ["edi"], BODY_CLEAN, True, True),
   ["edi"])
eq("no pushes -> nothing to complete",
   lift.complete_pops([], [], BODY_CLEAN, False, False),
   None)

print("\n  property: an accepted list returns exactly the pushed callee-saved set, LIFO")
for pushed, pops in ((["ebx", "edi"], ["ebx"]), (["esi", "edi", "ebx"], ["edi", "esi"]),
                     (["ebx"], [])):
    out = lift.complete_pops(pushed, pops, BODY_CLEAN, False, False)
    eq("property %s/%s" % (pushed, pops), out, list(reversed(pushed)))

# -------------------------------------------------------------------------------------------- 2.
print()
print("=" * 72)
print("2. the real emitter, chosen from THE CODE not the banner")
print("=" * 72)

widening, identical = [], []
both_kinds = {"callee_saved_missing": 0, "volatile_missing": 0, "clean": 0}
for a in lifted_units():
    t = read_unit(a)
    if "COW_ADAPTER BEGIN" not in t or "machine-lifted" not in t:
        continue
    adapter = t[t.index("COW_ADAPTER BEGIN"):]
    pushes = PUSH_RE.findall(adapter)
    pops = POP_RE.findall(adapter)
    if not pushes:
        continue
    missing = [r for r in pushes if r not in pops]
    # a register can also be put back by a REPLAYED statement rather than by an epilogue pop, and the
    # code-level counter must not call that a clobber: same rule the emitter applies, applied to the
    # whole file. `really_missing` is the honest version of `missing`.
    really = [r for r in missing if not lift._restored_elsewhere(t, r)]
    if missing and all(r in lift.CALLEE_SAVED for r in missing):
        both_kinds["callee_saved_missing"] += 1
        widening.append((a, pushes, pops, missing, really))
    elif missing:
        # a volatile register left unpaired - NOT a callee-saved clobber, and the counter has to be
        # seen telling the two apart or its "callee-saved" count means nothing
        both_kinds["volatile_missing"] += 1
    elif len(pushes) == len(pops):
        both_kinds["clean"] += 1
        identical.append((a, pushes, pops))
# The text scan covers every lifted file (cheap, and it is the population claim); rendering is
# capped below so the check stays a check and not a batch.

# A CODE-LEVEL population count, independent of gen_model: what the shipped adapters actually do.
# This is the number to compare against the model-based ladder (--reconcile), because if
# the two disagree the disagreement itself is the finding.
from lift_frame_predicates import unpaired_population as _upop
_pop = _upop()
print("  CODE-LEVEL POPULATION (lift_frame_predicates.unpaired_population - THE counter):")
print("    units pushing a callee-saved register they never bring back : %d  (%d pairs)"
      % (len(_pop), sum(len(v) for v in _pop.values())))
print("  (this file's own buckets, which exist only to PICK what to render - not a population):")
print("    widening candidates with only callee-saved missing           : %d" % len(widening))
print("    controls whose pops already match their pushes               : %d" % len(identical))
print("    (control) units missing only a VOLATILE push          : %d   %s"
      % (both_kinds["volatile_missing"],
         "counter distinguishes the two kinds" if both_kinds["volatile_missing"]
         else "ZERO - this counter has never seen a volatile case, treat its counts with suspicion"))
print()
print("  DO NOT confuse this with the model-based ladder in lift_clobber_predicate_blindness.py")
print("  (`python lift_clobber_predicate_blindness.py --reconcile` prints L0/L1/L2 with their own")
print("  denominators - no figures are hard-coded here because a stale number in a tool looks")
print("  current). The two answer DIFFERENT questions and the difference is definitional:")
print("    * the ladder asks whether the MODEL knows about the push, and gates on a single `ret`")
print("      plus the generated body both pushing and popping the register - so its L1 excludes the")
print("      multi-exit and tail-call units the classifier already declared unjudgeable;")
print("    * this counter reads the SHIPPED ADAPTER: does it push a callee-saved register and never")
print("      bring it back, in any spelling. It makes no claim about the model and no claim about")
print("      exit count, which is why it is the bigger, and for 'is a register clobbered', the more")
print("      directly observable number. Two definitions of two questions - one definition each.")
widening = widening[:12]
identical = identical[:40]

if not widening:
    sys.exit("REFUSING: no widening candidate found in src/lifted - the population or the "
             "code-level counter is wrong, and a zero here would mean nothing was tested")
if not identical:
    sys.exit("REFUSING: no byte-identical control found - the off-path would be untested")

print("  widening candidates picked : %d  e.g. %s" % (
    len(widening), ", ".join("0x%s(%s)" % (a, ",".join(m)) for a, _, _, m, _ in widening[:3])))
print("  identical controls picked  : %d" % len(identical))

want_addrs = {a for a, _, _, _, _ in widening} | {a for a, _, _ in identical}
records = {}
with io.open(DUMP, encoding="utf-8", errors="replace") as fh:
    for line in fh:
        line = line.strip()
        if not line:
            continue
        try:
            d = json.loads(line)
        except ValueError:
            continue
        a = lift.norm(d.get("addr"))
        if a and a[2:] in want_addrs and a[2:] not in records:
            records[a[2:]] = d
        if len(records) == len(want_addrs):
            break
missing_rec = want_addrs - set(records)
if missing_rec:
    sys.exit("REFUSING: no Ghidra record for %s" % sorted(missing_rec))

ctx = lift.Ctx(DUMP, "12.2")


def render(a, lifo):
    if lifo:
        os.environ["COW_LIFT_EPILOGUE_MATCH_PUSHES"] = "1"
    else:
        os.environ.pop("COW_LIFT_EPILOGUE_MATCH_PUSHES", None)
    import importlib
    importlib.reload(lift)
    ctx = lift.Ctx(DUMP, "12.2")
    ctx.problems = []
    d = records[a]
    ok, why = lift.classify(d)
    if not ok:
        return None, "classify:" + why
    text, why2 = lift.emit(d, ctx)
    return (text, "") if text else (None, "emit:" + why2)


n_wide_ok = n_declined = n_ident_ok = 0
for a, pushes, pops, missing, really in widening:
    off, e1 = render(a, False)
    on, e2 = render(a, True)
    if off is None or on is None:
        fails.append("0x%s refused (%s / %s) - cannot test the emitter on it" % (a, e1, e2))
        print("  skip 0x%s: refused %s / %s" % (a, e1, e2))
        continue
    if "epilogue completed" in off:
        fails.append("0x%s the banner claims a completed epilogue with the knob OFF" % a)
    head = on[on.index("COW_ADAPTER BEGIN"):]
    on_pops = POP_RE.findall(head)
    if off == on:
        # the rule DECLINED (volatile save, an order it cannot reconcile, a register the body
        # already puts back). Declining is allowed; declining for every single unit is not, because
        # then the rule is inert and the check would be decoration.
        n_declined += 1
        print("  ok    0x%s rule declines (pushes %s, pops %s) - off==on" % (a, pushes, pops))
        continue
    want = [r for r in reversed(pushes)
            if not (r == "ebp" and r not in pops
                    and ("/* leave */" in head or "frame pointer yes" in on))]
    gained = [r for r in on_pops if r not in pops]
    if on_pops == want and gained:
        n_wide_ok += 1
        print("  ok    0x%s pops %s -> %s (gained %s)" % (a, pops, on_pops, gained))
    else:
        fails.append("0x%s widened to %s, expected %s" % (a, on_pops, want))
        print("  FAIL  0x%s pops %s -> %s (want %s)" % (a, pops, on_pops, want))
    if PUSH_RE.findall(off[off.index("COW_ADAPTER BEGIN"):]) != PUSH_RE.findall(head):
        fails.append("0x%s the knob changed the PUSHES - it may only add pops" % a)
    if "epilogue completed from the pushes" not in on:
        fails.append("0x%s the epilogue changed but the banner does not say so" % a)

for a, pushes, pops in identical:
    off, e1 = render(a, False)
    on, e2 = render(a, True)
    if off is None or on is None:
        fails.append("0x%s control refused (%s / %s)" % (a, e1, e2))
        print("  skip 0x%s: refused %s / %s" % (a, e1, e2))
        continue
    if off == on:
        n_ident_ok += 1
        print("  ok    0x%s byte-identical off/on (pushes %s)" % (a, pushes))
    else:
        fails.append("0x%s the knob MOVED a unit that needed no widening" % a)
        print("  FAIL  0x%s differs off/on though its pops already matched its pushes" % a)

os.environ.pop("COW_LIFT_EPILOGUE_MATCH_PUSHES", None)
print()
print("  widened correctly : %d / %d" % (n_wide_ok, len(widening)))
print("  identical controls: %d / %d" % (n_ident_ok, len(identical)))
if n_wide_ok == 0:
    fails.append("not one unit widened - the rule cannot be firing")
if n_ident_ok == 0:
    fails.append("not one control stayed identical - the off-path is not inert")

print()
if fails:
    print("RESULT: %d FAILURE(S)" % len(fails))
    for f in fails[:12]:
        print("  - %s" % f)
    sys.exit(1)
print("RESULT: all cases pass (unit + real emitter, knob inert when off)")
