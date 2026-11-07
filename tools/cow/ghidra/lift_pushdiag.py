"""Why is a call site's pushed-argument list a GUESS rather than a MEASUREMENT?

~2,134 units are refused as argcount_mismatch, which fires only while the pushed words are still guessed.
"Guessed" is not one condition: gen_model._push_values bails for four quite different reasons, and the fix
for each is different (a bookkeeping gap, a missing operand form, a staleness rule that is too strict).
Before changing any of them this counts which one actually dominates.

Read-only. It builds the model for sampled refused units and tallies the reason each call site records on
itself (site["push_values_why"], set by _push_values).

    python tools/cow/ghidra/lift_pushdiag.py                  # 200 refused units
    python tools/cow/ghidra/lift_pushdiag.py --n 500 --seed 3
"""
import argparse
import collections
import json
import os
import random
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))          # <root>/tools/cow/ghidra
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)

import gen_model          # noqa: E402
import trivial_audit      # noqa: E402

REFUSALS = os.path.join(ROOT, "build", "cow_lift", "refusals.json")
DUMP = os.environ.get("COW_LIFT_DUMP", "C:/ghidra_out/functions_all.jsonl")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--n", type=int, default=200)
    ap.add_argument("--seed", type=int, default=7)
    ap.add_argument("--prefix", default="argcount_mismatch")
    ap.add_argument("--dump", default=DUMP)
    a = ap.parse_args()
    globals()["DUMP"] = a.dump

    if not os.path.exists(REFUSALS):
        print("no refusal snapshot at %s - run lift.py --reasons-out first" % REFUSALS)
        return 2
    with open(REFUSALS, encoding="utf-8") as fh:
        refusals = json.load(fh)
    addrs = [k for k, v in refusals.items() if str(v).startswith(a.prefix)]
    random.Random(a.seed).shuffle(addrs)
    addrs = addrs[:a.n]
    if not addrs:
        print("no refusals with prefix %r" % a.prefix)
        return 2

    want = {x.lower().replace("0x", "") for x in addrs}
    entries = {}
    with open(DUMP, encoding="utf-8", errors="replace") as fh:
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
                if len(entries) == len(want):
                    break

    bodies = trivial_audit.body_index()
    why = collections.Counter()
    shapes = collections.Counter()
    # For a plain register we could not name, what actually wrote it? _value_expr returns None either for a
    # whole mnemonic it does not model, or for a modelled mnemonic given an operand shape it cannot express.
    # Those need different fixes - add the instruction, or add the operand form - so they are counted apart.
    writer_ops = collections.Counter()
    units_measured_any = 0
    units_checked = 0

    for raw in addrs:
        key = raw.lower().replace("0x", "")
        body = bodies.get(key)
        if not body:
            why["<no generated body>"] += 1
            continue
        m = gen_model.model_generated(body)
        if not m or not m.get("ok", True):
            why["<model not ok: %s>" % (m or {}).get("why", "?")] += 1
            continue
        sites = m.get("call_sites") or []
        ins = m.get("ins") or []
        units_checked += 1
        any_measured = False
        for s in sites:
            w = s.get("push_values_why")
            if w is None:
                # no call recorded a reason: either no pushes at all, or the walk never ran
                w = "<untagged>" if s.get("npush") else "<no pushes>"
            else:
                w = w or "MEASURED"
            if w.startswith("unnameable:"):
                reg = w.split(":", 1)[1].strip()
                if reg in gen_model.REG32:
                    # What wrote this register. Restricted to instructions BEFORE the call: the first
                    # version of this line took the last write anywhere in the body, and a function's
                    # epilogue (pop ebx / pop esi / pop edi) runs after its calls, so it shadowed the
                    # write that actually produced the pushed value and the census reported 528 "pop"
                    # offenders that had nothing to do with the argument. The push address is not kept on
                    # the site, so the call address is the closest honest bound - and it is the same
                    # window the staleness rule already reasons about.
                    call_at = s.get("addr")
                    wrote = [(c.get("mnem") or "?", c.get("op") or "") for c in ins
                             if (gen_model._writes_reg(c.get("mnem") or "", c.get("op") or "")
                                 and gen_model._dst_reg(c.get("op") or "") == reg
                                 and (call_at is None or c.get("addr", 0) < call_at))]
                    if not wrote:
                        writer_ops["<never written: %s>" % reg] += 1
                    else:
                        mn, op = wrote[-1]
                        # keep the operand shape but drop addresses, so forms cluster honestly
                        shape = re.sub(r"0x[0-9a-f]+", "IMM", op)
                        writer_ops["%s %s" % (mn, shape[:34])] += 1
                else:
                    writer_ops["<not-a-register: %s>" % w.split(":", 1)[1]] += 1
            if w == "MEASURED":
                any_measured = True
            why[w.split(":")[0] if w.startswith(("unnameable", "stale")) else w] += 1
            if w not in ("MEASURED", "<no pushes>"):
                shapes["%s | npush=%s pushed=%s pending? | %s"
                        % (w, s.get("npush"), (s.get("pushed") or [""] * 99) and len(s.get("pushed") or []),
                           str(s.get("target") or "?")[:10])] += 1
        units_measured_any += 1 if any_measured else 0

    print("sampled refused units : %d" % len(addrs))
    print("models built          : %d" % units_checked)
    print("units with >=1 measured call site: %d" % units_measured_any)
    print("\n== why each call site is guessed ==")
    for k, v in why.most_common(14):
        print("  %6d  %s" % (v, k))
    print("\n== top offending shapes ==")
    for k, v in shapes.most_common(12):
        print("  %6d  %s" % (v, k))
    print("\n== what wrote the register we could not name ==")
    print("   (the last write before the call; this is the model gap to close)")
    for k, v in writer_ops.most_common(18):
        print("  %6d  %s" % (v, k))
    return 0


if __name__ == "__main__":
    sys.exit(main())
