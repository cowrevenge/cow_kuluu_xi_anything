"""Intersection of the two 'unpaired push' populations, before either number is published.

lift_matchpushes_check.py counts 246 units whose SHIPPED ADAPTER pushes a callee-saved register and
never pops it. lift_clobber_predicate_blindness.py's ladder counts 81 units where the MODEL does not
know about the push AND our lift never restores it. They are different questions - but I am about to
write both into a finding doc, and two numbers that look like rival counts of the same thing are how
this session has had to retract things. So: measure the overlap and the two differences.
"""
import io
import os
import re
import sys

HERE = r"D:\Projects\ffxi_disassembly\Cow_kuluu_xi_anything\tools\cow\ghidra"
sys.path.insert(0, HERE)
os.chdir(HERE)

import lift                                                    # noqa: E402
import lift_clobber_predicate_blindness as T                    # noqa: E402
import lift_frame_predicates as FP                              # noqa: E402

# C: code-level, from THE shared counter in lift_frame_predicates (no local copy of the regexes)
C = set(FP.unpaired_population())

# L1: model-based ladder units (guest saves+restores, single ret, disagreement, no restore)
L1 = set()
for a in sorted(f[4:12].lower() for f in os.listdir(T.LIFT)
                if f.startswith("cow_") and f.endswith(".c")):
    if T.exit_count(a) != 1:
        continue
    for r in T.REGS:
        if T.guest_saves_restores(a, r) and T.emit_state(a, r) == T.EM_NOT_MODELLED \
                and not T.restored_in_ours(a, r):
            L1.add(a)
            break

print()
print("=" * 72)
print("two counters, two questions - the overlap, measured")
print("=" * 72)
print("  C  code-level : adapter pushes a callee-saved reg, never brings it back : %d units" % len(C))
print("  L1 model-based: push unmodelled AND no restore, single ret, guest saved : %d units" % len(L1))
print("  C and L1        : %d" % len(C & L1))
print("  C only          : %d   (unmodelled-but-pushed is not the same defect as un-restored)"
      % len(C - L1))
print("  L1 only         : %d" % len(L1 - C))
print()
print("  C-only sample : %s" % ", ".join("0x%s" % a for a in sorted(C - L1)[:8]))
print("  L1-only sample: %s" % ", ".join("0x%s" % a for a in sorted(L1 - C)[:8]))
print()
print("  Neither number is 'the' clobber population. C is what a reader of the shipped file can")
print("  verify by eye; L1 is what the frame model disagrees about. Quote one with its name.")
