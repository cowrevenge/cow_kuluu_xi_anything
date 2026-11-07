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
    cow_lift_{short}(g{argprefix});

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
   TAIL CALL: this entry ends in `jmp 0x{tgt:08x}`, not `call`+`ret`, so the frame has no epilogue.
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
    /* no epilogue: the target's own `ret` returned for this entry, popping OUR CALLER's return-address
       slot. eax is whatever it left there, and esp is where it left it. */
}}
/* COW_ADAPTER END */
"""

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
        return None, "indirect_call_not_modelled"
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
        return None, "string_op_not_modelled"
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
    # parameters and image macros and refuses anything reading a Ghidra local, (b) the read-count agreement
    # against target_desc in bridge_indirect, (c) leftover_problems refusing host_call_through_computed_pointer
    # for any callee that ends up unbribged, and (d) the pairing check below. Ask the translator whether it
    # can translate; if it cannot, the unit books the refusal it always booked.
    if m["has_indirect_call"] and not any(
            s.get("target_expr") for s in m["call_sites"] if s["target"] is None) \
            and not any(ghidra_c.Rewriter._callee_read(t)
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
    # table.c is the only way in), so a released unit can only ever be counted once cowdiff agrees. This
    # flag is how the family got priced at 40/120; it must never be set for a run whose files are kept.
    partials = gen_model.partial_reg_writes(m["ins"]) & {"eax", "edx", "ebx", "esi", "edi", "ebp"}
    part_seq = gen_model.partial_write_sequence(m["ins"]) if partials else {}
    if partials and not os.environ.get("COW_LIFT_ALLOW_PARTIAL"):
        # provisional: turned into a real refusal further down if the widths will not align
        pass
    if partials and not part_seq:
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
                        ctx.problems.append("tail_reg_unnameable_%s_at_%x" % (r, tail["addr"]))
                        return None
                    regvals[r] = named
                if not ctx.bridges.note_tail(target, wants_ecx, wants_edx, wants_eax):
                    ctx.problems.append("tail_and_call_same_target_%x" % target)
                    return None
                ctx.tail_bridge = True
                return ("cow_bridge_tail_%x(g, %s, %s, %s)"
                        % (target, regvals["ecx"], regvals["edx"], regvals["eax"]))
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

    # ---- the computation, from Ghidra
    rw = ghidra_c.Rewriter(ctx.layout, bridge=bridge, bridge_indirect=bridge_indirect)
    newbody = rw.rewrite(body, sig)
    problems = rw.problems + ctx.problems + ghidra_c.leftover_problems(newbody)
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
        return t if t in ("float", "double") else "CowU32"

    paramsig = ", ".join(["Guest* g"] + ["%s param_%d" % (ptype(i), i) for i in range(1, nparams + 1)])
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

    epi = []
    for r in m["pops"]:
        epi.append("    { uint32_t v = rd32(g->esp); g->esp += 4u; g->%s = v; } /* pop %s */" % (r, r))
    if m["leave"]:
        epi.append("    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */")
    # after the pops, because a `pop ebx` IS the guest's last write to ebx: materialising before it would
    # undo the restore the caller is entitled to see
    epi.extend(epi_regs)

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
        frame = "%d push(es) [%s], frame pointer %s, %d locals, pops [%s], ret %d" % (
            len(m["pushes"]), ", ".join(m["pushes"]) or "-", "yes" if m["frame_pointer"] else "no",
            m["locals"], ", ".join(m["pops"]) or "-", m["purge"])
    argsrc = "%d register argument(s) [%s], %d stack word(s)" % (
        len(m["reg_args"]), ", ".join(m["reg_args"]) or "-", max(0, nparams - len(m["reg_args"])))

    # the width model runs on the BODY only. The adapter's prologue and epilogue assign g->regs to
    # marshal the guest frame and must keep whole-register semantics, which is why this cannot be applied
    # to the assembled file.
    if part_seq:
        func, why = apply_partial_widths(func, part_seq)
        if why:
            return None, why

    text = HEADER.format(addr=addr, short=short, ghidra=ctx.ghidra_ver)
    text += "\n" + func + "\n"
    arglist = ", ".join(argnames)
    if tail:
        # Ghidra is entitled to render a tail call however it likes, and if it did NOT emit the call to the
        # target then the lifted body simply returns without becoming it - a unit that skips the whole
        # computation the caller is waiting for. Refuse rather than ship that.
        if not tail.get("used"):
            return None, "tail_jump_not_in_ghidra"
        text += TAIL_ADAPTER_TMPL.format(short=short, conv=conv, frame=frame, argsrc=argsrc,
                                         prologue="\n".join(pro), argdecls="\n".join(argdecls),
                                         argprefix=(", " + arglist) if arglist else "",
                                         tgt=tail["target"])
    else:
        text += ADAPTER_TMPL.format(short=short, conv=conv, frame=frame, argsrc=argsrc,
                                    prologue="\n".join(pro), argdecls="\n".join(argdecls),
                                    argprefix=(", " + arglist) if arglist else "",
                                    epilogue="\n".join(epi),
                                    ret=ret, purge=m["purge"])
    if m.get("unreproduced_saves", m["extra_pushes"]):
        text += ("\n/* NOTE(machine): this entry also pushes %d word(s) in the middle of its body that "
                 "Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff "
                 "is what says whether it mattered. */\n" % m.get("unreproduced_saves", m["extra_pushes"]))
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
    if re.search(r"\b(?:unaff_|_Overlay\b|__x86\.)", c):
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
            return text, "partial_register_write_" + ",".join(sorted(
                r for r, k in seq.items() if any(x != "full" for x in k)))
    return new, ""


# ------------------------------------------------------------------ the syntax gate

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


def _main(args):

    ledger = load_ledger()
    reserved = reserved_addresses()
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
                continue
            text, why2 = emit(d, ctx)
            if text is None:
                stats["refused:" + why2] += 1
                reasons[a] = why2
                if args.verbose:
                    print("  refuse %s: %s" % (a, why2))
                continue
            stats["emitted"] += 1
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

    # ---- prune: src/lifted holds exactly what THIS run proved it could write
    # The lift's output directory is a cache of a whole-tree computation, and a file left behind from an
    # earlier run is not inert: it defines cow_adapter_<hex>, and the bridge table and address header were
    # just regenerated from the current population. A stale file is therefore a unit whose callee bridges no
    # longer exist (LNK2019 across the whole build) or a duplicate adapter (LNK1169) - the same "globbing a
    # cache links ghosts" bug that already bit the .obj directories twice. Deletion is part of writing.
    if args.apply:
        keep = set(written)
        outdir = os.path.join(ROOT, args.out_dir)
        pruned = 0
        for f in os.listdir(outdir):
            m = re.match(r"cow_([0-9a-fA-F]{6,8})\.c$", f)
            if m and m.group(1).lower() not in keep:
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

    # Two counts, and they are NOT interchangeable: `emitted` is the bodies lift.py could translate at all,
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
