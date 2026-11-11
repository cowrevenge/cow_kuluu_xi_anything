"""Can the ledger join fire at all? And why did the doc's 12 named units vanish under ONE predicate?

A zero from a predicate that has never been shown capable of firing is not a finding - it is the
same dead-filter trap that made the esi subtree walk report a clean 0. So: (a) prove booked_pass()
returns True for units known to be booked pass, (b) walk each unit named in
cow/wip/half-modelled-pushes.md through exit_count / guest_saves_restores / emit_state per register
and say which gate it failed.
"""
import os
import sys

sys.path.insert(0, r"D:\Projects\ffxi_disassembly\Cow_kuluu_xi_anything\tools\cow\ghidra")
os.chdir(sys.path[0])

import lift_clobber_predicate_blindness as T

NAMED = ["100ebd70", "100ef950", "1018c6b0", "10284970", "102de39f",
         "102de613", "102de762", "102de9f4"]

print("=== (a) can booked_pass() fire? ===")
fires = [a for a in NAMED if T.booked_pass(a)]
print("  known-pass units returning True : %d / %d" % (len(fires), len(NAMED)))
if not fires:
    sys.exit("REFUSING: booked_pass() cannot fire - the zero below would be meaningless")

print("\n=== (b) why each named unit is or is not in P2-emitted-not-modelled ===")
for a in NAMED:
    ec = T.exit_count(a)
    rows = []
    for r in T.REGS:
        g = T.guest_saves_restores(a, r)
        st = T.emit_state(a, r) if g else "n/a"
        if g:
            rows.append("%s:%s" % (r, {T.EM_NOT_MODELLED: "EM-NOT-MODELLED",
                                       T.EM_MODELLED_NO_RESTORE: "modelled-no-restore",
                                       T.EM_SAVE_DROPPED: "save-dropped",
                                       T.EM_MODELLED_NO_EMIT: "modelled-no-emit"}.get(st, st)))
    print("  0x%s  rets=%d  booked_pass=%s  %s" % (a, ec, T.booked_pass(a), " ".join(rows) or "NO REG QUALIFIES"))

print("\n=== (c) the 439 P2 hits: booked-pass breakdown, by construction ===")
p2 = []
for a in sorted(f[4:12].lower() for f in os.listdir(T.LIFT)
                if f.startswith("cow_") and f.endswith(".c")):
    if T.exit_count(a) != 1:
        continue
    for r in T.REGS:
        if T.guest_saves_restores(a, r) and T.emit_state(a, r) == T.EM_NOT_MODELLED:
            p2.append((a, r))
print("  P2 emitted-not-modelled pairs : %d over %d units" % (len(p2), len({a for a, _ in p2})))
bp = [a for a, _ in p2 if T.booked_pass(a)]
print("  of which booked pass in the ledger : %d pairs / %d units" % (len(bp), len(set(bp))))
print("  e.g. %s" % ", ".join("0x%s" % a for a in sorted(set(bp))[:8]))
