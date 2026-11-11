"""Where do the 209 over-pops come from? Test the hypothesis instead of adopting it.

`adapter_overpops` found 209 machine-lifted units that pop a callee-saved register they never pushed.
Before calling that a new defect family, the obvious innocent explanation has to be tried: the guest
pushed that register in the MIDDLE of its body, the lift did not reproduce the push (it says so - the
`NOTE(machine): this entry also pushes N word(s) in the middle of its body...` comment), and the
epilogue pops it because the walk found the pop. If most of the 209 carry that note, this is one known
defect (unreproduced mid-body saves) seen from the other end, not two.

The other buckets matter just as much: over-pops WITHOUT the note have no stated excuse and are the
part that would need a new explanation.
"""
import os
import re
import sys

HERE = r"D:\Projects\ffxi_disassembly\Cow_kuluu_xi_anything\tools\cow\ghidra"
sys.path.insert(0, HERE)
import lift_frame_predicates as FP  # noqa: E402

NOTE = re.compile(r"NOTE\(machine\): this entry also pushes (\d+) word")
over, with_note, without_note = [], [], []
for a in FP.lifted_units():
    t = FP.read_unit(a)
    if "machine-lifted" not in t:
        continue
    o = FP.adapter_overpops(t)
    if not o:
        continue
    over.append((a, o))
    m = NOTE.search(t)
    (with_note if m else without_note).append((a, o, m.group(1) if m else None))

print("=" * 76)
print("the 209 over-pops, joined to the lift's own excuse")
print("=" * 76)
print("  over-popping units                     : %d" % len(over))
print("  carry 'also pushes N words mid-body'   : %d" % len(with_note))
print("  NO stated excuse                       : %d" % len(without_note))
print("     e.g. %s" % ", ".join("0x%s(%s)" % (a, "+".join(o)) for a, o, _n in without_note[:8]))
print()
if over and not with_note:
    print("  The note hypothesis is FALSE: none of them carry it. These are unexplained over-pops.")
elif without_note:
    print("  Mixed: %d explained by unreproduced mid-body saves, %d with no excuse in the file."
          % (len(with_note), len(without_note)))
    print("  Quote the buckets separately - '209 new defects' would be wrong, and so would 'all"
          " explained'.")
else:
    print("  All of them are the known unreproduced-mid-body-save defect, seen from the pop end.")
print()
print("  Either way this is a count that did not exist before today, in a direction nothing was")
print("  looking at: `adapter_unpaired` only ever asked about pushes without pops.")
