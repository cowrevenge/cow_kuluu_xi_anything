"""How many `memory` failures are the SAME bug: a store to an esp/ebp-relative address that Ghidra turned
into a local, so the lifted body never performs it?

`memory` is the largest failure group (661) and lift_memshapes.py showed 544 of them are writes to the
STACK region. A stack store is what the guest does to its own frame, and the decompiler deletes the frame:
`mov dword ptr [esp+4], eax` becomes an assignment to a local that nobody reads. The generated body still
performs the real write, so side A writes the slot and side B does not: `store=missing ... x<n> stack`.

If that is most of the 544, the group is ONE bug and worth a real design (replaying frame-relative stores
from the generated body, which is the "body as semantics" work, not a tweak). If it is a quarter of them,
the rest is something else and this file has saved a wrong turn. Read-only.

    python tools/cow/ghidra/lift_stackstores.py
    python tools/cow/ghidra/lift_stackstores.py --why memory --n 700
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

import gen_model          # noqa: E402
import trivial_audit      # noqa: E402

RECORD = os.path.join(ROOT, "cow", "lift_proof_all.json")

# A store whose ADDRESS is esp/ebp-relative. NOT one regex: the generated body computes the address into a
# temporary on one statement and stores through it on the next -
#     { uint32_t A = (uint32_t)(esp + 0x4u); wr32(A, (uint32_t)(eax)); }
# so a pattern that expects `wr32((uint32_t)(esp...` matches NOTHING and the census confidently reports
# "this is not the frame-store bug" while looking at the frame-store bug. Match the temp definition and the
# store through that same temp, in the same instruction. (The first version of this file did exactly that,
# and reported 0 of 544 - on a unit whose own body was printed on screen two tool calls earlier.)
FRAME_ADDR = re.compile(r"\b(?:uint32_t|CowU32|unsigned)\s+(\w+)\s*=\s*\(uint32_t\)\(\s*(?:esp|ebp)\b")
DIRECT_FRAME_STORE = re.compile(r"\bwr(?:32|8|16|f32|f64)\(\s*\(uint32_t\)\(\s*(?:esp|ebp)")


def frame_stores(ins):
    """The instructions that write to an esp/ebp-relative address, however the body spells it.

    Two shapes, because the generated body computes the address into a temporary and stores through it:
        { uint32_t A = (uint32_t)(esp + 0x4u); wr32(A, (uint32_t)(eax)); }
    and, rarely, directly:
        { wr32((uint32_t)(esp + 0x4u), v); }
    The first version of this file matched only the second shape, found 0 of 544, and was about to report
    that the frame-store bug was not the bug at all - on a unit whose body was on screen moments earlier.
    """
    out = []
    for c in ins:
        stmt = c.get("stmt")
        if isinstance(stmt, list):
            stmt = "\n".join(stmt)
        stmt = stmt or ""
        if DIRECT_FRAME_STORE.search(stmt):
            out.append(c)
            continue
        m = FRAME_ADDR.search(stmt)
        if m and re.search(r"\bwr(?:32|8|16|f32|f64)\(\s*" + re.escape(m.group(1)) + r"\s*[,)]", stmt):
            out.append(c)
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--why", default="memory")
    ap.add_argument("--region", default="stack")
    ap.add_argument("--n", type=int, default=0)
    a = ap.parse_args()

    with open(RECORD, encoding="utf-8") as fh:
        rec = json.load(fh)
    res = rec.get("results", rec)
    rows = [(k, v) for k, v in res.items()
            if (v.get("why") or "") == a.why and not v.get("pass")]
    if a.region:
        rows = [(k, v) for k, v in rows if a.region in (v.get("detail") or "")]
    if a.n:
        rows = rows[:a.n]
    if not rows:
        print("no rows")
        return 2

    bodies = trivial_audit.body_index()
    c = collections.Counter()
    shapes = collections.Counter()
    examples = collections.defaultdict(list)
    for k, v in rows:
        key = k.lower().replace("0x", "")
        body = bodies.get(key)
        if not body:
            c["<no generated body>"] += 1
            continue
        m = gen_model.model_generated(body)
        if not m or not m.get("ok", True):
            c["<model not ok>"] += 1
            continue
        stores = frame_stores(m["ins"])
        has_frame = bool(stores)
        # does the emitted unit even have the frame the store needs? (a lift cannot write [esp+4] if it
        # never touched esp - the prologue decides whether such a replay is expressible at all)
        c["frame-relative store in the body: %s" % has_frame] += 1
        if has_frame:
            regs = collections.Counter(s["mnem"] for s in stores)
            shapes[",".join("%s" % r for r in sorted(regs))] += 1
            kinds = collections.Counter()
            for s in stores:
                kinds[re.sub(r"\s+", " ", (s.get("text") or "")[:34])] += 1
            top = kinds.most_common(1)[0][0]
            shapes["FORM " + top] += 1
            if len(examples["frame"]) < 5:
                examples["frame"].append((key, len(stores), top))
        else:
            # no frame store to replay, so this failure is NOT that bug
            c["    (so this one is some other bug)"] += 1
            if len(examples["other"]) < 5:
                examples["other"].append((key, 0, (v.get("detail") or "")[:90]))

    print("== %d failing rows, why=%s region contains '%s' ==" % (len(rows), a.why, a.region))
    for k, v in c.most_common(10):
        print("  %6d  %s" % (v, k))
    print("\n-- which instruction forms the frame stores are --")
    for k, v in shapes.most_common(12):
        print("  %6d  %s" % (v, k))
    print("\n-- examples --")
    for g, ex in examples.items():
        for key, n, txt in ex:
            print("  %-6s 0x%s  %d frame store(s)  %s" % (g, key, n, txt))
    return 0


if __name__ == "__main__":
    sys.exit(main())
