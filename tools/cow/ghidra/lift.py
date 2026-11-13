"""lift.py - turn Ghidra's decompiled C into cow units, mechanically, for the whole image.

    python tools/cow/ghidra/lift.py --dump D:/projects/ghidra/ghidra_out/functions_all.jsonl --apply
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
# GOTO_RE / LABEL_RE used to live here and refuse any function Ghidra could not structure. They are gone:
# see the comment in classify() for why a machine lift may keep the decompiler's gotos, and the COW_LIFTED
# region in the template for what keeps that out of the readability gate.
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

INDIRECT_FN = """
/* One indirect call, spelled the way every indirect call in the image is spelled by the recompiler's own
   translation: push the arguments right-to-left, put the three registers the caller may own in place, push
   the address to come back to, and hand the pointer to rt_call_indirect - the same helper side A's body
   calls. It is generic because there is no target to specialise on: the target is a value, not a name, and
   it is passed as one. */
CowU32 cow_bridge_indirect(Guest* g, CowU32 target, CowAddr retaddr, unsigned npush, const CowU32* args,
                           CowU32 ecx_in, CowU32 edx_in, CowU32 eax_in, unsigned cleanup)
{
    unsigned i;
    for (i = npush; i-- > 0;) { g->esp -= 4u; wr32(g->esp, args[i]); }
    g->ecx = ecx_in;
    g->edx = edx_in;
    g->eax = eax_in;
    g->esp -= 4u; wr32(g->esp, retaddr);
    rt_call_indirect(g, target);
    g->esp += cleanup;
    return g->eax;
}
"""

INDIRECT_DECL = ("CowU32 cow_bridge_indirect(Guest* g, CowU32 target, CowAddr retaddr, unsigned npush,"
                 " const CowU32* args, CowU32 ecx_in, CowU32 edx_in, CowU32 eax_in, unsigned cleanup);\n")


class Bridges:
    """Every callee a lifted body calls, and the one generated bridge function that reaches it.

    A bridge is a layout fact (which function, how the call was made), which is why it lives in layout/
    and not in src/: a bare guest address and a bare f_<hex> symbol are allowed exactly one place, and
    that place is generated. The per-call-site numbers (return address, push count, cleanup) are passed IN
    by the calling lifted code, because they belong to the caller, not to the callee.
    """

    def __init__(self):
        self.by_target = {}          # target int -> {"wants_ecx":..,"wants_edx":..,"wants_eax":..,"n":int}
        self.tail = {}               # target int -> same shape, reached by a guest `jmp`, not a `call`
        self.indirect = False   # a cow_bridge_indirect call anywhere in the run

    def note_tail(self, target, wants_ecx, wants_edx, wants_eax=False):
        """A callee reached by a guest TAIL JUMP.

        Kept in its own table from note() because the two forms do different things on the stack - one
        pushes a return address and cleans up, the other does neither - and it is the NAME that says which:
        `cow_bridge_tail_X` beside `cow_bridge_X`. There is therefore no collision to guard against, and
        an earlier version of this method refused a tail unit whenever its target was also called normally
        SOMEWHERE in the image. That premise was wrong, and the batch proved it: a single-entry preview
        emitted 0x10199770 while the full run booked it `leftover_unbridged_call`, because other lifted
        units call 0x10196a10 with a real `call`. Since nearly every function is called normally by
        someone, that guard was quietly refusing most of the ~1,250-unit family."""
        cur = self.tail.get(target)
        if cur is None:
            self.tail[target] = {"wants_ecx": bool(wants_ecx), "wants_edx": bool(wants_edx),
                                 "wants_eax": bool(wants_eax), "n": 1}
        else:
            cur["n"] += 1
            cur["wants_ecx"] = cur["wants_ecx"] or bool(wants_ecx)
            cur["wants_edx"] = cur["wants_edx"] or bool(wants_edx)
            cur["wants_eax"] = cur["wants_eax"] or bool(wants_eax)
        return True

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

    def note_indirect(self):
        """Something called through a pointer, so the generated layout has to carry the generic helper."""
        self.indirect = True

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
        if self.indirect:
            decls.insert(0, INDIRECT_DECL)
            defs.insert(0, INDIRECT_FN)
        for tgt, info in sorted(self.tail.items()):
            name = "cow_bridge_tail_%x" % tgt
            decls.append("void %s(Guest* g, CowU32 ecx_in, CowU32 edx_in, CowU32 eax_in);" % name)
            ecx_line = "    g->ecx = ecx_in;   /* thiscall: the callee reads ecx before writing it */" \
                if info["wants_ecx"] else "    (void)ecx_in;"
            edx_line = "    g->edx = edx_in;   /* fastcall: the callee reads edx before writing it */" \
                if info["wants_edx"] else "    (void)edx_in;"
            eax_line = "    g->eax = eax_in;   /* the callee reads eax before writing it */" \
                if info["wants_eax"] else "    (void)eax_in;"
            # NO `g->esp -= 4u; wr32(g->esp, retaddr);` and NO `g->esp += cleanup`: the guest jumped here
            # rather than called, so the return-address slot the TARGET's ret pops is OUR caller's, already
            # on the stack. Pushing one would hand the callee its arguments one word too high and return it
            # to garbage; cleaning up afterwards would take the entry's own esp move away from the callee.
            defs.append(
                "/* 0x%x - reached by a GUEST TAIL JUMP from %d lifted site(s). No return address is pushed\n"
                "   and nothing is cleaned up: this entry's own `ret` never ran, so the TARGET's is the one\n"
                "   that pops the return-address slot out of OUR caller's frame. */\n"
                "extern void f_%x(Guest* g);\n"
                "void cow_bridge_tail_%x(Guest* g, CowU32 ecx_in, CowU32 edx_in, CowU32 eax_in)\n"
                "{\n%s\n%s\n%s\n    f_%x(g);\n}\n"
                % (tgt, info["n"], tgt, tgt, ecx_line, edx_line, eax_line, tgt))
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
{call}

{epilogue}
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, {ret}, {purge}u);
}}
/* COW_ADAPTER END */
"""

# The same adapter for an entry whose last instruction is a tail jump. Everything the ordinary one does at
# the end is WRONG here, and each omission has a reason:
#
#   no pops / no leave   - the guest never ran its epilogue; it jumped away. Anything it pushed before the
#                          jump is still on the stack when the target's `ret` reads the return-address slot,
#                          which is exactly what the hardware does to the real guest, and the prologue above
#                          replays those pushes so that esp arrives there where the machine would leave it.
#   no `g->esp = sp0`    - esp at this point is where the TARGET's rt_return left it, one frame above ours.
#                          Restoring it would drag esp back down over the frame the callee just popped.
#   no `rt_return`       - the target's `ret` already popped the return-address slot out of OUR caller's
#                          frame and set eax. Doing it twice moves esp two frames up: every row would fail
#                          on esp, and the memory diff would show a frame torn in half.
TAIL_ADAPTER_TMPL = """
/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: {conv}.
   TAIL CALL: this entry ends in `jmp 0x{tgt:08x}`, not `call`+`ret`{epilogue_claim}
   Frame, pushes and locals read back off the entry's generated body: {frame}.
   Arguments: {argsrc}.
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move. */
void cow_adapter_{short}(Guest* g)
{{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
{argdecls}
{prologue}
    cow_lift_{short}(g{argprefix});
{epilogue_note}
}}
/* COW_ADAPTER END */
"""

# The adapter's call line for a unit that contains an INTRA-BODY tail jump. The lifted function returns
# int precisely so this can ask it which way it left: 1 means the body reached `jmp T`, the target's own
# `ret` returned for this entry (popping OUR CALLER's return-address slot), and the epilogue below - which
# is the guest's `ret`, the pops, and rt_return - belongs to a path that never ran. Falling through to it
# after a tail is a double-pop, so the guard is not an optimisation.
INTRA_CALL_TMPL = """    if (cow_lift_{short}(g{argprefix})) {{
        /* INTRA-BODY TAIL CALL out of {n} site(s): {sites}. The target's own `ret` returned for this
           entry, so the pops, the esp restore and rt_return below describe a `ret` this path never
           executed. Returning here is what keeps the frame whole. */
        return;
    }}"""


def pop_stmt(reg, indent="    "):
    """One guest `pop <reg>`, in the ONLY spelling this file uses for it.

    The adapter epilogue and an inline tail-path pop must be the same statement, because they model the same
    guest instruction on two different paths: if the two ever drift - `g->esp += 4u` on one side, `+= 4` on
    the other, or one forgetting the register write - the unit restores a register on the normal path and
    not on the tail one, which is the class of bug cowdiff catches late and nobody reads.
    """
    return ("%s{ uint32_t v = rd32(g->esp); g->esp += 4u; g->%s = v; } /* pop %s */"
            % (indent, reg, reg))


# ---------------------------------------------------------------------------------------------
# ONE SOURCE OF TRUTH FOR THE EPILOGUE: what the prologue pushed is what the entry must pop.
#
# The prologue emits a push per `push <r>` the instruction scan expresses (see `pro`/`pushed`); the
# epilogue used to pop whatever gen_model's backwards walk returned. Those are two readers of one
# frame, and they can disagree - the walk stops at the first instruction it cannot step over, so a
# register pushed at the top and popped below something unexpressible is pushed by us and never
# popped by us. The consequence is not only the leak: every pop that DOES run reads rd32(g->esp),
# which is where the most recent unpaired push left the stack, so a partial pop list restores the
# wrong values into the registers it does touch. (Exemplar: src/lifted/cow_10003070.c pushes ebx
# and edi, pops only ebx, and returns with ebx holding edi's save.)
#
# OFF BY DEFAULT. Widening changes plumbing shared by every lifted unit, so it earns its place by
# measurement on a sample - the payoff is how many of the 81 un-restoring units newly pass cowdiff -
# not by the attractiveness of the argument above.
# imported, not re-declared: one definition of what a callee-saved register is, in gen_model.
# Two copies drifted apart once already (frame_save_addrs_of reused SAVED_REGS instead) and the
# second copy is what let a thiscall argument push be called a frame save.
CALLEE_SAVED = gen_model.CALLEE_SAVED
MATCH_PUSHES = bool(os.environ.get("COW_LIFT_EPILOGUE_MATCH_PUSHES"))
# Never pop what we never pushed (see lift_frame_predicates.adapter_writes). Off by default, and
# the unsafe half of the rule REFUSES rather than hoisting a mid-body argument push into the frame.
FRAME_SYMMETRY = bool(os.environ.get("COW_LIFT_FRAME_SYMMETRY"))
# Emit the guest's tail epilogue (the pops gen_model recovered from above the terminating `jmp`)
# in the body, immediately before the tail bridge call. Off by default; it travels with
# COW_MODEL_TAIL_POP_RUN, which is what fills the list this emits. With that one off this knob
# has nothing to emit and changes nothing - the safe direction for a half-enabled run.
TAIL_EPILOGUE = bool(os.environ.get("COW_LIFT_TAIL_EPILOGUE"))


def _restored_elsewhere(t, r):
    """Does the emitted text already put r back? Any spelling - a pop statement, or the value the
    body itself assigned out of a pop temporary."""
    return bool(re.search(r"/\*\s*pop\s+%s\s*\*/" % r, t) or
                re.search(r"g->%s\s*=\s*\(uint32_t\)\(v\)" % r, t) or
                re.search(r"g->%s\s*=\s*v\b" % r, t))


def _ours_writes(func_text, r):
    """Does the emitted lifted function write g-><r> at all (the pop restore excluded)?
    Imported from the predicate home so "did we clobber it" means one thing in this repo.
    """
    import lift_frame_predicates
    return lift_frame_predicates.adapter_writes(func_text, r)


def complete_pops(pushed, pops, body_text, frame_pointer, leave):
    """Return the pop list that returns every pushed callee-saved register, or None to keep the
    walk's answer. None means REFUSE: the shape is outside what this rule may claim.

    Rules, each one there because the alternative is a wrong-number bug that still compiles:
      * the walk's list must be a subsequence of the full LIFO order, or the two readers disagree
        about more than a missing pop and completing would be guessing at the order;
      * only callee-saved registers may be added - popping eax/ecx/edx at return would overwrite a
        value the caller owns (eax is the return value);
      * ebp is NOT added when the entry uses a frame pointer or `leave`, because that machinery
        already restores it and a second restore is a double pop;
      * a register the emitted body already restores is not added.
    """
    if not pushed:
        return None
    full = list(reversed(pushed))
    if [r for r in full if r in set(pops)] != list(pops):
        return None
    out = []
    for r in full:
        if r in pops:
            out.append(r)
            continue
        if r not in CALLEE_SAVED:
            return None
        if r == "ebp" and (frame_pointer or leave):
            continue
        if _restored_elsewhere(body_text, r):
            return None
        out.append(r)
    return out



def return_values(func):
    """`return expr;` -> `g->eax = (CowU32)(expr); return;`, EACH return keeping ITS OWN expression.

    The first version of this searched for the value once and then stamped it on every return in the
    function, so

        if (n < 0x200) return *(int *)(p + n * 4);   return 0;

    came out with the guarded read on BOTH paths. The unit dereferenced memory the original never
    touched, and the `fault` group (104 entries that fault on our side and not on the original's) was
    mostly this one line. A valueless `return;` is left alone: it returns whatever the body already put
    in eax.
    """
    return re.sub(r"\breturn\s+([^;]+);",
                  lambda m: "g->eax = (CowU32)(%s); return;" % m.group(1).strip(), func)


# A local's declaration, recognised on GHIDRA'S text and nowhere else. The strictness is the point: a
# candidate line may contain no `(`, no `=` and no `[`, so an assignment, a call and an array declaration are
# all excluded by construction. The first classifier here allowed an empty type prefix and therefore read
# `local_224 = rd32(...);` as "declare rd32", counting 84 declarations across 65 units.
_LOCAL_DECL_RE = re.compile(r"^\s*([A-Za-z_][A-Za-z0-9_ ]*?)\s*(\**)"
                            r"\s*([A-Za-z_][A-Za-z0-9_]*)\s*;\s*$")


def _name_in_lvalue(text, name):
    """True if `name` appears on the left of a top-level assignment anywhere in `text`.

    Block comments are masked first - they are full of prose semicolons, and unmasked they join two
    statements or split one. Statements are cut at `;` at bracket depth 0; an assignment is an `=` at depth 0
    that is not `==` and not part of `!=`/`<=`/`>=`. Deliberately blind to `if (x = 3)`, where the `=` is
    nested: that shape still reaches the syntax gate, and this predicate's job is the common
    store-through-a-slot form, not to be a C parser.
    """
    t = re.sub(r"/\*.*?\*/", " ", text, flags=re.S)
    depth = 0                              # ROUND and SQUARE nesting only - see the note above
    start = 0
    i = 0
    n = len(t)
    while i < n:
        ch = t[i]
        if ch in "([":
            depth += 1
        elif ch in ")]":
            depth -= 1
            if depth < 0:
                depth = 0                  # a stray closer must not sink the count and blind the rest
        elif ch == "=" and depth == 0:
            prev_ok = (i == 0) or (t[i - 1] not in "=<>!")
            next_ok = (i + 1 >= n) or (t[i + 1] != "=")
            if prev_ok and next_ok and re.search(r"\b%s\b" % re.escape(name), t[start:i]):
                return True
        elif ch in ";{}" and depth == 0:
            start = i + 1
        i += 1
    return False


_PURGE_CACHE = {}


def callee_purge(target, bodies):
    """Bytes the function at `target` takes off the stack with its own `ret N`, thunks followed; None when it
    has no `ret`, when its rets disagree, or when there is no generated body for it (an import)."""
    if target in _PURGE_CACHE:
        return _PURGE_CACHE[target]
    out = None
    end = gen_model.follow_thunks(target, bodies)
    body = bodies.get("%08x" % end) if end is not None else None
    if body:
        seen = set()
        for c in gen_model.parse_instructions(body):
            if c["mnem"] in ("ret", "retn"):
                try:
                    seen.add(int(c["op"], 0) if c["op"] else 0)
                except ValueError:
                    seen.add(None)
            elif c["mnem"] == "jmp" and not re.match(r"^(0x[0-9a-f]+|\d+)$", c["op"]):
                seen.add(None)                    # an indirect jump: could be a tail call into anything
        if len(seen) == 1 and None not in seen:
            out = seen.pop()
    _PURGE_CACHE[target] = out
    return out


