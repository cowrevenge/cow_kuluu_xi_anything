"""ret_model.py - what eax holds at each `ret`, read off the guest instructions.

WHY THIS EXISTS. Ghidra types a function `bool`/`char`/`short` and writes `return 1;` for what the guest
did as `mov al,1` - and the other 24 bits of eax are whatever the last whole-register write left there:
the last call's result, an argument the entry loaded, the register as the entry found it. cowdiff compares
all 32 bits when no caller witnesses a narrower contract, so a lift that says `g->eax = 1` is wrong by
exactly those bits. lift.apply_partial_widths matched the k-th guest write to eax to the k-th `g->eax =`
by POSITION, which cannot work for returns: Ghidra folds writes away (0x10071980: `mov al,1` consumed by a
test, then `mov eax,imm`, one `return` - and the lift masked the wrong one). This is the same question
answered per `ret` instead of per position: a forward dataflow over the entry's own branches, so each
`ret` knows the value it returns. No path is guessed: a join of two different values is "not named".

A value is one of
    ("entry", reg)            the register as the entry found it
    ("arg", k)                stack word k of the caller's frame
    ("const", c)
    ("call", addr)            what the call at addr left in eax
    ("part", base, mask, low) base with the bits in mask overwritten; low = the constant written, or None
    ("full",)                 a whole-register value this model does not name (a load, arithmetic)
    None                      not known, not even whether the whole register was written
"""
import re, sys
GPR = ("eax", "ecx", "edx", "ebx", "esi", "edi", "ebp")
FULL = ("full",)
SUB = {"al": ("eax", 0xFF), "ah": ("eax", 0xFF00), "ax": ("eax", 0xFFFF), "cl": ("ecx", 0xFF), "ch": ("ecx", 0xFF00),
       "cx": ("ecx", 0xFFFF), "dl": ("edx", 0xFF), "dh": ("edx", 0xFF00), "dx": ("edx", 0xFFFF), "bl": ("ebx", 0xFF),
       "bh": ("ebx", 0xFF00), "bx": ("ebx", 0xFFFF), "si": ("esi", 0xFFFF), "di": ("edi", 0xFFFF), "bp": ("ebp", 0xFFFF)}
NOWRITE = {"cmp", "test", "push", "nop", "ret", "retn", "leave", "bt", "fld", "fstp", "fst", "fild", "fistp", "fist", "fcom",
           "fcomp", "fcompp", "fadd", "fsub", "fmul", "fdiv", "faddp", "fsubp", "fmulp", "fdivp", "fsubr", "fdivr", "fsubrp",
           "fdivrp", "fxch", "fchs", "fabs", "fldz", "fld1", "fucom", "fucomp", "fucompp", "fsqrt", "fsin", "fcos", "frndint",
           "fldcw", "fnstcw", "fstcw", "wait", "fwait", "cld", "std", "sahf", "fiadd", "fisub", "fimul", "fidiv", "ficom",
           "ficomp", "fpatan", "fptan", "fscale", "fprem", "fyl2x", "fldpi", "fldln2", "fldlg2", "fld2e", "fldl2e", "fldl2t",
           "ftst", "fxam", "fincstp", "fdecstp", "ffree", "fnclex", "fninit", "fisubr", "fidivr", "clc", "stc", "cmc", "int3"}
IMM = re.compile(r"^(-?)(0x[0-9a-f]+|\d+)$")
def imm(t):
    m = IMM.match(t)
    return None if not m else ((-1 if m.group(1) else 1) * int(m.group(2), 0)) & 0xFFFFFFFF
