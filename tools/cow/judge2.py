"""judge2 - what a judge-v2 verdict MEANS. No build, no harness, no model: only decisions.

Everything that interprets a verdict lives here, so cowdiff.py, lift_proof.py, reverify.py, status.py and the
conveyor cannot each grow their own idea of it:

    the flags            what every judge-v2 run passes to cowdiff.exe
    the contract         which bits of eax/edx a unit's callers can see, and which stack words are its own
    one verdict line     COWDIFF PASS/FAIL ...          ->  a result
    the tier             gold / silver / weak / fail    ->  what may be counted
    the record           one unit's entry in the proof ledger, valid only for THIS file and THIS judge

    python tools/cow/judge2.py --selftest                  # every rule below against fixed cases
    python tools/cow/judge2.py --judge-id                  # the id of the judge that is on disk now
    python tools/cow/judge2.py --retuse DUMP.jsonl         # cow/retuse.json from the Ghidra dump
    python tools/cow/judge2.py --explain 0x1024c910        # the contract one unit is judged under, and why

EDITING THIS FILE CHANGES THE JUDGE'S ID (it is one of JUDGE_FILES), which voids every recorded proof and
costs a full re-baseline. Wording for people and models lives in tools/cow/conveyor.py, not here.

THE TIERS (the only definition; everything else imports it)

    gold     PASS under judge 2, at least GOLD_CLEAN states completed cleanly on both sides, and EVERY
             instruction site of the original reached in such a state. This is the only thing called proven.
    silver   PASS, at least SILVER_CLEAN clean states and SILVER_COV of the sites. Tested, not proven.
    weak     PASS with less than that, or a PASS from a run that was not judge 2. Counts for nothing.
    fail     a mismatch.      noisy   the harness disagrees with ITSELF on this unit (--self fails), so a
    failure says nothing about the unit.      nocompile / timeout / hang: as named.

THE CONTRACT (why a register may be ignored, and when it may not)

    The old comparison demanded that eax, edx and every stack byte match the original - including the
    scratch a `void` function leaves in eax and the dead frame below the returned esp, which no caller can
    read. That forced every unit to replay the original's frame and register traffic, and failed correct C.

    A register is ignored ONLY when all three hold:
      1. Ghidra's own signature for the function says the bits are not part of the result
         (void / float: all of eax and edx;  char: the upper 24 bits;  short: the upper 16;  not 64-bit: edx)
      2. at least one direct caller exists (a WITNESS), and
      3. no direct caller reads more than that (Ghidra spells such a read `extraout_EAX`, `extraout_var`...).
    Anything else - no dump row, no direct caller, a caller that reads the leftovers - is compared in full,
    exactly as before. A unit's own COW_CONTRACT line can only make its contract STRICTER, never looser.
"""
import argparse
import hashlib
import json
import os
import re
import sys
import tempfile
import time

STATES_MAX = 2000        # the most states one row may run
CLEAN_TARGET = 100       # a row stops early at this many clean states once every site is covered
GOLD_CLEAN = 100
SILVER_CLEAN = 30
SILVER_COV = 0.70
FUZZ_ARGS = 8            # stack argument words the state generator fills
ROW_CPU_SECS = 30        # per-row budgets for a judge-2 run (the old 6/8 were sized for 400 states)
ROW_WALL_SECS = 120      # a HANG guard only (a row parked in the kernel): the CPU budget above is real CPU time
                         # now (cowdiff.c row_cpu_now), so a loaded machine slows a row down without failing it

RETUSE_REL = os.path.join("cow", "retuse.json")
# The files that decide what a verdict means. A record made by a different judge is not a verdict of
# this one, so changing ANY of them invalidates every record (see judge_id / is_valid).
JUDGE_FILES = ["tools/cow/cowdiff.c", "tools/cow/cowdiff_batch.h", "tools/cow/judge2.py",
               "runtime/guest.h", "runtime/simd.h", "runtime/portable/gwin.c", "cow/retuse.json",
               # both sides' indirect calls reach a state's answers through its seam (rt_set_indirect_stub)
               "runtime/runtime.c",
               # the original side is the recompiler's translation: what it emits is part of what a verdict means
               "recomp/x86c.py", "recomp/recomp.py"]

# (eax bits nobody reads, edx nobody reads) for each kind of return value
RET_KINDS = {
    "void": (0xFFFFFFFF, 1),
    "u8": (0xFFFFFF00, 1),
    "u16": (0xFFFF0000, 1),
    "u32": (0x00000000, 1),
    "u64": (0x00000000, 0),
    "f32": (0xFFFFFFFF, 1),   # the value is in st(0), which is always compared
    "f64": (0xFFFFFFFF, 1),
    "strict": (0x00000000, 0),
}
CONTRACT_RE = re.compile(r"COW_CONTRACT\s+ret=(\w+)\s+stack_args=(\d+)")


def judge_flags():
    """What makes a run a judge-2 run. One place, so no runner can drift. (--stategen 3 since judge v3:
    the judge-2 comparison, with the states that give the unit's globals something to hold - THE WORLD
    LIST below, and THE GLOBALS in tools/cow/cowdiff.c. --stategen 4 since judge v4: the same, plus the
    states in which the functions the unit calls give made-up answers - THE STUB LIST below.)"""
    return ["--grade", "contract", "--stategen", "4", "--clean", str(CLEAN_TARGET)]


def harness_flags():
    """judge_flags() plus the default depth, for a caller that has no --states/--args of its own."""
    return judge_flags() + ["--states", str(STATES_MAX), "--args", str(FUZZ_ARGS)]


# ------------------------------------------------------------------------------------ the world list
#
# THE WORLD LIST (judge v3). Most of the game's code reads a pointer out of a global before it does anything
# else. The harness maps the image and runs DllMain and nothing more, so those globals hold 0, the original
# faults in every state, and the unit is `no clean state`: not wrong, just never looked at. The harness
# reads the entry's own globals off its instructions; what it cannot see is what the functions the entry
# CALLS depend on, because a row carries only its own instructions. That part is worked out here, from the
# generated bodies of the whole image, and handed to the harness with the row:
#     * every memory operand that is one bare image address (`dword ptr [0x1047b978]`), in the entry and
#       in the functions it calls, WORLD_DEPTH calls deep;
#     * for every image address a function uses as a plain number (`mov ecx, 0x10621838`: a global object
#       handed to a callee as `this`), the fields that function and the ones it calls read through a
#       register (`dword ptr [ecx + 0x50]`), as words of that object.
# The harness plants only words that lie in a data section and hold 0 after DllMain, in half the states,
# the same on both sides. Nothing about the comparison changes: only which inputs are tried.
WORLD_DEPTH = 3          # calls followed below the entry
WORLD_FUNCS = 48         # functions looked at for one entry
WORLD_GLOBALS = 100      # bare-address words kept
WORLD_WORDS = 150        # words in all (cowdiff.c MAX_GLOBALS leaves room for the entry's own)
WORLD_FIELD_MAX = 0x200  # a field further into an object than this is not planted

