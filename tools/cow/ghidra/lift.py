"""lift.py - turn Ghidra's decompiled C into cow units, mechanically, for the whole image.

    python tools/cow/ghidra/lift.py --dump C:/ghidra_out/functions_all.jsonl --apply
    python tools/cow/ghidra/lift.py --dump ... --entries 0x10017030 --apply --verbose
    python tools/cow/ghidra/lift.py --dump ... --limit 200          # report only, write nothing

TWO SOURCES, ONE UNIT. A lift is stitched from two places, because neither one alone knows the whole
story:

    Ghidra's C            what the function COMPUTES   (structure, arithmetic, control flow)
    generated/all/*.c     what the guest SEES          (frame, argument convention, call sites, cleanup)

Ghidra throws the guest frame away - pushes become locals, `ret 0x10` vanishes, `this` in ecx becomes an
anonymous parameter - and a lift that guessed at those would compile, run, and be wrong, which is worse
than not existing. So the plumbing comes from the recompiler's own translation of the same bytes
(tools/cow/ghidra/gen_model.py) and only the computation comes from Ghidra.

BRIDGES, NOT REFUSALS (PHASE B decision (a), 2026-11-06). A call to a function we have not lifted is no
longer a reason to refuse: it goes through a generated bridge in layout/lifted_bridges.c that replays the
call the way the entry's own generated body did - the argument pushes, the return address, ecx/edx for a
thiscall, and who cleans the stack - and then calls the generated original `f_<hex>(g)`. Side A calls the
same original, so the callee is ground truth on both sides and EVERY function can be lifted and proven on
its own, with no ordering dependency between them. The pass rate of that proof is the number that matters,
and tools/cow/ghidra/lift_proof.py measures it in bulk.

WHAT IT STILL REFUSES, and why that is a feature: x87 (cowdiff compares st(0) and the FPU top, and a
decompiler's float arithmetic is not an x87 stack), string instructions (they read the direction flag),
indirect calls, `goto`/`switch` (structuring is a human's job), and any Ghidra token it could not
translate. Every refusal is a reason string, and the reasons are what lift_report.py groups - the point of
a run is to learn which shapes the script must grow to handle, not to pretend a third of them converted.

NEVER TOUCHED: the hand-written units (ledger status=done or a name of their own) and the trivial table.
Those addresses belong to their readers. A lift is named cow_lift_<hex> and is a guess by definition.
"""
import argparse
import csv
import json
import os
import re
import shutil
import subprocess
import sys
from collections import Counter

if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)

import gen_model                      # noqa: E402  the plumbing, read off the generated body
import ghidra_c                        # noqa: E402  Ghidra's C -> cow's C

LEDGER = os.path.join(ROOT, "ledger", "functions.csv")
LIFT_DIR = os.path.join("src", "lifted")
BRIDGES_C = os.path.join("layout", "lifted_bridges.c")
BRIDGES_H = os.path.join("layout", "lifted_bridges.h")
ADDR_HDR = os.path.join("layout", "lifted_addresses.h")

PARAM_RE = re.compile(r"\bparam_(\d+)\b")
# Ghidra's structured output is a gift; if it fell back to gotos and labels for this function,
# translating it means doing the structuring ourselves, which is not a lift.
GOTO_RE = re.compile(r"\bgoto\s+|\bcaseLAB_|\blab_[0-9a-fA-F]{8}\s*:", re.I)
LABEL_RE = re.compile(r"^\s*(?:LAB_|caseLAB_)[0-9a-fA-F]+\s*:", re.M)
SWITCH_RE = re.compile(r"\bswitch\s*\(")
EXOTIC_RE = re.compile(r"\b(?:setjmp|longjmp|__security|_alloca|va_start|va_arg)\b")


def norm(a):
    a = (a or "").strip().lower()
    if not a.startswith("0x"):
        if not a:
            return ""
        a = "0x" + a
    try:
        return "0x%x" % int(a, 16)
    except ValueError:
        return ""


def load_ledger():
    with open(LEDGER, encoding="utf-8", newline="") as fh:
        rows = list(csv.DictReader(fh))
    out = {}
    for r in rows:
        a = norm(r.get("entry"))
        if a:
            out[a] = r
    return out


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


