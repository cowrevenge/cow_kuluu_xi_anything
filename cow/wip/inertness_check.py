"""Knob-off INERTNESS proof, without touching the working tree.

A plumbing change to the emitter is only safe if `COW_LIFT_EPILOGUE_MATCH_PUSHES` unset means the
bytes coming out of lift.emit() are exactly what they were before the change. The check tests 40
controls, which is a sample; this compares the current lift.py against the one committed at HEAD,
loaded side by side from a copy - no stash, no checkout, nothing the running audit could see.

Every unit that the code-level counter can name is rendered both ways: the widening candidates (where
the knob must change output) and a slice of ordinary units (where it must not, with the knob off).
"""
import importlib.util
import io
import os
import subprocess
import sys

GHIDRA = r"D:\Projects\ffxi_disassembly\Cow_kuluu_xi_anything\tools\cow\ghidra"
ROOT = r"D:\Projects\ffxi_disassembly\Cow_kuluu_xi_anything"
DUMP = os.environ.get("COW_LIFT_DUMP", "D:/projects/ghidra/ghidra_out/functions_all.jsonl")
import tempfile
# NOT inside the repo: a 77 KB duplicate of a shipped source file under cow/wip gets picked up
# by `git add cow/wip/` (it did). Scratch belongs in the temporary directory.
HEAD_COPY = os.path.join(tempfile.gettempdir(), "lift_head_copy_for_inertness.py")
sys.path.insert(0, GHIDRA)

# the committed emitter, extracted from git - not from the working tree
raw = subprocess.check_output(["git", "-C", ROOT, "show",
                               "HEAD:tools/cow/ghidra/lift.py"])
with io.open(HEAD_COPY, "wb") as fh:
    fh.write(raw)


def load(path, name):
    spec = importlib.util.spec_from_file_location(name, path)
    m = importlib.util.module_from_spec(spec)
    sys.modules[name] = m
    spec.loader.exec_module(m)
    return m


new = load(os.path.join(GHIDRA, "lift.py"), "lift_new")
old = load(HEAD_COPY, "lift_old")

import lift_frame_predicates as FP  # noqa: E402

cand = sorted(FP.unpaired_population())[:25]
plain = [a for a in FP.lifted_units() if a not in set(cand)][:75]
# the tail path needs its own slice: the template change is invisible to the two groups above, and the
# first version of it broke knob-off byte-identity in a way only a tail control could show
tails = [a for a in FP.lifted_units()
         if "TAIL CALL" in FP.read_unit(a) and a not in set(cand)][:25]
targets = cand + plain + tails

records = {}
want = set(targets)
with io.open(DUMP, encoding="utf-8", errors="replace") as fh:
    for line in fh:
        line = line.strip()
        if not line:
            continue
        import json as _json
        try:
            d = _json.loads(line)
        except ValueError:
            continue
        a = new.norm(d.get("addr"))
        if a and a[2:] in want and a[2:] not in records:
            records[a[2:]] = d
        if len(records) == len(want):
            break


def render(mod, a):
    os.environ.pop("COW_LIFT_EPILOGUE_MATCH_PUSHES", None)   # knob OFF for both
    mod2 = mod
    ctx = mod2.Ctx(DUMP, "12.2")
    ctx.problems = []
    d = records[a]
    ok, why = mod2.classify(d)
    if not ok:
        return None
    text, why2 = mod2.emit(d, ctx)
    return text


diffs, same, skipped = [], 0, 0
for a in targets:
    if a not in records:
        skipped += 1
        continue
    t_new, t_old = render(new, a), render(old, a)
    if t_new is None or t_old is None:
        if (t_new is None) != (t_old is None):
            diffs.append((a, "one side refused: new=%r old=%r" % (t_new is None, t_old is None)))
        else:
            skipped += 1
        continue
    if t_new == t_old:
        same += 1
    else:
        diffs.append((a, "bytes differ"))

print("=" * 72)
print("knob OFF: current lift.py vs HEAD lift.py, same units, same inputs")
print("=" * 72)
print("  rendered identically : %d" % same)
print("  differing            : %d  %s" % (len(diffs), diffs[:5]))
print("  skipped (no record / refused both sides) : %d" % skipped)
if diffs:
    for a, w in diffs:
        print("  DIFF 0x%s %s" % (a, w))
    sys.exit("REFUSING: the change is not inert with the knob off")
if same == 0:
    sys.exit("REFUSING: nothing was compared")
print("\nRESULT: inert with the knob off across %d units "
      "(%d unpaired-push candidates, %d tail-path units)"
      % (same, len(cand), len(tails)))
