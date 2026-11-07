"""Is `string_op_not_modelled` (1,261) blocked by a missing model, or by the frame being gone?

lift_stringdiag.py showed 98% are `rep` forms, and the flag-free ones (rep stos/movs, ~60%) looked like a
clean first slice. Then one unit said otherwise: for

    lea edi, [esp + 0xc]  /  mov ecx, 0x25  /  rep stosd dword ptr es:[edi], eax

Ghidra produced

    uint local_94 [37];
    puVar7 = local_94;
    for (iVar3 = 0x25; iVar3 != 0; iVar3 = iVar3 + -1) { *puVar7 = 0xffffffff; puVar7 = puVar7 + 1; }

The decompiler DELETED THE FRAME: the guest's destination was its own stack, and the lifted C writes a host
local instead. cowdiff compares the memory the two sides leave behind, including the stack region, so a body
built from that C cannot be right no matter how good the loop model is. That is the "body as semantics"
problem, not a missing rep loop.

So the question that decides whether to START this family is not "can I write a rep loop" (I can - the step
width and the direction flag are x86 ISA facts, not the oracle's opinion). It is: for how many units are the
string op's registers (ecx count, edi destination, esi source) still NAMEABLE to something the lifted body
can evaluate - a constant, an image address, a parameter - rather than a pointer into a frame Ghidra turned
into locals?

  nameable    -> a model is worth writing: emit the loop from x86 facts over expressions the body has
  frame-bound -> blocked by frame deletion, same as the 455 `store=value` memory rows; park with the reason
  unknown     -> say so, do not guess

Read-only.

    python tools/cow/ghidra/lift_stringframe.py
    python tools/cow/ghidra/lift_stringframe.py --n 600 --seed 3
"""
import argparse
import collections
import json
import os
import random
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)

import gen_model          # noqa: E402
import trivial_audit      # noqa: E402

REFUSALS = os.path.join(ROOT, "build", "cow_lift", "refusals.json")
DUMP = os.environ.get("COW_LIFT_DUMP", "C:/ghidra_out/functions_all.jsonl")

NEEDS = {  # which registers each form reads as its operands
    "stosd": ("ecx", "edi"), "stosb": ("ecx", "edi"), "stosw": ("ecx", "edi"),
    "movsd": ("ecx", "edi", "esi"), "movsb": ("ecx", "edi", "esi"), "movsw": ("ecx", "edi", "esi"),
    "scasb": ("ecx", "edi"), "scasd": ("ecx", "edi"),
    "cmpsb": ("esi", "edi", "ecx"), "cmpsd": ("esi", "edi", "ecx"),
    "lodsb": ("esi", "ecx"), "lodsd": ("esi", "ecx"),
}
FRAME = re.compile(r"\b(esp|ebp)\b")


def last_write_of(ins, i, reg):
    """The instruction that last wrote REG before index i, or None."""
    for j in range(i - 1, -1, -1):
        c = ins[j]
        op = c.get("op") or ""
        if (c.get("mnem") or "") == "rep":
            continue
        if op.startswith(reg + ","):
            return c
        # a loop or a call may rewrite it; stop looking rather than assume
        if (c.get("mnem") or "") in ("call", "rep"):
            return None
    return None


def classify_operand(c):
    """How a register got its value: frame / const-or-image / other / never-written."""
    if c is None:
        return "never-written"
    op = (c.get("op") or "").split(",", 1)[1] if "," in (c.get("op") or "") else ""
    stmt = c.get("stmt") or ""
    if isinstance(stmt, list):
        stmt = "\n".join(stmt)
    if FRAME.search(op) or FRAME.search(stmt):
        return "frame"
    if re.search(r"\b(0x[0-9a-fA-F]+|\d+)\s*\+?\s*RD?", op) or "RD" in stmt:
        return "const-or-image"
    if re.fullmatch(r"\s*(eax|ebx|ecx|edx|esi|edi|ebp|esp)\s*", op or " "):
        return "reg-copy"
    return "other"


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--n", type=int, default=300)
    ap.add_argument("--seed", type=int, default=5)
    ap.add_argument("--dump", default=DUMP)
    ap.add_argument("--show", type=int, default=4)
    a = ap.parse_args()

    with open(REFUSALS, encoding="utf-8") as fh:
        refusals = json.load(fh)
    addrs = [k.lower().replace("0x", "") for k, v in refusals.items()
             if str(v).startswith("string_op_not_modelled")]
    random.Random(a.seed).shuffle(addrs)
    addrs = addrs[:a.n]

    want = set(addrs)
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
    verdict = collections.Counter()
    per_op = collections.Counter()
    examples = collections.defaultdict(list)
    for key in sorted(addrs):
        body = bodies.get(key)
        if not body:
            verdict["<no body>"] += 1
            continue
        m = gen_model.model_generated(body)
        if not m or not m.get("ok", True):
            verdict["<model not ok>"] += 1
            continue
        ins = m["ins"]
        kinds = {}
        ops = []
        for i, c in enumerate(ins):
            form = gen_model.string_op_of(c)
            if not form:
                continue
            base = form.split()[-1]
            ops.append(base)
            for reg in NEEDS.get(base, ()):
                w = last_write_of(ins, i, reg)
                k = classify_operand(w)
                # the worst operand seen for this register wins
                rank = {"frame": 3, "other": 2, "never-written": 2, "reg-copy": 1, "const-or-image": 0}
                if rank.get(k, 2) >= rank.get(kinds.get(reg), -1):
                    kinds[reg] = k
        if not ops:
            verdict["<no string op - stale snapshot>"] += 1
            continue
        vals = set(kinds.values())
        if "frame" in vals:
            bucket = "FRAME-BOUND (Ghidra deleted the frame the loop writes)"
        elif vals <= {"const-or-image"}:
            bucket = "NAMEABLE (all operands are constants/image - modelable)"
        elif vals <= {"const-or-image", "reg-copy"}:
            bucket = "MOSTLY NAMEABLE (register copies too)"
        else:
            bucket = "UNKNOWN operand"
        verdict[bucket] += 1
        per_op[",".join(sorted(set(ops))) + " -> " + bucket.split(" (")[0]] += 1
        if len(examples[bucket]) < a.show:
            examples[bucket].append((key, sorted(set(ops)), kinds))

    print("sampled %d string-op refusals" % len(addrs))
    for k, v in verdict.most_common():
        print("  %6d  %s" % (v, k))
    print("\n-- op set x verdict --")
    for k, v in per_op.most_common(12):
        print("  %5d  %s" % (v, k))
    print("\n-- examples --")
    for g, ex in examples.items():
        print(" [%s]" % g)
        for key, ops, kinds in ex[:a.show]:
            print("  0x%s  %s  %s" % (key, ",".join(ops), kinds))
    return 0


if __name__ == "__main__":
    sys.exit(main())
