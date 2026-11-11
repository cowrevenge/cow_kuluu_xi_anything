"""Attribution of the RUNNING booked-depth audit, computed now rather than argued at the end.

The sweep (pid 20748, pinned d8705dba since 13:24) loaded reverify.py into memory at start, so the
`head_move_material` field I just added will not appear in its record. Compute the same two measures
here so the completion report carries the attribution instead of inventing it later.
"""
import os
import sys

sys.path.insert(0, r"D:\Projects\ffxi_disassembly\Cow_kuluu_xi_anything\tools\cow")
os.chdir(r"D:\Projects\ffxi_disassembly\Cow_kuluu_xi_anything")
import reverify as RV  # noqa: E402

PIN = "d8705dba"
head = RV.head_commit()
net = RV.moved_files(PIN, head)
rng = RV.touched_in_range(PIN, head)
both = sorted(set(net) | set(rng))
mat = RV.material_moves(both)

print("=" * 74)
print("attribution of the audit pinned at %s (running since 13:24)" % PIN)
print("=" * 74)
print("  HEAD now               : %s" % head[:8])
print("  commits in between     : %s" % RV.subprocess.run(
    ["git", "rev-list", "--count", "%s..%s" % (PIN, head)], cwd=RV.ROOT,
    capture_output=True, text=True).stdout.strip())
print("  net-diff paths         : %d" % len(net))
print("  range-touched paths    : %d" % len(rng))
print("  MATERIAL (either way)  : %d  %s" % (len(mat), mat[:6]))
print()
if mat:
    print("  The sweep judged units against more than one set of judged inputs. Its failures stay a")
    print("  lead list; its passes are not attributable to a single commit.")
else:
    print("  Nothing the harness READS moved during the run (src/, runtime/, layout/, cow/wraps.json,")
    print("  ledger/, meta/, cowdiff.c/.py, and every .c/.h/.def). Every path that moved is bookkeeping,")
    print("  docs or a tool the sweep does not execute, so the record remains attributable to %s"
          % PIN)
    print("  with the caveat that its own auditor is the pre-attribution code.")