def emit(d, ctx):
    """(text, reason). text is None when the unit is refused, with the reason the report groups by."""
    import ret_model
    ret_model.PURGE = lambda t, _b=ctx.bodies: callee_purge(t, _b)
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
    # A body with no `ret` is refused UNLESS it is the one shape that legitimately has no return: a tail
    # jump into another function, where the TARGET's ret is the one that pops the return-address slot. The
    # generated body says so directly (`jmp 0x10196a10` -> `REGS_STORE; f_10196a10(g); return;`), and
    # gen_model.tail_jump_of has already checked that it is a single static tail jump with no ret anywhere.
    # Such a unit gets a bridge with no return-address push and no cleanup, and an adapter with NO epilogue
    # at all - see TAIL_ADAPTER_TMPL for why restoring esp or calling rt_return there double-pops.
    tail = m.get("tail_jump")
    if m["no_ret"] and not tail:
        return None, "no_ret_in_body"
    if tail and m["has_indirect_call"]:
        # an indirect call somewhere else in the body means a path we cannot follow reaches the tail jump
        #
        # THIS IS NOT THE TARGET-NAMING REFUSAL, and it used to carry its reason string, which made the two
        # indistinguishable in every count. Measured 2026-11-10 (tools/cow/ghidra/
        # lift_indirect_ambig_census.py, tripwired on 0x1000e030): 11 units in `indirect_call_not_modelled`
        # have their indirect target ALREADY NAMED by the model - they are refused here, because a tail-call
        # adapter has no epilogue to restore a frame across a path this walk cannot follow. Nothing a
        # callee-naming model could ever build would release them, so a family priced on the shared string
        # was being aimed at units it cannot reach. The name keeps the `indirect_call_not_modelled` PREFIX so
        # every census that scopes by prefix still sees them; only the distinction is new. The guard itself
        # is right and stays: `no_ret_in_body` gives the adapter no epilogue, and an unmodellable path into
        # the tail jump is exactly the shape where that is fatal.
        return None, "indirect_call_not_modelled_tail_call_body"
    if m["mixed_ret"]:
        return None, "purge_ambiguous"
    # x87 is refused UNLESS the unit uses the FP stack as pure internal scratch (gen_model.x87_shape).
    # cowdiff compares `top` and `st0` at return, so a function that takes a float in, leaves one on the
    # stack, reads one the caller left, or holds one across a call cannot be lifted from a decompiler's
    # float arithmetic - the decompiler has no stack to put it in. What it CAN do is compute a float in
    # locals and store it, which is exactly what the shallow-scratch contract permits: there the guest's
    # top/st0 are provably untouched, by our body and by the original alike.
    # The arithmetic is Ghidra's, never the generated body's - that body is what cowdiff compares
    # AGAINST, so lifting its X87_PUSH/fr_cw statements would agree by construction and prove nothing.
    if m["has_x87"]:
        shape = m.get("x87") or {}
        if not shape.get("liftable"):
            # the sub-reason is part of the string, so the queue still groups the family by prefix while
            # the census can see WHICH shape blocks it, and a later fix can be priced per sub-form
            return None, "x87_not_modelled_" + str(shape.get("why") or "unclassified")
    if m["has_string_op"]:
        # Was a blanket refusal of any function containing a rep. Reading both sides of real units showed
        # Ghidra already models `rep stosd`/`rep movsd` as a counted loop that our passes turn into correct
        # guest reads and writes - the semantics were right and the gate was throwing them away for 1,261
        # units. gen_model.string_shape now decides, per rep, on form / direction / width / provenance; the
        # sub-reason is part of the string so the queue still groups the family while the census can see
        # which clause blocks it.
        shape = m.get("string") or {}
        if not shape.get("liftable"):
            return None, "string_op_not_modelled_" + str(shape.get("why") or "unclassified")
    # An indirect call is no longer a reason to refuse the FUNCTION - it is a reason to refuse the SITE
    # whose target the generated body cannot name (see bridge_indirect). `call ebx` where the body knows
    # what ebx holds is a call the lift can make exactly as the guest made it, through the runtime's own
    # rt_call_indirect; `call dword ptr [eax*4+...]` is not, and still books indirect_call_not_modelled.
    #
    # The clause no longer refuses a unit whose call Ghidra folded into the callee, because the walk is the
    # authority on the PLUMBING and this is semantics: `(**(code **)(*param_1 + 0x24))()` names a target the
    # guest-instruction walk can never name (762 of 820 sites are that wall - a base register whose value
    # came from a LOAD), while the decompiler states it plainly in C. What makes letting it through safe is
    # not this clause - it is (a) ghidra_c._callee_read, which translates only the canonical form over
    # parameters and image macros and refuses anything reading a Ghidra local (a bare DAT_hex base
    # is folded to the VALUE form *(COW_IMG(...)) first by ghidra_c.fold_image_globals - never to
    # the macro address itself, which would jump one pointer too few; this probe renders that macro
    # without registering it, as a unit refused elsewhere must not leave a header entry behind), (b) the read-count agreement
    # against target_desc in bridge_indirect, (c) leftover_problems refusing host_call_through_computed_pointer
    # for any callee that ends up unbridged, and (d) the pairing check below. Ask the translator whether it
    # can translate; if it cannot, the unit books the refusal it always booked.
    if m["has_indirect_call"] and not any(
            s.get("target_expr") for s in m["call_sites"] if s["target"] is None) \
            and not any(ghidra_c.Rewriter._callee_read(
                            ghidra_c.fold_image_globals(
                                t, lambda va: "COW_IMG(COW_ADDR_LIFT_%s)"
                                             % ("0x%x" % va)[2:].upper()))
                        for _r, _e, t, _a in ghidra_c.computed_pointer_calls(c)):
        return None, "indirect_call_not_modelled"
    # A partial-register write (`xor al,al`, `mov ah,X`, `mov ax,imm`) preserves the bits outside the
    # slice. The generated body states the width exactly; the decompiler has already flattened it to an
    # assignment to the whole register, and a lift that reproduces THAT makes a function which only
    # cleared its low byte come back zeroing all four - disagreeing with the oracle on nearly every
    # state while looking perfectly translated. These are precisely the registers cowdiff compares.
    #
    # So the lift now MODELS it (apply_partial_widths, below): the k-th write to R in the generated body
    # says how wide the k-th assignment to g->R in the emitted C was allowed to be, and the assignment is
    # rewritten as a masked merge. That alignment is only trustworthy when the two sequences have the same
    # length for every partially-written register; when they do not, the unit is refused with the reason
    # it has always used. Shipping stays gated on having a model.
    #
    # COW_LIFT_ALLOW_PARTIAL=1 releases the un-aligned ones for MEASUREMENT ONLY. The refusal guards the
    # report, not the player: an unproven lifted unit never reaches table.c (ledger done -> genwraps ->
    # table.c is the only way in), so a released unit can only ever be counted once cowdiff agrees. It must
    # SUPERSEDED: this is no longer measurement-only. The refusals release by default and COW_LIFT_REFUSE_PARTIAL=1
    # is the opt-OUT, kept so the A/B can still be run; see the decision comment in apply_partial_widths for
    # the numbers that changed the default. Setting the opt-out for a run whose files are kept is the
    # dangerous direction now, because prune deletes what the run did not emit.
    #
    # THIS KNOB WAS DEAD, AND THE FAMILY WAS PRICED THROUGH IT. The guard used to read
    # `if partials and not os.environ.get(...): pass` - a statement whose body is `pass`, sitting next to a
    # second, UNCONDITIONAL refusal on the line below. Turning the knob on and off therefore emitted exactly
    # the same 7,822 units, and the comment's claim that "this flag is how the family got priced at 40/120"
    # meant that number had measured nothing at all. Found by running the A/B instead of believing the
    # comment, which is the whole reason to keep measurement knobs next to the thing they claim to gate.
    # It is now wired to the refusal that actually fires. Any figure in the queue for this family taken
    # before today has to be re-taken through the working knob.
    partials = gen_model.partial_reg_writes(m["ins"]) & {"eax", "edx", "ebx", "esi", "edi", "ebp"}
    part_seq = gen_model.partial_write_sequence(m["ins"]) if partials else {}
    # Both partial-write refusals now release by default and refuse only under COW_LIFT_REFUSE_PARTIAL, and
    # they have to be flipped TOGETHER: the 32.0% sample was drawn from the set released with both sites
    # open, so shipping one and not the other would not reproduce the measured population. The two refusals
    # are different conditions (here: registers the body has NO recorded partial-write sequence for at all;
    # below in apply_partial_widths: a sequence whose length disagrees with Ghidra's assignments), which is
    # why they were ever two knobs' worth of code.
    if partials and not part_seq and os.environ.get("COW_LIFT_REFUSE_PARTIAL"):
        return None, "partial_register_write_" + ",".join(sorted(partials))

    # ---- call sites, matched to Ghidra's call expressions in order of appearance per target
    sites_by_target = {}
    for s in m["call_sites"]:
        sites_by_target.setdefault(s["target"], []).append(s)
    cursor = {}

    # Ghidra names a call to a THUNK by the thunk's target (`thunk_FUN_10028aa0()` for a guest
    # `call 0x1002c8b0`, where 0x1002c8b0 is one instruction `jmp 0x10028aa0`), while the generated body
    # records the site at the address the guest actually called. The exact-address join above therefore
    # misses, and the unit is refused as no_generated_call_site_for_FUN_x - 94% of the
    # leftover_unbridged_call family (lift_unbridged_diag.py). Index the sites by their RESOLVED target so
    # the join succeeds; the bridge is then emitted for the SITE's address, because that is what the guest
    # called and what side A calls. Built lazily into a dict, so a unit with no thunk call pays nothing
    # beyond the lookups that actually happen.
    resolved_cache = {}

    def resolve(t):
        if t not in resolved_cache:
            resolved_cache[t] = gen_model.follow_thunks(t, ctx.bodies)
        return resolved_cache[t]

    sites_by_resolved = {}
    if sites_by_target:
        for s in m["call_sites"]:
            if s["target"] is not None:
                sites_by_resolved.setdefault(resolve(s["target"]), []).append(s)

    # Which of this unit's INTRA-BODY tail jumps Ghidra actually rendered, as [(target, addr)]. A local of
    # emit(), not a Ctx field: the same Ctx serves every unit in a run, and a flag that survives between
    # them reports last unit's tail on this one - which is how `ctx.tail_bridge` became a write-only relic
    # nobody reads. Read after the body is assembled to decide the adapter's call line.
    intra_used = []

    def tail_bridge_text(target, at_addr):
        """The bridge call for a GUEST TAIL JUMP to `target`, or None (with the reason booked).

        Shared by the two tail shapes - the body whose only exit is a tail jump, and a tail jump inside a
        body that also returns - because the CALL is the same thing in both: the same callee, no
        return-address push, no cleanup. What differs is the adapter, and that stays the callers' business.
        """
        cf = gen_model.callee_facts(ctx.bodies.get("%08x" % target) or [])
        wants_ecx = wants_edx = wants_eax = False
        if cf.get("ok"):
            wants_ecx, wants_edx = bool(cf.get("wants_ecx")), bool(cf.get("wants_edx"))
            wants_eax = bool(cf.get("wants_eax"))
        # the registers the target reads must be ones the body leaves ALONE, or values the adapter
        # replays: the lifted body keeps what it computed in Ghidra locals, so g->reg at the jump is
        # the ENTRY value. Naming anything else is the argcount_mismatch bug, measured at 10%.
        # A register the body NEVER writes is provably still the one the entry arrived with, so
        # g->reg is the truth, not a guess (same argument call_reg_values uses). A register it DOES
        # write lives in a Ghidra local the bridge cannot reach, so it has to come from the
        # prologue's maintained value - and if the lift cannot name that, the unit is refused rather
        # than handed the entry value, which is the argcount_mismatch failure at 10%.
        unwritten = gen_model.registers_never_written(m["ins"])
        regvals = {}
        for r, want in (("ecx", wants_ecx), ("edx", wants_edx), ("eax", wants_eax)):
            if not want:
                regvals[r] = "g->%s" % r
                continue
            if r in unwritten:
                regvals[r] = "g->%s" % r
                continue
            named = ctx.reg_live.get(r)
            if named is None:
                ctx.problems.append("tail_reg_unnameable_%s_at_%x" % (r, at_addr))
                return None
            regvals[r] = named
        if not ctx.bridges.note_tail(target, wants_ecx, wants_edx, wants_eax):
            ctx.problems.append("tail_and_call_same_target_%x" % target)
            return None
        return ("cow_bridge_tail_%x(g, %s, %s, %s)"
                % (target, regvals["ecx"], regvals["edx"], regvals["eax"]))

    def bridge(target, args):
        sites = sites_by_target.get(target)
        via_thunk = False
        if not sites and not (tail and target == tail["target"] and not tail.get("used")):
            # second chance: a call Ghidra routed through a thunk's name
            cand = sites_by_resolved.get(target)
            if cand:
                sites = cand
                via_thunk = True
        if not sites:
            # A tail jump is not a CALL SITE - the guest jumped - so Ghidra's `FUN_target();` arrives here
            # with nothing to match. If it is the body's one tail jump, it goes through the tail bridge
            # instead: the same callee, no return-address push, no cleanup.
            if tail and target == tail["target"] and not tail.get("used"):
                tail["used"] = True
                text = tail_bridge_text(target, tail["addr"])
                if text is None:
                    return None
                ctx.tail_bridge = True
                return text
            # ...and the same goes for a tail jump on ONE path of a body that also returns, which
            # tail_jump_of deliberately will not claim. The bridge call is identical; what the lifted unit
            # additionally needs is for that path to say "I left through a tail", so the adapter can skip
            # the cleanup the guest never ran - see gen_model.intra_tail_jumps.
            for e in m.get("intra_tails") or []:
                if e["target"] == target and not e["used"]:
                    text = tail_bridge_text(target, e["addr"])
                    if text is None:
                        return None
                    e["used"] = True
                    intra_used.append((target, e["addr"], list(e.get("pops") or [])))
                    return text
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
        # The default for a register argument is the register, not zero. `g->ecx` / `g->edx` are the value
        # the guest actually holds at this point: the lifted body keeps its own temporaries in Ghidra
        # locals and never writes the Guest, so the only things that have touched g-><reg> are the adapter's
        # replayed prefix (which mirrors the guest's own writes) and the callees called so far (which leave
        # their returns there, exactly as the original would). Defaulting to 0u instead was actively wrong:
        # a callee that reads edx before writing it got its edx ZEROED, and the largest family in the `edx`
        # group - `push esi; mov esi,ecx; call; test [esp+8],1; push esi; call` - failed on exactly that,
        # because the second bridge passed 0u after the first call had left a real pointer in the register.
        # Zero is not a neutral default here; it is a value the machine never had.
        ecx_expr, edx_expr = "g->ecx", "g->edx"
        want_ecx = want_edx = False
        callee_sig = ctx.signature(target)
        low = (callee_sig or "").lower()
        n = len(args)
        # The words this call pushed, as the GENERATED BODY says it pushed them. When the body could name
        # them all, they are the argument list - the decompiler's is a reconstruction, and it reorders and
        # reuses names freely (0x10089f50's `push eax; push ecx` became (param_1, param_2), which pushed
        # ecx's pointer where the guest had put the second stack argument). The decompiler's list still
        # decides the REGISTER arguments below, because only its prototype knows that `this` came in ecx;
        # where the body cannot express a push (a memory operand), this stays None and the old path runs.
        measured = site.get("push_values") if site else None
        use_measured = (bool(measured) and npush is not None and len(measured) == npush
                        and all(measured))
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
        if npush is not None and len(args) != npush and not use_measured:
            # only a refusal while the pushed words are still being GUESSED. With a measured list the
            # decompiler's count is not evidence of anything - it is the same reconstruction that put the
            # arguments in the wrong order.
            ctx.problems.append("argcount_mismatch_%x_ghidra%d_push%d" % (target, len(args), npush))
            return None
        cleanup = site["cleanup"] or 0
        if npush is not None and cleanup and cleanup != 4 * npush:
            ctx.problems.append("cleanup_mismatch_%x" % target)
            return None
        # The decompiler's prototype is not the last word on the register arguments: when it decided the
        # callee takes none it emitted no argument at all, and the call would go out with ecx = 0u while
        # the entry had just loaded `this + 4` into it. Fall back to what the GENERATED BODY put in those
        # registers at this site (gen_model.call_reg_values), which only ever names a value the lifted body
        # can evaluate - and leaves it None when it cannot, in which case the zero stays as the honest
        # default rather than being replaced by a guess.
        # what the callee takes in registers, read off ITS generated body: a callee that uses ecx/edx/eax
        # before ever assigning it arrived with a value from the caller.
        # The BRIDGE NAME is the address the guest called (the thunk on this path) - that is what the entry
        # did and what side A calls. The FACTS about register inputs come from the function that finally
        # RUNS, because a thunk's own body is a single jmp and would report "takes nothing in ecx", which
        # is how a thiscall's `this` gets dropped on the floor and the callee stores through a null pointer.
        callee = site["target"] if via_thunk else target
        cf = gen_model.callee_facts(ctx.bodies.get("%08x" % (target if via_thunk else callee)) or [])
        want_ecx = want_ecx or (cf.get("wants_ecx") if cf.get("ok") else False)
        want_edx = want_edx or (cf.get("wants_edx") if cf.get("ok") else False)
        want_eax = bool(cf.get("wants_eax")) if cf.get("ok") else False
        # the default for eax is "whatever the caller left there", which the bridge passes through
        # untouched; a value the body actually loaded at this site beats it.
        eax_expr = ctx.reg_live.get("eax", "g->eax")
        rv = site.get("regvals") or {}
        if ecx_expr == "g->ecx" and rv.get("ecx") and rv["ecx"] != "g->ecx":
            ecx_expr, want_ecx = rv["ecx"], True
        if edx_expr == "g->edx" and rv.get("edx") and rv["edx"] != "g->edx":
            edx_expr, want_edx = rv["edx"], True
        if eax_expr == "g->eax" and rv.get("eax") and rv["eax"] != "g->eax":
            eax_expr = rv["eax"]
        ctx.bridges.note(callee, want_ecx, want_edx, want_eax)
        vals = ", ".join(measured) if use_measured else (", ".join(args) if args else "0u")
        return ("cow_bridge_%x(g, %s, %uu, (const CowU32[]){ %s }, %s, %s, %s, %uu)"
                % (callee, ctx.img_literal(site["retaddr"]), npush or 0, vals,
                   ecx_expr, edx_expr, eax_expr, cleanup))

    # Indirect calls, in the order Ghidra wrote them. They are matched to the unclaimed indirect sites of
    # the generated body by position: `target is None` is all they have in common, and the body lists them
    # in the same program order the decompiler printed them in.
    indirect_sites = [x for x in m["call_sites"] if x["target"] is None]
    indirect_cursor = [0]

    def bridge_indirect(name, args):
        k = indirect_cursor[0]
        if k >= len(indirect_sites):
            ctx.problems.append("more_indirect_calls_than_sites_%s" % name)
            return None
        site = indirect_sites[k]
        indirect_cursor[0] = k + 1
        texpr = site.get("target_expr")
        if not texpr and str(name).startswith("EXPR:"):
            # Ghidra folded the pointer load into the callee and ghidra_c translated the chain. The walk
            # cannot name a register whose value came from a LOAD, which is why 762 of 820 sites in this
            # family have no target_expr at all: the authority on the plumbing cannot see this piece of
            # semantics, and refusing on "the walk said so" was refusing the whole 1,268-unit family.
            #
            # It is NOT taken on trust. `reads` is how many guest memory reads ghidra_c's translation
            # performs, and `target_desc` came from the GENERATED BODY - the guest's own `call [eax+0x24]`
            # says how many indirections there are. They must agree, or the unit is refused. Ghidra's
            # leading `*`s are never counted as reads by themselves: in `(**(code **)(X))()` the outermost
            # is the call idiom, and a rule that read it as a memory read would jump through one pointer
            # too many - a wrong address on a call, which is the failure mode here that can still look
            # healthy to cowdiff.
            head, _, payload = str(name)[5:].partition(":")
            d = site.get("target_desc") or ()
            want_top = {"reg": 0, "mem": 1, "abs": 1}.get(d[0] if d else "?")
            if want_top is not None and head.isdigit():
                got_reads = int(head)
                # The agreement required is on the TOP level: the guest either read the slot at base+disp
                # (one indirection - `mem`/`abs`) or jumped to a value already in a register (zero - `reg`).
                # The base's own provenance may add reads and target_desc cannot see into it, so only "fewer
                # than the guest performed" is a contradiction, and a contradiction is a refusal.
                if got_reads < want_top:
                    ctx.problems.append("indirect_read_count_disagree_%x_desc%s_ghidra%d"
                                        % (site["addr"], d[0], got_reads))
                else:
                    texpr = payload
        if not texpr:
            ctx.problems.append("indirect_target_not_nameable_%s" % name)
            return None
        if site["retaddr"] is None:
            ctx.problems.append("no_retaddr_at_%x" % site["addr"])
            return None
        # the pointer itself: `IMG:` markers become layout macros here and nowhere else, so a lifted unit
        # never carries a bare guest address
        if texpr.startswith("IMG:"):
            texpr = ctx.img_literal(int(texpr[4:], 16))
        elif re.fullmatch(r"0x[0-9a-fA-F]+", texpr):
            texpr = ctx.img_literal(int(texpr, 16))
        npush = site["npush"]
        measured = site.get("push_values")
        use_measured = (bool(measured) and npush is not None and len(measured) == npush and all(measured))
        if not use_measured:
            # through a pointer there is no prototype to strip register arguments from: every word the
            # callee sees, it sees on the stack, so Ghidra's list has to agree with the measured pushes
            if npush is not None and len(args) != npush:
                ctx.problems.append("argcount_mismatch_indirect_%x_ghidra%d_push%d"
                                    % (site["addr"], len(args), npush))
                return None
        cleanup = site["cleanup"] or 0
        # Through a pointer there is no callee to ask whether it reads ecx/edx/eax before writing them, so
        # all three are passed: the values are the ones the generated body had in those registers (or the
        # live ones), and a callee that ignores them loses nothing.
        rv = site.get("regvals") or {}
        ecx_expr = rv.get("ecx") or "g->ecx"
        edx_expr = rv.get("edx") or "g->edx"
        eax_expr = rv.get("eax") or ctx.reg_live.get("eax", "g->eax")
        want_ecx, want_edx, want_eax = True, True, True
        ctx.bridges.note_indirect()
        vals = ", ".join(measured) if use_measured else (", ".join(args) if args else "0u")
        return ("cow_bridge_indirect(g, %s, %s, %uu, (const CowU32[]){ %s }, %s, %s, %s, %uu)"
                % (texpr, ctx.img_literal(site["retaddr"]), npush or 0, vals,
                   ecx_expr, edx_expr, eax_expr, cleanup))

    # ---- the adapter's opening instructions, in the order the guest executed them, and the registers the
    # entry left live as it went (0x10001e10's `mov eax,[0x103d3c88]` is the case: Ghidra keeps the test
    # and loses the value, so side B would return a fuzzed eax where side A returns 0).
    # arg_pushes: the pushes that belong to a call's arguments. The bridge replays those, so the adapter
    # must stop before them rather than pushing the arguments a second time.
    ops = gen_model.prologue_ops(m["ins"], None, ctx.layout, arg_pushes=m.get("arg_pushes") or set())
    # which of ecx/edx arrive as arguments decides how the STACK words are numbered in the lifted
    # function (a thiscall's param_1 is ecx, so [esp+4] is param_2), so it is settled here, where the
    # prologue's argument reads still have to be turned into those names.
    reg_order = [r for r in ("ecx", "edx") if r in m["reg_args"]]

    def arg_of(stack_index):
        return "param_%d" % (stack_index + 1 + len(reg_order))

    def resolve(expr):
        if isinstance(expr, tuple):
            return arg_of(expr[1])
        # A register copy comes back from expressible_write as the bare guest register name (`mov esi, ecx`
        # -> "ecx"), which is not an identifier that exists in the adapter. The value lives in g->ecx: the
        # adapter replays the prologue in program order and every replayed write goes to g-><reg>, so g->x
        # always names the guest's current x. This path was never exercised before because the anchored
        # patterns in expressible_write could not match a braced statement, so no register copy had ever
        # reached here - and the emit site had been compiling `g->esi = ecx;` in waiting.
        if expr in gen_model.REG32:
            return "g->%s" % expr
        return expr

    ctx.reg_live = {}
    for o in ops:
        if o["kind"] == "regwrite":
            ctx.reg_live[o["reg"]] = resolve(o["expr"])
        elif o["kind"] == "replay":
            # the adapter just wrote it itself, so g-><reg> IS the value from here on
            ctx.reg_live[o["reg"]] = "g->%s" % o["reg"]
        elif o["kind"] == "pop":
            ctx.reg_live.pop(o["reg"], None)      # its old value is gone; we no longer know what it held

    # ---- COW_MODEL_LOCAL_BIND_MEASURE: the DECISION and the DECLARATION REMOVAL, before the Rewriter.
    #
    # An escaping local is the param defect one level deeper: Ghidra folded guest stack slots into C locals,
    # so `&local_140` hands a HOST variable to guest code that stores through it - which is why ghidra_c.py
    # refuses the unit as local_address_escapes. The guest said where those bytes are (`lea ecx,[esp+0xc]`
    # with esp = sp0-0x14c is sp0-0x140), the adapter's own prologue reserves that depth (measured 65/65
    # COVERED), and the declared width agrees with the guest's store width where checked (`undefined1`
    # against `mov byte ptr [esp+0xc], al`; `undefined4` against `rep stosd`).
    #
    # The NAME maps nothing: agreement between Ghidra's `local_<hex>` and the witnessed offset measured 2 of
    # 65, because Ghidra measures from a per-unit-varying stack reference. Witness only.
    #
    # Why the decision and the removal run BEFORE rw.rewrite(): the Rewriter destroys the declaration of an
    # `undefined **N` local (see _LOCAL_DECL_RE), and a removal regex written against Ghidra's spelling then
    # matches nothing. The declaration is the one place substituting the name is never right, so it is gone
    # while it is still recognisable as a declaration.
    bound_locals = {}
    if os.environ.get("COW_MODEL_LOCAL_BIND_MEASURE"):
        _lnames = sorted({t for t, _x in ghidra_c.address_of_names(body)
                          if not t.startswith("param_")})
        _lins = m.get("ins") or []
        _lsites = m.get("call_sites") or []
        _lpushed = (_lsites[0].get("pushed") or []) if _lsites else []
        _lcand = {}
        for _l in gen_model.frame_leas(_lins):
            if _l["base"] == "esp" and _l["prefix"] and _l["off"] < 4 and _l["reg"] in _lpushed:
                _lcand.setdefault(_l["reg"], set()).add(_l["off"])
        _luniq = {r: next(iter(o)) for r, o in _lcand.items() if len(o) == 1}
        if len(_lnames) == 1 and len(_luniq) == 1:
            _lname = _lnames[0]
            _loff = next(iter(_luniq.values()))
            _lwidth = ghidra_c.local_decl_width(c, _lname)
            if _lwidth in (1, 2, 4, 8):
                _lavail = (m.get("locals") or 0) + 4 * len(m.get("pushes") or [])
                if -_loff <= _lavail:
                    _ldcl = [ln for ln in body.splitlines()
                             if "(" not in ln and "=" not in ln and "[" not in ln
                             and _LOCAL_DECL_RE.match(ln)
                             and _LOCAL_DECL_RE.match(ln).group(3) == _lname]
                    if len(_ldcl) != 1:
                        # NOT bound, so the unit keeps its honest local_address_escapes refusal. Shipping a
                        # body with the host variable still declared beside the guest slot is the two-answers
                        # bug this whole mechanism exists to remove.
                        ctx.bound_unaccounted = ("declaration of %s found %d times" % (_lname, len(_ldcl)))
                    else:
                        body = "\n".join(ln for ln in body.splitlines() if ln != _ldcl[0])
                        bound_locals[_lname] = (_loff, _lwidth)

    # ---- the computation, from Ghidra
    rw = ghidra_c.Rewriter(ctx.layout, bridge=bridge, bridge_indirect=bridge_indirect,
                           guest_widths=gen_model.guest_global_widths(m["ins"]),
                           rebased_consts=m.get("rebased_consts"))
    newbody = rw.rewrite(body, sig)
    # Bind Ghidra's unaffected-but-unbound registers to the guest register file on the authority's own
    # evidence (see _bind_unaffected_regs). After the rewrite, so it sees the text that would actually ship;
    # before the leftover scan is consulted, so a surviving token really is one the rewriter produced.
    newbody, _unaff_why = _bind_unaffected_regs(newbody, m["ins"])
    # ---- COW_MODEL_PARAM_BIND_MEASURE (measurement only, OFF by default): bind `&param_k` to the guest slot
    #
    # When Ghidra's body takes the address of its own STACK argument (the guest did `lea ecx,[esp+4]` and
    # pushed it), the adapter's `CowU32 param_1 = rd32(sp0 + 4u)` makes that `&param_1` the address of a
    # HOST C local - which is what ghidra_c.py:1852 refuses as param_address_escapes. The right answer is
    # already in the generated body (f_1001ac50: `ecx = (uint32_t)(esp + 0xCu)`, and esp is sp0-8 there, so
    # the value is sp0 + 4u), and for a STACK argument it is pure arithmetic: the slot sits above the return
    # address, fixed by the calling convention, above every push the body performs. It therefore needs NO
    # esp tracking - which is why this is the half of the frame binding with no co-blocker, and why the
    # local half (43 units) was left alone: [esp+4] names different slots before and after a push, and
    # Ghidra's local_N names are not a formula for it.
    #
    # Binding means three coordinated things, all local to this pair of insertions:
    #   * the ADAPTER passes the slot itself as the formal's value (see the bound_slots branch under the
    #     argument declarations, where sp0 is still in scope, before the prologue moves esp);
    #   * `&param_k` in the body becomes `param_k`, because the formal now IS the address;
    #   * every other use becomes a LIVE rd32 of the slot - which also removes the staleness class where
    #     Ghidra reads the argument AFTER a call that was given its address (f_1001ac50's
    #     `if (param_1 != 0)` after FUN_10073ba0(&param_1, 0x2b, param_1)).
    #
    # Refused here, and left to the existing escape refusal, because each needs a DIFFERENT mechanism
    # (measured at 5 of 64 in cow/wip/frame-binding-pop.txt):
    #   * a register argument (thiscall `this` in ecx/edx) - needs a SPILL slot, not a slot read;
    #   * a float/double argument - its value read is rdf32/rdf64 and this path reads a word;
    #   * a parameter the body ASSIGNS to - needs wr32 on the slot, and inventing that in the same change
    #     as the read path would put two unproved mechanisms behind one knob.
    _mapping_unresolved = []
    bound_slots = {}
    if os.environ.get("COW_MODEL_PARAM_BIND_MEASURE"):
        _ins_all = m.get("ins") or []
        _wit_regs = {}
        for _a, _r, _off, _d in gen_model.prefix_lea_slots(_ins_all):
            _wit_regs.setdefault(_r, set()).add(_off)
        _sites_all = m.get("call_sites") or []
        _pushed0 = (_sites_all[0].get("pushed") or []) if _sites_all else []
        _addresses_all = set()
        for _t, _ctx0 in ghidra_c.address_of_names(newbody):
            _mx = re.match(r"param_(\d+)$", _t)
            if _mx:
                _addresses_all.add(int(_mx.group(1)))
        _pt0 = gen_model.param_types(c)
        # THE shared rule, not a local regex: what counts as an address-of is decided once, in
        # ghidra_c.address_of_names. The first version of this block had its own `&\s*param_`
        # finditer, which is context-blind, and it therefore "bound" f_10221320 (`... & param_2`, a
        # bitwise AND) and refused it as an unresolved mapping - a measurement knob turning a liftable
        # unit into a refusal. Forking a rule is the defect this repo keeps re-meeting.
        for _tok, _ctx in ghidra_c.address_of_names(newbody):
            _mm = re.match(r"param_(\d+)$", _tok)
            if not _mm:
                continue                          # a local/Stack token: the other half, not this one
            _pi = int(_mm.group(1))
            _pk = _pi - 1 - len(reg_order)
            if reg_order and _witness_slot(_pi, _addresses_all, _wit_regs, _pushed0) is None:
                # The dump says cc=unknown and the signature never names `this`, so NOTHING here
                # says whether Ghidra numbered the register argument as param_1. Subtracting
                # len(reg_order) would be an assumption dressed as arithmetic - and the wrong
                # assumption hands the callee a neighbouring slot, silently. Name it, do not guess
                # it: see cow/wip/frame-binding-two-mechanisms.md and lift_param_map_check.py.
                _mapping_unresolved.append(_pi)
                continue
            if _pk < 0:
                continue                                        # register argument: spill slot, not this
            if (_pt0.get(_pi) or "").lower() in ("float", "double"):
                continue
            if re.search(r"(?<![=!<>+\-*/&|^])\bparam_%d\s*=[^=]" % _pi, newbody):
                continue                                        # the body writes it: needs wr32
            _wslot = (None if not reg_order else
                        _witness_slot(_pi, _addresses_all, _wit_regs, _pushed0))
            bound_slots[_pi] = (("sp0 + 0x%xu   /* witnessed by %s */" % (_wslot, "guest lea"))
                                if _wslot is not None else
                                ("sp0 + 4u + 0x%xu" % (4 * _pk)))
        if _mapping_unresolved:
            # returned, not appended: emit() reports sorted(set(problems))[0], and
            # "param_address_escapes" sorts before this name, so the specific cause the knob had
            # just discovered would have been invisible in its own histogram.
            return None, "param_slot_mapping_unresolved"
        if bound_slots:
            _bnames = "|".join(sorted({str(_i) for _i in bound_slots}))

            def _bind_sub(mm):
                if mm.group(1):
                    return "param_%s" % mm.group(2)              # &param_k -> param_k: it IS the slot now
                return "rd32((uint32_t)param_%s)" % mm.group(2)  # a live read of the guest's own slot

            newbody = re.sub(r"(&)?\bparam_(%s)\b" % _bnames, _bind_sub, newbody)
    # ---- COW_MODEL_LOCAL_BIND_MEASURE (measurement only, OFF by default): bind an ESCAPING LOCAL to the
    # guest slot the guest itself witnessed.
    #
    # An escaping local is the same defect the param case was, one level deeper: Ghidra folded a run of
    # guest stack slots into C locals, and `&local_140` in the body is therefore the address of a HOST
    # variable handed to guest code that stores through it - which is why ghidra_c.py refuses the unit as
    # local_address_escapes. The guest said where those bytes are (`lea ecx,[esp+0xc]` with esp = sp0-0x14c
    # is sp0-0x140), the adapter's own prologue reserves that depth (measured 65/65 COVERED), and Ghidra's
    # declared width agrees with the guest's store width where checked (undefined1 against
    # `mov byte ptr [esp+0xc], al`; undefined4 against `rep stosd`).
    #
    # The name is NOT used to map anything: measured agreement between Ghidra's `local_<hex>` and the
    # witnessed offset is 2 of 65, because Ghidra measures from a per-unit-varying stack reference. Witness
    # only. And the conversion covers exactly two spellings - `&N` and `N = expr;` - because everything
    # else (rvalue reads, subscripts, arithmetic) would need semantics this cut does not have; the accounting
    # guard at the end of emit() refuses anything left over rather than shipping it.
    if bound_locals:
        # The decision and the declaration removal ran ABOVE, before rw.rewrite() - see the note at
        # _LOCAL_DECL_RE for why they had to. The substitutions stay here, after it, because the expression
        # being stored is precisely what the Rewriter owns (image constants, calls, subscripts); doing this
        # first would hand it `wr32(...)` to rewrite.
        #
        # Three spellings and no more: the address, a store, and a read. The read case exists because the
        # Rewriter turns `*local_224` into `rd32((uint32_t)local_224)` - a use of the name Ghidra's own text
        # never contained - so a version that only knew `&N` and `N = expr;` refused every unit that read its
        # local. The value of a bound local is whatever the guest slot holds, read live. Anything else is
        # left for the accounting guard below to refuse rather than approximated here.
        for _lname, (_loff, _lwidth) in sorted(bound_locals.items()):
            _wrname = {1: "wr8", 2: "wr16", 4: "wr32", 8: "wr64"}[_lwidth]
            _rdname = {1: "rd8", 2: "rd16", 4: "rd32", 8: "rd64"}[_lwidth]
            if ctx.dump_pre_bind:
                with open(os.path.join(ctx.dump_pre_bind, "cow_%s.prebind.c" % short), "w",
                          encoding="utf-8") as _pfh:
                    _pfh.write(newbody)
            newbody = re.sub(r"&\s*\b%s\b" % re.escape(_lname), "slot_%s" % _lname, newbody)
            newbody = re.sub(r"(?<![=!<>\w])\b%s\s*=\s*([^;]+);" % re.escape(_lname),
                             lambda mm, _w=_wrname, _n=_lname:
                             "%s((uint32_t)slot_%s, %s);" % (_w, _n, mm.group(1).strip()),
                             newbody)
            newbody = re.sub(r"(?<![&\w])\b%s\b" % re.escape(_lname),
                             lambda mm, _r=_rdname, _n=_lname:
                             "%s((uint32_t)slot_%s)" % (_r, _n), newbody)
    problems = rw.problems + ctx.problems + ghidra_c.leftover_problems(newbody)
    if _unaff_why:
        problems.append(_unaff_why)
    if rw.n_indirect_static and rw.n_indirect_folded:
        # the two kinds of call-through-a-pointer are handled in two different passes, and a site is paired
        # with its call by consumption order alone. In one form that is sound; mixed, the early pass can take
        # the site belonging to the later call, and the unit compiles with the wrong return address on a real
        # call. Refusing the mixture is the cheap half of the pairing problem - the 29/250 count-mismatch
        # units in the census are the other half, and they refuse on their own numbers.
        problems.append("mixed_indirect_call_forms")
    if m["has_indirect_call"] and indirect_cursor[0] != len(indirect_sites):
        # every unclaimed indirect site of the generated body must have met a call in Ghidra's C, and vice
        # versa: the pairing between them is POSITIONAL, so a unit where Ghidra folded, deleted or invented
        # one of the calls cannot be paired at all. The census counted 29 of 250 in this class; they are
        # refused here rather than bridged to a site that belongs to some other call.
        problems.append("indirect_site_call_count_mismatch_%d_vs_%d"
                        % (len(indirect_sites), indirect_cursor[0]))
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
    # What each parameter IS, per the decompiler. Only the FLOAT spellings change anything today: the
    # adapter reads a stack argument with rd32, which for a float argument hands the body the raw bits and
    # it does integer arithmetic on them (0x100271f0: `*param_1 = param_2 * *param_1` where the guest did
    # fld/fmul/fstp on that value). A pointer-typed parameter is still an address and stays CowU32.
    ptypes = gen_model.param_types(c)

    def ptype(i):
        t = (ptypes.get(i) or "").lower()
        # A parameter Ghidra declared `int` IS signed in every expression of the body below, which is
        # Ghidra's C in Ghidra's types: `if (5 < param_1)` is `jl` in the guest (0x10002f00), and declaring
        # the parameter CowU32 made it `jb`. The adapter still reads the word with rd32 and passes it; the
        # conversion at the call is the reinterpretation. Narrow types stay CowU32: what the upper bytes of
        # a `char` argument hold is the caller's business and Ghidra's text does not say.
        if t in ("int", "long", "signed int", "signed long") and not os.environ.get("COW_LIFT_NO_SIGNED"):
            return "int32_t"
        return t if t in ("float", "double") else "CowU32"

    paramsig = ", ".join(["Guest* g"] + ["%s param_%d" % (ptype(i), i) for i in range(1, nparams + 1)])
    if bound_locals:
        paramsig += "".join(", CowU32 slot_%s" % _n for _n in sorted(bound_locals))
    # The body is wrapped in the region the readability gate does not read, exactly like the adapter below
    # it, and for the same reason: this is generated guest translation. It is what lets a lift keep the
    # decompiler's goto instead of being refused for not being a human's structure - the proof, not the
    # prose, is what makes it a conversion. A unit is still judged by every check that is not about style.
    # A pass that replaced an identifier (extraout_EDX -> g->edx) cannot reach back into the declaration
    # list, and a local nobody mentions is not a local: it is a leftover that keeps the compiler's
    # "uninitialized local" warning alive over code that no longer reads it.
    def _decl_name(decl):
        m = re.match(r"\s*[A-Za-z_][A-Za-z0-9_ *]*?([A-Za-z_][A-Za-z0-9_]*)\s*;", decl)
        return m.group(1) if m else None

    declared = [d for d in declared if (_decl_name(d) is None) or (_decl_name(d) in stmts)]

    # A pass that replaced an identifier (extraout_EDX -> g->edx) cannot reach back into the declaration
    # list, and a local nobody mentions is not a local: it is a leftover that keeps the compiler's
    # "uninitialized local" warning alive over code that no longer reads it.
    def _decl_name(decl):
        m = re.match(r"\s*[A-Za-z_][A-Za-z0-9_ *]*?([A-Za-z_][A-Za-z0-9_]*)\s*;", decl)
        return m.group(1) if m else None

    # A declaration that came to contain `->` is not a declaration any more: it was a Ghidra register
    # marker (`undefined4 *extraout_EDX`) that the last pass turned into the live register. It cannot
    # compile, so it goes - which is also what the name test above is doing for the plain cases.
    declared = [d for d in declared
                if "->" not in d
                and ((_decl_name(d) is None) or (_decl_name(d) in stmts))]

    func = ("void cow_lift_%s(%s)\n{\n"
            "/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control\n"
            "   flow. Readability rules do not apply here by design; the file's own header says it is not a\n"
            "   reading, and cowdiff against the generated original is what decides whether it is real. */\n"
            "%s\n%s\n"
            "/* COW_LIFTED END */\n}\n"
            % (short, paramsig, "\n".join(declared), "    " + stmts.replace("\n", "\n    ")))

    # a lifted body that returns something: keep the value in eax the way the entry would have.
    #
    # The replacement is a FUNCTION, not a string, and that is load-bearing: re.sub processes escapes in
    # a replacement template, so a body containing `'\0'` had its backslash-zero read as octal NUL and the
    # file was written with a raw NUL byte inside a character constant - which the compiler calls
    # "empty character constant" and which no reader would ever connect to this line.
    #
    # EACH return keeps ITS OWN expression. The first version of this searched for the value once and
    # then stamped it on every return in the function, so
    #     if (n < 0x200) return *(int *)(p + n * 4);   return 0;
    # came out with the guarded read on BOTH paths. The unit dereferenced memory the original never
    # touched, and the `fault` group (104 entries that fault on our side and not on the original's) was
    # mostly this one line. A valueless `return;` is left alone: it returns whatever the body already put
    # in eax.
    func = return_values(func)
    ret = "g->eax"

    if intra_used:
        # INTRA-BODY TAIL CALL. By now every return in the body is the bare `return;` that return_values
        # leaves behind, so the tail path's is rewritten to `return 1;` ("I left through a tail") and every
        # other one to `return 0;`, and the function says `int`. The adapter reads that bit.
        #
        # THE GUARD FIRST, because this is the shape where a wrong guess is a double-pop rather than a
        # wrong number: if Ghidra dropped the call, or emitted it WITHOUT returning immediately afterwards,
        # the flag would never be set, the tail path would fall back into the adapter epilogue, and
        # `rt_return` would pop a return-address slot the target had already popped. That unit must be
        # refused, not shipped - the same discipline as the single-tail `tail_jump_not_in_ghidra`.
        #
        # The two replacements are done on the body BETWEEN the COW_LIFTED markers only. A global
        # `func.replace("return;", ...)` would also be rewriting the prose in the banner comment, and a
        # comment that describes code the code no longer contains is the thing this project keeps
        # promising not to ship.
        begin = func.index("*/", func.index("COW_LIFTED BEGIN")) + 2
        end = func.index("/* COW_LIFTED END */")
        body = func[begin:end]
        for tgt, _at, pops in intra_used:
            pat = re.compile(r"([ \t]*)(cow_bridge_tail_%x\([^;]*\);)[ \t]*\n?[ \t]*return;" % tgt)
            found = pat.search(body)
            if not found:
                return None, "intra_tail_no_return_after_call_%x" % tgt
            # The pops the guest ran on THIS path, inline, before the bridge call - gen_model admitted this
            # site only because they sit contiguously above the jump and equal the epilogue's own, and the
            # adapter epilogue is skipped here by the flag, so nothing else will run them. Same statement
            # the epilogue uses (pop_stmt), same indentation as the call it precedes.
            #
            # A FUNCTION, not a template: re.sub reads escapes in the replacement, and a body containing
            # `'\0'` has already bitten this file once (see return_values).
            indent = found.group(1)

            def _tail_repl(mm, _pops=pops, _indent=indent):
                pre = "".join(pop_stmt(r, _indent) + "\n" for r in _pops)
                return "%s%s%s\n%sreturn 1;" % (pre, mm.group(1), mm.group(2), _indent)
            body = pat.sub(_tail_repl, body, count=1)
        body = body.replace("return;", "return 0;")
        # A body is entitled to FALL OFF THE END (`if (c) { FUN_T(); return; } tail_work();` with no final
        # return), and now that the function returns int that would hand the adapter a garbage flag and let
        # it decide whether to run the epilogue on the strength of an uninitialised register. Falling
        # through means NO tail was taken, so it says 0 - never "whatever happens to be in eax".
        body = body.rstrip() + "\n    return 0;   /* fell through: no tail call taken, run the epilogue */\n"
        func = func[:begin] + body + func[end:]
        func = func.replace("void cow_lift_%s(" % short, "int cow_lift_%s(" % short, 1)


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
        elif o["kind"] == "replay":
            # The recompiler's own statement, verbatim, with its register file hung off the Guest. Not
            # paraphrased into what a reader would expect it to mean: a paraphrase is a second
            # implementation, and the one that disagrees in a corner still compiles.
            pro.append("    %s   /* 0x%08x: register %s, replayed as the entry ran it */"
                       % (o["stmt"], o["addr"], o["reg"]))
    # The scan stops at the first instruction it cannot express, but the frame has to be complete: a
    # register the epilogue pops was pushed, wherever in the opening that push was.
    for r in m["pushes"][len(pushed):]:
        pro.append("    g->esp -= 4u; wr32(g->esp, g->%s); /* push %s (from the epilogue's pops) */" % (r, r))
    if bound_slots:
        # A bound formal holds the SLOT, so every place the adapter reads it as a VALUE has to go through
        # guest memory. The body's own uses were rewritten before the leftover scan; the prologue lines are
        # built here, outside that text, and without this the entry's `mov eax,[esp+4]` would load the
        # ADDRESS into eax (read off f_10072ed0's emitted file - see cow/wip/ampersand-false-escapes...).
        for _n, _line in enumerate(pro):
            if "param_" not in _line:
                continue
            _new = _line
            for _bi in sorted(bound_slots):
                _new = re.sub(r"(?<![&\w])\bparam_%d\b" % _bi, "rd32((uint32_t)param_%d)" % _bi, _new)
            if _new != _line:
                pro[_n] = _new


    # Arguments. A register argument comes in ecx/edx; a stack argument sits above the return address at
    # sp0+4, which is true whether the function used a frame pointer or not (ebp was made to point at the
    # same frame), and reading it here - before the pushes - is the address the original read it at.
    argdecls, argnames = [], []
    for i in range(1, nparams + 1):
        idx = i - 1
        if idx < len(reg_order):
            # a register argument arrives as bits in ecx/edx; the decompiler calling it a float does not
            # change what the guest put there, and reinterpreting a register's bits as a float is the kind
            # of change that needs its own evidence, so the register case keeps the existing behaviour
            argdecls.append("    CowU32 param_%d = g->%s;   /* %s argument */" % (i, reg_order[idx], reg_order[idx]))
        else:
            k = idx - len(reg_order)
            at = "sp0 + 4u + 0x%xu" % (4 * k)
            if bound_slots.get(i):
                # The body takes &param_%d, so the formal must HOLD the guest slot rather than a copy of
                # it. sp0 is in scope here (this is the adapter, before the prologue moves esp), which is
                # what makes this arithmetic rather than esp tracking. Every use in the body was rewritten
                # to read the slot live. Only reachable under COW_MODEL_PARAM_BIND_MEASURE.
                argdecls.append("    CowU32 param_%d = (CowU32)(%s);   /* bound: the guest slot itself */"
                                % (i, bound_slots[i]))
                argnames.append("param_%d" % i)
                continue
            t = (ptypes.get(i) or "").lower()
            if t == "float":
                # the guest loaded this argument with fld, so it is a float in memory, not a word to be
                # multiplied as an integer: rdf32 is the read the generated body performs
                argdecls.append("    float param_%d = rdf32((uint32_t)(%s));   /* float argument */"
                                % (i, at))
            elif t == "double":
                argdecls.append("    double param_%d = rdf64((uint32_t)(%s));   /* double argument */"
                                % (i, at))
            else:
                argdecls.append("    CowU32 param_%d = rd32((uint32_t)(%s));" % (i, at))
        argnames.append("param_%d" % i)

    def image_loads(expr):
        """Turn a replayed tail's absolute loads into layout macros.

        gen_model names a value it can evaluate, and for an absolute read that is a number - but a bare
        guest address inside a lifted unit is the thing layout/lifted_addresses.h was created to make
        impossible: the address should be a NAME a reader can look up, and the macro table is what keeps the
        name and the number from drifting apart. Only image addresses become macros; an arena or stack
        address is a value the entry computed, not a layout fact.
        """
        def sub(m):
            v = int(m.group(1), 0)
            if not (ctx.image_lo <= v < ctx.image_hi):
                return m.group(0)
            return "rd32(%s)" % ctx.img_literal(v)
        return re.sub(r"rd32\(\(uint32_t\)\((\d+|0x[0-9a-fA-F]+)u?\)\)", sub, expr)

    # ---- the registers the caller reads back, replayed from the body's effect-free tail
    #
    # The prefix replay covers the opening of the body and stops at the first store/call/branch it cannot
    # express; anything the entry does to eax/edx after that is invisible to the caller, and Ghidra's
    # prototype - which says `void` for half the image - is not the source for it. gen_model.tail_reg_writes
    # returns the writes that happen AFTER the body's last store or call, in a straight-line run to the
    # `ret`, where re-reading a global at return time is the same read because nothing can have written it.
    # Measured: 188 of the 526 register failures are that shape; the other 338 are left to fail loudly
    # rather than be filled with a value whose read the lift cannot place.
    epi_regs = []
    body_sets_eax = "g->eax = (CowU32)(" in func          # the body produced a return value itself
    for reg, expr in (m.get("tail_writes") or []):
        if reg == "eax" and body_sets_eax:
            continue
        if not expr or expr == "g->%s" % reg:
            continue
        epi_regs.append('    g->%s = (CowU32)(%s);   /* the entry left %s here on its way to the ret */'
                        % (reg, image_loads(expr), reg))

    # ---- the same two registers, when the tail rule above had nothing to say (ret_model.py)
    #
    # tail_reg_writes replays a straight-line, effect-free tail. That leaves the entries where the value was
    # put in the register EARLY and survived to every `ret`: `mov al,1` before the last store (0x10099430,
    # which Ghidra renders `void`), an argument loaded into edx at the top, a constant. ret_model walks the
    # entry's own branches and says what the register holds at each `ret`; it is emitted only when every
    # `ret` agrees and the value is one the adapter can name without re-reading memory: a constant, an
    # argument (the adapter read it at entry, before the body ran), or - for a partial write - g-><reg>
    # itself with the low bits the guest wrote. Anything else is left to fail loudly, as before.
    if not os.environ.get("COW_LIFT_NO_RET_MODEL"):
        import ret_model
        _names = {}
        for _i in range(1, nparams + 1):
            if _i - 1 < len(reg_order):
                _names[("entry", reg_order[_i - 1])] = "param_%d" % _i
            elif ptype(_i) not in ("float", "double") and not bound_slots.get(_i):
                _names[("arg", _i - 1 - len(reg_order))] = "param_%d" % _i

        def _named(v):
            if v is None:
                return None
            if v[0] == "const":
                return "0x%xu" % v[1]
            return _names.get(v)

        for _reg in ("eax", "edx"):
            if re.search(r"\bg->%s\s*=(?!=)" % _reg, func):
                continue                              # the body speaks for this register itself
            _v = ret_model.uniform(m["ins"], _reg)
            if _v is None:
                continue
            _theirs = [ln for ln in epi_regs if ln.lstrip().startswith("g->%s =" % _reg)]
            if _theirs and _v[0] != "part":
                continue                              # the tail rule already said it, whole
            if _theirs:
                # the tail rule replayed `mov al,1` as a write of the WHOLE register (0x10099430): it reads
                # the expression and not the width. The width is the one thing this model adds, so it wins.
                if _v[3] is None or _v[2] not in (0xFF, 0xFFFF) or not (
                        _v[1][0] == "call" or _v[1] == ("entry", _reg) or _named(_v[1]) is not None):
                    continue
                epi_regs = [ln for ln in epi_regs if ln not in _theirs]
            if _v[0] == "part":
                if _v[3] is None or _v[2] not in (0xFF, 0xFFFF):
                    continue
                _base = _v[1]
                if _base[0] == "call" or _base == ("entry", _reg):
                    _b = "g->%s" % _reg
                else:
                    _b = _named(_base)
                if _b is None:
                    continue
                epi_regs.append("    g->%s = (CowU32)((%s & 0x%xu) | 0x%xu);   /* the entry wrote only the low "
                                "part of %s; the rest is what was there */"
                                % (_reg, _b, 0xFFFFFFFF ^ _v[2], _v[3], _reg))
            else:
                _b = _named(_v)
                if _b is None:
                    continue
                epi_regs.append("    g->%s = (CowU32)(%s);   /* what %s holds at every ret of the entry */"
                                % (_reg, _b, _reg))

    # The pushes the prologue ACTUALLY emitted: the scan's list, plus whatever the model says was
    # pushed above the point the scan stopped. The banner used to print the model's list while the
    # code emitted this one, which is how the disagreement stayed invisible for so long.
    emitted_pushes = list(pushed) + list(m["pushes"][len(pushed):])
    pop_list = list(m["pops"])
    widened_from = None
    if MATCH_PUSHES and not tail and not intra_used:
        # `intra_used` is excluded deliberately: the inline tail path pops a list gen_model admitted
        # separately, so completing only the epilogue would leave the two paths disagreeing about the
        # same frame - the bug this change exists to remove, reintroduced on the other path. Fixing
        # both at once is the follow-up; until then the rule declines.
        _full = complete_pops(emitted_pushes, m["pops"], func,
                              bool(m["frame_pointer"]), bool(m["leave"]))
        if _full is not None and _full != pop_list:
            pop_list = _full
            widened_from = emitted_pushes

    # ---- frame symmetry: a pop with no matching push in OUR prologue restores nothing we saved.
    # Emitted pushes are the authority for what the frame actually holds; the model's pop list is not,
    # because the walk reads the guest's `pop` wherever it sat, including one whose save was an argument
    # push in the middle of the body that this file does not reproduce as a save.
    symmetry_dropped = []
    if FRAME_SYMMETRY and not tail and not intra_used:
        _kept, _dropped = [], []
        for r in pop_list:
            if r in emitted_pushes or r not in gen_model.SAVED_REGS:
                _kept.append(r)
                continue
            if _ours_writes(func, r):
                # refusing is the honest answer: hoisting the guest's mid-body push to the prologue would
                # shift esp under every call in the body, and the bridges read g->esp at call time
                return None, "frame_asymmetry_unrestored_%s" % r
            _dropped.append(r)
        if _dropped:
            pop_list = _kept
            symmetry_dropped = _dropped

    epi = []
    for r in pop_list:
        epi.append(pop_stmt(r))          # the SAME statement an inline tail pop emits - see pop_stmt
    if m["leave"]:
        epi.append("    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */")
    # after the pops, because a `pop ebx` IS the guest's last write to ebx: materialising before it would
    # undo the restore the caller is entitled to see
    epi.extend(epi_regs)

    # ---- the callee-saved registers the entry provably hands back as it got them (ret_model.py, THE STACK)
    #
    # The pops above are matched by pattern, and a pattern has edges: `pop edi; mov al,1; pop esi; ret`
    # (0x10098f50) shows the matcher one pop, the prologue replays two pushes, and esi comes back holding
    # edi's save. ret_model follows what the entry pushed and popped along its own branches. Where it
    # proves a register holds its entry value at EVERY ret, the adapter says exactly that, last. Only for a
    # register this unit writes at all; a register nothing here touches needs no line.
    if not tail and not os.environ.get("COW_LIFT_NO_RET_MODEL"):
        _all = "\n".join(pro) + "\n" + "\n".join(epi) + "\n" + func
        _back = []
        for _reg in ("ebx", "esi", "edi", "ebp"):
            if not re.search(r"\bg->%s\s*(?:[-+|&^*]|<<|>>)?=(?!=)" % _reg, _all):
                continue
            if ret_model.uniform(m["ins"], _reg) == ("entry", _reg):
                _back.append(_reg)
        for _reg in reversed(_back):
            pro.insert(0, "    const CowU32 cow_in_%s = g->%s;   /* %s as the entry was called with */"
                       % (_reg, _reg, _reg))
        for _reg in _back:
            epi.append("    g->%s = cow_in_%s;   /* every ret of the entry hands %s back as it got it */"
                       % (_reg, _reg, _reg))

    # purge is None when the body has no `ret` at all, which is exactly the tail-call case. Printing
    # "cleanup 0 bytes / ret 0" there would describe a return this entry does not have, so the tail shape
    # says so plainly instead - a comment in a machine-generated file is a claim, and a wrong one is worse
    # than a missing one.
    if tail:
        conv = "%s%d parameter(s), no return (tail call)" % (
            "thiscall/fastcall(" + "+".join(m["reg_args"]) + "), " if m["reg_args"] else "",
            nparams)
        frame = "%d push(es) [%s], frame pointer %s, %d locals, no pops, no ret - ends in jmp 0x%08x" % (
            len(m["pushes"]), ", ".join(m["pushes"]) or "-", "yes" if m["frame_pointer"] else "no",
            m["locals"], tail["target"])
    else:
        conv = "%s%s, %d parameter(s), cleanup %d bytes" % (
            "thiscall/fastcall(" + "+".join(m["reg_args"]) + "), " if m["reg_args"] else "",
            "stdcall" if m["purge"] else "cdecl", nparams, m["purge"])
        # When the epilogue was completed, the banner has to describe the code that is really there:
        # both the push list and the pop list printed here are the emitted ones, not the model's.
        # When nothing was widened, the model's lists are printed exactly as before.
        _bp = widened_from if widened_from is not None else m["pushes"]
        _bo = pop_list if widened_from is not None else m["pops"]
        frame = "%d push(es) [%s], frame pointer %s, %d locals, pops [%s], ret %d%s" % (
            len(_bp), ", ".join(_bp) or "-", "yes" if m["frame_pointer"] else "no",
            m["locals"], ", ".join(_bo) or "-", m["purge"],
            "; epilogue completed from the pushes the prologue emitted"
            if widened_from is not None else "")
    argsrc = "%d register argument(s) [%s], %d stack word(s)" % (
        len(m["reg_args"]), ", ".join(m["reg_args"]) or "-", max(0, nparams - len(m["reg_args"])))
    # the banner is written here, after `frame` exists for BOTH adapter shapes - appending it inside the
    # rule raised UnboundLocalError on the first unit that dropped a pop
    if symmetry_dropped:
        frame = "%s; %d pop(s) dropped as unpaired (%s)" % (
            frame, len(symmetry_dropped), ", ".join(symmetry_dropped))

    # the width model runs on the BODY only. The adapter's prologue and epilogue assign g->regs to
    # marshal the guest frame and must keep whole-register semantics, which is why this cannot be applied
    # to the assembled file.
    if part_seq and any(k != "full" for k in part_seq.get("eax", ())) \
            and not os.environ.get("COW_LIFT_NO_RET_MODEL"):
        # eax first, and by a different rule: its assignments are the body's `return`s, and which guest
        # write a return corresponds to is a question about PATHS, not positions (ret_model.py).
        _stack_names = {}
        for _i in range(1, nparams + 1):
            if _i - 1 >= len(reg_order) and ptype(_i) not in ("float", "double") and not bound_slots.get(_i):
                _stack_names[_i - 1 - len(reg_order)] = "param_%d" % _i
        _reg_names = {reg_order[_i - 1]: "param_%d" % _i for _i in range(1, min(nparams, len(reg_order)) + 1)}
        _func = apply_return_widths(func, m["ins"], _stack_names, _reg_names)
        if _func is not None:
            func = _func
            part_seq = {r: k for r, k in part_seq.items() if r != "eax"}
    if part_seq:
        func, why = apply_partial_widths(func, part_seq)
        if why:
            return None, why

    text = HEADER.format(addr=addr, short=short, ghidra=ctx.ghidra_ver)
    text += "\n" + func + "\n"
    for _lname, (_loff, _lwidth) in sorted(bound_locals.items()):
        # computed in the ADAPTER, where sp0 is in scope and before the prologue moves esp: the slot is a
        # constant offset from the entry's own frame, which is exactly what the witness said
        argdecls.append("    CowU32 slot_%s = (CowU32)(sp0 %s 0x%xu);   /* bound: the guest slot */"
                        % (_lname, "-" if _loff < 0 else "+", abs(_loff)))
        argnames.append("slot_%s" % _lname)
    arglist = ", ".join(argnames)
    if tail:
        # Ghidra is entitled to render a tail call however it likes, and if it did NOT emit the call to the
        # target then the lifted body simply returns without becoming it - a unit that skips the whole
        # computation the caller is waiting for. Refuse rather than ship that.
        if not tail.get("used"):
            return None, "tail_jump_not_in_ghidra"
        # THE TAIL EPILOGUE. The guest's own saves come back off the stack immediately above the `jmp`
        # (see gen_model._pops_above_final_jump, which admits the list only when it closes against the
        # leading pushes). Those pop instructions ran BEFORE the jump, and the jump is the bridge call
        # INSIDE the body - so the pops belong there, the same way an intra-body tail pop does, and not
        # in the adapter where this file used to claim there was no epilogue at all.
        tail_epi = []
        if TAIL_EPILOGUE and pop_list:
            pat = re.compile(r"([ \t]*)cow_bridge_tail_%x\([^;]*\);" % tail["target"])
            hits = list(pat.finditer(text))
            if len(hits) != 1:
                # one call site or nothing. Silently shipping a body that restores on some paths and
                # not on the one that leaves the function is the exact defect class this came from.
                return None, "tail_epilogue_call_site_%d" % len(hits)
            found = hits[0]
            ind = found.group(1)
            pre = "".join(pop_stmt(r, ind) + "\n" for r in pop_list)
            # re-insert the matched statement VERBATIM: dropping it deletes the tail call and
            # ships a unit that returns without jumping anywhere (lift_tail_epilogue_check.py
            # is what saw it the first time)
            text = text[:found.start()] + pre + found.group(0) + text[found.end():]
            tail_epi = list(pop_list)
            # and the banner must stop saying "no pops" about a frame whose pops are right there
            # in the body - asserted, because a reworded template would make this a silent no-op
            _b = frame
            frame = frame.replace("no pops,", "pops [%s] in the body above," % ", ".join(tail_epi))
            if "in the body above" not in frame:
                return None, "tail_banner_phrase_missing:%s" % _b[:40]
        note = ("    /* no epilogue: the target's own `ret` returned for this entry, popping OUR CALLER's "
                "return-address\n       slot. eax is whatever it left there, and esp is where it left "
                "it. */")
        if tail_epi:
            note = ("    /* the guest's epilogue on this path - pop %s - ran in the BODY above, just\n"
                    "       before the tail jump, restoring the saves this entry made; the target's own\n"
                    "       `ret` then returned for this entry, so nothing is left to run here. */"
                    % ", ".join(tail_epi))
            frame = "%s; tail epilogue pops [%s] emitted in the body above the tail bridge" % (
                frame, ", ".join(tail_epi))
        text += TAIL_ADAPTER_TMPL.format(short=short, conv=conv, frame=frame, argsrc=argsrc,
                                         prologue="\n".join(pro), argdecls="\n".join(argdecls),
                                         argprefix=(", " + arglist) if arglist else "",
                                         epilogue_note=note, tgt=tail["target"],
                                         epilogue_claim=(
                                             "; the frame's own pops run in the body just above, before the jump."
                                             if tail_epi else
                                             ", so the frame has no epilogue."))
    else:
        if intra_used:
            call = INTRA_CALL_TMPL.format(
                short=short, argprefix=(", " + arglist) if arglist else "",
                n=len(intra_used),
                sites=", ".join("0x%08x -> jmp 0x%08x%s"
                                % (a, t, (" (pops %s)" % "+".join(p)) if p else "")
                                for t, a, p in intra_used))
        else:
            call = "    cow_lift_%s(g%s);" % (short, (", " + arglist) if arglist else "")
        text += ADAPTER_TMPL.format(short=short, conv=conv, frame=frame, argsrc=argsrc,
                                    prologue="\n".join(pro), argdecls="\n".join(argdecls),
                                    call=call,
                                    epilogue="\n".join(epi),
                                    ret=ret, purge=m["purge"])
    if m.get("unreproduced_saves", m["extra_pushes"]):
        text += ("\n/* NOTE(machine): this entry also pushes %d word(s) in the middle of its body that "
                 "Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff "
                 "is what says whether it mattered. */\n" % m.get("unreproduced_saves", m["extra_pushes"]))
    if bound_slots:
        # Bridge argument lists are rendered LATER than the body substitution above, so a value passed to
        # guest code can still be a bare `param_i` - which after binding is the SLOT, not the argument.
        # f_10072ed0 shipped that bug until the accounting guard refused it:
        #   (const CowU32[]){ param_2, 7, 0x766d6164 }       <- the callee must receive the VALUE
        # Only bridge statements are value-passing sites: the adapter's own `cow_lift_x(g, param_1, ...)`
        # and the formal list must keep the bare name, because the body's formal is meant to hold the slot.
        # The sentinel stops an already-rewritten rd32((uint32_t)param_i) from being wrapped twice.
        def _fix_bridge_args(stmt):
            s = stmt
            for _bi in sorted(bound_slots):
                s = s.replace("rd32((uint32_t)param_%d)" % _bi, "\x00%d\x00" % _bi)
            for _bi in sorted(bound_slots):
                s = re.sub(r"(?<![&\w])\bparam_%d\b" % _bi, "rd32((uint32_t)param_%d)" % _bi, s)
            for _bi in sorted(bound_slots):
                s = s.replace("\x00%d\x00" % _bi, "rd32((uint32_t)param_%d)" % _bi)
            return s

        text = re.sub(r"cow_bridge(?:_tail|_call|_indirect)?_[0-9a-fA-F]{8}\([^;]*\);",
                      lambda mm: _fix_bridge_args(mm.group(0)), text)
    if bound_locals:
        # ACCOUNTING again: after removing the declaration and converting the two spellings this cut knows,
        # the variable's name must appear NOWHERE. Anything left is a use the conversion cannot express
        # (rvalue, subscript, arithmetic) and shipping it would leave a host read or write beside the guest
        # one - two answers to the same question, and only one of them is compared.
        for _lname in sorted(bound_locals):
            _lscan = text
            for _ln in [x for x in _lscan.splitlines()
                        if ("slot_%s = (CowU32)" % _lname) in x
                        or x.strip().startswith("void cow_lift_")]:
                _lscan = _lscan.replace(_ln, "")
            _lscan = re.sub(r"\bslot_%s\b" % re.escape(_lname), "", _lscan)
            # A declaration whose declared entity is a CALL is not C, and it is what the out-of-order
            # rewrite produced. The name-only check below cannot see it (the name became an expression), so
            # a guard that only looks for its own expected leftover passes on unexpected damage - which is
            # how a unit with invalid C in it got counted as "newly liftable".
            _lbad = re.search(r"[A-Za-z_][A-Za-z0-9_]*\s+\**\s*(?:rd|wr)(?:8|16|32|64)\s*\(", _lscan)
            if _lbad:
                _lfull = [x for x in _lscan.splitlines() if _lbad.group(0) in x]
                ctx.bound_unaccounted = ("declaration-of-an-expression: %s"
                                         % ((_lfull[0].strip() if _lfull else _lbad.group(0))[:160]))
                return None, "local_bound_declaration_mangled"
            if re.search(r"\b%s\b" % re.escape(_lname), _lscan):
                _lm = re.search(r".*\b%s\b.*" % re.escape(_lname), _lscan)
                ctx.bound_unaccounted = ("%s: %s" % (_lname, (_lm.group(0).strip() if _lm else "?")))
                return None, "local_bound_use_unaccounted"

    if bound_slots:
        # A BOUND PARAM MUST NEVER END UP ON THE LEFT OF AN ASSIGNMENT. The shape is
        #   (((uint64_t)(rd32((uint32_t)param_1)) << 16) & 0xffffu) = 0;
        # which is not Ghidra's text: apply_partial_widths() builds it at line ~1416, after the binding
        # substituted, from the generated body's partial register writes. It is an assignment whose
        # left-hand side is not an l-value (C2106 - it took 0x10204683 and 0x10204793 to find it), and the
        # syntax gate moves the file, but the gate is the last line of defence, not the design. Checked here,
        # on the assembled text, for the same reason the mangled-declaration guard is: a predicate that runs
        # before the damage exists cannot see the damage.
        for _bi in sorted(bound_slots):
            _pscan = text
            for _ln in [x for x in _pscan.splitlines()
                        if ("param_%d = (CowU32)" % _bi) in x
                        or x.strip().startswith("void cow_lift_")]:
                _pscan = _pscan.replace(_ln, "")
            if _name_in_lvalue(_pscan, "param_%d" % _bi):
                _pline = [x for x in _pscan.splitlines() if _name_in_lvalue(x, "param_%d" % _bi)]
                ctx.bound_unaccounted = ("param_%d on the left of an assignment: %s"
                                         % (_bi, (_pline[0].strip() if _pline else "?")))
                return None, "param_bound_lvalue_position"

        # anything else. A bound parameter is an address now; a value-use the accounting cannot name is the
        # silent "stored an address where the guest stored a value" bug, and cowdiff - not this file's own
        # optimism - is supposed to be the only thing that can say a unit is real.
        for _bi in sorted(bound_slots):
            _scan = text
            for _ln in [x for x in _scan.splitlines()
                        if ("param_%d = (CowU32)" % _bi) in x or x.strip().startswith("void cow_lift_")]:
                _scan = _scan.replace(_ln, "")
            _scan = re.sub(r"rd32\(\(uint32_t\)param_%d\)" % _bi, "", _scan)
            _scan = re.sub(r"cow_lift_[0-9a-f]{8}\([^)]*\)",
                           lambda mm, _b=_bi: re.sub(r"\bparam_%d\b" % _b, "", mm.group(0)), _scan)
            if re.search(r"\bparam_%d\b" % _bi, _scan):
                # the reason stays a stable histogram key; the line rides on ctx so --verbose can show
                # WHICH use the accounting could not name (a refusal nobody can investigate is a dead end)
                _mm2 = re.search(r".*\bparam_%d\b.*" % _bi, _scan)
                ctx.bound_unaccounted = ("param_%d: %s" % (_bi, (_mm2.group(0).strip() if _mm2 else "?")))
                return None, "param_bound_use_unaccounted"

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
        self.dump_pre_bind = None   # set by --dump-pre-bind in _main; None everywhere else
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

    # The image's runtime range, for the one question the layout table answers about a NUMBER: is this
    # dword a guest address we should name, or a value the entry computed? (ghidra_c's rewriter carries the
    # same pair as its own defaults; they have to agree, or a load is a macro on one side and a literal on
    # the other.)
    image_lo = 0x10000000
    image_hi = 0x10C15000

    def img_literal(self, va):
        key = "0x%x" % (va if isinstance(va, int) else int(va, 16))
        name = self.layout.get(key)
        if not name:
            name = "COW_ADDR_LIFT_%s" % key[2:].upper()
            self.layout[key] = name
        return "COW_IMG(%s)" % name


