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
claiming it was would be inventing a family to fit a hope. Cross-joined to the records (--join):

    2 in the halt's failing set   (100c3cd0, 100c3ce0)  <- the class IS part of why the loop is stopped
    2 carry the shape and PASS    (101cc600, 10230b90)  <- DEFECTS TOO; the pass is masked by data
    4 never judged at all         (10087010, 10087650, 10225b80, 10314508)

The 4 unjudged were then compared directly (`cowdiff.py --json --states 6 --seed 12345`) rather than left
as an unknown, because "no claim either way" is the state in which a hit list gets dismissed as noise:

    0x10087650  FAIL  4 mismatch(es) at state 0 (eax)   blocks 4/4
    0x10225b80  FAIL  5 mismatch(es) at state 0 (eax)   blocks 5/5
    0x10314508  FAIL  6 mismatch(es) at state 0 (eax)   blocks 8/8
    0x10087010  PASS  0 mismatches, blocks 8/10 - and the two UNREACHED blocks are
                      "10087019: xor al, al" and "1008701b: ret", i.e. the entire nonzero-dword path of
                      `je 0x1008701c`. So one of the function's two directions was never exercised at all.
                      On the path that WAS taken, agreement again rests on the image byte at 0x10482f43
                      being zero, exactly as in the PASS-MASKED pair above.

So 3 of the 4 unjudged units are newly-discovered genuine failures, and the fourth is untested rather than
clean. **7 of the 8 hits are demonstrably broken and the eighth has never been exercised in both
directions.** The 3 new failures are NOT in the halt's 394 - they are not claimed-proven - so they are lift
quality, not a halt regression.

THE MECHANISM IS NOT ONLY A DISCARDED TRAILING OP. 0x10087010 shows a second one. Ghidra's C is

    if (DAT_104859e4 == 0) {
        return (uint)(DAT_10482f40._3_1_ != '\0');    ; eax must become 0 or 1
    }
    return DAT_104859e4 & 0xffffff00;

and the emitted body is

    if (rd32(COW_IMG(COW_ADDR_LIFT_104859E4)) == 0) {
        (((uint64_t)(g->eax = (CowU32)(... << 24) & 0xffu) != '\0')); return;
    }

So `return <expr>` was translated by assigning a SUB-expression of `<expr>` to `g->eax` and discarding the
rest - the comparison that produces the 0/1 return value is evaluated and thrown away, leaving eax holding a
raw byte. (An earlier reading of this line called it a lost `if`; that was wrong, the `if` is Ghidra's. The
`if` was checked against the decompiler text before this sentence was written.)

THREE WAYS A PASS STOPS BEING EVIDENCE, all observed here:
  1. **PASS-MASKED** - both sides agree because the data they read is zero (disjoint bit ranges).
  2. **PASS-UNREACHED** - `blocks < blocks_total`: the judge never executed the statement in question.
  3. **UNJUDGED** - absent from every record, which reads like "no problem found" and means "no look taken".
A hit must be cleared by reading it, never by a verdict.

THE TWO THAT PASS ARE DEFECTS, NOT BENIGN CASES - and how they pass is the more important finding. Neither
is a fragment: both flagged statements are the entire body and neither is owned by a control keyword. For
0x101cc600 the guest is

    101cc600: xor eax, eax
    101cc602: mov al, byte ptr [0x10485686]      ; guest puts that byte in bits 0-7
    101cc607: ret

while our body computes `g->eax = (CowU32)(rd32(COW_ADDR_LIFT_10485684)) << 16`, i.e. bits **16-31**.
Ghidra read a byte-extraction idiom as a shifted dword load and applied the wrong direction; the `& 0xff`
that would have exposed the error is exactly the operation the discarded value throws away. Two expressions
occupying disjoint bit ranges can agree only when both are zero, and `cowdiff 0x101cc600 --states 4` reports
`mismatches: 0, pass: true` - which therefore *proves* the judged image holds zeros at `0x10485684..86`.

