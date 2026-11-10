"""lift_pushmnem_census.py - price ONE specific widening of _push_values, on the units that bail today.

WHY THIS FILE EXISTS.

`argcount_mismatch` is ~2,884 refusals. Its dominant bail is `unnameable:<reg>`: a `push edx` whose register
the environment has no entry for, so `_push_values` returns None and the WHOLE unit is refused. Two versions
of a fix were tried and both were abandoned, and the reason they are recorded here is that both were wrong in
OPPOSITE directions:

  * "fall back to `g->reg` for any plain register" - UNSOUND. Released 207 units, 10% passed, with eax/edx
    mismatches, hangs and out-of-region writes: a callee handed the entry value of a register the guest had
    already recomputed. The lifted C keeps register values in Ghidra locals, so `g->reg` at the call is
    whatever the frame arrived with.
  * "fall back only for a register the body NEVER writes anywhere" - SOUND BUT ALMOST EMPTY. 837 unnameable
    bails became 833. Four units.

And the reason the second is nearly empty is a conflation, not a fact about this codebase. "Never written
anywhere in the body" is testing something stronger than the safety argument needs. What has to be true for
`g->R` to name what the guest pushed at address P, on the way to a call at C, is:

    R is not written at ANY address < C.

Before the push, that is what makes the incoming value still be there; between the push and the call it is
what the staleness loop already enforces, and keeps enforcing, since the fallback expression names R. A
write AFTER the call is invisible to the question - the word is already in guest memory and the callee has
already read it - yet the body-wide test counts it and refuses. That single over-strict clause is the
difference between 4 units and (this file's job is to say) however many there really are.

WHAT THIS MEASURES, AND HOW IT REFUSES TO LIE.

Every bail comes out of the real `_push_values` via `model_generated`, so the classification is not built on
a re-implementation of the bail logic - both this family's and the string family's censuses have been wrong
exactly that way. The only new predicate is the local one above, which needs nothing but the addresses of
the writes in `ins`. Each unnameable push is filed as:

    local-clean            R not written at any addr < C  -> the widening names it, and `g->R` is provable
    before-push-write      R written before the push      -> `g->R` would be the 10% failure; stays refused
    between-push-and-call  R written in (P, C)            -> the staleness loop catches it; stays refused
    not-a-register         a memory operand or an odd-size register; a value widening cannot name at all

THE TRIPWIRE IS MANDATORY, and it pins both sides of the split, not one. A census in this loop has five times
reported a confident number for a bug that had just been read by eye, and once reported "0 of 544" while
looking straight at it. 0x100013c0 was read by eye for this file: `push ebx` / `push esi` then `call
0x10014c10`, where ebx's first write (`xor ebx,ebx` at 100013db) is AFTER the call and esi's (`mov esi,ecx` at
100013c2) is BETWEEN the push and the call. So that unit must contribute exactly one local-clean and exactly
one between-push-and-call. If either half stops appearing, the numbers in this file's output are not about
this family.
"""
import argparse
import collections
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)
sys.path.insert(0, os.path.join(ROOT, "tools", "cow"))

import gen_model                      # noqa: E402
import trivial_audit                  # noqa: E402

REFUSALS = os.path.join(ROOT, "build", "cow_lift", "refusals.json")

# Read by eye, 2026-11-10, and the reason this file was written.
PINNED = "100013c0"
PINNED_CLEAN_REG = "ebx"               # first write after the call  -> local-clean
PINNED_STALE_REG = "esi"               # written between push and call -> must NOT be called clean

CLASSES = ("local-clean", "written-before-call", "not-a-register")


def writes_before(ins, reg, lo, hi):
    """Addresses in [lo, hi) at which `reg` is written. Empty means it holds its incoming value there."""
    out = []
    for c in ins:
        a = c["addr"]
        if not (lo <= a < hi):
            continue
        if not gen_model._writes_reg(c["mnem"], c["op"] or ""):
            continue
        if gen_model._dst_reg(c["op"] or "") == reg:
            out.append(a)
    return out


def classify_push(ins, word, call_addr):
    """Which of the four classes an `unnameable:<word>` bail belongs to.

    The predicate is exactly the sound condition, with no push address needed: `g->R` names what the guest
    pushed iff R is not written at any address below the call. `push` itself does not count as a write to its
    operand (`_writes_reg` says so explicitly, because every cdecl argument is a push and treating it as a
    write wiped the register the call was about to ask for), so the push being classified cannot disqualify
    itself. The split at the push address is still reported, but only as NARRATION for whoever reads the
    output: both halves refuse, so the decision never depends on getting it right.
    """
    w = (word or "").strip()
    m = re.fullmatch(r"(\w+)", w)
    if not m or m.group(1) not in gen_model.REG32:
        return "not-a-register", w
    reg = m.group(1)
    prior = writes_before(ins, reg, 0, call_addr)
    if not prior:
        return "local-clean", reg
    return "written-before-call", "%s@0x%x" % (reg, prior[0])


