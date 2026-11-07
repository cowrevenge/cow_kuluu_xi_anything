"""lift_regs.py - group the register failures (`eax` / `edx` / `callee-saved` / `esp`) by VALUE SHAPE.

The FAIL line now carries `reg=<name> A=<a> B=<b>`, which is the third time this phase has had to buy a
sentence in the harness to see a pattern (`fault` -> which side raised what; `memory` -> which word, in
which region, written by whom). Grouping on the two numbers is what separates the shapes a lift can actually
have gotten wrong:

    B is a fuzzed-looking address A never had   a register the entry materialised and the lift left live
    both are numbers, differing in low bits      an expression off by a constant, or a masked operand
    both are pointers, differing by a small n    a base+displacement the decompiler renumbered
    B is zero where A is not (and vice versa)    a computation whose result the lift dropped

    python tools/cow/ghidra/lift_regs.py                 # all register groups
    python tools/cow/ghidra/lift_regs.py --why eax --top 12
"""
import argparse
import collections
import json
import os
import re

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
RESULT = os.path.join(ROOT, "cow", "lift_proof_all.json")

TAIL = re.compile(
    r"first at state\s+(?P<state>\d+)\s*\((?P<why>[^)]*)\).*?"
    r"reg=(?P<reg>\w+)\s+(?P<a>[0-9a-f]{8})/(?P<b>[0-9a-f]{8})"
)


def shape(v):
    if v is None:
        return "?"
    if v == 0:
        return "zero"
    if 0x10000000 <= v < 0x10C20000:
        return "image ptr"
    if 0x00980000 <= v < 0x00994000:
        return "arena/stack ptr"
    if v < 0x1000:
        return "small int"
    return "number"


def relation(a, b):
    if a == b:
        return "same"
    x = a ^ b
    if x and x < 0x100:
        return "low byte differs"
    if x and x < 0x10000:
        return "low half differs"
    if a and b and abs(a - b) < 0x1000:
        return "off by a small n"
    if a == 0 or b == 0:
        return "one side zero"
    return "different"


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--json", default=RESULT)
    ap.add_argument("--why", default="")
    ap.add_argument("--top", type=int, default=14)
    ap.add_argument("--samples", type=int, default=2)
    args = ap.parse_args()

    data = json.load(open(args.json, encoding="utf-8"))
    rows = [(k, v) for k, v in data.items() if not v.get("pass")
            and re.match(r"(eax|edx|esp|callee-saved)", v.get("why") or "")
            and (not args.why or (v.get("why") or "").startswith(args.why))]

    groups = collections.Counter()
    members = collections.defaultdict(list)
    tailed = 0
    for k, v in rows:
        m = TAIL.search(v.get("raw") or "")
        if not m:
            groups["no reg tail (proved before the values landed)"] += 1
            members["no reg tail (proved before the values landed)"].append(k)
            continue
        tailed += 1
        a, b = int(m.group("a"), 16), int(m.group("b"), 16)
        st = int(m.group("state"))
        key = "%-22s | %-8s | %-13s vs %-13s | %s | state %s" % (
            m.group("reg"), relation(a, b), shape(a), shape(b),
            "faulted" if re.search(r"fault -?\d+/-?\d+", v.get("raw") or "") else "clean",
            "0" if st == 0 else ("<10" if st < 10 else ">=10"))
        groups[key] += 1
        members[key].append(k)

    print("LIFT REGISTER GROUPS  (%s rows, %d with the new tail)" % (len(rows), tailed))
    if tailed == 0:
        print("  re-prove this set with the current cowdiff to get the values")
    for key, n in groups.most_common(args.top):
        print("\n%5d  %s" % (n, key))
        for e in members[key][:args.samples]:
            print("        0x%s  %s" % (e, (data[e].get("raw") or "").strip()[:150]))


if __name__ == "__main__":
    main()
