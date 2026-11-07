"""Why is `int *param_1` not being seen as a pointer? One function, printed in three pieces.

Usage: python tools/cow/ghidra/probe_ptr.py 0x10018ca0
"""
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)
import gen_model          # noqa: E402
import ghidra_c           # noqa: E402
import trivial_audit      # noqa: E402

addr = (sys.argv[1] if len(sys.argv) > 1 else "0x10018ca0").lower().replace("0x", "")
DUMP = os.environ.get("COW_LIFT_DUMP", "C:/ghidra_out/functions_all.jsonl")

entry = None
with open(DUMP, encoding="utf-8", errors="replace") as fh:
    for line in fh:
        try:
            e = json.loads(line)
        except ValueError:
            continue
        if str(e.get("addr", "")).lower().replace("0x", "") == addr:
            entry = e
            break
if entry is None:
    print("not in dump")
    raise SystemExit(1)

sig = entry.get("signature") or ""
body = entry.get("c") or ""
print("signature: %r" % sig)

r = ghidra_c.Rewriter({})
r.collect_pointer_decls(sig + "\n" + body)
print("ptr_names for param_1: %r" % (r.ptr_names.get("param_1"),))
print("all ptr_names: %r" % (dict(list(r.ptr_names.items())[:8]),))

# what does the deref pass make of the actual line?
for line in body.splitlines():
    if "*param_1" in line:
        out = r._derefs(line)
        print("  IN : %s" % line.strip())
        print("  OUT: %s" % out.strip())

m = gen_model.model_generated(trivial_audit.body_index().get(addr) or [])
print("model ok=%s why=%r string_ops=%r" % (m.get("ok"), m.get("why"), m.get("string_ops")))
