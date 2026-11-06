"""gen_model.py - the guest-facing facts about an entry, read out of the GENERATED translation.

WHY THIS FILE EXISTS. Ghidra's decompiled C tells us what a function computes and nothing about how it
talks to the guest. It throws away the frame (pushes become locals), the argument convention (pushes
become parameters), the callee's cleanup (`ret 0x10` disappears), and every call site's stack traffic.
A lift that guesses at those produces code that compiles, runs, and is wrong - the worst outcome, because
it looks like a conversion. So the two halves of a lift come from two places:

    semantics   Ghidra's C                        (what the function means)
    plumbing    generated/all/funcs_*.c           (what the guest sees), parsed here

The generated body is the recompiler's own translation of the same bytes, one `/* 10017067: call ... */`
comment per guest instruction, so every fact below is read off instructions known to execute, not inferred
from a decompiler's model of them.

THE FACTS WE EXTRACT
  prologue     the register pushes, `mov ebp,esp`, `sub esp,N`
  args         which of ecx/edx arrive populated (read before written), how many stack words are read
  call sites   target, return address, how many words the entry pushed for it, whether it set ecx first,
               and whether the caller or the callee cleans the arguments
  epilogue     the pops in order, `leave`, and the `ret N` purge (only when every ret agrees)
  shapes       x87 / string ops / indirect calls, which the lift refuses until it can model them
"""
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, os.path.join(ROOT, "tools", "cow"))

INS_RE = re.compile(r"^\s*/\* ([0-9a-f]{8}): (.+?)\s*\*/\s*$")
RETADDR_RE = re.compile(r"wr32\(esp,\s*(0x[0-9a-fA-F]+)u(?:\s*\+\s*RD)?\)")
SUB_ESP_RE = re.compile(r"^esp,\s*(0x[0-9a-fA-F]+|\d+)$")
ADD_ESP_RE = re.compile(r"^esp,\s*(0x[0-9a-fA-F]+|\d+)$")
REG_ARG_ORDER = ("ecx", "edx")
SAVED_REGS = ("ebp", "esi", "edi", "ebx", "eax", "ecx", "edx")
X87_MNEMS = ("fld", "fst", "fstp", "fmul", "fadd", "fsub", "fsubr", "fdiv", "fdivr", "fild", "fist",
             "fistp", "fldcw", "fnstcw", "fchs", "fabs", "fxch", "fcom", "fucom", "fcomi", "fucomi",
             "fsqrt", "fld1", "fldz", "fldpi", "ffree", "fnstsw", "fmulp", "faddp", "fsubp", "fsubrp",
             "fdivp", "fdivrp", "fimul", "fiadd", "fisub", "fidiv", "fyl2x", "fptan", "frndint",
             "fst1", "fcomp", "fucomp", "fxam", "fldlg2", "fldln2")
STR_MNEMS = ("movs", "stos", "scas", "cmps", "rep", "repz", "repnz", "movsd", "movsb", "stosd", "stosb",
             "lodsb", "lodsd", "rep movsd", "rep stosd")
# instructions that may sit INSIDE a prologue without ending it
PROLOGUE_PASSE = ("mov", "and", "or", "xor", "cdq", "lea")


def parse_instructions(body_lines):
    """[{addr, mnem, op, opsp, text, stmt}] - the generated body as a list of guest instructions."""
    ins, cur = [], None
    for ln in body_lines:
        m = INS_RE.match(ln)
        if m:
            if cur:
                ins.append(cur)
            cur = {"addr": int(m.group(1), 16), "text": m.group(2), "stmt": []}
        elif cur is not None:
            cur["stmt"].append(ln)
    if cur:
        ins.append(cur)
    for c in ins:
        c["stmt"] = "\n".join(c["stmt"])
        mnem, _, op = c["text"].partition(" ")
        c["mnem"] = mnem.strip().lower()
        c["op"] = op.strip().lower().replace(" ", "")
        c["opsp"] = op.strip()
    return ins


def _reads_before_write(ins, reg):
    """True when `reg` is used before it is ever assigned.

    REGS_LOAD pulls every register in from the Guest, so a register the body uses without first assigning
    arrived from the caller - which is exactly what a thiscall's `this` looks like. The generated body is
    the authority here precisely because it names the use: Ghidra turns the same thing into `param_1` and
    loses the fact that it came in a register rather than on the stack.
    """
    pat_read = re.compile(r"\b%s\b" % reg)
    pat_write = re.compile(r"(?m)^\s*%s\s*=\s*\(uint32_t\)\(" % reg)
    selfops = ("xor", "sub", "sbb")
    for c in ins:
        # `xor ecx,ecx` / `sub ecx,ecx` clear a register: the result does not depend on what the caller
        # left there, so it is the register's FIRST DEFINITION even though the lowered C names ecx on the
        # right as well (the recompiler's ALU preamble copies BOTH operands into temporaries before
        # operating on them). Returning False here rather than skipping the instruction is the point: the
        # scan stops at the first mention of a register, and an entry that zeroes ecx and then uses it is
        # an entry that never received ecx. Reading it as a use invented a register argument out of
        # nothing, and the adapter then handed the decompiler's param_1 the caller's leftovers in ecx while
        # the real stack argument slid to param_2 (0x10026e00 stored through that ecx).
        if c.get("mnem") in selfops and c.get("op") == "%s,%s" % (reg, reg):
            return False
        if not pat_read.search(c["stmt"]):
            continue
        w = pat_write.match(c["stmt"].lstrip()) or pat_write.search(c["stmt"])
        if w and w.start() <= c["stmt"].find(reg):
            # an assignment whose right-hand side also reads the register (`ecx = ecx + 4`) reads first
            rhs = c["stmt"][w.end():]
            return bool(pat_read.search(rhs))
        return True
    return False


