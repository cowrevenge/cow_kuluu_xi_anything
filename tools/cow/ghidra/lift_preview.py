"""Preview what tools/cow/ghidra/lift.py WOULD write for an entry, without writing anything.

Why this exists: lift.py --apply rewrites src/lifted/** AND the shared generated layout
(lifted_bridges.c / lifted_addresses.h) from only the entries in the run, so the honest way to look at one
unit's output is a full 4,185-entry re-lift - minutes of machine time per experiment, and a tree nobody
else can build while it runs. This renders the same text through the same code path (classify + emit, one
Ctx shared exactly as _main builds it) and prints it. Nothing is written, so no lock is needed and a
preview cannot repeat the spot-check-that-broke-the-tree incident.

  python tools/cow/ghidra/lift_preview.py 0x10002790 [0x...] [--diff]

--diff prints the previewed file beside the one currently in src/lifted, which is how you see what a
gen_model/lift.py change actually did to a unit instead of what you hope it did.
"""
import argparse
import difflib
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)
sys.path.insert(0, os.path.join(ROOT, "tools", "cow"))

import lift as liftmod  # noqa: E402


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("entries", nargs="+")
    ap.add_argument("--dump", default=os.environ.get("COW_LIFT_DUMP", "D:/projects/ghidra/ghidra_out/functions_all.jsonl"))
    ap.add_argument("--ghidra", default="12.2")
    ap.add_argument("--diff", action="store_true")
    a = ap.parse_args()

    wanted = {liftmod.norm(x) for x in a.entries}
    ctx = liftmod.Ctx(a.dump, a.ghidra)
    found = set()
    with open(a.dump, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            try:
                d = json.loads(line)
            except ValueError:
                continue
            addr = liftmod.norm(d.get("addr"))
            if addr not in wanted:
                continue
            found.add(addr)
            ctx.problems = []
            print("=" * 78)
            print("ENTRY %s" % addr)
            print("=" * 78)
            ok, why = liftmod.classify(d)
            if not ok:
                print("CLASSIFY REFUSED: %s" % why)
                continue
            text, why2 = liftmod.emit(d, ctx)
            if text is None:
                print("EMIT REFUSED: %s" % why2)
                continue
            if a.diff:
                cur = os.path.join(ROOT, "src", "lifted", "cow_%s.c" % addr[2:])
                old = open(cur, encoding="utf-8").read().splitlines() if os.path.isfile(cur) else []
                ud = list(difflib.unified_diff(old, text.splitlines(),
                                               fromfile="src/lifted/cow_%s.c" % addr[2:],
                                               tofile="preview", lineterm="", n=2))
                print("\n".join(ud) if ud else "(no change)")
            else:
                print(text)
    for miss in sorted(wanted - found):
        print("%s: NOT IN DUMP" % miss)
    return 0


if __name__ == "__main__":
    sys.exit(main())
