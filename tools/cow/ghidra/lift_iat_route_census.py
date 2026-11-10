"""Price the name->IAT-slot route for `calls_unknown_symbol`, before anyone builds it.

THE FINDING THIS MEASURES, AND THE WRONG TURN IT CLOSES.

The queue says this family is "lift: name the external in addresses.h and bridge it". That is wrong in a way
that would have shipped a silent divergence: the generated bodies contain NO reference to EnterCriticalSection,
CloseHandle, operator_new or any of the other 151 names (checked - zero occurrences across generated/all).
The guest reaches these through an IAT slot, so side B performs `call dword ptr [0x1032918c]` ->
`rt_call_indirect(g, t)`, while Ghidra resolved the slot and printed the API NAME. Admitting the name to
`C_ALLOWLIST` would make side A call the host shim directly, bypassing the thunk side B goes through, and
cowdiff's oracle would no longer be the oracle. The lift has to reproduce the INDIRECT CALL, not the symbol.

SO THE QUESTION WORTH PRICING is not "can we name it" but "can we find the slot". The generated body already
spells the slot, and `iat_slot.py` resolves a slot back to a name by reading the slot's own hint/name record
(the PE import directory does not index these - verified on 0x1032918c, which resolves to
EnterCriticalSection only via its contents). So a call is matchable when the generated body has
`call/jmp dword ptr [S]` whose resolved name equals the symbol Ghidra printed - a name that appears on BOTH
sides, which is the same cross-check discipline `_target_expr` uses against `target_desc`, not a positional
guess.

This tool answers the cheap half of that: how many refused units even HAVE a memory-indirect call site that
could carry the slot. A unit with none cannot be reached by this route at all, whatever the name is, and
finding that out before building is the whole point - the deferred-load emitter in this loop was built for a
family that turned out to have zero such units.

It does NOT resolve names: that needs the image and is the next step only if the ceiling here is large
enough to pay for it.
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

# `call dword ptr [0x1032918c]` / the same as a tail `jmp`. An indirect call through a REGISTER (`call ebp`)
# is deliberately not this shape: it carries no slot, so nothing can name it, and counting it here would
# inflate the ceiling with units the route cannot reach.
#
# MATCHED AGAINST WHITESPACE-STRIPPED TEXT, WHICH IS THE ENTIRE REASON THIS FILE HAS A TRIPWIRE. The
# instruction's `text` field keeps the assembler's spacing (`call dword ptr [0x...]`) while `op` and `stmt`
# are normalised to `dwordptr[...]`. The first version of this regex was written against the normalised
# spelling and applied to `text`, so it matched NOTHING and confidently reported "0 of 791 units have a
# slot - build nothing here", which would have closed a 791-unit family on a typo. It was caught because the
# pinned unit had been read by eye minutes earlier and visibly contained the call. This is the sixth time
# this loop has met a silently-empty detector; the fix is not to be careful, it is to never print a number
# the tripwire has not licensed.
def slot_of(c):
    """The IAT slot a call/jmp goes through, or None if it is not that shape."""
    if c["mnem"] not in ("call", "jmp"):
        return None
    t = re.sub(r"\s+", "", c["text"] or "")
    m = re.fullmatch(r"(?:call|jmp)dwordptr\[(0x[0-9a-fA-F]{1,8})\]", t)
    return m.group(1).lower() if m else None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--selftest", action="store_true")
    a = ap.parse_args()

    bodies = trivial_audit.body_index()

    # The tripwire is the unit this was read from: 0x1000ff70, refused for EnterCriticalSection, whose
    # generated body performs `call dword ptr [0x1032918c]` at 1000ff7c and 1000ff9f. If the scan stops
    # seeing those two slots, every number below is fiction.
    pin = "1000ff70"
    ins = gen_model.parse_instructions(bodies.get(pin) or [])
    pin_slots = sorted("0x%x" % c["addr"] for c in ins if slot_of(c))
    if a.selftest:
        found = set()
        for c in ins:
            s = slot_of(c)
            if s:
                found.add(s)
        if {"0x1032918c", "0x10329188"} - found:
            print("SELFTEST FAILED: 0x%s is the unit this was READ from and the slot scan does not find its "
                  "two IAT calls (saw %r). Do not trust any count." % (pin, sorted(found)))
            return 1
        print("SELFTEST ok: 0x%s -> %r at %s" % (pin, sorted(found), pin_slots))
        return 0

    with open(REFUSALS, encoding="utf-8") as fh:
        d = json.load(fh)
    r = d.get("reasons", d)
    fam = collections.defaultdict(list)
    for k, v in r.items():
        s = str(v)
        if s.startswith("calls_unknown_symbol_"):
            fam[s[len("calls_unknown_symbol_"):]].append(str(k).replace("0x", ""))

    all_addrs = {x for v in fam.values() for x in v}
    have_slot, no_slot = set(), set()
    slots_seen = {}
    for k in all_addrs:
        body = bodies.get(k)
        if not body:
            continue
        ins = gen_model.parse_instructions(body)
        found = set()
        for c in ins:
            s = slot_of(c)
            if s:
                found.add(s)
        if found:
            have_slot.add(k)
            slots_seen[k] = found
        else:
            no_slot.add(k)

    print("== calls_unknown_symbol: %d units, %d distinct names ==" % (len(all_addrs), len(fam)))
    print("   have a `call/jmp dword ptr [slot]` the route could match : %d" % len(have_slot))
    print("   have NONE (direct call, or a register-indirect one)      : %d  <- unreachable this way" % len(no_slot))
    print("\n   top names, with how many of their units have a slot at all:")
    rows = []
    for name, lst in fam.items():
        rows.append((len(lst), name, sum(1 for x in lst if x in have_slot)))
    for tot, name, w in sorted(rows, reverse=True)[:14]:
        print("      %-26s %4d   slot-bearing %4d" % (name, tot, w))
    print("\nCEILING, NOT A FORECAST: a slot must additionally resolve to the SAME name Ghidra printed, the")
    print("counts on the two sides must agree, and the site still has to be renderable by the indirect-call")
    print("machinery (667 units of which are refused today). Read this as the upper bound on a name->slot")
    print("route, and as the answer to the queue's 'just bridge it' advice, which is wrong.")
    if no_slot and not have_slot:
        print("\nREFUSING to encourage this route: NO unit has a slot. Build nothing here.")
        return 2
    return 0


if __name__ == "__main__":
    sys.exit(main())
