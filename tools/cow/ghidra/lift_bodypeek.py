"""Print the generated body (the oracle) and Ghidra's C (the candidate) for any entry.

Every pattern fix in this project has been designed against real samples, and the census tools have a
recurring gap: they tell you the SHAPE of a group but not what one of its members actually looks like on
both sides. The x87 work needed that view and had a filter baked into the tool that printed it, so the
same twenty lines got rewritten a third time. This is the generic version: give it addresses, get the
guest instructions with their translated statements and Ghidra's answer for the same bytes.

Read-only.

    python tools/cow/ghidra/lift_bodypeek.py 0x10199770
    python tools/cow/ghidra/lift_bodypeek.py 0x10199770,0x1006e790 --max 40
"""
import argparse
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)

import gen_model          # noqa: E402
import trivial_audit      # noqa: E402

DUMP = os.environ.get("COW_LIFT_DUMP", "C:/ghidra_out/functions_all.jsonl")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("entries", help="comma-separated addresses")
    ap.add_argument("--dump", default=DUMP)
    ap.add_argument("--max", type=int, default=80, help="max instructions to print per body")
    ap.add_argument("--model", action="store_true", help="also print the extracted plumbing facts")
    a = ap.parse_args()

    want = [x.strip().lower().replace("0x", "") for x in a.entries.split(",") if x.strip()]
    entries = {}
    with open(a.dump, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            if not line.strip():
                continue
            try:
                e = json.loads(line)
            except ValueError:
                continue
            ad = str(e.get("addr", "")).lower().replace("0x", "")
            if ad in want:
                entries[ad] = e

    bodies = trivial_audit.body_index()
    for key in want:
        body = bodies.get(key)
        e = entries.get(key)
        print("=" * 78)
        print("0x%s" % key)
        if body is None:
            print("  <no generated body>")
        else:
            m = gen_model.model_generated(body)
            if a.model and m:
                for k in ("ok", "why", "no_ret", "mixed_ret", "purge", "pops", "frame_pointer",
                          "locals", "reg_args", "stack_args_evidenced", "has_x87", "has_string_op",
                          "has_indirect_call", "extra_pushes"):
                    if k in m:
                        print("  %-20s %s" % (k, m[k]))
                for s in m.get("call_sites") or []:
                    print("    call 0x%08x -> %s npush=%s ecx_before=%s cleanup=%s"
                          % (s["addr"], ("0x%x" % s["target"]) if s["target"] is not None
                             else "INDIRECT:" + str(s.get("op")), s.get("npush"),
                             s.get("ecx_before"), s.get("cleanup")))
            print("-- generated body: guest instructions and their translation --")
            for c in (m or {}).get("ins", [])[:a.max]:
                stmt = " ".join((c.get("stmt") or "").split())
                print("  %08x %-30s | %s" % (c["addr"], (c.get("text") or "")[:30], stmt[:150]))
        print("-- Ghidra C --")
        print((e or {}).get("c") or "  <none>")
        print()
    return 0


if __name__ == "__main__":
    sys.exit(main())
