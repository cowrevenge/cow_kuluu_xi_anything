"""Is `param_i -> sp0 + 4 + 4*(i-1-len(reg_order))` a FACT or an assumption?

lift.py:1105-1114 maps Ghidra's param_1..param_n to (register arguments first, then stack slots) using
`reg_order = [r for r in ('ecx','edx') if r in m['reg_args']]`. That is only sound if Ghidra numbers the
register arguments among param_1.., and there is now a counter-example on the table: f_1001ac50 has
reg_args=['ecx'] and a Ghidra signature `void FUN_1001ac50(int param_1, undefined4 param_2, ... )` with
EIGHT named params, while the guest reads `[esp+4]` into eax for the value Ghidra calls param_1 and takes
its address with `lea ecx,[esp+0xc]` (= sp0+4 after two pushes). If the mapping is right, `&param_1` is the
address of ecx - which is not a thing - and the callee would be handed `sp0 + 0x0u` for the wrong slot.

So the COW_MODEL_PARAM_BIND_MEASURE gate must not rest on that assumption. This prints, per unit, every
ingredient the decision needs - dump cc, param_count, reg_args, which param the body takes the address of,
and the k each rule would pick - so the gate is chosen from data rather than from my reading of one unit.

Reads only: nothing is written and no knob is consulted.
"""
import io
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
for _p in (HERE, os.path.join(ROOT, "tools", "cow")):
    if _p not in sys.path:
        sys.path.insert(0, _p)
for _k in [k for k in list(os.environ) if k.startswith("COW_")]:
    os.environ.pop(_k)                              # a read never inherits a knob

import gen_model                                     # noqa: E402
import trivial_audit                                 # noqa: E402

DUMP = "D:/projects/ghidra/ghidra_out/functions_all.jsonl"
POP = os.path.join(ROOT, "cow", "wip", "frame-binding-pop.txt")


def main():
    with io.open(POP, encoding="utf-8") as fh:
        want = {"0x" + ln.strip()[2:] if not ln.strip().startswith("0x") else ln.strip()
                for ln in fh if ln.strip()}
    recs = {}
    with io.open(DUMP, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            try:
                rec = json.loads(line)
            except ValueError:
                continue
            ad = (rec.get("addr") or "").lower()
            if ad in want:
                recs[ad] = rec
            if len(recs) == len(want):
                break
    if len(recs) < 20:
        sys.exit("REFUSING: only %d of %d population units found in the dump." % (len(recs), len(want)))

    bodies = trivial_audit.body_index()
    rows = []
    for ad, rec in sorted(recs.items()):
        c = rec.get("c") or ""
        sig = c.split("{")[0]
        hex8 = ad[2:]
        bl = bodies.get(hex8) or []
        m = gen_model.model_generated(bl) if bl else {}
        reg_args = m.get("reg_args") or []
        addressed = sorted({int(x) for x in re.findall(r"&\s*param_(\d+)", c)})
        if not addressed:
            continue                                  # the local family - not this question
        named_this = bool(re.search(r"\bthis\b", sig))
        rows.append({"entry": ad, "cc": rec.get("cc"), "param_count": rec.get("param_count"),
                     "n_named": len(re.findall(r"\bparam_\d+", sig)), "reg_args": reg_args,
                     "addressed": addressed, "named_this": named_this,
                     "k_naive": [i - 1 - len(reg_args) for i in addressed]})

    print("units that take the address of a param: %d" % len(rows))
    with_reg = [r for r in rows if r["reg_args"]]
    no_reg = [r for r in rows if not r["reg_args"]]
    this_named = [r for r in rows if r["named_this"]]
    print("  reg_args EMPTY (mapping is forced by arithmetic alone) : %d" % len(no_reg))
    print("  reg_args non-empty (mapping depends on the assumption) : %d" % len(with_reg))
    print("  signature names `this` explicitly                     : %d" % len(this_named))
    print("\nsample of the risky ones (reg_args non-empty):")
    for r in with_reg[:10]:
        print("  %-12s cc=%-12s param_count=%-3s n_named=%-3s reg_args=%-8s addressed=%-8s k=%s this=%s"
              % (r["entry"], r["cc"], r["param_count"], r["n_named"], ",".join(r["reg_args"]),
                 r["addressed"], r["k_naive"], r["named_this"]))
    print("\nthe motivating exemplar, if present:")
    for r in rows:
        if r["entry"] == "0x1001ac50":
            print("  %s" % json.dumps(r, sort_keys=True))
    print("\nDECISION THIS FEEDS: binding is only sound where the slot address is forced. If `cc` says"
          " thiscall and the signature does NOT name `this`, then Ghidra's param_1 is the first STACK"
          " argument and len(reg_order) must NOT be subtracted - and the units in the risky bucket must"
          " stay refused until the mapping is derived per unit, not assumed.")


if __name__ == "__main__":
    main()
