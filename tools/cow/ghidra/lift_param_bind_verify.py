"""Verify the dumped bodies: the bitwise-AND units must NOT be bound, the address-of units must be.

This is the can-fire / cannot-fire pair for the binding, checked on the artefact that actually came out of
emit() rather than on a histogram. Two questions, both answered from files:

  * f_10221320 (`... & param_2`, bitwise AND only) lifted - and must contain NO `bound: the guest slot`,
    because binding it was the regression the shared rule exists to stop;
  * at least one unit lifted WITH a bound parameter, and in that file no `&param_` may survive (the
    substitution must be complete), while the adapter must show the slot arithmetic.
"""
import io
import os
import re
import sys

def _root(start):
    # Walk up to the repo instead of hard-coding a depth: `os.path.join(HERE, "..", "..")` copied from a
    # file at a different level has been the cause of TWO broken tools today, and a marker check cannot be
    # off by one.
    d = start
    for _ in range(8):
        if os.path.isfile(os.path.join(d, "tools", "cow", "commit.py")):
            return d
        d = os.path.dirname(d)
    sys.exit("REFUSING: could not find the repo root above %s." % start)


ROOT = _root(os.path.dirname(os.path.abspath(__file__)))
DIR = os.path.join(ROOT, "build", "scratch", "parambind")

if not os.path.isdir(DIR):
    sys.exit("REFUSING: %s does not exist - run the dump first, do not assert from memory." % DIR)
files = [f for f in os.listdir(DIR) if f.endswith(".c")]
if not files:
    sys.exit("REFUSING: no dumped bodies in %s." % DIR)

MARK = "bound: the guest slot"
bad = []

n21320 = os.path.join(DIR, "cow_10221320.c")
if os.path.isfile(n21320):
    with io.open(n21320, encoding="utf-8", errors="replace") as fh:
        t = fh.read()
    if MARK in t:
        bad.append("f_10221320 (`... & param_2`, a BITWISE AND) is BOUND - the shared rule is not being"
                   " used by the binding block.")
    else:
        print("ok    f_10221320 lifted with NO binding (bitwise AND respected)")
else:
    bad.append("f_10221320.c is not in the dump - it was expected to lift with the gate fixed.")

bound_files, surviving = [], []
# Import the ONE rule rather than pattern-matching `&param_` locally: a surviving `rd32(X) & param_1` is a
# bitwise AND and perfectly correct (f_101d2260 has exactly that, next to a genuinely bound param_2), so a
# verifier that greps for `&param_` would fail a good artefact - the same context error, one level down.
sys.path.insert(0, os.path.join(ROOT, "tools", "cow", "ghidra"))
import ghidra_c                                        # noqa: E402

for f in files:
    with io.open(os.path.join(DIR, f), encoding="utf-8", errors="replace") as fh:
        t = fh.read()
    if MARK in t:
        bound_files.append(f)
        for tok, _ctx in ghidra_c.address_of_names(t):
            if tok.startswith("param_"):
                surviving.append((f, "&" + tok))
        if not re.search(r"sp0 \+ 4u \+ 0x[0-9a-f]+u", t):
            bad.append("%s claims a bound parameter but has no slot arithmetic" % f)

print("ok    %d of %d dumped bodies carry a bound parameter" % (len(bound_files), len(files)))
if surviving:
    bad.append("%d `&param_` occurrence(s) survived the substitution: %s"
               % (len(surviving), surviving[:4]))
if not bound_files:
    bad.append("NOTHING is bound - the binding mechanism is not firing, so the '33 newly liftable' figure"
               " cannot be about binding at all.")

for b in bad:
    print("FAIL  %s" % b)
print("RESULT: %s" % ("binding verified on the emitted artefacts" if not bad
                      else "%d problem(s) - do not quote the pricing" % len(bad)))
sys.exit(1 if bad else 0)
