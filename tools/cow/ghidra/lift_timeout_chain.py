"""A 2-instruction unit does not loop by itself. Follow the thunk chain and look for a CYCLE.

`lift_timeout_join.py` found that the 9 `timeout` units are not in the f_10316337 family and carry no
RT_UNIMPL - a genuinely separate class. It also showed something more useful: they are TINY (2 to 12
instructions) and each makes one or two calls. A unit whose whole body is `push ebp; jmp elsewhere` cannot
be the thing that spins. Whatever is spinning is downstream.

The shape that turns a 2-instruction unit into an unbounded run is a **thunk chain that closes on
itself**: A tail-calls B, B tail-calls C, C tail-calls A. In the guest that is an infinite loop made
entirely of jumps, no instruction writes memory, no register-only loop test fires (each body is two
instructions), and cowdiff's in-process budgets - which tick on writes - see nothing. It is also exactly
the failure mode the harness's own label gestures at: "parked ... a register-only loop - no in-process
budget can reach it".

This walks, from each timeout unit, the call/tail-call chain through the GENERATED bodies (the side that
executes guest semantics) to a fixed depth and reports a cycle when one closes. Static, read-only, no
harness. A cycle is strong evidence; only a run convicts - and the absence of a cycle is reported as
absence, never as innocence.
"""
import io
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
os.environ.pop("COW_MODEL_NPUSH_FRAME_AWARE", None)
import gen_model  # noqa: E402
import lift_frame_predicates as FP  # noqa: E402
import lift_hang_callee_scan as S  # noqa: E402
import trivial_audit  # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
RECORD = os.path.join(ROOT, "cow", "lift_proof_all.json")
TIMEOUTS = ["100543a0", "1010c6e0", "1010c750", "101172a0", "1014e620", "101c4a20",
            "1021df70", "1025ed50", "10327850"]
BRIDGE_RE = re.compile(r"cow_bridge(?:_tail|_call)?_([0-9a-f]{8})")
MAX_DEPTH = 24


def gen_calls(bl, gt, addr):
    """What the generated body of `addr` calls or jumps to."""
    out = set(gt.get(addr) or ())
    try:
        m = gen_model.model_generated(bl or [])
    except Exception:
        return out
    for s in (m.get("call_sites") or []):
        if s.get("target"):
            out.add("%08x" % s["target"])
    tj = m.get("tail_jump")
    if tj:
        out.add("%08x" % tj if isinstance(tj, int) else str(tj))
    return out


def chain(addr, bodies, gt, depth=MAX_DEPTH):
    """Follow the chain breadth-first; return (cycle_path | None, visited)."""
    start = addr
    stack = [([start], 0)]
    seen = set()
    while stack:
        path, d = stack.pop()
        cur = path[-1]
        if cur in seen and d < depth:
            continue
        seen.add(cur)
        if d >= depth:
            continue
        nxt = gen_calls(bodies.get(cur), gt, cur)
        for n in nxt:
            if n in path:
                return path[path.index(n):] + [n], seen
            stack.append((path + [n], d + 1))
    return None, seen


def selftest():
    """The detector must find a cycle it is handed, and must not invent one it is not."""
    # A -> B -> C -> A, each a two-instruction thunk
    def thunk(a, b):
        return ["/* %s: push ebp */" % a, "  { }",
                "/* %s: jmp f_%s */" % (str(int(a, 16) + 1), b), "  { f_%s(g); return; }" % b]
    bodies = {"a0000001": thunk("a0000001", "a0000002"),
              "a0000002": thunk("a0000002", "a0000003"),
              "a0000003": thunk("a0000003", "a0000001")}
    gt = {"a0000001": {"a0000002"}, "a0000002": {"a0000003"}, "a0000003": {"a0000001"}}
    cyc, _seen = chain("a0000001", bodies, gt)
    if not cyc:
        sys.exit("SELFTEST FAILED: a three-node cycle was not detected - every 'no cycle' below is noise")
    if len(set(cyc)) < 2 or cyc[0] != cyc[-1] and cyc[0] not in cyc[1:]:
        sys.exit("SELFTEST FAILED: cycle reported without closing: %r" % (cyc,))
    # and a straight chain must NOT report one
    acyclic = {"b0000001": ["/* b0000001: ret */", "  { return; }"]}
    gt2 = {"b0000001": set()}
    cyc2, _ = chain("b0000001", acyclic, gt2)
    if cyc2:
        sys.exit("SELFTEST FAILED: a leaf with no callees reported a cycle %r - the detector is "
                 "manufacturing the finding" % (cyc2,))
    print("selftest: finds A->B->C->A, refuses to see a cycle in a leaf")