def signature_of(c):
    """Everything before the first `{` - where __thiscall / __fastcall / the return type live."""
    i = c.find("{")
    return c[:i] if i >= 0 else c


# ------------------------------------------------------------------ the bridge table

class Bridges:
    """Every callee a lifted body calls, and the one generated bridge function that reaches it.

    A bridge is a layout fact (which function, how the call was made), which is why it lives in layout/
    and not in src/: a bare guest address and a bare f_<hex> symbol are allowed exactly one place, and
    that place is generated. The per-call-site numbers (return address, push count, cleanup) are passed IN
    by the calling lifted code, because they belong to the caller, not to the callee.
    """

    def __init__(self):
        self.by_target = {}          # target int -> {"wants_ecx":..,"wants_edx":..,"wants_eax":..,"n":int}

    def note(self, target, wants_ecx, wants_edx, wants_eax=False):
        cur = self.by_target.get(target)
        if cur is None:
            cur = {"wants_ecx": bool(wants_ecx), "wants_edx": bool(wants_edx),
                   "wants_eax": bool(wants_eax), "n": 1}
            self.by_target[target] = cur
        else:
            cur["n"] += 1
            # a callee reached twice must be bridged the same way both times; if the two readings
            # disagree, the one that says the register IS an input wins, because ignoring a register the
            # callee reads is a wrong answer, while setting one it ignores is merely a write
            cur["wants_ecx"] = cur["wants_ecx"] or bool(wants_ecx)
            cur["wants_edx"] = cur["wants_edx"] or bool(wants_edx)
            cur["wants_eax"] = cur["wants_eax"] or bool(wants_eax)

    def render(self, layout):
        decls, defs = [], []
        for tgt in sorted(self.by_target):
            info = self.by_target[tgt]
            name = "cow_bridge_%x" % tgt
            decls.append("CowU32 %s(Guest* g, CowAddr retaddr, unsigned npush, const CowU32* args,"
                         " CowU32 ecx_in, CowU32 edx_in, CowU32 eax_in, unsigned cleanup);" % name)
            ecx_line = "    g->ecx = ecx_in;   /* thiscall: the callee reads ecx before writing it */" \
                if info["wants_ecx"] else "    (void)ecx_in;"
            edx_line = "    g->edx = edx_in;   /* fastcall: the callee reads edx before writing it */" \
                if info["wants_edx"] else "    (void)edx_in;"
            # A callee that reads eax before writing it is taking an input through a register the calling
            # convention never mentions - the hand units called this "eax at that site, loaded earlier and
            # untouched since", and had to replay it by hand. When the lift cannot work out what eax held,
            # the call site passes g->eax, which leaves it exactly as it is: no better, no worse.
            eax_line = "    g->eax = eax_in;   /* the callee reads eax before writing it */" \
                if info["wants_eax"] else "    (void)eax_in;"
            defs.append(
                "/* 0x%x - reached from %d lifted call site(s). Machine-generated: the pushes, the return\n"
                "   address, the register arguments and the cleanup are the CALLER's facts, passed in. */\n"
                "extern void f_%x(Guest* g);\n"
                "CowU32 cow_bridge_%x(Guest* g, CowAddr retaddr, unsigned npush, const CowU32* args,\n"
                "                      CowU32 ecx_in, CowU32 edx_in, CowU32 eax_in, unsigned cleanup)\n"
                "{\n"
                "    unsigned i;\n"
                "    for (i = npush; i-- > 0;) { g->esp -= 4u; wr32(g->esp, args[i]); }\n"
                "%s\n%s\n%s\n"
                "    g->esp -= 4u; wr32(g->esp, retaddr);\n"
                "    f_%x(g);\n"
                "    g->esp += cleanup;   /* cdecl: the caller cleans; stdcall passes 0 */\n"
                "    return g->eax;\n"
                "}\n" % (tgt, info["n"], tgt, tgt, ecx_line, edx_line, eax_line, tgt))
        return decls, defs


# ------------------------------------------------------------------ emit one unit

HEADER = """/* f_{addr} - MACHINE-LIFTED from Ghidra {ghidra} decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_{short} (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */
"""

ADAPTER_TMPL = """
/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: {conv}.
   Frame, pops and cleanup read back off the entry's generated body: {frame}.
   Arguments: {argsrc}.
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_{short}(Guest* g)
{{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
{argdecls}
{prologue}
    cow_lift_{short}(g{argprefix});

{epilogue}
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, {ret}, {purge}u);
}}
/* COW_ADAPTER END */
"""


