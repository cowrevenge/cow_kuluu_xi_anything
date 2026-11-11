"""One declined tail-call unit, read by eye - before designing the two-path fix.

The price run named 27 of 30 declines as "tail-call / intra-tail". The design question that decides
which fix is correct: on a TAIL path, whose pop list is the truth?

  * if the guest popped everything above the jump, our completing the epilogue is right and the inline
    path must complete too;
  * if the guest legitimately left a save unrestored on that path (the callee it jumps to returns for
    it, and the register simply dies), then completing the inline list would make us DIVERGE from the
    reference - and the current decline is correct for those units.

No counter settles that. It is settled by reading the generated body of one unit.
"""
import os
import re
import sys

HERE = r"D:\Projects\ffxi_disassembly\Cow_kuluu_xi_anything\tools\cow\ghidra"
sys.path.insert(0, HERE)
import lift_frame_predicates as FP  # noqa: E402
import lift_clobber_predicate_blindness as T  # noqa: E402

A = (sys.argv[1] if len(sys.argv) > 1 else "1006ce70").lower().replace("0x", "")

print("=" * 78)
print("0x%s - generated body (side A, the reference) vs our shipped lift" % A)
print("=" * 78)
bl = T.blines(A)
print("\n--- GENERATED body, instruction comments only (the bytes as the recompiler read them) ---")
for l in bl:
    m = re.search(r"/\*\s*([0-9a-f]{8}):\s*([a-z][a-z0-9]*)\s*([^*/]*)\*/", l)
    if m:
        print("   %s  %-7s %s" % (m.group(1), m.group(2), (m.group(3) or "").strip()))

print("\n--- OUR shipped adapter (src/lifted/cow_%s.c) ---" % A)
t = FP.read_unit(A)
i = t.find("void cow_adapter_")
print(t[i:i + 2600] if i >= 0 else "(no adapter)")

print("\n--- the counts the two paths disagree about ---")
print("   our prologue pushes : %s" % FP.adapter_pushes(t))
print("   our epilogue pops   : %s" % FP.adapter_pops(t))
print("   unpaired callee-saved: %s" % FP.adapter_unpaired(t))
import gen_model  # noqa: E402
m = gen_model.model_generated(bl)
print("   model pushes        : %s" % m.get("pushes"))
print("   model pops (strict) : %s" % gen_model.epilogue_pop_run(m.get("ins") or []))
os.environ["COW_MODEL_EPILOGUE_LIFO"] = "1"
import importlib
importlib.reload(gen_model)
m2 = gen_model.model_generated(bl)
print("   model pops (LIFO)   : %s" % gen_model.epilogue_pop_run(m2.get("ins") or []))
os.environ.pop("COW_MODEL_EPILOGUE_LIFO", None)
importlib.reload(gen_model)
