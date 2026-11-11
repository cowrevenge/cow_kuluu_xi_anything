"""Split the 8 hoisted-assignment hits by MECHANISM - and the answer came back: there is only one.

WHAT THIS FILE WAS BUILT TO PROVE, AND WHAT IT FOUND. The hypothesis was that the hoisted-assignment hits
were two conflated causes needing two fixes: (A) sub-word width handling in `apply_partial_widths`, and
(B) the rule that turns Ghidra's `return <expr>` into `g->eax = ...; return;`. The tool was written to
separate them so a fix could not be credited with the other's units. Run against Ghidra's own text, **all 8
flagged units have a sub-word `.<start>_<width>_` member access in their return line** - `DAT_10482f40._3_1_`,
`param_1._2_4_`, `DAT_10485684._2_1_`, `param_2._2_2_` - so they were never two mechanisms. One translation
site owns the whole class, and any change there must be scored against all 8, not a convenient subset.

The tool earns its keep for disproving its own premise, which is the only reason to keep a census whose
result contradicts the reason it was written. The mechanism labels below are therefore descriptions of the
Ghidra return line (sub-word member, comparison tail, or both), not a claim that independent bugs exist.

The original framing is kept below as it was written, because the value is in the correction:

The census found one shape and two different causes:

  MECHANISM-A  sub-word load.  Ghidra renders `mov al/ax, [unaligned]` as a shifted load from the
               dword-aligned base, and the mask that recovers the correct bits is the operation the
               discarded value throws away. Ours: `(g->eax = (X << 24) & 0xffu)` -> eax ends up holding
               bits 16-31 where the guest put them in bits 0-7. Belongs to `apply_partial_widths`.

  MECHANISM-B  return translation.  Ghidra wrote `return (uint)(<expr> != '\0');` - eax must become 0 or 1 -
               and `return <expr>` was translated by assigning a SUB-expression to g->eax and discarding the
               rest. Nothing to do with widths; it is the return-value rule. Belongs to whatever turns
               `return EXPR` into `g->eax = ...; return;`.

They need different fixes, and a fix aimed at A would be credited with B's units (or vice versa) if the two
are not separated first. That misattribution is how "the pattern is fixed" gets reported off a change that
touched the other pattern entirely.

WHY ONLY 8 NEED CLASSIFYING. Both mechanisms produce the same observable - a bare assignment nested inside a
discarded expression - so every MECHANISM-B unit is already in the census's 8. That is an argument, and
arguments get tested: the tool therefore ALSO scans the whole lifted tree for the shape B would take if it
did NOT hoist an assignment (a comparison/arithmetic expression statement with no `=` in it at all). If that
count is non-zero, B is bigger than 8 and the classification below is incomplete - and the tool says so
rather than quietly reporting a partition of 8.

Run:  python tools/cow/ghidra/lift_return_tail_census.py
      python tools/cow/ghidra/lift_return_tail_census.py --show-ghidra   # print the Ghidra line that decided it
"""
import argparse
import glob
import io
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
sys.path.insert(0, HERE)
import lift_nested_assign_census as NAI  # noqa: E402  (the statement splitter and detector, reused)

DUMP = os.environ.get("COW_LIFT_DUMP", "D:/projects/ghidra/ghidra_out/functions_all.jsonl")
BODY_MARK = re.compile(r"/\* COW_LIFTED BEGIN.*?\*/(.*?)/\* COW_LIFTED END", re.S)
# A shifted sub-word load: `(X << 16) & 0xffu` / `<< 24) & 0xffu` / `<< 16) & 0xffffu`
WIDTH_SHIFT = re.compile(r"<<\s*(8|16|24)\)?\s*&\s*0x(?:ff|ffff)u?\b")
# a comparison or arithmetic applied to the result of a parenthesised sub-expression
TAIL_OPS = re.compile(r"\)\s*(?:!=|==|<=|>=|<|>|\+|-|\^|\||&)\s*[^=]")


