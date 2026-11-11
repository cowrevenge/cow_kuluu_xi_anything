"""Recompute every bound local's slot address from the guest's own instructions.

Why this exists next to the pricing tool: the binding decides the slot with gen_model.frame_leas(). Asking
that same helper what it decided, and checking the file agrees with it, proves only that the code is
self-consistent. Here the arithmetic is redone from the disassembly - walk the prefix, track esp from sp0,
take each `lea reg,[esp+disp]`, add the displacement - and the emitted adapter's
`slot_<name> = (CowU32)(sp0 +- 0xN)` is required to name one of the addresses the GUEST computed.

A slot that is not an address the guest wrote is a wrong witness, and a wrong witness is memory corruption
that cowdiff only notices if some exercised state happens to read that word.

  python tools/cow/ghidra/lift_slot_witness_check.py            # the units in localbind-compiled.txt
"""
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
for _p in (HERE, os.path.join(ROOT, "tools", "cow"), os.path.join(ROOT, "tools")):
    if _p not in sys.path:
        sys.path.insert(0, _p)
for _k in [k for k in list(os.environ) if k.startswith("COW_")]:
    os.environ.pop(_k)

import gen_model                                      # noqa: E402
import trivial_audit                                  # noqa: E402

GATE = os.path.join(ROOT, "build", "scratch", "localbind-gate", "on")
LIST = os.path.join(ROOT, "build", "scratch", "localbind-compiled.txt")


def const(txt):
    m = re.search(r"0x([0-9a-fA-F]+)|\b(\d+)\b", txt)
    return int(m.group(1) or m.group(2), 16 if m.group(1) else 10)


def prefix_lea_offsets(ins):
    """Every (offset_from_sp0, lea_text, addr) the guest computed before its first control transfer."""
    out = []
    d = 0
    for r in ins:
        mn, op, ops = r["mnem"], (r["op"] or ""), (r["opsp"] or "")
        if mn == "push":
            d -= 4
        elif mn == "pop":
            d += 4
        elif mn == "sub" and re.match(r"esp\b", op):
            d -= const(ops)
        elif mn == "add" and re.match(r"esp\b", op):
            d += const(ops)
        elif mn in ("ret", "jmp", "call"):
            break                                  # past here esp is whatever a callee left it at
        elif mn == "lea":
            m = re.search(r"\[esp\s*([+-])\s*(0x[0-9a-fA-F]+|\d+)\]", r["text"] or "", re.I)
            if m:
                disp = const(m.group(2))
                out.append((d + (disp if m.group(1) == "+" else -disp), r["text"], r["addr"]))
    return out


def main():
    if not os.path.isfile(LIST):
        sys.exit("REFUSING: %s missing - run lift_local_bind_gate.py first." % LIST)
    units = [u.strip() for u in open(LIST) if u.strip()]
    if not units:
        sys.exit("REFUSING: the compiled list is empty - nothing to check.")
    bodies = trivial_audit.body_index()
    agree = 0
    fails = []
    for u in units:
        short = u[2:]
        f = os.path.join(GATE, "cow_%s.c" % short)
        if not os.path.isfile(f):
            fails.append((u, "no artefact in the gate directory"))
            continue
        t = open(f, encoding="utf-8", errors="replace").read()
        m = re.search(r"CowU32 slot_(\w+) = \(CowU32\)\(sp0 ([+-]) 0x([0-9a-f]+)u\);", t)
        if not m:
            fails.append((u, "no bound slot declaration"))
            continue
        declared = int(m.group(3), 16) * (-1 if m.group(2) == "-" else 1)
        cands = prefix_lea_offsets(gen_model.parse_instructions(bodies[short]))
        if not cands:
            fails.append((u, "the guest computed no prefix esp address at all - what witnessed this?"))
            continue
        if declared in [c[0] for c in cands]:
            agree += 1
        else:
            fails.append((u, "adapter says sp0%+d; the guest prefix leas say %s"
                          % (declared, ["sp0%+d @0x%08x" % (c[0], c[2]) for c in cands[:4]])))
    print("units checked                : %d" % len(units))
    print("slot == a guest-computed addr: %d" % agree)
    print("DISAGREE / no evidence       : %d" % len(fails))
    for u, why in fails[:12]:
        print("   %s  %s" % (u, why))
    if fails:
        sys.exit("\nREFUSING: %d of %d bound slots are not an address the guest computed in its prefix."
                 % (len(fails), len(units)))
    print("\nPASS: every bound slot is an address the guest itself computed with a prefix lea - re-derived"
          "\n      from the disassembly, not from the helper that made the decision.")
    print("\nLIMIT OF THIS CLAIM: it checks the number against every prefix lea the guest performed, not"
          "\nwhich lea was the right one for this local. Which register carried it, and whether the callee"
          "\nreads the word back, is cowdiff's question - and these units are not booked until it answers.")


if __name__ == "__main__":
    main()
