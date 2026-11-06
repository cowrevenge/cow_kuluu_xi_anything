"""lift_mem.py - group the `memory` failures by what actually differs, not by the fact that something did.

The harness now puts the diagnosis on the FAIL line and lift_proof keeps it verbatim in each entry's `raw`:

    COWDIFF FAIL 1000abcd 10 mismatch(es), first at state 3 (memory) fault 0/0 @100abcde 00000000/0098fe10 x4 image

`memory 690` is a bucket; "one word, in the stack, ours zero, theirs a pointer into the arena" is a plan.
This groups on (region class, which side is zero, how many words moved, where the differing address lives)
and pairs each group with the entries so a pattern can be picked off in lift.py / gen_model.py.

    python tools/cow/ghidra/lift_mem.py                       # the whole memory group
    python tools/cow/ghidra/lift_mem.py --why out-of-region-write
    python tools/cow/ghidra/lift_mem.py --top 12 --samples 4
"""
import argparse
import collections
import json
import os
import re
import sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
RESULT = os.path.join(ROOT, "cow", "lift_proof_all.json")
SRC = os.path.join(ROOT, "src", "lifted")

FAIL_TAIL = re.compile(
    r"first at state\s+(?P<state>\d+)\s*\((?P<why>[^)]*)\)\s+"
    r"fault\s+(?P<fa>-?\d+)/(?P<fb>-?\d+)\s+@(?P<addr>[0-9a-f]{8})\s+"
    r"(?P<va>[0-9a-f]{8})/(?P<vb>[0-9a-f]{8})\s+x(?P<ndiff>\d+)\s+(?P<cls>\S+)"
)

IMAGE_LO = 0x10000000


def addr_slot(a, entry):
    """Where the differing word lives, in terms a lift bug is describable in."""
    if IMAGE_LO <= a < IMAGE_LO + 0x0C20000:
        return "image global"
    if 0x0098_0000 <= a < 0x0099_0000:
        return "arena"
    if 0x0099_0000 <= a < 0x0099_4000:
        return "stack"
    return "elsewhere"


def value_shape(v, other):
    if v == 0:
        return "zero"
    if IMAGE_LO <= v < IMAGE_LO + 0x0C20000:
        return "image ptr"
    if 0x0098_0000 <= v < 0x0099_4000:
        return "arena/stack ptr"
    if v == other:
        return "same"
    return "number"


def ndiff_bucket(n):
    if n <= 1:
        return "1 word"
    if n <= 4:
        return "2-4 words"
    if n <= 16:
        return "5-16 words"
    return "many"


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--json", default=RESULT)
    ap.add_argument("--why", default="memory")
    ap.add_argument("--top", type=int, default=20)
    ap.add_argument("--samples", type=int, default=3)
    args = ap.parse_args()

    why_key = args.why.replace("-", "_")
    data = json.load(open(args.json, encoding="utf-8"))
    rows = [(e, r) for e, r in data.items() if not r.get("pass")
            and (r.get("why") or "").replace("_", "-").startswith(args.why.split()[0])]

    groups = collections.Counter()
    members = collections.defaultdict(list)
    parsed = 0
    for e, r in rows:
        raw = r.get("raw") or ""
        m = FAIL_TAIL.search(raw)
        if not m:
            groups["no tail (proved before the detail landed)"] += 1
            members["no tail (proved before the detail landed)"].append(e)
            continue
        parsed += 1
        a = int(m.group("addr"), 16)
        va = int(m.group("va"), 16)
        vb = int(m.group("vb"), 16)
        key = "%s | %s | ours %-13s theirs %-13s | %s" % (
            m.group("cls"), addr_slot(a, e), value_shape(va, vb), value_shape(vb, va),
            ndiff_bucket(int(m.group("ndiff"))))
        groups[key] += 1
        members[key].append(e)

    print("LIFT MEMORY GROUP  (%s: %d entries, %d with the new tail)" % (args.why, len(rows), parsed))
    if not parsed:
        print("  none of these have been proved since the harness started reporting the differing word -")
        print("  rerun lift_proof on this subset (it reuses the linked exe with --rows)")
    for key, n in groups.most_common(args.top):
        print("\n%5d  %s" % (n, key))
        for e in members[key][:args.samples]:
            print("        0x%s   %s" % (e, (data[e].get("raw") or "").strip()))


if __name__ == "__main__":
    main()
