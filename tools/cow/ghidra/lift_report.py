"""lift_report.py - the histogram behind a lift run, and examples for each bucket.

lift.py already prints refusals by reason, but two functions that are refused for the same reason string
are often refused for very different reasons in reality, and the fix has to be chosen per pattern, not per
string. This groups the SAME way lift.py does (it imports classify/emit rather than duplicating them) and
then shows sample bodies for any bucket, so the fix is picked from evidence.

    python tools/cow/ghidra/lift_report.py                       # histogram over all lift candidates
    python tools/cow/ghidra/lift_report.py --reason calls_unconverted_peer --show 5
    python tools/cow/ghidra/lift_report.py --reason goto_or_labels --show 3 --full
    python tools/cow/ghidra/lift_report.py --subpattern          # split buckets by callee count etc.
"""
import argparse
import json
import os
import re
import sys
from collections import Counter, defaultdict

if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)
TOOLS_COW = os.path.dirname(HERE)          # tools/cow: where cowdiff, build and trivial_audit live

import lift  # noqa: E402  the classifier is the single source of truth for what a lift refuses


def load_ledger_rows():
    with open(lift.LEDGER, encoding="utf-8", newline="") as fh:
        rows = list(__import__("csv").DictReader(fh))
    out = {}
    for r in rows:
        a = lift.norm(r.get("entry"))
        if a:
            out[a] = r
    return out


def subpattern(d, reason):
    """A second-level label so a bucket can be fixed by shape rather than by name."""
    c = d.get("c") or ""
    body = lift.body_of(c)
    self_name = "FUN_" + lift.norm(d.get("addr"))[2:]
    funs = sorted(set(lift.FUN_CALL_RE.findall(body)) - {self_name[4:]})
    thunks = sorted(set(lift.THUNK_CALL_RE.findall(body)))
    called = [x for x in lift.CALLED_RE.findall(body)
              if x not in ("if", "while", "for", "switch", "return", "sizeof")
              and x != self_name and x not in lift.C_ALLOWLIST]
    if reason == "calls_unconverted_peer":
        return "callees=%d unique=%d %s%s" % (
            len([m for m in re.finditer(r"\(", c)]), len(set(funs) | set(thunks)),
            "FUN:" + ",".join("0x" + f for f in funs[:4]),
            " THUNK:" + ",".join("0x" + t for t in thunks[:2]))
    if reason == "calls_unresolved_symbol":
        return "symbols=" + ",".join(sorted(set(called))[:8])
    if reason == "goto_or_labels":
        gotos = len(lift.GOTO_RE.findall(c))
        labs = len(lift.LABEL_RE.findall(c))
        return "gotos=%d labels=%d loops=%d" % (gotos, labs,
                                                len(re.findall(r"\b(?:do|while)\b", c)))
    if reason == "unresolved_register_or_overlay":
        m = re.findall(r"\b(?:unaff_\w+|in_[A-Z]{2,4}|_Overlay\b|__x86\.\w+)", c)
        return "tokens=" + ",".join(sorted(set(m))[:6])
    if reason == "indirect_call_via_code_ptr":
        return "code_ptr_lines=" + str(len(re.findall(r"\bcode\s*\*", c)))
    if reason == "switch":
        return "switches=" + str(len(lift.SWITCH_RE.findall(c)))
    return ""


# The identifier shapes Ghidra invents for image contents. lift.py has to know each one's MEANING
# (`&PTR_DAT_10329518` is the address 0x10329518; `PTR_DAT_10329518` on its own is the word stored
# there), so this counts them over the whole population: the fix order comes from the numbers, not
# from whichever function was looked at last.
SYM_RE = re.compile(r"\b((?:DAT_|PTR_|FUN_|THUNK_|lab_|LAB_|caseLAB_|s_|_DAT_|unaff_|in_[A-Z]{2,4}"
                    r"|__x86\.)[A-Za-z0-9_.]*)\b")
HEX_TAIL_RE = re.compile(r"_([0-9a-fA-F]{6,8})$")


