"""How many of the 168 "open clobbers" are false positives of my own predicate?

Reading two of them by eye showed the predicate's blind spots: it asks whether the lifted file
contains a `pop <r>` restore, which assumes the guest has ONE epilogue. Real bodies do not:
  * TAIL-CALL bodies end in `jmp`, not `ret`; their restores belong to the tail path and are handled
    by separate machinery, so the absence of an epilogue pop proves nothing.
  * MULTI-EXIT bodies have a restore per return path; a backwards "epilogue run" can only ever see
    the last one, so other paths' pops look missing.
Counting these is the difference between "147 units clobber callee-saved registers" (a claim about
the lift) and "147 units my predicate cannot yet judge" (a claim about the predicate).

Static. No builds, no cowdiff.
"""
import os
import re
import sys

ROOT = r"D:\Projects\ffxi_disassembly\Cow_kuluu_xi_anything"
GEN = os.path.join(ROOT, "generated", "all")
LIFT = os.path.join(ROOT, "src", "lifted")
FUNC_RE = re.compile(r"^void f_([0-9a-f]{8})\(Guest\* g\)")
REGS = ("esi", "edi", "ebx", "ebp")

idx = {}
for fn in sorted(os.listdir(GEN)):
    if not fn.endswith(".c") or fn == "table.c":
        continue
    p = os.path.join(GEN, fn)
    with open(p, encoding="utf-8", errors="replace") as fh:
        lines = fh.read().splitlines()
    starts = [(i, FUNC_RE.match(l).group(1)) for i, l in enumerate(lines) if FUNC_RE.match(l)]
    for n, (i, a) in enumerate(starts):
        idx.setdefault(a, (p, i, starts[n + 1][0] if n + 1 < len(starts) else len(lines)))
if len(idx) < 15000:
    sys.exit("REFUSING: incomplete index (%d)" % len(idx))


_body_cache = {}


def blines(a):
    """Body lines, memoised. --reconcile hits every unit several times and the generated files are
    tens of MB; without this the same file is read and split once per call."""
    if a in _body_cache:
        return _body_cache[a]
    t = idx.get(a)
    out = []
    if t:
        p, s, e = t
        with open(p, encoding="utf-8", errors="replace") as fh:
            out = fh.read().splitlines()[s:e]
    _body_cache[a] = out
    return out


def classify(a):
    t = "\n".join(blines(a))
    if not t:
        return None
    ours = open(os.path.join(LIFT, "cow_%s.c" % a), encoding="utf-8", errors="replace").read()
    for r in REGS:
        if not (re.search(r"\b%s\s*=\s*" % r, t) or re.search(r":\s*(?:lea|mov)\s+%s\b" % r, t)):
            continue
        if not (re.search(r":\s*push\s+%s\b" % r, t) and re.search(r":\s*pop\s+%s\b" % r, t)):
            continue
        if not re.search(r"g->%s\s*=\s*[^=]" % r, ours):
            continue
        if re.search(r"g->%s\s*=\s*\(uint32_t\)\(v\)" % r, ours) or \
           re.search(r"g->%s\s*=\s*v\b" % r, ours) or \
           re.search(r"/\*\s*pop\s+%s\s*\*/" % r, ours):
            continue
        if re.search(r":\s*pop\s+%s\b.*?:\s*add\s+esp,\s*(?:0x[0-9a-f]+|\d+)\b.*?:\s*ret\b" % r,
                     t, re.S):
            return (a, r, "epilogue-bug")
        return (a, r, "open")
    return None


tw = classify("1015e910")
if not tw or tw[2] != "epilogue-bug":
    sys.exit("REFUSING: by-eye unit classifies as %r" % (tw and tw[2]))

buckets = {}
examples = {}
members = {}
for a in sorted(f[4:12].lower() for f in os.listdir(LIFT)
                if f.startswith("cow_") and f.endswith(".c")):
    c = classify(a)
    if not c or c[2] != "open":
        continue
    a, r, _ = c
    bl = blines(a)
    t = "\n".join(bl)
    rets = len(re.findall(r":\s*ret\b", t))
    has_jmp_tail = bool(re.search(r":\s*jmp\b", t)) and rets == 0
    ours = open(os.path.join(LIFT, "cow_%s.c" % a), encoding="utf-8", errors="replace").read()
    tail_call = "no return (tail call)" in ours

    if tail_call or has_jmp_tail:
        k = "tail-call (restores belong to the tail path) - predicate cannot judge"
    elif rets > 1:
        k = "multi-exit (%d returns) - one epilogue run cannot see them all" % rets
    elif t.count("pop %s" % r) > t.count("push %s" % r):
        k = "pop/push count mismatch for this register - suspect shape, not confirmed clobber"
    else:
        k = "SINGLE-EXIT, clean shape - the credible clobber population"
    buckets[k] = buckets.get(k, 0) + 1
    examples.setdefault(k, []).append("0x%s(%s)" % (a, r))
    members.setdefault(k, []).append((a, r))