_W_SITE = re.compile(r"^\s*/\* ([0-9a-f]{8}): (.*?)\s*\*/\s*$")
_W_CALL = re.compile(r"\bf_([0-9a-f]{8})\(g\)")
_W_ABS = re.compile(r"\b(byte|word|dword) ptr \[(0x[0-9a-f]+)\]")
_W_FIELD = re.compile(r"\bdword ptr \[e(?:ax|bx|cx|dx|si|di) \+ (0x[0-9a-f]+|\d+)\]")
_W_IMM = re.compile(r"(?<![0-9a-zA-Z_*+\-] )(?<![0-9a-zA-Z_])(0x1[0-9a-f]{7})\b")
_W_SIZE = {"byte": 1, "word": 2, "dword": 4}
_world_cache = {}


def _world_facts(index, entry):
    """(globals [(addr, size)], objects [addr], field displacements, callees) of ONE generated body."""
    hit = _world_cache.get(entry)
    if hit is not None:
        return hit
    globs, objs, fields, calls = [], [], set(), []
    for line in index.get(entry) or ():
        m = _W_SITE.match(line)
        if not m:
            for c in _W_CALL.findall(line):
                if c != entry and c not in calls:
                    calls.append(c)
            continue
        ins = m.group(2)
        for width, addr in _W_ABS.findall(ins):
            g = (int(addr, 16), _W_SIZE[width])
            if g not in globs:
                globs.append(g)
        for d in _W_FIELD.findall(ins):
            fields.add(int(d, 0))
        if ins.startswith(("j", "call", "ret", "loop")):
            continue
        for imm in _W_IMM.findall(re.sub(r"\[[^\]]*\]", "", ins)):
            a = int(imm, 16)
            if a not in objs:
                objs.append(a)
    hit = _world_cache[entry] = (globs, objs, fields, calls)
    return hit


def world_list(index, entry):
    """The row's world list: [(address, width)], most important first. `index` is entry -> the lines of its
    generated body, for the whole image (tools/cow/trivial_audit.py:body_index)."""
    order, depth = [entry], {entry: 0}
    for f in order:
        if depth[f] >= WORLD_DEPTH:
            continue
        for c in _world_facts(index, f)[3]:
            if c not in depth and c in index and len(order) < WORLD_FUNCS:
                depth[c] = depth[f] + 1
                order.append(c)
    out, seen = [], set()

    def add(addr, size):
        if (addr, size) not in seen:
            seen.add((addr, size))
            out.append((addr, size))

    for f in order:
        for addr, size in _world_facts(index, f)[0]:
            if len(out) < WORLD_GLOBALS:
                add(addr, size)
    for f in order:
        globs, objs, fields, calls = _world_facts(index, f)
        if not objs:
            continue
        reach = set(fields)
        for c in calls:
            reach |= _world_facts(index, c)[2]
        for base in objs:
            for d in sorted(reach):
                if d < WORLD_FIELD_MAX and len(out) < WORLD_WORDS:
                    add(base + d, 4)
    return out


# ------------------------------------------------------------------------------------ the stub list
#
# THE STUB LIST (judge v4). `call 0x10002480; test al, al; je` is how the game asks a question, and in the
# harness the callee is the real function running in a world nobody set up: it gives the same answer in
# every state, so one side of the branch never runs, the unit never reaches every site, and it stays
# silver or weak however right it is. 841 of the 1,359 silver and weak units of the first v3 population
# had 2,000 clean states and still a site never reached; in a sample, four of five were this shape.
#
# So in some states the harness answers the unit's direct calls itself, the same answer on both sides:
# the k-th such call in a state gets the k-th word of a stream both sides start from. The call is still
# logged (target and arguments), only the callee's body is skipped. What the harness needs per callee is
# what the callee's own `ret N` would have taken off the stack, so a callee is on the list only when its
# body says that unambiguously. An import, a callee that leaves through an indirect jump, one whose rets
# disagree: not on the list, and those calls run for real in every state, as before.
STUB_MAX = 64            # callees on one row's list (cowdiff.c MAX_AUTO_STUBS)
_W_RET = re.compile(r"^\s*/\* [0-9a-f]{8}: ret[n]?(?: (0x[0-9a-f]+|\d+))?\s*\*/\s*$")
_W_JMP = re.compile(r"^\s*/\* [0-9a-f]{8}: jmp (.*?)\s*\*/\s*$")
_W_SWITCH = re.compile(r"^dword ptr \[e[a-z]{2}\*4 \+ 0x1[0-9a-f]{7}\]$")
_purge_cache = {}


def callee_purge(index, target, depth=0):
    """Bytes the function at `target` takes off the stack with its own ret, thunks followed; None when that
    cannot be read unambiguously off its generated body."""
    if (target, depth) in _purge_cache:
        return _purge_cache[(target, depth)]
    out = None
    body = index.get(target) or ()
    sites = [ln for ln in body if _W_SITE.match(ln)]
    if sites and depth < 4:
        jm = _W_JMP.match(sites[0])
        if len(sites) == 1 and jm and re.match(r"^0x1[0-9a-f]{7}$", jm.group(1)):
            out = callee_purge(index, "%08x" % int(jm.group(1), 16), depth + 1)   # a thunk
        else:
            seen = set()
            own = {int(_W_SITE.match(ln).group(1), 16) for ln in sites}
            for ln in sites:
                m = _W_RET.match(ln)
                if m:
                    seen.add(int(m.group(1), 0) if m.group(1) else 0)
                    continue
                jm = _W_JMP.match(ln)
                if jm and re.match(r"^0x1[0-9a-f]{7}$", jm.group(1)) and int(jm.group(1), 16) not in own \
                        and ("%08x" % int(jm.group(1), 16)) in index:
                    # a TAIL CALL (`jmp` to another function's entry): the bytes popped on that path are the
                    # ones that function's own ret pops (judge 15: 0x10060f40 ends in `jmp 0x100747c0`)
                    seen.add(callee_purge(index, "%08x" % int(jm.group(1), 16), depth + 1) if depth < 4 else None)
                    continue
                if jm and not re.match(r"^0x[0-9a-f]+$", jm.group(1)) and not _W_SWITCH.match(jm.group(1)):
                    # an indirect jump: could be a tail call into anything. A jump through a table of the
                    # image indexed by a register (`jmp dword ptr [eax*4 + 0x1004f2a8]`) is the function's own
                    # switch, not a way out of it: it says nothing about the ret (judge 14)
                    seen.add(None)
            if len(seen) == 1 and None not in seen:
                out = seen.pop()
    if out is None and depth == 0:
        out = _caller_cleaned(index, target)
    _purge_cache[(target, depth)] = out
    return out


_W_TABLE_JMP = re.compile(r"^dword ptr \[e[a-z]{2} \+ 0x[0-9a-f]+\]$")
_callers = {}


