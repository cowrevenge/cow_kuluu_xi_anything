"""lift.py - turn Ghidra's decompiled C into a cow unit, mechanically.

Input is the JSONL CowLiftDump.java writes (one function per line, with its address, its body, its
signature and its C). Output is a src/ file in cow style: a named user function holding the
computation, and a COW_ADAPTER block holding the guest-facing plumbing (registers, stack, memory),
which is where the gate's readability rules deliberately do not apply.

    python tools/cow/ghidra/lift.py --dump C:/ghidra_out/functions_all.jsonl --limit 200 --apply
    python tools/cow/ghidra/lift.py --dump ... --entries 0x10001070,0x102d9502 --apply
    python tools/cow/ghidra/lift.py --dump ... --limit 200            # report only, write nothing

WHAT IT IS FOR. A hand conversion is ~5 minutes and 19k functions is not 5 minutes times 19k. The bet
is that most functions are structurally dull and a script can produce a compiling, behaviour-matching
starting point that cowdiff then judges. cowdiff is the only thing that says whether a lift is right:
this script never claims correctness, only "this is what the decompiler said, in our shape".

WHAT IT REFUSES, and why that is a feature. Every refusal is a reason string, and the reasons are what
the pilot report groups by - the point of the pilot is to learn which shapes the script must grow to
handle, not to pretend a third of them converted. A function it cannot translate is left untouched
rather than written out broken, because a broken unit that still compiles is worse than no unit: it
passes the build and fails the reader.

Deliberately NOT touched here: the 25 hand-written units (ledger status=done), the trivial table, and
any naming. A lifted unit is named cow_lift_<hex> and is a guess by definition.
"""
import argparse
import csv
import json
import os
import re
import sys
from collections import Counter

if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
LEDGER = os.path.join(ROOT, "ledger", "functions.csv")
LIFT_DIR = os.path.join("src", "lifted")

# Ghidra's own filler names. A body that still mentions one of these was not really resolved and must
# not be shipped: unaff_* / in_* are registers the decompiler could not bind, and *_Overlay is a
# union it guessed.
UNRESOLVED_RE = re.compile(r"\b(?:unaff_|in_[A-Z]{2,4}\b|__x86\.|_Overlay\b)")
DAT_RE = re.compile(r"\b(?:DAT_|PTR_)([0-9a-fA-F]{6,10})\b")
LIT_ADDR_RE = re.compile(r"\b(?:0x[0-9a-fA-F]{6,10}|(?:[1-9]\d{5,}))\b")
FUN_CALL_RE = re.compile(r"\bFUN_([0-9a-fA-F]{8})\s*\(")
THUNK_CALL_RE = re.compile(r"\bTHUNK_([0-9a-fA-F]{8})\s*\(")
LABEL_RE = re.compile(r"^\s*(?:LAB_|caseLAB_)[0-9a-fA-F]+\s*:", re.M)
GOTO_RE = re.compile(r"\bgoto\s+", re.I)
SWITCH_RE = re.compile(r"\bswitch\s*\(")
EXOTIC_RE = re.compile(r"\b(?:setjmp|longjmp|__security|_alloca|va_start|va_arg)\b")
MULTI_RET_RE = re.compile(r"\breturn\b")
BAD_NAME_RE = re.compile(r"\b(?:DAT_|PTR_|FUN_|undefined[0-9]?)\b")

CALLED_RE = re.compile(r"\b([A-Za-z_][A-Za-z0-9_]*)\s*\(")

# What a lifted body is allowed to call. Narrow on purpose: everything here is either the C library or
# a cow helper that exists in this tree, so a lift that compiles also links. Anything outside it is a
# function nobody has bridged yet, and the refusal count is the signal for that.
C_ALLOWLIST = frozenset("""
    abs labs llabs fabs sqrt fabsf sqrtf floor ceil floorf ceilf round roundf trunc truncf
    memcpy memset memmove memcmp strcmp strncmp strlen strcpy strncpy strcat strncat
    malloc free calloc realloc
    __security_cookie
""".split())


def norm(a):
    a = (a or "").strip().lower()
    if not a.startswith("0x"):
        return ""
    try:
        return "0x%x" % int(a, 16)
    except ValueError:
        return ""


