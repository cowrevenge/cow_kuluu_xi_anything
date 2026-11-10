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
    pops = epilogue_pop_run(ins)

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

    # ---- saved-register pushes the prologue scan never saw, because the compiler put them in the middle
    # of the body and Ghidra turned them into locals. They are still writes to the guest frame, and the
    # harness diffs that frame: 168 lifted units were carrying the note "this entry also pushes N word(s) in
    # the middle of its body" while the store log answered `store=missing`.
    #
    # They are recovered as a PAIR against the pops. A save converts only when (a) the pushes and the pops
    # of saved registers balance as multisets, (b) every push happens before every pop (so replaying them
    # at the frame start leaves the same esp depth at the call), and (c) nothing writes the register between
    # the prologue and its push - otherwise the value the guest stored is not the value it arrived with, and
    # filling a real stack slot with a wrong number is worse than leaving it honest.
    after = ins[m["prologue_len"]]["addr"] if m["prologue_len"] < len(ins) else 0
    body_saves = [c for c in ins if c["mnem"] == "push" and c["op"] in SAVED_REGS
                  and c["addr"] >= after and c["addr"] not in arg_pushes]
    body_pops = [c for c in ins if c["mnem"] == "pop" and c["op"] in SAVED_REGS and c["addr"] >= after]
    # What the note in the lifted file is really asking: of the pushes that are neither the prologue's nor a
    # call's arguments (so neither the adapter nor a bridge will write them), how many are left unwritten?
    # `extra_pushes` cannot answer that - it excludes pushes near a call, which is right for its own
    # question and silent about the frame.
    m["unreproduced_saves"] = len(body_saves)
    # SETS, not multisets: a function with several exits pops the same saved registers once per path
    # (0x10028850 pops ebx/esi/edi on four of them), and comparing instruction counts refused every one of
    # them - which is the shape behind the memory group's biggest `store=missing` family.
    pushed_set = {c["op"] for c in body_saves}
    popped_set = {c["op"] for c in body_pops}
    # No jump may sit among the pushes: a saved register that is pushed only on some paths is not a frame
    # fact, and replaying it at the frame start writes a slot the guest leaves untouched on the path that
    # runs (0x101521c0, caught as `store=extra` by the harness, not by me). The shape this rule exists for
    # - `push ebx; push esi; push edi` as a straight-line block near the top - is unaffected.
    first_jump = min((c["addr"] for c in ins if c["mnem"].startswith("j")), default=1 << 62)
    # Both sides as SETS. A function with four exits pushes its saved registers four times and pops them
    # four times too, so requiring the pushes to be distinct is a rule about single-exit functions, and it
    # took the frame writes away from an entry the old multiset comparison handled (0x10257ca0). What the
    # claim is really about is which REGISTERS the frame owns.
    if (body_saves and pushed_set == popped_set
            and max(c["addr"] for c in body_saves) < min(c["addr"] for c in body_pops)
            and max(c["addr"] for c in body_saves) < first_jump):
        written = {}
        for c in ins:
            if _writes_reg(c["mnem"], c["op"]):
                d = _dst_reg(c["op"])
                if d:
                    written.setdefault(d, []).append(c["addr"])
        safe = []
        for c in body_saves:
            r = c["op"]
            if r in safe:
                continue            # the first push on the earliest path is the one that has to be clean
            # a byte or word write counts too: `mov bl, 1` before `push ebx` means the slot held something
            # other than what arrived, and the lift cannot see the pairing Ghidra flattened away
            touched = [a for a in written.get(r, []) if after <= a < c["addr"]]
            if touched:
                break
            safe.append(r)
        if set(safe) == pushed_set:
            m["pushes"] = list(m["pushes"]) + safe
            # execution order, which is what the adapter's epilogue replays; the tail scan's list covered
            # only the pops that sat at the very end, and these subsume it
            # one pop per saved register, in the order the guest restored them - the body may restore the
            # same triple on every exit path, and unwinding that frame once per path would take esp with it
            _seen_pops, _pops = set(), []
            for c in body_pops:
                if c["op"] not in _seen_pops:
                    _seen_pops.add(c["op"])
                    _pops.append(c["op"])
            m["pops"] = _pops
            m["saves_recovered"] = True
            m["unreproduced_saves"] = 0
    # what each call actually loaded into ecx/edx/eax, read off the body rather than off the decompiler's
    # prototype (which drops them). See call_reg_values.
    ret_vals = {}
    call_reg_values(ins, sites, prologue_ops(ins, None, {}, arg_pushes=arg_pushes),
                    m.get("reg_args") or [], ret_out=ret_vals)
    m["ret_vals"] = ret_vals
    m["tail_writes"] = tail_reg_writes(ins, prologue_ops(ins, None, {}, arg_pushes=arg_pushes),
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
    # The note this count feeds says "the lift does not reproduce that stack write". Once the balanced
    # saves above have been handed to the adapter, it would be a lie - and a lie in an honest-looking
    # comment is the worst kind of documentation.
    if m.get("saves_recovered"):
        m["extra_pushes"] = 0

    # ---- shapes the lift cannot express yet
    m["has_x87"] = (any(c["mnem"] in X87_MNEMS for c in ins)
                    or bool(re.search(r"X87_(?:PUSH|POP|STORE)", "\n".join(c["stmt"] for c in ins))))
    if m["has_x87"]:
        # MEASUREMENT ONLY, exactly like COW_LIFT_ALLOW_PARTIAL: admit `fild` through the slice so the
        # population it would release can be counted and PROVED. The refusal still guards the report, not
        # the player - an unproven lifted unit never reaches table.c (ledger done -> genwraps -> table.c is
        # the only way in) - so a unit let through here can only ever be counted once cowdiff agrees. It
        # must never be set for a run whose files are kept. `fild` is admissible because its form is in
        # X87_FORM and its int->FP conversion is exact in a double; `fistp` is not, because fist32_cw rounds
        # nearest-even at the pinned control word where a C cast truncates.
        allow = ("fild",) if os.environ.get("COW_LIFT_ALLOW_FILD") == "1" else ()
        m["x87"] = x87_shape(ins, sites, allow=allow)
    # ---- the tail jump: `jmp FUN_x` where a normal function would have `call FUN_x; ret`
    #
    # There is no `ret` in such a body, so without this the whole family books `no_ret_in_body` (~1,300 of
    # the 1,601 - tools/cow/ghidra/lift_noret_diag.py) and the lifter looks like it cannot see functions
    # that are two instructions long. The generated body says exactly what the guest does:
    #
    #   10199776 jmp 0x10196a10   | { { REGS_STORE; f_10196a10(g); return; } }
    #
    # - a call into the target with NO return-address push and NO cleanup. And it is a real tail call: the
    # TARGET's `ret` is the one that pops the return-address slot (rt_return does `g->esp += 4 + argbytes`),
    # so the entry that tail-jumps must not also pop it, restore esp, or run its own epilogue. That is why
    # this is a distinct shape and not just another call site: the ADAPTER changes, not only the call.
    m["tail_jump"] = tail_jump_of(ins)
    # ---- the INTRA-BODY tail jump: a `jmp T` on a path of a body that also returns.
    #
    # ON BY DEFAULT since 2026-11-09, and only because it was measured first: the 54 units this released
    # were proven with tools/cow/ghidra/lift_proof.py and 33 passed cowdiff, which is what books them - no
    # number from a census was trusted to decide this. The knob is opt-OUT (`COW_LIFT_NO_INTRATAIL=1`) for
    # the A/B, exactly like COW_LIFT_NO_STRLOAD, so nobody has to remember to set a variable to get today's
    # behaviour, and the 21 that failed stay in the tree as lifted-but-unproven rows for the failure groups
    # that own them (eax 9 / memory 6 / edx 4 / out-of-region write 1 / fault 1).
    #
    # It is NOT a loosened refusal: the gate in intra_tail_jumps is what admits a unit, and it is narrower
    # than the family (103 of the 155 measured sites are pop-free; the ones that pop before jumping stay
    # refused until per-path pops exist). Pinning that gate is lift_selftest.py's INTRATAIL block, and every
    # one of its clauses was verified to fail against a module with the clause deleted.
    # ---- image constants the recompiler itself REBASES, per this unit.
    #
    # WHY THIS IS A SET AND NOT A RANGE TEST. `COW_IMG(x)` is `x + RD`, and the guest image does not load
    # where Ghidra linked it, so an in-image address that reaches the guest un-rebased is a pointer to the
    # wrong place. The lift inherits the problem from Ghidra's C, which prints such an address as a bare
    # number: 0x10004d80 reads `FUN_10312031(iVar1, 0x1034f8d4, param_1)` while the recompiler's own
    # translation of the same bytes pushes `(0x1034F8D4u + RD)`. Rebasing every hex value in the image range
    # would be the wrong fix - a count, a mask or a length that happens to land in that range would become a
    # pointer - so the authority is the generated body: a constant is an address FOR THIS UNIT only where the
    # recompiler spelled it `+ RD` in one of this unit's own statements.
    #
    # IT IS STILL AN APPROXIMATION (the same number can be an address in one instruction and a value in
    # another), and lift_proof CANNOT be the tie-breaker here: the portable harness maps the image at the
    # PREFERRED base - runtime/portable/pe.c calls rt_set_image(rt_image_base) with the comment "at the
    # preferred base: RD = 0" - so rt_reloc_delta is 0 in every cowdiff run and COW_IMG(x) == x. Measured:
    # 140 files change, 0 units newly pass, 0 flip to fail. So the rule stands or falls on matching the
    # recompiler's translation and on the REBASE contract cases in lift_selftest.py, and the knob stays
    # opt-IN until someone decides how much a by-construction fix is worth without a differential. (If a
    # differential is ever wanted, it is one argument away in pe.c - map at a base that is not the preferred
    # one and RD becomes non-zero, which is also the only way cowdiff could ever see this class at all.)
    # See ghidra_c._rebase_image_consts.
    m["rebased_consts"] = set()
    if os.environ.get("COW_LIFT_REBASE_IMG") == "1":
        for c in ins:
            for mm in REBASED_CONST_RE.finditer(c.get("stmt") or ""):
                v = int(mm.group(1), 16)
                if IMAGE_LO <= v < IMAGE_HI:
                    m["rebased_consts"].add(v)
    m["intra_tails"] = (intra_tail_jumps(ins)
                        if not m["tail_jump"] and os.environ.get("COW_LIFT_NO_INTRATAIL") != "1"
                        else [])
    m["string_ops"] = sorted({w for w in (string_op_of(c) for c in ins) if w})
    m["has_string_op"] = bool(m["string_ops"])
    if m["has_string_op"]:
        # Classified, not assumed. lift.py refuses the FUNCTION today for containing any rep; this is the
        # rule that says when Ghidra's own loop can be trusted instead (gen_model.string_shape).
        #
        # NAMED LOADS are admitted by default since 2026-11-09 (gen_model._str_load_named): a dword load of
        # `dwordptr[base+disp]` whose base resolves at the load is a read of a known guest address, which is
        # what rd32() says. Measured on the family before shipping it: emitted 7,532 -> 7,653 (+121) and
        # operand_load 556 -> 52; the rest moved downstream to stack_frame/unnameable rather than disappearing,
        # which is what an early refusal being removed looks like. The knob is now opt-OUT
        # (COW_LIFT_NO_STRLOAD=1) rather than opt-in, so the A/B stays possible and nobody has to remember to
        # set a variable to get today's behaviour. What decides a release is still lift_proof, not this number.
        m["string"] = string_shape(ins, sites,
                                   load_ok=(os.environ.get("COW_LIFT_NO_STRLOAD") != "1"))
    return m


TAIL_CALL_STMT = re.compile(r"\bf_([0-9a-fA-F]{6,8})\(g\)\s*;")

# The loaded image, as the recompiler sees it. One pair of numbers, used by both rules that ask "is this
# hex value an address in the guest's own image?" - the accessor-width reading in guest_global_widths and
# the rebased-constant set below. (It was two copies of the same literals.)
IMAGE_LO, IMAGE_HI = 0x10000000, 0x10C15000

# `(0x1034F8D4u + RD)` inside a generated statement: the recompiler's own declaration that this constant is
# an in-image ADDRESS and not a number. See model_generated["rebased_consts"].
REBASED_CONST_RE = re.compile(r"\b0x([0-9a-fA-F]{6,8})u?\s*\+\s*RD\b")


def param_types(c):
    """Ghidra's declared type for each `param_N`, as {1: "float", 2: "int", ...}.

    Why this exists: the adapter reads EVERY stack argument with `rd32` into a `CowU32`, which is right for
    the integer case and wrong for the one the decompiler explicitly says is a float. 0x100271f0 is the
    shape: Ghidra's prototype is `void FUN_100271f0(float *param_1, float param_2)` and its body is
    `*param_1 = param_2 * *param_1;`, while the generated body says `fld dword ptr [esp+8]` -> `X87_PUSH(rdf32(A))`.
    Reading the argument with rd32 hands the lifted body the float's raw BITS and it multiplies them as an
    integer - a wrong answer in every state, and one that looks entirely reasonable in the emitted C.

    The types are Ghidra's claim, not the oracle's, so this can only be as good as the decompiler: an
    unrecognised spelling comes back as the integer default, which is what the lift did before, so an
    unknown type costs a cowdiff failure and never a silent new behaviour.
    """
    i = c.find("{")
    sig = c[:i] if i >= 0 else c
    m = re.search(r"\bFUN_[0-9a-fA-F]{8}\s*\((.*)\)", sig, re.S)
    if not m:
        return {}
    out = {}
    depth = 0
    parts, cur = [], ""
    for ch in m.group(1):
        if ch in "([":
            depth += 1
        elif ch in ")]":
            depth -= 1
        if ch == "," and depth == 0:
            parts.append(cur)
            cur = ""
        else:
            cur += ch
    parts.append(cur)
    for p in parts:
        p = p.strip()
        nm = re.search(r"\bparam_(\d+)\s*$", p)
        if not nm:
            continue
        out[int(nm.group(1))] = re.sub(r"\s+", " ", p[:nm.start()].strip()) or "int"
    return out


def epilogue_pop_run(ins):
    """The registers the body pops at its very end, in push order - THE authority on the adapter epilogue.

    model_generated reads it to build the epilogue and the prologue (a function that pops esi, ebx, edi at
    the end pushed esi, ebx, edi at the start in that order), and intra_tail_jumps compares a tail path's
    pops against it. Both must mean the SAME thing, so it is computed in one place: an inline tail pop that
    agrees with one reading of "the epilogue pops" and not the other is a register restored on one path and
    lost on the other.

    `ret` and `leave` are skipped rather than being run-breakers, so a body ending `pop esi; leave; ret`
    still reports [esi] - but a caller that has to reason about the esp movement itself (the tail gate) must
    look at `leave` separately, because leave moves esp in a way a pop does not.
    """
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
    return list(reversed(tail))


def _pop_run_directly_above(ins, idx, epilogue_pops):
    """The registers popped in an unbroken run immediately above ins[idx], or None if it is not one.

    This is what lets a tail unit that DOES pop be admitted at all, and it is deliberately not "does a pop
    line appear before the jump in the body text". The text-order version of that test was written, shipped
    into a census tag, and deleted the same day: in the flattened body a pop can belong to a different path
    and still sit above the jump, so its position proves nothing about whether the jumping path ran it.

    What does prove it: the pops are CONTIGUOUS with the jump, so the only thing between them and it is
    straight-line code, and they are EXACTLY the epilogue's own pops - the same registers, the same order -
    which is the shape a compiler emits when it ends one path with `pop esi; pop ebx; jmp T`. And no branch
    anywhere in the function may target an address inside the run, because a jump into the middle of it
    would let a path reach the tail without having popped (the same merge that tail_jump_of refuses for the
    exit itself).

    Returning None refuses the UNIT, not just this site: a site whose pops cannot be established would
    still set the tailed-out flag and skip the adapter epilogue, which is precisely the lost restore this
    whole gate exists to prevent.
    """
    run = []
    j = idx - 1
    while j >= 0 and ins[j]["mnem"] == "pop" and ins[j]["op"] in SAVED_REGS:
        run.append(ins[j]["op"])
        j -= 1
    run.reverse()
    if run != list(epilogue_pops):
        return None
    run_addrs = {ins[k]["addr"] for k in range(j + 1, idx)}
    for c in ins:
        for jm in re.finditer(r"\bj\w*\s+0x([0-9a-f]{1,8})\b", c.get("text") or ""):
            if int(jm.group(1), 16) in run_addrs:
                return None
    return run


def intra_tail_jumps(ins):
    """[{'target': int, 'addr': int, 'used': False}, ...] for `jmp T` statements inside a body that RETURNS.

    The sibling of tail_jump_of, kept separate because the two shapes need different adapters. That one
    owns the body with NO `ret` at all, whose adapter has no epilogue whatsoever. This is the case where a
    body returns on one path and tail-jumps on another:

        10018b1e pop esi                     { uint32_t v = rd32(esp); esp += 4; esi = v; }
        10018b1f jmp 0x10071050              { REGS_STORE; f_10071050(g); return; }
        ...
        10018b25 ret                          esp += 4; REGS_STORE; return;

    Note what the GENERATED body does with the tail: it emits a plain host call to the target and returns,
    and the tail path deliberately has no `esp += 4` - the TARGET's `ret` is the one that pops the
    return-address slot out of our caller's frame. So a tail jump is a call, and the recompiler already
    knows it. What the lift cannot do yet is express it per-path: for a LIFTED unit the cleanup is hoisted
    out of the body into ADAPTER_TMPL, which runs `{epilogue}; g->esp = sp0; rt_return(...)` once after
    `cow_lift_x(g)` returns, on every path. Letting the tail path return normally would run that cleanup a
    second time - a double-pop - so the lifted function reports which way it left and the adapter honours
    it. See lift.py INTRA_TAIL_CALL and the queue entry `leftover_unbridged_call`.

    THE GATE, and why it is this narrow. `leave` is refused outright: it moves esp in a way a pop does not,
    and nothing here models that on a per-path basis. Otherwise a body is admitted when, for EVERY tail
    site, the pops the tail path is required to have run can be established - which means either there are
    none anywhere in the body (the shape this shipped with first: 103 of the 155 measured sites), or the
    epilogue's own pops sit CONTIGUOUSLY directly above that jump and match it register-for-register and
    order-for-order, with no branch entering the run. See _pop_run_directly_above for why that is the test
    and text order is not; in short, pops are kept as SETS precisely because a multi-exit function pops its
    saved registers once per path (see _saved_register_saves), so a pop line merely appearing above the
    jump in the flattened body proves nothing about whether the jumping path executed it - and skipping the
    adapter epilogue on the strength of that would lose a restore the guest really performed. Where a pop
    belongs to the tail path it is emitted INLINE there (lift.py gives each site a `pops` list); running the
    adapter's pops afterwards reads `rd32(esp)` at an esp the target's `ret` already moved, which is a
    corrupted read, not a harmless no-op.

    A `jmp` whose target is inside this function is control flow, not a call; requiring the generated
    statement to be `f_<T>(g);` is what separates the two, because that spelling only appears when the
    recompiler itself decided the jump entered another function.
    """
    if not ins:
        return []
    if not any(c["mnem"] == "ret" for c in ins):
        return []                     # the no-ret shape belongs to tail_jump_of, and to TAIL_ADAPTER_TMPL
    if any(c["mnem"] == "leave" for c in ins):
        return []                     # leave moves esp in a way a pop does not; still out of scope
    pops = epilogue_pop_run(ins)
    out = []
    own = {c["addr"] for c in ins}
    for idx, c in enumerate(ins):
        if c["mnem"] != "jmp":
            continue
        stmt = c.get("stmt") or ""
        m = TAIL_CALL_STMT.search(stmt)
        if not m or "return" not in stmt:
            continue
        tgt = int(m.group(1), 16)
        if tgt == c["addr"] or tgt in own:
            continue                  # jmp to self spins; a target inside this body is control flow
        # A body that pops at all must have popped EVERY epilogue register, contiguously, directly above
        # this jump - otherwise the flag would skip a restore the guest really ran. Sites that pop nothing
        # (pops == []) pass this trivially, which is the 103-unit subset this shipped with first.
        run = _pop_run_directly_above(ins, idx, pops)
        if run is None:
            return []
        e = {"target": tgt, "addr": c["addr"], "used": False}
        if run:
            e["pops"] = list(run)
        out.append(e)
    return out


def registers_never_written(ins):
    """The tracked registers this body does not write ANYWHERE.

    For one of those, `g-><reg>` is not a guess at the entry's value - it IS the value, at every point in
    the body, because nothing between entry and that point touched it. That is the same argument
    call_reg_values uses to make an unwritten register a legal leaf at a call site, and the tail jump needs
    it: the lifted body keeps what it computes in Ghidra locals, so a register it never writes is the one
    case where reading the Guest back is exactly right.
    """
    written = set()
    for c in ins:
        if _writes_reg(c.get("mnem") or "", c.get("op") or ""):
            r = _dst_reg(c.get("op") or "")
            if r:
                written.add(r)
    return set(REG32) - written


def tail_jump_of(ins):
    """{'target': int, 'addr': int, 'regvals': {...}} for a body that ends in a static tail jump, else None.

    Deliberately the narrowest shape that can be right, because ~1,300 units are booked on it:

      - the body has NO `ret` at all (a unit that returns on some path and tail-jumps on another needs
        per-path epilogues, which the lift cannot express - it stays refused);
      - it ends in exactly ONE `jmp`, and that jmp's own translated statement calls `f_<hex>(g)` - the
        recompiler's rendering of a jump into a function. An indirect `jmp dword ptr [eax+0x29c]` is not
        this shape (27 of the sample) and a jump to a local label is control flow, not a call;
      - no other branch leaves the function, and no `call` sits after the last thing that could matter...
        in practice: no `call` at all after the last instruction is guaranteed by "it is the last one".

    Note what is NOT a condition: balanced pushes and pops. An entry that does `push ebx; jmp target` is
    the guest's own behaviour - the target's `ret` really does pop the saved ebx off the stack as its return
    address - and the lift reproduces that by replaying the push in the prologue and having NO epilogue, so
    esp arrives at the target exactly where the hardware would leave it. Requiring balance would have lost
    those units for no safety at all.

    The register values the target will read are named through the SAME restricted vocabulary as a call
    site (see call_reg_values): a register the walk cannot name comes back None, and the caller must
    refuse rather than pass the entry value. Passing `g->reg` for a register the body computed is the
    argcount_mismatch failure exactly, measured at 20/207 = 10%.
    """
    if any(c["mnem"] == "ret" for c in ins):
        return None
    last = ins[-1] if ins else None
    if not last or last["mnem"] != "jmp":
        return None
    # only one jmp may be a jump-into-a-function; the others are internal control flow and must not be
    # confused with the exit (a body that tail-jumps twice on two paths is two exits)
    jmps = [c for c in ins if c["mnem"] == "jmp"]
    calls = [c for c in jmps if TAIL_CALL_STMT.search(c.get("stmt") or "")]
    if len(calls) != 1 or calls[0] is not last:
        return None
    m = TAIL_CALL_STMT.search(last["stmt"])
    if not m:
        return None
    tgt = int(m.group(1), 16)
    if tgt == last["addr"]:
        return None            # jmp to self: not a call, and lifting it would spin
    # a jump INTO the body from elsewhere is a merge the linear walk cannot see; the walk that names the
    # registers has to know that, so it is refused here rather than trusted.
    for c in ins:
        for jm in re.finditer(r"\bj\w*\s+0x([0-9a-f]{1,8})\b", c.get("text") or ""):
            if int(jm.group(1), 16) == last["addr"]:
                return None
    return {"target": tgt, "addr": last["addr"]}


# ------------------------------------------------------------------------ the x87 shallow-scratch shape
#
# Why a unit with x87 code can be lifted AT ALL
# ----------------------------------------------
# cowdiff compares the guest's FP state at return: `o->top` and `o->st0 = g->st[g->top & 7u]`
# (tools/cow/cowdiff.c). A decompiler's float arithmetic is not an x87 stack, so the naive lift of an
# x87 function cannot be right - which is why this family refused for the whole of phase B. But there is
# a shape in which the FP stack is NOT part of what the function is, and that shape can be lifted from
# Ghidra's float expressions exactly like an integer function can: the unit uses the stack as SCRATCH.
#
# The contract, stated as the lifter can check it off the generated body's own instruction list:
#
#   every value the unit operates on is one THIS unit pushed      (an op at depth 0 reads ST(0) out of
#                                                                  the caller's frame, which the lifted C
#                                                                  has no way to produce or clobber)
#   the stack is empty at every call                               (the generated body X87_STOREs before
#                                                                  calling, so a live value is an argument
#                                                                  the callee can read)
#   the stack is empty at the end                                  (a value left behind changes top)
#   it never goes deeper than one                                  (ST(1) and below is caller state, and
#                                                                  a p-form pop at depth 1 pops the
#                                                                  CALLER's register: X87_POP moves the
#                                                                  popped value into ST(7), so even a
#                                                                  "balanced" pair can clobber a slot)
#   no instruction names an ST register in its operands            (fmul st(1), fadd st(0),st(1), fxch...)
#
# Under that contract the guest's top/st0 are provably UNCHANGED by the unit, and the only FP effect
# that survives into what cowdiff compares is what the unit STORES to guest memory and what it returns -
# both of which Ghidra does model, as ordinary float arithmetic on locals. fcw is pinned 0x027F by both
# the harness and the runtime, whose PC field is 53-bit, so fr_cw() is the identity and the double-vs-
# float intermediate difference is the only remaining arithmetic risk. That risk is why this is gated by
# a proof sample rather than by reasoning: a chain of float ops rounded per-step is not always the same
# answer as one rounded per-result.
#
# WHAT IS DELIBERATELY NOT HERE
# -----------------------------
#   faddp/fmulp/fsubp/fsubrp  - pop the caller's register at the depths this gate allows
#   fcom/fcomp/fucom/fcomi    - set C3C2C0, and the fuzzed FP registers plus rdf32 of fuzzed BYTES can
#                               produce NaN, where the unordered case picks a different branch
#   fild/fist/fistp           - fist32_cw rounds per the control word (nearest-even at 0x027F); Ghidra
#                               emits a C cast, which TRUNCATES. A silent, systematic wrong answer.
#   fdiv/fdivr/fsqrt/fyl2x/... - no proven vocabulary in layout/x87.h for them, and inventing it here
#                               would be the same guess the hand units stopped making for a reason.
#   any `st(` operand         - caller state.
#
# Each of those is a real, separate piece of work with its own measurement; the census
# (tools/cow/ghidra/lift_x87diag.py) sized them. Refusing them keeps the report honest: an emitted unit
# is one whose FP state agreement is PROVED by the contract above, not one that happened not to be
# caught.
X87_SLICE_PUSH = {"fld", "fldz", "fld1", "fldpi"}
X87_SLICE_ONES = {"fst", "fstp", "fadd", "fmul", "fsub", "fsubr", "fchs", "fabs"}

# What each admitted form DOES to the stack, read off the recompiler's own renderings in generated/all
# (verified by printing them, not assumed):
#   push   emits X87_PUSH(...)                     - fld/fld1/fldz/fldpi/fild
#   pop    emits X87_POP()                         - fstp/fistp
#   store  reads x87_s0, no POP                    - fst/fist
#   arith  rewrites x87_s0 in place, neither push nor pop - fadd/fmul/fsub/fsubr/fchs/fabs
# The gate checks an op against the depth its FORM implies, which is why fadd with a memory operand (no
# push, no pop) must be read at depth 1 rather than as a delta. An op with no entry here cannot be allowed
# by x87_shape(..., allow=...) at all - raise, do not guess.
X87_FORM = {
    "fld": "push", "fldz": "push", "fld1": "push", "fldpi": "push", "fild": "push",
    "fstp": "pop", "fistp": "pop",
    "fst": "store", "fist": "store",
    "fadd": "arith", "fmul": "arith", "fsub": "arith", "fsubr": "arith",
    "fchs": "arith", "fabs": "arith",
}


def x87_shape(ins, sites, allow=(), max_depth=1):
    """Classify an x87 unit against the shallow-scratch contract. Returns a dict with `liftable` and,
    when it is not liftable, `why` - the single reason the unit is still refused.

    `allow` names extra mnemonics to admit WITHOUT relaxing anything else: each must appear in X87_FORM (so
    the census cannot wish a form into existence), must still sit at the depth its form implies, must still
    not name an ST register, and the stack must still end balanced. It exists so the tools that PRICE a
    proposed widening (lift_fild_diag.py) exercise the same code the lifter runs, and so a selftest can
    assert what a widening would admit before anyone ships it.

    `max_depth` is the same idea for the structural clause: the contract's real requirement is that the
    unit's FP values are its OWN (never read from below what it pushed) and that the stack is balanced at
    every call and at the end. Depth 1 is what production ships, and the ST-register clause is what keeps
    depth 2 honest: an op that needs the value BELOW its own top has to name `st(1)`, which is refused, so a
    unit that reaches depth 2 without ever naming an ST register can only be LIFO scratch - a value pushed
    and stored back without the other one being touched. A census uses this to price the widening; the
    lifter does not pass it, and lift_x87refactor_check.py is what proves the default is unchanged.

    Depth is tracked off the generated body's own X87_PUSH/X87_POP, not off the mnemonics, because the
    generated body is what the runtime will actually execute and it is the same source every other shape
    fact in this file comes from.
    """
    extra = set(allow)
    bad_form = extra - set(X87_FORM)
    if bad_form:
        raise ValueError("x87_shape: cannot allow %s, no form is defined for it" % sorted(bad_form))
    call_addrs = {s["addr"] for s in sites}
    depth = peak = 0
    ops = set()
    for c in ins:
        mn = (c.get("mnem") or "").lower()
        stmt = c.get("stmt") or ""
        text = (c.get("text") or "").lower()
        is_fp = mn in X87_MNEMS or "X87_PUSH" in stmt or "X87_POP" in stmt
        before = depth
        depth += len(re.findall(r"X87_PUSH", stmt))
        depth -= len(re.findall(r"X87_POP", stmt))
        if depth < 0:
            # pops more than it pushed: the unit consumes a register the CALLER left behind
            return {"liftable": False, "why": "pops_caller_state", "ops": sorted(ops),
                    "peak": peak, "final": depth}
        peak = max(peak, depth)
        if not is_fp:
            if (c.get("mnem") or "") == "call" and before > 0:
                return {"liftable": False, "why": "fp_live_across_call", "ops": sorted(ops),
                        "peak": peak, "final": depth}
            continue
        ops.add(mn)
        # an ST register in the operands is caller state (or a stack shuffle) however the depth reads.
        # This clause is what makes a deeper max_depth safe rather than merely looser: reaching into the
        # value below your own top is exactly the thing a scratch unit is not allowed to do.
        if "st(" in text:
            return {"liftable": False, "why": "st_register_operand", "ops": sorted(ops),
                    "peak": peak, "final": depth}
        form = X87_FORM.get(mn)
        if mn not in X87_SLICE_PUSH and mn not in X87_SLICE_ONES and mn not in extra:
            return {"liftable": False, "why": "op_not_in_slice:" + (mn or "marker"),
                    "ops": sorted(ops), "peak": peak, "final": depth}
        if form == "push":
            # a push is legal while the stack can still grow; "before != 0" would have hard-wired depth 1
            # and made max_depth a lie, which is exactly the kind of knob-that-does-nothing a census then
            # reports numbers from
            if depth > max_depth:
                return {"liftable": False, "why": "push_beyond_one" if max_depth == 1
                        else "stack_too_deep", "ops": sorted(ops),
                        "peak": peak, "final": depth}
        elif form in ("store", "arith"):
            if before < 1 or before > max_depth:
                return {"liftable": False, "why": "op_at_wrong_depth" if before == 0 else "op_beyond_one",
                        "ops": sorted(ops), "peak": peak, "final": depth}
        # form == "pop": the balance check above already moved it; a pop at depth 0 went negative and was
        # refused as pops_caller_state, and peak/final catch the rest
    if depth != 0:
        return {"liftable": False, "why": "leaves_value_on_stack", "ops": sorted(ops),
                "peak": peak, "final": depth}
    if peak > max_depth:
        return {"liftable": False, "why": "stack_too_deep", "ops": sorted(ops),
                "peak": peak, "final": depth}
    if not ops:
        return {"liftable": False, "why": "markers_only", "ops": [], "peak": peak, "final": depth}
    return {"liftable": True, "why": None, "ops": sorted(ops), "peak": peak, "final": depth}


# The real x86 string instructions, matched as whole words with their optional repeat prefix.
#
# The predicate this replaces was `c["text"].lower().startswith(STR_MNEMS)`, and STR_MNEMS contains bare
# "movs" - so `movsx ecx,ax` (sign-extend) and `movss xmm0,[ecx]` (SSE scalar move) both "contained a
# string instruction". 1,328 of the 2,560 functions refused as string_op_not_modelled - 51.9% - have no
# string instruction in them at all, and movsx/movss are instructions the lift models perfectly well. A
# prefix match on a mnemonic is not a classifier: it decided the fate of fifteen hundred functions by
# accident. The \b below is what does the work - after the optional width letter, `movsx` and `movss` have
# no boundary there, so they cannot match, while `movs` on its own (a real form) still can.
_STR_RE = re.compile(r"^(?:(?:rep|repe|repz|repne|repnz)\s+)?"
                     r"(movs[bdwq]?|stos[bdwq]?|scas[bdwq]?|cmps[bdwq]?|lods[bdwq]?)\b")


def string_op_of(c):
    """The canonical string-instruction form of this instruction ("rep movsd", "scasb"), or None.

    Returning WHICH op, rather than a boolean, is deliberate: the generated body already translates every
    one of these into a complete C loop over rd*/wr* with the direction flag honoured, so the next step is
    to model them one idiom at a time and needs to know which idioms a body actually contains.

    A repeat prefix makes the instruction unambiguous. Without one it does not: `movsd` is simultaneously
    the string move and the SSE scalar move (`movsd xmm0, dword ptr [esi]`), so an unprefixed match has to
    show the segment-qualified destination the string form always carries (`es:[edi]`), or for `lods` the
    eax-from-[esi] pair. Without that test the fix below would just move the false positives around.
    """
    for src in ((c.get("text") or ""), (c.get("mnem") or "")):
        src = src.strip().lower()
        if not src:
            continue
        mm = _STR_RE.match(src)
        if not mm:
            continue
        prefix = src[:mm.start(1)].strip()
        word = mm.group(1)
        if not prefix:
            if word.startswith("lods"):
                # lods is a mnemonic no other instruction class shares, but the destination is al/ax/eax
                # depending on width - so the load source is the evidence, not the destination
                if "esi" not in src:
                    continue
            elif "es:[edi]" not in src:
                continue
        return ("%s %s" % (prefix, word)) if prefix else word
    return None


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


def partial_write_sequence(ins):
    """Every write to a tracked 32-bit register, in program order, WITH the width the guest used.

    ``partial_reg_writes`` answers "does this body write any register partially", which is enough to refuse
    on and useless to translate with. This answers the question the lift actually has to ask: for the k-th
    write to R, how many bits did the guest touch?

    The widths come back as ``full`` / ``low8`` / ``high8`` / ``low16``. Only the generated instruction
    list has this information: the decompiler has already flattened ``xor al,al`` and ``mov ax,imm`` into
    assignments to the whole register, which is exactly what made hundreds of entries fail on ``eax``
    while looking perfectly translated - and why the lift refuses rather than guesses.

    Registers the body never writes are absent, so a caller can distinguish "no writes" from "writes none
    of which are partial".
    """
    out = {}
    for c in ins:
        op = c.get("op") or ""
        if "," not in op and not op:
            continue
        dest = op.split(",")[0].strip()
        mnem = c.get("mnem") or ""
        if not mnem or mnem.startswith("j") or mnem in ("push", "pop", "call", "ret", "nop", "leave",
                                                         "cld", "std", "wait", "fwait", "int3", "int"):
            continue
        if dest in SUBREG:
            reg, width = SUBREG[dest], _subreg_width(dest)
        elif dest in TRACKED_REGS:
            reg, width = dest, "full"
        else:
            continue
        if width is None:
            continue
        out.setdefault(reg, []).append(width)
    return out


def _subreg_width(sub):
    """How a sub-register name maps to the slice of its 32-bit parent it covers."""
    if sub.endswith("h"):
        return "high8"
    if sub.endswith("x"):
        return "low16"
    return "low8"          # al, cl, dl, bl, spl, bpl, sil, dil


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


def tail_reg_writes(ins, ops, reg_args):
    """[(reg, C expression)] for the registers the entry writes after its last store/call/branch.

    The window is the straight-line run from just after the last instruction that could have an effect, up to
    the `ret`. Inside it a load may be re-read at return time, because nothing between the two can have
    written memory - that is the whole argument, and outside it nothing here is allowed to name a load.

    Deliberately narrow, because the payoff is a value the caller reads back and the cost of being wrong is a
    unit that proves nothing while looking right:
      - the body must end at a `ret` (no tail call, no falling off the end),
      - no jump may sit inside the window, and no jump may TARGET into it,
      - a register the walk cannot name is skipped, never guessed,
      - the value comes from the same environment the call-site registers use, so it can only mention a
        parameter, a register the adapter maintains, a constant, or arithmetic over those - or, in this
        window only, a read at a nameable address.
    """
    ret_i = None
    for k, c in enumerate(ins):
        if c["mnem"] == "ret":
            ret_i = k
            break
    if ret_i is None or ret_i == 0:
        return []

    # TWO boundaries, not one, because a store and a call disqualify an entry for different reasons.
    #
    # A `call` or a jump moves the REGISTERS, so it truncates the run that may be emitted at all. A `store`
    # moves MEMORY, and the walk's expressions do not read memory unless they contain an `rd*()` - every
    # register they name has already been substituted away, leaving only constants, adapter parameters and
    # registers the body never writes (see the substitution in the walk below, and `_value_expr`'s allow_load
    # window). So a store after a write cannot change what a store-free expression evaluates to, and the old
    # single boundary was refusing those units outright: measured on the `eax` failure rows, 61 of the 198
    # live-out cases are a plain register/constant compute sitting just before a trailing `mov [p],r`, which
    # is a copy-epilogue shape, not a reason to hand the caller a stale register.
    #
    # The load boundary stays exactly where it was. Nothing here loosens WHEN a load may be named - only when
    # a value that reads nothing may be replayed.
    def effecting(c, stores=True):
        if c["mnem"] in ("call", "ret", "leave", "int3") or c["mnem"].startswith("j"):
            return True
        return bool(stores and re.search(r"\bwr(8|16|32|64|f32|f64)\(", c["stmt"]))

    start = start_load = 0
    for k in range(ret_i):
        if effecting(ins[k], stores=False):
            # a call or a jump moves the registers themselves: both runs end here
            start = start_load = k + 1
        elif effecting(ins[k]):
            # a store moves only memory: the load run ends, the register run does not
            start_load = k + 1
    # `start_load` is the boundary this function has ALWAYS used (stores count), so the run from it to the
    # `ret` is the NARROW window: everything admitted there is admitted on the old argument, under the old
    # checks, unchanged. `start` is the new, store-neutral one. The run between the two is purely additive,
    # and that distinction is not decoration - the first version of this change applied its new guards to the
    # whole wide window and immediately un-proved two units the record had as passing, because a guard that
    # is stricter than the code it replaces is not a widening, it is a regression wearing a hypothesis as a
    # coat. So the guards below are scoped to the extra run: a register whose last write is at or after
    # `start_load` is emitted exactly as it was before, and only one written in [start, start_load) has to
    # clear the stronger bar.
    window = ins[start:ret_i]
    if not window:
        return []
    narrow = start_load < ret_i
    # A load may be named only from the run that no store follows. `not narrow` means the instruction just
    # before the `ret` writes memory, so that run is empty and no load may be named at all.
    lo_load = ins[start_load]["addr"] if narrow else None
    lo = window[0]["addr"]

    # ---- the checks the original code made, kept as it made them, against the NARROW window. Not "kept
    # because they are sufficient" - the same three holes exist there and cowdiff has simply never walked
    # into them - but because a unit that the differential already proved must not be pulled back out of the
    # population by a change that was only ever meant to add coverage. Tightening them is a separate,
    # measured decision with its own regression budget, not a free rider on this one.
    if narrow:
        for c in ins:
            for m in re.finditer(r"\bj\w*\s+0x([0-9a-f]{1,8})\b", c["text"]):
                tgt = int(m.group(1), 16)
                if lo_load <= tgt < ins[ret_i]["addr"]:
                    return []

    # ---- the checks the EXTRA run has to pass. To emit `g->reg = <expr>` at the return is to say: every
    # path that reaches this `ret` passed through that write, and reached it with the registers the expression
    # names holding what the walk saw. Three ways that fails:
    #
    #   a jump may LAND inside the run (entered with registers the walk never saw),
    #   a jump may SKIP the run and reach the `ret` without the write,
    #   a jump may have destinations the listing does not decode.
    #
    # One bound covers the first two - a jump may not target anything at or after the run's first instruction.
    # Note it does NOT stop at the `ret`'s own address the way the narrow check above still does: `jxx <the
    # ret>` steps over the entire run, and for the extra coverage that is a wrong value, not a missing one.
    # The third is an operand that is not a bare hex literal, so there is nothing to compare to the bound.
    #
    # Both were bought with units the record called PROVEN, not from a reading:
    #   `0x1019d7c0` ends `ja L / jmp dword ptr [ecx*4 + 0x1019d878] / mov eax,0x24 / store / ret` - a switch
    #     through a table the listing does not decode, so nothing could ask whether one of its dozen
    #     destinations is the `mov eax,0x24` itself. It emitted `g->eax = 36u` for a fall-through that is one
    #     arm among many.
    #   `0x1025e260` is `test eax,eax / jge L2 / inc eax / store / ret / L2: dec eax / store / ret` - walking
    #     only to the FIRST ret put `inc eax` in the run and emitted `g->eax = g->eax + 1`, true on one return
    #     and false on the other. The walk cannot say what a register holds at a return it does not visit.
    #     (Precedent: `call_reg_values` collapses disagreement across returns to None - "half a truth about a
    #     return value is worse than none".)
    wide_ok = True
    if start < start_load:                 # only when there IS an extra run to protect
        if sum(1 for c in ins if c["mnem"] == "ret") != 1:
            wide_ok = False
        else:
            for c in ins[:ret_i]:
                if not c["mnem"].startswith("j"):
                    continue
                if not re.fullmatch(r"0x[0-9a-fA-F]{1,8}", c["op"] or ""):
                    wide_ok = False          # destinations unknown: it may enter the run
                    break
                if int(c["op"], 16) >= lo:
                    wide_ok = False          # it lands in the run, or steps over it to the ret
                    break

    replayed = {o["addr"] for o in ops if o["kind"] in ("regwrite", "replay")}
    written_ever = {r for c in ins for r in ([_dst_reg(c["op"])] if _writes_reg(c["mnem"], c["op"]) else [])
                    if r}

    targets = set()
    for c in ins:
        for m in re.finditer(r"\bj\w*\s+0x([0-9a-f]{1,8})\b", c["text"]):
            targets.add(int(m.group(1), 16))

    def fresh():
        return {r: (None if r in written_ever else "g->%s" % r) for r in REG32}

    env = fresh()
    # an incoming register argument is the adapter's parameter, named where the epilogue can still reach it
    for i, r in enumerate([x for x in ("ecx", "edx") if x in (reg_args or [])]):
        env[r] = "param_%d" % (i + 1)

    last = {}          # register -> the expression of its LAST write inside the window (None: unnameable)
    last_at = {}       # register -> the index of that write, to tell the narrow run from the extra one
    writes_seen = []   # (register, expr) in order, to keep the emission order stable
    for k, c in enumerate(ins[:ret_i]):
        # The environment is walked from the top of the body - the window decides what is EMITTED, not what
        # is known: `mov eax, esi` in the tail is only nameable if the walk saw `mov esi, ecx` back at the
        # start. A load is still allowed only inside the LOAD window, where nothing after it writes memory;
        # that is a strictly smaller run than the one that decides emission, and the two must not be merged.
        in_window = c["addr"] >= lo
        in_load_window = lo_load is not None and c["addr"] >= lo_load
        if c["addr"] in targets:
            env = fresh()
        if c["mnem"] == "call":
            for r in CALLER_SAVED:
                env[r] = None
            continue
        if not _writes_reg(c["mnem"], c["op"]):
            continue
        dst = _dst_reg(c["op"])
        if dst not in REG32:
            continue
        src = c["op"].partition(",")[2]
        if c["addr"] in replayed:
            expr = "g->%s" % dst
        elif c["mnem"] in ("xor", "sub", "sbb") and c["op"] == "%s,%s" % (dst, dst):
            expr = "0u"
        else:
            expr = _value_expr(c["mnem"], dst, src, env, allow_load=in_load_window)
        if not expr or len(expr) > MAX_EXPR:
            expr = None
        env[dst] = expr
        if in_window:
            writes_seen.append((dst, expr))
            # The register's LAST write inside the window decides what it holds at the return - including
            # when that write is one the walk cannot name. Dropping an unnameable write and keeping the
            # previous one is how `mov ebp, esp` got replayed into a register the guest had just restored
            # with `pop ebp`: three rows that used to pass began failing on ebp, same shape, same answer.
            last[dst] = expr if (expr and expr != "g->%s" % dst) else None
            last_at[dst] = k
    # Emit in first-write order, so an expression that names another replayed register reads it before that
    # one is overwritten; skip any register whose last write the walk could not name.
    order = []
    for _r, _e in writes_seen:
        if _r not in order:
            order.append(_r)
    # The tier filter. A write at or after `start_load` is the old narrow window and needs nothing new of it.
    # A write earlier than that exists only because this change widened the run, and it is emitted only while
    # the extra run holds up as straight line - so a body that fails that test loses precisely the coverage
    # this change offered it, and keeps every coverage it already had.
    return [(r, last[r]) for r in order
            if last.get(r) and (wide_ok or last_at.get(r, ret_i) >= start_load)]


RET_VAL_REGS = ("eax", "edx", "ecx", "ebx", "esi", "edi", "ebp")


def call_reg_values(ins, sites, ops, reg_args, ret_out=None):
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
    ret_seen = []

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
    # WHY each register is currently unnameable. The walk turns a name into None in four different places
    # and they are four different jobs, so a single "unnameable" tag would price this family exactly the
    # way argcount_mismatch was mis-priced until _push_values started naming its bail-outs.
    why_unnamed = {r: "never-written" for r in REG32}

    def unnamed(r, cause):
        env[r] = None
        why_unnamed[r] = cause

    # The walk keeps its index because `_base_why_deep` needs it for the census. It deliberately does NOT
    # consult `_load_nameable`: the deferred-read model that would have used it is measured at zero units and
    # is explained at the `_value_expr` call below.
    for i, c in enumerate(ins):
        if c["addr"] in targets:
            env = fresh()
            for r in REG32:
                why_unnamed[r] = ("never-written" if r not in written_ever else "merge-jump-target")
            pending = []          # a jump target: whatever the linear walk tracked is not on this path
        mnem, op = c["mnem"], c["op"]
        if mnem == "call":
            for s in sites:
                if s["addr"] == c["addr"] and "regvals" not in s:
                    s["regvals"] = {r: env.get(r) for r in ("ecx", "edx", "eax")}
                    s["push_values"] = _push_values(s, pending, ins)
                    s["target_expr"] = _target_expr(s, env, why_unnamed)
                    if s["target_expr"] is None:
                        # One level down, for the census only. `mem-base-unnameable:edx=...mov` says the
                        # vtable register came from a mov; it does not say that the mov was
                        # `mov edx, dwordptr[ecx]` with ecx - the object pointer - itself unnamed. That
                        # distinction is the whole family (measured: 1,051 of 1,051 refusing mem sites are
                        # exactly that two-load chain), and without it the next fix gets guessed at.
                        deep = _base_why_deep(ins, i, s, env, why_unnamed)
                        if deep:
                            s["target_why_deep"] = deep
            pending = []
            for r in CALLER_SAVED:
                unnamed(r, "clobbered-by-intervening-call")   # not the caller's value any more
            continue
        if mnem in ("ret", "leave", "int3"):
            # What the entry is about to hand back in the registers a caller can read. The prefix replay
            # stops at the first store/call/branch it cannot express, so without this the lift returns the
            # fuzzer's leftovers wherever the guest computed something on its way out.
            if mnem == "ret":
                ret_seen.append({r: env.get(r) for r in RET_VAL_REGS})
            env = fresh()
            for r in REG32:
                why_unnamed[r] = ("never-written" if r not in written_ever else "reset-at-ret")
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
            # No `allow_load` here on purpose. A load COULD be deferred into an indirect call's base
            # expression (see `_load_nameable` below for the window rule and `_base_why_deep` for why the
            # family needs it: 1,051 of 1,051 refusing sites are a two-load chain). It was built, tightened
            # and measured: with the sound rule the clause releases 12 sites and ZERO units, because all 12
            # are then refused by `bare_deref_width_unknown` - and the looser version, which named 197 sites,
            # was unsound in a way the harness did not catch: an address expression containing `g->reg` is a
            # LIVE read of the guest register at the moment the expression is evaluated, not the frozen value
            # at the load. Keep the classifier; do not re-add the hook until the deref-width wall behind it
            # is gone, or this buys nothing and risks everything.
            expr = _value_expr(mnem, dst, src, env)
        env[dst] = expr if expr and len(expr) <= MAX_EXPR else None
        if expr is None:
            why_unnamed[dst] = "written-by-unnameable-instruction:%s" % mnem
        elif len(expr) > MAX_EXPR:
            why_unnamed[dst] = "expression-too-long:%s" % mnem
        else:
            why_unnamed[dst] = "named"

    for s in sites:
        s.setdefault("regvals", {r: None for r in ("ecx", "edx", "eax")})
    # The value EVERY return agrees on, per register. Disagreement is None: half a truth about a return
    # value is worse than none, because it reads like the whole one.
    if ret_out is not None:
        for r in RET_VAL_REGS:
            vals = {x[r] for x in ret_seen} if ret_seen else {None}
            ret_out[r] = vals.pop() if len(vals) == 1 else None
    return sites


def _target_expr(site, env, why_unnamed=None):
    """C for the address an indirect call jumps through, or None when the body cannot name it.

    The three shapes `model_generated` categorised, in the order they appear in real code:

      ("reg", "ebx")                    ebx held by the body at this point  ->  g->ebx / param_1 / ...
      ("mem", "ecx", 0x18)              rd32 of an expressible address      ->  rd32((uint32_t)(g->ecx + 0x18u))
      ("abs", 0x10311c6c)               a global that holds the pointer     ->  the caller renders the macro

    "IMG:%08x" is a marker for lift.py, which owns the layout macro table; a bare number would be a guest
    address hard-coded into a lifted unit, which is the thing layout/lifted_addresses.h exists to prevent.
    """
    d = site.get("target_desc") or ()
    def why(tag):
        site["target_why"] = tag
        return None
    if not d or d[0] == "unknown":
        return why("unknown-operand-shape")
    if d[0] == "reg":
        v = env.get(d[1])
        if v is None:
            return why("reg-unnameable:%s=%s" % (d[1], (why_unnamed or {}).get(d[1], "?")))
        return v
    if d[0] == "mem":
        base = env.get(d[1])
        if base is None:
            # the whole indirect_call_not_modelled family is basically this line: a vtable call
            # `call dword ptr [eax+0x24]` is perfectly expressible IF the walk can name eax. Tagging WHY
            # it cannot is what priced argcount_mismatch, and the causes are different jobs - a register
            # clobbered by an intervening call is genuinely unsafe to name, while one invalidated at a
            # jump-target merge may be re-loaded by an instruction the walk can follow.
            return why("mem-base-unnameable:%s=%s"
                       % (d[1], (why_unnamed or {}).get(d[1], "?")))
        disp = d[2]
        return "rd32((uint32_t)(%s%s))" % (base, (" + 0x%xu" % disp) if disp else "")
    if d[0] == "abs":
        return "IMG:0x%08x" % d[1]
    return why("unhandled-desc:%s" % (d[0] if d else "none"))


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
    # Every bail-out names itself on the site. `argcount_mismatch` refuses a whole unit because this list
    # came back None, and there are four quite different reasons it can, each needing a different fix -
    # so "not measured" was being read as one pattern when it is four. Recording the reason changes no
    # behaviour; it just means the next decision is taken on a count instead of on a guess about which of
    # these is the common one. (Which it was: see tools/cow/ghidra/lift_pushdiag.py.)
    def bail(why):
        site["push_values_why"] = why
        return None

    pushed = site.get("pushed")
    if not pushed:
        return bail("no-pushed-record")
    if len(pushed) != site.get("npush"):
        return bail("pushed-vs-npush")
    if len(pending) != len(pushed):
        return bail("pending-vs-pushed")
    call_addr = site["addr"]
    # The registers this body writes at all. Used for one narrow, provable fallback below: a plain register
    # that the body NEVER writes is still the live guest register at the push, so `g->reg` names exactly
    # what the guest pushed - there is no earlier computation whose value the environment might have failed
    # to track, because there is no write to track. That is the whole safety argument, and it is why the
    # test is "never written anywhere in the body" rather than "not written between the push and the call":
    # a write BEFORE the push is the case that could make g->reg stale relative to what was pushed, and the
    # broader test excludes it by construction. The staleness loop below still covers the narrow window.
    #
    # This is not a hypothetical widening. A 200-unit census of argcount_mismatch sites (lift_pushdiag.py)
    # found 837 of ~1,311 bails were "unnameable", and the operands were plain registers - edx, ecx, eax,
    # esi, ebx - pushed by bodies whose environment simply had no entry for them. One dict lookup was
    # refusing thousands of units.
    #
    # The first version of this fallback required the register to be never written anywhere in the body.
    # That measured as nearly a no-op (837 unnameable -> 833), which told me the registers ARE written -
    # they are written by instructions _value_expr cannot name, so env never got a key. The obvious
    # widening (fall back to g->reg for any plain register) was then tried, released 207 units, and the
    # sample proof killed it: 20/207 = 10% pass, with the failures spread over eax/edx mismatches, hangs,
    # timeouts and out-of-region writes - exactly the signature of a callee handed the entry value of a
    # register instead of the value the guest computed. The reasoning that justified it ("a lifted body
    # reproduces register writes as assignments to g->reg") was simply false: the lifted C carries register
    # values in Ghidra locals, so g->reg at the call is whatever the frame started with.
    #
    # So an unnamed register stays unnamed, and the unit stays refused. The bail-out tags above are the
    # part of this investigation worth keeping: they are behaviour-free, and they are what turned "2,134
    # argcount refusals" into a counted breakdown that could be tested and, when wrong, killed in one run.
    out = []
    for (push_addr, _op, penv), word in zip(pending, pushed):
        expr = _operand_expr(word, penv)
        if expr is None:
            # a memory operand, an odd-size register, an unknown value
            return bail("unnameable:%s" % (_short_op(word)))
        for c in ins:
            if push_addr < c["addr"] < call_addr and _writes_reg(c["mnem"], c["op"]):
                dst = _dst_reg(c["op"])
                if dst and re.search(r"\b%s\b" % dst, expr):
                    # the register moved after the guest had already pushed it
                    return bail("stale:%s" % dst)
        out.append(expr)
    site["push_values_why"] = ""
    return out


def _short_op(op, n=28):
    """A push operand, squashed and shortened, safe to put inside a reason string."""
    return re.sub(r"\s+", " ", str(op or "?")).strip()[:n]


# `mov reg, dwordptr[base +/- disp]` - a dword load at a register plus a constant, with nothing scaled or
# indexed. Shared by the load-naming rule below and by the census one level deeper, so that the two cannot
# drift apart and report a class the lifter would not have accepted anyway.
LOAD_BASE_DISP = re.compile(r"dwordptr\[\s*([A-Za-z_][A-Za-z0-9_]*)\s*(?:[+-]\s*(?:0x[0-9a-fA-F]+|\d+))?\s*\]$")


def _last_write(ins, upto, reg):
    """Index of the instruction at or before `upto` that last writes `reg` on the linear walk, or None.

    Scans past calls and branches rather than stopping at them: whether what stands in the way matters is a
    question for the caller, and stopping made the first census of this family report 1,051 of 1,051 sites as
    "register never written in the body", which is simply false.
    """
    for k in range(upto, -1, -1):
        c = ins[k]
        if _writes_reg(c["mnem"], c["op"]) and _dst_reg(c["op"]) == reg:
            return k
    return None


def _base_why_deep(ins, upto, site, env, why_unnamed):
    """Why the register an indirect call jumps through is unnamed, ONE LEVEL DOWN. Reporting only."""
    d = site.get("target_desc") or ()
    if not d or d[0] != "mem":
        return None
    k = _last_write(ins, upto, d[1])
    if k is None:
        return "base-never-written-in-body:%s" % d[1]
    c = ins[k]
    src = (c["op"] or "").partition(",")[2].strip()
    if c["mnem"] == "mov" and src.startswith("dwordptr["):
        m = LOAD_BASE_DISP.match(src)
        if not m:
            return "base-load-addr-not-base+disp"
        abase = m.group(1)
        if abase not in REG32:
            return "base-load-addr-not-a-reg:%s" % abase
        return "base-loaded-from:%s=%s(%s)" % (
            abase, "named" if env.get(abase) is not None else "unnamed",
            (why_unnamed or {}).get(abase, "?"))
    if c["mnem"] == "mov":
        return "base-mov-from:%s" % (src[:20] if src in REG32 else "mem:" + src[:16])
    return "base-written-by:%s" % c["mnem"]


# ------------------------------------------------------------------ guest access widths of image globals
#
# A bare (uncast) `*DAT_10456a28` in Ghidra's C states no width, and inventing a dword is the bug this
# family refuses for: a byte read becomes a four-byte one, and cowdiff blames the memory trace on something
# else. The width IS stated, but not by the decompiler - it is in the GENERATED body, which is the authority
# on plumbing: `mov eax, dword ptr [0x10455c28]` renders as `{ uint32_t A = (uint32_t)(0x10455C28u + RD);
# eax = (uint32_t)(rd32(A)); }`. So the map below is built from the accessor the generated body used at that
# address, and an address the body accesses two different ways has no width and stays out of the map.
ACCESS_RE = re.compile(r"\b((?:rd|wr)f?(?:8|16|32|64))\s*\(")
WIDTH_OF_ACCESS = {"rd8": (1, False), "wr8": (1, False), "rd16": (2, False), "wr16": (2, False),
                   "rd32": (4, False), "wr32": (4, False), "rd64": (8, False), "wr64": (8, False),
                   "rdf32": (4, True), "wrf32": (4, True), "rdf64": (8, True), "wrf64": (8, True)}
HEX_RE = re.compile(r"0x[0-9a-fA-F]+")
ASSIGN_RE = re.compile(r"([A-Za-z_][A-Za-z0-9_]*)\s*=\s*([^;]+);")


def guest_global_widths(ins, image_lo=0x10000000, image_hi=0x10C15000):
    """address -> (bytes, is_float), for every image global the GENERATED body accesses at one width.

    Conservative in three ways, because a wrong entry here is a wrong-sized guest read that compiles:
    the accessor's address must resolve to exactly one image-range literal (either written directly, or held
    in the local the accessor reads, which is the `A = (0x10455C28u + RD)` form), the instruction must not
    contain more than one accessor, and an address that any instruction accesses at a DIFFERENT width is
    dropped rather than resolved by whoever got there first.
    """
    widths = {}
    bad = set()
    for c in ins or ():
        stmt = c.get("stmt") or ""
        if not stmt:
            continue
        accs = list(ACCESS_RE.finditer(stmt))
        if len(accs) != 1:
            continue                       # two accesses in one instruction: which literal is whose?
        m = accs[0]
        # the first argument of the accessor is the address
        depth, j = 0, m.end()
        while j < len(stmt):
            if stmt[j] == "(":
                depth += 1
            elif stmt[j] == ")":
                if depth == 0:
                    break
                depth -= 1
            elif stmt[j] == "," and depth == 0:
                break
            j += 1
        arg = stmt[m.end():j].strip()
        addr = None
        if re.fullmatch(r"0x[0-9a-fA-F]+u?", arg):
            addr = int(arg.rstrip("u"), 16)
        else:
            # `rd32(A)` - the address was computed into a local earlier in the SAME instruction. Taking any
            # literal in the statement instead is how a STORE's value (`wr32(A, 0x10340760u)`) would be
            # recorded as if the guest had read that address.
            assigned = {n: e for n, e in ASSIGN_RE.findall(stmt)}
            expr = assigned.get(arg)
            if not expr:
                continue
            lits = HEX_RE.findall(expr)
            if len(lits) != 1:
                continue
            addr = int(lits[0], 16)
        if not (image_lo <= addr < image_hi):
            continue
        w = WIDTH_OF_ACCESS[m.group(1)]
        if addr in widths and widths[addr] != w:
            bad.add(addr)                  # accessed two ways: nobody gets to guess
            continue
        widths.setdefault(addr, w)
    for a in bad:
        widths.pop(a, None)
    return widths


def _load_nameable(ins, sites):
    """Which loads COULD be deferred into an indirect call base - a classifier, not an emitter.

    Nothing in the emission path calls this. It exists because the census needs to answer "what would a
    deferred-read model require" with the same clauses the model would apply, rather than with a probe that
    re-implements them and drifts (both this family's and the string family's census have been wrong in
    exactly that way). When a model is built on it, it must additionally refuse any expression containing
    `g->`: that is a live read of the guest register at evaluation time, and it is the hole that let the
    first attempt name 197 sites while reading the wrong address at 23 of them.

    `_operand_expr(allow_load=True)` builds a READ EXPRESSION and substitutes it, so the read happens where
    the expression is EVALUATED - at the call - not where the guest executed the load. That is sound only if
    nothing between the two can change the memory being read, which is a much stricter world than the
    effect-free tail the flag was made for, and the reason the string family's named-load rule cannot simply
    be copied here: that family only had to CLASSIFY a provenance, while this one has to DEFER a read.

    Register writes are not the danger - env holds a STRING built from the environment at that moment, so
    substitution is early-bound and a later `mov ecx, 5` cannot reach back into `rd32(ecx + 0x10)` that was
    already frozen. The danger is memory. So a load at index i is nameable only if the walk from i to the
    indirect site that consumes it contains no memory write (wr*/push/pop/rep string op), no call (a callee
    may write anything), and no branch (a jump means the linear walk is not the path the guest took).
    Anything else keeps the register unnameable and the unit refuses, which is the correct outcome, not a
    failure.

    The window ends at a CONSUMER site, not at "any site": direct calls are sites too, and ending the scan
    at one left that very call unchecked - the load would then be hoisted across a callee that can write
    anything, which is the silent wrong-address read this rule exists to prevent.

    Conservative by construction: this is a "provably nothing wrote", not a "probably nothing wrote".

    Returns a dict of load-instruction index -> None when the deferral is admitted, or a reason string when
    it is not. The reasons are returned rather than printed because the census that prices this family has to
    count the same clauses the lifter applies: a probe that re-implements them is a second opinion, and both
    this family's and the string family's census have been wrong in exactly that way.
    """
    consumer = {s.get("addr") for s in sites
                if (s.get("target_desc") or ("",))[0] in ("reg", "mem")}
    site_idx = sorted(i for i, c in enumerate(ins) if c.get("addr") in consumer)
    rec = {}
    if not site_idx:
        return rec
    for i, c in enumerate(ins):
        if (c["mnem"] or "") != "mov":
            continue
        op = c["op"] or ""
        src = op.partition(",")[2].strip()
        if not src.startswith("dwordptr["):
            continue
        if not LOAD_BASE_DISP.fullmatch(src):
            rec[i] = "load-addr-not-base+disp"
            continue                      # only base+constant addressing; no index, no scale, no SIB
        base_reg = LOAD_BASE_DISP.fullmatch(src).group(1)
        push_ok = os.environ.get("COW_LIFT_ALLOW_PUSHWIN") == "1"
        nxt = next((j for j in site_idx if j > i), None)
        if nxt is None:
            rec[i] = "no-indirect-site-after"
            continue                      # no call after it consumes this value
        for k in range(i + 1, nxt):
            d = ins[k]
            dm = (d["mnem"] or "")
            stmt = d.get("stmt") or ""
            if dm.startswith("j"):
                rec[i] = "window:branch"
                break
            if dm.startswith("call"):
                rec[i] = "window:call"
                break
            if dm in ("push", "pop", "leave", "ret"):
                # A push writes the four bytes BELOW esp, and a pop reads them back: stack memory, and the
                # only stack-touched thing a deferred read can collide with is one whose ADDRESS EXPRESSION
                # names the frame. `mov ecx,[eax+0xc]` two instructions before `call [ecx+4]` cannot be
                # aliased by `push edi`, so long as eax is not esp/ebp - and the address of an admitted
                # load is a single register plus a constant, so that is checkable here rather than guessed.
                if dm == "push" and push_ok and base_reg is not None \
                        and base_reg not in ("esp", "ebp"):
                    continue
                rec[i] = "window:%s" % dm
                break
            if "rep" in dm:
                rec[i] = "window:rep-string-op"
                break
            if any(w in stmt for w in ("wr32(", "wr8(", "wr16(", "wrf32(", "wrf64(")):
                rec[i] = "window:memory-write"
                break
        else:
            rec[i] = None
    return rec


def _value_expr(mnem, dst, src, env, allow_load=False):
    """The value dst holds after `mnem dst, src`, in terms of what the lifted body can name."""
    here = env.get(dst)
    if mnem == "mov":
        return _operand_expr(src, env, allow_load=allow_load)
    if mnem == "lea":
        return _lea_expr(src, env)
    if mnem == "xor" and src == dst:
        return "0u"                    # the self-xor every compiler emits and every reader recognises
    if mnem in ARITH:
        b = _operand_expr(src, env, allow_load=allow_load)
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


def _operand_expr(text, env, allow_load=False):
    """C for an operand, or None: a literal, or a register the body already names - and, ONLY inside the
    effect-free tail (`allow_load`), a dword read at an address that is itself nameable.

    Outside that window a memory operand stays unnamed on purpose: the value depends on memory as it was at
    the instruction, and anything the lifted body does between then and where the expression is evaluated can
    change it. Inside the window nothing after the read writes, so it is the same read.

    MEASURED GAP, not an oversight: even inside the window the address must be a bare register. The
    `dwordptr[esi+0xc]` shape - an address EXPRESSION, which `lea` names and this does not - is the single
    most common load in the indirect-call family, and until it is named with its own proof run any deferred
    read built on top of it silently refuses and the census reports "the model releases nothing", which is a
    property of this line, not of the family.
    """
    n = _const(text)
    if n is not None:
        return "%su" % n
    if text in REG32:
        return env.get(text)
    if allow_load:
        m = re.fullmatch(r"dwordptr\[(.+)\]", text)
        if m:
            addr = _operand_expr(m.group(1), env, allow_load=True)
            if addr is not None:
                return "rd32((uint32_t)%s)" % (addr if addr.startswith("(") else "(%s)" % addr)
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


# ------------------------------------------------------------------ string operations (rep forms)
#
# Why this is a GATE and not a loop-emitter. Reading both sides of real units (tools/cow/ghidra/
# lift_bodypeek.py --rewritten) showed that Ghidra already models `rep stosd`/`rep movsd` as a plain counted
# loop over typed-pointer dereferences, and our own passes already turn that into guest reads and writes:
# for the guest's `lea edi,[esi+0x70]; mov ecx,0x14; xor eax,eax; rep stosd`, Ghidra writes
# `puVar2 = param_1 + 0x1c; for (iVar1 = 0x14; iVar1 != 0; iVar1--) { *puVar2 = 0; puVar2 = puVar2 + 1; }`
# and the rewriter emits `wr32((uint32_t)puVar2, 0)` over a `CowU32 *` - C's own scaling by 4 reproduces
# both the +0x70 base and the 4-byte step. The semantics were already right; the unit was refused because
# `has_string_op` refuses the FUNCTION. So what is needed is a rule for WHEN Ghidra's loop can be trusted,
# not a new loop. The oracle's `while (ecx) { wr32(edi, ...); ... }` text is never copied - that body is
# what cowdiff compares AGAINST, and transcribing it would agree by construction.
#
# The rules, each one a refusal with a name so the queue can still group the family by prefix:
#
#   form           only `stos`/`movs` (pure stores and copies) by default. The reason this file USED to give
#                  for refusing `scas`/`cmps` - that they "leave zf/cf from their last comparison, which is
#                  precisely the state cowdiff compares" - WAS FALSE, and is recorded here rather than
#                  deleted, because it cost 384 units. tools/cow/cowdiff.c:17-23, the comparator itself:
#                  "Flags are deliberately not compared: the contract (docs/cow/STYLE.md) is the return
#                  value, the callee-saved registers, esp, memory and calls out, and a caller cannot observe
#                  flags across a call." No lifted body sets flags for ANY instruction - `add` and `cmp` do
#                  not either - so refusing a string form for not setting them was refusing for a property
#                  the lift does not model anywhere. What is actually observable about a `rep scas`/`rep cmps`
#                  is esi/edi/ecx (all compared) and the memory it READS (faults are compared), which is what
#                  the width and provenance clauses below are for. `scas`/`cmps` are therefore ADMITTED
#                  (2026-11-07), and MEASURED: admitting them freed only 10 emitted units, not the 384 the
#                  `form_` counts implied, because the form clause was masking the provenance clause - 242 of
#                  those units refuse on `operand_load` and 74 on `operand_stack_frame` as soon as the form
#                  stops condemning them. That is the number the queue should be working from, and it is why
#                  `lods` stays refused: nobody has priced it, so there is no knob for it and no claim about
#                  what it would release. (The first draft of this comment promised a COW_LIFT_ALLOW_LODS=1
#                  that did not exist - a knob documented but not built is a knob someone will later trust.)
#   direction      no `std` anywhere. With df set, the guest walks DOWNWARD while Ghidra's loop walks up -
#                  measured: 0 of 600 sampled units use std, so this costs nothing and removes a whole class
#                  of silent mis-aim.
#   width          the element size must come from the MNEMONIC (b/w/d), which is an x86 fact, and a form
#                  whose width cannot be read is refused rather than guessed.
#   provenance     every register the form actually READS (an ISA fact per mnemonic - `scas`/`stos` never
#                  read esi, `lodsb` never reads eax) must be explainable AT THE REP as a constant, a
#                  register the body never writes, or arithmetic over those. `stack` provenance is the frame
#                  model's wall (32% of the family), `load` is the one the indirect family shares (21%),
#                  and both stay refused: a loop whose destination the body cannot name would write host
#                  memory and cowdiff would see a stack that was never touched.
STR_USES = {
    "stos": ("edi", "ecx", "eax"), "movs": ("esi", "edi", "ecx"),
    "lods": ("esi", "ecx", "edi"), "scas": ("edi", "ecx", "eax"), "cmps": ("esi", "edi", "ecx"),
}
STR_ALLOWED_FORMS = ("stos", "movs", "scas", "cmps")   # stores, copies, AND compares - see "form" above
STR_WIDTHS = {"b": 1, "w": 2, "d": 4}


def _str_form(canonical):
    """(form, width_bytes) from the CANONICAL form string_op_of already produced. Re-recognising the
    instruction here would fork the logic away from string_op_of, which is the thing that knows
    `movsd xmm0, xmm1` is SSE and not a string move."""
    if not canonical:
        return None, None
    t = canonical.lower()
    for form in STR_USES:
        if form in t:
            m = re.search(form + r"(b|w|d)\b", t)
            if m:
                return form, STR_WIDTHS[m.group(1)]
            return form, None
    return None, None


# The canonical address text of a memory operand in this tree's instruction records is `dwordptr[base]`,
# `dwordptr[base+0x10]` or `dwordptr[base-4]` (the same shape the call-site parser matches at
# `dwordptr\[([a-z]+)([+-]...)?\]`). Anything ELSE - an index register, a scale, a bare number, a non-dword
# width - is deliberately NOT matched here, because it cannot be resolved to one guest address by this
# function and the unit must keep refusing.
STR_LOAD_ADDR = re.compile(r"^dwordptr\[\s*([A-Za-z_][A-Za-z0-9_]*)\s*"
                           r"(?:([+-])\s*(0x[0-9a-fA-F]+|\d+))?\s*\]$")


def _str_load_named(ins, src, upto, depth=0):
    """Is this load an address the body can NAME, or one it cannot?

    `mov esi, dwordptr[eax+0x10]` where eax is a parameter is not the same object as `mov esi,
    dwordptr[ecx]` where ecx came from nowhere. In the first case the guest computed a guest address from a
    value the body already tracks, loaded a dword from it, and used the result as a pointer - which is
    exactly what an `rd32()` of that same expression says. In the second the address is unknown, so the load
    aims wherever the host pleases and the loop that follows walks host memory.

    So a load is NAMED when BOTH halves resolve: its address is one register plus a constant displacement,
    and that register itself explains itself AT THE LOAD (not at the rep, and not anywhere in the body -
    provenance is a property of a point). The width must be a dword, because these operands are addresses.
    Anything else returns its own reason unchanged - `stack` stays the frame model's wall, `load` stays the
    unnamed one, `unnameable` stays unnameable - so widening this cannot swallow a refusal it did not
    examine.
    """
    m = STR_LOAD_ADDR.match(src)
    if not m:
        return "load"
    base = m.group(1)
    if base not in REG32:
        return "load"
    p = _str_prov(ins, base, upto, depth + 1)
    if p in ("const", "never-written", "derived", "load-named"):
        return "load-named"
    return p


def _str_prov(ins, reg, upto, depth=0):
    """What `reg` holds when the rep at index `upto` executes: const / never-written / derived / stack /
    load / unnameable. Bounded, and it only ever looks at instructions BEFORE the rep - provenance is a
    property of a point in the program, and evaluating it over the whole body moved this family's own
    numbers by ten points when it was fixed."""
    if depth > 3:
        return "unnameable"
    for k in range(upto - 1, -1, -1):
        c = ins[k]
        mnem, op = c["mnem"], (c["op"] or "")
        if not op.startswith(reg + ",") or mnem not in ("mov", "lea", "xor", "add", "sub", "and", "or",
                                                        "shr", "shl", "inc", "dec", "sbb", "cdq"):
            continue
        src = op.partition(",")[2].strip()
        if mnem == "lea":
            return "stack" if ("esp" in src or "ebp" in src) else "derived"
        if mnem == "xor" and src == reg:
            return "const"
        if src.startswith("0x") or src.isdigit():
            return "const"
        if "ptr" in src or "[" in src:
            # Not a wall by itself: a load whose ADDRESS the body can name is a different object from one it
            # cannot. See _str_load_named.
            return _str_load_named(ins, src, k, depth)
        if src == reg:
            return "derived"
        if src in REG32:
            p = _str_prov(ins, src, k, depth + 1)
            # `load-named` counts as explained here too, or `mov edi, esi` after a named load into esi would
            # condemn the unit for a copy of a value we can already resolve.
            return "derived" if p in ("const", "never-written", "derived", "load-named") else p
        return "unnameable"
    return "never-written"


def string_shape(ins, sites=None, allow=STR_ALLOWED_FORMS, load_ok=False):
    """Classify an entry's string operations against the rules above. Returns {liftable, why, forms}.

    `allow` is the FORM list, and it exists so a form can be admitted for MEASUREMENT ONLY - the same
    discipline as COW_LIFT_ALLOW_FILD and COW_LIFT_ALLOW_PARTIAL. The refusal guards the report, not the
    player: an unproven lifted unit never reaches table.c (ledger done -> genwraps -> table.c is the only way
    in), so what a knob can do is make the population countable and PROVEABLE, never shippable. It must never
    be set for a run whose files are kept.
    """
    reps = [(i, c) for i, c in enumerate(ins) if string_op_of(c) is not None]
    if not reps:
        return {"liftable": True, "why": None, "forms": []}
    if any((c["mnem"] or "") == "std" for c in ins):
        return {"liftable": False, "why": "std_direction_flag", "forms": []}
    seen = []
    for i, c in reps:
        form, width = _str_form(string_op_of(c))
        if form is None:
            return {"liftable": False, "why": "form_unrecognised", "forms": seen}
        if form not in allow:
            return {"liftable": False, "why": "form_" + form, "forms": seen}
        if width is None:
            return {"liftable": False, "why": "width_unknown", "forms": seen}
        for r in STR_USES[form]:
            p = _str_prov(ins, r, i)
            if p == "stack":
                return {"liftable": False, "why": "operand_stack_frame", "forms": seen}
            if p == "load":
                return {"liftable": False, "why": "operand_load", "forms": seen}
            if p == "load-named" and not load_ok:
                # Refused under the SAME name as an unnamed load while it is unpriced, so the family histogram
                # means the same thing before and after this change. A new reason name would look like units
                # leaving the family when all that happened was a relabel - the mistake this loop has made
                # and documented more than once.
                return {"liftable": False, "why": "operand_load", "forms": seen}
            if p not in ("const", "never-written", "derived", "load-named"):
                return {"liftable": False, "why": "operand_" + p[:18], "forms": seen}
        seen.append({"addr": c["addr"], "form": form, "width": width, "text": c.get("text")})
    return {"liftable": bool(seen), "why": None if seen else "no_rep", "forms": seen}


def thunk_target(body_lines):
    """The address a one-instruction `jmp <hex>` thunk jumps to, or None.

    The recompiler's thunks are a single guest instruction, so this is a fact about the bytes and not an
    inference: the body must be exactly one `jmp` whose own statement calls `f_<hex>(g)` (the rendering
    tail_jump_of recognises). Anything with two instructions is not a thunk and returns None, because
    merging two functions on a guess is worse than leaving them apart.
    """
    if not body_lines:
        return None
    ins = parse_instructions(body_lines)
    if len(ins) != 1:
        return None
    c = ins[0]
    if (c.get("mnem") or "") != "jmp":
        return None
    stmt = c.get("stmt")
    if isinstance(stmt, list):
        stmt = "\n".join(stmt)
    m = TAIL_CALL_STMT.search(stmt or "")
    if not m:
        return None
    return int(m.group(1), 16)


def follow_thunks(addr, bodies, limit=8):
    """Where a called address ends up once the recompiler's one-instruction thunks are followed.

    Why the lift needs it: Ghidra renders a call to a thunk by naming the THUNK'S TARGET - `thunk_FUN_10028aa0()`
    for a guest `call 0x1002c8b0`, where 0x1002c8b0 is `jmp 0x10028aa0`. The generated body records the call
    site at the address the guest ACTUALLY called, so the exact-address join fails and the whole unit is
    refused as `no_generated_call_site_for_FUN_x`, which lift_unbridged_diag.py measured as 94% of the
    `leftover_unbridged_call` family. Matching on the RESOLVED target repairs the join; the bridge is still
    emitted for the site's address, because that is what the guest called and what side A calls.
    """
    seen = set()
    cur = addr
    for _ in range(limit):
        if cur is None or cur in seen:
            return cur
        seen.add(cur)
        nxt = thunk_target(bodies.get("%08x" % cur))
        if nxt is None or nxt == cur:
            return cur
        cur = nxt
    return cur


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
              "extra_pushes", "esp_delta_reliable", "has_x87", "has_string_op", "string_ops",
              "has_indirect_call"):
        if k in m:
            print("  %-22s %s" % (k, m[k]))
    if m.get("x87"):
        print("  %-22s %s" % ("x87", "liftable=%s why=%s ops=%s peak=%s final=%s"
                              % (m["x87"].get("liftable"), m["x87"].get("why"),
                                 ",".join(m["x87"].get("ops") or []),
                                 m["x87"].get("peak"), m["x87"].get("final"))))
    print("  call sites:")
    for s in m.get("call_sites", []):
        print("    0x%08x -> %s  retaddr=%s npush=%s ecx_before=%s cleanup=%s"
              % (s["addr"], ("0x%x" % s["target"]) if s["target"] is not None else "INDIRECT:" + s["op"],
                 hex(s["retaddr"]) if s["retaddr"] else None, s["npush"], s["ecx_before"], s["cleanup"]))
    return 0


if __name__ == "__main__":
    sys.exit(main())
