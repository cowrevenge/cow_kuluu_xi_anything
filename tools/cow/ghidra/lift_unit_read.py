"""Read ONE unit end to end - the instrument the loop requires before any new mechanism.

The rule this exists to serve: before proposing a mechanism (a frame binding, a new naming rule, a
width fix), read one unit that the mechanism is meant to convert, through the REAL pipeline, and look at
every artefact the pipeline touches for that unit. Three defects this session shipped green through a
test suite and were only caught by this kind of read, so the tool is permanent rather than a scratch
script.

What it prints, for one entry, in the order a reader should look at it:

  1. identity    - ledger row, lift-proof row, and the LIVE refusal from classify()/emit() (the same
                   functions lift.py's main loop calls, not a paraphrase of them);
  2. the guest   - disassembly through gen_model.parse_instructions (hand-built instruction dicts are
                   the reason a "loop that stores" control once called a register-only loop a store);
  3. Ghidra      - the decompiled C verbatim, which is the text the rewrite and the escape rules run on;
  4. plumbing    - the generated/all function text, which is where widths, arg counts and call shapes
                   come from;
  5. model facts - the fields emit() consults (prologue, pushes/pops, esp reliability, string ops...);
  6. the escape tokens - which &name the rules condemned, located by a DISPLAY-ONLY regex that is
                   checked against the module's own verdict and REFUSES to print if they disagree.

Knobs are popped from the environment at import, exactly as lift_site_read.py does: a read must never
silently inherit a knob, because the last time that happened a diagnostic's output was about the
diagnostic. Pass --knob NAME=1 to set one deliberately, and the header then prints what is on.

Usage:
    python tools/cow/ghidra/lift_unit_read.py 0x1001ac50
    python tools/cow/ghidra/lift_unit_read.py 0x1001ac50 --knob COW_MODEL_NPUSH_FRAME_AWARE=1
"""
import argparse
import io
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
for p in (HERE, os.path.join(ROOT, "tools", "cow")):
    if p not in sys.path:
        sys.path.insert(0, p)

_KNOBS = [k for k in list(os.environ) if k.startswith("COW_")]
for _k in _KNOBS:
    os.environ.pop(_k)

import gen_model                                # noqa: E402
import ghidra_c                                   # noqa: E402

DUMP_DEFAULT = "D:/projects/ghidra/ghidra_out/functions_all.jsonl"
GENERATED_ALL = os.path.join(ROOT, "generated", "all")
PROOF_LEDGER = os.path.join(ROOT, "cow", "lift_proof_all.json")

# DISPLAY-ONLY locator for the escape class. The VERDICT comes from ghidra_c.leftover_problems(); this
# exists to point at the line, and it is asserted against the verdict below rather than trusted.
_ESC_LOCATE = re.compile(r"&\s*(param_\d+|[A-Za-z_][A-Za-z0-9_]*Stack_[0-9A-Za-z_]+|local_[0-9A-Za-z_]*)")

_MODEL_KEYS = ("prologue_len", "esp_delta_reliable", "pops", "pushes", "frame_pointer", "leave",
               "tail_jump", "has_x87", "has_string_op", "string_ops", "extra_pushes", "conv")


def norm(a):
    a = (a or "").strip().lower()
    if not a.startswith("0x"):
        a = "0x" + a
    return a