# ------------------------------------------- the entry's own prologue and epilogue, read back from bytes
# Ghidra's C throws the frame away: it turns `push`/`sub esp` into plain locals and the `ret`'s cleanup
# into nothing. That is fine for a reader and fatal for a lift, because cowdiff compares the guest stack
# and the callee-saved registers. So the two facts the C loses are taken back from the binary itself -
# the same DLL the recompiler read, decoded with the capstone tools/cow/disasm.py already uses.
_PE = None


def load_image(dll_path):
    """(data, [(va, size, raw), ...]) for the DLL, cached."""
    global _PE
    if _PE is not None:
        return _PE
    import struct
    data = open(dll_path, "rb").read()
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    nsec = struct.unpack_from("<H", data, pe + 6)[0]
    secsz = struct.unpack_from("<H", data, pe + 20)[0]
    BASE = 0x10000000
    secs = []
    for i in range(nsec):
        o = pe + 24 + secsz + i * 40
        vsz, va, rsz, raw = struct.unpack_from("<IIII", data, o + 8)
        secs.append((BASE + va, max(vsz, rsz), raw))
    _PE = (data, secs)
    return _PE


def image_bytes(dll, va, n):
    data, secs = load_image(dll)
    for sva, ssz, sraw in secs:
        if sva <= va < sva + ssz:
            off = sraw + (va - sva)
            return data[off:off + n]
    return b""


def frame_shape(dll, addr, end):
    """What the entry's first and last instructions actually do. None when the bytes cannot be read.

    Deliberately narrow: it stops at the first instruction that is not a register push or the frame
    setup, and it only reports a purge when EVERY `ret` in the body agrees. A function with mixed
    cleanup has more than one epilogue and picking one is a guess about which path the caller took, so
    it comes back as purge=None and the caller refuses the lift rather than shipping a wrong esp.
    """
    try:
        from capstone import Cs, CS_ARCH_X86, CS_MODE_32
    except ImportError:
        return None
    lo = int(addr, 16)
    # body_max is the address of the LAST instruction, not one past it, so the range has to run past it
    # or the final `ret` - the very thing this function exists to find - sits just outside the window.
    hi = (int(end, 16) + 16) if end else (lo + 256)
    if hi <= lo:
        return None
    if hi - lo > 4096:
        hi = lo + 4096                    # the epilogue of a 1.5 MB "function" is not in its prologue
    blob = image_bytes(dll, lo, hi - lo)
    if not blob:
        return None
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    insns = list(md.disasm(blob, lo))

    # PROLOGUE: the run of register pushes, the optional frame pointer and the locals reservation.
    # This scan stops at the first instruction that is not part of that shape.
    pushes, sub_esp, saw_frame = [], 0, False
    for ins in insns:
        m, op = ins.mnemonic, ins.op_str.replace(" ", "")
        if m == "push" and op in ("ebp", "esi", "edi", "ebx", "eax", "ecx", "edx"):
            pushes.append(op)
            continue
        if m == "mov" and op == "ebp,esp":
            saw_frame = True
            continue
        if m == "sub" and op.startswith("esp,"):
            try:
                sub_esp = int(op.split(",")[1], 0)
            except ValueError:
                sub_esp = -1
            break
        break

    # EPILOGUE: every `ret` in the body, from a SEPARATE full scan. Reading it off the prologue scan is
    # wrong - that scan stops at `sub esp` long before the end - and reading only the last one is wrong
    # too, because a function with two epilogues has to clean the same amount in both or the caller's
    # esp depends on which path was taken. All agree, or there is no answer to give.
    rets, leave = [], False
    for ins in insns:
        m, op = ins.mnemonic, ins.op_str.replace(" ", "")
        if m == "leave":
            leave = True
        elif m == "ret":
            if not op:
                rets.append(0)
            else:
                try:
                    rets.append(int(op, 0))
                except ValueError:
                    rets.append(-1)
    uniq = set(rets)
    if not uniq:
        purge = None                        # no ret seen at all: the range is not a function body
    elif len(uniq) == 1:
        purge = rets[0]
    else:
        purge = None                        # two epilogues that disagree about the cleanup
    return {"pushes": pushes, "frame_pointer": saw_frame, "locals": sub_esp,
            "leave": leave, "purge": purge, "rets": rets, "no_ret": not uniq}


def load_ledger():
    with open(LEDGER, encoding="utf-8", newline="") as fh:
        rows = list(csv.DictReader(fh))
    out = {}
    for r in rows:
        a = norm(r.get("entry"))
        if a:
            out[a] = r
    return out


