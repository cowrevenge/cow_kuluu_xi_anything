"""Measure, before building: what does the GENERATED BODY leave in eax (and edx) at its `ret`?

The register groups' dominant shape is `A = 0 / B = a leftover the fuzzer put there` - the guest set the
register on its way out and the lift never materialised it. The adapter's prefix replay covers the opening
instructions and stops at the first thing it cannot express, so anything that happens later in the body is
invisible to the registers the entry returns in.

Three rules are plausible, and they are not equally safe:

  const       `xor eax,eax` / `mov eax, 5`      - cannot be invalidated by anything; always safe to replay
  global      `mov eax, [0x10456c08]`           - safe unless something between the read and the return
                                                wrote that global (a store, or a callee)
  other       anything the walk cannot name     - not shippable

This prints how many failing rows each would rescue, so the rule is chosen by measurement instead of by
which one sounds most general.
"""
import collections
import json
import os
import re
import sys

sys.path.insert(0, os.path.join('tools', 'cow', 'ghidra'))
sys.path.insert(0, os.path.join('tools', 'cow'))
import gen_model  # noqa: E402
import cowdiff  # noqa: E402

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
RESULT = os.path.join(ROOT, "cow", "lift_proof_all.json")

BODIES = {}


def load_bodies():
    if BODIES:
        return
    gen = os.path.join(ROOT, "generated", "all")
    for f in sorted(os.listdir(gen)):
        if not f.endswith(".c"):
            continue
        txt = open(os.path.join(gen, f), encoding="utf-8", errors="replace").read()
        for m in re.finditer(r"/\* ([0-9a-f]{8}): ", txt):
            BODIES.setdefault(m.group(1), True)


def body_lines(entry):
    path = cowdiff.func_file(entry) if hasattr(cowdiff, "func_file") else None
    if path and os.path.exists(path):
        txt = open(path, encoding="utf-8", errors="replace").read()
    else:
        gen = os.path.join(ROOT, "generated", "all")
        txt = ""
        for f in sorted(os.listdir(gen)):
            if f.endswith(".c"):
                t = open(os.path.join(gen, f), encoding="utf-8", errors="replace").read()
                if ("f_%s(Guest* g)" % entry) in t:
                    txt = t
                    break
    i = txt.find("void f_%s(Guest* g)" % entry)
    if i < 0:
        return None
    j = txt.find("\n}\n", i)
    return txt[i:j].splitlines()


def classify_last_write(ins, reg):
    """What the body's LAST write to `reg` before its `ret` was, over the straight-line walk."""
    last = None
    for c in ins:
        if c["mnem"] == "ret":
            break
        if gen_model._writes_reg(c["mnem"], c["op"]) and gen_model._dst_reg(c["op"]) == reg:
            src = c["op"].partition(",")[2]
            if c["mnem"] in ("xor", "sub", "sbb") and c["op"] == "%s,%s" % (reg, reg):
                last = ("const", "0u")
            elif c["mnem"] == "mov" and re.fullmatch(r"0x[0-9a-f]+|\d+", src):
                last = ("const", "%su" % src)
            elif c["mnem"] == "mov" and re.fullmatch(r"dwordptr\[(0x[0-9a-f]+|\d+)\]", src):
                addr = int(re.fullmatch(r"dwordptr\[(0x[0-9a-f]+|\d+)\]", src).group(1), 0)
                last = ("global", "rd32(COW_IMG(COW_ADDR_LIFT_%08X))" % addr)
            else:
                last = ("other", "%s %s" % (c["mnem"], src))
    return last


def main():
    data = json.load(open(RESULT, encoding="utf-8"))
    bad = [(k, v) for k, v in data.items()
           if not v.get("pass") and re.match(r"(eax|edx)", v.get("why") or "")]
    tally = collections.Counter()
    examples = collections.defaultdict(list)
    for k, v in bad:
        m = re.search(r"reg=(\w+)\s+([0-9a-f]{8})/([0-9a-f]{8})", v.get("raw") or "")
        if not m:
            tally["no tail"] += 1
            continue
        reg, a, b = m.group(1), int(m.group(2), 16), int(m.group(3), 16)
        lines = body_lines(k)
        if not lines:
            tally["no body"] += 1
            continue
        ins = gen_model.parse_instructions(lines)
        cls = classify_last_write(ins, reg)
        key = "%s=%s/%s last-write=%s" % (
            reg, "zero" if a == 0 else "set", "zero" if b == 0 else "set",
            cls[0] if cls else "never-written")
        tally[key] += 1
        if len(examples[key]) < 3:
            examples[key].append((k, (cls or ("", ""))[1], "0x%08x/0x%08x" % (a, b)))

    print("REGISTER MATERIALISATION - what the generated body's last write to the failing register was")
    for key, n in tally.most_common(16):
        print("%6d  %s" % (n, key))
        for e, what, vals in examples[key]:
            print("           0x%s  last=%s  A/B=%s" % (e, what, vals))


if __name__ == "__main__":
    main()