_UNAFF_TOK = re.compile(r"\b(?:unaff|in)_([A-Za-z]\w*)\b")
_GPR = {"EAX", "ECX", "EDX", "EBX", "ESP", "EBP", "ESI", "EDI"}


def _unaff_all_gpr(c):
    """True when EVERY unaff_/in_ token in Ghidra's C names one of the eight GPRs.

    The gate exists because the family is not one thing. unaff_EBP is Ghidra failing to bind a register the
    adapter tracks; unaff_retaddr is the return address, which is [esp+..] and NOT a register - binding it to
    g->ebp would reproduce the exact off-by-one-frame bug the frame work keeps meeting; and in_ST/in_FPUS are
    x87 state that belongs to its own family. Admitting the whole prefix would have smuggled all three past
    the classifier, so a single non-GPR token keeps the unit refused exactly as before.
    """
    toks = _UNAFF_TOK.findall(c or "")
    return bool(toks) and all(t.upper() in _GPR for t in toks)


def _bind_unaffected_regs(newbody, ins):
    """Replace unaff_<REG> uses with g-><reg>, but only where the generated body never writes that register.

    `unaff_EBP` means "unaffected here" - Ghidra knows nothing wrote it but cannot name the value. If the
    GENERATED body also never writes it, then g->ebp still holds what the entry arrived with, which is the
    value the guest used: the two sources agree, and the substitution is not a guess. If the body does write
    it, Ghidra's "unaffected" claim is contradicted by the authority and the unit refuses with the original
    reason - which is why the check is on the body's writes and not on Ghidra's adjective.

    The declaration is dropped rather than rewritten: `int g->ebp;` is not C, and leaving the declaration
    alone would emit an unused local that the reader (and the syntax gate) has to make sense of.
    """
    regs = {t.upper() for t in _UNAFF_TOK.findall(newbody or "")}
    if not regs:
        return newbody, ""
    written = set()
    for c_ in ins:
        if gen_model._writes_reg(c_["mnem"], c_["op"] or ""):
            d = gen_model._dst_reg(c_["op"] or "")
            if d:
                written.add(d.upper())
    if any(r not in _GPR or r in written for r in regs):
        return newbody, "unresolved_register_or_overlay"
    out = newbody
    for r in regs:
        # NB the token in the declaration is `unaff_EBP`, not `EBP`. The first version matched the bare
        # register name, so nothing was deleted, the use-substitution below then rewrote the declaration's own
        # identifier, and the unit shipped `int g->ebp;` - which the syntax gate rejected (all 95 of them).
        # That is the gate earning its keep: a wrong substitution here is a compile error, not a wrong answer.
        out = re.sub(r"^\s*(?:(?:unsigned|signed|register|const)\s+)*"
                     r"(?:int|uint\d*_t|undefined\d|char|short|long|bool)\s+(?:unaff|in)_%s\s*;\s*$" % r,
                     "", out, flags=re.M)
        out = re.sub(r"\b(?:unaff|in)_%s\b" % r, "g->%s" % r.lower(), out)
    return out, ""