def _caller_cleaned(index, target):
    """0 for a function whose body cannot say what it pops (no `ret` of its own: a jump through its runtime's
    table, `mov eax, [table]; jmp [eax + K]`, or through a vtable at its end) when EVERY call to it in the image
    is cleaned up by its caller (`add esp, N` next): the callers are compiled against its prototype, and that
    is a cdecl function, which pops nothing (judge 15: 0x10310401). None otherwise: how many words a caller
    pushed for it cannot be read off the calls (pushes for an outer call sit before an inner one)."""
    sites = [m.group(2) for m in map(_W_SITE.match, index.get(target) or ()) if m]
    if not sites or any(x.startswith("ret") for x in sites):
        return None
    if not any(x.startswith("jmp ") and not _W_HEX.match(x[4:].strip()) and not _W_SWITCH.match(x[4:].strip())
               for x in sites):
        return None
    if not _callers:
        for f, body in index.items():
            seq = [m.group(2) for m in map(_W_SITE.match, body) if m]
            for k, ins in enumerate(seq):
                h = re.match(r"^call 0x(1[0-9a-f]{7})$", ins)
                if h:
                    _callers.setdefault(h.group(1), []).append(seq[k + 1] if k + 1 < len(seq) else "")
    nexts = _callers.get(target) or []
    if nexts and all(n.startswith("add esp, ") for n in nexts):
        return 0
    return None


_X87_D = {}
for _m in ("fld", "fild", "fbld", "fldz", "fld1", "fldpi", "fldl2t", "fldl2e", "fldlg2", "fldln2", "fxtract",
           "fsincos", "fptan", "fdecstp"):
    _X87_D[_m] = 1
for _m in ("fstp", "fistp", "fisttp", "fbstp", "fcomp", "fucomp", "fcomip", "fucomip", "ficomp", "faddp", "fsubp",
           "fsubrp", "fmulp", "fdivp", "fdivrp", "fpatan", "fyl2x", "fyl2xp1", "fincstp", "ffreep"):
    _X87_D[_m] = -1
_X87_D["fcompp"] = _X87_D["fucompp"] = -2
_W_INS = re.compile(r"^(\w+)\s*(.*)$")
_W_HEX = re.compile(r"^0x(1[0-9a-f]{7})$")
_W_JCC = re.compile(r"^(j(?!mp)[a-z]+|loop[a-z]*)$")
_x87_cache = {}


def _returns(index, target):
    """the function at `target` has a `ret` (a thunk: the function it jumps to)"""
    for _ in range(4):
        sites = [m.group(2) for m in map(_W_SITE.match, index.get(target) or ()) if m]
        if any(x.startswith("ret") for x in sites):
            return True
        h = _W_HEX.match(sites[0][4:].strip()) if len(sites) == 1 and sites[0].startswith("jmp ") else None
        if not h:
            return False
        target = h.group(1)
    return False


def x87_delta(index, target, depth=0):
    """How many values the function at `target` leaves on its caller's x87 stack, along its first path to a
    `ret`: 0 for one that leaves it as it found it (the ABI's rule for everything but a float result), +1 for
    a float result, -1 for _ftol (it pops the value its caller pushed for it). A direct call adds its callee's
    own count; a call back into a function still being counted adds 0. None when it cannot be told: a call
    through a pointer on a path that does not come out at 0 (that call may be what pushed or popped). The walk tools/cow/rise/rise.py's callee_xdelta
    makes over the instructions, made here over the generated body's sites."""
    if target in _x87_cache:
        return _x87_cache[target]
    if depth > 400:
        return None                     # a chain no real program has: not counted on
    _x87_cache[target] = 0              # in progress: a call back into it adds nothing
    sites = []
    for ln in index.get(target) or ():
        m = _W_SITE.match(ln)
        if m:
            x = _W_INS.match(m.group(2))
            if x:
                sites.append((int(m.group(1), 16), x.group(1), x.group(2).strip()))
    at = {a: k for k, (a, _mn, _o) in enumerate(sites)}
    out = None
    work, seen = [(0, 0, False, False)], set()
    while work and out is None:
        k, d, ind, neg = work.pop()
        while 0 <= k < len(sites):
            if (k, d) in seen or len(seen) > 20000 or abs(d) > 8:
                break
            seen.add((k, d))
            a, mn, ops = sites[k]
            d += _X87_D.get(mn, 0)
            neg = neg or (ind and d < 0)
            if mn in ("ret", "retn"):
                # a call through a pointer counted as 0. The ABI: a function leaves 0 values or 1 (a float), and
                # never takes one it was not given, so a path that never went below 0 after such a call and ends
                # at 0 or 1 is that count whatever the call did (had it pushed one, this would return 2:
                # 0x1003b980). Anything else may be the call's doing.
                out = ("?" if (ind and (neg or d not in (0, 1))) else d)
                break
            if mn == "call":
                h = _W_HEX.match(ops)
                if not h:
                    ind = True
                elif h.group(1) != target:
                    sub = x87_delta(index, h.group(1), depth + 1)
                    if sub is None and not _returns(index, h.group(1)):
                        break                   # it never comes back (exit, a throw): this path ends there
                    if sub is None:
                        out = "?"
                        break
                    d += sub
                k += 1
                continue
            if mn == "jmp":
                h = _W_HEX.match(ops)
                if h and int(h.group(1), 16) in at:
                    k = at[int(h.group(1), 16)]
                    continue
                if h:
                    sub = x87_delta(index, h.group(1), depth + 1)       # a tail call
                    out = "?" if sub is None else d + sub
                elif not _W_SWITCH.match(ops):
                    out = "?" if (d or neg) else 0      # a tail call through a pointer: counted as 0, as a call is
                break
            if _W_JCC.match(mn):
                h = _W_HEX.match(ops)
                if h and int(h.group(1), 16) in at:
                    work.append((at[int(h.group(1), 16)], d, ind, neg))
            k += 1
    res = None if out in (None, "?") else out
    if out is None:
        # no path to a `ret` the walk could follow (a jump through the function's own table): a body with no
        # x87 instruction, no call through a pointer, and only callees that leave the x87 as they found it,
        # leaves it as it found it whichever way it goes
        ok = True
        for a, mn, ops in sites:
            if _X87_D.get(mn, 0) or (mn == "call" and not _W_HEX.match(ops)):
                ok = False
                break
            if mn in ("call", "jmp") and _W_HEX.match(ops) and int(ops, 16) not in at:
                sub = x87_delta(index, ops[2:], depth + 1)
                if sub != 0 and not (sub is None and mn == "call" and not _returns(index, ops[2:])):
                    ok = False
                    break
        if ok and any(mn in ("ret", "retn") for _a, mn, _o in sites):
            res = 0
    _x87_cache[target] = res
    return res


def touches_x87(index, target):
    """True when the harness may NOT answer a call to `target` in its place: what the callee does to its
    caller's x87 stack cannot be told (x87_delta None), so an answer could not do the same. Callees that leave
    it as they found it are answered as before, and those with a known count (+1 a float result, -1 _ftol)
    are answered too: the harness does the same to the x87 stack (x87_list, cowdiff.c judge 15)."""
    return x87_delta(index, target) is None


