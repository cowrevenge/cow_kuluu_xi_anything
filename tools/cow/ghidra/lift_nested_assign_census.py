"""lift_nested_assign_census.py - find bodies where an assignment was hoisted into a DISCARDED expression.

THE DEFECT, from a real unit (0x100c3cd0, in the halt's contract-violation bucket). Guest:

    100c3cd0: mov eax, dword ptr [esp + 6]
    100c3cd4: and eax, 0xff
    100c3cd9: sub eax, 0x30
    100c3cdc: ret

The adapter replays those three faithfully. Then it calls the body, whose single statement is

    (((uint64_t)(g->eax = (CowU32)((param_1) << 16) & 0xffffffffu) & 0xff) - 0x30); return;

The statement's value is discarded. The only effect is the NESTED `g->eax = ...`, so the `& 0xff` and
`- 0x30` that the guest applies to eax are computed on the assignment's result and thrown away. eax is left
holding `(param_1 << 16) & 0xffffffff`. Measured: guest eax 0x69/0x68/0x69, ours 0x00000000/0xfffc0000/
0x19f60000, with esp/edx/flags agreeing and 5/5 blocks covered.

WHY IT MATTERS OUT OF PROPORTION TO ITS SIZE. It compiles. `syntax_gate` is green, the file ships, and the
unit is wrong in a way only cowdiff can see - and under the judge, where image addresses are mapped at their
preferred base (RD=0), some classes of defect are invisible there too. This is the "compiles, runs, and is
wrong" outcome the lift's own header calls the worst one.

MEASURED 2026-11-11: 8 bodies out of 10,547 - cow_100c3cd0.c, cow_100c3ce0.c, cow_101cc600.c,
cow_10230b90.c, cow_10087010.c, cow_10087650.c, cow_10225b80.c, cow_10314508 - all of them the
partial-width `<< 16 / << 24 / & 0xff / & 0xffffu` shape produced when `apply_partial_widths` rewrites a
register's high/low part. So this is NOT the explanation for the halt's 18 `eax` contract-violations;
claiming it was would be inventing a family to fit a hope. Cross-joined to the records, the honest split is:

    2 in the halt's failing set   (100c3cd0, 100c3ce0)  <- the class IS part of why the loop is stopped
    2 carry the shape and PASS    (101cc600, 0230b90)   <- see the caveat below
    4 not judged in either record                        <- no claim either way

THE TWO THAT PASS ARE NOT EVIDENCE THAT THE SHAPE IS HARMLESS. They are either genuinely benign (the
trailing operator's value is unused for a reason the statement still satisfies) or the splitter has detached
a condition from the `if` that owned it and is judging a fragment. Until one of them is read end to end,
read the census as "8 places to look", never as "8 defects" - and never as "8 units that would pass if
fixed", which is the number a reader will want and the one this file has not earned.

FALSE POSITIVES THE FIRST TWO VERSIONS HAD, and that the selftest below pins. The first flagged `for
(uVar3 = 0; ...)`, `if ((x < 0) || (x = f()))` and a call split across lines. The second tried to repair
that by joining continuation lines, which merged `} for (...) {` into one "statement" so the control-keyword
filter could no longer see the `for` - and produced **88** hits, all loop headers. The selftest did not catch
either round because it hands the detector single statements in isolation: a test that bypasses the parser
proves nothing about the parser, and only the real tree exposed it.

Run:  python tools/cow/ghidra/lift_nested_assign_census.py            # census the tree
      python tools/cow/ghidra/lift_nested_assign_census.py --selftest  # the detector must fire, and not on the legitimate shapes
"""
import argparse
import glob
import io
import os
import re
import sys

# tools/cow/ghidra -> repo root is THREE levels up. An earlier draft used two and happily scanned
# tools/src/lifted, a directory that can never exist: the census would have reported "0 bodies" and looked
# like a clean tree instead of a broken path.
REPO = os.path.abspath(os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "..", ".."))
LIFTED = os.path.join(REPO, "src", "lifted", "cow_*.c")
MOTIVATING = ("cow_100c3cd0.c", "cow_100c3ce0.c", "cow_101cc600.c", "cow_10230b90.c")

# A statement is a candidate only if it is an expression statement: not a control header, not a
# declaration, parens balanced, ends in ';' and is not a call statement whose parens open the statement.
CONTROL = re.compile(r"^(for|if|while|switch|return|do|else|case|default)\b")
DECL = re.compile(r"^\s*(const\s+)?(unsigned\s+|signed\s+)?(CowU8|CowU16|CowU32|CowU64|int|uint32_t|"
                  r"uint64_t|float|double|char|void|size_t)\b.*=\s*[^=]")


def strip_comments(t):
    out, i, n = [], 0, len(t)
    while i < n:
        if t.startswith("/*", i):
            j = t.find("*/", i + 2)
            j = n if j < 0 else j + 2
            out.append(re.sub(r"[^\n]", " ", t[i:j]))
            i = j
        elif t.startswith("//", i):
            j = t.find("\n", i)
            j = n if j < 0 else j
            out.append(" " * (j - i))
            i = j
        else:
            out.append(t[i])
            i += 1
    return "".join(out)


def bare_assign_depths(s):
    """Offsets of bare `=` in s, with paren depth, ignoring ==/!=/<=/>= and compound ops."""
    out = []
    depth = 0
    in_str = False
    i = 0
    while i < len(s):
        c = s[i]
        if c == '"':
            in_str = not in_str
        elif not in_str:
            if c == "(":
                depth += 1
            elif c == ")":
                depth -= 1
            elif c == "=" and depth > 0:
                prev = s[i - 1] if i else ""
                nxt = s[i + 1] if i + 1 < len(s) else ""
                if (prev not in ("=", "!", "<", ">", "+", "-", "*", "/", "%", "&", "|", "^")
                        and nxt != "="):
                    out.append((i, depth))
        i += 1
    return out