def _witness_slot(pi, addressed, wit_regs, pushed_first_site):
    """The sp0-relative slot for `&param_<pi>` WITNESSED by the guest, or None.

    `wit_regs` maps a register to the set of offsets its prefix `lea reg,[esp+-const]` resolves to (from
    gen_model.prefix_lea_slots); `pushed_first_site` is the first call site's pushed word list. The
    conditions are deliberately strict - one addressed parameter, one witnessed pushed register, one
    offset, and >= 4 - because the alternative is the silent wrong-slot bug the witness exists to avoid.
    A slot below sp0 is a LOCAL: this function must not name it, because the local half needs
    keep-alive as well (f_10316337) and is not this mechanism.
    """
    if len(addressed) != 1 or pi not in addressed:
        return None
    cands = sorted({r for r in (pushed_first_site or [])
                    if r in wit_regs and len(wit_regs[r]) == 1})
    if len(cands) != 1:
        return None
    off = next(iter(wit_regs[cands[0]]))
    return off if off >= 4 else None


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
    # goto/labels no longer refuse (Phase B, 2026-11-06). The old rule said structuring is a human's job,
    # and for a hand conversion that is exactly right - a unit with gotos in it is not a reading. But a
    # lift is not a reading either and its own header says so; what makes a lifted file trustworthy is that
    # cowdiff finds side B behaving like the generated original, not whether the decompiler found a loop.
    # Refusing these cost 1,451 provable functions to defend a style rule that does not apply to machine
    # output, so the body is emitted inside the COW_LIFTED exempt region instead - the same exemption the
    # adapter block has, for the same reason: it is generated guest translation, not a human's argument.
    # switch no longer refuses, for the same reason goto stopped refusing (see just above): the decompiler
    # printing a jump table instead of a chain of ifs is a fact about ITS structuring pass, not about the
    # guest's behaviour. Ghidra emits an ordinary C `switch` with the case labels it recovered, the body is
    # compiled inside the COW_LIFTED exempt region, and cowdiff still decides. What remains refused is what
    # the machine genuinely cannot express - and a switch is not that.
    if EXOTIC_RE.search(c):
        return False, "exotic_runtime"
    # `code *param_4` in a signature used to refuse the whole entry, which confused two different things:
    # what the decompiler CALLED a pointer, and whether the guest's call through it can be reproduced. The
    # second is the only one that matters, and emit() answers it per call site from the generated body -
    # `call ebx` with a known ebx converts, `call dword ptr [eax*4+...]` still books
    # indirect_call_not_modelled. Nothing ships that the harness has not been allowed to judge.
    if re.search(r"\b(?:_Overlay\b|__x86\.)", c) or (
            re.search(r"\bunaff_\w+", c)
            and not (os.environ.get("COW_LIFT_UNAFF_REG") and _unaff_all_gpr(c))):
        return False, "unresolved_register_or_overlay"
    if re.search(r"\bin_ST\d\b|\bin_[A-Z]{2,4}\b", c):
        return False, "unbound_register"
    if c.count("{") != c.count("}"):
        return False, "unbalanced_braces"
    if len(c) > 60000:
        return False, "too_large"
    return True, ""