def _esp_reads(ins, upto):
    """Argument words read off the incoming stack, and whether they came via ebp.

    `mov eax, dword ptr [esp + 4]` among the first instructions is cdecl argument 1 read before anything
    moved esp; `[ebp + 8]` anywhere is argument 1 through a frame pointer. The base matters: after the
    prologue pushes, esp no longer points where it did on entry, so reading `[esp+4]` late reads a local.
    """
    esp_args, ebp_args = 0, 0
    for c in ins[:max(upto, 1)]:
        for m in re.finditer(r"esp\s*\+\s*(0x[0-9a-fA-F]+|\d+)u?", c["stmt"]):
            v = int(m.group(1), 0)
            if v >= 4:
                esp_args = max(esp_args, (v - 4) // 4 + 1)
    for c in ins:
        for m in re.finditer(r"ebp\s*\+\s*(0x[0-9a-fA-F]+|\d+)u?", c["stmt"]):
            v = int(m.group(1), 0)
            if v >= 8:
                ebp_args = max(ebp_args, (v - 8) // 4 + 1)
    return esp_args, ebp_args


def model_generated(body_lines):
    """Everything a lift needs that Ghidra does not say. See the module docstring."""
    ins = parse_instructions(body_lines)
    m = {"ins": ins, "ok": True, "why": ""}
    if not ins:
        m.update(ok=False, why="no_instructions")
        return m

    # ---- epilogue first: the pops and the rets. The EPILOGUE is the authority on the PROLOGUE - a
    # function that pops esi, ebx, edi at the end pushed esi, ebx, edi at the start in that order, and
    # both are stated exactly. Scanning the leading instructions alone is not enough: retail likes to
    # read an argument before it saves anything (`mov eax,[esp+4]` then `push esi`), and a naive leading
    # scan counted 0x100372a0's `push esi` as an argument push.
    rets, leaves = [], False
    for c in ins:
        if c["mnem"] == "leave":
            leaves = True
        elif c["mnem"] == "ret":
            rets.append(int(c["op"], 0) if c["op"] else 0)
    tail = []
    for c in reversed(ins):
        if c["mnem"] == "ret":
            continue
        if c["mnem"] == "pop" and c["op"] in SAVED_REGS:
            tail.append(c["op"])
        elif c["mnem"] == "leave":
            continue
        else:
            break
    pops = list(reversed(tail))

    # ---- prologue: pushes of exactly the registers the epilogue pops, with the plain moves retail
    # interleaves allowed, and nothing that writes memory.
    pushes, want, i = [], list(pops), 0
    while i < len(ins):
        c = ins[i]
        if want and c["mnem"] == "push" and c["op"] == want[0]:
            pushes.append(c["op"])
            want.pop(0)
            i += 1
            continue
        if c["mnem"] == "mov" and c["op"] == "ebp,esp":
            break
        if c["mnem"] == "sub" and SUB_ESP_RE.match(c["op"]):
            break
        if c["mnem"] in PROLOGUE_PASSE and not want:
            break
        if c["mnem"] in PROLOGUE_PASSE:
            if re.search(r"\bwr32\(|\bwr8\(|\bwr16\(", c["stmt"]):
                break
            i += 1
            continue
        break
    frame_pointer = False
    if i < len(ins) and ins[i]["mnem"] == "mov" and ins[i]["op"] == "ebp,esp":
        frame_pointer = True
        i += 1
    locals_ = 0
    if i < len(ins) and ins[i]["mnem"] == "sub":
        mm = SUB_ESP_RE.match(ins[i]["op"])
        if mm:
            locals_ = int(mm.group(1), 0)
            i += 1
    m.update(pushes=pushes, frame_pointer=frame_pointer, locals=locals_, prologue_len=i)
    m["pushes_unmatched"] = list(want)

    # ---- arguments
    reg_args = [r for r in REG_ARG_ORDER if _reads_before_write(ins, r)]
    esp_args, ebp_args = _esp_reads(ins, i if not frame_pointer else len(ins))
    m["reg_args"] = reg_args
    m["stack_args_evidenced"] = max(esp_args, ebp_args)
    m["args_from_ebp"] = frame_pointer or ebp_args > esp_args

    # ---- epilogue facts
    m["pops"] = pops
    m["leave"] = leaves
    m["purge"] = (rets[0] if len(set(rets)) == 1 else None) if rets else None
    m["no_ret"] = not rets
    m["mixed_ret"] = bool(rets) and len(set(rets)) > 1

    # ---- esp tracked instruction by instruction. The generated body states every esp movement, so the
    # number of words a call site pushed is MEASURED, not guessed from how many arguments Ghidra thought
    # the callee had (they disagree often, and when they do the guest stack is the one that decides).
    delta, reliable = 0, True
    for c in ins:
        c["d"] = delta
        t = c["text"].lower()
        if re.search(r"\bmov\s+esp\b|pushad|popad|pushfd|popfd", t):
            reliable = False
        elif c["mnem"] == "push":
            delta -= 4
        elif c["mnem"] == "pop":
            delta += 4
        elif c["mnem"] == "sub":
            mm = SUB_ESP_RE.match(c["op"])
            if mm:
                delta -= int(mm.group(1), 0)
            else:
                reliable = False
        elif c["mnem"] == "add":
            mm = ADD_ESP_RE.match(c["op"])
            if mm:
                delta += int(mm.group(1), 0)
        elif c["mnem"] == "call":
            delta -= 4                                  # the return address the call itself pushes
        elif c["mnem"] in ("ret", "leave"):
            reliable = False
        elif c["mnem"].startswith("j"):
            reliable = False                            # a branch: the incoming esp is a path property
    m["esp_delta_reliable"] = reliable

    # ---- call sites
    sites = []
    arg_pushes = set()        # push instructions that belong to a call's arguments, not to the frame
    for n, c in enumerate(ins):
        if c["mnem"] != "call":
            continue
        tgt = None
        mm = re.match(r"^0x([0-9a-f]{1,8})$", c["op"])
        if mm:
            tgt = int(mm.group(1), 16)
        ra = RETADDR_RE.search(c["stmt"])
        cleanup = None
        if n + 1 < len(ins) and ins[n + 1]["mnem"] == "add":
            mm2 = ADD_ESP_RE.match(ins[n + 1]["op"])
            if mm2:
                cleanup = int(mm2.group(1), 0)
        d_after = ins[n + 1]["d"] if n + 1 < len(ins) else c["d"] - 4
        # Words the entry pushed FOR this call. Two independent readings, kept side by side because they
        # disagree often enough that one number would hide it:
        #   npush_walk  - count the `push` instructions between the call and the nearest control-flow
        #                 boundary above it. Control flow bounds the walk, not instruction kind: retail
        #                 interleaves fmul/lea/mov between the pushes (0x100372a0 pushes 0, then does two
        #                 fmuls, then calls), and a walk that stops at anything but a push loses them.
        #   npush_delta - the measured fall in esp across the call, when the linear esp track is sound.
        npush_walk, depth = 0, 0
        pushed_ops = []      # what each of those pushes pushed, nearest the call LAST
        for j in range(n - 1, -1, -1):
            p = ins[j]
            if j < m["prologue_len"] or depth > 24:
                break
            if p["mnem"] == "push":
                npush_walk += 1
                depth += 1
                pushed_ops.append(p["op"])
                # Remember WHICH instructions these are. A push that belongs to a call is the bridge's
                # business - the bridge replays the arguments and cleans them up - and if the adapter
                # replays it as a frame push too, the arguments go on the stack twice: the callee reads
                # the wrong words and the row diverges at state 0. prologue_ops stops here for that reason.
                arg_pushes.add(p["addr"])
                continue
            if p["mnem"].startswith("j") or p["mnem"] in ("call", "ret", "leave"):
                break
            depth += 1
        npush_delta = (c["d"] - d_after - 4) // 4 if reliable else None
        npush = npush_walk
        ecx_before = False
        for j in range(n - 1, max(n - 14, -1), -1):
            p = ins[j]
            if p["mnem"] == "call":
                break
            if p["mnem"] == "mov" and p["op"].startswith("ecx,"):
                ecx_before = True
                break
            if p["mnem"] in ("je", "jne", "jmp", "ret"):
                break
        # An indirect call's operand, categorised. `call ebx` names a register the body may be able to
        # value; `call dword ptr [ecx+0x18]` reads one at an address; `call dword ptr [0x10311c6c]` reads
        # a global. Anything else (scaled, or an expression the walk cannot follow) stays "unknown" and
        # the entry refuses, as it does today.
        tdesc = ("unknown", c["op"])
        if tgt is None:
            o = c["op"]
            mm = re.fullmatch(r"(eax|ecx|edx|ebx|esp|ebp|esi|edi)", o)
            if mm:
                tdesc = ("reg", mm.group(1))
            else:
                mm = re.fullmatch(r"dwordptr\[([a-z]+)((?:[+-](?:0x[0-9a-f]+|\d+))?)(?:\|(\d+))?\]", o)
                if mm and mm.group(1) in ("eax", "ecx", "edx", "ebx", "ebp", "esi", "edi"):
                    tdesc = ("mem", mm.group(1), int(mm.group(2), 0) if mm.group(2) else 0)
                else:
                    mm = re.fullmatch(r"dwordptr\[(0x[0-9a-f]+|\d+)\]", o)
                    if mm:
                        tdesc = ("abs", int(mm.group(1), 0))
        sites.append({"addr": c["addr"], "target": tgt, "op": c["opsp"], "target_desc": tdesc,
                      "retaddr": int(ra.group(1), 16) if ra else None,
                      "npush": npush, "npush_walk": npush_walk, "npush_delta": npush_delta,
                      # the pushed words in ARGUMENT order. The walk above ran BACKWARD from the call, so
                      # it collected the last push first - and the last push is the first argument, the one
                      # that ends up at [esp+4] in the callee. No reversal: reversing here put the caller's
                      # arguments in the mirror image and every callee read its two words swapped (an early
                      # version of this line did exactly that and cost 86 regressions before the bridge's own
                      # push loop - `for (i = npush; i-- > 0;) wr32(g->esp, args[i])` - was read).
                      "pushed": list(pushed_ops),
                      "ecx_before": ecx_before, "cleanup": cleanup,
                      "d_before": c["d"], "d_after": d_after})
    m["arg_pushes"] = arg_pushes
    # what each call actually loaded into ecx/edx/eax, read off the body rather than off the decompiler's
    # prototype (which drops them). See call_reg_values.
    call_reg_values(ins, sites, prologue_ops(ins, None, {}, arg_pushes=arg_pushes),
                    m.get("reg_args") or [])
    m["call_sites"] = sites
    m["has_indirect_call"] = any(s["target"] is None for s in sites)
    m["has_call"] = bool(sites)

    # ---- pushes that are neither prologue nor a call's arguments: a save in the middle of a body, which
    # the lift cannot place (Ghidra turned it into a local). Recorded, not fatal: cowdiff says whether it
    # mattered.
    in_prologue = set(range(m["prologue_len"]))
    near_call = set()
    for s in sites:
        for k, c in enumerate(ins):
            if s["addr"] - 0x60 <= c["addr"] < s["addr"]:
                near_call.add(k)
    m["extra_pushes"] = sum(1 for k, c in enumerate(ins)
                            if c["mnem"] == "push" and k not in in_prologue and k not in near_call)

    # ---- shapes the lift cannot express yet
    m["has_x87"] = (any(c["mnem"] in X87_MNEMS for c in ins)
                    or bool(re.search(r"X87_(?:PUSH|POP|STORE)", "\n".join(c["stmt"] for c in ins))))
    m["has_string_op"] = any(c["mnem"] in STR_MNEMS or c["text"].lower().startswith(STR_MNEMS)
                             for c in ins)
    return m


# Sub-register -> the 32-bit register it is a slice of. `xor al,al` clears the LOW BYTE ONLY and leaves
# the upper three alone; the generated body says so exactly (`eax = (eax & 0xFFFFFF00u) | ...`), but the
# decompiler reports it as `return 0`, and a lift that trusts that clobbers bits the original preserved.
# This is the shape that made hundreds of entries fail on `eax` while looking perfectly translated.
SUBREG = {}
for _r, _subs in (("eax", ("al", "ah", "ax")), ("ecx", ("cl", "ch", "cx")),
                  ("edx", ("dl", "dh", "dx")), ("ebx", ("bl", "bh", "bx")),
                  ("esp", ("spl",)), ("ebp", ("bpl",)),
                  ("esi", ("sil",)), ("edi", ("dil",))):
    for _s in _subs:
        SUBREG[_s] = _r


def partial_reg_writes(ins):
    """Which 32-bit registers this body writes PARTIALLY (an 8- or 16-bit slice).

    Read off the generated instruction list, because that is the only place the width survives: the
    decompiler has already collapsed `xor al,al` into an assignment to the whole register.
    """
    out = set()
    for c in ins:
        dest = c["op"].split(",")[0].strip()
        if dest in SUBREG:
            out.add(SUBREG[dest])
        elif dest in TRACKED_REGS and c["mnem"] in ("mov", "and", "or", "xor", "add", "sub", "shl", "shr",
                                                    "sar", "movzx", "movsx", "not", "neg", "inc", "dec"):
            continue
    return out


# ------------------------------------------------------------------ replaying the leading instructions
# The recompiler's own translation is the authority on what an instruction does, and for the first few
# instructions of an entry we can simply RUN it: the adapter replays it, in program order, before the
# lifted body has done anything at all. That is what makes it sound - the guest executed these before its
# first call too, and a load here reads the same bytes at the same moment. It is also what makes it worth
# doing: the decompiler keeps the VALUE (it flattens `mov eax,[ecx+0x10]` into an expression and forgets
# the register it was held in), so a bridge argument that needed that value had nothing to name and fell
# back to g-><reg>, which holds whatever the last callee left there. memory, edx and eax failures in the
# proof histogram are that one gap seen from three directions.
PREFIX_OK_MNEMS = frozenset((
    "mov", "movzx", "movsx", "lea", "add", "sub", "and", "or", "xor", "not", "neg",
    "inc", "dec", "shl", "shr", "sar"))
# cf/pf/af/zf/sf/of are written by the arithmetic blocks and are locals of the GENERATED function. They
# are dropped on replay: no bridge argument can name one, cowdiff does not compare them, and the only
# thing that reads them is a branch - which ends the prefix anyway.
FLAG_WORDS = ("cf", "pf", "af", "zf", "sf", "of")
# The READ helpers are allowed and the WRITE helpers are not, and that asymmetry is deliberate: a prefix
# instruction may load guest memory (that is what `mov eax,[ecx+0x10]` does, and the adapter runs it at the
# moment the guest did), but one that stores would be performing an effect the lifted body is supposed to
# own - and a store has no register assignment, so it is refused twice over.
PREFIX_ALLOWED_IDS = frozenset((
    "uint32_t", "int32_t", "uint16_t", "int16_t", "uint8_t", "int8_t",
    "uint64_t", "int64_t", "float", "double", "unsigned", "const",
    "A", "a", "b", "r", "c", "RD",
    "rd8", "rd16", "rd32", "rd64", "rdf32", "rdf64",
    # the shift blocks the recompiler emits are `if (c) { ... }` - the count can be zero, in which case
    # the guest wrote nothing. Keeping that condition is what keeps the replay faithful; dropping it
    # would shift by zero and still assign, which is a different machine. Braces are balance-checked.
    "if", "else"))
# Literals have to be taken out before identifiers are read, or `0x1Fu` reports an identifier called
# `x1Fu` and every instruction with an immediate is refused for knowing its own operand.
LITERAL_RE = re.compile(r"0[xX][0-9a-fA-F]+[uUlL]*|\b\d+[uUlL]*\b")


def _prefix_idents(text):
    """The identifiers in a generated statement, with numeric literals masked out first."""
    return set(PREFIX_ID_RE.findall(LITERAL_RE.sub(" ", text)))
PREFIX_ID_RE = re.compile(r"[A-Za-z_][A-Za-z0-9_]*")
IMM_PLUS_RD_RE = re.compile(r"(0x[0-9a-fA-F]+)u?\s*\+\s*RD")


def prefix_replay(mnem, op, stmt, layout_macros):
    """The generated statement for one leading instruction, re-hung off `g->`, or None.

    The rule is not "recognise this instruction and rebuild it" - a rebuild is a reimplementation, and a
    reimplementation that disagrees with the recompiler in some corner is a wrong unit that compiles. It is
    "take the recompiler's own text, keep the parts that compute the register, and name its registers
    through the Guest". Concretely: split the block into statements, drop the ones that only write flags,
    require that exactly one statement assigns to a tracked 32-bit register (that is the value we are
    materialising), and refuse the whole thing if any identifier survives that is not a register, a
    declared local, a standard type word or RD.

    That last test is what makes this safe to widen. A `sete al` after a dropped flag write mentions `zf`
    and is refused; a `rep movsd` mentions something we do not know and is refused; a store to memory has
    no register assignment and is refused. The prefix stops wherever understanding stops, rather than
    guessing across the gap.
    """
    if mnem not in PREFIX_OK_MNEMS:
        return None
    lines = [l.strip() for l in stmt.splitlines()]
    lines = [l for l in lines if l not in ("", "{", "}")]
    kept = []
    dst = None
    for line in lines:
        frags = [f for f in line.split(";")]
        out_frags = []
        for f in frags:
            s = f.strip()
            if not s:
                continue
            m = re.match(r"^([A-Za-z_][A-Za-z0-9_]*)\s*=(?!=)", s)
            if m:
                name = m.group(1)
                if name in FLAG_WORDS:
                    continue                       # a pure flag write: nothing here can read it
                if name in REG32:
                    if dst is not None and dst != name:
                        return None                # two registers written by one instruction: stop
                    dst = name
            else:
                # a declaration or a bare `if (c) {` - keep it, but it may not smuggle in a flag read
                pass
            out_frags.append(s)
        if out_frags:
            kept.append("; ".join(out_frags) + ";")
    if dst is None or not kept:
        return None
    text = " ".join(kept)
    # the flag test above only looked at assignment targets; a KEPT statement could still READ a flag
    ids = _prefix_idents(text)
    unknown = ids - PREFIX_ALLOWED_IDS - set(REG32)
    if unknown or (ids & set(FLAG_WORDS)):
        return None
    # The line filter dropped the block's wrapper `{` lines (they are lines that contain nothing but a
    # brace) but the matching `}` often rides at the end of a content line, so what is left can be
    # unbalanced in either direction. Restore them at the ends, where they only group the statement: for a
    # wrapper brace, position carries no meaning. Without this the shift blocks (`if (c) { ... } }`) are
    # refused for having the braces they arrived with - and a `}` that closes a `{` the filter removed
    # would otherwise be emitted into the middle of the adapter, where it closes something else.
    delta = text.count("}") - text.count("{")
    if delta > 0:
        text = "{" * delta + " " + text
    elif delta < 0:
        text = text + " " + "}" * (-delta)
    if text.count("{") != text.count("}"):
        return None                        # cannot happen given the above; belt, braces, suspenders
    # an image constant is `(0x10329310u + RD)`; bare guest addresses may not appear in src/, so route it
    # through the shared layout macro exactly as expressible_write does. A constant with no `+ RD` is an
    # immediate to the recompiler's model and stays a number.
    def _rd(m):
        return "%s + RD" % _img_macro(m.group(1), layout_macros)
    text = IMM_PLUS_RD_RE.sub(_rd, text)
    # name the register file through the Guest: this is the whole point of the exercise
    text = re.sub(r"\b(%s)\b" % "|".join(REG32), lambda m: "g->%s" % m.group(1), text)
    return {"reg": dst, "stmt": "{ %s }" % text}


def prologue_ops(ins, prologue_len, layout_macros, limit=16, arg_pushes=frozenset()):
    """The adapter's opening instructions, IN ORDER, as the generated body states them.

    The scan runs over the leading STRAIGHT-LINE instructions - it stops at the first branch, call,
    memory write or effect it cannot express, and at `limit` instructions. It is deliberately NOT bounded
    by the frame prologue: an entry with no pushes at all (0x10001e10) still opens with
    `mov eax, [0x103d3c88]`, and that is the instruction whose loss makes side B return a fuzzed eax
    where side A returns 0.

    Why order is not cosmetic here: an entry that does `push esi` and then `mov esi, [global]` must push
    the CALLER's esi, and one that does `mov eax, [global]` first must push the loaded value. Emitting
    all the pushes and then all the loads gets one of the two wrong, and the wrongness is invisible until
    cowdiff says the stack held a different word.
    """
    ops = []
    esp_at_entry = True     # nothing has moved esp yet, so [esp+4] is still the caller's first argument
    ebp_is_frame = False    # ebp names the frame only after `mov ebp, esp`
    owed_arg_push = False   # an argument push has been left to the bridge: g->esp now runs ahead of the guest's
    for c in ins[:limit]:
        mnem, stmt = c["mnem"], c["stmt"]
        if mnem == "push" and c["op"] in SAVED_REGS:
            # An argument push is not a frame push: the bridge replays the arguments it was given and
            # cleans them up, so replaying one here too puts the argument on the stack twice - the callee
            # reads the wrong word and the divergence shows up as `memory` at state 0.
            #
            # It is NOT a reason to end the prefix, though, and ending it was costing a whole family.
            # MSVC's cdecl opening interleaves computing the later arguments with pushing the earlier
            # ones (`push eax; push ecx; mov ecx,[global]; push edx; call`), and stopping at the first
            # push left every register written after it unmaterialised - so the bridge passed g->ecx,
            # which still held the CALLER's ecx. Skip the push, keep going, and let the guard below
            # decide how far "keep going" is safe.
            if c["addr"] in arg_pushes:
                esp_at_entry = False
                owed_arg_push = True
                continue
            ops.append({"kind": "push", "reg": c["op"], "addr": c["addr"]})
            esp_at_entry = False
            continue
        if mnem == "pop" and c["op"] in SAVED_REGS:
            ops.append({"kind": "pop", "reg": c["op"], "addr": c["addr"]})
            esp_at_entry = False
            continue
        if mnem == "mov" and c["op"] == "ebp,esp":
            ops.append({"kind": "frame", "addr": c["addr"]})
            ebp_is_frame = True
            esp_at_entry = False
            continue
        if mnem == "sub":
            mm = SUB_ESP_RE.match(c["op"])
            if mm:
                ops.append({"kind": "locals", "n": int(mm.group(1), 0), "addr": c["addr"]})
                esp_at_entry = False
                continue
        # Once an argument push has been left to the bridge, g->esp is 4 bytes per owed push HIGHER than
        # the guest's esp at the same point - the bridge has not run yet - so anything that reaches memory
        # through esp would read the wrong word. Before the first owed push the adapter is in lockstep with
        # the guest and esp-relative reads are exactly what expressible_write's stack arguments resolve.
        if owed_arg_push and "esp" in stmt:
            break
        if mnem in ("mov", "xor", "and", "or"):
            e = expressible_write(mnem, c["op"], stmt, layout_macros,
                                  esp_at_entry=esp_at_entry, ebp_is_frame=ebp_is_frame)
            if e:
                ops.append({"kind": "regwrite", "addr": c["addr"], **e})
                continue
        # Nothing special matched, but the recompiler's own statement may still be replayable as it stands.
        # This is the step that widens the prefix from "the four shapes expressible_write recognised" to
        # "whatever the translation says, provided every identifier in it is one we can name": register
        # loads (`mov eax,[ecx+0x10]`), lea, and the arithmetic blocks whose flag writes we drop.
        t = prefix_replay(mnem, c["op"], stmt, layout_macros)
        if t:
            if t["reg"] == "esp":
                esp_at_entry = False
            ops.append({"kind": "replay", "addr": c["addr"], "reg": t["reg"], "stmt": t["stmt"]})
            continue
        break
    return ops


# A register the guest may hold a value in that the decompiler throws away.
TRACKED_REGS = ("eax", "ecx", "edx", "ebx", "esi", "edi", "ebp")

IMG_CONST_RE = re.compile(r"^(%s)\s*=\s*\(uint32_t\)\(\(\s*(0x[0-9a-fA-F]+)u\s*\+\s*RD\s*\)\)\s*;$" % "|".join(TRACKED_REGS), re.M)
PLAIN_CONST_RE = re.compile(r"^(%s)\s*=\s*\(uint32_t\)\(\s*(0x[0-9a-fA-F]+|\d+)u?\s*\)\s*;$" % "|".join(TRACKED_REGS), re.M)
REG_COPY_RE = re.compile(r"^(%s)\s*=\s*\(uint32_t\)\(\s*(%s)\s*\)\s*;$" % ("|".join(TRACKED_REGS), "|".join(TRACKED_REGS)), re.M)
GLOB_READ_RE = re.compile(r"uint32_t A = \(uint32_t\)\(\s*(0x[0-9a-fA-F]+)u\s*\+\s*RD\s*\);\s*\n\s*"
                         r"(%s)\s*=\s*\(uint32_t\)\(\s*rd32\(A\)\s*\);" % "|".join(TRACKED_REGS))
# `[esp+4]` at the very top of a function IS its first argument, and `[ebp+8]` is the same word once a
# frame pointer exists. Naming it rather than refusing it matters: the setter family
# `mov eax,[esp+4]; mov [global],eax; ret` returns its own argument in eax, Ghidra models it as a void
# store, and the lift would leave eax at whatever the fuzzer had put there.
ESP_ARG_RE = re.compile(r"uint32_t A = \(uint32_t\)\(\s*esp\s*\+\s*(0x[0-9a-fA-F]+|\d+)u?\s*\);\s*\n\s*"
                        r"(%s)\s*=\s*\(uint32_t\)\(\s*rd32\(A\)\s*\);" % "|".join(TRACKED_REGS))
EBP_ARG_RE = re.compile(r"uint32_t A = \(uint32_t\)\(\s*ebp\s*\+\s*(0x[0-9a-fA-F]+|\d+)u?\s*\);\s*\n\s*"
                        r"(%s)\s*=\s*\(uint32_t\)\(\s*rd32\(A\)\s*\);" % "|".join(TRACKED_REGS))


def expressible_write(mnem, op, stmt, layout_macros, esp_at_entry=True, ebp_is_frame=False):
    """One guest register write that cow can replay verbatim, or None.

    Deliberately narrow: immediates, image-constant addresses, reads of a global (a constant address, so
    it can never fault at a point where the original had not already faulted), and copies between tracked
    registers. A register-indirect load (`mov eax,[ecx]`) is NOT replayed - with a fuzzed ecx it faults,
    and the harness compares the memory prefix up to the fault, so replaying it in the wrong place is a
    difference, not a fidelity win.
    """
    if mnem == "xor" and op.split(",")[0] == op.split(",")[1]:
        reg = op.split(",")[0]
        if reg in TRACKED_REGS:
            return {"reg": reg, "expr": "0u"}
    m = GLOB_READ_RE.search(stmt)
    if m:
        return {"reg": m.group(2), "expr": "rd32(%s)" % _img_macro(m.group(1), layout_macros)}
    # an argument read straight off the incoming frame: safe to replay, because the adapter reads that
    # same word anyway, and it is the only way a setter that returns its argument in eax stays honest
    if esp_at_entry:
        m = ESP_ARG_RE.search(stmt)
        if m:
            n = int(m.group(1), 0)
            if n >= 4 and (n - 4) % 4 == 0:
                return {"reg": m.group(2), "expr": ("stackarg", (n - 4) // 4)}
    if ebp_is_frame:
        m = EBP_ARG_RE.search(stmt)
        if m:
            n = int(m.group(1), 0)
            if n >= 8 and (n - 8) % 4 == 0:
                return {"reg": m.group(2), "expr": ("stackarg", (n - 8) // 4)}
    bare = _bare_stmt(stmt)
    m = IMG_CONST_RE.match(bare)
    if m:
        return {"reg": m.group(1), "expr": _img_macro(m.group(2), layout_macros)}
    m = PLAIN_CONST_RE.match(bare)
    if m:
        return {"reg": m.group(1), "expr": "%su" % int(m.group(2), 0)}
    m = REG_COPY_RE.match(bare)
    if m and m.group(1) != m.group(2):
        return {"reg": m.group(1), "expr": m.group(2)}
    return None


def _bare_stmt(stmt):
    """The lone statement of a generated instruction block, or '' if it has more than one.

    Every generated instruction is wrapped in braces: `mov esi, ecx` is the three lines `{`,
    `esi = (uint32_t)(ecx);`, `}`. The three assignment patterns below are anchored with ^/$ and were
    handed `stmt.strip()`, which begins with the '{' - so they NEVER matched, and the register copies and
    immediate loads they were written for were silently dropped from every adapter. The forms that did work
    (global reads, stack arguments) used .search(), which is why the gap hid for so long: the setter family
    that motivated them all read a global. Requiring exactly one statement is what keeps this from
    matching an instruction that also does something else, which the anchored patterns were guarding.
    """
    lines = [l.strip() for l in stmt.splitlines()]
    lines = [l for l in lines if l not in ("{", "}", "")]
    return lines[0] if len(lines) == 1 else ""


def _img_macro(text, layout_macros):
    """COW_IMG(<macro>) for a guest address, with the macro registered in the shared layout table.

    Normalising through int() matters: Ghidra writes the same address as `0x103d3c88u` and
    `0x103D3C88u`, and a key built by string concatenation produced `0x0x...` entries that the header
    writer then choked on - two macros for one address, and a crash besides.
    """
    va = "0x%x" % int(text, 16)
    macro = layout_macros.get(va)
    if not macro:
        macro = "COW_ADDR_LIFT_%s" % va[2:].upper()
        layout_macros[va] = macro
    return "COW_IMG(%s)" % macro


# ------------------------------------------------------------------ value of the register args at a call
REG32 = ("eax", "ecx", "edx", "ebx", "esp", "ebp", "esi", "edi")
CALLER_SAVED = ("eax", "ecx", "edx")
ARITH = {"add": "+", "sub": "-", "xor": "^", "and": "&", "or": "|"}
SUBREG_PARENT = {}
for _p, _subs in (("eax", ("al", "ah", "ax")), ("ecx", ("cl", "ch", "cx")),
                  ("edx", ("dl", "dh", "dx")), ("ebx", ("bl", "bh", "bx")),
                  ("esp", ("spl",)), ("ebp", ("bpl", "bp")),
                  ("esi", ("sil", "si")), ("edi", ("dil", "di"))):
    for _s in _subs:
        SUBREG_PARENT[_s] = _p
MAX_EXPR = 200


def _dst_reg(op):
    """The 32-bit register an operand list writes into, or None (memory destination, or no register)."""
    dst = op.partition(",")[0]
    if dst in REG32:
        return dst
    return SUBREG_PARENT.get(dst)


def _writes_reg(mnem, op):
    """Whether this instruction writes a register we track (as opposed to flags, or memory only).

    `push` is NOT a write to its operand: `push eax` reads eax and writes memory. Treating it as a write
    invalidated env[eax] - and every cdecl argument is a push, so the value walk wiped the register it was
    about to need at the call site, minutes before the call that asked for it. That is why arguments came
    back unknown on the shape that is most common in the image: `mov eax,...; push eax; push x; call`.
    """
    if mnem in ("test", "cmp", "push", "call", "ret", "leave", "nop", "cld", "std", "wait", "int3"):
        return False
    if mnem.startswith("j"):
        return False
    return _dst_reg(op) is not None


def call_reg_values(ins, sites, ops, reg_args):
    """For each call site, what the generated body had put in ecx/edx/eax - as C, or None.

    Why this exists: the decompiler drops register arguments wholesale when it decides the callee takes
    none, and its inferred prototype for a `this` the callee never uses IS void. 0x10002790 is the shape
    that repeats through the population - `mov esi, ecx` then `lea ecx, [esi+4]` then `call`, which Ghidra
    renders as a bare `FUN_100026e0()`. The bridge then passes ecx_in = 0u, the callee stores through a
    null `this`, and the row fails on memory. 83% of entries want ecx; passing a constant zero for it was
    the single largest wrong thing the lift did.

    The generated body is the authority on what the call actually loaded, so this walks it and names the
    value. What it may name is deliberately restricted to what the LIFTED BODY CAN EVALUATE, because the
    user function keeps guest registers in Ghidra locals, not in g->:

      - `param_N` for a value the adapter declares as a parameter (an incoming ecx/edx), and
      - `g-><reg>` for a register whose write the adapter replays (a prologue_ops 'regwrite'), and
      - immediates, and sums / shifts / logical combinations of the above.

    Anything else - a memory load, a register the adapter does not maintain, a path that merged from
    somewhere the linear walk did not follow - yields None, and the bridge keeps the honest 0u default
    instead of inventing a value. Guessing here would turn a visible zero into a plausible wrong pointer.
    """
    # both flavours of "the adapter writes this register itself", which is what makes `g-><reg>` a legal
    # leaf to name at a call site: 'regwrite' is an expressible_write, 'replay' is a verbatim statement
    replayed = {o["addr"] for o in ops if o["kind"] in ("regwrite", "replay")}

    # registers the function NEVER writes anywhere: their g-> value is still the incoming one at any point
    # in the body, which is what makes them legal leaves at a merge point (see the branch handling below).
    written_ever = {r for c in ins for r in ([_dst_reg(c["op"])] if _writes_reg(c["mnem"], c["op"]) else [])
                    if r}
    # addresses some jump can arrive at: the linear walk did not follow that path, so nothing it tracked
    # survives the merge.
    targets = set()
    for c in ins:
        for m in re.finditer(r"\bj\w*\s+0x([0-9a-f]{1,8})\b", c["text"]):
            targets.add(int(m.group(1), 16))

    def fresh():
        return {r: (None if r in written_ever else "g->%s" % r) for r in REG32}

    env = fresh()
    # an incoming register argument is the adapter's parameter: same value, but named somewhere the user
    # function can still reach it after the prologue has overwritten the register.
    for i, r in enumerate([x for x in ("ecx", "edx") if x in reg_args]):
        env[r] = "param_%d" % (i + 1)

    # Pushes waiting for the call they belong to, each with the environment AS OF THE PUSH. Taking the
    # value at the call instead is the bug 0x10014d90 shows: `push ecx; mov ecx,[0x104568fc]; push edx;
    # call` pushed the global where the guest had pushed the entry's second argument.
    pending = []
    for c in ins:
        if c["addr"] in targets:
            env = fresh()
            pending = []          # a jump target: whatever the linear walk tracked is not on this path
        mnem, op = c["mnem"], c["op"]
        if mnem == "call":
            for s in sites:
                if s["addr"] == c["addr"] and "regvals" not in s:
                    s["regvals"] = {r: env.get(r) for r in ("ecx", "edx", "eax")}
                    s["push_values"] = _push_values(s, pending, ins)
                    s["target_expr"] = _target_expr(s, env)
            pending = []
            for r in CALLER_SAVED:
                env[r] = None          # whatever the callee left there is not the caller's value
            continue
        if mnem in ("ret", "leave", "int3"):
            env = fresh()
            pending = []
            continue
        if mnem == "push":
            # remember the operand WITH the world it was pushed from; the call that consumes it is still
            # some instructions away, and registers do not wait patiently
            pending.append((c["addr"], op, dict(env)))
            continue
        if mnem.startswith("j"):
            pending = []          # the pushes before a branch do not necessarily reach the next call
        if not _writes_reg(mnem, op):
            continue
        dst = _dst_reg(op)
        src = op.partition(",")[2]
        if c["addr"] in replayed:
            expr = "g->%s" % dst       # the adapter writes this one itself, so g-> names it
        elif dst not in REG32:
            expr = None                # al/ax/ah: the other bits of the pair are untouched but unnamed
        else:
            expr = _value_expr(mnem, dst, src, env)
        env[dst] = expr if expr and len(expr) <= MAX_EXPR else None

    for s in sites:
        s.setdefault("regvals", {r: None for r in ("ecx", "edx", "eax")})
    return sites


def _target_expr(site, env):
    """C for the address an indirect call jumps through, or None when the body cannot name it.

    The three shapes `model_generated` categorised, in the order they appear in real code:

      ("reg", "ebx")                    ebx held by the body at this point  ->  g->ebx / param_1 / ...
      ("mem", "ecx", 0x18)              rd32 of an expressible address      ->  rd32((uint32_t)(g->ecx + 0x18u))
      ("abs", 0x10311c6c)               a global that holds the pointer     ->  the caller renders the macro

    "IMG:%08x" is a marker for lift.py, which owns the layout macro table; a bare number would be a guest
    address hard-coded into a lifted unit, which is the thing layout/lifted_addresses.h exists to prevent.
    """
    d = site.get("target_desc") or ()
    if not d or d[0] == "unknown":
        return None
    if d[0] == "reg":
        return env.get(d[1])
    if d[0] == "mem":
        base = env.get(d[1])
        if base is None:
            return None
        disp = d[2]
        return "rd32((uint32_t)(%s%s))" % (base, (" + 0x%xu" % disp) if disp else "")
    if d[0] == "abs":
        return "IMG:0x%08x" % d[1]
    return None


def _push_values(site, pending, ins):
    """C for each word a call pushed, or None if any of them cannot be named safely.

    `pending` is the run of pushes the forward walk passed on the way to this call, each paired with the
    register environment at THAT instruction. The list is in push order, so the LAST entry is the callee's
    first argument - the same order `pushed` records, which is why the two are matched index for index.

    A word is only safe when nothing writes it between its push and the call: `param_N` is stable by
    construction, `g->reg` and any expression naming registers are not once the register moves again. The
    registers a value depends on are read out of the expression itself, so `g->eax + 4u` is disqualified by
    a later write to eax just as `g->eax` is.
    """
    pushed = site.get("pushed")
    if not pushed or len(pushed) != site.get("npush") or len(pending) != len(pushed):
        return None
    call_addr = site["addr"]
    out = []
    for (push_addr, _op, penv), word in zip(pending, pushed):
        expr = _operand_expr(word, penv)
        if expr is None:
            return None                      # a memory operand, an odd-size register, an unknown value
        for c in ins:
            if push_addr < c["addr"] < call_addr and _writes_reg(c["mnem"], c["op"]):
                dst = _dst_reg(c["op"])
                if dst and re.search(r"\b%s\b" % dst, expr):
                    return None              # the register moved after the guest had already pushed it
        out.append(expr)
    return out


def _value_expr(mnem, dst, src, env):
    """The value dst holds after `mnem dst, src`, in terms of what the lifted body can name."""
    here = env.get(dst)
    if mnem == "mov":
        return _operand_expr(src, env)
    if mnem == "lea":
        return _lea_expr(src, env)
    if mnem == "xor" and src == dst:
        return "0u"                    # the self-xor every compiler emits and every reader recognises
    if mnem in ARITH:
        b = _operand_expr(src, env)
        if here is None or b is None:
            return None
        return "(%s %s %s)" % (here, ARITH[mnem], b)
    if mnem in ("shl", "shr"):
        n = _const(src)
        if here is None or n is None:
            return None
        return "(%s %s %su)" % (here, "<<" if mnem == "shl" else ">>", n)
    if mnem in ("inc", "dec"):
        if here is None:
            return None
        return "(%s %s 1u)" % (here, "+" if mnem == "inc" else "-")
    return None


def _const(text):
    m = re.fullmatch(r"(0x[0-9a-f]+|\d+)", text)
    return int(m.group(1), 0) if m else None


def _operand_expr(text, env):
    """C for an operand, or None: only a literal or a register the body already names can be expressed."""
    n = _const(text)
    if n is not None:
        return "%su" % n
    if text in REG32:
        return env.get(text)
    return None                        # any memory operand: unknown, and a fuzzed base would fault


def _lea_expr(text, env):
    """C for the address a `lea` computes - plain base + displacement, nothing scaled or indexed."""
    m = re.fullmatch(r"\[(\w+)(?:([+-])(0x[0-9a-f]+|\d+))?\]", text)
    if not m:
        return None                    # [eax+ecx*4], [base+index]: a model here would be a guess
    base = env.get(m.group(1)) if m.group(1) in REG32 else None
    if base is None:
        return None
    if not m.group(2):
        return base
    return "(%s %s %su)" % (base, m.group(2), int(m.group(3), 0))


def callee_facts(body_lines):
    """What a BRIDGE has to know about the callee: which registers arrive populated, and does it pop its args?"""
    m = model_generated(body_lines)
    if not m["ok"]:
        return {"ok": False, "why": m["why"]}
    return {"ok": True, "wants_ecx": "ecx" in m["reg_args"], "wants_edx": "edx" in m["reg_args"],
            # eax is checked here and not in reg_args, because reg_args feeds the ADAPTER's argument
            # binding (a thiscall's `this` arrives in ecx) - a callee that merely reads the caller's eax
            # is a bridge fact, not a calling-convention fact.
            "wants_eax": _reads_before_write(m["ins"], "eax"),
            "purge": m["purge"], "callee_pops": (m["purge"] or 0) > 0, "no_ret": m["no_ret"]}


def main():
    """Show the model for one entry - the reading tool for lift work.

        python tools/cow/ghidra/gen_model.py 0x100372a0
    """
    import argparse
    if hasattr(sys.stdout, "reconfigure"):
        sys.stdout.reconfigure(encoding="utf-8", errors="replace")
    ap = argparse.ArgumentParser()
    ap.add_argument("entry")
    args = ap.parse_args()
    import trivial_audit
    e = args.entry.lower().replace("0x", "")
    body = trivial_audit.body_index().get(e)
    if body is None:
        print("no generated body for %s" % args.entry)
        return 1
    m = model_generated(body)
    print("== %s ==" % args.entry)
    for k in ("ok", "why", "pushes", "pushes_unmatched", "frame_pointer", "locals", "reg_args",
              "stack_args_evidenced", "args_from_ebp", "purge", "mixed_ret", "leave", "pops", "no_ret",
              "extra_pushes", "esp_delta_reliable", "has_x87", "has_string_op", "has_indirect_call"):
        if k in m:
            print("  %-22s %s" % (k, m[k]))
    print("  call sites:")
    for s in m.get("call_sites", []):
        print("    0x%08x -> %s  retaddr=%s npush=%s ecx_before=%s cleanup=%s"
              % (s["addr"], ("0x%x" % s["target"]) if s["target"] is not None else "INDIRECT:" + s["op"],
                 hex(s["retaddr"]) if s["retaddr"] else None, s["npush"], s["ecx_before"], s["cleanup"]))
    return 0


if __name__ == "__main__":
    sys.exit(main())