# Ghidra spells the integer types differently from us, and this is the COMMON case rather than a
# failure: an unresolved 32-bit program says `undefined4` for almost every local. Refusing on it was
# my error and it rejected 105 of the first 200 candidates, so they are mapped instead. Widths with no
# honest equivalent (undefined3/5/6/7) still refuse, because padding a 5-byte field to 8 silently
# changes which bytes the function touches.
GHIRDA_TYPES = [
    (r"\bundefined8\b", "uint64_t"),
    (r"\bundefined7\b", None),
    (r"\bundefined6\b", None),
    (r"\bundefined5\b", None),
    (r"\bundefined4\b", "CowU32"),
    (r"\bundefined3\b", None),
    (r"\bundefined2\b", "CowU16"),
    (r"\bundefined1\b", "CowU8"),
    (r"\bundefined\b", "CowU32"),
    (r"\bulonglong\b", "uint64_t"),
    (r"\blonglong\b", "int64_t"),
    (r"\bulong\b", "CowU32"),
    (r"\buint\b", "CowU32"),
    (r"\bushort\b", "CowU16"),
    (r"\buchar\b", "CowU8"),
    (r"\bqword\b", "uint64_t"),
    (r"\bdword\b", "CowU32"),
    (r"\bword\b", "CowU16"),
    (r"\bbyte\b", "CowU8"),
]


def normalize_types(text):
    """Ghidra type names -> the cow/stdint names this tree uses. Returns (text, unmappable)."""
    unmappable = []
    for pat, rep in GHIRDA_TYPES:
        if rep is None:
            if re.search(pat, text):
                unmappable.append(pat.strip("\\b"))
            continue
        text = re.sub(pat, rep, text)
    return text, unmappable


def classify(d):
    """Return (ok, reason). 'ok' means we believe a translation is worth writing."""
    if not d.get("decompiled"):
        return False, "not_decompiled"
    if d.get("is_thunk"):
        return False, "thunk"
    if d.get("external"):
        return False, "external"
    c = d.get("c") or ""
    if not c.strip():
        return False, "empty_c"
    if UNRESOLVED_RE.search(c):
        return False, "unresolved_register_or_overlay"
    if EXOTIC_RE.search(c):
        return False, "exotic_runtime"
    # Ghidra's structured output is a gift; if it fell back to gotos and labels for this function,
    # translating it means doing the structuring ourselves, which is not a lift.
    if GOTO_RE.search(c) or LABEL_RE.search(c):
        return False, "goto_or_labels"
    if SWITCH_RE.search(c):
        return False, "switch"
    if re.search(r"\bcode\s*\*", c):
        return False, "indirect_call_via_code_ptr"
    # A call we cannot name is a call that will not link. FUN_* is an unconverted peer, THUNK_* is a
    # table hop, and anything else that is not a plain C library call is an import the recompiler
    # resolved to a shim we have not bridged. Writing `FUN_10311bf0(x);` into src/ does not compile,
    # and inventing a cow_call_* name for a function nobody has read would be worse: it would compile
    # and be wrong. So these refuse, and the count of them is the honest measure of how much of the
    # tree has to be converted before a function can be lifted alone.
    for callee in CALLED_RE.findall(c):
        if callee in ("if", "while", "for", "switch", "return", "sizeof"):
            continue
        if callee in C_ALLOWLIST:
            continue
        if re.match(r"^(FUN_|THUNK_|DAT_|PTR_|__|sys_|Sys|SysFree)", callee):
            return False, "calls_unconverted_peer"
        if not re.match(r"^[a-z_][A-Za-z0-9_]*$", callee):
            return False, "calls_unresolved_symbol"
        return False, "calls_unresolved_symbol"
    if re.search(r"\b(?:CONCAT[0-9]+[0-9]+|ZEXT|SEXT|NAN|_undefined[0-9])\b", c):
        return False, "ghidra_pseudo_op"
    if re.search(r"\b(?:fabs|sqrt|fmod|pow|atan|log|exp|sin|cos|tan)\s*\(", c):
        return False, "math_library"
    if re.search(r"\bundefined[3567]\b", c):
        return False, "ghidra_type_unmappable"
    if c.count("{") != c.count("}"):
        return False, "unbalanced_braces"
    if len(c) > 60000:
        return False, "too_large"
    return True, ""