# ------------------------------------------------- partial-register widths in the emitted body

# how a width the guest used turns into a merge with the bits it left alone
_PARTIAL_MASK = {"low8": (0xffffff00, 0xff, 0),
                 "high8": (0xffff00ff, 0xff, 8),
                 "low16": (0xffff0000, 0xffff, 0)}

_REG_ASSIGN = re.compile(r"\bg->(eax|ecx|edx|ebx|esi|edi|ebp)\s*=(?!=)\s*([^;]+);")


def apply_partial_widths(text, seq):
    """Rewrite whole-register assignments back to the width the guest actually wrote.

    Ghidra says ``eax = uVar1;`` for what the guest did as ``mov ax,imm``; the generated body knows it was
    16 bits. The alignment is by POSITION: the k-th write to R in the generated instruction list is the
    k-th assignment to ``g->R`` in the emitted C. That is a strong assumption, so it is checked rather
    than trusted - if the counts disagree for any register this body writes partially, nothing is rewritten
    and the caller refuses the unit with the reason it used before the model existed. A wrong mask is a
    silent wrong answer, and a refusal is not.

    Returns ``(text, reason)``; reason is "" when the rewrite was established.
    """
    if not seq:
        return text, ""
    counters = {}

    def repl(m):
        reg, expr = m.group(1), m.group(2).strip()
        i = counters.get(reg, 0)
        counters[reg] = i + 1
        kinds = seq.get(reg)
        if not kinds or i >= len(kinds) or kinds[i] == "full":
            return m.group(0)
        keep, val, shift = _PARTIAL_MASK[kinds[i]]
        # don't stack a second cast on the expression the lift already cast - the merged line is read by
        # people, and `(CowU32)((CowU32)(uVar1))` is noise that hides what the mask is doing
        operand = expr if expr.startswith("(CowU32)") else "(CowU32)(%s)" % expr
        moved = "(%s & 0x%xu)" % (operand, val)
        if shift:
            moved = "((%s & 0x%xu) << %d)" % (operand, val, shift)
        return "g->%s = (CowU32)((g->%s & 0x%xu) | %s);" % (reg, reg, keep, moved)

    new = _REG_ASSIGN.sub(repl, text)
    for reg, kinds in seq.items():
        if any(k != "full" for k in kinds) and counters.get(reg, 0) != len(kinds):
            # THIS is the refusal the COW_LIFT_ALLOW_PARTIAL knob was always meant to gate, and never did:
            # the knob used to sit on a `pass` statement next to an unconditional refusal, so the family was
            # "priced at 40/120" through something that changed nothing. The count here is what the parked
            # note describes - Ghidra flattened k writes to fewer (often zero) assignments, so the k-th
            # write cannot be matched to the k-th assignment and the mask cannot be trusted.
            #
            # Releasing it is only ever a MEASUREMENT: the unit then has a register that is never written at
            # all, and the only thing that can still save it is the adapter epilogue (gen_model
            # .tail_reg_writes, widened today), which reconstructs the return register from the GENERATED
            # body rather than from Ghidra. That interaction is the open question this knob exists to answer;
            # that interaction was left as an open question, and the family was parked on it. The DECISION
            # COMMENT below is what the measurement said; it is what ships.
            # DEFAULT IS TO EMIT, and that is a measured decision rather than a preference. This refusal was
            # the default and COW_LIFT_ALLOW_PARTIAL an opt-in - the shape the dead knob wore, gating a
            # `pass` next to an unconditional refusal. Once the knob was actually wired up, the whole-tree run
            # it unlocked released 2,797 units past the existing population and a seeded random 150-unit
            # sample through lift_proof passed 48: 32.0%, the best rate of any candidate measured in this
            # repo (the three g->reg fallbacks were 10% and 8.6%; the global-load rule released 5). The
            # failures do carry the signature the parked note predicted - of 102: eax 45, memory 25, fault
            # 15, edx 9, callee-saved 6, the register left at its entry value - and that note was right about
            # two thirds of the set and wrongly applied to all of it, which is why the family sat PARKED
            # while it was the largest thing available. Cowdiff decides per unit, which is the arbiter this
            # loop already books against; a released unit that fails proof joins the lifted-but-failing
            # backlog the tree already carries (7,751 lifted / 5,431 proven) and books nothing.
            #
            # To reproduce the old refusal for a measurement, set COW_LIFT_REFUSE_PARTIAL=1. Never set it for
            # a run whose files are kept: prune deletes whatever the run did not emit, so the whole family
            # would silently vanish from src/lifted.
            if os.environ.get("COW_LIFT_REFUSE_PARTIAL"):
                return text, "partial_register_write_" + ",".join(sorted(
                    r for r, k in seq.items() if any(x != "full" for x in k)))
            break
    return new, ""