def ghidra_return_lines(addr, dump_path):
    """(status, [lines]) from Ghidra's own C for one function. status in ok|no-file|not-found|no-decompile.

    The status is returned separately on purpose. The first version returned None both when the dump was
    missing and when the address was not in it, and the address key was built wrong, so all eight units were
    reported as "dump unavailable" - an absence of evidence presented as a property of the evidence.
    """
    if not os.path.isfile(dump_path):
        return "no-file", []
    want = str(addr).lower().replace("0x", "")
    if not re.fullmatch(r"10[0-9a-f]{6}", want):
        return "bad-addr", []
    with io.open(dump_path, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            try:
                d = json.loads(line)
            except ValueError:
                continue
            if str(d.get("addr") or "").lower().replace("0x", "") != want:
                continue
            c = str(d.get("c") or "")
            if not c.strip():
                return "no-decompile", []
            outs = [ln.strip() for ln in c.split("\n") if ln.strip().startswith("return")]
            return ("ok" if outs else "no-return-statement"), outs
    return "not-found", []


CMP = re.compile(r"(!=|==|<=|>=|<|>)")
# Ghidra's sub-word member access is `.<start>_<width>_` on ANY base - DAT_x._2_1_, param_1._2_4_,
# (expr)._3_4_. The first version matched only `._N_1_` and `DAT_<hex>._`, so `param_1._2_4_` fell through
# and two genuine units were reported UNKNOWN by a pattern fitted to the first examples I happened to read.
SUBWORD = re.compile(r"\._(\d+)_(\d+)_")


def mechanism_from_ghidra(lines):
    """Name the mechanism from what Ghidra asked for - not from what our text happens to contain."""
    joined = " ".join(lines)
    cmp_ = bool(CMP.search(joined))
    sub = bool(SUBWORD.search(joined))
    if cmp_ and sub:
        return "A+B(sub-word load AND a comparison/arithmetic tail on the return)"
    if cmp_:
        return "B(return translation: Ghidra returned a comparison/arithmetic, ours kept neither)"
    if sub:
        return "A(sub-word width: Ghidra returned a byte/word member, the mask was dropped)"
    return "UNKNOWN(ghidra return line names neither a sub-word member nor a comparison)"


def classify_body(stmts):
    """(mechanism, evidence) for the flagged statements of one body."""
    width = [s for s in stmts if WIDTH_SHIFT.search(s)]
    tail = [s for s in stmts if TAIL_OPS.search(s)]
    if width and not tail:
        return "A(sub-word width)", width
    if tail and not width:
        return "B(return tail)", tail
    if width and tail:
        return "A+B(both shapes)", width + tail
    return "?unclassified", stmts


def _strip_outer_parens(s):
    s = s.strip()
    while s.startswith("(") and s.endswith(")"):
        inner = s[1:-1]
        d, ok = 0, True
        for ch in inner:
            if ch == "(":
                d += 1
            elif ch == ")":
                d -= 1
                if d < 0:
                    ok = False
                    break
        if not (ok and d == 0):
            break
        s = inner.strip()
    return s


def _has_bare_assignment(s):
    """A real `=` - not ==, !=, <=, >= - anywhere in s."""
    in_str = False
    depth = 0
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
            elif c == "=":
                prev = s[i - 1] if i else ""
                nxt = s[i + 1] if i + 1 < len(s) else ""
                if prev not in ("=", "!", "<", ">", "+", "-", "*", "/", "%", "&", "|", "^") and nxt != "=":
                    return True
        i += 1
    return False


def _top_level_operator(s):
    """Does the statement's own (un-parenthesised) expression apply an operator?"""
    s = _strip_outer_parens(s)
    in_str = False
    depth = 0
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
            elif depth == 0:
                if s[i:i + 2] in ("!=", "==", "<=", ">=", "&&", "||", "<<", ">>"):
                    return True
                if i > 0 and c in "+-^|&%":
                    return True
        i += 1
    return False


def stray_tail_statements(text):
    """Expression statements that are pure comparison/arith with NO assignment anywhere in them.

    If MECHANISM-B could discard a return tail WITHOUT hoisting an assignment, the discarded tail would
    show up here. A non-zero count means B is larger than the census's 8 and the partition is incomplete.

    Two bugs the selftest caught in the first version: `"=" in s` skipped every statement containing `!=`
    or `==`, and a comparison is exactly what a discarded return tail looks like - so the predicate could
    not fire and a tree-wide zero would have meant nothing. And the operator test required a `)` right
    before the operator, so `(iVar2 + 4)` never matched either.
    """
    n = 0
    for s in NAI.split_statements(NAI.strip_comments(text)):
        if not s or s.endswith(("{", "}")):
            continue
        if NAI.CONTROL.match(s) or "(" not in s or s.count("(") != s.count(")"):
            continue
        if re.match(r"^[A-Za-z_][A-Za-z0-9_]*\s*\(", s):
            continue                      # a call statement: discarding its value is normal
        if _has_bare_assignment(s):
            continue                      # that is the hoisted shape, counted by the other census
        if _top_level_operator(s):
            n += 1
    return n


# (label, [ghidra return lines], expected mechanism prefix). The true cases are the actual Ghidra text of
# the eight flagged units; the negatives are the shapes that must not be dragged in.
MECH_SELFTEST = [
    ("byte member + comparison", ["return (uint)(DAT_10482f40._3_1_ != '\0');"], "A+B"),
    ("word member only", ["return DAT_10485684._2_1_;"], "A"),
    ("param sub-word + arithmetic tail", ["return (param_1._2_4_ & 0xff) - 0x30;"], "A"),
    ("param sub-word + comparison", ["return (param_2._2_2_ & 0x7ff0) != 0x7ff0;"], "A+B"),
    ("plain register return - not this class", ["return uVar1;"], "UNKNOWN"),
    ("whole-dword read, no sub-word", ["return DAT_104859e4 & 0xffffff00;"], "UNKNOWN"),
    ("comparison on a plain value, no sub-word", ["return iVar2 < 0;"], "B(return translation"),
]


def mech_selftest():
    bad, fired = [], 0
    for label, lines, want in MECH_SELFTEST:
        got = mechanism_from_ghidra(lines)
        if not got.startswith(want):
            bad.append("%s: wanted prefix %r got %r" % (label, want, got))
        if got.startswith(("A", "B")):
            fired += 1
    if not fired:
        bad.append("the classifier never named a mechanism: the partition would be decoration")
    if bad:
        for b in bad:
            print("FAIL " + b)
        sys.exit("MECH SELFTEST FAILED: the classification cannot be trusted")
    print("mech selftest: %d/%d (real Ghidra lines classify; plain returns do not)"
          % (len(MECH_SELFTEST), len(MECH_SELFTEST)))


SELFTEST = [
    # (label, statement, expected_is_discarded_tail_without_assignment)
    ("the shape B would take if it did not hoist",
     "((uVar1 & 0xffu) != 0u);", True),
    ("arithmetic tail discarded", "(iVar2 + 4);", True),
    ("legitimate call statement - discarding a return value is normal",
     "cow_bridge_10313448(g, 0x103134CFu, 1u, (const CowU32[]){ param_1 });", False),
    ("legitimate void call", "rt_return(g, g->eax, 0u);", False),
    ("bare identifier, no operator", "uVar1;", False),
    ("control header, not a statement", "while (uVar1 != 0)", False),
    ("a comparison inside a real if is not a discarded statement",
     "if ((uVar1 & 0xffu) != 0u) {", False),
]


def selftest():
    """The whole-tree zero is only meaningful if this predicate can fire. Proven here, not assumed."""
    bad, fired = [], 0
    for label, stmt, want in SELFTEST:
        got = stray_tail_statements(stmt) > 0
        if got != want:
            bad.append("%s: wanted %s got %s" % (label, want, got))
        if got and want:
            fired += 1
    if not fired:
        bad.append("the predicate never fired on any true case, so a tree-wide zero would mean nothing")
    if bad:
        for b in bad:
            print("FAIL " + b)
        sys.exit("SELFTEST FAILED: cannot trust the 'no un-hoisted discarded tail' zero")
    print("selftest: %d/%d (discarded tails fire; calls, bare names and control headers do not)"
          % (len(SELFTEST), len(SELFTEST)))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--show-ghidra", action="store_true")
    ap.add_argument("--selftest", action="store_true")
    ap.add_argument("--dump", default=DUMP)
    a = ap.parse_args()
    selftest()
    mech_selftest()
    if a.selftest:
        return
    if not os.path.isfile(a.dump):
        print("WARNING: no Ghidra dump at %s - the Ghidra-side confirmation cannot be made, so the"
              " mechanism labels below rest on our side only." % a.dump)

    files = sorted(glob.glob(os.path.join(REPO, "src", "lifted", "cow_*.c")))
    if not files:
        sys.exit("REFUSING: no lifted files - a census over nothing reports zero of everything")

    tally = {}
    rows = []
    stray_total = 0
    bodies = 0
    for p in files:
        raw = io.open(p, encoding="utf-8").read()
        m = BODY_MARK.search(raw)
        if not m:
            continue
        bodies += 1
        stray_total += stray_tail_statements(m.group(1))
        flagged = NAI.nested_assignments(m.group(1))
        if not flagged:
            continue
        addr = re.match(r"cow_(10[0-9a-f]{6})\.c$", os.path.basename(p)).group(1)
        _mech_ours, ev = classify_body(flagged)
        status, glines = ghidra_return_lines(addr, a.dump)
        if status != "ok":
            mech = "UNKNOWN(%s)" % status
            gnote = "ghidra: status=%s" % status
        else:
            mech = mechanism_from_ghidra(glines)
            gnote = "ghidra: " + " | ".join(x[:78] for x in glines[:2])
        tally[mech] = tally.get(mech, 0) + 1
        rows.append((addr, mech, ev, gnote))

    print("bodies scanned: %d    flagged: %d" % (bodies, len(rows)))
    print("\n---- by mechanism ----")
    for k, v in sorted(tally.items(), key=lambda kv: -kv[1]):
        print("%3d  %s" % (v, k))
    print("\n---- per unit ----")
    for addr, mech, ev, gnote in rows:
        print("  0x%s  %-20s" % (addr, mech))
        for s in ev[:1]:
            print("        ours : %s" % s[:118])
        print("        %s" % gnote[:150])

    subword_all = [r for r in rows if "._" in r[3] and "sub-word" in r[1]]
    print("\n---- the conclusion the run produced ----")
    print("flagged units whose Ghidra return line contains a sub-word member access: %d of %d"
          % (len(subword_all), len(rows)))
    if rows and len(subword_all) == len(rows):
        print("=> ONE root cause, not two. Every case is Ghidra's `.<start>_<width>_` sub-word member access"
              " being mistranslated: the load is taken from the aligned base and the mask/operation that"
              " recovers the right bits is the part the discarded expression value throws away. The fix"
              " therefore belongs at the single place that translates sub-word members, and a change there"
              " must be scored against ALL 8 - not against a subset chosen by which sub-shape was convenient.")
        print("   (This contradicts the premise the tool was written to prove - that two mechanisms were"
              " being conflated. The evidence said they were never separate, and the tool gets credit for"
              " showing that, not for being right in advance.)")
    else:
        print("=> NOT one cause. %d unit(s) have no sub-word access in their Ghidra return line; they need"
              " their own explanation before any single fix is credited."
              % (len(rows) - len(subword_all)))

    print("\n---- is B really inside the 8? ----")
    print("discarded comparison/arith statements with NO assignment: %d" % stray_total)
    if stray_total:
        print("=> B IS BIGGER THAN 8. The partition above is incomplete: a return tail can be dropped"
              " without hoisting an assignment, so the census's hit list is not the whole population and"
              " neither fix can be scored against these numbers.")
    else:
        print("=> consistent with B being a subset of the flagged 8 (no un-hoisted discarded tail exists"
              " in the tree). Still: a zero from a predicate that cannot fire is not proof, which is"
              " why the selftest that runs first (see --selftest) is what gives this number its meaning.")


if __name__ == "__main__":
    main()
