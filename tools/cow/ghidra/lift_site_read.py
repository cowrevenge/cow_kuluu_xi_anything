"""Per-call-site reader: the end-to-end look at ONE unit before any rule is proposed.

The standing rule in this loop, earned repeatedly: no new mechanism without reading one unit end to end -
the site data the lifter actually used, next to the instructions those numbers came from. Every confident
claim that skipped this step died (five rejected mechanisms for the 136-unit cluster; the register-args lead
here is the current candidate and gets the same treatment).

    python tools/cow/ghidra/lift_site_read.py 0x100013c0

For each call site it prints what `lift.py`'s argcount guard actually saw - npush, npush_walk, npush_stop,
npush_delta, cleanup, the pushed operands, and the push_values bail - beside the ~14 guest instructions above
the call, so the number and its source can be compared by a human rather than trusted.

It also prints the decompiler's view where available (the Ghidra arg count baked into the refusal string) so
the two claims - "Ghidra says N arguments" and "the bytes pushed M words" - sit on the same screen, since
the whole argcount_mismatch class is a disagreement between them.
"""
import io
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
for k in [k for k in list(os.environ) if k.startswith("COW_")]:
    os.environ.pop(k)                                   # a read never inherits a knob
import gen_model  # noqa: E402
import trivial_audit  # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
RECORD = os.path.join(ROOT, "cow", "lift_proof_all.json")


def main():
    if len(sys.argv) < 2:
        sys.exit("usage: lift_site_read.py 0x100013c0")
    a = sys.argv[1].lower().replace("0x", "")
    bodies = trivial_audit.body_index()
    bl = bodies.get(a)
    if not bl:
        sys.exit("REFUSING: f_%s is not in the body index - cannot read what is not there" % a)
    m = gen_model.model_generated(bl)
    ins = m.get("ins") or []
    if not ins:
        sys.exit("REFUSING: f_%s parsed to zero instructions" % a)

    ledger = {}
    if os.path.exists(RECORD):
        with io.open(RECORD, encoding="utf-8", errors="replace") as fh:
            ledger = json.load(fh)
    row = ledger.get(a) or {}

    print("=" * 100)
    print("f_%s   prologue_len=%s   esp_delta_reliable=%s   tail_jump=%s   pops=%s"
          % (a, m.get("prologue_len"), m.get("esp_delta_reliable"),
             m.get("tail_jump"), m.get("pops")))
    print("ledger: %s" % ("PASS" if row.get("pass") else
                          ("%s  %s" % (row.get("why"), str(row.get("detail") or "")[:60])) if row else "absent"))
    print("=" * 100)

    by_addr = {c["addr"]: c for c in ins}
    for s in (m.get("call_sites") or []):
        tgt = s.get("target")
        print("\n  call @0x%08x -> %s" % (s["addr"], ("f_%08x" % tgt) if tgt else ("INDIRECT %s" % s.get("op"))))
        print("     npush=%s  npush_walk=%s  npush_delta=%s  npush_stop=%s" % (
            s.get("npush"), s.get("npush_walk"), s.get("npush_delta"), s.get("npush_stop")))
        print("     cleanup=%s  retaddr=%s  ecx_before=%s" % (
            s.get("cleanup"), s.get("retaddr"), s.get("ecx_before")))
        print("     pushed=%s" % (s.get("pushed"),))
        print("     push_values=%s" % ("COMPLETE" if s.get("push_values") else None))
        print("     push_values_why=%r  cause=%r" % (s.get("push_values_why"), s.get("push_values_cause")))
        print("     --- guest instructions above the call (the source of those numbers) ---")
        idx = next((i for i, c in enumerate(ins) if c["addr"] == s["addr"]), None)
        if idx is None:
            print("       (call not found in ins - the reader is lying, investigate)")
            continue
        for c in ins[max(0, idx - 14):idx]:
            mark = "PUSH" if c["mnem"] == "push" else ("    " if not c["mnem"].startswith("j") else "BRCH")
            inpro = " (in prologue)" if ins.index(c) < (m.get("prologue_len") or 0) else ""
            print("       %s %08x: %s%s" % (mark, c["addr"], c["text"][:58], inpro))
        # what the callee wants, per the generated body: does it read ecx/edx/eax before writing them?
        if tgt:
            tbl = bodies.get("%08x" % tgt)
            if tbl:
                cf = gen_model.callee_facts(tbl)
                if cf.get("ok"):
                    print("     callee reads: ecx=%s edx=%s eax=%s  (so a 'missing' argument may be a "
                          "REGISTER argument)"
                          % (cf.get("wants_ecx"), cf.get("wants_edx"), cf.get("wants_eax")))
                else:
                    print("     callee facts: unavailable (%s)" % cf.get("why"))
            else:
                print("     callee f_%08x: not in generated/all" % tgt)
    print()
    print("  Compare npush against the PUSH lines above, and the callee's wants against Ghidra's argument")
    print("  list. If the bytes pushed zero words and the callee reads ecx, the disagreement is a category")
    print("  error in the comparison - but that sentence needs to be TRUE for this unit before it is a rule")
    print("  for 1,508 of them.")


if __name__ == "__main__":
    main()
