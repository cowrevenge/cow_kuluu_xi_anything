"""Does the --gate-dir syntax gate ever say NO?

"54 emitted, 0 rejected" is a zero, and a zero from a predicate nobody has seen fire is the defect this
repository keeps re-meeting. This feeds the gate (1) a body that cannot compile - the mangled declaration the
local binding once shipped, plus an undeclared identifier - and requires it to refuse AND remove the file,
then (2) the same body made valid, and requires it to PASS. A gate that refuses everything discriminates
nothing either, so both directions are checked.

Run directly:  python tools/cow/ghidra/lift_gate_can_fail.py
"""
import os
import shutil
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
# ROOT/tools is NOT optional: syntax_gate() does `import build as upstream` for the MSVC environment, and
# build.py lives there. A run of lift.py picks it up through cowdiff's own path insert; a standalone tool
# that calls syntax_gate directly does not, and dies with ModuleNotFoundError - which, note, is the SAME
# failure that would leave every file on disk and make "0 rejected" look like "0 failures".
for _p in (HERE, os.path.join(ROOT, "tools", "cow"), os.path.join(ROOT, "tools")):
    if _p not in sys.path:
        sys.path.insert(0, _p)
for _k in [k for k in list(os.environ) if k.startswith("COW_")]:
    os.environ.pop(_k)

import lift                                           # noqa: E402

DIR = os.path.join(ROOT, "build", "scratch", "gate-can-fail")

BAD_ADDR = "10dead01"
BAD_TMPL = '''/* gate-can-fail probe: deliberately written by lift_gate_can_fail.py */
#include "cow.h"

int cow_lift_%s(Guest *g);
void cow_adapter_%s(Guest *g);

int cow_lift_%s(Guest *g)
{
%s
}

void cow_adapter_%s(Guest *g)
{
    g->eax = (CowU32)cow_lift_%s(g);
}
'''


class _NullCtx:
    """An empty run: the gate only needs the layout headers to exist and be self-consistent."""
    layout = {}

    class bridges:
        @staticmethod
        def render(_layout):
            return ([], [])


def gate_a_body(body, addr, tag):
    """Compile one body through the real gate. Returns (reported, moved_to_rejected, errors)."""
    d = os.path.join(DIR, tag)
    rej = os.path.join(d, "rejected")
    if os.path.isdir(d):
        shutil.rmtree(d)
    os.makedirs(d)
    lift.write_layout_files(_NullCtx(), os.path.join(d, "lifted_addresses.h"),
                            os.path.join(d, "lifted_bridges.h"), os.path.join(d, "lifted_bridges.c"))
    with open(os.path.join(d, "cow_%s.c" % addr), "w", encoding="utf-8", newline="\n") as fh:
        fh.write(body)
    bad = lift.syntax_gate([addr], rej, out_dir=d)
    return (addr in bad), os.path.isfile(os.path.join(rej, "cow_%s.c" % addr)), (bad.get(addr) or [])


def main():
    if os.path.isdir(DIR):
        shutil.rmtree(DIR)
    bad_body = BAD_TMPL % (BAD_ADDR, BAD_ADDR, BAD_ADDR,
                           "    CowU32 *rd32((uint32_t)rd32((uint32_t)slot_local_224);\n"
                           "    return (int)no_such_variable_anywhere;",
                           BAD_ADDR, BAD_ADDR)
    reported, moved, errs = gate_a_body(bad_body, BAD_ADDR, "bad")
    print("gate verdict on a body that cannot compile: %s"
          % ("REFUSED" if reported else "PASSED IT - BUG"))
    for code, msg in errs[:4]:
        print("    %s: %s" % (code, msg))
    print("  moved to rejected/ : %s" % moved)
    print("  still in the tree  : %s (must be False)"
          % os.path.isfile(os.path.join(DIR, "bad", "cow_%s.c" % BAD_ADDR)))
    if not reported:
        sys.exit("FAIL: the gate PASSED invalid C. Every 'compiled N' number from --gate-dir is worthless"
                 " until this passes.")
    if not moved:
        sys.exit("FAIL: the gate reported the error but left the file in the tree - it would ship.")
    if not any(c.startswith("C") and c[1:].isdigit() for c, _m in errs):
        sys.exit("FAIL: the gate refused without naming a compiler error code - unverdictable.")

    good_body = BAD_TMPL % (BAD_ADDR, BAD_ADDR, BAD_ADDR, "    return 0u;", BAD_ADDR, BAD_ADDR)
    g_reported, _g_moved, g_errs = gate_a_body(good_body, BAD_ADDR, "good")
    print("\ngate verdict on the same body made valid: %s"
          % ("REFUSED - BUG" if g_reported else "PASSED"))
    for code, msg in g_errs[:4]:
        print("    %s: %s" % (code, msg))
    if g_reported:
        sys.exit("FAIL: the gate refuses valid C too - it discriminates nothing, so its verdict on the"
                 " experiment means nothing.")
    print("\nPASS: the gate refuses invalid C, accepts valid C, and removes what it refuses.")


if __name__ == "__main__":
    main()
