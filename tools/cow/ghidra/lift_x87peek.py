"""Print, side by side, the generated body and Ghidra's C for a few x87 units that fit the FIRST SLICE
(ops subset-of SIMPLE and peak FP stack depth <= 1), so the model can be designed against real samples
rather than against the census summary.

Read-only. Usage:
    python tools/cow/ghidra/lift_x87peek.py            # 6 shallow units
    python tools/cow/ghidra/lift_x87peek.py --pick 100016c0,10abcdef
"""
import json
import os
import random
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)

import gen_model          # noqa: E402
import trivial_audit      # noqa: E402
import lift_x87diag       # noqa: E402  (reuse the SIMPLE/EXOTIC allow-lists)

REFUSALS = os.path.join(ROOT, "build", "cow_lift", "refusals.json")
DUMP = os.environ.get("COW_LIFT_DUMP", "C:/ghidra_out/functions_all.jsonl")


def classify(m):
    ins = m.get("ins") or []
    used, depth, peak = set(), 0, 0
    for c in ins:
        mn = (c.get("mnem") or "").lower()
        if mn in gen_model.X87_MNEMS:
            used.add(mn)
        stmt = c.get("stmt") or ""
        depth += len(re.findall(r"X87_PUSH", stmt))
        peak = max(peak, depth)
        depth -= len(re.findall(r"X87_POP", stmt))
    return used, peak, depth


def main():
    import argparse
    ap = argparse.ArgumentParser()
    ap.add_argument("--pick", default=None, help="comma list of addresses to print")
    ap.add_argument("--n", type=int, default=6)
    ap.add_argument("--seed", type=int, default=11)
    ap.add_argument("--dump", default=DUMP)
    a = ap.parse_args()

    if a.pick:
        want = [x.strip().lower().replace("0x", "") for x in a.pick.split(",")]
    else:
        with open(REFUSALS, encoding="utf-8") as fh:
            refusals = json.load(fh)
        addrs = [k for k, v in refusals.items() if str(v).startswith("x87_not_modelled")]
        addrs = [x.lower().replace("0x", "") for x in addrs]
        random.Random(a.seed).shuffle(addrs)
        want = addrs[:400]

    entries = {}
    with open(a.dump, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            if not line.strip():
                continue
            try:
                e = json.loads(line)
            except ValueError:
                continue
            ad = str(e.get("addr", "")).lower().replace("0x", "")
            if ad in want:
                entries[ad] = e

    bodies = trivial_audit.body_index()
    shown = 0
    for key in want:
        body = bodies.get(key)
        e = entries.get(key)
        if not body or not e:
            continue
        m = gen_model.model_generated(body)
        if not m or not m.get("ok", True):
            continue
        used, peak, final = classify(m)
        if not used or used > lift_x87diag.SIMPLE or peak > 1 or final != 0:
            continue
        shown += 1
        if shown > a.n:
            break
        print("=" * 78)
        print("0x%s   ops=%s  peak=%d final=%d   calls=%d" %
              (key, ",".join(sorted(used)), peak, final, len(m.get("call_sites") or [])))
        print("-- generated body (guest semantics, the oracle) --")
        for c in m["ins"]:
            stmt = (c.get("stmt") or "").strip()
            print("  %08x %-28s | %s" % (c["addr"], c.get("text", "")[:28], stmt[:120]))
        print("-- Ghidra C (the candidate implementation) --")
        print(e.get("c") or "<none>")
        print()
    if not shown:
        print("no first-slice candidates in the sample; try --n or a different --seed")
    return 0


if __name__ == "__main__":
    sys.exit(main())