def x87_list(index, callees):
    """[(callee, values it leaves on its caller's x87 stack)] for the callees of a row's lists whose count is
    not 0: the row's x87 table (cowdiff_batch.h)"""
    out = []
    for c, _pop in callees:
        d = x87_delta(index, "%08x" % c)
        if d:
            out.append((c, d))
    return out


def stub_list(index, entry, unit_text=""):
    """The row's stub list: [(callee address, bytes its ret pops)], in the order the entry calls them. Empty
    when the unit under test calls an image function by name instead of through a bridge: the harness can
    answer a call only where BOTH sides pass its seam (the bridges, and the rewritten side A)."""
    # A unit the model wrote reaches its callees through a different path than the instrumented original
    # (cow_bridge_indirect, not the named bridge the rewrite touches), so the harness would answer one side
    # and not the other. And a unit that calls an image function by name bypasses the seam entirely. Neither
    # is auto-stubbed; both run their callees for real, as judge v3 did.
    if "COW_OWNER: conveyor" in (unit_text or "") or re.search(r"\bf_[0-9a-f]{8}\s*\(", unit_text or ""):
        return []
    out, seen = [], set()
    for line in index.get(entry) or ():
        if _W_SITE.match(line):
            continue
        for c in _W_CALL.findall(line):
            if c == entry or c in seen:
                continue
            seen.add(c)
            pop = callee_purge(index, c)
            if pop is not None and len(out) < STUB_MAX and not touches_x87(index, c):
                out.append((int(c, 16), pop))
    return out


def pin_stub_list(index, entry, unit_text=""):
    """The callees a PINNED state may answer (judge 7, tools/cow/rise/seek.py): every direct callee of the
    entry, [(address, bytes its ret pops)]. Side A's call sites to them go through cow_stub_call and side B's
    calls through the runtime's seam, and an explicit answer comes from one table both read; a site with no
    answer runs the real callee, as it always did. Empty when the unit calls an image function by name: that
    call passes no seam, so the two sides could disagree about whether the callee ran."""
    if re.search(r"\bf_[0-9a-f]{8}\s*\(", unit_text or ""):
        return []
    out, seen = [], set()
    for line in index.get(entry) or ():
        if _W_SITE.match(line):
            continue
        for c in _W_CALL.findall(line):
            if c == entry or c in seen:
                continue
            seen.add(c)
            pop = callee_purge(index, c)
            if pop is not None and not touches_x87(index, c):
                out.append((int(c, 16), pop))
    return out


# ------------------------------------------------------------------------------------ Ghidra's signature

_GHIDRA_RET = (
    (re.compile(r"^void$"), "void"),
    (re.compile(r"^(bool|char|uchar|byte|sbyte|undefined1|BOOLEAN)$"), "u8"),
    (re.compile(r"^(short|ushort|word|undefined2|wchar_t|WORD)$"), "u16"),
    (re.compile(r"^(longlong|ulonglong|undefined8|__int64|__uint64|qword|int64|uint64)$"), "u64"),
    (re.compile(r"^float$"), "f32"),
    (re.compile(r"^(double|float10)$"), "f64"),
)
_SIG_RE = re.compile(r"([A-Za-z_][\w \t\*]*?)\s*(__\w+\s+)?(?:thunk_)?FUN_[0-9a-fA-F]{8}\s*\(([^)]*)\)")


def ghidra_sig(c_text):
    """{'kind', 'conv', 'params', 'stack_params'} read off `<type> [__conv] FUN_xxxxxxxx(<params>)`.

    A pointer, an `undefined4` or a type this does not know is a full 32-bit result: the strict reading,
    and therefore the safe one. stack_params is how many of the declared parameters travel on the stack
    (thiscall keeps one in ecx, fastcall up to two in ecx/edx); it caps what a unit may claim as its own
    argument slots.
    """
    head = (c_text or "").split("{", 1)[0]
    m = _SIG_RE.search(head)
    if not m:
        return {"kind": "u32", "conv": "", "params": 0, "stack_params": 0}
    t = " ".join(m.group(1).replace("\n", " ").split())
    kind = "u32"
    if "*" not in t:
        last = t.split()[-1] if t else ""
        for rx, k in _GHIDRA_RET:
            if rx.match(last):
                kind = k
                break
    conv = (m.group(2) or "").strip().lstrip("_")
    plist = m.group(3).strip()
    params = 0 if plist in ("", "void") else len([p for p in plist.split(",") if p.strip() and p.strip() != "..."])
    in_regs = 1 if conv == "thiscall" else 2 if conv == "fastcall" else 0
    return {"kind": kind, "conv": conv, "params": params, "stack_params": max(0, params - in_regs)}


def ghidra_ret_kind(c_text):
    return ghidra_sig(c_text)["kind"]


# ------------------------------------------------------------------------- who reads the return registers

_CALL_RE = re.compile(r"(?<![A-Za-z0-9_])(?:thunk_)?FUN_([0-9a-fA-F]{8})\s*\(")
_TAINT_EAX = re.compile(r"\bextraout_(?:EAX|AX|AL|AH|var)\w*")
_TAINT_EDX = re.compile(r"\bextraout_(?:EDX|DX|DL|DH)\w*")
_DECL_LINE = re.compile(r"^[ \t]*[A-Za-z_][\w \t\*]*\bextraout_\w+[ \t]*;[ \t]*$", re.M)


def scan_callers(c_text):
    """One decompiled function -> (callees it may be reading eax from, ...edx from, every callee it calls).

    Ghidra names a register that a call left behind and the callee's prototype does not declare
    `extraout_EAX` (or `extraout_var` for the upper bytes of a narrow result). Each such variable is the
    output of ONE call, and that call comes before the use in the text. Which one it is cannot be read off
    the C reliably, so EVERY call that textually precedes the last use is treated as read. That compares
    some units more than needed and can never compare one less than needed.
    """
    body = c_text or ""
    i = body.find("{")
    body = body[i:] if i >= 0 else ""
    body = _DECL_LINE.sub("", body)          # `undefined4 extraout_EAX;` is a declaration, not a use
    calls = [(m.start(), m.group(1).lower()) for m in _CALL_RE.finditer(body)]
    last_eax = max([m.start() for m in _TAINT_EAX.finditer(body)] or [-1])
    last_edx = max([m.start() for m in _TAINT_EDX.finditer(body)] or [-1])
    eax = {c for pos, c in calls if pos < last_eax}
    edx = {c for pos, c in calls if pos < last_edx}
    return eax, edx, {c for _pos, c in calls}