def emit(d, ctx):
    """(text, reason). text is None when the unit is refused, with the reason the report groups by."""
    addr = norm(d["addr"])
    short = addr[2:]
    c = d.get("c") or ""
    sig = signature_of(c)
    body = body_of(c)

    # ---- the plumbing, from the generated translation
    gbody = ctx.bodies.get(short)
    if gbody is None:
        return None, "no_generated_body"
    m = gen_model.model_generated(gbody)
    if not m["ok"]:
        return None, m["why"]
    if m["no_ret"]:
        return None, "no_ret_in_body"
    if m["mixed_ret"]:
        return None, "purge_ambiguous"
    if m["has_x87"]:
        return None, "x87_not_modelled"
    if m["has_string_op"]:
        return None, "string_op_not_modelled"
    if m["has_indirect_call"]:
        return None, "indirect_call_not_modelled"
    # A partial-register write (`xor al,al`, `mov ah,X`, `mov ax,imm`) preserves the bits outside the
    # slice. The generated body states the width exactly; the decompiler has already flattened it to an
    # assignment to the whole register, and the lift reproduces THAT - so a function that only cleared
    # its low byte comes back zeroing all four, and disagrees with the oracle on nearly every state
    # while looking perfectly translated. Better a named refusal than a confident wrong answer: these
    # registers are precisely the ones cowdiff compares.
    partials = gen_model.partial_reg_writes(m["ins"]) & {"eax", "edx", "ebx", "esi", "edi", "ebp"}
    if partials:
        return None, "partial_register_write_" + ",".join(sorted(partials))

    # ---- call sites, matched to Ghidra's call expressions in order of appearance per target
    sites_by_target = {}
    for s in m["call_sites"]:
        sites_by_target.setdefault(s["target"], []).append(s)
    cursor = {}

    def bridge(target, args):
        sites = sites_by_target.get(target)
        if not sites:
            ctx.problems.append("no_generated_call_site_for_FUN_%x" % target)
            return None
        k = cursor.get(target, 0)
        cursor[target] = k + 1
        if k >= len(sites):
            ctx.problems.append("more_callsites_than_calls_FUN_%x" % target)
            return None
        site = sites[k]
        if site["retaddr"] is None:
            ctx.problems.append("no_retaddr_at_%x" % site["addr"])
            return None
        npush = site["npush"]
        ecx_expr, edx_expr = "0u", "0u"
        want_ecx = want_edx = False
        callee_sig = ctx.signature(target)
        low = (callee_sig or "").lower()
        n = len(args)
        if "__thiscall" in low or "__fastcall" in low:
            # Ghidra put the register argument(s) at the front of the list: they are parameters the
            # caller supplied, but they never went on the stack, so they are not pushed.
            if npush is not None and n - npush == 1:
                ecx_expr, args, want_ecx = args[0], args[1:], True
            elif npush is not None and n - npush == 2:
                ecx_expr, edx_expr, args = args[0], args[1], args[2:]
                want_ecx = want_edx = True
            elif npush == 0 and n >= 1:
                ecx_expr, args, want_ecx = args[0], args[1:], True
        elif npush is not None and n - npush == 1 and site["ecx_before"]:
            ecx_expr, args, want_ecx = args[0], args[1:], True
        if npush is not None and len(args) != npush:
            ctx.problems.append("argcount_mismatch_%x_ghidra%d_push%d" % (target, len(args), npush))
            return None
        cleanup = site["cleanup"] or 0
        if npush is not None and cleanup and cleanup != 4 * npush:
            ctx.problems.append("cleanup_mismatch_%x" % target)
            return None
        # what the callee takes in registers, read off ITS generated body: a callee that uses ecx/edx/eax
        # before ever assigning it arrived with a value from the caller
        cf = gen_model.callee_facts(ctx.bodies.get("%08x" % target) or [])
        want_ecx = want_ecx or (cf.get("wants_ecx") if cf.get("ok") else False)
        want_edx = want_edx or (cf.get("wants_edx") if cf.get("ok") else False)
        want_eax = bool(cf.get("wants_eax")) if cf.get("ok") else False
        eax_expr = ctx.reg_live.get("eax", "g->eax")
        ctx.bridges.note(target, want_ecx, want_edx, want_eax)
        vals = ", ".join(args) if args else "0u"
        return ("cow_bridge_%x(g, %s, %uu, (const CowU32[]){ %s }, %s, %s, %s, %uu)"
                % (target, ctx.img_literal(site["retaddr"]), npush or 0, vals,
                   ecx_expr, edx_expr, eax_expr, cleanup))

    # ---- the adapter's opening instructions, in the order the guest executed them, and the registers the
    # entry left live as it went (0x10001e10's `mov eax,[0x103d3c88]` is the case: Ghidra keeps the test
    # and loses the value, so side B would return a fuzzed eax where side A returns 0).
    ops = gen_model.prologue_ops(m["ins"], None, ctx.layout)
    # which of ecx/edx arrive as arguments decides how the STACK words are numbered in the lifted
    # function (a thiscall's param_1 is ecx, so [esp+4] is param_2), so it is settled here, where the
    # prologue's argument reads still have to be turned into those names.
    reg_order = [r for r in ("ecx", "edx") if r in m["reg_args"]]

    def arg_of(stack_index):
        return "param_%d" % (stack_index + 1 + len(reg_order))

    def resolve(expr):
        return arg_of(expr[1]) if isinstance(expr, tuple) else expr

    ctx.reg_live = {}
    for o in ops:
        if o["kind"] == "regwrite":
            ctx.reg_live[o["reg"]] = resolve(o["expr"])
        elif o["kind"] == "pop":
            ctx.reg_live.pop(o["reg"], None)      # its old value is gone; we no longer know what it held

    # ---- the computation, from Ghidra
    rw = ghidra_c.Rewriter(ctx.layout, bridge=bridge)
    newbody = rw.rewrite(body, sig)
    problems = rw.problems + ctx.problems + ghidra_c.leftover_problems(newbody)
    if problems:
        return None, sorted(set(problems))[0]

    # ---- declarations: hoist Ghidra's locals to the top of the function, and make every pointer an
    # integer, because after the rewrite there is no pointer arithmetic left - only rd*/wr* on addresses.
    # The TYPE must be a real type word, not any identifier: `return param_1;` reads as "type `return`,
    # name `param_1`" to a looser pattern, and the hoister turned the function's return into a declaration
    # that it then moved above the body.
    TYPE_WORDS = (r"(?:CowU8|CowU16|CowU32|uint8_t|uint16_t|uint32_t|uint64_t|int8_t|int16_t|int32_t"
                  r"|int64_t|unsigned|signed|int|float|double|char|short|long|bool|void|size_t|uint)")
    decl_re = re.compile(r"^\s*(?:const\s+)?%s(?:\s+%s)*(?:\s*\*)?\s*([A-Za-z_][A-Za-z0-9_]*)"
                         r"\s*(\[[^\]]*\])?\s*;\s*$" % (TYPE_WORDS, TYPE_WORDS))
    declared, kept = [], []
    for line in newbody.splitlines():
        dm = decl_re.match(line)
        if dm and "=" not in line:
            name = dm.group(1)
            if name in ("return", "else", "if", "while", "for", "break", "continue"):
                kept.append(line)
                continue
            star = "*" in line.split(name)[0]
            arr = dm.group(2)
            if star:
                # a pointer local is now an ADDRESS: every access through it became rd*/wr*, so the
                # variable itself is just a number and must stop being a C pointer
                declared.append("    CowU32 %s;" % name)
            else:
                declared.append("    %s %s%s;" % (_clean_type(line[:dm.start(1)].strip().rstrip(";").strip()),
                                                  name, arr or ""))
            continue
        kept.append(line)
    stmts = "\n".join(kept).strip()

    # ---- parameters: whatever the body actually calls param_N. Ghidra declared them in the signature and
    # the body refers to them by name, so the lifted function has to take exactly those.
    used = sorted({int(x) for x in PARAM_RE.findall(newbody)})
    nparams = int(d.get("param_count") or 0)
    if used:
        nparams = max(nparams, max(used))
    # An entry that reads its argument into eax and never mentions it again makes Ghidra report FEWER
    # parameters than the function actually takes - it has no reason to name one it does not use. The
    # prologue does use it, so the parameter has to exist: derive the count from what the frame says,
    # not only from what the decompiler chose to name.
    for o in ops:
        if o["kind"] == "regwrite" and isinstance(o["expr"], tuple) and o["expr"][0] == "stackarg":
            nparams = max(nparams, o["expr"][1] + 1 + len(reg_order))
    paramsig = ", ".join(["Guest* g"] + ["CowU32 param_%d" % i for i in range(1, nparams + 1)])
    func = ("void cow_lift_%s(%s)\n{\n%s\n%s\n}\n"
            % (short, paramsig, "\n".join(declared), "    " + stmts.replace("\n", "\n    ")))

    # a lifted body that returns something: keep the value in eax the way the entry would have.
    #
    # The replacement is a FUNCTION, not a string, and that is load-bearing: re.sub processes escapes in
    # a replacement template, so a body containing `'\0'` had its backslash-zero read as octal NUL and the
    # file was written with a raw NUL byte inside a character constant - which the compiler calls
    # "empty character constant" and which no reader would ever connect to this line.
    ret = "g->eax"
    mr = re.search(r"\breturn\s+([^;]+);", func)
    if mr:
        expr = mr.group(1).strip()
        func = re.sub(r"\breturn\s+[^;]+;",
                      lambda _m, _e=expr: "g->eax = (CowU32)(%s); return;" % _e, func)

    # ---- the adapter: the frame, in the order the guest put it on
    pro = []
    pushed = []
    for o in ops:
        if o["kind"] == "push":
            pro.append("    g->esp -= 4u; wr32(g->esp, g->%s); /* 0x%08x: push %s */"
                       % (o["reg"], o["addr"], o["reg"]))
            pushed.append(o["reg"])
        elif o["kind"] == "locals":
            pro.append("    g->esp -= 0x%xu;                      /* 0x%08x: %d bytes of locals */"
                       % (o["n"], o["addr"], o["n"]))
        elif o["kind"] == "frame":
            pro.append("    g->ebp = g->esp;                       /* 0x%08x: mov ebp, esp */" % o["addr"])
        elif o["kind"] == "regwrite":
            pro.append("    g->%s = %s;   /* 0x%08x: the value the entry loaded and the decompiler dropped */"
                       % (o["reg"], resolve(o["expr"]), o["addr"]))
    # The scan stops at the first instruction it cannot express, but the frame has to be complete: a
    # register the epilogue pops was pushed, wherever in the opening that push was.
    for r in m["pushes"][len(pushed):]:
        pro.append("    g->esp -= 4u; wr32(g->esp, g->%s); /* push %s (from the epilogue's pops) */" % (r, r))

    # Arguments. A register argument comes in ecx/edx; a stack argument sits above the return address at
    # sp0+4, which is true whether the function used a frame pointer or not (ebp was made to point at the
    # same frame), and reading it here - before the pushes - is the address the original read it at.
    argdecls, argnames = [], []
    for i in range(1, nparams + 1):
        idx = i - 1
        if idx < len(reg_order):
            argdecls.append("    CowU32 param_%d = g->%s;   /* %s argument */" % (i, reg_order[idx], reg_order[idx]))
        else:
            k = idx - len(reg_order)
            argdecls.append("    CowU32 param_%d = rd32((uint32_t)(sp0 + 4u + 0x%xu));" % (i, 4 * k))
        argnames.append("param_%d" % i)

    epi = []
    for r in m["pops"]:
        epi.append("    { uint32_t v = rd32(g->esp); g->esp += 4u; g->%s = v; } /* pop %s */" % (r, r))
    if m["leave"]:
        epi.append("    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */")

    conv = "%s%s, %d parameter(s), cleanup %d bytes" % (
        "thiscall/fastcall(" + "+".join(m["reg_args"]) + "), " if m["reg_args"] else "",
        "stdcall" if m["purge"] else "cdecl", nparams, m["purge"])
    frame = "%d push(es) [%s], frame pointer %s, %d locals, pops [%s], ret %d" % (
        len(m["pushes"]), ", ".join(m["pushes"]) or "-", "yes" if m["frame_pointer"] else "no",
        m["locals"], ", ".join(m["pops"]) or "-", m["purge"])
    argsrc = "%d register argument(s) [%s], %d stack word(s)" % (
        len(m["reg_args"]), ", ".join(m["reg_args"]) or "-", max(0, nparams - len(m["reg_args"])))

    text = HEADER.format(addr=addr, short=short, ghidra=ctx.ghidra_ver)
    text += "\n" + func + "\n"
    arglist = ", ".join(argnames)
    text += ADAPTER_TMPL.format(short=short, conv=conv, frame=frame, argsrc=argsrc,
                                prologue="\n".join(pro), argdecls="\n".join(argdecls),
                                argprefix=(", " + arglist) if arglist else "",
                                epilogue="\n".join(epi),
                                ret=ret, purge=m["purge"])
    if m["extra_pushes"]:
        text += ("\n/* NOTE(machine): this entry also pushes %d word(s) in the middle of its body that "
                 "Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff "
                 "is what says whether it mattered. */\n" % m["extra_pushes"])
    return text, ""