_RET_ASSIGN = re.compile(r"g->eax = \(CowU32\)\(([^;]*)\); return;")
_RET_LITERAL = re.compile(r"^\(*\s*(?:\(CowU32\)|\(uint32_t\)|\(int\))?\s*\(*\s*(-?)\s*(0[xX][0-9a-fA-F]+|\d+)[uUlL]*\s*\)*$")


def _ret_literal(expr):
    """The 32-bit value of a return expression that is one integer literal, else None."""
    e = expr.strip()
    if e in ("true", "false"):
        return 1 if e == "true" else 0
    m = _RET_LITERAL.match(e)
    if not m:
        return None
    return ((-1 if m.group(1) else 1) * int(m.group(2), 0)) & 0xFFFFFFFF


def apply_return_widths(func, ins, stack_names, reg_names):
    """Give every `g->eax = (CowU32)(E); return;` the width the guest's own `ret` on that path had.

    ret_model.analyse says, per `ret`, what eax holds there: a whole value, or a base with its low 8/16
    bits overwritten. A whole value is emitted as it always was. A partial one becomes
    `(BASE & ~mask) | (E & mask)`, where BASE is the thing the guest left in the rest of the register:
    g->eax itself when that was the last call's result or the entry's own eax (the body has not written
    g->eax since, exactly as the guest had not), an argument, a constant.

    Which `ret` a given `return` is: when every `ret` asks for the same treatment there is nothing to
    match. Otherwise a literal `return 1;` can only be a `ret` whose value has that constant in the bits
    it wrote, and a non-literal one can be any; the return is rewritten when everything it could be asks
    for the same thing, and when a single return could be two different things the WHOLE function is left
    to the positional rule that was here before (the caller sees None). Nothing is guessed per return.

    Returns the new text, or None when this rule declines (the old rule then runs unchanged).
    """
    import ret_model
    if re.search(r"\bg->eax\s*=(?!=)", _RET_ASSIGN.sub("", func)):
        return None                   # the body assigns g->eax outside a return: position still matters
    rets, why = ret_model.analyse(ins)
    if rets is None or not rets:
        return None
    snapshots = {}

    def treatment(v):
        """("full",) | ("part", base expression, mask) | None when the base cannot be named"""
        if v is None:
            return None
        if v[0] != "part":
            return ("full",)
        base, mask = v[1], v[2]
        if mask not in (0xFF, 0xFFFF):
            return None
        if base[0] == "call" or base == ("entry", "eax"):
            return ("part", "g->eax", mask)
        if base[0] == "const":
            return ("part", "0x%xu" % base[1], mask)
        if base[0] == "arg" and base[1] in stack_names:
            return ("part", "cow_eax_base", mask, stack_names[base[1]])
        if base[0] == "entry" and base[1] in reg_names:
            return ("part", "cow_eax_base", mask, reg_names[base[1]])
        return None

    def could_be(v, lit):
        if lit is None or v is None:
            return True
        if v[0] == "const":
            return v[1] == lit
        if v[0] == "part" and v[3] is not None:
            return (lit & v[2]) == v[3]
        return True

    values = [v for _a, v in rets]
    failed = []

    def repl(m):
        expr = m.group(1)
        lit = _ret_literal(expr)
        ts = set()
        for v in values:
            if could_be(v, lit):
                ts.add(treatment(v))
        if len(ts) != 1 or None in ts:
            failed.append(expr)
            return m.group(0)
        t = ts.pop()
        if t[0] == "full":
            return m.group(0)
        if len(t) == 4:
            snapshots[t[3]] = True
        return "g->eax = (CowU32)((%s & 0x%xu) | ((CowU32)(%s) & 0x%xu)); return;" % (
            t[1], 0xFFFFFFFF ^ t[2], expr, t[2])

    new = _RET_ASSIGN.sub(repl, func)
    if failed or len(snapshots) > 1:
        return None
    if snapshots:
        name = list(snapshots)[0]
        decl = ("    const CowU32 cow_eax_base = (CowU32)(%s);   /* what the guest left in the rest of eax "
                "when it wrote only the low part */\n" % name)
        i = new.find("COW_LIFTED BEGIN")
        i = new.find("*/", i) if i >= 0 else new.find("{")
        if i < 0:
            return None
        j = new.find("\n", i)
        new = new[:j + 1] + decl + new[j + 1:]
    return new