def build_retuse(records):
    """records: an iterable of {'addr': '0x...', 'c': '...'} (the Ghidra dump) -> the retuse table.

    {callee: [kind, stack_params, direct callers (not counting itself), taint]}   taint: 1 eax, 2 edx

    The taint is closed under one rule that the C cannot show directly: when a function is read for MORE
    than its own signature declares (a `void` whose eax a caller reads), the value came from somewhere
    inside it that the decompiler did not model - usually the last call it made - so every function it
    calls is treated as read too, and so on down.
    """
    sig, callees_of = {}, {}
    callers = {}
    taint = {}
    for d in records:
        a = (d.get("addr") or "").lower().replace("0x", "").zfill(8)
        if len(a) != 8:
            continue
        c = d.get("c") or ""
        sig[a] = ghidra_sig(c)
        eax, edx, called = scan_callers(c)
        callees_of[a] = called
        for x in called:
            if x != a:
                callers[x] = callers.get(x, 0) + 1
        for x in eax:
            taint[x] = taint.get(x, 0) | 1
        for x in edx:
            taint[x] = taint.get(x, 0) | 2
    # the closure: a function read beyond its declared result passes the read on to what it calls
    work = [a for a in taint]
    while work:
        a = work.pop()
        dead_eax, dead_edx = RET_KINDS[sig.get(a, {}).get("kind", "u32")]
        spill = (1 if (taint[a] & 1) and dead_eax else 0) | (2 if (taint[a] & 2) and dead_edx else 0)
        if not spill:
            continue
        for x in callees_of.get(a, ()):
            if (taint.get(x, 0) | spill) != taint.get(x, 0):
                taint[x] = taint.get(x, 0) | spill
                work.append(x)
    out = {}
    for a in set(sig) | set(callers) | set(taint):
        s = sig.get(a)
        if s is None:
            continue   # called but not in the dump: no signature, so no row, so judged in full
        out[a] = [s["kind"], s["stack_params"], callers.get(a, 0), taint.get(a, 0)]
    return out


_RETUSE_CACHE = {}


def load_retuse(root):
    """cow/retuse.json, or {} when it has not been built (every unit is then judged in full)."""
    path = os.path.join(root, RETUSE_REL)
    key = (path, os.path.getmtime(path) if os.path.isfile(path) else 0)
    if key not in _RETUSE_CACHE:
        _RETUSE_CACHE.clear()
        data = {}
        if os.path.isfile(path):
            with open(path, encoding="utf-8") as fh:
                data = json.load(fh)
        _RETUSE_CACHE[key] = data
    return _RETUSE_CACHE[key]


# ------------------------------------------------------------------------------------ the contract

def parse_contract(text):
    """The unit file's own claim: {'ret': kind, 'stack_args': n}, or None when it makes none.

        /* COW_CONTRACT ret=void stack_args=2 */
    """
    m = CONTRACT_RE.search(text or "")
    if not m or m.group(1) not in RET_KINDS:
        return None
    return {"ret": m.group(1), "stack_args": int(m.group(2))}


def _label(eax_dead, edx_dead, hint):
    if (eax_dead, edx_dead) == RET_KINDS["void"]:
        return hint if hint in ("f32", "f64") else "void"
    for k in ("u8", "u16", "u32"):
        if (eax_dead, edx_dead) == RET_KINDS[k]:
            return k
    return "u64" if hint == "u64" else "strict"


def effective_contract(text, use, derive):
    """(eax_dead, edx_dead, stack_args, label, why) - what the harness is told for one unit.

    text    the unit file (for its COW_CONTRACT line, if it has one)
    use     this function's row of the retuse table, or None
    derive  True for machine-written units (src/lifted): with no COW_CONTRACT line the contract is read
            from Ghidra's signature. False for hand units: no line means compare everything.
    """
    claim = parse_contract(text)
    if use is None:
        return 0, 0, 0, "strict", "no retuse row for this function: everything is compared"
    kind, stack_params, callers, taint = use[0], int(use[1]), int(use[2]), int(use[3])
    if claim is None and not derive:
        return 0, 0, 0, "strict", "no COW_CONTRACT line: everything is compared"
    eax_dead, edx_dead = RET_KINDS.get(kind, (0, 0))
    why = []
    if callers == 0:
        eax_dead, edx_dead = 0, 0
        why.append("no direct caller to witness the return contract")
    if taint & 1 and eax_dead:
        eax_dead = 0
        why.append("a direct caller reads eax after the call")
    if taint & 2 and edx_dead:
        edx_dead = 0
        why.append("a direct caller reads edx after the call")
    stack_args = 0
    if claim is not None:
        c_eax, c_edx = RET_KINDS[claim["ret"]]
        if (eax_dead & c_eax) != eax_dead or (edx_dead and not c_edx):
            why.append("the unit claims a wider result (%s) than the signature (%s)" % (claim["ret"], kind))
        eax_dead &= c_eax
        edx_dead = 1 if (edx_dead and c_edx) else 0
        stack_args = min(claim["stack_args"], stack_params)
        if claim["stack_args"] > stack_params:
            why.append("claims %d stack argument(s), the signature has %d" % (claim["stack_args"], stack_params))
    return eax_dead, edx_dead, stack_args, _label(eax_dead, edx_dead, kind), "; ".join(why)


# ------------------------------------------------------------------------------------ verdict lines

_PASS_RE = re.compile(r"^COWDIFF PASS (\w+) states=(\d+) blocks=(\d+)/(\d+)(.*)$")
_FAIL_RE = re.compile(r"^COWDIFF FAIL (\w+) (.*)$")
_KV_RE = re.compile(r"\b(clean|afault|asym|judge)=(\d+)")
_GRADE_RE = re.compile(r"\bgrade=(\w+)")
_WHY_RE = re.compile(r"first at state\s+(\d+)\s*\(([^)]*)\)")


def parse_line(line):
    """One line of cowdiff.exe output -> a result dict, or None when the line is not a verdict."""
    line = line.rstrip("\r\n")
    m = _PASS_RE.match(line)
    if m:
        kv = {k: int(v) for k, v in _KV_RE.findall(m.group(5))}
        g = _GRADE_RE.search(m.group(5))
        return {"entry": m.group(1).lower(), "pass": True, "states": int(m.group(2)),
                "cov": (int(m.group(3)), int(m.group(4))), "clean": kv.get("clean"),
                "afault": kv.get("afault"), "asym": kv.get("asym"), "judge": kv.get("judge", 1),
                "grade": g.group(1) if g else None, "why": "", "raw": line}
    m = _FAIL_RE.match(line)
    if m:
        kv = {k: int(v) for k, v in _KV_RE.findall(m.group(2))}
        w = _WHY_RE.search(m.group(2))
        return {"entry": m.group(1).lower(), "pass": False, "states": None, "cov": None,
                "clean": kv.get("clean"), "afault": kv.get("afault"), "asym": kv.get("asym"),
                "judge": kv.get("judge", 1), "grade": "none",
                "why": w.group(2).strip() if w else "other",
                "first_state": int(w.group(1)) if w else None, "raw": line}
    return None


def tier(res):
    """gold / silver / weak / fail / timeout for one parsed result (the rules are in the module docstring)."""
    if res is None:
        return "fail"
    if not res.get("pass"):
        return "timeout" if (res.get("why") or "") in ("timeout", "wall timeout") else "fail"
    clean, cov = res.get("clean"), res.get("cov")
    if res.get("judge") != 2 or clean is None or not cov or not cov[1]:
        return "weak"
    if clean >= GOLD_CLEAN and cov[0] == cov[1]:
        return "gold"
    if clean >= SILVER_CLEAN and cov[0] >= SILVER_COV * cov[1]:
        return "silver"
    return "weak"