def _clean_type(prefix):
    p = prefix.strip().rstrip("*").strip()
    for pat, rep in ghidra_c.GHIRDA_TYPES:
        p = re.sub(pat, rep, p)
    return p or "CowU32"


# ------------------------------------------------------------------ the run

class Ctx:
    def __init__(self, dump_path, ghidra_ver):
        self.layout = {}
        self.bridges = Bridges()
        self.problems = []
        self.ghidra_ver = ghidra_ver
        self.reg_live = {}          # register -> cow expression, as the entry's own prologue left it
        self.bodies = {}
        self.sigs = {}
        import trivial_audit
        self.bodies = trivial_audit.body_index()
        with open(dump_path, encoding="utf-8", errors="replace") as fh:
            for line in fh:
                line = line.strip()
                if not line:
                    continue
                try:
                    d = json.loads(line)
                except ValueError:
                    continue
                a = norm(d.get("addr"))
                if a:
                    self.sigs[a[2:]] = signature_of(d.get("c") or "")

    def signature(self, target):
        return self.sigs.get("%08x" % target)

    def img_literal(self, va):
        key = "0x%x" % (va if isinstance(va, int) else int(va, 16))
        name = self.layout.get(key)
        if not name:
            name = "COW_ADDR_LIFT_%s" % key[2:].upper()
            self.layout[key] = name
        return "COW_IMG(%s)" % name