print()
print("=" * 72)
print("the 168 'open clobbers', re-classified by whether my predicate can judge them at all")
print("=" * 72)
for k in sorted(buckets, key=lambda x: -buckets[x]):
    print("  %4d  %s" % (buckets[k], k))
    print("         e.g. %s" % ", ".join(examples[k][:4]))
cred = sum(v for k, v in buckets.items() if k.startswith("SINGLE-EXIT"))
print()
print("  credible clobbers after removing classes the predicate cannot judge : %d" % cred)
print("  NOT credible - predicate blind spots                                 : %d" % (168 - cred))
print()
print("Report the first number. The second is a limitation of the tool, and calling those units")
print("clobbers would be exactly the kind of confident-but-unvalidated figure this session has had")
print("to retract twice already.")


# ---------------------------------------------------------------------------------------------
# --class <substring> [--show N]: emit the members of a class, and optionally the verbatim
# comparison needed to judge them. Lives HERE rather than in a throwaway script because a second
# copy of the predicate is how two different numbers for the same population get published - the
# exact failure that inflated "168" when only 66 were credible.
# ---------------------------------------------------------------------------------------------
# THE single definition of "the lift emitted a push the frame model does not know about".
# There must never be a second copy of these regexes. When `--halfmodel` and a hand count disagreed
# (58 vs 74) the cause was two pieces of code deciding separately what "emitted" and "the same
# population" meant. Every count of this shape now comes out of emit_state(), and every population
# comes out of one of the population functions below, so a number can never be quoted without the
# set it was taken over.
EM_NOT_MODELLED = "PUSH EMITTED BUT NOT MODELLED  (esp also wrong; emitter vs frame reader disagree)"
EM_MODELLED_NO_RESTORE = "push emitted and modelled, yet no restore (reader saw it, epilogue dropped it)"
EM_SAVE_DROPPED = "SAVE DROPPED ENTIRELY  (register leaks; esp stays consistent)"
EM_MODELLED_NO_EMIT = "modelled without emission (unexpected - inspect)"

import gen_model as _gm


_ours_cache = {}


def ours_text(a):
    if a not in _ours_cache:
        with open(os.path.join(LIFT, "cow_%s.c" % a), encoding="utf-8", errors="replace") as fh:
            _ours_cache[a] = fh.read()
    return _ours_cache[a]


def restored_in_ours(a, r):
    """Does OUR lift put the value back? This is a DIFFERENT question from whether the model knows
    about the push, and conflating them is how a disagreement count got reported as a clobber count.
    Same three spellings classify() accepts, kept in one place."""
    t = ours_text(a)
    return bool(re.search(r"g->%s\s*=\s*\(uint32_t\)\(v\)" % r, t) or
                re.search(r"g->%s\s*=\s*v\b" % r, t) or
                re.search(r"/\*\s*pop\s+%s\s*\*/" % r, t))


_model_cache = {}


def model_of(a):
    if a not in _model_cache:
        _model_cache[a] = _gm.model_generated(blines(a))
    return _model_cache[a]


def emit_state(a, r):
    """Classify one (unit, register) by what the body emitted vs what the model believes."""
    ours = ours_text(a)
    m = model_of(a)
    emitted = bool(re.search(r"wr32\(g->esp,\s*g->%s\)" % r, ours))
    modelled = r in (m.get("pushes") or [])
    if emitted and not modelled:
        return EM_NOT_MODELLED
    if emitted and modelled:
        return EM_MODELLED_NO_RESTORE
    if not emitted and not modelled:
        return EM_SAVE_DROPPED
    return EM_MODELLED_NO_EMIT


def guest_saves_restores(a, r):
    """Does the GUEST save and restore r? Purely a property of the disassembly, not of our lift."""
    t = "\n".join(blines(a))
    if not t:
        return False
    return (bool(re.search(r"\b%s\s*=" % r, t)) or
            bool(re.search(r":\s*(?:lea|mov)\s+%s\b" % r, t))) and \
           bool(re.search(r":\s*push\s+%s\b" % r, t)) and \
           bool(re.search(r":\s*pop\s+%s\b" % r, t))