# ------------------------------------------------------------------------------------ the record

def file_sha(path):
    """sha1 of a unit file with line endings normalised, so a CRLF checkout is the same file."""
    with open(path, "rb") as fh:
        data = fh.read().replace(b"\r\n", b"\n")
    return hashlib.sha1(data).hexdigest()


def judge_id(root):
    """12 hex digits naming the judge that is on disk right now (a missing file is part of the name)."""
    h = hashlib.sha1()
    for rel in JUDGE_FILES:
        p = os.path.join(root, rel)
        h.update(rel.encode() + b"\0")
        if os.path.isfile(p):
            with open(p, "rb") as fh:
                h.update(fh.read().replace(b"\r\n", b"\n"))
        h.update(b"\0")
    return h.hexdigest()[:12]


def make_record(res, src_sha, jid, label="strict", note=""):
    """What the proof ledger keeps for one unit. `pass` is True ONLY for gold, so every older reader of the
    ledger that counts `pass` now counts proven units and nothing else."""
    t = tier(res)
    cov = res.get("cov") or (0, 0)
    rec = {"pass": t == "gold", "tier": t, "verdict": "pass" if res.get("pass") else "fail",
           "grade": res.get("grade") or "none", "why": res.get("why") or "",
           "states": res.get("states") or 0, "blocks": "%d/%d" % (cov[0], cov[1]),
           "clean": res.get("clean") or 0, "afault": res.get("afault") or 0, "asym": res.get("asym") or 0,
           "contract": label, "src": src_sha, "judge": jid}
    if note:
        rec["note"] = note
    if not res.get("pass"):
        rec["raw"] = (res.get("raw") or "")[:700]
    return rec


def is_valid(rec, src_sha, jid):
    """A record counts only for the exact file and the exact judge that produced it."""
    return bool(rec) and rec.get("src") == src_sha and rec.get("judge") == jid


def write_json(path, data):
    """Atomic: a reader sees the old complete file or the new complete file, never half of one."""
    tmp = path + ".tmp"
    with open(tmp, "w", encoding="utf-8", newline="\n") as fh:
        json.dump(data, fh, indent=1, sort_keys=True)
    os.replace(tmp, path)


def update_ledger(path, changes, timeout=60.0):
    """Merge {entry: record} into the ledger at `path`, and return the merged ledger.

    TWO WRITERS. A baseline run and the conveyor may both be adding verdicts to cow/lift_proof_all.json.
    Each used to hold the whole ledger in memory and write all of it back, so whichever wrote second
    erased what the other had added since it started - verdicts lost with nothing wrong anywhere. A writer
    now states only the entries it is answering for; they are merged into whatever is on disk at that
    moment, under a lock that lives outside the repository (a stale lock, left by a process that died, is
    broken after `timeout` seconds).
    """
    lock = os.path.join(tempfile.gettempdir(),
                        "cow-ledger-%s.lock" % hashlib.sha1(os.path.abspath(path).lower().encode()).hexdigest()[:12])
    t0 = time.time()
    while True:
        try:
            os.close(os.open(lock, os.O_CREAT | os.O_EXCL | os.O_WRONLY))
            break
        except FileExistsError:
            if time.time() - t0 > timeout:
                try:
                    os.remove(lock)
                except OSError:
                    pass
                t0 = time.time()
            time.sleep(0.1)
    try:
        data = {}
        if os.path.isfile(path):
            try:
                with open(path, encoding="utf-8") as fh:
                    data = json.load(fh)
            except ValueError:
                data = {}
        data.update(changes)
        write_json(path, data)
        return data
    finally:
        try:
            os.remove(lock)
        except OSError:
            pass


# ------------------------------------------------------------------------------------ selftest

