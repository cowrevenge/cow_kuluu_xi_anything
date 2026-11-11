"""Which units reach a suspect callee - the statistic to run before claiming a shared cause.

Measured with this tool on 2026-11-11: 123/123 of the @00993b60 cluster reach 0x103134c6 (63 at depth 1, 60 at
depth 2), while only 1/123 reach 0x100298f0. That contrast is the whole point: a suspect unit that the
cluster does not reach cannot be its cause, and a suspect the cluster DOES reach is worth an instrumentation
budget. Run it BEFORE writing "one bug explains the cluster".

The cluster note rests on this sentence: "0x103134c6 (the callee our cluster units enter) and 0x10313110 ...
are BOTH unlifted, so both sides execute identical code there." Two things have to be true for that to be the
right frame of mind, and both are checkable statically:

  1. is 0x103134c6 actually unlifted? (src/lifted/cow_103134c6.c exists on disk as I write this)
  2. how many of the 123 cluster units reach 0x100298f0, the unit that just failed STANDALONE with the
     cluster's exact signature? If a large fraction do, the "cluster" is fan-in onto a small number of broken
     thunks, not one shared-subtree mystery - and each such thunk is individually fixable.

Reachability is counted over the generated bodies (call/jmp targets), transitively, to a bounded depth: a
stub's failure propagating through a tail jump is exactly what this is testing for.
"""
import argparse
import io
import json
import os
import re
import sys
from collections import Counter, deque

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
sys.path.insert(0, os.path.join(ROOT, "tools", "cow", "ghidra"))
sys.path.insert(0, os.path.join(ROOT, "tools", "cow"))
sys.path.insert(0, os.path.join(ROOT, "tools"))
for _k in [k for k in list(os.environ) if k.startswith("COW_")]:
    os.environ.pop(_k)
import gen_model                                      # noqa: E402
import trivial_audit                                  # noqa: E402

TARGET = "100298f0"
MAX_DEPTH = 6


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--target", default=TARGET, help="the unit whose breakage we are testing for fan-in")
    ap.add_argument("--list", default=os.path.join("build", "scratch", "cluster-993b60.txt"))
    a = ap.parse_args()
    target = a.target.lower().replace("0x", "")
    with io.open(os.path.join(ROOT, a.list) if not os.path.isabs(a.list) else a.list,
                 encoding="utf-8") as fh:
        cluster = [l.strip().lower().replace("0x", "") for l in fh if l.strip()]
    bodies = trivial_audit.body_index()

    # premise 1
    lifted_suspects = {a: os.path.isfile(os.path.join(ROOT, "src", "lifted", "cow_%s.c" % a))
                       for a in ("103134c6", "10313110", "10313417", target)}
    print("target unit: 0x%s" % target)
    print("premise check - 'both sides execute identical code there':")
    for x, yes in lifted_suspects.items():
        print("   0x%-10s lifted=%s" % (x, yes))
    if lifted_suspects.get("103134c6"):
        print("   !! the note's premise is FALSE: 0x103134c6 IS lifted. What makes the conclusion still")
        print("      hold is that layout/lifted_bridges.c calls the generated original f_103134c6(g) directly.")

    # premise 2: transitive reachability of `target` from each cluster unit
    reach, unknown, nohit = 0, 0, 0
    depths = Counter()
    reached = []
    for x in cluster:
        if x not in bodies:
            unknown += 1
            continue
        q = deque([(x, 0)])
        seen = {x}
        hit = None
        while q:
            cur, d = q.popleft()
            if cur == target and d > 0:
                hit = d
                break
            if d >= MAX_DEPTH:
                continue
            b = bodies.get(cur)
            if b is None:
                continue
            # body_index() yields a LIST of lines, not a string - regexing it directly raised TypeError,
            # which is the cheap kind of bug: it announces itself instead of silently counting zero.
            if isinstance(b, (list, tuple)):
                b = "\n".join(b)
            for m in re.finditer(r"\b(?:f_)?(10[0-9a-f]{6})\b", b):
                t = m.group(1).lower()
                if t not in seen:
                    seen.add(t)
                    q.append((t, d + 1))
        if hit is not None:
            reach += 1
            depths[hit] += 1
            reached.append(x)
        else:
            nohit += 1
    print("\nof %d cluster units: %d reach 0x%s within depth %d, %d do not, %d had no body"
          % (len(cluster), reach, target, MAX_DEPTH, nohit, unknown))
    print("depth distribution: %s" % dict(depths))
    with io.open(os.path.join(ROOT, "build", "scratch", "reached-%s.txt" % target), "w",
                 encoding="utf-8") as fh:
        fh.write("\n".join(reached) + ("\n" if reached else ""))
    if reach == 0:
        print("\nNO fan-in: do not generalise this unit beyond the exemplars that reach it.")
    else:
        print("\n%d of the 123 reach 0x%s. Those are not %d bugs; they are this unit's bug seen from %d"
              " callers.\nFix it, then re-measure the cluster - and if they still fail, the label was hiding"
              " more than one defect." % (reach, target, len(cluster), reach))
    # capability tripwire: the walker must find a known edge, or its count is meaningless
    b = bodies.get(target)
    if isinstance(b, (list, tuple)):
        b = "\n".join(b)
    if not b:
        print("\ntripwire: no body for the target itself - the walker cannot be trusted")


if __name__ == "__main__":
    main()