def exit_count(a):
    return len(re.findall(r":\s*ret\b", "\n".join(blines(a))))


import json

LEDGER = os.path.join(ROOT, "cow", "lift_proof_all.json")


def _load_ledger():
    # No bare `except` here on purpose. The first version of this swallowed a NameError and handed
    # back an empty dict, so every "booked pass" count printed zero and read like a finding.
    with open(LEDGER, "r", encoding="utf-8", errors="replace") as fh:
        d = json.load(fh)
    if len(d) < 5000:
        sys.exit("REFUSING: ledger has only %d records (%s)" % (len(d), LEDGER))
    return d


_ledger = _load_ledger()
_PROVEN_TRIPWIRE = "10010350"          # booked pass at HEAD, verified by hand
if not bool((_ledger.get(_PROVEN_TRIPWIRE) or {}).get("pass")):
    sys.exit("REFUSING: booked_pass() cannot fire - %s is not pass in %s"
             % (_PROVEN_TRIPWIRE, LEDGER))


def booked_pass(a):
    """What the BOOKKEEPING claims. Not proof - proof is reverify, and this file says so out loud."""
    k = a if a in _ledger else ("0x" + a)
    return bool((_ledger.get(k) or {}).get("pass"))


def split(units):
    """One population -> {bucket: ['0xaddr(reg)', ...]}. THE only place this split is computed."""
    buckets, ex = {}, {}
    for a, r in units:
        k = emit_state(a, r)
        buckets[k] = buckets.get(k, 0) + 1
        ex.setdefault(k, []).append("0x%s(%s)" % (a, r))
    return buckets, ex


def show(cls, n):
    picked = [u for k, us in members.items() if cls.lower() in k.lower() for u in us]
    if not picked:
        sys.exit("no class matches %r; classes are: %s" % (cls, sorted(k[:40] for k in members)))
    print("\n=== class %r : %d members, showing %d ===" % (cls, len(picked), min(n, len(picked))))
    for a, r in picked[:n]:
        bl = blines(a)
        t = "\n".join(bl)
        print("\n### 0x%s  register %s" % (a, r))
        print("  GUEST  save/restore and everything touching %s:" % r)
        for l in bl:
            s = l.strip()
            if re.search(r":\s*(push|pop)\s+%s\b" % r, s) or re.search(r"\b%s\s*=" % r, s):
                print("     %s" % s[:112])
        print("  OURS   every mention of %s, plus the adapter's own frame claim:" % r)
        ours = open(os.path.join(LIFT, "cow_%s.c" % a), encoding="utf-8", errors="replace").read()
        for l in ours.splitlines():
            s = l.strip()
            if re.search(r"\b%s\b" % r, s):
                print("     %s" % s[:120])
            elif "Frame," in s or "Convention:" in s:
                print("     FRAME| %s" % s[:120])
        # what the shipped model actually believes, which is the thing that can lie
        import gen_model
        m = gen_model.model_generated(bl)
        print("  MODEL  pushes=%s  pops=%s  locals=%s  ok=%s"
              % (m.get("pushes"), gen_model.epilogue_pop_run(m.get("ins") or []),
                 m.get("locals"), m.get("ok")))


if "--class" in sys.argv:
    i = sys.argv.index("--class")
    cls = sys.argv[i + 1] if i + 1 < len(sys.argv) else ""
    n = int(sys.argv[sys.argv.index("--show") + 1]) if "--show" in sys.argv else 3
    show(cls, n)


# --reach <class>: strict vs LIFO detection over ONE class only.
# Denominator discipline. The "21 of 168 = 12%" figure quoted for COW_MODEL_EPILOGUE_LIFO divided by
# a population that included tail-call and multi-exit units the predicate cannot judge at all. Reach
# must be quoted against the class the predicate can actually evaluate, or it misstates the fix in
# whichever direction happens to be convenient.
if "--reach" in sys.argv:
    _i = sys.argv.index("--reach")
    _cls = sys.argv[_i + 1] if _i + 1 < len(sys.argv) else "SINGLE-EXIT"
    _picked = [u for _k, _us in members.items() if _cls.lower() in _k.lower() for u in _us]
    if not _picked:
        sys.exit("no class matches %r; classes are %s" % (_cls, sorted(k[:32] for k in members)))
    import gen_model
    import importlib

    def _detect(lifo):
        os.environ.pop("COW_MODEL_EPILOGUE_LIFO", None)
        if lifo:
            os.environ["COW_MODEL_EPILOGUE_LIFO"] = "1"
        importlib.reload(gen_model)
        _hit = 0
        for _a, _r in _picked:
            _m = gen_model.model_generated(blines(_a))
            _ins = _m.get("ins") or []
            if _ins and _r in (gen_model.epilogue_pop_run(_ins) or []):
                _hit += 1
        return _hit

    _s0, _s1 = _detect(False), _detect(True)
    os.environ.pop("COW_MODEL_EPILOGUE_LIFO", None)
    importlib.reload(gen_model)
    print("\n=== reach over class %r (%d units) ===" % (_cls, len(_picked)))
    print("  strict walk detects the pop : %d" % _s0)
    print("  LIFO  walk detects the pop  : %d" % _s1)
    print("  newly covered by LIFO       : %d  (%.0f%% of the class it is quoted against)"
          % (_s1 - _s0, 100.0 * (_s1 - _s0) / max(1, len(_picked))))
    print("\n  Quote reach against the class the predicate can judge - never against all 168.")
