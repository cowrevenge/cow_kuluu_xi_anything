"""Cheap, decisive join: are the cluster's 136 units among the over-poppers?

The cluster (the 136 re-verify failures that diverge at state 0 with the stack signature
`@00993b60 ours=10313417 theirs=00000000`) has had three mechanisms proposed and rejected. An
over-pop - a `pop <reg>` with no matching push in our adapter - reads a word the entry never saved,
and the word immediately below a frame's saves is the RETURN ADDRESS. `0x10313417` is exactly what a
return address looks like, and the investigation notes already contain a literal `0x10313417` where
`side A` had the return address of a `call dword ptr [0x10329288]` at 0x10313411.

This is a HYPOTHESIS with a measured join, not a conclusion. The join is the cheap part; the falsifier
is also cheap: if the cluster units are not over-poppers, this dies like the wrap, the depth and the
phantom-offset ideas did.
"""
import io
import json
import os
import re
import sys

HERE = r"D:\Projects\ffxi_disassembly\Cow_kuluu_xi_anything\tools\cow\ghidra"
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)
import lift_frame_predicates as FP  # noqa: E402

SIG = re.compile(r"10313417", re.I)

with io.open(os.path.join(ROOT, "cow", "reverify.json"), encoding="utf-8", errors="replace") as fh:
    rev = json.load(fh)
cluster = sorted({f["unit"].lower().replace("0x", "") for f in rev["failed"]
                  if SIG.search(f.get("first_failing_line") or "")})
if not cluster:
    sys.exit("REFUSING: no cluster units found by the signature - the signature text or the record "
             "changed, and a zero overlap would be an artifact of this script, not a finding")

over = {a for a in FP.lifted_units() if FP.adapter_overpops(FP.read_unit(a))}
unpaired = set(FP.unpaired_population())

both = [a for a in cluster if a in over]
either = [a for a in cluster if a in over or a in unpaired]
print("=" * 76)
print("cluster (stack signature 0x10313417) vs the two frame-error counters")
print("=" * 76)
print("  cluster units in reverify's failures   : %d" % len(cluster))
print("  of them OVER-POP                       : %d" % len(both))
print("  of them over-pop OR unpaired push      : %d" % len(either))
print("  overlap as a share of the cluster      : %.0f%%" % (100.0 * len(both) / len(cluster)))
print()
print("  cluster members that over-pop : %s" % ", ".join("0x%s" % a for a in both[:12]))
print()
if not both:
    print("  The over-pop hypothesis is dead for this cluster, like the dropped wrap, the booking depth")
    print("  and the phantom offset before it. Say so in the cluster file; do not keep it as a rumour.")
elif len(both) < len(cluster) * 0.5:
    print("  Partial overlap (%d of %d): worth a look at those %d individually, but it does not explain"
          % (len(both), len(cluster), len(both)))
    print("  the class. The other %d need their own mechanism." % (len(cluster) - len(both)))
else:
    print("  Strong overlap. Next step is the by-eye one: for one of these, show the guest's push/pop")
    print("  sequence and ours side by side, and see whether the value at 0x10313417 is a return")
    print("  address our pop pulled in. Do not book anything on a join alone.")