def classify(d):
    """Cheap pre-checks on Ghidra's own C, before the expensive model read."""
    if not d.get("decompiled"):
        return False, "not_decompiled"
    if d.get("is_thunk"):
        return False, "thunk"
    if d.get("external"):
        return False, "external"
    c = d.get("c") or ""
    if not c.strip() or not body_of(c).strip():
        return False, "empty_c"
    if GOTO_RE.search(c) or LABEL_RE.search(c):
        return False, "goto_or_labels"
    if SWITCH_RE.search(c):
        return False, "switch"
    if EXOTIC_RE.search(c):
        return False, "exotic_runtime"
    if re.search(r"\bcode\s*\*", c):
        return False, "indirect_call_via_code_ptr"
    if re.search(r"\b(?:unaff_|_Overlay\b|__x86\.)", c):
        return False, "unresolved_register_or_overlay"
    if re.search(r"\bin_ST\d\b|\bin_[A-Z]{2,4}\b", c):
        return False, "unbound_register"
    if c.count("{") != c.count("}"):
        return False, "unbalanced_braces"
    if len(c) > 60000:
        return False, "too_large"
    return True, ""


# ------------------------------------------------------------------ the syntax gate

def syntax_gate(written, rejected_dir):
    """Compile every file this run wrote; a lift that does not compile is a REFUSAL, not a file.

    This is not politeness toward the reader - src/** is compiled into the real host builds, so one broken
    lifted file turns BUILD_CHECK red for the whole repository. The check runs once over the whole batch
    (one cl invocation per 150 files) and the compiler's own error code becomes the refusal reason, which
    is how a pattern - `leftover_overlay`, `calls_unknown_symbol_operator_new` - gets fixed for hundreds
    of units at a time instead of one at a time.
    """
    if not written:
        return {}
    import build as upstream
    env = upstream.msvc_env("x64")
    os.makedirs(rejected_dir, exist_ok=True)
    bad = {}
    files = [os.path.join(LIFT_DIR, "cow_%s.c" % e) for e in written]
    files.append(BRIDGES_C)
    for i in range(0, len(files), 150):
        batch = files[i:i + 150]
        cmd = (["cl", "/c", "/Zs", "/nologo", "/O1", "/MT", "/W3", "/std:c11", "/bigobj",
                "/DRT_GUEST_WINDOW",
                "/I", "runtime", "/I", "runtime\\portable", "/I", "generated",
                "/I", "generated\\all", "/I", "layout"] + batch)
        p = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True,
                           encoding="utf-8", errors="replace", env=env)
        text = (p.stdout or "") + "\n" + (p.stderr or "")
        if p.returncode == 0:
            continue
        for m in re.finditer(r"cow_([0-9a-f]{8})\.c(?:\(\d+\))?\s*:\s*(?:fatal\s+)?error\s+(C\d+)\s*:\s*(.*)",
                             text):
            bad.setdefault(m.group(1), []).append((m.group(2), m.group(3).strip()[:100]))
        if not bad and "lifted_bridges" in text:
            # a bridge that does not compile is every lifted unit's problem, so blame none of them and say so
            print("  ! layout/lifted_bridges.c does not compile - see the errors above")
    for e, errs in bad.items():
        src = os.path.join(ROOT, LIFT_DIR, "cow_%s.c" % e)
        if os.path.isfile(src):
            shutil.move(src, os.path.join(rejected_dir, "cow_%s.c" % e))
    return bad


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--dump", default=os.environ.get("COW_LIFT_DUMP", "C:/ghidra_out/functions_all.jsonl"))
    ap.add_argument("--out-dir", default=LIFT_DIR)
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--entries", default="")
    ap.add_argument("--apply", action="store_true", help="write files (default: report only)")
    ap.add_argument("--min-size", type=int, default=0)
    ap.add_argument("--max-size", type=int, default=4000)
    ap.add_argument("--list-out", default="", help="write the lifted addresses here for the batch runner")
    ap.add_argument("--reasons-out", default="", help="write every refusal as JSON for the report")
    ap.add_argument("--ghidra", default="12.2")
    ap.add_argument("--verbose", action="store_true")
    args = ap.parse_args()

    # --apply rewrites src/lifted/** AND the shared generated layout (lifted_bridges.c,
    # lifted_addresses.h) that every other lifted file #includes. Writing those while a build or a proof
    # batch is in flight produces a tree that cannot compile - which is exactly what happened when a
    # `--entries 0x...` spot-check rewrote the bridge table down to the two entries it lifted and a live
    # batch started linking against it. The lift is a writer of build inputs, so it takes the SAME lock
    # the builds and the harness do; a spot-check now waits for the batch instead of sabotaging it.
    _lock = None
    if args.apply:
        sys.path.insert(0, os.path.join(ROOT, "tools", "cow"))
        import cowdiff
        _lock = cowdiff.harness_lock(timeout=3600)
        _lock.__enter__()
    try:
        return _main(args)
    finally:
        if _lock is not None:
            _lock.__exit__(None, None, None)