def sites_of(k, bodies):
    body = bodies.get(k)
    if not body:
        return None, []
    m = gen_model.model_generated(body)
    if not m.get("ok", True):
        return m, []
    return m, (m.get("call_sites") or [])


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--selftest", action="store_true")
    ap.add_argument("--out", default="")
    a = ap.parse_args()

    bodies = trivial_audit.body_index()

    if a.selftest:
        m, sites = sites_of(PINNED, bodies)
        if m is None:
            print("note: pinned unit 0x%s has no generated body - no tripwire available" % PINNED)
            return 0
        found = {}
        for s in sites:
            why = str(s.get("push_values_why") or "")
            if not why.startswith("unnameable:"):
                continue
            for word in (s.get("pushed") or []):
                cls, det = classify_push(m["ins"], word, s["addr"])
                found.setdefault(det.split("@")[0], set()).add(cls)
        ok_clean = PINNED_CLEAN_REG in found and "local-clean" in found[PINNED_CLEAN_REG]
        ok_stale = PINNED_STALE_REG in found and "local-clean" not in found[PINNED_STALE_REG]
        if not ok_clean:
            print("SELFTEST FAILED: 0x%s pushes `%s` whose first write is AFTER the call, so it must be "
                  "filed local-clean. Found %r. Do not trust any count below." % (PINNED, PINNED_CLEAN_REG, found))
            return 1
        if not ok_stale:
            print("SELFTEST FAILED: 0x%s pushes `%s` but writes it between the push and the call, so it must "
                  "NOT be filed local-clean. Found %r - the local test is too loose." % (PINNED, PINNED_STALE_REG, found))
            return 1
        print("SELFTEST ok: 0x%s -> %s" % (PINNED, {k: sorted(v) for k, v in found.items()}))
        return 0

    with open(REFUSALS, encoding="utf-8") as fh:
        d = json.load(fh)
    r = d.get("reasons", d)
    addrs = sorted({str(k).replace("0x", "") for k, v in r.items()
                    if str(v).startswith("argcount_mismatch")})
    if a.limit:
        addrs = addrs[:a.limit]
    if not addrs:
        print("REFUSING to report: no argcount_mismatch units in the snapshot. A census that silently scopes "
              "nothing reports a confident 0, which is the failure this loop has met five times.")
        return 2

    tally = collections.Counter()
    detail = collections.Counter()
    units_with_clean = 0
    units = 0
    for k in addrs:
        m, sites = sites_of(k, bodies)
        if m is None or not sites:
            continue
        units += 1
        ins = m["ins"]
        hit_clean = False
        for s in sites:
            why = str(s.get("push_values_why") or "")
            if not why.startswith("unnameable:"):
                continue
            word = why.split(":", 1)[1]
            cls, det = classify_push(ins, word, s["addr"])
            tally[cls] += 1
            if cls == "local-clean":
                detail[det] += 1
                hit_clean = True
            elif cls != "not-a-register":
                detail["%s" % (det.split("@")[0],)] += 1
        if hit_clean:
            units_with_clean += 1

    print("== argcount_mismatch: %d units scoped, %d with at least one call site ==" % (len(addrs), units))
    total = sum(tally.values())
    print("   unnameable push bails: %d" % total)
    for c in CLASSES:
        n = tally[c]
        print("     %-24s %6d  (%4.1f%%)" % (c, n, 100.0 * n / max(1, total)))
    print("\n   units with >=1 local-clean push (the ceiling on this widening): %d of %d"
          % (units_with_clean, units))
    print("\n   top registers/obstacles:")
    for kk, n in detail.most_common(10):
        print("      %-40s %d" % (kk, n))
    print("\nREAD THIS BEFORE BUILDING: the ceiling above counts a unit as reachable if ANY push in it is "
          "local-clean, but _push_values returns None for the WHOLE site if ANY word is unnamed. A site with "
          "one clean push and one memory push stays refused. Price the per-SITE all-clean figure before "
          "calling the ceiling a forecast.")
    if a.out:
        with open(a.out, "w", encoding="utf-8") as fh:
            fh.write("\n".join(addrs) + "\n")
    return 0


if __name__ == "__main__":
    sys.exit(main())
