"""Does `has_x87` fire on units with no x87 instruction at all?

`model_generated` sets has_x87 from EITHER an x87 mnemonic OR the text `X87_(PUSH|POP|STORE)` anywhere in
the instruction statements. The generated CALL template contains `REGS_STORE; X87_STORE; f_xxx(g);
REGS_LOAD; X87_LOAD;`. If that template is emitted for every call, then every function that calls anything
is booked as x87_not_modelled whether or not it touches the FPU - and the family's population, its ranking,
and any fix written against it are all describing a template artifact.

This measures it on functions the CURRENT model refuses as x87_not_modelled AND on a control group of
non-refused units that contain calls. Read-only.
"""
import collections
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)

import gen_model          # noqa: E402
import trivial_audit      # noqa: E402

REFUSALS = os.path.join(ROOT, "build", "cow_lift", "refusals.json")


def main():
    with open(REFUSALS, encoding="utf-8") as fh:
        refusals = json.load(fh)
    x87 = {k.lower().replace("0x", "") for k, v in refusals.items()
           if str(v).startswith("x87_not_modelled")}
    bodies = trivial_audit.body_index()

    def state(key):
        body = bodies.get(key)
        if body is None:
            return None
        m = gen_model.model_generated(body)
        if not m or not m.get("ok", True):
            return None
        mn = {(c.get("mnem") or "").lower() for c in m["ins"]}
        fp = mn & set(gen_model.X87_MNEMS)
        has_call = bool(m.get("call_sites"))
        # which markers appear, and in WHICH instructions
        push_pop = [c for c in m["ins"] if "X87_PUSH" in (c.get("stmt") or "")
                    or "X87_POP" in (c.get("stmt") or "")]
        store_only = [c for c in m["ins"] if "X87_STORE" in (c.get("stmt") or "")
                      or "X87_LOAD" in (c.get("stmt") or "")]
        return {"fp": bool(fp), "call": has_call, "push_pop": len(push_pop),
                "store_lines": len(store_only),
                "store_in_call_only": all((c.get("mnem") or "") == "call" for c in store_only)}

    # group A: refused as x87_not_modelled
    a = collections.Counter()
    marker_only = []
    for k in sorted(x87):
        s = state(k)
        if s is None:
            a["<no model>"] += 1
            continue
        if not s["fp"]:
            a["NO FP MNEMONIC (refused by markers)"] += 1
            if s["store_in_call_only"] and s["push_pop"] == 0:
                marker_only.append(k)
        else:
            a["real fp use"] += 1
    print("== %d units refused x87_not_modelled ==" % len(x87))
    for k, v in a.most_common():
        print("  %6d  %s" % (v, k))
    if marker_only:
        print("  of which PUSH/POP-free, marker-in-call-template only: %d  e.g. %s"
              % (len(marker_only), ", ".join("0x" + x for x in marker_only[:6])))

    # group B: control - units refused for some OTHER reason that contain a call
    b = collections.Counter()
    for k, v in refusals.items():
        r = str(v)
        if r.startswith("x87_not_modelled"):
            continue
        s = state(k.lower().replace("0x", ""))
        if s is None:
            continue
        b["%s | fp=%s call=%s" % (r.split("_")[0], s["fp"], s["call"])] += 1
    print("\n== control: other refusals, does the call template imply FP? ==")
    for k, v in b.most_common(12):
        print("  %6d  %s" % (v, k))
    return 0


if __name__ == "__main__":
    sys.exit(main())
