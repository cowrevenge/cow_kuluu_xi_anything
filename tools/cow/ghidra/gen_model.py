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
    for c in ins:
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
        for j in range(n - 1, -1, -1):
            p = ins[j]
            if j < m["prologue_len"] or depth > 24:
                break
            if p["mnem"] == "push":
                npush_walk += 1
                depth += 1
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
        sites.append({"addr": c["addr"], "target": tgt, "op": c["opsp"],
                      "retaddr": int(ra.group(1), 16) if ra else None,
                      "npush": npush, "npush_walk": npush_walk, "npush_delta": npush_delta,
                      "ecx_before": ecx_before, "cleanup": cleanup,
                      "d_before": c["d"], "d_after": d_after})
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


def prologue_ops(ins, prologue_len, layout_macros, limit=16):
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
    for c in ins[:limit]:
        mnem, stmt = c["mnem"], c["stmt"]
        if mnem == "push" and c["op"] in SAVED_REGS:
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
        if mnem in ("mov", "xor", "and", "or"):
            e = expressible_write(mnem, c["op"], stmt, layout_macros,
                                  esp_at_entry=esp_at_entry, ebp_is_frame=ebp_is_frame)
            if e:
                ops.append({"kind": "regwrite", "addr": c["addr"], **e})
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
    m = IMG_CONST_RE.match(stmt.strip())
    if m:
        return {"reg": m.group(1), "expr": _img_macro(m.group(2), layout_macros)}
    m = PLAIN_CONST_RE.match(stmt.strip())
    if m:
        return {"reg": m.group(1), "expr": "%su" % int(m.group(2), 0)}
    m = REG_COPY_RE.match(stmt.strip())
    if m and m.group(1) != m.group(2):
        return {"reg": m.group(1), "expr": m.group(2)}
    return None


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
