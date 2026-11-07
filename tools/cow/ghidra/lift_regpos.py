"""Measure before building: how many register failures can be rescued WITHOUT reordering a load?

The tempting fix for the `eax`/`edx` groups is to replay the entry's last register writes in the epilogue.
It is only observationally identical if nothing that could change the value happens after them - a store
(that might alias the global being read), or a call. `0x10016520` is the warning: its `mov eax,[0x10456c08]`
is followed by `mov [edx], eax`, so reading the global at return time is not the same read.

This counts, per failing row, where the last write to the failing register sits relative to the body's last
store/call:

  after-last-effect   the value is stable to the return; replaying it in the epilogue is safe
  before-last-effect  it is NOT; the fix belongs somewhere the adapter cannot reach

If the first bucket is small, this whole line is not worth the risk and the next pattern is elsewhere.
"""
import collections
import json
import os
import re
import sys

sys.path.insert(0, os.path.join('tools', 'cow', 'ghidra'))
import gen_model  # noqa: E402

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
RESULT = os.path.join(ROOT, "cow", "lift_proof_all.json")
GEN = os.path.join(ROOT, "generated", "all")
_INDEX = {}


def body_lines(entry):
    if not _INDEX:
        for f in sorted(os.listdir(GEN)):
            if not f.endswith(".c"):
                continue
            txt = open(os.path.join(GEN, f), encoding="utf-8", errors="replace").read()
            for m in re.finditer(r"void f_([0-9a-f]{8})\(Guest\* g\)", txt):
                _INDEX[m.group(1)] = (f, m.start())
    hit = _INDEX.get(entry.lower())
    if not hit:
        return None
    f, i = hit
    txt = open(os.path.join(GEN, f), encoding="utf-8", errors="replace").read()
    j = txt.find("\n}\n", i)
    return txt[i:j].splitlines()


def position_of_last_write(ins, reg):
    """(index of the last write to reg, index of the last store or call, or None if never written)."""
    last_write = last_effect = None
    for k, c in enumerate(ins):
        if c["mnem"] == "ret":
            break
        stores = bool(re.search(r"\bwr(8|16|32|64|f32|f64)\(", c["stmt"]))
        if c["mnem"] == "call" or stores:
            last_effect = k
        if gen_model._writes_reg(c["mnem"], c["op"]) and gen_model._dst_reg(c["op"]) == reg:
            last_write = k
    return last_write, last_effect


def main():
    data = json.load(open(RESULT, encoding="utf-8"))
    bad = [(k, v) for k, v in data.items()
           if not v.get("pass") and re.match(r"(eax|edx|callee-saved|esp)", v.get("why") or "")]
    tally = collections.Counter()
    examples = collections.defaultdict(list)
    for k, v in bad:
        m = re.search(r"reg=(\w+)\s+([0-9a-f]{8})/([0-9a-f]{8})", v.get("raw") or "")
        reg = m.group(1) if m else (v.get("why") or "eax")
        if reg not in ("eax", "edx", "ecx", "ebx", "esi", "edi", "ebp"):
            reg = "eax"
        lines = body_lines(k)
        if not lines:
            tally["no body"] += 1
            continue
        ins = gen_model.parse_instructions(lines)
        lw, le = position_of_last_write(ins, reg)
        if lw is None:
            bucket = "never written by the body (came in, or a callee left it)"
        elif le is None or lw > le:
            bucket = "last write AFTER the last store/call  (safe to replay)"
        else:
            bucket = "last write BEFORE the last store/call  (unsafe)"
        tally[bucket] += 1
        if len(examples[bucket]) < 3:
            examples[bucket].append(k)

    print("REGISTER REPLAY - where the failing register's last write sits in the body (%d rows)" % len(bad))
    for key, n in tally.most_common():
        print("%6d  %s" % (n, key))
        for e in examples[key]:
            print("           0x%s" % e)


if __name__ == "__main__":
    main()