MEM = re.compile(r"^(?:dword|word|byte|qword|tbyte|xmmword)?ptr\[(.+)\]$")
def stack_arg(src, st):
    m = MEM.match(src)
    if not m or not src.startswith("dword"):
        return None
    e = m.group(1)
    m2 = re.match(r"^(esp|ebp)(?:([+-])(0x[0-9a-f]+|\d+))?$", e)
    if not m2:
        return None
    d = int(m2.group(3), 0) * (-1 if m2.group(2) == "-" else 1) if m2.group(3) else 0
    if m2.group(1) == "esp":
        if st["sp"] is None:
            return None
        off = d + st["sp"]
    else:
        if st["fp"] is None:
            return None
        off = d + st["fp"]
    if off >= 4 and off % 4 == 0:
        return ("arg", off // 4 - 1)
    return None
def split_ops(op):
    out, depth, cur = [], 0, ""
    for ch in op:
        if ch == "[": depth += 1
        if ch == "]": depth -= 1
        if ch == "," and depth == 0:
            out.append(cur); cur = ""
        else:
            cur += ch
    if cur: out.append(cur)
    return out
def step(c, st):
    """the state after instruction c (st is copied by the caller)"""
    mn, ops = c["mnem"], split_ops(c["op"])
    if mn.startswith("rep") or mn in ("movsb", "movsd", "movsw", "stosb", "stosd", "stosw", "scasb", "scasd", "scasw", "cmpsb",
                                      "cmpsd", "cmpsw", "lodsb", "lodsd", "lodsw"):
        txt = c["text"].lower()
        for r in ("ecx", "esi", "edi"):
            st[r] = FULL
        if "lods" in txt:
            st["eax"] = None                      # lodsb writes al only: not modelled
        return
    if mn == "call":
        st["eax"] = ("call", c["addr"]); st["ecx"] = FULL; st["edx"] = FULL; st["sp"] = None
        return
    if mn == "push":
        if st["sp"] is not None: st["sp"] -= 4
        return
    if mn == "pop":
        if ops and ops[0] in GPR:
            st[ops[0]] = FULL
            if ops[0] == "ebp":
                st["fp"] = None
        if st["sp"] is not None: st["sp"] += 4
        return
    if mn == "leave":
        st["sp"] = st["fp"] + 4 if st["fp"] is not None else None     # esp = ebp; pop ebp
        st["ebp"] = FULL; st["fp"] = None
        return
    if mn in NOWRITE or mn.startswith("j") or mn.startswith("f"):
        if mn in ("fnstsw", "fstsw") and ops and ops[0] == "ax":
            part(st, "eax", 0xFFFF, None)
        return
    if mn in ("cdq",):
        st["edx"] = FULL; return
    if mn in ("cwde",):
        st["eax"] = FULL; return
    if mn in ("cbw",):
        part(st, "eax", 0xFFFF, None); return
    if mn == "lahf":
        part(st, "eax", 0xFF00, None); return
    if mn in ("mul", "imul", "div", "idiv") and len(ops) == 1:
        byte = ops[0] in ("al", "cl", "dl", "bl", "ah", "ch", "dh", "bh") or ops[0].startswith("byteptr")
        if byte:
            part(st, "eax", 0xFFFF, None)
        else:
            st["eax"] = FULL; st["edx"] = FULL
        return
    if mn in ("rdtsc", "cpuid"):
        for r in ("eax", "edx", "ecx", "ebx"): st[r] = FULL
        return
    if mn == "xchg":
        for o in ops:
            if o in GPR:
                st[o] = FULL
                if o == "ebp": st["fp"] = None
            elif o in SUB: part(st, SUB[o][0], SUB[o][1], None)
            elif o == "esp": st["sp"] = None
        return
    if mn in ("cmpxchg", "xadd"):
        st["eax"] = None
        for o in ops:
            if o in GPR: st[o] = None
        return
    if not ops:
        return
    d = ops[0]
    if d == "esp":
        v = imm(ops[1]) if len(ops) > 1 else None
        if mn == "add" and v is not None and st["sp"] is not None:
            st["sp"] += v if v < 0x80000000 else v - (1 << 32)
        elif mn == "sub" and v is not None and st["sp"] is not None:
            st["sp"] -= v if v < 0x80000000 else v - (1 << 32)
        elif mn == "mov" and ops[1] == "ebp":
            st["sp"] = st["fp"]
        else:
            st["sp"] = None
        return
    if d in SUB:
        r, mask = SUB[d]
        low = None
        if mn == "mov" and len(ops) > 1 and imm(ops[1]) is not None and mask in (0xFF, 0xFFFF):
            low = imm(ops[1]) & mask
        elif mn in ("xor", "sub") and len(ops) > 1 and ops[1] == d and mask in (0xFF, 0xFFFF):
            low = 0
        part(st, r, mask, low)
        return
    if d not in GPR:
        return                                    # a store, or a write to something not tracked
    if d == "ebp":
        if mn == "mov" and ops[1] == "esp":
            st["fp"] = st["sp"]
        else:
            st["fp"] = None
    if mn == "mov":
        s = ops[1]
        if s in GPR:
            st[d] = st[s]
        elif imm(s) is not None:
            st[d] = ("const", imm(s))
        else:
            st[d] = stack_arg(s, st) or FULL
        return
    if mn in ("xor", "sub") and len(ops) > 1 and ops[1] == d:
        st[d] = ("const", 0); return
    if mn in ("movzx", "movsx", "lea", "add", "sub", "and", "or", "xor", "not", "neg", "inc", "dec", "shl", "shr", "sar",
              "sal", "rol", "ror", "rcl", "rcr", "imul", "adc", "sbb", "shld", "shrd", "bsf", "bsr", "bswap") \
            or mn.startswith("cmov") or mn.startswith("set"):
        st[d] = FULL if not mn.startswith("cmov") else (FULL if st[d] is not None and st[d][0] != "part" else None)
        return
    st[d] = None                                  # a mnemonic this model was never shown
def part(st, r, mask, low):
    v = st[r]
    if v is None:
        return
    if v[0] == "part":
        m2 = v[2] | mask
        st[r] = ("part", v[1], m2, low if (mask == m2 and low is not None) else None)
    elif v[0] == "const" and low is not None:
        st[r] = ("const", (v[1] & ~mask) | low)
    else:
        st[r] = ("part", v, mask, low)
def join(a, b):
    out = {}
    for k in a:
        x, y = a[k], b.get(k)
        if x == y:
            out[k] = x
        elif k in GPR and x is not None and y is not None and x[0] != "part" and y[0] != "part":
            out[k] = FULL                         # two different whole values: still a whole value
        else:
            out[k] = None
    return out
def analyse(ins, reg="eax"):
    """(list of (ret addr, value of reg there), why-not). why-not is a string when the CFG could not be walked."""
    if not ins:
        return None, "no instructions"
    at = {c["addr"]: i for i, c in enumerate(ins)}
    succ = []
    for i, c in enumerate(ins):
        mn = c["mnem"]
        if mn in ("ret", "retn"):
            succ.append([]); continue
        if mn.startswith("j"):
            t = imm(c["op"])
            if t is None:
                return None, "indirect jump"
            if t not in at:
                if mn == "jmp":
                    succ.append(None); continue            # a tail jump out of the entry
                return None, "branch out of the body"
            s = [at[t]]
            if mn != "jmp" and i + 1 < len(ins):
                s.append(i + 1)
            succ.append(s); continue
        if mn in ("loop", "loope", "loopne", "jecxz"):
            return None, "loop instruction"
        succ.append([i + 1] if i + 1 < len(ins) else [])
    st0 = {r: ("entry", r) for r in GPR}
    st0["sp"] = 0; st0["fp"] = None
    inn = {0: st0}
    work = [0]
    rets, tails = {}, 0
    n = 0
    while work:
        i = work.pop()
        n += 1
        if n > 200000:
            return None, "no fixpoint"
        st = dict(inn[i])
        c = ins[i]
        if c["mnem"] in ("ret", "retn"):
            rets[c["addr"]] = st[reg]
            continue
        step(c, st)
        if succ[i] is None:
            tails += 1; continue
        for j in succ[i]:
            if j not in inn:
                inn[j] = st; work.append(j)
            else:
                m = join(inn[j], st)
                if m != inn[j]:
                    inn[j] = m; work.append(j)
    if tails:
        return None, "tail jump"
    return sorted(rets.items()), None


def uniform(ins, reg):
    """The one value `reg` holds at EVERY `ret` of the entry, or None when the rets disagree, when the walk
    failed, or when the value is not one this model names."""
    rets, _why = analyse(ins, reg)
    if not rets:
        return None
    vals = {v for _a, v in rets}
    if len(vals) != 1:
        return None
    return vals.pop()
