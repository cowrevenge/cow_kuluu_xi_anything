"""lift_tree_diff.py - compare two lifted trees and say exactly what a lifter change did to the FILES.

    python tools/cow/ghidra/lift_tree_diff.py build/scratch_ship build/scratch_gw
    python tools/cow/ghidra/lift_tree_diff.py src/lifted build/scratch_ship --list-out build/changed.txt

WHY. `lift_snapshot_diff.py` compares REFUSAL snapshots - it answers "which units became liftable". It cannot
answer the other half of the safety question, "what did this change do to code that was already shipped", and
that is the half that has repeatedly turned out to be the dangerous one: the `g->reg` fallback silently rewrote
37 already-proven files, the global-load rule flipped 307 previously-proven files and made 125 of them fail,
and a `--apply --entries` once pruned the whole tree. A refusal census can show "0 newly refused" while the
emit side rewrites half the population, because the two live in different files.

So this compares two output trees directly and reports the three things that matter, separately:
  * **changed** - a file present in both whose CONTENT differs. Any change here touches code the differential
    may already have blessed; a "widening" that changes proven files is not widening, it is editing.
  * **added**   - new files. These should be exactly the units the release was measured to produce.
  * **deleted** - files that stopped being emitted. This is the prune/syntax-gate path, and the reason an
    apply must be reviewed: deletion of a claimed-proven unit's file is how a verdict silently loses its code.

CRLF: this checkout is CRLF in the worktree and LF in the blobs, so a raw byte compare declares every file
different and proves nothing - the queue records that mistake verbatim. Comparison is on line-ending-normalised
bytes, and the count of what was compared is always printed, because "0 differ" from a loop that compared
nothing is the failure mode this loop keeps meeting.

TRIPWIRE: both trees must exist and be non-empty. An empty side exits non-zero rather than reporting that
everything was added or nothing changed.
"""
import argparse
import hashlib
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))                  # tools/cow/ghidra
ROOT = os.path.dirname(os.path.dirname(HERE))                       # HERE is a directory: one dirname
NAME_RE = re.compile(r"^cow_([0-9a-fA-F]{6,8})\.c$")


def norm_sha(path):
    h = hashlib.sha256()
    with open(path, "rb") as fh:
        h.update(fh.read().replace(b"\r\n", b"\n").replace(b"\r", b"\n"))
    return h.hexdigest()


def tree(d):
    if not os.path.isdir(d):
        return None
    return {f for f in os.listdir(d) if NAME_RE.match(f)}


def main():
    ap = argparse.ArgumentParser(description="what did this lifter change do to the emitted files?")
    ap.add_argument("a")
    ap.add_argument("b")
    ap.add_argument("--list-out", default="", help="write the CHANGED entries (bare hex), one per line")
    ap.add_argument("--show", type=int, default=12)
    ap.add_argument("--json", action="store_true")
    a = ap.parse_args()

    ta, tb = tree(a.a), tree(a.b)
    for label, t in ((a.a, ta), (a.b, tb)):
        if t is None:
            print("TRIPWIRE: %s is not a directory - cannot compare, and an empty answer is not a pass."
                  % label)
            return 3
        if not t:
            print("TRIPWIRE: %s has no cow_<hex>.c files. Comparing against nothing would report either "
                  "'everything added' or 'nothing changed'." % label)
            return 3

    added = sorted(tb - ta)
    deleted = sorted(ta - tb)
    common = sorted(ta & tb)
    changed = []
    for f in common:
        if norm_sha(os.path.join(ROOT, a.a, f)) != norm_sha(os.path.join(ROOT, a.b, f)):
            changed.append(f)

    if a.json:
        print("{\"a\":%d,\"b\":%d,\"common\":%d,\"changed\":%d,\"added\":%d,\"deleted\":%d,"
              "\"changed_list\":%s}" % (len(ta), len(tb), len(common), len(changed), len(added),
                                        len(deleted),
                                        [c[len("cow_"):-2] for c in changed]))
        return 0

    print("%s: %d files      %s: %d files      shared: %d"
          % (a.a, len(ta), a.b, len(tb), len(common)))
    print("\nCHANGED (content differs, compared %d shared files with CRLF normalised): %d"
          % (len(common), len(changed)))
    for f in changed[:a.show]:
        print("   ! %s" % f)
    if len(changed) > a.show:
        print("   ... and %d more" % (len(changed) - a.show))
    print("ADDED:   %d" % len(added))
    for f in added[:a.show]:
        print("   + %s" % f)
    if len(added) > a.show:
        print("   ... and %d more" % (len(added) - a.show))
    print("DELETED: %d" % len(deleted))
    for f in deleted[:a.show]:
        print("   - %s" % f)
    if len(deleted) > a.show:
        print("   ... and %d more" % (len(deleted) - a.show))

    # The one sentence that has to be unmissable: what the change did to code that already exists.
    if changed or deleted:
        print("\nNOT ADDITIVE - %d existing file(s) changed and %d stopped being emitted. Check each against "
              "the proof records before shipping: a file that was claimed proven and now differs needs "
              "re-proving, and one that disappeared lost the code behind a verdict."
              % (len(changed), len(deleted)))
    else:
        print("\nADDITIVE: every shared file is byte-identical (after CRLF normalisation) and nothing was "
              "deleted; only %d new file(s) arrive." % len(added))
    if a.list_out and changed:
        with open(a.list_out, "w", encoding="utf-8", newline="\n") as fh:
            for f in changed:
                fh.write(NAME_RE.match(f).group(1).lower() + "\n")
        print("wrote %d changed entries to %s" % (len(changed), a.list_out))
    return 0


if __name__ == "__main__":
    sys.exit(main())
