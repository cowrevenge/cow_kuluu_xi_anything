"""Reconcile two report-only runs at UNIT level - and explain why "23 units" and "418 units" are both true.

Two measurements of the SAME knob disagreed by 18x. That is exactly the kind of duplicate-number incident
this loop settles by naming the populations rather than picking a favourite:

  * `lift_npush_price.py` said the frame-aware push walk makes **23** units liftable. It priced the
    population from `lift_npush_frame_inflation.py`, whose census deliberately kept only call sites with a
    NON-ZERO cleanup constant ("cleanup says nothing, stay out of the census"). A sound choice for proving
    the walk wrong - cleanup/4 is the independent witness - but it is a SUBSET, and the knob does not
    inherit that restriction.
  * The whole-image comparison says **+418**.

So neither number is wrong; the small one is scoped and the big one is the class. This tool computes the
actual flipped set so the claim has a list behind it, and states the scoping difference in the same breath.

It also flags the operational consequence the queue already learned: units that are currently REFUSED have
no `COW_ADDR_LIFT_*` macros in the committed layout, so a restricted `--apply --entries` run cannot compile
them - which is the layout guard doing its job, and means the real delivery vehicle is a whole-population
lift, not a spot-check.
"""
import collections
import io
import os
import re
import sys

ROOT = r"D:\Projects\ffxi_disassembly\Cow_kuluu_xi_anything"
REFUSE_RE = re.compile(r"^\s*refuse\s+0x([0-9a-f]{8}):\s+(\S+)")


def refused(path):
    out = {}
    for line in io.open(path, encoding="utf-8", errors="replace"):
        m = REFUSE_RE.match(line)
        if m:
            out[m.group(1)] = m.group(2)
    return out


def main():
    off_p = sys.argv[1] if len(sys.argv) > 1 else os.path.join(ROOT, "build", "lift", "refusals-fresh.log")
    on_p = sys.argv[2] if len(sys.argv) > 2 else os.path.join(ROOT, "build", "lift", "refusals-npush-on.log")
    out_p = sys.argv[3] if len(sys.argv) > 3 else os.path.join(ROOT, "cow", "wip", "npush-newly-liftable.txt")
    off, on = refused(off_p), refused(on_p)
    if not off or not on:
        sys.exit("REFUSING: parsed %d/%d refusals - one of the logs is not a complete report-only run"
                 % (len(off), len(on)))

    gained = sorted(a for a in off if a not in on)          # refused OFF, no longer refused ON
    regressed = sorted(a for a in on if a not in off)       # new refusals introduced
    moved = sum(1 for a in off if a in on and off[a] != on[a])

    print("=" * 100)
    print("unit-level diff of two report-only runs")
    print("=" * 100)
    print("  refused with knobs OFF : %d" % len(off))
    print("  refused with knobs ON  : %d" % len(on))
    print("  NEWLY LIFTABLE         : %d   <- these are the claim" % len(gained))
    print("  newly REFUSED          : %d   <- reported, never hidden" % len(regressed))
    print("  still refused, new name: %d   <- moved to the next gate, NOT a win" % moved)

    why_gained = collections.Counter(off[a].split("_")[0] for a in gained)
    print("\n  what the gained units were refused for:")
    for k, n in why_gained.most_common(8):
        print("    %-28s %5d" % (k, n))

    if regressed:
        why_reg = collections.Counter(on[a].split("_")[0] for a in regressed)
        print("\n  why the %d regressions appeared:" % len(regressed))
        for k, n in why_reg.most_common(6):
            print("    %-28s %5d" % (k, n))
        # A COUNT of regressions is not a disclosure. Name every one, old reason -> new reason, so the
        # next turn can read them instead of taking on faith that "15 new refusals" is harmless.
        print("\n  the regressions, named (these units lifted with the knobs OFF and are refused ON):")
        for a in regressed:
            print("    0x%s  was: lifted -> now refused: %s" % (a, on[a][:72]))
        print("\n  Read one before trusting the rest. The expected benign mechanism: the walk's count was")
        print("  INFLATED by frame saves, and an inflated npush can accidentally satisfy")
        print("  `cleanup == 4*npush` or `len(args) == npush`. Correcting it makes the guard fire where it")
        print("  previously agreed by luck - so those units would have emitted WRONG code before. That is")
        print("  an interpretation, not a verdict: verify it on a named unit.")

    with io.open(out_p, "w", encoding="utf-8", newline="\n") as fh:
        for a in gained:
            fh.write(a + "\n")
    print("\n  wrote %d entries -> %s" % (len(gained), os.path.relpath(out_p, ROOT)))
    print()
    print("  RECONCILING '23' AND '%d': the 23 came from lift_npush_price.py, which priced the census of"
          % len(gained))
    print("  call sites carrying a NON-ZERO cleanup constant - the right way to PROVE the walk was wrong")
    print("  (cleanup/4 is the independent witness), but a subset of everything the walk mis-measures.")
    print("  Sites with cleanup == 0 (cdecl-ish) were excluded from that census and still benefit from the")
    print("  fix. Neither number is wrong; the small one is scoped, the big one is the class. Quote this")
    print("  list, not either count alone.")
    print()
    print("  OPERATIONAL: these units are currently refused, so the committed layout has no")
    print("  COW_ADDR_LIFT_* macros for the addresses their bodies mention. A restricted --apply --entries")
    print("  run is forbidden from rewriting that header (it erased 6.7 MB of bridges once), so they only")
    print("  compile out of a WHOLE-POPULATION lift. Deliver them that way or not at all.")


if __name__ == "__main__":
    main()