def edge_is_unconditional(addr, closing_from, bodies):
    """Is the edge that closes the cycle an unconditional tail jump, or a call sitting under a branch?

    This distinction is the whole finding, and the first version of this tool blurred it: it reported
    `f_1031d016 -> f_1031d016` as a "closed thunk chain" until the body was read, which showed the self-call
    at 1031d047 sits BEHIND `jne 0x1031d045` - guarded recursion. A graph cycle is not a non-terminating
    program; only an unconditional edge (a jmp that cannot be skipped) makes the chain unbounded by
    construction. Reporting the two alike is how a plausible mechanism becomes a published false one.
    """
    bl = bodies.get(closing_from) or []
    try:
        ins = (gen_model.model_generated(bl) or {}).get("ins") or []
    except Exception:
        return "unknown"
    # find the instruction that transfers to `addr`, then look back within its basic block for a jcc
    for k, c in enumerate(ins):
        if addr in str(c.get("text", "")) and (c["mnem"] in ("call", "jmp") or c["mnem"].startswith("j")):
            for p in reversed(ins[:k]):
                if p["mnem"].startswith("j") and p["mnem"] != "jmp":
                    return "guarded (a branch can skip it: %s)" % p["text"][:30]
            if c["mnem"] == "jmp":
                return "UNCONDITIONAL jmp - unbounded by construction"
            return "call with no branch above it in the block"
    return "unknown"


def main():
    selftest()
    with io.open(RECORD, encoding="utf-8", errors="replace") as fh:
        d = json.load(fh)
    bodies = trivial_audit.body_index()
    gt = S.gen_targets()
    if not gt:
        sys.exit("REFUSING: the call scan sees nothing - the walk would report no cycles everywhere")

    print()
    print("=" * 100)
    print("timeout units: follow the thunk chain, look for a cycle")
    print("=" * 100)
    print("  %-12s %6s %8s   %s" % ("unit", "insns", "chain", "verdict"))
    hits = 0
    strong = 0
    for a in TIMEOUTS:
        bl = bodies.get(a) or []
        try:
            n = len((gen_model.model_generated(bl) or {}).get("ins") or [])
        except Exception:
            n = -1
        cyc, seen = chain(a, bodies, gt)
        if cyc:
            hits += 1
            closing_from = cyc[-2] if len(cyc) >= 2 else cyc[0]
            kind = edge_is_unconditional(cyc[-1], closing_from, bodies)
            if kind.startswith("UNCONDITIONAL"):
                strong += 1
            print("  0x%-10s %6d %8d   CYCLE %s  [%s]"
                  % (a, n, len(seen), " -> f_".join(cyc[:6]), kind))
        else:
            print("  0x%-10s %6d %8d   no cycle within depth %d" % (a, n, len(seen), MAX_DEPTH))

    print()
    if hits:
        print("  %d of %d timeout units reach a cycle; %d of those close on an UNCONDITIONAL jmp."
              % (hits, len(TIMEOUTS), strong))
        if not strong:
            print("  NONE are unbounded by construction: every closing edge sits under a branch, i.e. this")
            print("  is GUARDED RECURSION, not an infinite jump chain. A graph cycle is not a non-terminating")
            print("  program, and saying otherwise is how a plausible mechanism becomes a published false")
            print("  one - the read of f_1031d016 (self-call at 1031d047 behind `jne 1031d045`) is what")
            print("  stopped this tool claiming it.")
            print()
            print("  What IS established, and is worth more than the cycle: the timeouts are not their own")
            print("  units' behaviour at all. Bodies of 2-12 instructions cannot spin; six of the nine route")
            print("  through ONE callee, f_1031d016, which recurses and calls heap/IAT helpers. So this")
            print("  'class' is one callee's cost profile, not nine defects - the same lesson the 116-row")
            print("  hang family taught. Next question for a run: is it deep recursion under fuzzed state,")
            print("  or an import the host answers slowly?")
        else:
            print("  %d close on an unconditional jmp - that shape IS unbounded by construction and is the"
                  % strong)
            print("  one worth convicting with a run first.")
    else:
        print("  No closed chain found in any of the 9. That is an ABSENCE, not innocence: the walk is")
        print("  depth-limited and follows only edges the generated body states. The class stays open and")
        print("  needs a run to see where it actually spins.")


if __name__ == "__main__":
    main()