def symbols_mode(args):
    ledger = load_ledger_rows()
    forms = Counter()
    addr_bearing = Counter()
    sample = {}
    n = 0
    with open(args.dump, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            try:
                d = json.loads(line)
            except ValueError:
                continue
            a = lift.norm(d.get("addr"))
            r = ledger.get(a)
            if r is None or (r.get("name") or "").strip():
                continue
            body = lift.body_of(d.get("c") or "")
            if not body:
                continue
            n += 1
            for tok in SYM_RE.findall(body):
                base = tok.split(".")[0]
                base = re.sub(r"_[0-9a-fA-F]{6,8}$", "_<hex>", base)
                base = re.sub(r"_\d+$", "_<n>", base)
                forms[base] += 1
                m = HEX_TAIL_RE.search(tok)
                if m:
                    addr_bearing[base] += 1
                    sample.setdefault(base, (a, tok))
    print("bodies scanned: %d" % n)
    print("\n%-34s %10s %12s   %s" % ("symbol form", "occurrences", "with address", "example"))
    for f, c in forms.most_common(40):
        ex = sample.get(f, ("", ""))
        print("%-34s %10d %12d   %s %s" % (f, c, addr_bearing.get(f, 0), "0x" + ex[0][2:] if ex[0] else "", ex[1]))
    return 0


ECX_WRITE_RE = re.compile(r"\becx\s*=\s*\(uint32_t\)\(")


def ecx_is_input(gtxt):
    """True when the generated body READS ecx before it ever writes it: an incoming thiscall/fastcall argument.

    lift.py's adapter reads arguments from `[ebp+8]`, which is right for cdecl and wrong for the whole
    C++ population, where `this` arrives in ecx. The generated translation is the authority, because
    REGS_LOAD has already pulled ecx in and the first instruction that uses it is the answer.
    """
    body = gtxt.split("REGS_LOAD;", 1)[-1]
    # every mention of ecx, in order, tagged as a write or a read
    events = []
    for m in re.finditer(r"\becx\b", body):
        is_write = ECX_WRITE_RE.match(body, m.start()) is not None
        events.append((m.start(), is_write))
    for _pos, is_write in events:
        return not is_write          # the FIRST mention decides: read-before-write means it is an argument
    return False


def needs_mode(args):
    """What the population actually requires, measured rather than assumed.

    A lift fails for one of a handful of structural reasons, and the right order to grow lift.py is the
    order of those counts. The generated body (not Ghidra's C) is the authority on the guest facts:
    X87_ means the entry moves the FPU stack (which cowdiff compares), an ecx read before any write means
    a thiscall/fastcall argument that no `ebp+8` can reach, and `call 0x...` count is how many bridges the
    entry needs.
    """
    sys.path.insert(0, TOOLS_COW)
    import trivial_audit
    index = trivial_audit.body_index()
    ledger = load_ledger_rows()
    gen_re = {
        "gen_x87": re.compile(r"\bX87_(?:PUSH|POP|STORE|LOAD|DECL)\b"),
        "gen_ecx_read": None,
        "gen_call": re.compile(r"/\*\s*[0-9a-f]{8}: call\b"),
        "gen_push": re.compile(r"/\*\s*[0-9a-f]{8}: push\b"),
        "gen_rep": re.compile(r"/\*\s*[0-9a-f]{8}: rep\b"),
        "gen_fpu_insn": re.compile(r"/\*\s*[0-9a-f]{8}: (?:fld|fst|fstp|fmul|fadd|fsub|fdiv|fild|fistp?|fldcw|fnstcw|fchs|fabs|fxch|fu?com|fcomi|fsqrt|flde?|ffree)\b"),
    }
    counts = Counter()
    pairs = Counter()
    scanned = 0
    with open(args.dump, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            try:
                d = json.loads(line)
            except ValueError:
                continue
            a = lift.norm(d.get("addr"))
            r = ledger.get(a)
            if r is None or (r.get("name") or "").strip():
                continue
            short = a[2:]
            body_gen = index.get(short)
            if body_gen is None:
                counts["no_generated_body"] += 1
                continue
            gtxt = "\n".join(body_gen)
            c = d.get("c") or ""
            gbody = lift.body_of(c)
            if not gbody.strip():
                counts["no_ghidra_body"] += 1
                continue
            scanned += 1
            need = []
            if gen_re["gen_x87"].search(gtxt):
                need.append("x87")
            if ecx_is_input(gtxt):
                need.append("ecx_in")
            if gen_re["gen_call"].search(gtxt):
                need.append("has_call_insn")
            if gen_re["gen_rep"].search(gtxt):
                need.append("string_op")
            if re.search(r"\bf_[0-9a-f]{8}\s*\(", gbody) or lift.THUNK_CALL_RE.search(gbody):
                need.append("has_callee")
            if re.search(r"\b(?:DAT_|PTR_|_DAT_|s_)[A-Za-z0-9_]*[0-9a-fA-F]{6,8}\b", gbody):
                need.append("has_ghidra_symbol")
            if re.search(r"\b(?:float|double)\b", gbody):
                need.append("float_math")
            if re.search(r"\bcode\s*\*", gbody):
                need.append("indirect_call")
            if re.search(r"\bgoto\b|\bLAB_", gbody):
                need.append("goto")
            if re.search(r"\bswitch\b", gbody):
                need.append("switch")
            if re.search(r"\bunaff_|\bin_[A-Z]{2,4}\b", gbody):
                need.append("unaff_or_in")
            for x in need:
                counts[x] += 1
            pairs[",".join(sorted(x.split("=")[0] for x in need)) or "plain"] += 1
    print("scanned (ledger rows with a Ghidra body AND a generated body): %d" % scanned)
    print("\nindividual needs:")
    for k, v in counts.most_common():
        print("  %-24s %6d  %5.1f%%" % (k, v, 100.0 * v / max(1, scanned)))
    print("\ntop need COMBINATIONS (this is what decides the fix order):")
    for k, v in pairs.most_common(20):
        print("  %-56s %6d" % (k, v))
    return 0


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--symbols", action="store_true",
                    help="count Ghidra identifier forms over the whole dump (what the rewriter must know)")
    ap.add_argument("--needs", action="store_true",
                    help="census of what each candidate structurally requires (x87, calls, symbols, ...)")
    ap.add_argument("--dump", default=os.environ.get("COW_LIFT_DUMP", "D:/projects/ghidra/ghidra_out/functions_all.jsonl"))
    ap.add_argument("--reason", default="", help="show examples for this bucket")
    ap.add_argument("--show", type=int, default=5)
    ap.add_argument("--full", action="store_true", help="print whole bodies, not a snippet")
    ap.add_argument("--min-size", type=int, default=0)
    ap.add_argument("--max-size", type=int, default=4000)
    args = ap.parse_args()

    if args.symbols:
        return symbols_mode(args)
    if args.needs:
        return needs_mode(args)

    ledger = load_ledger_rows()
    buckets = defaultdict(list)
    counts = Counter()
    total = 0
    with open(args.dump, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            try:
                d = json.loads(line)
            except ValueError:
                continue
            a = lift.norm(d.get("addr"))
            if not a:
                continue
            r = ledger.get(a)
            if r is None:
                continue
            if (r.get("name") or "").strip():          # hand units and named rows are off-limits
                continue
            sz = int(r.get("size") or 0)
            if sz < args.min_size or sz > args.max_size:
                continue
            total += 1
            ok, why = lift.classify(d)
            counts["lifted" if ok else "refused:" + why] += 1
            if not ok:
                buckets["refused:" + why].append((a, sz, d))

    print("dump: %s" % args.dump)
    print("candidates (ledger rows, unnamed, %d..%d B): %d" % (args.min_size, args.max_size, total))
    print()
    for k, v in counts.most_common():
        print("  %-40s %5d  %5.1f%%" % (k, v, 100.0 * v / max(1, total)))

    if args.reason:
        key = "refused:" + args.reason
        items = buckets.get(key, [])
        if not items:
            print("\nno entries in bucket %r (known: %s)"
                  % (key, ", ".join(sorted(x[8:] for x in buckets))))
            return 0
        print("\n== bucket %s: %d entries, smallest first ==" % (key, len(items)))
        items.sort(key=lambda x: x[1])
        subs = Counter()
        for a, sz, d in items:
            subs[subpattern(d, args.reason)] += 1
        print("sub-patterns (top 15):")
        for s, n in subs.most_common(15):
            print("  %5d  %s" % (n, s[:120]))
        print("\nsamples:")
        for a, sz, d in items[:args.show]:
            print("-" * 70)
            print("0x%s  size=%s  status=%s  %s"
                  % (a[2:], sz, (ledger.get(a) or {}).get("status"),
                     subpattern(d, args.reason)[:90]))
            c = d.get("c") or ""
            if args.full:
                print(c)
            else:
                print("\n".join(c.splitlines()[:24]))
                if len(c.splitlines()) > 24:
                    print("   ... (%d lines total)" % len(c.splitlines()))
    return 0


if __name__ == "__main__":
    sys.exit(main())