def _selftest():
    ok = [0, 0]

    def check(cond, what):
        ok[0 if cond else 1] += 1
        if not cond:
            print("SELFTEST FAIL: " + what)

    V = "/* COW_CONTRACT ret=void stack_args=2 */"
    # ---- signatures
    for sig, want in (("void __thiscall FUN_1024c910(int param_1,int param_2)\n{", ("void", "thiscall", 2, 1)),
                      ("undefined4 FUN_10010120(int param_1)\n\n{", ("u32", "", 1, 1)),
                      ("bool __fastcall FUN_10001234(void)\n{", ("u8", "fastcall", 0, 0)),
                      ("char * FUN_10001234(void)\n{", ("u32", "", 0, 0)),
                      ("longlong __cdecl FUN_10001234(int a,int b,int c)\n{", ("u64", "cdecl", 3, 3)),
                      ("float10 FUN_10001234(float param_1)\n{", ("f64", "", 1, 1)),
                      ("ushort FUN_10001234(void)\n{", ("u16", "", 0, 0)),
                      ("undefined FUN_10001234(void)\n{", ("u32", "", 0, 0)),
                      ("void thunk_FUN_10057160(void)\n{", ("void", "", 0, 0)),
                      ("void __fastcall FUN_10001234(int a,int b,int c)\n{", ("void", "fastcall", 3, 1)),
                      ("int __cdecl FUN_10001234(char *fmt,...)\n{", ("u32", "cdecl", 1, 1)),
                      ("garbage", ("u32", "", 0, 0))):
        s = ghidra_sig(sig)
        check((s["kind"], s["conv"], s["params"], s["stack_params"]) == want, "ghidra_sig %r -> %r" % (sig[:34], s))
    # ---- callers
    plain = "void FUN_10000000(int param_1)\n{\n  FUN_10000010(param_1);\n  FUN_10000020();\n  return;\n}"
    eax, edx, called = scan_callers(plain)
    check(not eax and not edx and called == {"10000010", "10000020"}, "plain caller reads nothing")
    reads = ("void FUN_10000100(void)\n{\n  int extraout_EAX;\n  undefined4 extraout_EDX;\n  FUN_10000010();\n"
             "  FUN_10000030(extraout_EAX);\n  FUN_10000040();\n  return;\n}")
    eax, edx, called = scan_callers(reads)
    check(eax == {"10000010", "10000030"}, "calls before the last use are read; the one after is not: %r" % eax)
    check(not edx, "a declaration alone is not a use")
    check("10000100" not in called, "the signature's own name is not a call")
    upper = "void FUN_10000200(void)\n{\n  undefined3 extraout_var;\n  char cVar1;\n  cVar1 = FUN_10000050();\n  FUN_10000060(CONCAT31(extraout_var,cVar1));\n}"
    check(scan_callers(upper)[0] == {"10000050", "10000060"}, "extraout_var is a read of the upper bytes")
    # ---- the table and its closure
    recs = [{"addr": "0x10000000", "c": plain},
            {"addr": "0x10000100", "c": reads},
            {"addr": "0x10000010", "c": "void FUN_10000010(int param_1)\n{\n  FUN_10000070();\n  return;\n}"},
            {"addr": "0x10000020", "c": "void FUN_10000020(void)\n{\n  return;\n}"},
            {"addr": "0x10000030", "c": "int FUN_10000030(int a)\n{\n  FUN_10000080();\n  return a;\n}"},
            {"addr": "0x10000070", "c": "void FUN_10000070(void)\n{\n  return;\n}"},
            {"addr": "0x10000080", "c": "void FUN_10000080(void)\n{\n  return;\n}"},
            {"addr": "0x10000090", "c": "void __cdecl FUN_10000090(int a,int b)\n{\n  return;\n}"}]
    use = build_retuse(recs)
    check(use["10000010"] == ["void", 1, 2, 1], "void, read by a caller: %r" % use["10000010"])
    check(use["10000070"][3] == 1, "the read passes down through a void function to what it calls")
    check(use["10000030"][3] == 1 and use["10000080"][3] == 0,
          "a function whose signature already declares eax does not pass the read on")
    check(use["10000020"] == ["void", 0, 1, 0], "void, one caller, nobody reads it")
    check(use["10000090"] == ["void", 2, 0, 0], "no caller at all")
    check("10000040" not in use, "called but not in the dump: no row")
    # ---- contracts
    check(effective_contract(V, None, True)[:4] == (0, 0, 0, "strict"), "no row: strict")
    check(effective_contract("x", use["10000020"], False)[:4] == (0, 0, 0, "strict"), "hand unit, no line: strict")
    check(effective_contract("x", use["10000020"], True)[:4] == (0xFFFFFFFF, 1, 0, "void"), "lifted void, derived")
    check(effective_contract("x", use["10000010"], True)[:4] == (0, 1, 0, "u32"), "void but a caller reads eax")
    check(effective_contract(V, use["10000090"], True)[:4] == (0, 0, 2, "strict"),
          "no witness: registers in full, own argument slots still its own")
    check(effective_contract(V, ["void", 1, 3, 0], True)[2] == 1, "stack_args capped by the signature")
    check(effective_contract("/* COW_CONTRACT ret=u32 stack_args=0 */", use["10000020"], True)[:4] == (0, 1, 0, "u32"),
          "a claim may be stricter than the signature")
    check(effective_contract(V, ["u32", 2, 3, 0], True)[:4] == (0, 1, 2, "u32"),
          "a claim may NOT be looser than the signature")
    check(effective_contract("x", ["u8", 0, 2, 0], True)[:4] == (0xFFFFFF00, 1, 0, "u8"), "char result")
    check(effective_contract("x", ["u8", 0, 2, 1], True)[:4] == (0, 1, 0, "u32"), "char result, upper bytes read")
    check(effective_contract("x", ["u64", 0, 2, 0], True)[:4] == (0, 0, 0, "u64"), "64-bit result")
    check(effective_contract("x", ["f64", 1, 2, 0], True)[:4] == (0xFFFFFFFF, 1, 0, "f64"), "float result")
    check(effective_contract("x", ["u32", 0, 2, 2], True)[:4] == (0, 0, 0, "strict"), "edx read by a caller")
    # ---- verdict lines
    p = parse_line("COWDIFF PASS 10010120 states=165 blocks=7/7 clean=100 afault=65 asym=0 grade=contract judge=2")
    check(p and p["pass"] and p["clean"] == 100 and p["cov"] == (7, 7) and p["grade"] == "contract", "parse PASS")
    check(tier(p) == "gold", "gold")
    L = "COWDIFF PASS 1 states=2000 blocks=%s clean=%d afault=0 asym=0 grade=exact judge=%d"
    check(tier(parse_line(L % ("6/7", 400, 2))) == "silver", "silver: a site missing")
    check(tier(parse_line(L % ("7/7", 40, 2))) == "silver", "silver: few clean states")
    check(tier(parse_line(L % ("4/112", 900, 2))) == "weak", "weak: 4 of 112 sites")
    check(tier(parse_line(L % ("7/7", 3, 2))) == "weak", "weak: 3 clean states")
    check(tier(parse_line(L % ("7/7", 2000, 1))) == "weak", "a PASS that is not judge 2 is weak")
    check(tier(parse_line("COWDIFF PASS 10010120 states=400 blocks=7/7")) == "weak", "an old-format PASS is weak")
    fl = ("COWDIFF FAIL 10010350 1 mismatch(es), first at state 3 (eax) fault 0/0 @00000000 00000000/00000000 x0 - "
          "store=missing A:0/00000000 B:0/00000000 reg=eax 00000007/00000009 esp=001937e4/001937e4 clean=2 "
          "afault=1 asym=0 judge=2 call=0:00000000/00000000 in=eax:00000001,ecx:00000000,edx:001829a4,"
          "ebx:07070707,esi:0018edac,edi:10001234,ebp:00000000,esp:001937e4 args=000001f4,00000000,00000001,ffffffff")
    f = parse_line(fl)
    check(f and not f["pass"] and f["why"] == "eax" and f["first_state"] == 3 and tier(f) == "fail", "parse FAIL")
    check(tier(parse_line("COWDIFF FAIL 1 1 mismatch(es), first at state 9 (timeout) fault 0/0")) == "timeout", "timeout")
    check(parse_line("[cowdiff] tracking 12 region(s), 17000 KB of guest memory") is None, "noise is not a verdict")
    # ---- the record
    rec = make_record(p, "abc", "j1", "void")
    check(rec["pass"] and rec["tier"] == "gold" and rec["blocks"] == "7/7" and is_valid(rec, "abc", "j1"), "record")
    check(not make_record(parse_line(L % ("6/7", 400, 2)), "a", "j")["pass"], "silver is not `pass`")
    check(not is_valid(rec, "abd", "j1") and not is_valid(rec, "abc", "j2") and not is_valid(None, "a", "b"), "stale")
    check(harness_flags()[:4] == ["--grade", "contract", "--stategen", "4"], "harness flags")
    ix = {"10001000": ["void f_10001000(Guest* g)", "    /* 10001000: mov eax, dword ptr [0x10400010] */",
                       "    /* 10001006: mov ecx, 0x10500000 */", "    /* 1000100b: call 0x10002000 */",
                       "        REGS_STORE; f_10002000(g); REGS_LOAD;", "    /* 10001010: jmp 0x10600000 */"],
          "10002000": ["void f_10002000(Guest* g)", "    /* 10002000: cmp byte ptr [0x10400020], 0 */",
                       "    /* 10002007: mov eax, dword ptr [ecx + 0x50] */",
                       "    /* 1000200a: lea eax, [eax*4 + 0x10700000] */"]}
    _world_cache.clear()
    check(world_list(ix, "10001000") == [(0x10400010, 4), (0x10400020, 1), (0x10500050, 4)], "world list")
    _world_cache.clear()
    ix2 = {"10003000": ["void f_10003000(Guest* g)", "    /* 10003000: call 0x10004000 */",
                        "        REGS_STORE; f_10004000(g); REGS_LOAD;", "    /* 10003005: call 0x10005000 */",
                        "        REGS_STORE; f_10005000(g); REGS_LOAD;", "    /* 1000300a: call 0x10006000 */",
                        "        REGS_STORE; f_10006000(g); REGS_LOAD;", "    /* 1000300f: ret 4 */"],
           "10004000": ["    /* 10004000: jmp 0x10004100 */"],                       # a thunk
           "10004100": ["    /* 10004100: xor eax, eax */", "    /* 10004102: ret 8 */"],
           "10005000": ["    /* 10005000: ret */", "    /* 10005001: ret 4 */"],      # rets disagree
           "10006000": ["    /* 10006000: jmp eax */"]}                              # indirect: unknown
    _purge_cache.clear()
    check(stub_list(ix2, "10003000") == [(0x10004000, 8)], "stub list: thunk followed, ambiguous ones left out")
    check(stub_list(ix2, "10003000", "x = f_10004000(g);") == [], "stub list: none when the unit calls f_ itself")
    _purge_cache.clear()
    d = tempfile.mkdtemp()
    led = os.path.join(d, "ledger.json")
    update_ledger(led, {"a": {"tier": "gold"}, "b": {"tier": "fail"}})
    other = update_ledger(led, {"c": {"tier": "gold"}})          # a second writer adds its own entry
    mine = update_ledger(led, {"b": {"tier": "gold"}})           # the first writer answers only for b
    check(mine == {"a": {"tier": "gold"}, "b": {"tier": "gold"}, "c": {"tier": "gold"}} and "c" in other,
          "update_ledger merges: neither writer erases the other's entries")
    # ---- judge 15: the x87 stack a callee leaves, and which callees the harness may answer
    def body(*ins):
        return [("    " + t) if t.startswith("f_") else "    /* %08x: %s */" % (0x10000000 + 0x10 * k, t)
                for k, t in enumerate(ins)]
    xi = {"1f000000": body("fnstcw word ptr [esp]", "fistp qword ptr [esp]", "ret"),       # _ftol
          "1f000100": body("fld dword ptr [eax]", "fstp dword ptr [ecx]", "ret"),
          "1f000200": body("fld dword ptr [eax]", "ret"),                                  # a float result
          "1f000300": body("fld dword ptr [eax]", "call 0x1f000000", "f_1f000000(g);", "ret"),
          "1f000400": body("mov eax, 1", "jmp dword ptr [ecx*4 + 0x10001000]", "ret"),     # its own switch
          "1f000500": body("call 0x1f000000", "f_1f000000(g);", "call 0x1f000100", "f_1f000100(g);",
                           "call 0x1f000300", "f_1f000300(g);", "ret")}
    _x87_cache.clear()
    for t, want in (("1f000000", -1), ("1f000100", 0), ("1f000200", 1), ("1f000300", 0), ("1f000400", 0)):
        check(x87_delta(xi, t) == want, "x87_delta %s -> %r, want %r" % (t, x87_delta(xi, t), want))
    got = [c for c, _p in stub_list(xi, "1f000500")]
    check(got == [0x1f000000, 0x1f000100, 0x1f000300], "stub_list answers _ftol too: %r" % got)
    got = pin_stub_list(xi, "1f000500")
    check([c for c, _p in got] == [0x1f000000, 0x1f000100, 0x1f000300], "pin_stub_list: %r" % got)
    check(x87_list(xi, got) == [(0x1f000000, -1)], "x87_list: %r" % x87_list(xi, got))
    _x87_cache.clear()
    # a tail call: its pop is the pop of the function it jumps to
    _purge_cache.clear()
    tc = {"1f000600": body("mov ecx, eax", "jmp 0x1f000700"), "1f000700": body("mov eax, 1", "ret 8")}
    tc["1f000600"] = ["    /* 1f000600: mov ecx, eax */", "    /* 1f000602: test ecx, ecx */",
                      "    /* 1f000604: jmp 0x1f000700 */"]
    check(callee_purge(tc, "1f000600") == 8, "callee_purge through a tail call: %r" % callee_purge(tc, "1f000600"))
    _purge_cache.clear()
    print("judge2 selftest: %d passed, %d failed" % (ok[0], ok[1]))
    return 1 if ok[1] else 0


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--selftest", action="store_true")
    ap.add_argument("--judge-id", action="store_true")
    ap.add_argument("--retuse", help="the Ghidra dump (functions_all.jsonl): write cow/retuse.json")
    ap.add_argument("--explain", help="an entry: print the contract it is judged under")
    a = ap.parse_args()
    root = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    if a.selftest:
        return _selftest()
    if a.judge_id:
        print(judge_id(root))
        return 0
    if a.retuse:
        def records():
            with open(a.retuse, encoding="utf-8", errors="replace") as fh:
                for line in fh:
                    line = line.strip()
                    if line:
                        try:
                            yield json.loads(line)
                        except ValueError:
                            continue
        use = build_retuse(records())
        if len(use) < 1000:
            print("RETUSE FAIL: only %d function(s) read from the dump - wrong path or wrong format" % len(use))
            return 2
        out = os.path.join(root, RETUSE_REL)
        tmp = out + ".tmp"
        with open(tmp, "w", encoding="utf-8", newline="\n") as fh:
            fh.write("{\n" + ",\n".join('"%s":%s' % (k, json.dumps(use[k], separators=(",", ":")))
                                        for k in sorted(use)) + "\n}\n")
        os.replace(tmp, out)
        by = {}
        for k, u in use.items():
            lab = effective_contract("", u, True)[3]
            by[lab] = by.get(lab, 0) + 1
        n_void = sum(1 for u in use.values() if u[0] == "void")
        n_wit = sum(1 for u in use.values() if u[0] == "void" and u[2] == 0)
        n_taint = sum(1 for u in use.values() if u[0] == "void" and u[2] > 0 and u[3] & 1)
        print("RETUSE OK: %d functions -> %s" % (len(use), os.path.relpath(out, root)))
        print("  judged as: " + ", ".join("%s %d" % (k, by[k]) for k in sorted(by)))
        print("  void per Ghidra: %d   of those: no direct caller %d, a caller reads eax %d, relaxed %d"
              % (n_void, n_wit, n_taint, n_void - n_wit - n_taint))
        return 0
    if a.explain:
        e = a.explain.lower().replace("0x", "")
        use = load_retuse(root).get(e)
        path = os.path.join(root, "src", "lifted", "cow_%s.c" % e)
        text = open(path, encoding="utf-8", errors="replace").read() if os.path.isfile(path) else ""
        eax_dead, edx_dead, sargs, label, why = effective_contract(text, use, True)
        print("0x%s  retuse=%s  claim=%s" % (e, use, parse_contract(text)))
        print("  judged as %s: eax_dead=0x%08x edx_dead=%d stack_args=%d%s"
              % (label, eax_dead, edx_dead, sargs, ("  (" + why + ")") if why else ""))
        return 0
    ap.print_help()
    return 2


if __name__ == "__main__":
    sys.exit(main())
