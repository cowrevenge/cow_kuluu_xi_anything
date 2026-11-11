"""Why did the four-position check fail? Dump the emitted text for one unit per knob combination.

Not a check - a look. The failures were `bridge_at=-1` (the tail bridge call is not where the check
assumed it was) and "the lift knob alone changed output" (which should be impossible if the emitted
list comes only from the model). Both need the actual bytes, not more inference.
"""
import os
import re
import sys

HERE = r"D:\Projects\ffxi_disassembly\Cow_kuluu_xi_anything\tools\cow\ghidra"
sys.path.insert(0, HERE)
if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")
DUMP = os.environ.get("COW_LIFT_DUMP", "D:/projects/ghidra/ghidra_out/functions_all.jsonl")

A = (sys.argv[1] if len(sys.argv) > 1 else "100641b0").lower().replace("0x", "")
import json
import lift
import gen_model

d = None
with open(DUMP, encoding="utf-8", errors="replace") as fh:
    for line in fh:
        line = line.strip()
        if not line:
            continue
        try:
            rec = json.loads(line)
        except ValueError:
            continue
        if lift.norm(rec.get("addr")) == "0x" + A:
            d = rec
            break
if d is None:
    sys.exit("no record for 0x%s" % A)


def render(model, liftk):
    os.environ.pop("COW_MODEL_TAIL_POP_RUN", None)
    os.environ.pop("COW_LIFT_TAIL_EPILOGUE", None)
    if model:
        os.environ["COW_MODEL_TAIL_POP_RUN"] = "1"
    if liftk:
        os.environ["COW_LIFT_TAIL_EPILOGUE"] = "1"
    import importlib
    importlib.reload(gen_model)
    importlib.reload(lift)
    ctx = lift.Ctx(DUMP, "12.2")
    ctx.problems = []
    ok, why = lift.classify(d)
    if not ok:
        return "REFUSED classify:" + why
    m = gen_model.model_generated(gen_model_lines())
    txt, why2 = lift.emit(d, ctx)
    if txt is None:
        return "REFUSED emit:" + why2
    return txt, m


def gen_model_lines():
    import lift_clobber_predicate_blindness as T
    return T.blines(A)


import lift_clobber_predicate_blindness as T
for model in (False, True):
    for liftk in (False, True):
        r = render(model, liftk)
        if isinstance(r, str):
            print("\n### model=%s lift=%s -> %s" % (model, liftk, r))
            continue
        txt, m = r
        pops = re.findall(r"/\*\s*pop\s+(\w+)\s*\*/", txt)
        bridge = [mm.start() for mm in re.finditer(r"cow_bridge_tail_[0-9a-f]+\(", txt)]
        poppos = [txt.find("/* pop %s */" % p) for p in pops]
        print("\n### model=%s lift=%s" % (model, liftk))
        print("    model pops   : %s   tail_jump=%s" % (m.get("pops"), bool(m.get("tail_jump"))))
        print("    pops emitted : %s at %s" % (pops, poppos))
        print("    bridge calls : %s" % bridge)
        i = txt.find("TAIL CALL")
        print("    banner tail  : %s" % (txt[i:i + 200].replace("\n", " | ") if i >= 0 else "(none)"))
        j = txt.find("cow_bridge_tail_")
        if j >= 0:
            print("    around bridge: %s" % txt[max(0, j - 260):j + 60].replace("\n", " | ")[-320:])
