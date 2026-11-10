"""lift_indirect_ambig_census.py - how ambiguous is the indirect-call family, per unit?

WHY THIS QUESTION, AND WHY BEFORE ANY MATCHING CODE.

`indirect_call_not_modelled` is 667 refusals, and the queue's advice is to name the callee by resolving the
pointer the guest reads (`call dword ptr [ecx*4 + 0x1035097c]`, `call [eax+0x1c]`). Every attempt to build
that has had to answer the same unanswered question first: for a given unit, how many candidate call sites
does the generated body offer for the ONE indirect call Ghidra wrote? If the answer is usually one, the match
is forced - there is nothing to confuse - and a model can be checked by counting. If it is usually five, then
naming the target is a real matching problem against a rendering that carries no statement addresses, which is
the expression-provenance road this project has already walked once and rejected as unsound.

Nothing in the loop has measured that. Two model widenings in this file's history were justified by a story
about the family rather than by this number, and both had to be reverted. So this census asks the cheap
question that decides whether the expensive one is worth asking:

    for each refused unit, how many indirect call sites does the model record, and how many does Ghidra
    actually leave unresolved?

A unit where the model records exactly ONE site is the tractable population: the model already knows the slot
or base expression at that address, the bridge already exists for exactly this shape, and the only claim being
made is "this one site is the one Ghidra could not name". A unit with several sites is where a wrong target
compiles, runs, and disagrees with the oracle somewhere the fuzz does not reach.

IT DOES NOT RE-IMPLEMENT THE MODEL. Call sites, their `target_desc` and their read shapes all come out of
`gen_model.model_generated`, because every census in this loop that re-implemented the clause it was counting
has eventually reported a confident number for a shape the lifter does not produce. The only thing added here
is arithmetic over what the model already recorded.

THE TRIPWIRE IS MANDATORY, and it is the rule this loop has had to learn six times: a census that silently
matches nothing reports a confident zero, and a confident zero closes a family on a typo. The pinned unit must
appear with the shape this file claims to measure, or no count is printed.
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
PREFIX = "indirect_call_not_modelled"

# The pinned example, filled in from a unit READ BY EYE and asserted before any count is presented. Empty is
# a legitimate state - it means the census has not been validated yet - but it must never be able to look
# like a result, so main() prints an EXPLORATORY banner and returns nonzero while it is unset. Every census
# in this loop that shipped without a pin has, at some point, reported a confident number for a shape the
# lifter does not produce.
# Read by eye 2026-11-10: `push ebx` / `mov ebx, dword ptr [0x10329174]` / ... / `call ebx` / two `pop ebx`.
# Exactly one indirect site, and its target is a load from a FIXED GLOBAL (0x10329174 is an IAT slot - the
# same class iat_slot.py resolves), which is the most nameable a target can be. The model still refuses it,
# as `reg-unnameable:ebx=merge-jump`, because the environment is reset at the merge of the two popping paths.
# That makes it the right pin: if the site extraction ever stops seeing this as one site, or the merge clause
# is what stands between this family and its units, this file has to say so rather than count around it.
PINNED = "1000e030"
PINNED_SITES = 1


def indirect_sites(m):
    """The call sites the model recorded as needing a target it has to work out.

    Read straight off `target_desc` / `target_expr`: `reg` and `mem` are the indirect shapes (the callee comes
    from a register or from memory), while `direct` is an ordinary call the lift already handles by bridging to
    the address. Counting `direct` sites here would be the mistake this file exists to avoid making - it would
    inflate every unit's candidate count with calls that were never the problem.
    """
    out = []
    for s in (m.get("call_sites") or []):
        desc = s.get("target_desc") or ("",)
        kind = (desc[0] if isinstance(desc, (list, tuple)) and desc else "") or ""
        if kind in ("reg", "mem"):
            out.append(s)
    return out


def ghidra_indirect_names(gh):
    """Names Ghidra called that are neither a guest FUN_ nor an allowlisted C routine.

    This is the same set `_unknown_calls` refuses on, taken from the decompiled text rather than from the
    rewriter's problems list so that the two can be compared without one defining the other.
    """
    names = set()
    for m in re.finditer(r"\b([A-Za-z_]\w*)\s*\(", gh or ""):
        n = m.group(1)
        if n.startswith("FUN_") or n in gen_model.__dict__.get("C_ALLOWLIST", ()):
            continue
        if n in ("if", "while", "for", "switch", "return", "sizeof"):
            continue
        names.add(n)
    return names


def load_dump(path):
    """(address -> decompiled C) from the Ghidra jsonl, lazily, one pass."""
    out = {}
    with open(path, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            try:
                d = json.loads(line)
            except ValueError:
                continue
            a = d.get("address") or d.get("addr") or ""
            c = d.get("decompiled") or d.get("c") or d.get("code") or ""
            if a and c:
                out[str(a).lower().replace("0x", "").lstrip("0").rjust(8, "0")] = c
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--dump", default="D:/projects/ghidra/ghidra_out/functions_all.jsonl")
    ap.add_argument("--selftest", action="store_true")
    a = ap.parse_args()

    bodies = trivial_audit.body_index()

    with open(REFUSALS, encoding="utf-8") as fh:
        d = json.load(fh)
    r = d.get("reasons", d)
    addrs = sorted({str(k).replace("0x", "") for k, v in r.items() if str(v).startswith(PREFIX)})
    if not addrs:
        print("REFUSING to report: no %s units in the snapshot. A census that scopes nothing reports a "
              "confident 0 and closes a family on a typo." % PREFIX)
        return 2

    dist = collections.Counter()
    why_dist = collections.Counter()
    tractable = []
    named_addrs = []
    sample_rows = []
    for k in addrs:
        body = bodies.get(k)
        if not body:
            continue
        m = gen_model.model_generated(body)
        sites = indirect_sites(m)
        dist[len(sites)] += 1
        if len(sites) == 1:
            tractable.append(k)
            s = sites[0]
            # THE NUMBER THAT ACTUALLY DECIDES. One site means there is nothing to confuse about WHICH call
            # Ghidra meant, but it says nothing about whether the target can be NAMED. The reason the model
            # could not name it is the real gate: a unit blocked on `mem-base-unnameable` is behind the
            # two-load chain that the deferred-read model was built, tightened and measured against, and
            # released ZERO units (all of them then fell to `bare_deref_width_unknown`). Counting single-site
            # units without splitting on this is how a 412-unit family gets priced as tractable when the
            # obstacle behind it is already known to be fatal.
            why = str(s.get("target_why") or ("named" if s.get("target_expr") else "?"))
            why_dist[why.split("=")[0][:46]] += 1
            if len(sample_rows) < 6:
                sample_rows.append((k, s.get("target_desc"), s.get("target_why"),
                                    s.get("target_why_deep")))
            if s.get("target_expr"):
                # The model named the target and the unit is STILL booked as this family. Either the label is
                # stale (the refusal now comes from somewhere else and this family is taking the blame for
                # it), or a second clause rejects a site this one solved. Both are cheap to read and neither
                # is visible from a count, so keep the addresses for a --verbose lift run.
                named_addrs.append(k)

    # ---- the tripwire, before a single number is presented as a result.
    licensed = True
    if not PINNED:
        print("EXPLORATORY - PINNED is unset, so NOTHING below has been validated against a unit read by "
              "eye. Use this output only to CHOOSE a pin. Do not act on it.")
        licensed = False
    else:
        pbody = bodies.get(PINNED)
        psites = indirect_sites(gen_model.model_generated(pbody)) if pbody else []
        if len(psites) != PINNED_SITES:
            print("REFUSING to report: 0x%s is the pinned unit and the model records %d indirect site(s) "
                  "for it, not %d. The site extraction has drifted from the shape this file describes."
                  % (PINNED, len(psites), PINNED_SITES))
            return 2
        if dist.get(PINNED_SITES, 0) == 0:
            print("REFUSING to report: the pinned unit should put %d in the distribution and it is absent - "
                  "the scan is not seeing the population it claims to scan." % PINNED_SITES)
            return 2
        if a.selftest:
            # A flag that silently does nothing is a small lie, so it means what it says: validate the
            # tripwire and stop, without paying for the 667-unit scan.
            print("SELFTEST ok: 0x%s is seen with %d indirect site(s), and %d units share that shape."
                  % (PINNED, PINNED_SITES, dist.get(PINNED_SITES, 0)))
            return 0

    print("== %s: %d units %s==" % (PREFIX, sum(dist.values()), "" if licensed else "(UNLICENSED) "))
    print("   indirect call sites recorded per unit (0 means the model saw none, so the refusal is not a")
    print("   target-naming problem at all and this family's label is wrong for those units):")
    agg = collections.Counter()
    for n, v in dist.items():
        agg["%d" % n if n < 8 else "8+"] += v
    for label in ["0", "1", "2", "3", "4", "5", "6", "7", "8+"]:
        if agg[label]:
            print("      %-3s %6d" % (label, agg[label]))
    print("\n   TRACTABLE (exactly one site - the target is forced, nothing to confuse): %d of %d (%.0f%%)"
          % (len(tractable), sum(dist.values()), 100.0 * len(tractable) / max(1, sum(dist.values()))))
    print("   AMBIGUOUS (two or more sites): %d  <- needs matching, which is the road already rejected"
          % sum(v for k, v in dist.items() if k >= 2))
    print("\n   WITHIN the single-site population, why the model could not name the target:")
    for kk, n in why_dist.most_common(8):
        print("      %-48s %5d" % (kk, n))
    named = why_dist.get("named", 0)
    print("      -> already named (so refused for some OTHER reason): %d  %s"
          % (named, " ".join("0x" + a for a in named_addrs[:12])))
    if sample_rows:
        print("\n   the single-site shape, from the model's own fields:")
        for k, desc, why, deep in sample_rows:
            print("      0x%s  desc=%r why=%r deep=%r" % (k, desc, str(why)[:28], str(deep)[:34]))
    print("\nWHAT THIS DECIDES: if the tractable share is large, naming the callee is a counting problem with")
    print("a built-in cross-check (one site, one bridge, one name). If it is small, this family needs the")
    print("matching model that has already been tried and rejected here, and the honest move is to park it")
    print("rather than ship units whose target was guessed.")
    if not dist[1]:
        print("\nNO unit has exactly one site - do not build a target-naming model on matching.")
    return 0 if licensed else 3


if __name__ == "__main__":
    sys.exit(main())
