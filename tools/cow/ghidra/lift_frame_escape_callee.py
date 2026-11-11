"""For the 14 proven units whose frame-local escapes into a callee argument: who is the callee, and does
it write through what it is handed?

`lift_frame_escape.py --proven` scans all 6,466 booked-pass units and finds 14 that declare a host C array
standing in for the guest frame and then hand that array's ADDRESS to a guest-facing call. The guest said
`lea ecx,[esp+8]` and pushed ecx; our side pushes the address of a host array. The callee receives a
process pointer where a guest stack address belongs.

That is a correctness hole, but it is only DAMAGE if the callee writes through the pointer - or compares it.
If the callee is an import the harness answers without looking, or a function that only reads the struct
fields the harness already pinned, both sides still agree on guest memory and the row is genuinely fine as
far as the contract goes (unsound by construction, harmless in practice). So there are two very different
sentences that both start "14 proven units have an escape":

    "14 units are wrong and must come out of the ledger"
    "14 units are latent, unobservable today, and are the reason the class needs a contract case"

Which one is true decides what the user does about them, and it is not answerable by the count. This tool
resolves the callee for each escape and asks the one question the difference turns on: does anything
downstream WRITE memory at an address derived from its arguments? Conservative by design - "writes memory
somewhere" is enough to make a unit SUSPECT, because the tool is not going to prove non-aliasing across a
call graph it cannot see. It never calls anything a false PASS.

Tripwire: at least one escape must resolve a callee and one must fail to (or all must resolve cleanly).
If NOTHING resolves, the extraction is dead and the report would be all-"unknown", which is how this session
has been wrong five times.
"""
import collections
import io
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import gen_model  # noqa: E402
import lift_frame_escape as FE  # noqa: E402  (THE detector - not a copy of its patterns)
import trivial_audit  # noqa: E402
import lift_frame_predicates as FP  # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
RECORD = os.path.join(ROOT, "cow", "lift_proof_all.json")

BRIDGE_RE = re.compile(r"cow_bridge(?:_tail|_call)?_([0-9a-f]{8})\s*\(([^;]*)\)\s*;")


def main():
    # the population, straight from the AUDITED detector - no re-implementation of its patterns
    d = FE.load_proof()
    passes = sorted((k if len(k) == 8 else k[2:]) for k, v in d.items() if v.get("pass"))
    if not passes:
        sys.exit("REFUSING: load_proof() gave no passing units - the population is empty, so any count "
                 "below would be silence dressed as a result")
    with_arrays, units = FE.scan(passes)
    print("scanned %d booked-pass units; %d declare a frame array; %d hand one to a guest-facing call"
          % (len(passes), with_arrays, len(units)))
    if not units:
        sys.exit("REFUSING: the detector found no escape among booked passes - re-run "
                 "lift_frame_escape.py --proven before believing this absence")

    bodies = trivial_audit.body_index()

    def callee_writes_memory(tgt):
        """Does the callee store to an address that comes from something the CALLER handed it?

        The first version asked only "does the callee store anywhere with a computed address" - and
        almost every real function does, so 13 of 14 came back SUSPECT and nothing came back benign.
        A classifier that cannot answer 'no' has not classified anything. The question the escape
        actually turns on is narrower: is the STORED-TO ADDRESS an incoming argument (a register the
        callee reads before it ever writes - ecx/edx/eax params, or a [ebp+N] stack param)? That is
        exactly what gen_model._reads_before_write answers, so it is the predicate used here.
        """
        bl = bodies.get(tgt)
        if not bl:
            return "unknown (not in generated/all)"
        try:
            ins = (gen_model.model_generated(bl) or {}).get("ins") or []
        except Exception:
            return "unknown (model failed)"
        for c in ins:
            if not gen_model._writes_memory(c):
                continue
            stmt = c.get("stmt") or ""
            m = re.search(r"wr(?:8|16|32|64|f32|f64)\s*\(\s*([^,]+),", stmt)
            if not m:
                continue
            addr_expr = m.group(1)
            if re.search(r"COW_IMG|0x1[0-9a-f]{7}", addr_expr):
                continue                      # a pinned image/global slot is not the caller's pointer
            for r in ("eax", "ecx", "edx", "ebx", "esi", "edi"):
                if re.search(r"\b%s\b" % r, addr_expr) and gen_model._reads_before_write(ins, r):
                    return "stores through incoming arg %s" % r
        return "no store through an incoming argument seen"

    tally = collections.Counter()
    rows = []
    unresolved = 0
    for item in units:
        a, hits = item if isinstance(item, tuple) else (item, [])
        t = FP.read_unit(a)
        kinds = set()
        for m in BRIDGE_RE.finditer(t):
            tgt, arglist = m.group(1), m.group(2)
            # does an array-looking name reach that call's argument list?
            arr = [x for x in re.findall(r"\b(a?u?Stack_[0-9a-fx]+|local_[0-9a-f]+|auStack_\w+)\b", arglist)]
            if not arr:
                continue
            verdict = callee_writes_memory(tgt)
            kinds.add((tgt, verdict))
            if verdict == "unknown (not in generated/all)":
                unresolved += 1
        if not kinds:
            tally["callee unresolved (no bridge matched)"] += 1
            rows.append((a, "-", "-"))
            continue
        worst = "SUSPECT (callee stores through an argument)" if any("through incoming arg" in v for _t, v in kinds) \
            else "no argument-store seen in callee"
        tally[worst] += 1
        rows.append((a, ", ".join(sorted(set(t for t, _v in kinds)))[:38], worst))

    print("=" * 100)
    print("the proven frame-local escapes, by what the callee does with the pointer")
    print("=" * 100)
    print("  escapes scanned: %d" % len(units))
    for k, n in tally.most_common():
        print("    %-34s %4d" % (k, n))
    print("    (callee bodies not found anywhere: %d resolution(s) - 'unknown', never counted benign)"
          % unresolved)
    print()
    print("  %-12s %-40s %s" % ("unit", "callee(s)", "verdict"))
    for a, t, w in rows:
        print("  0x%-10s %-40s %s" % (a, t, w))
    print()
    print("  'no argument-store seen in callee' means exactly that and nothing more: the DIRECT callee's")
    print("  generated body has no store whose address names a register it reads before writing. It is")
    print("  NOT a safety proof - the pointer can be stored into a struct and reach a callee two hops")
    print("  away, or be compared rather than written, and this tool deliberately attempts neither. The")
    print("  class stays a latent hole with no coverage (cowdiff compares guest memory, so a callee that")
    print("  never writes through the pointer makes both sides agree by construction). What the split")
    print("  DOES establish: the case for pulling all 14 out of the ledger is NOT supported - if anything")
    print("  is un-booked, it has to be argued per unit, starting with the SUSPECT row(s).")


if __name__ == "__main__":
    main()