# --halfmodel <class>: split the flagged units by WHAT the lift actually emitted.
if "--halfmodel" in sys.argv:
    _i = sys.argv.index("--halfmodel")
    _cls = sys.argv[_i + 1] if _i + 1 < len(sys.argv) else "SINGLE-EXIT"
    _picked = [u for _k, _us in members.items() if _cls.lower() in _k.lower() for u in _us]
    if not _picked:
        sys.exit("no class matches %r" % _cls)
    import gen_model

    _shapes, _ex = split(_picked)

    print("\n=== what the lift actually emitted, class %r (%d units) ===" % (_cls, len(_picked)))
    for _k in sorted(_shapes, key=lambda x: -_shapes[x]):
        print("  %4d  %s" % (_shapes[_k], _k))
        print("         e.g. %s" % ", ".join(_ex[_k][:4]))
    print("\n  These are different defects needing different fixes: the first group breaks esp as")
    print("  well as the register and is the one whose shape matches the cluster signature; the")
    print("  third only leaks a register. Do not hand them to the same change.")


# ---------------------------------------------------------------------------------------------
# --reconcile : the 58-vs-74 question, answered by ONE predicate over TWO NAMED POPULATIONS.
#
#   P1 = the credible clobber class as classified above (register flagged by classify(), which also
#        requires OUR lift to write g-><r> with no recognised restore), then filtered to SINGLE-EXIT.
#   P2 = every lifted unit x every register where the GUEST saves and restores it and the body has
#        exactly one ret - no requirement at all about what our lift did to the register.
#
# P2 is wider by construction: it does not ask whether our lift clobbered the register, only whether
# the push/model pair disagrees. So "58 of 66" and "74 over the whole single-exit population" were
# never contradictory numbers - they were two populations wearing the same name. This mode prints
# both from the same code path plus the containment facts, so nobody has to guess again.
if "--reconcile" in sys.argv:
    _p1 = [u for _k, _us in members.items() if _k.startswith("SINGLE-EXIT") for u in _us]
    _p1set = set(_p1)

    _p2 = []
    for a in sorted(f[4:12].lower() for f in os.listdir(LIFT)
                    if f.startswith("cow_") and f.endswith(".c")):
        if exit_count(a) != 1:
            continue
        for r in REGS:
            if guest_saves_restores(a, r):
                _p2.append((a, r))

    b1, e1 = split(_p1)
    b2, e2 = split(_p2)
    n1 = b1.get(EM_NOT_MODELLED, 0)
    n2 = b2.get(EM_NOT_MODELLED, 0)

    set2 = set()
    for _k, _v in e2.items():
        for s in _v:
            set2.add((s.split("(")[0][2:], s.split("(")[1][:-1]))
    inter = _p1set & set2
    only1 = [u for u in _p1 if emit_state(*u) == EM_NOT_MODELLED and u not in set2]

    print()
    print("=" * 72)
    print("ONE predicate (emit_state), TWO populations - reconciling 58 against 74")
    print("=" * 72)
    print("  P1  credible classified clobbers, single-exit      : %d units" % len(_p1))
    print("      -> push emitted but not modelled               : %d" % n1)
    print("  P2  guest-saved-and-restored, single ret, whole lift: %d (unit,reg) pairs" % len(_p2))
    print("      -> push emitted but not modelled               : %d" % n2)
    print()
    print("  P1 members also in the P2 emitted-not-modelled set  : %d" % len(inter))
    print("  P1 emitted-not-modelled NOT in P2 (predicate gap)   : %d  %s"
          % (len(only1), ["0x%s(%s)" % u for u in only1[:6]]))
    print()
    # LADDER. Each level adds ONE test and prints its own denominator. Never quote a level
    # without naming it - "439" and "18" are both true of different questions.
    print("  LADDER over P2 (each level adds one test):")
    _hits = [(a, r) for (a, r) in _p2 if emit_state(a, r) == EM_NOT_MODELLED]
    print("    L0 emitter/reader DISAGREE about the push : %4d pairs / %3d units"
          % (len(_hits), len({a for a, _ in _hits})))
    # both-way control: a filter that answers only one way has not been shown to judge anything
    _yes = sum(1 for (a, r) in _hits if restored_in_ours(a, r))
    if _yes == 0 or _yes == len(_hits):
        sys.exit("REFUSING: restored_in_ours() answers %d/%d - it cannot be judging anything"
                 % (_yes, len(_hits)))
    _clob = [(a, r) for (a, r) in _hits if not restored_in_ours(a, r)]
    print("    L1  AND our lift never restores it        : %4d pairs / %3d units   <- the clobbers"
          % (len(_clob), len({a for a, _ in _clob})))
    _pass2 = sorted({a for a, _ in _clob if booked_pass(a)})
    print("    L2  AND the ledger still says pass        : %4d            / %3d units   <- false greens"
          % (len([1 for a, _ in _clob if booked_pass(a)]), len(_pass2)))
    print("         e.g. %s" % ", ".join("0x%s" % a for a in _pass2[:8]))
    _pass1 = [u for u in _p1 if emit_state(*u) == EM_NOT_MODELLED and booked_pass(u[0])]
    print()
    print("  Same ladder inside P1 (the classified clobber class):")
    print("    L0 disagreement : %d of %d" % (n1, len(_p1)))
    print("    L1 clobber      : %d" % len([u for u in _p1
                                           if emit_state(*u) == EM_NOT_MODELLED
                                           and not restored_in_ours(*u)]))
    print("    L2 booked pass  : %d  %s" % (len(_pass1),
                                            ["0x%s(%s)" % u for u in _pass1[:6]]))
    print()
    print("  The L2 column is BOOKKEEPING, not proof - reverify is proof. Quote L1 as the defect")
    print("  population and L0 only as the disagreement population; the two differ because a")
    print("  disagreement can be harmless when the restore is written some other way.")