def _main(args):

    ledger = load_ledger()
    wanted = {norm(x) for x in args.entries.split(",") if x.strip()} if args.entries else None
    ctx = Ctx(args.dump, args.ghidra)

    stats = Counter()
    reasons = {}
    written = []
    os.makedirs(os.path.join(ROOT, args.out_dir), exist_ok=True)

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
                    continue
                if r.get("status") == "done":
                    stats["skip:hand_unit"] += 1
                    continue
                if (r.get("name") or "").strip():
                    stats["skip:named_already"] += 1
                    continue
                sz = int(r.get("size") or 0)
                if sz < args.min_size or (args.max_size and sz > args.max_size):
                    continue
                if sz > 4000:
                    stats["skip:monster"] += 1
                    continue
            stats["candidates"] += 1
            ctx.problems = []
            ok, why = classify(d)
            if not ok:
                stats["refused:" + why] += 1
                reasons[a] = why
                continue
            text, why2 = emit(d, ctx)
            if text is None:
                stats["refused:" + why2] += 1
                reasons[a] = why2
                if args.verbose:
                    print("  refuse %s: %s" % (a, why2))
                continue
            stats["lifted"] += 1
            written.append(a[2:])
            if args.apply:
                with open(os.path.join(ROOT, args.out_dir, "cow_%s.c" % a[2:]), "w",
                          encoding="utf-8", newline="\n") as out:
                    out.write(text)
            if args.limit and len(written) >= args.limit:
                break

    # ---- write the generated layout first: the lifted files #include it, so the syntax gate needs it present
    if args.apply:
        with open(os.path.join(ROOT, ADDR_HDR), "w", encoding="utf-8", newline="\n") as fh:
            fh.write("/* layout/lifted_addresses.h - GENERATED by tools/cow/ghidra/lift.py. Do not hand edit:\n"
                     "   every lift run rewrites this whole file from the functions it lifted, so anything\n"
                     "   added here by hand is gone on the next run. It exists so that no src/ file carries\n"
                     "   a raw guest address, which is the rule the readability gate actually checks. */\n"
                     "#ifndef COW_LAYOUT_lifted_addresses_H\n#define COW_LAYOUT_lifted_addresses_H\n\n")
            for va in sorted(ctx.layout, key=lambda x: int(x, 16)):
                fh.write("#define %-46s %su\n" % (ctx.layout[va], va))
            fh.write("\n#endif /* COW_LAYOUT_lifted_addresses_H */\n")
        decls, defs = ctx.bridges.render(ctx.layout)
        with open(os.path.join(ROOT, BRIDGES_H), "w", encoding="utf-8", newline="\n") as fh:
            fh.write("/* layout/lifted_bridges.h - GENERATED by tools/cow/ghidra/lift.py. Do not hand edit.\n"
                     "\n"
                     "   One function per not-yet-lifted callee. A lifted body calls its callee through a\n"
                     "   bridge that replays what the ENTRY's generated translation did at that instruction -\n"
                     "   the argument pushes, the return address, ecx/edx for a thiscall, and who cleans the\n"
                     "   stack - and then calls the generated original f_<hex>(g). Side A calls that same\n"
                     "   original, so the callee is ground truth on both sides and each lifted function is\n"
                     "   proven on its own, in any order. */\n"
                     "#ifndef COW_LAYOUT_lifted_bridges_H\n#define COW_LAYOUT_lifted_bridges_H\n\n"
                     "#include \"cow_types.h\"\n\n")
            for dd in decls:
                fh.write(dd + "\n")
            fh.write("\n#endif /* COW_LAYOUT_lifted_bridges_H */\n")
        with open(os.path.join(ROOT, BRIDGES_C), "w", encoding="utf-8", newline="\n") as fh:
            fh.write("/* layout/lifted_bridges.c - GENERATED by tools/cow/ghidra/lift.py. Do not hand edit.\n"
                     "   layout/ is the one place a bare guest address and a bare f_<hex> symbol may live: a\n"
                     "   bridge is a layout fact (which function, called how), not game logic. */\n"
                     "#include \"cow.h\"\n#include \"lifted_bridges.h\"\n\n")
            for dd in defs:
                fh.write(dd + "\n")

    # ---- the syntax gate: nothing that does not compile stays in src/
    if args.apply and written:
        bad = syntax_gate(written, os.path.join(ROOT, "build", "lift", "rejected"))
        for e, errs in bad.items():
            if e in written:
                written.remove(e)
            stats["lifted"] -= 1
            code, msg = errs[0]
            why = "does_not_compile_%s" % code
            stats["refused:" + why] += 1
            reasons["0x" + e] = why
            if args.verbose:
                print("  no-compile 0x%s: %s %s" % (e, code, msg))

    print("candidates: %d   lifted: %d   (%d bridge(s), %d address macro(s))"
          % (stats["candidates"], stats["lifted"], len(ctx.bridges.by_target), len(ctx.layout)))
    print("\nby reason:")
    for k, v in stats.most_common():
        if k != "candidates":
            print("  %-46s %6d" % (k.replace("refused:", "").replace("skip:", "(skip) "), v))
    if not args.apply:
        print("\n(report only - pass --apply to write)")

    if args.list_out:
        with open(args.list_out, "w", encoding="utf-8") as fh:
            fh.write("\n".join(written) + ("\n" if written else ""))
    if args.reasons_out:
        with open(args.reasons_out, "w", encoding="utf-8") as fh:
            json.dump(reasons, fh, indent=1, sort_keys=True)
    return 0


if __name__ == "__main__":
    sys.exit(main())