def split_statements(text):
    """Top-level statements, split at ';' '{' '}' when at paren depth 0.

    This replaces a line-joining heuristic that merged `} for (...) {` into one "statement", so the
    control-keyword filter could not see the `for` any more and 88 loop headers were reported as defects.
    The selftest did not catch it because it handed the detector single statements in isolation - a test
    that bypasses the parser proves nothing about the parser.
    """
    out, buf = [], []
    depth = 0
    brace = 0
    in_str = False
    for ch in text:
        if ch == '"':
            in_str = not in_str
            buf.append(ch)
            continue
        if in_str:
            buf.append(ch)
            continue
        if ch == "(":
            depth += 1
        elif ch == ")":
            depth -= 1
        if depth == 0 and ch in "{}":
            brace += 1 if ch == "{" else -1
            s = "".join(buf).strip()
            if s:
                out.append(s)
            buf = []
            continue
        if depth == 0 and ch == ";":
            s = "".join(buf).strip()
            if s:
                out.append(s)
            buf = []
            continue
        buf.append(ch)
    s = "".join(buf).strip()
    if s:
        out.append(s)
    return [x for x in out if x]


def nested_assignments(text):
    """The defect: a bare assignment nested in parens, in a statement whose value is discarded."""
    hits = []
    for s in split_statements(strip_comments(text)):
        s = s.strip()
        if not s or s.endswith("{") or s.endswith("}"):
            continue
        if CONTROL.match(s) or DECL.match(s):
            continue
        if s.count("(") != s.count(")"):
            continue                      # unbalanced: not a well-formed statement to judge
        if "(" not in s:
            continue
        if re.match(r"^[A-Za-z_][A-Za-z0-9_]*\s*\(", s):
            continue                      # a call statement: discarding its value is normal
        if re.search(r"(\|\||&&)\s*\([^)]*=", s):
            continue                      # short-circuit idiom, intentional
        # `for (...)`, `while (...)` may still reach here if wrapped in braces by the splitter
        if re.search(r"\b(for|while|switch)\s*\(", s):
            continue
        if bare_assign_depths(s):
            hits.append(s)
    return hits


SELFTEST = [
    # (label, statement, expected_is_defect)
    ("the motivating hoist",
     "(((uint64_t)(g->eax = (CowU32)((param_1) << 16) & 0xffffffffu) & 0xff) - 0x30);", True),
    ("same shape, no trailing op",
     "(((uint64_t)(g->eax = (CowU32)(rd32(0x10485684u)) << 16) & 0xffu));", True),
    ("legitimate for-header (value is not a discarded expression)",
     "for (uVar3 = 0; uVar3 < 4; uVar3 = uVar3 + 1) {", False),
    ("legitimate short-circuit assignment",
     "if ((iVar2 < 0) || (iVar2 = cow_bridge_101a0930(g, 1u))) {", False),
    ("plain top-level assignment, not nested",
     "g->eax = (CowU32)(0x1234u);", False),
    ("plain declaration with initialiser",
     "CowU32 uVar1 = (CowU32)(rd32(0x10000000u));", False),
    ("a call statement, value discarded legitimately",
     "cow_bridge_102ef234(g, 0x102F1D5Du, 2u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 0u);",
     False),
    ("comparison only, no assignment",
     "if ((uVar2 & 0xffu) == 0x30u) {", False),
]


def selftest():
    bad, fired = [], 0
    for label, stmt, want in SELFTEST:
        got = bool(nested_assignments(stmt))
        if got != want:
            bad.append("%s: wanted %s got %s" % (label, want, got))
        if got and want:
            fired += 1
    if not fired:
        bad.append("the detector never flagged any true case: it CANNOT FIRE")
    if bad:
        for b in bad:
            print("FAIL " + b)
        sys.exit("SELFTEST FAILED: the detector is wrong, so no census number from it is quotable")
    print("selftest: %d/%d cases (true shape fires; for-header, short-circuit, call and declaration do"
          " not)" % (len(SELFTEST), len(SELFTEST)))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--selftest", action="store_true")
    a = ap.parse_args()
    selftest()
    if a.selftest:
        return
    files = sorted(glob.glob(LIFTED))
    if not files:
        sys.exit("REFUSING: no lifted files under %s" % LIFTED)
    hits = {}
    scanned = 0
    for p in files:
        raw = io.open(p, encoding="utf-8").read()
        m = re.search(r"/\* COW_LIFTED BEGIN.*?\*/(.*?)/\* COW_LIFTED END", raw, re.S)
        if not m:
            continue
        scanned += 1
        h = nested_assignments(m.group(1))
        if h:
            hits[os.path.basename(p)] = h
    print("bodies scanned: %d    with a hoisted assignment: %d" % (scanned, len(hits)))
    for f, hs in sorted(hits.items()):
        print("  %s" % f)
        for h in hs[:2]:
            print("      %s" % h[:130])
    missing = [m for m in MOTIVATING if m not in hits]
    if missing:
        sys.exit("REFUSING: the units that motivated this detector are no longer detected: %s - the"
                 " predicate has rotted (or the files changed)." % missing)
    print("\ncan-fire: all %d motivating units still detected." % len(MOTIVATING))


if __name__ == "__main__":
    main()