def body_of(c):
    """The function body between the first { and its matching }."""
    i = c.find("{")
    if i < 0:
        return ""
    depth = 0
    for j in range(i, len(c)):
        if c[j] == "{":
            depth += 1
        elif c[j] == "}":
            depth -= 1
            if depth == 0:
                return c[i + 1:j]
    return c[i + 1:]


def rewrite(body, layout):
    """Ghidra C -> cow C, in the few rewrites that are safe to do blindly.

    Everything this does NOT do is deliberate: it does not try to invent structure, rename locals into
    meaningful names, or decide types. It makes the memory accesses go through the harness and moves
    every guest address into layout/, which is what the gate checks for.
    """
    def macro_for(va):
        key = "0x%x" % int(va, 16)
        name = layout.get(key)
        if not name:
            name = "COW_ADDR_LIFT_%s" % key[2:].upper()
            layout[key] = name
        return name

    # Assignments FIRST: `*(int *)0x... = v;` has to become a wr32, and if the read form were replaced
    # first it would leave `rd32(...) = v;`, which is not C at all.
    body = re.sub(r"\*\s*\(\s*(?:signed\s+)?int\s*\*\s*\)\s*(0x[0-9a-fA-F]+)\s*=\s*([^;]+);",
                  lambda m: "wr32(COW_IMG(%s), %s);" % (macro_for(m.group(1)), m.group(2).strip()),
                  body)
    body = re.sub(r"\*\s*\(\s*float\s*\*\s*\)\s*(0x[0-9a-fA-F]+)\s*=\s*([^;]+);",
                  lambda m: "wrf32(COW_IMG(%s), %s);" % (macro_for(m.group(1)), m.group(2).strip()),
                  body)

    # Reads. COW_IMG is not decoration: the image is relocated at run time, so a bare VA names the
    # wrong byte and the unit would read its own sandbox.
    def dat_sub(m):
        return "rd32(COW_IMG(%s))" % macro_for(m.group(1))

    body = DAT_RE.sub(dat_sub, body)
    body = re.sub(r"\*\s*\(\s*(?:signed\s+)?int\s*\*\s*\)\s*(0x[0-9a-fA-F]+)",
                  lambda m: "rd32(COW_IMG(%s))" % macro_for(m.group(1)), body)
    body = re.sub(r"\*\s*\(\s*float\s*\*\s*\)\s*(0x[0-9a-fA-F]+)",
                  lambda m: "rdf32(COW_IMG(%s))" % macro_for(m.group(1)), body)
    body = re.sub(r"\*\s*\(\s*(?:unsigned\s+)?(?:char|CowU8)\s*\*\s*\)\s*(0x[0-9a-fA-F]+)",
                  lambda m: "rd8(COW_IMG(%s))" % macro_for(m.group(1)), body)

    body, _ = normalize_types(body)

    # A bare call to another FUN_ is left EXACTLY as the decompiler wrote it: lift.py does not know
    # whether that target is converted, and inventing a bridge name it has not proven is how a lift
    # quietly becomes fiction. classify() has already rejected the shapes where this is common.
    return body


HEADER = """/* f_{addr} - MACHINE-LIFTED from Ghidra {ghidra} decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/addresses.h. Nothing here has been reasoned about, so it carries no Evidence block and
   asserts nothing about what the function is for.

   Proven only by: tools/cow/cowdiff.py {addr} - differential against the generated original, which
   is the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_{short} (machine guess - no evidence, PHASE B names it properly by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h" /* the guest addresses this body mentions, hoisted out of src/ by lift.py */
"""

ADAPTER_TMPL = """
/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument. {conv}
   Args are read from the caller's frame at ebp+0x8.. (the words rt_arg would hand a cdecl callee),
   and the epilogue is the entry's own `ret {purge_hex}`. */
void cow_adapter_{short}(Guest* g)
{{
{prologue}

{argdecls}
    cow_lift_{short}({arglist});

{stores}
    rt_return(g, {ret}, {purge}u);
}}
/* COW_ADAPTER END */
"""


