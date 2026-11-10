"""probe_layout_incs.py - check the scratch/main include paths of lift_proof before trusting a scratch proof.

A scratch proof that cannot see `layout/cow.h` fails EVERY unit with C1083 and pronounces a whole family dead
for a harness reason. This asserts the two shapes the prover must have, and fails loudly if either moved.
"""
import importlib
import os
import sys

sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), os.pardir,
                                "tools", "cow", "ghidra"))
os.environ.pop("COW_LIFT_SRC", None)
import lift_proof                                                        # noqa: E402

bad = []

# ---- main path: must be exactly what the file used before the scratch work existed
print("MAIN (COW_LIFT_SRC unset):")
print("   LAYOUT_REL =", repr(lift_proof.LAYOUT_REL))
print("   LAYOUT_INCS =", lift_proof.LAYOUT_INCS)
print("   BRIDGES_C  =", repr(lift_proof.BRIDGES_C))
if lift_proof.LAYOUT_INCS != ["layout"]:
    bad.append("main path LAYOUT_INCS changed: %s" % lift_proof.LAYOUT_INCS)
if lift_proof.BRIDGES_C != "layout\\lifted_bridges.c":
    bad.append("main path BRIDGES_C changed: %s" % lift_proof.BRIDGES_C)

# ---- scratch path: scratch FIRST, layout STILL BEHIND IT
SCRATCH = "build/scratch_goto"
os.environ["COW_LIFT_SRC"] = os.path.join(lift_proof.ROOT, "build", "scratch_goto")
importlib.reload(lift_proof)
print("SCRATCH (COW_LIFT_SRC=build/scratch_goto):")
print("   LAYOUT_REL =", repr(lift_proof.LAYOUT_REL))
print("   LAYOUT_INCS =", lift_proof.LAYOUT_INCS)
print("   BRIDGES_C  =", repr(lift_proof.BRIDGES_C))

if lift_proof.LAYOUT_INCS[:1] != [SCRATCH]:
    bad.append("scratch dir is not FIRST in the include path: %s" % lift_proof.LAYOUT_INCS)
if "layout" not in lift_proof.LAYOUT_INCS:
    bad.append("real layout was REPLACED rather than prepended - every unit will die on C1083 for cow.h: %s"
               % lift_proof.LAYOUT_INCS)

# the reason order matters, stated as a fact about the tree rather than as a belief
scratch_abs = os.path.join(lift_proof.ROOT, "build", "scratch_goto")
layout_abs = os.path.join(lift_proof.ROOT, "layout")
for name in ("cow.h", "addresses.h"):
    if os.path.isfile(os.path.join(scratch_abs, name)):
        bad.append("%s unexpectedly exists in the scratch tree - the 'first wins' argument needs revisiting"
                   % name)
    if not os.path.isfile(os.path.join(layout_abs, name)):
        bad.append("%s is missing from layout/ - the include list cannot resolve it anywhere" % name)
if not os.path.isfile(os.path.join(scratch_abs, "lifted_addresses.h")):
    bad.append("scratch tree has no lifted_addresses.h - was the scratch --apply run at all?")
if os.path.isfile(os.path.join(layout_abs, "lifted_addresses.h")) and \
        lift_proof.LAYOUT_INCS.index(SCRATCH) > lift_proof.LAYOUT_INCS.index("layout"):
    bad.append("committed lifted_addresses.h would win over the scratch one - wrong order, silent macro loss")

os.environ.pop("COW_LIFT_SRC", None)

if bad:
    for b in bad:
        print("FAIL: " + b)
    print("\n%d problem(s). Do not launch a scratch proof against this prover." % len(bad))
    sys.exit(1)
print("\nOK: main path unchanged; scratch path puts the scratch tree first AND keeps layout behind it, so "
      "generated headers come from the experiment and cow.h still comes from the repo.")