`0x10230b90` is the same idiom at word width: guest `xor eax,eax; mov ax, word ptr [0x104804d6]` puts the
word in bits 0-15, while our body computes `rd32(COW_ADDR_LIFT_104804D4) << 16` into bits 16-31. So the
recurring mechanism is specific and nameable: **Ghidra renders a sub-word load at an unaligned address as a
shifted load from the dword-aligned base, and the mask that recovers the correct bits is precisely the
operation the discarded expression value throws away.** The register then holds the value in the wrong half
of eax. Both PASS-MASKED units are this; both would fail the moment the image held a non-zero there.

So **a PASS on a flagged unit means "masked by data", never "fine"**, and `--join` labels it so rather than
letting the verdict be read as correctness. This is the same species of blindness as the judge mapping the
image at its preferred base (RD=0, where an un-rebased address is indistinguishable from a correct one):
cowdiff compares only what the seeded state exercises, so a zero in the path makes a wrong expression and a
right one agree. Register defects can be hidden by memory contents - which is why this detector is worth
keeping even though it finds eight units, and why its hits are never "already handled" because they pass.

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
import json
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


def join_records(hits):
    """Label each hit by what the records say, so a PASS is not read as 'fine'.

    FAILING        it is in the halt's failing set - this class is part of why the loop is stopped
    PASS-MASKED    the map and the audit both say pass, yet the body carries the defect. A pass here is not
                   evidence of correctness: the expressions can agree because the memory they read is zero
                   (measured for 0x101cc600, where guest and our code write disjoint bit ranges of eax).
    UNJUDGED       neither record covers it - no claim either way.
    """
    sys.path.insert(0, os.path.join(REPO, "tools", "cow", "ghidra"))
    sys.path.insert(0, os.path.join(REPO, "tools", "cow"))
    import lift_proof_map as lpm
    rv_path = os.path.join(REPO, "cow", "reverify.json")
    failing = set()
    if os.path.isfile(rv_path):
        with io.open(rv_path, encoding="utf-8") as fh:
            rv = json.load(fh)
        failing = {lpm.strip0x(f.get("unit") or "") for f in (rv.get("failed") or [])}
    else:
        print("note: no cow/reverify.json - FAILING cannot be determined, so the labels below are weaker"
              " than they look.")
    proof = lpm.load_map()
    lpm.can_fire(proof)
    tally = {"FAILING": 0, "PASS-MASKED": 0, "UNJUDGED": 0}
    print("\n---- joined to the records (a PASS here does NOT mean the shape is benign) ----")
    for u in sorted(hits):
        if u in failing:
            label = "FAILING"
        else:
            row = lpm.lookup(proof, u)
            label = "PASS-MASKED" if row and row.get("pass") is True else "UNJUDGED"
        tally[label] += 1
        print("  0x%-10s %-12s %s" % (u, label, hits[u][0][:96]))
    print("  %s" % tally)
    if tally["PASS-MASKED"]:
        print("\n  The %d PASS-MASKED unit(s) are defects whose wrongness the seeded state happens to hide."
              " Do not book, close, or 'already handled' them on the strength of that pass - read the guest"
              " body and check whether both sides can only agree on zero data."
              % tally["PASS-MASKED"])


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--selftest", action="store_true")
    ap.add_argument("--join", action="store_true",
                    help="label each hit FAILING / PASS-MASKED / UNJUDGED against the records")
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
    if a.join:
        # hits is keyed by file NAME (that is what the can-fire check needs); the records are keyed by bare
        # hex. Normalising here instead of hoping the two agree is the difference between a label and a
        # column of UNJUDGED that looks like a result.
        by_hex = {}
        for k, v in hits.items():
            mm = re.match(r"cow_([0-9a-f]{8})\.c$", k)
            if mm:
                by_hex[mm.group(1)] = v
        if len(by_hex) != len(hits):
            sys.exit("REFUSING: %d hits but only %d parsed to an address - a hit whose key did not parse"
                     " would be reported as UNJUDGED, which is an answer it never gave."
                     % (len(hits), len(by_hex)))
        join_records(by_hex)


if __name__ == "__main__":
    main()
