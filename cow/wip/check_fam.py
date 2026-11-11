import io
import json
import os

ROOT = r"D:\Projects\ffxi_disassembly\Cow_kuluu_xi_anything"
rev = json.load(io.open(os.path.join(ROOT, "cow", "reverify.json"), encoding="utf-8", errors="replace"))
failed = {f["unit"].lower().replace("0x", "") for f in rev["failed"]}
FAM = ["102de39f", "102de613", "102de762", "102de9f4", "102dea8f", "102debdb", "102ded08",
       "102dee54", "102d1cd0", "10284970", "101b5210", "10155bd0", "10155c70", "100ef950",
       "100ebd70", "1018c6b0", "1014d5e0", "10057010", "101ff2e0", "1019ce70", "1019d1c0",
       "1024a370", "10156870"]
infail = [a for a in FAM if a in failed]
print("the 23 units in the 39:", len(FAM))
print("of them present in cow/reverify.json's failed list:", len(infail))
print("  ", ", ".join("0x" + a for a in infail))
print("reverify failed total:", len(failed))