def read_dump(dump, want):
    """The dump record for one address, or a refusal. An empty result here is how a census once
    reported '0' as a finding."""
    found = None
    seen = 0
    with io.open(dump, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            try:
                d = json.loads(line)
            except ValueError:
                continue
            seen += 1
            if norm(d.get("addr")) == want:
                found = d
                break
    if found is None:
        sys.exit("REFUSING: %s is not in %s (%d records scanned). Nothing below this line is a read of"
                 " the unit." % (want, dump, seen))
    return found


def head(title):
    print("\n" + "=" * 100)
    print(title)
    print("=" * 100)


def main():
    ap = argparse.ArgumentParser(prog="lift_unit_read.py")
    ap.add_argument("entry")
    ap.add_argument("--dump", default=DUMP_DEFAULT)
    ap.add_argument("--ghidra", default="12.2")
    ap.add_argument("--knob", action="append", default=[],
                    help="NAME=1 to set a knob for THIS read (printed in the header)")
    ap.add_argument("--no-emit", action="store_true",
                    help="skip classify()/emit() (they are the live pipeline; only skip to read faster)")
    a = ap.parse_args()

    for spec in a.knob:
        if "=" not in spec:
            sys.exit("REFUSING: --knob wants NAME=VALUE, got %r" % spec)
        k, v = spec.split("=", 1)
        if not k.startswith("COW_"):
            sys.exit("REFUSING: --knob %s is not a COW_* knob - do not set arbitrary environment here."
                     % k)
        os.environ[k] = v

    want = norm(a.entry)
    d = read_dump(a.dump, want)
    hex8 = want[2:]

    head("1. IDENTITY  %s" % want)
    print("knobs ON for this read: %s" % ({k: os.environ[k] for k in os.environ
                                           if k.startswith("COW_")} or "none - this is the default view"))
    print("dump fields present   : %s" % ", ".join(sorted(d.keys())))
    print("decompiled=%s is_thunk=%s external=%s"
          % (bool(d.get("decompiled")), d.get("is_thunk"), d.get("external")))

    try:
        import lift
        ledger = lift.load_ledger().get(want)
    except SystemExit:
        raise
    except Exception as exc:                      # noqa: BLE001 - a read should degrade, not vanish
        ledger = None
        print("note: ledger could not be read (%s)" % exc)
    print("ledger row            : %s" % (json.dumps(ledger, sort_keys=True) if ledger else "ABSENT"))
    if os.path.isfile(PROOF_LEDGER):
        with io.open(PROOF_LEDGER, encoding="utf-8", errors="replace") as fh:
            prof = json.load(fh)
        row = (prof.get("rows") or prof).get(hex8)
        print("lift-proof row        : %s" % (json.dumps(row, sort_keys=True)[:300] if row else "ABSENT"))

    text = None              # bound OUTSIDE the branch, not inside it: section 6 reads `text if text else
                             # c`, and with --no-emit that was an UnboundLocalError. The crash stayed hidden
                             # because the read was run through `| Select-Object -First N`, which swallows
                             # both the traceback tail and the exit code.
    if not a.no_emit:
        ctx = lift.Ctx(a.dump, a.ghidra)
        ctx.problems = []
        ok, why = lift.classify(d)
        print("classify()            : %s" % ("ok" if ok else "REFUSED %s" % why))
        if ok:
            text, why2 = lift.emit(d, ctx)
            print("emit()                : %s" % ("produced %d chars" % len(text) if text
                                                  else "REFUSED %s" % why2))
        if getattr(ctx, "problems", None):
            print("ctx.problems          :")
            for p in ctx.problems[:12]:
                print("    %s" % str(p)[:180])

    head("2. THE GUEST  (disassembly via gen_model.parse_instructions on generated/all/f_%s.c)" % hex8)
    import trivial_audit                          # noqa: E402  the same body index lift_site_read uses
    bodies = trivial_audit.body_index()
    bl = bodies.get(hex8) or []
    if not bl:
        print("NO BODY LINES in trivial_audit.body_index() for f_%s - the read cannot continue into the"
              " guest, so any claim below about its behaviour is unverified." % hex8)
    ins = gen_model.parse_instructions(bl) if bl else []
    if not ins:
        print("NO INSTRUCTIONS PARSED - %s is missing or carries no asm comment lines, so anything said"
              " below about the guest's behaviour is unverified." % gp)
    else:
        for r in ins[:220]:
            print("  %08x  %-10s %s" % (int(r["addr"], 16) if isinstance(r["addr"], str) else r["addr"],
                                        r.get("mnem") or "", (r.get("text") or "").strip()))
        if len(ins) > 220:
            print("  ... %d more instruction(s) not printed" % (len(ins) - 220))
        print("  (%d instruction record(s))" % len(ins))

    head("3. GHIDRA  (the decompiled C the rewrite and the escape rules run on)")
    c = d.get("c") or ""
    if not c.strip():
        print("NO GHIDRA C IN THE DUMP RECORD.")
    else:
        for i, line in enumerate(c.splitlines(), 1):
            print("  %3d| %s" % (i, line))

    head("4. PLUMBING  (the generated body - widths, arg counts, call shapes)")
    # NOT `generated/all/f_<hex>.c`: the generated tree is ~60 files of many functions each (that is what
    # trivial_audit's HEAD_RE matches), so a per-function filename is a fiction - the first version of this
    # tool printed "MISSING" for every unit while section 2 parsed 31 instructions from that same body.
    located = None
    if os.path.isdir(GENERATED_ALL):
        want_head = re.compile(r"^void f_%s(?:_body)?\(Guest\* g\)\s*$" % hex8)
        for name in sorted(os.listdir(GENERATED_ALL)):
            if not name.endswith(".c") or name == "table.c":
                continue
            path = os.path.join(GENERATED_ALL, name)
            with io.open(path, encoding="utf-8", errors="replace") as fh:
                lines = fh.read().splitlines()
            for i, line in enumerate(lines):
                if want_head.match(line.strip()):
                    located = (name, i, lines)
                    break
            if located:
                break
    if not located:
        print("MISSING: no `void f_%s(Guest* g)` header under generated/all - the plumbing source is"
              " absent, so an argcount or width conclusion here would be unread." % hex8)
    else:
        name, i, lines = located
        print("  [generated/all/%s line %d]" % (name, i + 1))
        depth, printed = None, 0
        for j in range(i, min(i + 400, len(lines))):
            line = lines[j]
            print("  %5d| %s" % (j + 1, line))
            printed += 1
            depth = (depth or 0) + line.count("{") - line.count("}")
            if depth == 0 and printed > 1:
                break
        if printed < 3:
            sys.exit("REFUSING: located f_%s but printed %d line(s) - the brace walk is broken."
                     % (hex8, printed))

    head("5. MODEL FACTS  (what emit() consults)")
    try:
        m = gen_model.model_generated(bl) if bl else None
    except Exception as exc:                      # noqa: BLE001
        m = None
        print("model_generated raised %r" % exc)
    if m:
        for k in _MODEL_KEYS:
            if k in m:
                print("  %-20s %s" % (k, json.dumps(m[k], default=str)[:200]))
        for k in sorted(m):
            if k not in _MODEL_KEYS:
                print("  %-20s %s" % (k, json.dumps(m[k], default=str)[:120]))

    head("6. ESCAPE TOKENS  (verdict from ghidra_c.leftover_problems, lines located for reading)")
    source = text if text else c
    tags = list(ghidra_c.leftover_problems(source)) if source else []
    esc = sorted({t for t in tags if "escape" in t})
    print("leftover_problems tags : %s" % (sorted(set(tags)) or "none"))
    located = []
    if source:
        for i, line in enumerate(source.splitlines(), 1):
            for mm in _ESC_LOCATE.finditer(line):
                located.append((i, mm.group(1), line.strip()))
    # The assertion, in both directions: the module must not condemn an escape my locator cannot point
    # at, and my locator must not find escapes the module is content with.
    if esc and not located:
        sys.exit("REFUSING: %s reported by the module but no &token located - the locator and the rule"
                 " have forked, so this read is worthless." % ", ".join(esc))
    if located and not esc:
        sys.exit("REFUSING: located %d &token(s) (%s) but the module reports no escape refusal - the"
                 " locator is over-firing; do not design against it."
                 % (len(located), ", ".join(sorted({t for _l, t, _x in located}))[:200]))
    for i, tok, line in located[:40]:
        print("  line %4d  &%-18s %s" % (i, tok, line[:120]))
    if located:
        print("  (%d escape token(s): %s)" % (len(located), ", ".join(sorted({t for _l, t, _x in located}))))


if __name__ == "__main__":
    main()