# ---------------------------------------------------------------------------------------------
# --spellings : what does "restored" even look like in our output?
# Before ANY count of "units that never restore the register" is believed, the recognised-spelling
# list has to be shown to cover the vocabulary the generator actually uses. A counter that cannot
# see a form reports it as an absence - the dead-predicate failure in reverse.
if "--spellings" in sys.argv:
    _cls = sys.argv[sys.argv.index("--spellings") + 1] if len(sys.argv) > 2 else "SINGLE-EXIT"
    _picked = [u for _k, _us in members.items() if _cls.lower() in _k.lower() for u in _us]
    if not _picked:
        sys.exit("no class matches %r" % _cls)
    _forms, _ex, _raw = {}, {}, {}
    for a, r in _picked:
        if emit_state(a, r) != EM_NOT_MODELLED:
            continue
        for l in ours_text(a).splitlines():
            s = l.strip()
            if not re.search(r"g->%s\s*=[^=]" % r, s):
                continue
            n = re.sub(r"\b0x[0-9a-f]+\b", "N", s)
            n = re.sub(r"\b\d+[uU]?\b", "N", n)
            n = n.replace(r, "<r>")
            _forms[n] = _forms.get(n, 0) + 1
            _ex.setdefault(n, []).append("0x%s" % a)
            _raw.setdefault(n, s)          # un-normalised sample, so recognition stays honest
    print("\n=== distinct 'g-><r> =' line shapes, disagreement population (class %r) ===" % _cls)
    if not _forms:
        sys.exit("REFUSING: no 'g-><r> =' lines at all - the population or the filter is wrong")
    for k in sorted(_forms, key=lambda x: -_forms[x]):
        s = _raw[k]
        recognised = ("RESTORE" if (re.search(r"=\s*\(uint32_t\)\(v\)", s) or
                                    re.search(r"=\s*v\b", s) or
                                    re.search(r"/\*\s*pop\s+", s)) else "???????")
        print("  %s  %4d  %s" % (recognised, _forms[k], k[:104]))
        print("           e.g. %s" % ", ".join(_ex[k][:3]))
    print("\n  If a '???????' shape is plainly a restore, restored_in_ours() is blind and every")
    print("  clobber count above it is inflated. Fix the spelling list before sizing any change.")