# ------------------------------------------------------------------ the syntax gate

def layout_targets(out_dir):
    """Where THIS run writes the three generated layout files.

    A run into a scratch `--out-dir` is an experiment, and an experiment must not be able to rewrite the
    shared tables that every committed lifted file #includes. `--apply` used to write `layout/`
    unconditionally and to build it from the units in THAT RUN ALONE, so
    `--entries <200 units> --out-dir build/scratch --apply` deleted 203,000 lines of `lifted_addresses.h`,
    `lifted_bridges.c` and `lifted_bridges.h` - the address macros and bridges belonging to the other
    ~5,200 lifted units - and printed nothing about it. Recovered from git before anything was committed.

    The real run keeps writing `layout/`; a scratch run writes its layout beside its own files, and
    `syntax_gate` puts that directory on the include path AHEAD of `layout/` so the scratch units still
    resolve the macros they were just given. A footgun that costs the whole population is not a documentation
    problem; it is a missing parameter, and it is now one.
    """
    if out_dir is None or os.path.normpath(out_dir) == os.path.normpath(LIFT_DIR):
        return ADDR_HDR, BRIDGES_H, BRIDGES_C
    return (os.path.join(out_dir, "lifted_addresses.h"),
            os.path.join(out_dir, "lifted_bridges.h"),
            os.path.join(out_dir, "lifted_bridges.c"))


def _conveyor_owned(path):
    """True for a unit the conveyor wrote (tools/cow/conveyor.py marks its files `COW_OWNER: conveyor`)."""
    try:
        with open(path, encoding="utf-8", errors="replace") as fh:
            return "COW_OWNER: conveyor" in fh.read(1200)
    except OSError:
        return False


def write_layout_files(ctx, addr_hdr, bridges_h, bridges_c):
    """Render this run's layout: the address macros, the bridge declarations and the bridge definitions.

    ONE writer for both destinations. `--apply` sends it to layout/ (or to --out-dir); `--gate-dir` sends it
    to a build/ directory so a measurement run can compile its own bodies against the bridges it just
    invented. Copying these three writes instead of sharing them is how a generated header starts disagreeing
    with itself - the forked-rule defect this repository keeps re-meeting.
    """
    with open(addr_hdr, "w", encoding="utf-8", newline="\n") as fh:
        fh.write("/* layout/lifted_addresses.h - GENERATED by tools/cow/ghidra/lift.py. Do not hand edit:\n"
                 "   every lift run rewrites this whole file from the functions it lifted, so anything\n"
                 "   added here by hand is gone on the next run. It exists so that no src/ file carries\n"
                 "   a raw guest address, which is the rule the readability gate actually checks. */\n"
                 "#ifndef COW_LAYOUT_lifted_addresses_H\n#define COW_LAYOUT_lifted_addresses_H\n\n")
        for va in sorted(ctx.layout, key=lambda x: int(x, 16)):
            fh.write("#define %-46s %su\n" % (ctx.layout[va], va))
        fh.write("\n#endif /* COW_LAYOUT_lifted_addresses_H */\n")
    decls, defs = ctx.bridges.render(ctx.layout)
    with open(bridges_h, "w", encoding="utf-8", newline="\n") as fh:
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
    with open(bridges_c, "w", encoding="utf-8", newline="\n") as fh:
        fh.write("/* layout/lifted_bridges.c - GENERATED by tools/cow/ghidra/lift.py. Do not hand edit.\n"
                 "   layout/ is the one place a bare guest address and a bare f_<hex> symbol may live: a\n"
                 "   bridge is a layout fact (which function, called how), not game logic. */\n"
                 "#include \"cow.h\"\n#include \"lifted_bridges.h\"\n\n")
        for dd in defs:
            fh.write(dd + "\n")


def syntax_gate(written, rejected_dir, out_dir=None):
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
    # The tree under test is the one THIS run wrote, not the constant src/lifted. With LIFT_DIR hardcoded
    # here, `--out-dir scratch` compiled the committed tree and then DELETED from it whatever the compiler
    # disliked - so an experiment could destroy proven units. It did: 28 committed files vanished during a
    # scratch run (recovered from git), because they were judged against scratch-generated layout headers.
    # Same for the deletion path below: refusing a unit must only ever be able to remove the file this run
    # just wrote.
    target = out_dir if out_dir is not None else LIFT_DIR
    files = [os.path.join(target, "cow_%s.c" % e) for e in written]
    # The bridges THIS run wrote, not necessarily the ones in layout/: a scratch run keeps its generated
    # layout beside its own files so it cannot clobber the committed one (see layout_targets).
    bridges_c = layout_targets(out_dir)[2]
    files.append(bridges_c)
    # A scratch run's headers shadow the committed ones, which is the point: the units under test must resolve
    # the macros this run handed them, not the shared set that does not contain them.
    inc_extra = [] if os.path.normpath(target) == os.path.normpath(LIFT_DIR) else ["/I", target]
    for i in range(0, len(files), 150):
        batch = files[i:i + 150]
        cmd = (["cl", "/c", "/Zs", "/nologo", "/O1", "/MT", "/W3", "/std:c11", "/bigobj",
                "/DRT_GUEST_WINDOW",
                "/I", "runtime", "/I", "runtime\\portable", "/I", "generated",
                "/I", "generated\\all", "/I", "layout"] + inc_extra + batch)
        p = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True,
                           encoding="utf-8", errors="replace", env=env)
        text = (p.stdout or "") + "\n" + (p.stderr or "")
        if p.returncode == 0:
            continue
        for m in re.finditer(r"cow_([0-9a-f]{8})\.c(?:\(\d+\))?\s*:\s*(?:fatal\s+)?error\s+(C\d+)\s*:\s*(.*)",
                             text):
            bad.setdefault(m.group(1), []).append((m.group(2), m.group(3).strip()[:100]))
        if not bad:
            # Nothing in this batch matched a `cow_<hex>.c` error, so the failure belongs to a file the
            # regex cannot attribute - a header, or layout/lifted_bridges.c compiled ALONGSIDE a batch
            # that breaks it (it compiles fine on its own, which is exactly how this was misread twice:
            # the message blamed the bridges for whatever the batch actually broke, and "see the errors
            # above" was a lie because the gate captured the output and never printed it). Print the
            # compiler's own lines. A harness that withholds its only diagnostic costs hours, not lines.
            lines = [l.strip()[:200] for l in text.splitlines()
                     if re.search(r"\b(?:error|fatal)\b", l, re.I)]
            who = "layout/lifted_bridges.c" if any("lifted_bridges" in l for l in lines) else "a file the batch shared"
            print("  ! the syntax gate could not attribute %d error line(s) to a unit (%s):"
                  % (len(lines), who))
            for l in lines[:6]:
                print("      " + l)
            if not lines:
                print("      (no error line at all - rc=%d, output follows)" % p.returncode)
                print("      " + text.strip()[:400].replace("\n", "\n      "))
    for e, errs in bad.items():
        # same tree as the compile above - never src/lifted by default when the run wrote elsewhere
        src = os.path.join(ROOT, target, "cow_%s.c" % e)
        if os.path.isfile(src):
            shutil.move(src, os.path.join(rejected_dir, "cow_%s.c" % e))
    # The directory is a PICTURE OF THIS RUN, not a museum. It used to only ever gain files, so a census of
    # "what the lifter rejects" counted rejects from every run since the directory was created - 1,397 files
    # where the current snapshot books 59 does_not_compile units - and confidently priced a model on bodies
    # the current lifter no longer produces. Deleting what this run did not reject is what makes the directory
    # mean something. (A rejected unit's file is never lost: it is regenerated by the next --apply if the
    # lifter still emits it, and git has the ones that were ever shipped.)
    keep_bad = {"cow_%s.c" % e for e in bad}
    stale = 0
    for f in os.listdir(rejected_dir) if os.path.isdir(rejected_dir) else []:
        if re.match(r"cow_[0-9a-fA-F]{6,8}\.c$", f) and f not in keep_bad:
            os.remove(os.path.join(rejected_dir, f))
            stale += 1
    if stale:
        print("  (rejected dir pruned to this run: %d stale file(s) removed)" % stale)
    return bad


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--dump", default=os.environ.get("COW_LIFT_DUMP", "D:/projects/ghidra/ghidra_out/functions_all.jsonl"))
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
    ap.add_argument("--dump-c", default="", help="write emitted bodies for --entries into this build/ dir (read-only mechanism inspection; never ships anything)")
    ap.add_argument("--dump-pre-bind", default="", help="write the body as the local-binding knob sees it, BEFORE it rewrites, into this build/ dir (read-only mechanism inspection; never ships anything)")
    ap.add_argument("--gate-dir", default="", help="write this run's bodies AND its layout into this build/ dir and COMPILE them with the real syntax gate; never touches src/lifted or layout/, so a measurement knob can be priced against a compiler")
    args = ap.parse_args()
    # A measurement knob must not be able to write the tree. Admitting stack provenance without
    # binding the frame produces a body whose string destination is an unnamed address: it compiles,
    # it looks right, and it writes somewhere in the process instead of the guest stack - and cowdiff
    # compares guest memory, so a callee that never reads it back would let the row PASS. Refusing
    # --apply here is the difference between a counting tool and a way to book a wrong unit.
    if os.environ.get("COW_MODEL_LOCAL_BIND_MEASURE") and args.apply:
        sys.exit('REFUSING: COW_MODEL_LOCAL_BIND_MEASURE binds escaping locals to guest-frame slots and'
                 ' rewrites their uses into wr8/wr16/wr32/wr64 at a COMPUTED address. A wrong witness or a'
                 ' wrong width compiles, runs, and corrupts memory cowdiff only notices if an exercised'
                 ' state reads that word - so this knob is report-only until proof has said so per unit.')
    if os.environ.get("COW_MODEL_STR_WITNESS_MEASURE") and args.apply:
        sys.exit('REFUSING: COW_MODEL_STR_WITNESS_MEASURE admits guest-witnessed frame addresses as'
                 ' explained string operands for counting only. The rep bodies it releases have never been'
                 ' judged by cowdiff, so an emitted file would be a bug with a PASS rate attached. Report-'
                 'only is all this knob is for.')
    if os.environ.get("COW_MODEL_PARAM_BIND_MEASURE") and args.apply:
        sys.exit('REFUSING: COW_MODEL_PARAM_BIND_MEASURE binds stack arguments to their guest slot for '
                 'counting only. The binding has never been judged by cowdiff, so emitted bodies would '
                 'ship unproved semantics. Report-only is all this knob is for.')
    if os.environ.get('COW_MODEL_STR_PROV_MEASURE') and args.apply:
        sys.exit('REFUSING: COW_MODEL_STR_PROV_MEASURE admits frame-relative string destinations for counting only. The frame is NOT bound, so emitted bodies would write an unnamed address. Report-only is all this knob is for.')

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