def emit(d, layout, ghidra_ver, dll):
    addr = norm(d["addr"])
    short = addr[2:]
    body = body_of(d["c"])
    body = rewrite(body, layout)

    nparams = int(d.get("param_count") or 0)
    fr = frame_shape(dll, addr, norm(d.get("body_max")))
    if fr is None:
        return None, "bytes_unreadable"
    purge = fr["purge"]
    if fr.get("no_ret"):
        # No ret anywhere in the range: this is a data blob or the tail of a jump table, not a function
        # the recompiler can call and return from.
        return None, "no_ret_in_range"
    if purge is None or purge < 0:
        # Two or more epilogues that do not agree about the cleanup. Choosing one is a guess about which
        # path the caller took, so refuse rather than hand back a wrong esp.
        return None, "purge_ambiguous"
    if fr["locals"] < 0:
        return None, "sub_esp_not_immediate"
    if not fr["leave"] and fr["frame_pointer"] and fr["pushes"][:1] != ["ebp"]:
        return None, "frame_shape_unrecognised"

    REGFIELD = {"ebp": "g->ebp", "esi": "g->esi", "edi": "g->edi", "ebx": "g->ebx",
                "eax": "g->eax", "ecx": "g->ecx", "edx": "g->edx"}
    pro = ["    uint32_t sp0 = g->esp; /* the caller's esp: where the epilogue must put it back */"]
    for r in fr["pushes"]:
        pro.append("    g->esp -= 4u; wr32(g->esp, %s); /* 0x%s: push %s */"
                   % (REGFIELD[r], addr[2:], r))
    if fr["frame_pointer"]:
        pro.append("    g->ebp = g->esp;")
    if fr["locals"]:
        pro.append("    g->esp -= 0x%xu; /* %d bytes of locals */" % (fr["locals"], fr["locals"]))

    epi = []
    for r in reversed(fr["pushes"]):
        epi.append("    %s = rd32(g->esp); g->esp += 4u;" % REGFIELD[r])
    if fr["leave"]:
        epi.append("    g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u;")
    epi.append("    g->esp = sp0; /* the retaddr slot, which rt_return pops */")

    if fr["frame_pointer"]:
        argbase = "((uint32_t)(g->ebp + 0x8u))"
    else:
        argbase = "(sp0 + 4u)"

    # Locals the decompiler declared, hoisted into the function. Matched AFTER normalize_types has run,
    # so these are the names this tree actually uses.
    TYPE_WORDS = r"(?:CowU8|CowU16|CowU32|CowI32|uint64_t|int64_t|unsigned|signed|int|float|double|char|short|long)"
    decls = re.findall(r"^\s*" + TYPE_WORDS + r"[^;=]*;", body, re.M)
    stmts = re.sub(r"^\s*" + TYPE_WORDS + r"[^;=]*;\s*$", "", body, flags=re.M)

    # Ghidra names the parameters param_1..param_N IN THE BODY, so the lifted function has to take
    # exactly those names. Declaring them as a0/a1 (which an earlier draft did) leaves the body
    # referring to variables that do not exist and nothing compiles - the pilot measured 123 "lifts"
    # that were all broken until this was fixed.
    argnames = ["param_%d" % (i + 1) for i in range(nparams)]
    argdecls = "".join("    CowU32 %s = rd32((uint32_t)(%s + 0x%xu)); /* caller's word %d */\n"
                       % (n, argbase, 4 * i, i + 1) for i, n in enumerate(argnames))
    # Only written back when the original was cdecl: a stdcall callee owns its argument slots and the
    # caller never reads them again, so storing them would be a memory write the original does not make.
    stores = "" if purge else "".join(
        "    wr32((uint32_t)(%s + 0x%xu), %s);\n" % (argbase, 4 * i, n)
        for i, n in enumerate(argnames))

    paramsig = ", ".join("CowU32 %s" % n for n in argnames)
    func = (
        "void cow_lift_%s(%s)\n{\n%s\n%s\n}\n"
        % (short, paramsig,
           "".join("    " + x.strip() + "\n" for x in decls),
           "    " + stmts.strip().replace("\n", "\n    "))
    )

    # A lifted body that returns something: keep the value in eax the way the entry would have.
    ret = "g->eax"
    m = re.search(r"\breturn\s+([^;]+);", func)
    if m:
        expr = m.group(1).strip()
        func = re.sub(r"\breturn\s+[^;]+;", "g->eax = (CowU32)(%s); return;" % expr, func)
        ret = "g->eax"

    text = HEADER.format(addr=addr, short=short, ghidra=ghidra_ver)
    text += "\n" + func + "\n"
    text += ADAPTER_TMPL.format(
        short=short,
        conv="%s, %d parameter(s), cleanup %d bytes (read back from the entry's own bytes)."
             % ("stdcall" if purge else "cdecl", nparams, purge),
        prologue="\n".join(pro),
        argdecls=argdecls, arglist=", ".join(argnames),
        stores=stores + "\n".join(epi), ret=ret, purge=purge, purge_hex="0x%x" % purge)
    return text, ""


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--dump", required=True)
    ap.add_argument("--dll", default=os.path.join(ROOT, "generated", "FFXiMain.unpacked.dll"),
                    help="the binary the prologue/epilogue are read back from")
    ap.add_argument("--out-dir", default=LIFT_DIR)
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--entries", default="")
    ap.add_argument("--apply", action="store_true", help="write files (default: report only)")
    ap.add_argument("--min-size", type=int, default=0)
    ap.add_argument("--max-size", type=int, default=0)
    ap.add_argument("--list-out", default="", help="write the lifted addresses here for the batch runner")
    ap.add_argument("--layout-out", default="", help="write the generated address macros here")
    args = ap.parse_args()

    ledger = load_ledger()
    wanted = {norm(x) for x in args.entries.split(",") if x.strip()} if args.entries else None

    funcs = []
    with open(args.dump, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            try:
                d = json.loads(line)
            except ValueError:
                continue
            a = norm(d.get("addr"))
            if not a:
                continue
            if wanted is not None:
                if a not in wanted:
                    continue
            else:
                r = ledger.get(a)
                if r is None:
                    continue                                   # not a ledger function: not ours to lift
                if r.get("status") == "done":
                    continue                                   # the 25 hand units: never touched
                if (r.get("name") or "").strip():
                    continue                                   # already named = already owned by a human
                sz = int(r.get("size") or 0)
                if args.min_size and sz < args.min_size:
                    continue
                if args.max_size and sz > args.max_size:
                    continue
                if sz > 4000:
                    continue                                   # leave the monsters for a human pass
            funcs.append(d)
            if args.limit and len(funcs) >= args.limit:
                break

    stats = Counter()
    written, layout = [], {}
    os.makedirs(os.path.join(ROOT, args.out_dir), exist_ok=True)
    ghidra_ver = "12.2"

    for d in funcs:
        a = norm(d["addr"])
        ok, why = classify(d)
        if not ok:
            stats["refused:" + why] += 1
            continue
        text, why2 = emit(d, layout, ghidra_ver, args.dll)
        if text is None:
            stats["refused:" + why2] += 1
            continue
        stats["lifted"] += 1
        written.append(a)
        if args.apply:
            path = os.path.join(ROOT, args.out_dir, "cow_%s.c" % a[2:])
            with open(path, "w", encoding="utf-8", newline="\n") as out:
                out.write(text)

    print("candidates: %d   lifted: %d" % (len(funcs), stats["lifted"]))
    print("\nrefusals by reason:")
    for k, v in stats.most_common():
        if k.startswith("refused:"):
            print("  %-40s %5d" % (k[8:], v))
    if not args.apply:
        print("\n(report only - pass --apply to write)")
    else:
        print("\nwrote %d file(s) under %s/" % (len(written), args.out_dir))

    if args.list_out:
        with open(args.list_out, "w", encoding="utf-8") as fh:
            fh.write("\n".join(written) + ("\n" if written else ""))

    # The addresses always go to layout/lifted_addresses.h, because that is the file the lifted sources
    # #include and layout/ is the one place a bare 0x10xxxxxx is allowed to live. Written even when
    # empty (with its guard) so a clean lift does not break every other lifted file's include.
    hdr = args.layout_out or os.path.join(ROOT, "layout", "lifted_addresses.h")
    if args.apply:
        with open(hdr, "w", encoding="utf-8", newline="\n") as fh:
            fh.write("/* layout/lifted_addresses.h - GENERATED by tools/cow/ghidra/lift.py. Do not hand edit:\n"
                     "   every lift run rewrites this whole file from the functions it lifted, so anything\n"
                     "   added here by hand is gone on the next run. It exists so that no src/ file carries\n"
                     "   a raw guest address, which is the rule the readability gate actually checks. */\n"
                     "#ifndef COW_LAYOUT_lifted_addresses_H\n#define COW_LAYOUT_lifted_addresses_H\n\n")
            for va in sorted(layout, key=lambda x: int(x, 16)):
                fh.write("#define %-44s %su\n" % (layout[va], va))
            fh.write("\n#endif /* COW_LAYOUT_lifted_addresses_H */\n")
        print("wrote %d address macro(s) to %s" % (len(layout), hdr))
    return 0


if __name__ == "__main__":
    sys.exit(main())