def reserved_addresses():
    """Addresses the loop already owns, read from the tree rather than from the ledger.

    A lifted file defines `cow_adapter_<hex>`, which is the one symbol the whole tree may only define once.
    Everything that already defines it has to be off-limits to the lift: a hand unit under src/ (including
    the parked attempts the ledger calls `failed` but never forgot to leave on disk) and a row of the trivial
    table, whose adapter comes from the shared runner. The ledger's status/name/file columns are a summary of
    that, and a summary that is one empty cell out lets a duplicate symbol into the link.
    """
    out = set()
    src = os.path.join(ROOT, "src")
    for root, _dirs, files in os.walk(src):
        base = os.path.basename(root)
        if base in ("lifted", "tables"):
            continue                       # the lift's own output, and the table's own directory
        for f in files:
            m = re.match(r"cow_([0-9a-fA-F]{6,8})(?:_.*)?\.c$", f)
            if m:
                out.add(m.group(1).lower())
    defpath = os.path.join(src, "tables", "cow_trivial_rows.def")
    if os.path.isfile(defpath):
        with open(defpath, encoding="utf-8", errors="replace") as fh:
            for m in re.finditer(r"COW_TRIVIAL_ROW\(\s*([0-9a-fA-F]{6,8})", fh.read()):
                out.add(m.group(1).lower())
    return out


def _dump_c_dir(opt, label="--dump-c"):
    """Validate a read-only dump directory (--dump-c, --dump-pre-bind). A measurement-only path must
    still be physically unable to ship a body, so the destination has to be inside build/ (gitignored)
    and the run must have named its entries."""
    if not opt:
        return None
    p = os.path.abspath(os.path.join(ROOT, opt))
    build = os.path.abspath(os.path.join(ROOT, "build"))
    if not (p == build or p.startswith(build + os.sep)):
        sys.exit("REFUSING: %s writes %s, which is not inside build/. An unproved emitted body must"
                 " not be able to land where the build or the audit reads - that is what --apply and the"
                 " syntax gate are for." % (label, p))
    os.makedirs(p, exist_ok=True)
    return p


def _main(args):

    ledger = load_ledger()
    reserved = reserved_addresses()
    wanted = {norm(x) for x in args.entries.split(",") if x.strip()} if args.entries else None
    ctx = Ctx(args.dump, args.ghidra)

    stats = Counter()
    dump_dir = _dump_c_dir(args.dump_c)
    ctx.dump_pre_bind = _dump_c_dir(args.dump_pre_bind, "--dump-pre-bind")
    # --gate-dir: the compile verdict for a run that is not allowed to --apply. It is validated by the same
    # build/-only guard as the dumps, and it writes only there - the shipped tree and the shared layout are
    # untouched, so this path cannot book or ship anything.
    gate_dir = _dump_c_dir(args.gate_dir, "--gate-dir") if args.gate_dir else None
    if args.gate_dir and not gate_dir:
        sys.exit("PROBE FAILED: --gate-dir gave an empty validated path")
    gate_texts = {}
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
                if r.get("status") in ("done", "failed", "wip", "in_progress"):
                    stats["skip:hand_unit"] += 1
                    continue
                if (r.get("name") or "").strip():
                    stats["skip:named_already"] += 1
                    continue
                # Phase B says the hand units and the trivial table TAKE PRIORITY over the lift for their
                # addresses - and the ledger alone cannot enforce that. `status=failed` with an empty name
                # and an empty file column is a parked attempt whose .c file is still on disk, so it passed
                # both rules above and the lift wrote src/lifted/cow_100dc050.c beside
                # src/net/cow_100dc050_net_clock_marked_alive.c. Two definitions of cow_adapter_100dc050 is
                # a link error, and not one you see where it was caused: it surfaced as the GATE failing on
                # an unrelated unit (102d8019) with LNK1169. Ownership is therefore read from the tree,
                # which is the thing that actually has to link.
                if a[2:] in reserved:
                    stats["skip:owned_by_hand_or_table"] += 1
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
                # Printed under --verbose exactly like the emit-stage refusals below. This path used
                # to `continue` silently, and a pricing tool that scraped `refuse` lines off stdout
                # then called 83 classify-refused units "emitted": the closing histogram adds them
                # back, but only for someone reading the histogram rather than their own scrape. A
                # refusal that never reaches the stream is a hole the size of the refusal class.
                if args.verbose:
                    print("  refuse %s: %s (classify)" % (a, why))
                continue
            text, why2 = emit(d, ctx)
            if text is None:
                stats["refused:" + why2] += 1
                reasons[a] = why2
                if args.verbose:
                    _note = getattr(ctx, "bound_unaccounted", "")
                    print("  refuse %s: %s%s" % (a, why2, ("   [%s]" % _note) if _note else ""))
                    ctx.bound_unaccounted = ""
                continue
            if dump_dir and text is not None:
                # written straight from emit(), BEFORE the syntax gate and the prune, and outside `written`
                # - this is inspection output under build/, not a shipped file
                with open(os.path.join(dump_dir, "cow_%s.c" % a[2:]), "w",
                          encoding="utf-8", newline="\n") as _out:
                    _out.write(text)
            stats["emitted"] += 1
            stats["lifted"] += 1
            written.append(a[2:])
            if gate_dir:
                gate_texts[a[2:]] = text
            if args.apply and _conveyor_owned(os.path.join(ROOT, args.out_dir, "cow_%s.c" % a[2:])):
                # SYSTEM 2: this file was written by the conveyor and proven gold by judge v2. A re-lift
                # must never replace a proven unit with a draft (docs/cow/SYSTEM2.md).
                stats["kept:conveyor_owned"] += 1
            elif args.apply:
                with open(os.path.join(ROOT, args.out_dir, "cow_%s.c" % a[2:]), "w",
                          encoding="utf-8", newline="\n") as out:
                    out.write(text)
            if args.limit and len(written) >= args.limit:
                break

    # Is this run looking at the whole population? The same test the prune below uses, hoisted so both
    # destructive writes can consult it. Compare against each flag's OWN default, not zero: --max-size
    # defaults to 4000, so a plain whole-tree run would otherwise be called restricted.
    _RESTRICT_DEFAULTS = {"entries": "", "limit": 0, "min_size": 0, "max_size": 4000}
    _restricted = [n for n, d in _RESTRICT_DEFAULTS.items() if getattr(args, n, d) != d]
    write_layout = not _restricted
    if args.apply and _restricted:
        # THE HAZARD, measured the hard way on 2026-11-11: `--apply --entries 0x99999999` (a spot-check
        # that matched nothing) still ran the three writes below, and they regenerate the shared layout
        # FROM THIS RUN's ctx.layout / ctx.bridges. With nothing lifted, layout/lifted_bridges.c went
        # from 6.7 MB to nothing - the callee table every OTHER lifted unit calls through - while a
        # reverify audit was reading those files. The prune already refuses to delete on a restricted
        # run for exactly this reason ('--apply --entries' once deleted 7,751 files); rewriting shared
        # layout from a partial population is the mirror image, and worse, because every lifted file
        # #includes what it writes. Skipping is strictly protective: it can only prevent a write.
        print("NOT WRITING LAYOUT: this run was restricted by --%s, so ctx.layout holds only its own "
              "selection. Rewriting layout/lifted_addresses.h and lifted_bridges.{h,c} from it would "
              "erase the bridges of every unit OUTSIDE the selection - files every lifted unit "
              "#includes. Re-run without a selection to refresh the shared layout, or lift into "
              "--out-dir at a scratch tree." % " --".join(_restricted))
    if args.apply:
        addr_hdr, bridges_h, bridges_c = layout_targets(args.out_dir)
    if args.apply and write_layout:
        write_layout_files(ctx, os.path.join(ROOT, addr_hdr), os.path.join(ROOT, bridges_h),
                           os.path.join(ROOT, bridges_c))

    # ---- prune: src/lifted holds exactly what THIS run proved it could write
    # The lift's output directory is a cache of a whole-tree computation, and a file left behind from an
    # earlier run is not inert: it defines cow_adapter_<hex>, and the bridge table and address header were
    # just regenerated from the current population. A stale file is therefore a unit whose callee bridges no
    # longer exist (LNK2019 across the whole build) or a duplicate adapter (LNK1169) - the same "globbing a
    # cache links ghosts" bug that already bit the .obj directories twice. Deletion is part of writing.
    if args.apply:
        # Pruning deletes, and it is only correct under one invariant: THIS run enumerated the whole
        # population. `--entries` (and `--limit`, `--min-size`, `--max-size`) break that invariant while
        # looking entirely reasonable, and the result is not a smaller run - it is every file outside the
        # selection removed from the tree. Measured the hard way on 2026-11-10: `--apply --entries` with a
        # 500-unit sample reported `pruned_stale 7751` and deleted the entire lifted population, recovered
        # only because it was committed. Refuse rather than discover that again.
        # Compare against each flag's OWN default, not against zero: --max-size defaults to 4000, so a
        # plain whole-tree run would otherwise be called restricted and the prune would never fire.
        _DEFAULTS = {"entries": "", "limit": 0, "min_size": 0, "max_size": 4000}
        restricted = [n for n, d in _DEFAULTS.items()
                      if getattr(args, n, d) != d]
        if restricted:
            print("NOT PRUNING: this run was restricted by --%s, so `written` is not the whole population "
                  "and deleting everything else would empty the output directory. Measured the hard way: "
                  "`--apply --entries` with a 500-unit sample reported pruned_stale 7751. Re-run without a "
                  "selection to prune, or sample with --out-dir at a scratch directory."
                  % " --".join(restricted))
            keep = None          # skip the PRUNE only - see the two lines below
        keep = None if restricted else set(written)
        outdir = os.path.join(ROOT, args.out_dir)
        pruned = 0
        # keep is None for a restricted run: no enumeration of the population, so nothing may be deleted.
        # An earlier version of the guard `return`ed instead, which skipped the syntax gate below as well and
        # would have left non-compiling files in the output directory - found by trying to use this very path
        # for a sampling A/B.
        for f in ([] if keep is None else os.listdir(outdir)):
            m = re.match(r"cow_([0-9a-fA-F]{6,8})\.c$", f)
            if m and m.group(1).lower() not in keep:
                if _conveyor_owned(os.path.join(outdir, f)):
                    continue        # SYSTEM 2: not this tool's file to delete
                os.remove(os.path.join(outdir, f))
                pruned += 1
        if pruned:
            stats["pruned_stale"] = pruned

    # ---- the syntax gate: nothing that does not compile stays in src/
    if args.apply and written:
        bad = syntax_gate(written, os.path.join(ROOT, "build", "lift", "rejected"),
                          out_dir=args.out_dir)
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

    if gate_dir:
        # Compile what the run emitted, against the layout THIS run invented for it. Without the run's own
        # bridges and macros on the include path, every new callee is an unresolved symbol and the verdict
        # measures the harness, not the lift.
        for e, t in gate_texts.items():
            with open(os.path.join(gate_dir, "cow_%s.c" % e), "w", encoding="utf-8", newline="\n") as fh:
                fh.write(t)
        write_layout_files(ctx,
                           os.path.join(gate_dir, "lifted_addresses.h"),
                           os.path.join(gate_dir, "lifted_bridges.h"),
                           os.path.join(gate_dir, "lifted_bridges.c"))
        bad = syntax_gate(list(gate_texts), os.path.join(gate_dir, "rejected"), out_dir=gate_dir)
        for e, errs in bad.items():
            stats["refused:does_not_compile_%s" % errs[0][0]] += 1
            reasons["0x" + e] = "does_not_compile_%s" % errs[0][0]
            if args.verbose:
                print("  no-compile 0x%s: %s %s" % (e, errs[0][0], errs[0][1]))
        # EMITTED AND COMPILED ARE DIFFERENT CLAIMS and only the second one means anything to the build.
        print("  --gate-dir %s: emitted %d, compiled %d, did not compile %d"
              % (args.gate_dir, len(gate_texts), len(gate_texts) - len(bad), len(bad)))

    # Two counts, and they are NOT interchangeable: `emitted` is the bodies this file could translate at all,
    # `lifted` is the ones that also survive the syntax gate. The gate runs only when files are written, so
    # with --apply the two differ (by 1,337 on the 2026-11-06 run) and in report-only mode they are equal.
    # They were printed under one label - "lifted" - and a "+32% population" claim got made by comparing
    # the pre-gate number of one run against the post-gate number of another. `lifted` is the population the
    # proof runs over; if you are comparing two runs, make sure both went through the same gate.
    print("candidates: %d   emitted: %d   lifted: %d%s   (%d bridge(s), %d address macro(s))"
          % (stats["candidates"], stats["emitted"], stats["lifted"],
             "" if args.apply else "  (report only: the syntax gate has not run)",
             len(ctx.bridges.by_target), len(ctx.layout)))
    print("\nby reason:")
    for k, v in stats.most_common():
        if k not in ("candidates", "emitted"):
            print("  %-46s %6d" % (k.replace("refused:", "").replace("skip:", "(skip) "), v))
    if not args.apply:
        print("\n(report only - pass --apply to write)")

    if args.list_out:
        # The population is the FILES, not the list this run accumulated. The syntax gate removes its
        # rejects from `written` and moves the files to build/lift/rejected/, and the two sides disagreed
        # often enough that 23 rejected entries stayed on the list with no file behind them - the proof
        # then spent a chunk booking them `no_adapter`, a verdict about a unit that does not exist.
        # Reading the directory cannot disagree with the thing the build has to compile.
        if args.apply:
            disk = sorted(f[4:-2] for f in os.listdir(os.path.join(ROOT, args.out_dir))
                          if re.match(r"cow_[0-9a-fA-F]{6,8}\.c$", f))
            if len(disk) != len(written):
                print("note: --list-out rebuilt from src/lifted: %d on disk vs %d in this run's list"
                      % (len(disk), len(written)))
            written = disk
        with open(args.list_out, "w", encoding="utf-8") as fh:
            fh.write("\n".join(written) + ("\n" if written else ""))
    if args.reasons_out:
        # this sink used to assume its directory existed, which lost a whole six-minute pass to
        # FileNotFoundError after the histogram had already printed.
        _parent = os.path.dirname(args.reasons_out)
        if _parent:
            os.makedirs(_parent, exist_ok=True)
        with open(args.reasons_out, "w", encoding="utf-8") as fh:
            json.dump(reasons, fh, indent=1, sort_keys=True)
    return 0


if __name__ == "__main__":
    sys.exit(main())
