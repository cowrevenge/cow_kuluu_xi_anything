"""rise.py - the lifter that works from the instructions, not from a decompiler's C.

    python tools/cow/rise/rise.py --entries 0x10017030,0x100013a0 --out DIR
    python tools/cow/rise/rise.py --all --out DIR [--skip-gold]

WHY. The old lifter (tools/cow/ghidra/lift.py) wrote each unit from Ghidra's decompiled C and patched the
guest's plumbing back in from the recompiler's output. Ghidra throws away exactly what the judge checks:
the x87 stack, string instructions, switch tables, indirect calls, who pops the stack. So a third of the
image was refused outright and a third failed the proof.

This lifter starts where the recompiler starts - the instruction bytes, decoded by the same capstone setup
(recomp/recomp.py Program, recomp/x86c.py decode) - and does the work of a decompiler itself:

  * every value is an expression tree (rexpr.py); registers, flags, stack slots and the x87 stack are
    tracked symbolically through each basic block, so `mov eax,[ecx+8]; add eax,4; mov [edx],eax`
    becomes `wr32(edx, rd32(ecx + 8u) + 4u);`
  * flags are never computed unless something reads them; a `cmp a,b; jl` becomes `(int32_t)a < (int32_t)b`
    and an x87 `fcomp; fnstsw ax; test ah,0x41; jne` becomes `a <= b` (by a truth table over the four
    outcomes of the comparison, so every combination of status bits is read exactly)
  * the stack frame is C locals when its address never escapes, and guest memory (at the original's own
    addresses, cow_frame) when it does
  * calls name their target, their arguments and their convention (cow_stdcall / cow_thiscall / cow_cdecl)
  * the x87 stack is plain doubles; fr(g, x) keeps the precision control exact
Every unit is still proven by the judge before it counts. A function this lifter cannot express is
refused with a reason, never guessed.
"""
import argparse
import re
import json
import os
import sys
from collections import defaultdict

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.environ.get('COW_ROOT') or os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
sys.path.insert(0, HERE)
sys.path.insert(0, os.path.join(ROOT, 'recomp'))

import capstone                                           # noqa: E402
from capstone import x86_const as X                       # noqa: E402

import rexpr as E                                          # noqa: E402
from rexpr import C, V                                     # noqa: E402

R32 = ('eax', 'ecx', 'edx', 'ebx', 'esp', 'ebp', 'esi', 'edi')
GPR = ('eax', 'ecx', 'edx', 'ebx', 'ebp', 'esi', 'edi')
SUB = {'ax': ('eax', 16, 0), 'cx': ('ecx', 16, 0), 'dx': ('edx', 16, 0), 'bx': ('ebx', 16, 0),
       'sp': ('esp', 16, 0), 'bp': ('ebp', 16, 0), 'si': ('esi', 16, 0), 'di': ('edi', 16, 0),
       'al': ('eax', 8, 0), 'cl': ('ecx', 8, 0), 'dl': ('edx', 8, 0), 'bl': ('ebx', 8, 0),
       'ah': ('eax', 8, 8), 'ch': ('ecx', 8, 8), 'dh': ('edx', 8, 8), 'bh': ('ebx', 8, 8)}
for r in R32:
    SUB[r] = (r, 32, 0)
CALLEE_SAVED = ('ebx', 'esi', 'edi', 'ebp')
FLAGS = ('cf', 'pf', 'af', 'zf', 'sf', 'of')
CC_FLAGS = {'o': 'of', 'no': 'of', 'b': 'cf', 'ae': 'cf', 'e': 'zf', 'ne': 'zf', 'be': 'cf zf', 'a': 'cf zf',
            's': 'sf', 'ns': 'sf', 'p': 'pf', 'np': 'pf', 'l': 'sf of', 'ge': 'sf of', 'le': 'zf sf of',
            'g': 'zf sf of'}
SP = V('sp0')
SP1 = V('sp1')          # an aligned frame: `and esp, -N` makes a second base
VBASE = 0x10000000        # offsets from sp1 are kept as (off - VBASE) so they never meet sp0's


def frame_split(e):
    """offset from sp0 (or virtual offset from sp1) when e is a frame address, else None"""
    base, k = E.split_add(e)
    k = k if k < 0x80000000 else k - 0x100000000
    if base == SP:
        return k
    if base == SP1:
        return k - VBASE
    return None


def frame_addr(off):
    if off < -VBASE // 2:
        return E.add(SP1, C(off + VBASE))
    return E.add(SP, C(off))


class Refuse(Exception):
    """the function cannot be lifted by this version; the message says why (a short class name first)"""


class Escape(Exception):
    """a frame address is used as a value: lift again with the frame in guest memory"""


def fcmp_expr(table, a, b):
    """the outcomes (of gt lt eq un) for which a condition holds -> a double comparison of a and b"""
    t = frozenset(table)
    G, L, Q, U = 'gt', 'lt', 'eq', 'un'
    m = {
        frozenset(): C(0), frozenset((G, L, Q, U)): C(1),
        frozenset((G,)): ('dcmp', '>', a, b), frozenset((L,)): ('dcmp', '<', a, b),
        frozenset((Q,)): ('dcmp', '==', a, b), frozenset((G, Q)): ('dcmp', '>=', a, b),
        frozenset((L, Q)): ('dcmp', '<=', a, b),
        frozenset((G, L, U)): ('dcmp', '!=', a, b),
        frozenset((L, Q, U)): E.lnot(('dcmp', '>', a, b)), frozenset((G, Q, U)): E.lnot(('dcmp', '<', a, b)),
        frozenset((L, U)): E.lnot(('dcmp', '>=', a, b)), frozenset((G, U)): E.lnot(('dcmp', '<=', a, b)),
        frozenset((Q, U)): E.lnot(E.lor(('dcmp', '<', a, b), ('dcmp', '>', a, b))),
        frozenset((G, L)): E.lor(('dcmp', '<', a, b), ('dcmp', '>', a, b)),
        frozenset((U,)): ('fn', 'isunordered', 'u', (a, b)),
        frozenset((G, L, Q)): E.lnot(('fn', 'isunordered', 'u', (a, b))),
    }
    return m[t]


# ============================================================================================ the image

def import_args(root):
    """{(dll, name): words the import pops}, from the runtime's own shims - the code the original calls when
    it calls an import. A shim ends with RET(value, nargs) (runtime/portable/thunk.h), which pops nargs
    words; a shim that pops different counts on different paths (one shim for several imports) says nothing
    and is left out."""
    counts, table = {}, {}
    for d, _sub, files in os.walk(os.path.join(root, 'runtime')):
        for f in files:
            if not f.endswith('.c'):
                continue
            t = open(os.path.join(d, f), encoding='utf-8', errors='replace').read()
            for m in re.finditer(r'static void (sh_\w+)\(Guest\* g\)\s*\{(.*?)\n\}', t, re.S):
                ns = {int(x) for x in re.findall(r'\bRET\([^;]*,\s*(\d+)\)\s*;', m.group(2))}
                if ns:
                    counts[m.group(1)] = ns
            for m in re.finditer(r'\{\s*"([\w.]+)",\s*"(\w+)",\s*(sh_\w+)\s*\}', t):
                table[(m.group(1).lower(), m.group(2))] = m.group(3)
    return {k: next(iter(counts[v])) for k, v in table.items() if len(counts.get(v, ())) == 1}


class Image:
    def __init__(self, root=ROOT, image=None, meta=None):
        import recomp
        root = root or ROOT
        if meta is None:
            bj = json.load(open(os.path.join(root, 'generated', 'build.json')))
            meta = os.path.join(root, 'meta', 'FFXiMain.%s.meta.json' % bj['build'])
        if image is None:
            image = os.path.join(root, 'generated', 'FFXiMain.unpacked.dll')
        self.prog = recomp.Program(json.load(open(meta)), image)
        self.functions = self.prog.functions
        self.entries = self.prog.entries
        self.switches = self.prog.switches
        self.relocs = self.prog.relocs
        self.text = tuple(self.prog.meta['text'])
        self.base = self.prog.base
        self._decoded = {}
        self._info = {}         # entry -> what info() found, where it never stopped short (the same whenever asked)
        self._top = {}          # entry -> what info() found asked at depth 0, where it did stop short somewhere
        self._inprog = set()    # entries whose info() is being worked out (a cycle of calls reaches them again)
        self._cuts = 0          # times a walk stopped short: at a depth limit, or at an entry still in progress
        self.retuse = {}
        p = os.path.join(root, 'cow', 'retuse.json')
        if os.path.isfile(p):
            self.retuse = json.load(open(p))
        self.iat = self._iat(image)
        self.import_args = import_args(root)

    def _iat(self, image):
        # from the FILE: prog.image is the image as mapped, and pefile reads a mapped image as if it were a
        # file - the import directory lands on the wrong bytes and the old code found no import at all
        import pefile
        pe = pefile.PE(image, fast_load=True)
        out = {}
        try:
            pe.parse_data_directories(directories=[pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_IMPORT']])
            for d in getattr(pe, 'DIRECTORY_ENTRY_IMPORT', ()):
                for imp in d.imports:
                    nm = imp.name.decode() if imp.name else 'ord%d' % (imp.ordinal or 0)
                    out[imp.address] = (d.dll.decode().lower(), nm)
        except Exception:
            pass
        return out

    def u32(self, a):
        o = a - self.base
        b = self.prog.image[o:o + 4]
        return int.from_bytes(bytes(b), 'little')

    def decode(self, entry):
        ft = self._decoded.pop(entry, None)
        if ft is None:
            from x86c import FunctionTranslator
            ft = FunctionTranslator(self.prog, entry, self.functions[entry])
            ft.decode()
            if len(self._decoded) > 1500:      # most recently used kept, the oldest go (a dict keeps order)
                for k in list(self._decoded)[:300]:
                    del self._decoded[k]
        self._decoded[entry] = ft
        return ft

    # ---------------------------------------------------------------- facts about a callee
    def info(self, entry, depth=0):
        """{'pop': bytes the callee pops (None unknown), 'noreturn': bool, 'probe': stack probe,
            'reads': set of registers it reads before writing, 'float': returns on the x87 stack}"""
        # What a callee does must not depend on what was asked before. It did: a callee first met three calls
        # deep was walked only that far and the shallow answer was kept for good, so a function lifted after
        # others got another x87 depth for its callee than lifted alone (0x1020ef00: lifted in a batch, not by
        # itself). An answer is kept only when its walk never stopped short; one that did is worked out again
        # whenever it is asked from another depth.
        r = self._info.get(entry)
        if r is not None:
            return r
        if depth == 0 and entry in self._top:
            return self._top[entry]
        if entry not in self.functions:
            return {'pop': None, 'noreturn': False, 'probe': False, 'reads': set(GPR), 'xdelta': None}
        if entry in self._inprog:
            self._cuts += 1
            return {'pop': None, 'noreturn': False, 'probe': False, 'reads': set(GPR), 'xdelta': None}
        self._inprog.add(entry)
        cuts0 = self._cuts
        try:
            r = self._info_walk(entry, depth)
        finally:
            self._inprog.discard(entry)
        if self._cuts == cuts0:
            self._info[entry] = r
        elif depth == 0:
            self._top[entry] = r
        return r

    def deeper(self, depth, limit):
        """may a walk at `depth` go one call further (counted when it may not)"""
        if depth < limit:
            return True
        self._cuts += 1
        return False

    def _info_walk(self, entry, depth):
        ft = self.decode(entry)
        ins = ft.insns
        pops = set()
        tails = []
        for i in ins:
            if i.mnemonic == 'ret':
                pops.add(i.operands[0].imm if i.operands else 0)
            elif i.mnemonic == 'jmp' and i.operands and i.operands[0].type == X.X86_OP_IMM:
                t = i.operands[0].imm & 0xFFFFFFFF
                if t in self.entries and t != entry and t not in ft.addrs:
                    tails.append(t)
        probe = any(i.mnemonic == 'cmp' and i.op_str.replace(' ', '') in ('eax,0x1000',) for i in ins[:6]) and \
            len(ins) < 40 and not pops - {0}
        pop = None
        npops = len(pops)
        if len(pops) == 1:
            pop = next(iter(pops))
        elif not pops and tails and self.deeper(depth, 8):
            sub = self.info(tails[0], depth + 1)
            pop = sub['pop']
        noreturn = not npops and not tails and not any(i.mnemonic == 'jmp' and i.operands and
                                                       i.operands[0].type != X.X86_OP_IMM for i in ins)
        reads = entry_reads(self, entry, depth)
        xdelta = callee_xdelta(self, entry, depth)
        nargs = callee_nargs(ins, entry)
        flags_in = callee_reads_flags(ins, entry)
        helper = frame_helper(ins)
        clobbers = callee_clobbers(self, ins, tails, depth)
        return {'pop': pop, 'noreturn': noreturn, 'probe': probe, 'reads': reads, 'xdelta': xdelta,
                'helper': helper, 'nargs': nargs, 'flags_in': flags_in, 'clobbers': clobbers}


def reg_of(ins, r):
    n = ins.reg_name(r)
    if n not in SUB:
        raise Refuse('register %s' % n)
    return SUB[n]


TEST_FLAGS = 0
for _n in dir(X):
    if _n.startswith('X86_EFLAGS_TEST_'):
        TEST_FLAGS |= getattr(X, _n)
MOD_FLAGS = 0
for _n in dir(X):
    if _n.startswith(('X86_EFLAGS_MODIFY_', 'X86_EFLAGS_RESET_', 'X86_EFLAGS_SET_', 'X86_EFLAGS_UNDEFINED_')):
        MOD_FLAGS |= getattr(X, _n)


def callee_reads_flags(ins, entry):
    """does a function read the flags its caller left (MSVC's __RTC_CheckEsp: `cmp esi, esp; call` and the
    callee's first instruction is a jne)"""
    for i in ins:
        if i.address < entry:
            continue
        try:
            ef = i.eflags
        except Exception:
            return False
        if ef & TEST_FLAGS:
            return True
        if ef & MOD_FLAGS or i.mnemonic in ('call', 'ret', 'jmp'):
            return False
    return False


def callee_nargs(ins, entry):
    """how many stack words above its return address a function reads (its own instructions, walked in
    address order with esp and an ebp frame tracked); None when the walk loses the stack"""
    d = 0
    ebp = None
    most = 0
    for i in ins:
        if i.address < entry:
            continue
        for op in i.operands:
            if op.type == X.X86_OP_MEM and not op.mem.index:
                base = i.reg_name(op.mem.base) if op.mem.base else ''
                off = None
                if base == 'esp':
                    off = op.mem.disp - d
                elif base == 'ebp' and ebp is not None:
                    off = op.mem.disp - ebp
                if off is not None and off >= 4:
                    most = max(most, (off - 4) // 4 + 1)
                if base == 'esp' and i.mnemonic == 'lea':
                    return None
        mn = i.mnemonic
        if mn == 'push':
            d -= 4
        elif mn == 'pop':
            d += 4
        elif mn in ('sub', 'add') and i.op_str.replace(' ', '').startswith('esp,') and i.operands[1].type == X.X86_OP_IMM:
            d += -i.operands[1].imm if mn == 'sub' else i.operands[1].imm
        elif mn == 'mov' and i.op_str.replace(' ', '') == 'ebp,esp':
            ebp = d
        elif mn == 'ret':
            return most
        elif mn == 'jmp' or mn.startswith('j') or mn == 'call':
            # the walk ends before the function does: what it saw is a lower bound, not the count
            return most if most else None
        elif i.operands and i.operands[0].type == X.X86_OP_REG and i.reg_name(i.operands[0].reg) in ('esp',):
            return None
    return most


def frame_helper(ins):
    """the straight-line instructions of a function that works on its CALLER's frame (MSVC's __EH_prolog,
    __SEH_prolog/epilog: they push or pop around their own return address), else None"""
    if len(ins) > 40:
        return None
    d = 0
    body = []
    odd = False
    ebp_d = None
    for i in ins:
        mn = i.mnemonic
        if mn.startswith('j') or mn == 'call' or mn.startswith('loop'):
            return None
        if mn == 'push':
            d -= 4
        elif mn == 'pop':
            d += 4
        elif mn in ('add', 'sub') and i.op_str.replace(' ', '').startswith('esp,') and i.operands[1].type == X.X86_OP_IMM:
            d += (i.operands[1].imm if mn == 'add' else -i.operands[1].imm)
        elif mn == 'mov' and i.op_str.replace(' ', '') == 'ebp,esp':
            ebp_d = d
        elif mn == 'leave' and ebp_d is not None:
            d = ebp_d + 4
            ebp_d = None
        elif mn == 'leave' or (i.operands and i.operands[0].type == X.X86_OP_REG and i.reg_name(i.operands[0].reg) == 'esp'):
            odd = True
        body.append(i)
        if mn == 'ret':
            if i.operands:
                return None
            if d != 0 or odd:
                return body
            return None
    return None


def callee_xdelta(img, entry, depth):
    """the x87 depth a function leaves (+1 a float return, -1 _ftol), along its first path to a ret"""
    ft = img.decode(entry)
    by = {i.address: i for i in ft.insns}
    order = [i.address for i in ft.insns]
    nxt = {order[k]: order[k + 1] for k in range(len(order) - 1)}
    work = [(entry, 0, False)]
    seen = set()
    while work:
        pc, d, ind = work.pop()
        while pc in by:
            if (pc, d) in seen or len(seen) > 20000:
                break
            if d > 8 or d < -8:
                break
            seen.add((pc, d))
            i = by[pc]
            mn = i.mnemonic
            d += x87_delta(i)
            if mn == 'ret':
                # a call through a pointer counted as 0: if the depth is not 0 here, that call may be what
                # returned (or consumed) the float, so the count is not evidence
                return None if (ind and d) else d
            if mn == 'call':
                if i.operands[0].type != X.X86_OP_IMM:
                    ind = True
                if i.operands[0].type == X.X86_OP_IMM:
                    t = i.operands[0].imm & 0xFFFFFFFF
                    if t in img.functions and t != entry:
                        # a callee too deep to walk is UNKNOWN, not 0: counted as 0, `fld; call _ftol` three
                        # calls down left +1, and a function that returns no float was taken for one
                        if not img.deeper(depth, 8):
                            return None
                        sub = img.info(t, depth + 1)['xdelta']
                        if sub is None:
                            return None
                        d += sub
                pc = nxt.get(pc)
                continue
            if mn == 'jmp':
                if i.operands[0].type == X.X86_OP_IMM:
                    t = i.operands[0].imm & 0xFFFFFFFF
                    if t in by:
                        pc = t
                        continue
                    if t in img.functions and img.deeper(depth, 8):
                        sub = img.info(t, depth + 1)['xdelta']
                        return None if sub is None else d + sub
                break
            if mn in JCC or mn.startswith('loop') or mn == 'jecxz':
                work.append((i.operands[0].imm & 0xFFFFFFFF, d, ind))
            pc = nxt.get(pc)
    return None


def callee_clobbers(img, ins, tails, depth):
    """the callee-saved registers (ebx esi edi ebp) a callee may hand back changed. The ABI says none, and
    compiled code keeps it with a push and a pop; hand-written math helpers do not (0x1030a5e0 returns
    results in ebx and esi, and its callers save their own copies in the frame first). A register the
    callee writes without both a push and a pop of it (or `leave` for ebp) is one the caller must read
    back. Over-counting is harmless: the value is handed in through g and read back from it."""
    written, pushed, popped = set(), set(), set()
    for i in ins:
        mn = i.mnemonic
        if mn == 'push' and i.operands and i.operands[0].type == X.X86_OP_REG:
            pushed.add(i.reg_name(i.operands[0].reg))
            continue
        if mn == 'pop' and i.operands and i.operands[0].type == X.X86_OP_REG:
            popped.add(i.reg_name(i.operands[0].reg))
            continue
        if mn == 'leave':
            popped.add('ebp')
            continue
        try:
            _r, w = i.regs_access()
        except capstone.CsError:
            continue
        for reg in w:
            n = i.reg_name(reg)
            full = SUB.get(n, (n,))[0]
            if full in CALLEE_SAVED:
                written.add(full)
    out = {r for r in written if not (r in pushed and r in popped)}
    if tails and img.deeper(depth, 6):
        out |= img.info(tails[0], depth + 1).get('clobbers', set())
    return out


def entry_reads(img, entry, depth):
    """registers a function reads before it writes them (a light walk of its CFG, calls included)"""
    ft = img.decode(entry)
    if not ft.insns:
        return set()
    by = {i.address: i for i in ft.insns}
    order = [i.address for i in ft.insns]
    nxt = {order[k]: order[k + 1] for k in range(len(order) - 1)}
    seen = {}
    out = set()
    work = [(entry, frozenset())]
    steps = 0
    while work and steps < 4000:
        pc, written = work.pop()
        while pc in by and steps < 4000:
            steps += 1
            key = (pc, written)
            if seen.get(pc, None) is not None and seen[pc] <= written:
                break
            seen[pc] = written if seen.get(pc) is None else (seen[pc] & written)
            i = by[pc]
            mn = i.mnemonic
            if mn == 'call':
                t = i.operands[0].imm & 0xFFFFFFFF if i.operands[0].type == X.X86_OP_IMM else None
                if t is not None and t in img.functions and img.deeper(depth, 2):
                    sub = img.info(t, depth + 1)['reads']
                else:
                    sub = {'ecx', 'edx'} if t is None else set()
                for r in sub:
                    if r not in written:
                        out.add(r)
                written = written | {'eax', 'ecx', 'edx'}
                pc = nxt.get(pc)
                continue
            try:
                rr, ww = i.regs_access()
            except Exception:
                rr, ww = [], []
            rn = set()
            for r in rr:
                n = i.reg_name(r)
                if n in SUB:
                    rn.add(SUB[n][0])
            wn = set()
            for r in ww:
                n = i.reg_name(r)
                if n in SUB:
                    full, bits, _ = SUB[n]
                    if bits == 32:
                        wn.add(full)
                    else:
                        rn.add(full)
            if mn in ('xor', 'sub') and len(i.operands) == 2 and i.operands[0].type == X.X86_OP_REG and \
                    i.operands[1].type == X.X86_OP_REG and i.operands[0].reg == i.operands[1].reg:
                rn.discard(SUB[i.reg_name(i.operands[0].reg)][0])
            if mn == 'push' and i.operands[0].type == X.X86_OP_REG and i.reg_name(i.operands[0].reg) in CALLEE_SAVED:
                rn.discard(i.reg_name(i.operands[0].reg))
            for r in rn:
                if r not in written and r != 'esp':
                    out.add(r)
            written = written | wn
            if mn == 'ret':
                break
            if mn == 'jmp':
                if i.operands[0].type == X.X86_OP_IMM:
                    t = i.operands[0].imm & 0xFFFFFFFF
                    if t in by:
                        pc = t
                        continue
                    if t in img.functions and img.deeper(depth, 2):
                        for r in img.info(t, depth + 1)['reads']:
                            if r not in written:
                                out.add(r)
                break
            if mn[0] == 'j' or mn.startswith('loop'):
                if i.operands and i.operands[0].type == X.X86_OP_IMM:
                    work.append((i.operands[0].imm & 0xFFFFFFFF, written))
            pc = nxt.get(pc)
    if steps >= 4000:
        return set(GPR)
    return out & set(GPR)


# ============================================================================================ CFG

class Block:
    def __init__(self, start):
        self.start = start
        self.ins = []
        self.succ = []
        self.pred = []
        self.term = None


def x87_op(ins):
    b = bytes(ins.bytes)
    i = 0
    while i < len(b) and b[i] in (0x9B, 0x66, 0x67, 0x26, 0x2E, 0x36, 0x3E, 0x64, 0x65, 0xF0, 0xF2, 0xF3):
        i += 1
    if i < len(b) - 1 and 0xD8 <= b[i] <= 0xDF:
        return b[i], b[i + 1]
    return None


TAIL_KEY = 1 << 40       # the block key of a synthetic tail-call block: TAIL_KEY + target


def x87_delta(ins):
    """how many values an x87 instruction pushes (+) or pops (-)"""
    xo = x87_op(ins)
    if xo is None:
        return 0
    op, modrm = xo
    mod, reg = modrm >> 6, (modrm >> 3) & 7
    if mod != 3:
        if op in (0xD8, 0xDC, 0xDA, 0xDE):
            return -1 if reg == 3 else 0
        if op == 0xD9:
            return {0: 1, 3: -1}.get(reg, 0)
        if op == 0xDB:
            return {0: 1, 1: -1, 3: -1, 5: 1, 7: -1}.get(reg, 0)
        if op == 0xDD:
            return {0: 1, 1: -1, 3: -1}.get(reg, 0)
        if op == 0xDF:
            return {0: 1, 1: -1, 3: -1, 5: 1, 7: -1}.get(reg, 0)
        return 0
    if op == 0xD8:
        return -1 if reg == 3 else 0
    if op == 0xD9:
        if reg == 0 or 0xE8 <= modrm <= 0xEE or modrm in (0xF2, 0xFB, 0xF6):
            return 1
        if modrm in (0xF1, 0xF3, 0xF9, 0xF7):
            return -1
        return 0
    if op == 0xDA:
        return -2 if modrm == 0xE9 else 0
    if op == 0xDD:
        return -1 if reg in (3, 5) else 0
    if op == 0xDE:
        return -2 if modrm == 0xD9 else -1
    if op == 0xDF:
        return -1 if reg in (5, 6) else 0
    return 0


JCC = {'jo': 'o', 'jno': 'no', 'jb': 'b', 'jae': 'ae', 'je': 'e', 'jne': 'ne', 'jbe': 'be', 'ja': 'a',
       'js': 's', 'jns': 'ns', 'jp': 'p', 'jnp': 'np', 'jl': 'l', 'jge': 'ge', 'jle': 'le', 'jg': 'g'}


def build_cfg(img, entry):
    ft = img.decode(entry)
    ins = ft.insns
    if not ins:
        raise Refuse('decode: no instructions')
    addrs = {i.address for i in ins}
    by = {i.address: i for i in ins}
    leaders = {entry}
    for k, i in enumerate(ins):
        mn = i.mnemonic
        tgts = []
        if mn in JCC or mn in ('jmp', 'jecxz', 'loop', 'loope', 'loopne'):
            if i.operands and i.operands[0].type == X.X86_OP_IMM:
                tgts.append(i.operands[0].imm & 0xFFFFFFFF)
            elif mn == 'jmp':
                tgts.extend(img.switches.get(i.address, ()))
            if k + 1 < len(ins):
                leaders.add(ins[k + 1].address)
        if mn == 'ret' or mn == 'int3':
            if k + 1 < len(ins):
                leaders.add(ins[k + 1].address)
        for t in tgts:
            if t in addrs:
                leaders.add(t)
    blocks = {}
    cur = None
    for k, i in enumerate(ins):
        if i.address in leaders or cur is None:
            cur = Block(i.address)
            blocks[i.address] = cur
        cur.ins.append(i)
    order = sorted(blocks)
    for n, a in enumerate(order):
        b = blocks[a]
        last = b.ins[-1]
        mn = last.mnemonic
        fall = last.address + last.size
        if mn == 'ret':
            b.term = ('ret',)
        elif mn == 'int3':
            b.term = ('trap',)
        elif mn == 'jmp':
            op = last.operands[0]
            if op.type == X.X86_OP_IMM:
                t = op.imm & 0xFFFFFFFF
                if t in blocks:
                    b.term = ('jmp', t)
                    b.succ = [t]
                elif t in img.entries:
                    b.term = ('tail', t)
                else:
                    raise Refuse('jump outside: %x' % t)
            else:
                sw = img.switches.get(last.address)
                if sw is not None:
                    b.term = ('switch', list(sw))
                    b.succ = [t for t in dict.fromkeys(sw) if t in blocks]
                    if len(b.succ) != len(set(sw)):
                        raise Refuse('switch target outside')
                else:
                    b.term = ('tailind',)
        elif mn in JCC or mn in ('jecxz', 'loop', 'loope', 'loopne'):
            t = last.operands[0].imm & 0xFFFFFFFF
            if t not in blocks:
                if t not in img.entries:
                    raise Refuse('jump outside: %x' % t)
                # a conditional jump into another function is a tail call on that branch: a block of its own
                # with nothing in it but the tail call
                key = TAIL_KEY + t
                if key not in blocks:
                    tb = Block(key)
                    tb.term = ('tail', t)
                    blocks[key] = tb
                t = key
            if fall not in blocks:
                raise Refuse('falls off the end')
            b.term = ('cond', t, fall)
            b.succ = [t, fall] if t != fall else [t]
        else:
            if fall in blocks:
                b.term = ('fall', fall)
                b.succ = [fall]
            elif fall in img.entries:
                b.term = ('tail', fall)
            else:
                # a call to a noreturn function at the end, or a decode gap
                b.term = ('end',)
    splice_status_blocks(blocks, entry)
    for a, b in blocks.items():
        for s in b.succ:
            blocks[s].pred.append(a)
    # reachable from entry only
    seen, work = set(), [entry]
    while work:
        a = work.pop()
        if a in seen:
            continue
        seen.add(a)
        work.extend(blocks[a].succ)
    blocks = {a: b for a, b in blocks.items() if a in seen}
    for b in blocks.values():
        b.pred = [p for p in b.pred if p in seen]
    return blocks


X87_COMPARES = ('fcom', 'fcomp', 'fcompp', 'fucom', 'fucomp', 'fucompp', 'ftst', 'fxam', 'ficom', 'ficomp')


def splice_status_blocks(blocks, entry):
    """A block that reads the x87 status word (fnstsw) before any compare of its own reads a compare made in
    the block before it - and MSVC merges the tails of two compares into one `fnstsw ax; test ah, ..`, so
    that block has two predecessors that each end with their own compare. The status word is not carried
    between blocks, so each predecessor that reaches it unconditionally (a jmp, or falling through) gets
    its own copy of the block's instructions in place of the jump: the compare and the fnstsw are in one
    block again. The instructions keep their addresses (coverage counts the same sites); the original
    block stays for any conditional predecessor and is dropped if nothing reaches it any more."""
    def reads_status(b):
        for i in b.ins:
            if i.mnemonic in X87_COMPARES:
                return False
            if i.mnemonic == 'fnstsw':
                return True
        return False
    for _round in range(4):
        changed = False
        for a in sorted(blocks):
            b = blocks[a]
            if a == entry or not b.ins or not reads_status(b):
                continue
            for pa in sorted(blocks):
                pb = blocks[pa]
                if pb is b or pb.term not in (('jmp', a), ('fall', a)):
                    continue
                body = pb.ins[:-1] if pb.term[0] == 'jmp' else pb.ins
                if len(body) + len(b.ins) > 400:
                    continue
                pb.ins = body + list(b.ins)
                pb.term = b.term
                pb.succ = list(b.succ)
                changed = True
        if not changed:
            break


def rpo(blocks, entry):
    out, seen = [], set()

    def dfs(a):
        stack = [(a, iter(blocks[a].succ))]
        seen.add(a)
        while stack:
            node, it = stack[-1]
            for s in it:
                if s not in seen:
                    seen.add(s)
                    stack.append((s, iter(blocks[s].succ)))
                    break
            else:
                stack.pop()
                out.append(node)
    dfs(entry)
    return list(reversed(out))


# ============================================================================================ the executor
#
# One Lifter runs twice over a function. Pass 1 ('scan') walks every block, finds where the stack pointer
# is, and records which registers, flags and stack words each instruction reads and writes. From those,
# liveness. Pass 2 ('emit') walks again with the liveness in hand and writes C: a value is only ever put in
# a variable when something later reads it.

def key_r(r):
    return 'r:' + r


def key_f(f):
    return 'f:' + f


def key_s(off):
    return 's:%d' % off


class Slot:
    __slots__ = ('size', 'kind', 'e')

    def __init__(self, size, kind, e):
        self.size, self.kind, self.e = size, kind, e

    def __eq__(self, o):
        return isinstance(o, Slot) and (self.size, self.kind, self.e) == (o.size, o.kind, o.e)

    def __repr__(self):
        return 'Slot(%d,%s,%r)' % (self.size, self.kind, self.e)


class State:
    def __init__(self):
        self.r = {}          # reg -> expr (esp always sp0 + k)
        self.f = {}          # flag -> expr
        self.frec = {}       # flag -> record (kind, a, b, r, bits) that last set it
        self.s = {}          # stack offset -> Slot
        self.x = []          # x87 values, st(0) first
        self.xd = 0          # pushes minus pops since entry
        self.fsw = None      # last x87 compare (a, b, depth)
        self.written = set() # stack words written since the last call

    def copy(self):
        n = State()
        n.r = dict(self.r)
        n.f = dict(self.f)
        n.frec = dict(self.frec)
        n.s = dict(self.s)
        n.x = list(self.x)
        n.xd = self.xd
        n.fsw = self.fsw
        n.written = set(self.written)
        return n


RECORD_FLAGS = {'sub': FLAGS, 'add': FLAGS, 'logic': FLAGS}


class Lifter:
    def __init__(self, img, entry, guest_frame=False):
        self.img = img
        self.entry = entry
        self.guest = guest_frame
        self.blocks = build_cfg(img, entry)
        self.order = rpo(self.blocks, entry)
        if self.blocks[entry].pred:
            raise Refuse('entry is a loop head')
        use = img.retuse.get('%08x' % entry)
        self.eax_dead, self.edx_dead = 0, 0
        if use:
            sys.path.insert(0, os.path.join(ROOT, 'tools', 'cow'))
            import judge2
            self.eax_dead, self.edx_dead, _sa, self.ret_label, _w = judge2.effective_contract('', use, True)
        else:
            self.ret_label = 'strict'
        self.escape = False
        self.ptr_regs = set()
        import time
        self.t_start = time.time()
        self.choices = {}
        self.sp1 = None

    # ------------------------------------------------------------------ the run
    def run(self, mode, live_after=None, entry_facts=None, forced_vars=None):
        self.mode = mode
        self.uses = defaultdict(set)
        self.defs = defaultdict(set)
        self.live_after = live_after or {}
        self.forced = forced_vars or set()      # (block, key) that must be a variable at block entry
        self.facts = entry_facts if entry_facts is not None else {}
        self.out_state = {}
        self.in_state = {}
        self.code = {}
        self.ntemp = 0
        self.decls = {}                          # var -> C type
        self.inputs = set()                      # in_* names read
        self.args_read = set()
        self.args_written = set()
        self.min_sp = 0
        self.min_sp1 = 0
        self.dirty_g = set()
        self.exits = []
        self.mismatch = set()
        self.fixed_in = {}                       # block -> {key: expr} propagated at its entry
        self.exit_pops = set()
        self.has_tail = False
        self.notes = []
        self.done_blocks = set()
        self.in_term = False
        self.term_uses = defaultdict(set)
        self.inlining = False
        self.tinfo = {}
        self.unknown = []
        self.unknown_words = {}      # an unknown call -> the most words its callee may pop
        self.unknown_pop = {}        # ... and the bytes it was given this scan
        self.push_only = False
        self.is_save = False
        self.facts_changed = False
        self.term_cond = self.term_switch = self.term_tailind = None
        self.exit_code = None
        for a in self.order:
            self.run_block(a)
        return self

    def new_temp(self, kind):
        self.ntemp += 1
        fl = kind in ('d', 'f', 't')
        n = ('d%d' if fl else 'q%d' if kind == 'q' else 't%d') % self.ntemp
        self.decls[n] = 'double' if fl else 'int64_t' if kind == 'q' else 'uint32_t'
        kind = 'd' if fl else kind
        return V(n, kind)

    # ------------------------------------------------------------------ block entry
    def entry_state(self, a):
        st = State()
        if a == self.entry:
            for r in GPR:
                st.r[r] = V('in_' + r)
            st.r['esp'] = SP
            for f in FLAGS:
                st.f[f] = V('in_' + f)
            return st
        fx = self.facts[a]
        st.r['esp'] = frame_addr(fx['esp'])
        fixed = self.fixed_in.get(a, {})
        for r in GPR:
            if r == 'ebp' and fx['ebp'] is not None:
                st.r[r] = frame_addr(fx['ebp'])
            elif r in fx.get('fr', ()):
                st.r[r] = frame_addr(fx['fr'][r])
            else:
                st.r[r] = fixed.get(key_r(r), V(r))
        for f in FLAGS:
            st.f[f] = fixed.get(key_f(f), V(f))
        for off, (size, kind) in fx['slots'].items():
            k = key_s(off)
            if off in fx.get('fs', ()):
                st.s[off] = Slot(size, kind, frame_addr(fx['fs'][off]))
            elif k in fixed:
                st.s[off] = Slot(size, kind, fixed[k])
            else:
                st.s[off] = Slot(size, kind, V(self.slot_var(off, kind), kind))
        n = fx['x87']
        st.x = [fixed.get('x:%d' % (n - 1 - i), V('x%d' % (n - 1 - i), 'd')) for i in range(n)]
        st.xd = fx['xd']
        return st

    def slot_var(self, off, kind):
        if off < -VBASE // 2:
            o = off + VBASE
            base = 'al_%x' % o if o >= 0 else 'al_m%x' % (-o)
        else:
            base = 'loc_%x' % (-off) if off < 0 else 'arg_%x' % off
        if kind == 'd':
            return base + '_d'
        if kind == 'f':
            return base + '_f'
        if kind == 'q':
            return base + '_q'
        if kind == 't':
            return base + '_t'
        return base

    def run_block(self, a):
        import time
        if time.time() - self.t_start > 90:
            raise Refuse('too slow (over 90 s)')
        b = self.blocks[a]
        if a != self.entry and a not in self.facts:
            if self.mode == 'scan':
                raise Refuse('block reached before its predecessor (irreducible)')
        st = self.entry_state(a)
        self.in_state[a] = st.copy()
        self.st = st
        self.cur = a
        self.out = []
        self.code[a] = self.out
        self.dead = False
        self.gesp = (0 if not self.guest else None) if a == self.entry else None
        self.geax = V('in_eax') if a == self.entry else None
        for k, ins in enumerate(b.ins):
            self.ins = ins
            self.is_last = k == len(b.ins) - 1
            self.do(ins)
            if self.dead:
                break
        self.out_state[a] = self.st
        if self.dead:
            if self.mode == 'emit' and self.eax_dead != 0xFFFFFFFF:
                self.out.append('return 0;')
            elif self.mode == 'emit':
                self.out.append('return;')
            self.term_cond = self.term_switch = self.term_tailind = None
            self.exit_code = None
        else:
            self.finish_block(b)
        self.done_blocks.add(a)

    # ------------------------------------------------------------------ liveness helpers
    def use(self, key):
        if self.mode == 'scan':
            if self.in_term:
                self.term_uses[self.cur].add(key)
                return
            if key not in self.defs[self.ins.address]:
                self.uses[self.ins.address].add(key)

    def define(self, key):
        if self.mode == 'scan':
            self.defs[self.ins.address].add(key)

    def live(self, key, addr=None):
        """is `key` read after the current instruction (emit pass)"""
        if self.mode == 'scan' or self.inlining:
            return True
        la = self.live_after.get(self.ins.address if addr is None else addr)
        return la is None or key in la

    # ------------------------------------------------------------------ registers
    def get(self, name):
        full, bits, shift = SUB[name]
        if full == 'esp':
            v = self.st.r['esp']
        else:
            self.use(key_r(full))
            v = self.st.r[full]
        if bits == 32:
            return v
        if shift == 8:
            return E.get_high8(v)
        return E.zx(bits, v)

    def set(self, name, val):
        full, bits, shift = SUB[name]
        if full == 'esp':
            if bits != 32:
                raise Refuse('partial esp write')
            off = frame_split(val)
            if off is None:
                raise Refuse('esp set to a non-frame value')
            self.st.r['esp'] = val
            if off < -VBASE // 2:
                self.min_sp1 = min(self.min_sp1, off + VBASE)
            else:
                self.min_sp = min(self.min_sp, off)
            return
        val = self.contain(val)
        if bits == 32:
            self.define(key_r(full))
            self.st.r[full] = val
            return
        self.use(key_r(full))
        self.define(key_r(full))
        old = self.st.r[full]
        if shift == 8:
            self.st.r[full] = E.merge_high8(old, val)
        else:
            self.st.r[full] = E.merge_low(old, val, bits)

    def esp_off(self):
        return frame_split(self.st.r['esp'])

    # ------------------------------------------------------------------ flags
    def set_flags(self, rec, flags=FLAGS):
        kind = rec[0]
        for f in flags:
            self.define(key_f(f))
            self.st.f[f] = ('lazy', f, rec)
            self.st.frec[f] = rec

    def set_flag(self, f, e):
        self.define(key_f(f))
        self.st.f[f] = e
        self.st.frec[f] = None

    def flag(self, f):
        self.use(key_f(f))
        v = self.st.f[f]
        if v[0] == 'lazy':
            v = self.flag_expr(v[2], f)
        return v

    def flag_expr(self, rec, f):
        kind = rec[0]
        if kind == 'fsw':
            word = rec[1]
            bit = {'cf': 8, 'pf': 10, 'zf': 14, 'sf': 99, 'of': 99, 'af': 99}[f]
            if bit == 99:
                return C(0)
            return E.band(E.shr(word, C(bit)), C(1))
        if kind == 'flagsword':           # sahf: flags from ah
            ah = rec[1]
            bit = {'cf': 0, 'pf': 2, 'af': 4, 'zf': 6, 'sf': 7, 'of': None}[f]
            if bit is None:
                return rec[2]
            return E.band(E.shr(ah, C(bit)), C(1))
        if kind == 'res':
            r, bits = rec[1], rec[2]
            if f not in ('zf', 'sf', 'pf'):
                raise Refuse('flag %s of a result record' % f)
        else:
            bits = rec[-1]
            r = rec[3]
        if f == 'zf':
            return E.cmp('==', E.zx(bits, r), C(0))
        if f == 'sf':
            return E.cmp('<s', E.sx(bits, r), C(0))
        if f == 'pf':
            return ('fn', 'PARITY', 'u', (E.zx(8, r),))
        a, b = rec[1], rec[2]
        if kind == 'logic':
            return C(0)
        if f == 'af':
            return E.band(E.shr(E.bxor(E.bxor(a, b), r), C(4)), C(1))
        T = (1 << bits) - 1
        if kind == 'sub':
            if f == 'cf':
                return E.cmp('<u', E.zx(bits, a), E.zx(bits, b))
            if f == 'of':
                return E.band(E.shr(E.band(E.bxor(a, b), E.bxor(a, r)), C(bits - 1)), C(1))
        if kind == 'sbb':
            c = rec[4]
            if f == 'cf':
                return ('raw', None, 'u', ())  # replaced below
        if kind == 'add':
            if f == 'cf':
                return E.cmp('<u', E.zx(bits, r), E.zx(bits, a))
            if f == 'of':
                return E.band(E.shr(E.band(E.bxor(a, r), E.bxor(b, r)), C(bits - 1)), C(1))
        if kind == 'inc':
            if f == 'of':
                return E.cmp('==', E.zx(bits, r), C(1 << (bits - 1)))
        if kind == 'dec':
            if f == 'of':
                return E.cmp('==', E.zx(bits, a), C(1 << (bits - 1)))
        if kind == 'neg':
            if f == 'cf':
                return E.cmp('!=', E.zx(bits, a), C(0))
            if f == 'of':
                return E.cmp('==', E.zx(bits, a), C(1 << (bits - 1)))
        if kind == 'expl':      # explicit per-flag expressions (adc/sbb/shift/mul)
            return rec[5][f]
        raise Refuse('flag %s of %s' % (f, kind))

    def cond(self, cc):
        """the C condition of a jcc/setcc/cmovcc"""
        names = CC_FLAGS[cc].split()
        recs = [self.st.frec.get(f) for f in names]
        for f in names:
            self.use(key_f(f))
        rec = recs[0]
        if rec is not None and all(r is rec for r in recs) and \
                all(self.st.f[f][0] == 'lazy' for f in names):
            c = self.cond_from(cc, rec)
            if c is not None:
                return c
        fl = {f: self.flag(f) for f in names}
        cf, zf, sf, of = fl.get('cf'), fl.get('zf'), fl.get('sf'), fl.get('of')
        pf = fl.get('pf')
        c = {'o': lambda: of, 'no': lambda: E.lnot(of), 'b': lambda: cf, 'ae': lambda: E.lnot(cf),
             'e': lambda: zf, 'ne': lambda: E.lnot(zf), 'be': lambda: E.lor(cf, zf),
             'a': lambda: E.land(E.lnot(cf), E.lnot(zf)), 's': lambda: sf, 'ns': lambda: E.lnot(sf),
             'p': lambda: pf, 'np': lambda: E.lnot(pf), 'l': lambda: E.cmp('!=', sf, of),
             'ge': lambda: E.cmp('==', sf, of), 'le': lambda: E.lor(zf, E.cmp('!=', sf, of)),
             'g': lambda: E.land(E.lnot(zf), E.cmp('==', sf, of))}[cc]()
        return self.fold_fcmp(c)

    def cond_from(self, cc, rec):
        kind = rec[0]
        if kind == 'sub':
            a, b, bits = rec[1], rec[2], rec[-1]
            ua, ub = E.zx(bits, a), E.zx(bits, b)
            sa, sb = E.sx(bits, a), E.sx(bits, b)
            m = {'e': ('==', ua, ub), 'ne': ('!=', ua, ub), 'b': ('<u', ua, ub), 'ae': ('>=u', ua, ub),
                 'be': ('<=u', ua, ub), 'a': ('>u', ua, ub), 'l': ('<s', sa, sb), 'ge': ('>=s', sa, sb),
                 'le': ('<=s', sa, sb), 'g': ('>s', sa, sb)}
            if cc in m:
                op, x, y = m[cc]
                return E.cmp(op, x, y)
            if cc in ('s', 'ns'):
                return E.cmp('<s' if cc == 's' else '>=s', E.sx(bits, rec[3]), C(0))
            return None
        if kind in ('logic', 'add', 'inc', 'dec', 'neg', 'expl', 'res'):
            r, bits = (rec[1], rec[2]) if kind == 'res' else (rec[3], rec[-1])
            ur, sr = E.zx(bits, r), E.sx(bits, r)
            if cc in ('e', 'ne'):
                return E.cmp('==' if cc == 'e' else '!=', ur, C(0))
            if cc in ('s', 'ns'):
                return E.cmp('<s' if cc == 's' else '>=s', sr, C(0))
            if kind == 'logic':
                m = {'l': ('<s', sr), 'ge': ('>=s', sr), 'le': ('<=s', sr), 'g': ('>s', sr),
                     'be': ('==', ur), 'a': ('!=', ur)}
                if cc in m:
                    return E.cmp(m[cc][0], m[cc][1], C(0))
                if cc == 'b':
                    return C(0)
                if cc == 'ae':
                    return C(1)
            return None
        if kind == 'fsw':
            return None
        return None

    # ------------------------------------------------------------------ x87 comparisons as truth tables
    OUTCOMES = (('gt', 0x0000), ('lt', 0x0100), ('eq', 0x4000), ('un', 0x4500))

    def fold_fcmp(self, c):
        """a condition built from an x87 compare's status bits -> a plain double comparison"""
        found = []

        def find(e):
            if e[0] == 'fn' and e[1] == 'cow_fsw':
                found.append(e)
                return
            if e[0] in ('c', 'v', 'raw'):
                return
            if e[0] == 'fn':
                for x in e[3]:
                    find(x)
                return
            for x in e[1:]:
                if isinstance(x, tuple):
                    find(x)
        find(c)
        if not found or any(f != found[0] for f in found):
            return c
        fsw = found[0]

        def repl(e):
            if e == fsw:
                return V('__fsw')
            t = e[0]
            if t in ('c', 'v', 'raw'):
                return e
            if t == 'fn':
                return ('fn', e[1], e[2], tuple(repl(x) for x in e[3]))
            return tuple(repl(x) if isinstance(x, tuple) else x for x in e)
        ce = repl(c)
        table = set()
        try:
            for name, w in self.OUTCOMES:
                r0 = E.ev(ce, {'__fsw': w})
                r7 = E.ev(ce, {'__fsw': w | 0x3800})
                if bool(r0) != bool(r7):
                    return c
                if r0:
                    table.add(name)
        except KeyError:
            return c
        a, b = fsw[3][0], fsw[3][1]
        return fcmp_expr(table, a, b)

    # ------------------------------------------------------------------ memory operands
    def address(self, ins, op, lea=False):
        m = op.mem
        e = C(0)
        if m.base:
            full, bits, _ = reg_of(ins, m.base)
            if bits != 32:
                raise Refuse('16-bit addressing')
            e = self.get(full)
        if m.index:
            full, bits, _ = reg_of(ins, m.index)
            iv = self.get(full)
            if m.scale != 1:
                iv = E.mul(iv, C(m.scale))
            e = E.add(e, iv)
        if m.disp:
            if ins.disp_offset > 0 and ins.address + ins.disp_offset in self.img.relocs:
                e = E.add(E.img(m.disp & 0xFFFFFFFF), e) if e != C(0) else E.img(m.disp & 0xFFFFFFFF)
            else:
                e = E.add(e, C(m.disp))
        if not lea and m.segment == X.X86_REG_FS:
            e = E.add(V('g->fs_base'), e)
        elif not lea and m.segment not in (0, X.X86_REG_DS, X.X86_REG_ES, X.X86_REG_SS, X.X86_REG_CS):
            raise Refuse('segment')
        return e

    def stack_off(self, addr):
        """offset from sp0 when addr is a frame address, else None"""
        off = frame_split(addr)
        if off is not None:
            return off
        base, k = E.split_add(addr)
        if base is not None and E.value_vars(base) & {'sp0', 'sp1'}:
            # sp0 + something not constant: an indexed frame access
            self.escape_now('indexed frame access')
        return None

    def escape_now(self, why):
        if not self.guest:
            raise Escape(why)

    def check_value(self, e, why):
        """e is about to be used as a value (stored, passed, compared): a frame address may not leak"""
        if not self.guest and E.value_vars(e) & {'sp0', 'sp1'}:
            raise Escape(why)

    def load(self, addr, bits, kind='u'):
        """read memory: a frame slot, an incoming argument, or guest memory"""
        off = self.stack_off(addr)
        if off is not None:
            return self.slot_read(off, bits // 8, kind)
        self.check_value(addr, 'frame address used in arithmetic')
        if kind == 'u':
            return E.ld(bits, addr)
        if kind in ('f', 'd', 't'):
            return ('ldf', bits, addr)
        if kind == 'q':
            return ('fn', '(int64_t)rd64', 'q', (addr,))
        raise Refuse('load kind')

    def store(self, addr, bits, val, kind='u'):
        off = self.stack_off(addr)
        if off is not None:
            self.slot_write(off, bits // 8, kind, val)
            return
        self.check_value(addr, 'frame address used in arithmetic')
        self.check_value(val, 'frame address stored to memory')
        self.flush('M', also_val=val)
        val, addr = self.rebound(val), self.rebound(addr)
        if kind == 'f' and val[0] == 'cvt' and val[1] == 'd2f':
            val = val[2]
        if self.mode == 'emit':
            P = self.pr
            if kind == 'u':
                self.out.append('wr%d(%s, %s);' % (bits, P.p(addr), P.p(E.zx(bits, val) if bits < 32 else val)))
            elif kind == 'f':
                self.out.append('wrf32(%s, (float)%s);' % (P.p(addr), P.p(val, 11)))
            elif kind == 'd':
                self.out.append('wrf64(%s, %s);' % (P.p(addr), P.p(val)))
            elif kind == 't':
                self.out.append('wrf80(%s, %s);' % (P.p(addr), P.p(val)))
            elif kind == 'q':
                self.out.append('wr64(%s, (uint64_t)%s);' % (P.p(addr), P.p(val, 11)))

    # stack slots ------------------------------------------------------------------------------------
    def words(self, off, size):
        return [off + k for k in range(off & ~3 if off >= 0 else -((-off + 3) // 4 * 4) if False else off - (off % 4),
                                       off + size, 4)]

    def slot_words(self, off, size):
        start = off - (off % 4)
        return list(range(start, off + size, 4))

    def slot_read(self, off, size, kind):
        for w in self.slot_words(off, size):
            self.use(key_s(w))
        if off >= 4 and self.mode == 'scan':
            self.args_read.add((off, size, kind))
        s = self.st.s.get(off)
        if s is not None and s.e[0] == 'raw' and 'clobbered' in (s.e[1] or ''):
            raise Refuse('reads an argument word after the callee had it')
        if s is not None and s.size == size:
            return self.convert(s, kind)
        # a narrower read of a 4-byte word
        if kind == 'u' and size < 4:
            w = off - (off % 4)
            s = self.st.s.get(w)
            if s is not None and s.size == 4 and s.kind == 'u':
                return E.zx(size * 8, E.shr(s.e, C(8 * (off - w))))
        # two words read as one 8-byte value
        if size == 8:
            lo, hi = self.st.s.get(off), self.st.s.get(off + 4)
            if lo is not None and hi is not None and lo.size == 4 and hi.size == 4:
                lw, hw = self.convert(lo, 'u'), self.convert(hi, 'u')
                if kind == 'd':
                    return ('fn', 'cow_bits2d', 'd', (lw, hw))
                if kind == 'q':
                    return ('fn', 'cow_i64', 'q', (lw, hw))
        # half of an 8-byte value
        if size == 4 and kind in ('u', 'f'):
            for base_off, half in ((off, 'lo'), (off - 4, 'hi')):
                s = self.st.s.get(base_off)
                if s is not None and s.size == 8:
                    if s.kind == 'd':
                        w = ('fn', 'cow_d' + half, 'u', (s.e,))
                    else:
                        w = ('fn', 'cow_q' + half, 'u', (s.e,))
                    return w if kind == 'u' else ('fn', 'cow_bits2f', 'd', (w,))
        if any(self.overlaps(off, size)) and not self.guest:
            raise Refuse('stack read overlaps a differently shaped value')
        # never written here: memory (an incoming argument, the return address, or stale stack)
        w = off - (off % 4)
        if w >= 4 and off + size <= w + 4 and kind == 'u' and not any(
                o < w + 4 and w < o + n for (o, n) in self.arg_writes()):
            v = V('arg_%x' % w)
            return v if size == 4 else E.zx(size * 8, E.shr(v, C(8 * (off - w))))
        if off >= 4 and size == 4 and off % 4 == 0 and kind == 'u':
            pass
        if off < 0 and self.mode == 'scan':
            self.notes.append('reads stack below the frame before writing it at %x' % self.ins.address)
        a = frame_addr(off)
        if kind == 'u':
            return E.ld(size * 8, a)
        if kind in ('f', 'd', 't'):
            return ('ldf', size * 8, a)
        return ('fn', '(int64_t)rd64', 'q', (a,))

    def arg_writes(self):
        return getattr(self, '_argw', set())

    def overlaps(self, off, size):
        for o, s in self.st.s.items():
            if o < off + size and off < o + s.size and not (o == off and s.size == size):
                yield o

    def convert(self, s, kind):
        if s.kind == kind:
            return s.e
        if s.kind == 'u' and kind == 'f':
            return ('fn', 'cow_bits2f', 'd', (s.e,))
        if s.kind == 'f' and kind == 'u':
            return ('fn', 'cow_f2bits', 'u', (s.e,))
        raise Refuse('stack value read as another type (%s as %s)' % (s.kind, kind))

    def slot_write(self, off, size, kind, val):
        if off >= 0:
            if self.mode == 'scan':
                self.args_written.add((off, size))
            if off >= 4 or (off == 0 and size):
                # the caller's memory: a real write, and the slot is forgotten
                self.check_value(val, 'frame address stored to an argument')
                for w in self.slot_words(off, size):
                    self.define(key_s(w))
                self.flush('M', also_val=val)
                val = self.rebound(val)
                if kind == 'f' and val[0] == 'cvt' and val[1] == 'd2f':
                    val = val[2]
                a = frame_addr(off)
                if self.mode == 'emit':
                    P = self.pr
                    if kind == 'u':
                        self.out.append('wr%d(%s, %s);' % (size * 8, P.p(a), P.p(E.zx(size * 8, val) if size < 4 else val)))
                    elif kind == 'f':
                        self.out.append('wrf32(%s, (float)%s);' % (P.p(a), P.p(val, 11)))
                    elif kind == 'd':
                        self.out.append('wrf64(%s, %s);' % (P.p(a), P.p(val)))
                    elif kind == 't':
                        self.out.append('wrf80(%s, %s);' % (P.p(a), P.p(val)))
                    else:
                        self.out.append('wr64(%s, (uint64_t)%s);' % (P.p(a), P.p(val, 11)))
                for o in list(self.overlaps(off, size)) + ([off] if off in self.st.s else []):
                    self.st.s.pop(o, None)
                self.uses_sp = True
                return
        if self.guest and ((kind == 'u' and size < 4) or off % 4):
            # the frame is guest memory: an odd-shaped store goes there, and what we held of it is dropped
            for w in self.slot_words(off, size):
                self.use(key_s(w))
                self.define(key_s(w))
            self.flush('M', also_val=val)
            val = self.rebound(val)
            if self.mode == 'emit':
                P = self.pr
                a = frame_addr(off)
                if kind == 'u':
                    self.out.append('wr%d(%s, %s);' % (size * 8, P.p(a), P.p(E.zx(size * 8, val) if size < 4 else val)))
                elif kind == 'f':
                    self.out.append('wrf32(%s, (float)%s);' % (P.p(a), P.p(val, 11)))
                elif kind == 'd':
                    self.out.append('wrf64(%s, %s);' % (P.p(a), P.p(val)))
                elif kind == 't':
                    self.out.append('wrf80(%s, %s);' % (P.p(a), P.p(val)))
                else:
                    self.out.append('wr64(%s, (uint64_t)%s);' % (P.p(a), P.p(val, 11)))
            for o in list(self.overlaps(off, size)) + ([off] if off in self.st.s else []):
                self.st.s.pop(o, None)
            return
        if kind == 'u' and size < 4:
            w = off - (off % 4)
            s = self.st.s.get(w)
            sh = 8 * (off - w)
            self.use(key_s(w))
            self.define(key_s(w))
            if s is not None and s.size == 4 and s.kind == 'u':
                m = ((1 << (size * 8)) - 1) << sh
                self.st.s[w] = Slot(4, 'u', E.bor(E.band(s.e, C(~m)), E.shl(E.zx(size * 8, val), C(sh))))
                return
            if s is None and not any(self.overlaps(w, 4)):
                old = E.ld(32, frame_addr(w))
                m = ((1 << (size * 8)) - 1) << sh
                self.st.s[w] = Slot(4, 'u', E.bor(E.band(old, C(~m)), E.shl(E.zx(size * 8, val), C(sh))))
                return
            raise Refuse('partial write into a stack value')
        if off % 4:
            raise Refuse('unaligned stack slot')
        for w in self.slot_words(off, size):
            self.define(key_s(w))
        for o in list(self.overlaps(off, size)):
            s = self.st.s.pop(o)
            # a 4-byte write over one half of an 8-byte value keeps the other half as a word
            if s.size == 8 and size == 4 and o in (off - 4, off + 4):
                other = o if o != off else o + 4
                half = 'lo' if other == o else 'hi'
                nm = 'cow_d' if s.kind == 'd' else 'cow_q'
                self.st.s[other] = Slot(4, 'u', ('fn', nm + half, 'u', (s.e,)))
            elif s.size == 4 and size == 8:
                pass
            else:
                raise Refuse('stack write over a differently shaped value')
        val = self.contain(self.share(val))
        self.st.s[off] = Slot(size, kind, val)
        if not (self.push_only or self.is_save):
            for w in self.slot_words(off, size):
                self.st.written.add(w)
        if self.guest and self.mode == 'emit' and not self.push_only:
            P = self.pr
            a = frame_addr(off)
            if kind == 'u':
                self.out.append('wr32(%s, %s);' % (P.p(a), P.p(val)))
            elif kind == 'f':
                self.out.append('wrf32(%s, (float)%s);' % (P.p(a), P.p(val, 11)))
            elif kind == 'd':
                self.out.append('wrf64(%s, %s);' % (P.p(a), P.p(val)))
            elif kind == 't':
                self.out.append('wrf80(%s, %s);' % (P.p(a), P.p(val)))
            else:
                self.out.append('wr64(%s, (uint64_t)%s);' % (P.p(a), P.p(val, 11)))

    # ------------------------------------------------------------------ binding pending values
    def flush(self, dep, also_val=None):
        """before a statement that changes what `dep` reads ('M' memory, 'F' the control word, 'G' g):
        every live value still waiting on it is put in a temp now"""
        if self.mode != 'emit':
            return
        memo = self.bound = {}

        want = set(dep)

        def bind(e):
            d = E.deps(e)
            if not (want & d):
                return e
            t = e[0]
            base = e[1].rsplit(')', 1)[-1] if t == 'fn' else ''
            if t in ('ld', 'ldf') or (t == 'fn' and base in ('fr', 'fist16', 'fist32', 'fist64', 'frnd', 'rd64')) \
                    or t == 'raw':
                if e in memo:
                    return memo[e]
                k = E.kind_of(e)
                tv = self.new_temp(k)
                self.out.append('%s = %s;' % (tv[1], self.pr.p(e)))
                memo[e] = tv
                return tv
            if t == 'fn':
                return ('fn', e[1], e[2], tuple(bind(x) for x in e[3]))
            if t in ('bin', 'dbin', 'dcmp'):
                return (t, e[1], bind(e[2]), bind(e[3]))
            if t in ('un', 'zx', 'sx', 'dun', 'cvt'):
                return (t, e[1], bind(e[2]))
            if t == 'ite':
                return (t, bind(e[1]), bind(e[2]), bind(e[3]))
            return e
        st = self.st
        for r in GPR:
            if self.live(key_r(r)):
                st.r[r] = bind(st.r[r])
        for f in FLAGS:
            v = st.f[f]
            if v[0] == 'lazy':
                if self.live(key_f(f)) and want & E.deps(self.flag_expr_safe(v)):
                    rec = v[2]
                    nrec = tuple(bind(x) if isinstance(x, tuple) else x for x in rec)
                    for g_ in FLAGS:
                        if st.f[g_][0] == 'lazy' and st.f[g_][2] is rec:
                            st.f[g_] = ('lazy', g_, nrec)
                            st.frec[g_] = nrec
            elif self.live(key_f(f)):
                st.f[f] = bind(v)
        for off in list(st.s):
            s = st.s[off]
            if want & E.deps(s.e) and any(self.live(key_s(w)) for w in self.slot_words(off, s.size)):
                st.s[off] = Slot(s.size, s.kind, bind(s.e))
        self.bind_fn = bind
        st.x = [bind(x) for x in st.x]
        if st.fsw is not None:
            st.fsw = (bind(st.fsw[0]), bind(st.fsw[1]), st.fsw[2])

    def rebound(self, e):
        """e with the values the last flush put in temps replaced by those temps"""
        if self.mode != 'emit' or not getattr(self, 'bound', None):
            return e
        memo = self.bound

        def r(x):
            if x in memo:
                return memo[x]
            t = x[0]
            if t in ('c', 'v', 'raw'):
                return x
            if t == 'fn':
                return ('fn', x[1], x[2], tuple(r(y) for y in x[3]))
            return tuple(r(y) if isinstance(y, tuple) else y for y in x)
        return r(e)

    def flag_expr_safe(self, v):
        try:
            return self.flag_expr(v[2], v[1])
        except Refuse:
            return C(0)

    def contain(self, e):
        """a value that has grown past what a reader (or this program) can follow: computed here, once"""
        if not E.too_big(e):
            return e
        if self.mode == 'emit':
            return self.bind_now(e)
        self.nbig = getattr(self, 'nbig', 0) + 1
        return V('big%d' % self.nbig, E.kind_of(e))

    def share(self, e):
        """a value about to exist in two places: compute it once"""
        if self.mode != 'emit' or e[0] in ('c', 'v') or E.size(e) <= 3:
            return e
        if E.is_img(e):
            return e
        return self.bind_now(e)

    def bind_now(self, e, kind=None):
        """evaluate e here, into a temp (emit pass); returns the temp"""
        if self.mode != 'emit' or e[0] in ('c', 'v'):
            return e
        tv = self.new_temp(kind or E.kind_of(e))
        self.out.append('%s = %s;' % (tv[1], self.pr.p(e)))
        return tv

    def stmt(self, s):
        if self.mode == 'emit':
            self.out.append(s)

    # ------------------------------------------------------------------ operands
    def bits(self, op):
        return op.size * 8

    def rd(self, ins, op, bits=None):
        bits = bits or self.bits(op)
        if op.type == X.X86_OP_REG:
            return self.get(ins.reg_name(op.reg))
        if op.type == X.X86_OP_IMM:
            if ins.imm_offset > 0 and ins.address + ins.imm_offset in self.img.relocs:
                return E.img(op.imm & 0xFFFFFFFF)
            return C(op.imm & ((1 << bits) - 1) if bits < 32 else op.imm)
        if op.type == X.X86_OP_MEM:
            return self.load(self.address(ins, op), bits)
        raise Refuse('operand')

    def wr(self, ins, op, val, bits=None):
        bits = bits or self.bits(op)
        if op.type == X.X86_OP_REG:
            n = ins.reg_name(op.reg)
            if n not in SUB:
                raise Refuse('register %s' % n)
            self.set(n, val)
            return
        if op.type == X.X86_OP_MEM:
            self.store(self.address(ins, op), bits, val)
            return
        raise Refuse('write operand')

    def rmw(self, ins, op):
        """read a read-modify-write operand once: (value, writer)"""
        if op.type == X.X86_OP_MEM:
            a = self.address(ins, op)
            v = self.load(a, self.bits(op))
            return v, (lambda val: self.store(a, self.bits(op), val))
        return self.rd(ins, op), (lambda val: self.wr(ins, op, val))

    # ------------------------------------------------------------------ one instruction
    def do(self, ins):
        mn = ins.mnemonic
        prefix = None
        if ' ' in mn:
            prefix, mn = mn.split(' ', 1)
            if prefix == 'lock':
                prefix = None
        ops = ins.operands
        xo = x87_op(ins)
        if xo is not None:
            return self.x87(ins, xo)
        if mn in ('nop', 'wait', 'fwait', 'pause'):
            return
        if mn[:4] in ('movs', 'stos', 'lods', 'scas', 'cmps') and len(mn) == 5 and mn[4] in 'bwd':
            return self.string(ins, mn, prefix)
        if prefix is not None:
            raise Refuse('prefix %s' % prefix)
        if mn in ('mov', 'movzx', 'movsx'):
            d, s = ops
            v = self.rd(ins, s)
            if s.type == X.X86_OP_REG and mn == 'mov' and self.bits(s) == 32:
                v = self.share(v)
                self.set(ins.reg_name(s.reg), v)
            if mn == 'movsx':
                v = E.sx(self.bits(s), v)
                if self.bits(d) < 32:
                    v = E.zx(self.bits(d), v)
            self.wr(ins, d, v)
            return
        if mn == 'lea':
            d, s = ops
            self.wr(ins, d, self.address(ins, s, lea=True))
            return
        if mn == 'xchg':
            a, b = ops
            va, wa = self.rmw(ins, a)
            vb = self.rd(ins, b)
            if a.type == X.X86_OP_MEM:
                wa(vb)
                self.wr(ins, b, va)
            else:
                self.wr(ins, b, va)
                wa(vb)
            return
        if mn in ('add', 'sub', 'cmp', 'and', 'or', 'xor', 'test', 'adc', 'sbb'):
            return self.alu(ins, mn)
        if mn in ('inc', 'dec', 'neg', 'not'):
            d, = ops
            bits = self.bits(d)
            a, w = self.rmw(ins, d)
            if mn == 'not':
                w(E.bnot(a) if bits == 32 else E.zx(bits, E.bnot(a)))
                return
            if mn == 'inc':
                r = E.zx(bits, E.add(a, C(1)))
                rec = ('inc', a, C(1), r, bits)
            elif mn == 'dec':
                r = E.zx(bits, E.sub(a, C(1)))
                rec = ('dec', a, C(1), r, bits)
            else:
                r = E.zx(bits, E.neg(a))
                rec = ('neg', a, C(0), r, bits)
            w(r)
            self.set_flags(rec, ('pf', 'af', 'zf', 'sf', 'of') if mn != 'neg' else FLAGS)
            return
        if mn in ('shl', 'sal', 'shr', 'sar', 'rol', 'ror'):
            return self.shift(ins, mn)
        if mn in ('imul', 'mul', 'div', 'idiv'):
            return self.muldiv(ins, mn)
        if mn == 'cdq':
            self.set('edx', E.sar(self.get('eax'), C(31)))
            return
        if mn == 'cwde':
            self.set('eax', E.sx(16, self.get('eax')))
            return
        if mn == 'cbw':
            self.set('ax', E.zx(16, E.sx(8, self.get('eax'))))
            return
        if mn == 'cwd':
            self.set('dx', E.ite(E.band(self.get('eax'), C(0x8000)), C(0xFFFF), C(0)))
            return
        if mn == 'push':
            s, = ops
            v = self.rd(ins, s, 32)
            if s.type == X.X86_OP_IMM and self.bits(s) < 32:
                v = E.sx(self.bits(s), v)
            if s.type == X.X86_OP_MEM and self.bits(s) != 32:
                raise Refuse('16-bit push')
            if s.type == X.X86_OP_REG and self.bits(s) == 32:
                v = self.share(v)
                self.st.r[SUB[ins.reg_name(s.reg)][0]] = v if ins.reg_name(s.reg) != 'esp' else self.st.r['esp']
            sp = E.sub(self.st.r['esp'], C(4))
            self.set('esp', sp)
            self.is_save = s.type == X.X86_OP_REG and ins.reg_name(s.reg) in CALLEE_SAVED and \
                self.st.r.get(ins.reg_name(s.reg)) == V('in_' + ins.reg_name(s.reg))
            self.push_only = self.is_save and not self.guest
            self.slot_write(self.esp_off(), 4, 'u', v)
            self.push_only = self.is_save = False
            return
        if mn == 'pop':
            d, = ops
            if self.bits(d) != 32:
                raise Refuse('16-bit pop')
            v = self.slot_read(self.esp_off(), 4, 'u')
            self.set('esp', E.add(self.st.r['esp'], C(4)))
            self.wr(ins, d, v)
            return
        if mn == 'leave':
            self.set('esp', self.get('ebp'))
            v = self.slot_read(self.esp_off(), 4, 'u')
            self.set('esp', E.add(self.st.r['esp'], C(4)))
            self.set('ebp', v)
            return
        if mn in ('clc', 'stc', 'cmc'):
            self.set_flag('cf', {'clc': C(0), 'stc': C(1)}.get(mn) or E.lnot(self.flag('cf')))
            return
        if mn in ('cld', 'std'):
            self.stmt('g->df = %d;' % (1 if mn == 'std' else 0))
            return
        if mn.startswith('set') and mn[3:] in CC_FLAGS:
            d, = ops
            c = self.cond(mn[3:])
            self.wr(ins, d, E.ite(c, C(1), C(0)) if not E.is_bool(c) else c)
            return
        if mn.startswith('cmov') and mn[4:] in CC_FLAGS:
            d, s = ops
            c = self.cond(mn[4:])
            old = self.rd(ins, d)
            self.wr(ins, d, E.ite(c, self.rd(ins, s), old))
            return
        if mn == 'bswap':
            d, = ops
            v = self.rd(ins, d)
            self.wr(ins, d, ('fn', 'cow_bswap32', 'u', (v,)))
            return
        if mn == 'sahf':
            ah = E.get_high8(self.get('eax'))
            rec = ('flagsword', ah, self.st.f['of'] if self.st.f['of'][0] != 'lazy' else self.flag('of'))
            for f in ('cf', 'pf', 'af', 'zf', 'sf'):
                self.define(key_f(f))
                self.st.f[f] = ('lazy', f, rec)
                self.st.frec[f] = rec
            return
        if mn == 'lahf':
            w = E.bor(E.bor(E.bor(E.shl(self.flag('sf'), C(15)), E.shl(self.flag('zf'), C(14))),
                            E.bor(E.shl(self.flag('af'), C(12)), E.shl(self.flag('pf'), C(10)))),
                      E.bor(C(0x200), E.shl(self.flag('cf'), C(8))))
            self.set('ah', E.shr(w, C(8)))
            return
        if mn in ('bt', 'bts', 'btr', 'btc'):
            d, s = ops
            if d.type == X.X86_OP_MEM and s.type != X.X86_OP_IMM:
                return self.verbatim(ins)
            bits = self.bits(d)
            n = E.band(self.rd(ins, s, 8 if s.type == X.X86_OP_IMM else bits), C(bits - 1))
            v, w = self.rmw(ins, d)
            self.set_flag('cf', E.band(E.shr(v, n), C(1)))
            if mn != 'bt':
                m = E.shl(C(1), n)
                w({'bts': E.bor(v, m), 'btr': E.band(v, E.bnot(m)), 'btc': E.bxor(v, m)}[mn])
            return
        if mn == 'xlatb':
            self.set('al', E.ld(8, E.add(self.get('ebx'), E.zx(8, self.get('eax')))))
            return
        # control flow
        if mn == 'jmp' or mn in JCC or mn in ('jecxz', 'loop', 'loope', 'loopne'):
            return self.branch(ins, mn)
        if mn == 'call':
            return self.call(ins)
        if mn == 'ret':
            return self.ret(ins)
        if mn == 'int3':
            self.stmt('rt_fatal(g, COW_IMG(0x%xu), "int3 reached");' % ins.address)
            return
        return self.verbatim(ins)

    def verbatim(self, ins):
        """an instruction this lifter has no expression for: the recompiler's own C for it, with the registers
        and flags it names held in their variables around it (exact by construction)"""
        import re
        from x86c import Unsupported
        ft = self.img.decode(self.entry)
        try:
            stmts, falls = ft.one(ins)
        except Unsupported as u:
            # the recompiler cannot run it either: the original traps here, and so do we
            self.stmt('rt_fatal(g, COW_IMG(0x%xu), "unimplemented: %s %s");' % (ins.address, ins.mnemonic, ins.op_str))
            self.dead = True
            return
        # A memory operand's address is OURS to compute, not the recompiler's: its `uint32_t A = esp + 8;`
        # names registers this lifter holds as expressions (esp is never a variable here). With the address
        # taken from rise, an MMX/SSE load or store on the frame is exact: the frame is guest memory in
        # guest-frame mode (every slot is written through), so the instruction reads what is there, and a
        # store drops the slots it overwrote so later reads go back to memory.
        memop = next((o for o in ins.operands if o.type == X.X86_OP_MEM), None)
        a_expr = frame = None
        if memop is not None and stmts and stmts[0].startswith('uint32_t A = '):
            a_expr = self.address(ins, memop)
            off = self.stack_off(a_expr)
            if off is not None:
                self.escape_now('vector access to the frame')
                frame = (off, memop.size, bool(memop.access & capstone.CS_AC_WRITE))
            else:
                self.check_value(a_expr, 'frame address used as an address in %s' % ins.mnemonic)
            stmts = stmts[1:]
        text = ' '.join(stmts)
        if text == 'REGS_STORE; rt_cpuid(g); REGS_LOAD;':
            # cpuid reads eax (and ecx) and writes eax ebx ecx edx: said with the registers named, so the
            # variables around it are handed over and read back like any verbatim instruction's
            text = ('g->eax = eax; g->ebx = ebx; g->ecx = ecx; g->edx = edx; rt_cpuid(g); '
                    'eax = g->eax; ebx = g->ebx; ecx = g->ecx; edx = g->edx;')
        if 'ST(' in text or 'fpush' in text or 'fpop' in text or 'g->top' in text:
            raise Refuse('x87 instruction %s' % ins.mnemonic)
        if not falls:
            raise Refuse('verbatim control transfer %s' % ins.mnemonic)
        words = set(re.findall(r'\b[a-z_][a-z0-9_]*\b', text))
        if 'esp' in words:
            raise Refuse('verbatim instruction on esp: %s' % ins.mnemonic)
        regs = [r for r in GPR if r in words]
        flags = [f for f in FLAGS if f in words] + (['df'] if 'df' in words else [])
        for r in regs:
            self.check_value(self.st.r[r], 'frame address in %s' % ins.mnemonic)
        self.flush('MFG')
        if frame is not None:
            off, size, writes = frame
            for w in self.slot_words(off, size):
                self.use(key_s(w))
                if writes:
                    self.define(key_s(w))
            if writes:
                for o in list(self.overlaps(off, size)) + ([off] if off in self.st.s else []):
                    self.st.s.pop(o, None)
        for r in regs:
            self.use(key_r(r))
            self.define(key_r(r))
        for f in flags:
            if f != 'df':
                self.use(key_f(f))
                self.define(key_f(f))
        if self.mode == 'emit':
            pre = []
            for r in regs:
                v = self.st.r[r]
                self.decls[r] = 'uint32_t'
                if v != V(r):
                    pre.append('%s = %s;' % (r, self.pr.p(v)))
            for f in flags:
                if f == 'df':
                    continue
                self.decls[f] = 'unsigned'
                v = self.flag_value_for_var(f)
                if v != V(f):
                    pre.append('%s = %s;' % (f, self.pr.p(v)))
            body = text.replace('RD', 'RD')
            body = re.sub(r'\bdf\b', 'g->df', body)
            body = body.replace('RT_DIVIDE(', 'COW_RT_DIVIDE(')
            if a_expr is not None:
                body = 'uint32_t A = %s; %s' % (self.pr.p(self.rebound(a_expr)), body)
            self.out.extend(pre)
            self.out.append('{ /* %s %s */ %s }' % (ins.mnemonic, ins.op_str, body))
        for r in regs:
            self.st.r[r] = V(r)
        for f in flags:
            if f != 'df':
                self.st.f[f] = V(f)
                self.st.frec[f] = None
                if self.mode == 'emit':
                    self.decls[f] = 'unsigned'

    def alu(self, ins, mn):
        d, s = ops = ins.operands
        bits = self.bits(d)
        if d.type == X.X86_OP_REG and ins.reg_name(d.reg) == 'esp' and mn == 'and' and s.type == X.X86_OP_IMM:
            off = self.esp_off()
            if off is None or off < -VBASE // 2:
                raise Refuse('second stack alignment')
            if self.sp1 is not None and self.sp1 != (off, s.imm & 0xFFFFFFFF):
                raise Refuse('two stack alignments')
            self.sp1 = (off, s.imm & 0xFFFFFFFF)
            self.st.r['esp'] = SP1
            for f in FLAGS:
                self.define(key_f(f))
                self.st.f[f] = C(0)
                self.st.frec[f] = None
            return
        a, w = self.rmw(ins, d)
        b = self.rd(ins, s, bits)
        if s.type == X.X86_OP_IMM and self.bits(s) < bits:
            b = E.zx(bits, E.sx(self.bits(s), b))
        if mn in ('xor', 'sub') and d.type == X.X86_OP_REG and s.type == X.X86_OP_REG and d.reg == s.reg:
            # the zero idiom: no read
            if self.mode == 'scan':
                full = SUB[ins.reg_name(d.reg)][0]
                self.uses[ins.address].discard(key_r(full))
            r = C(0)
            if bits < 32:
                r = C(0)
            w(r)
            self.set_flags(('logic', C(0), C(0), r, bits) if mn == 'xor' else ('sub', C(0), C(0), r, bits))
            return
        if mn in ('adc', 'sbb'):
            c = self.flag('cf')
            if mn == 'adc':
                r = E.zx(bits, E.add(E.add(a, b), c))
                cf = E.cmp('!=', E.band(E.shr(E.add(E.add(E.zx(bits, a), E.zx(bits, b)), c), C(bits)), C(1)), C(0)) \
                    if bits < 32 else E.lor(E.cmp('<u', r, a), E.land(c, E.cmp('==', r, a)))
                of = E.band(E.shr(E.band(E.bxor(a, r), E.bxor(b, r)), C(bits - 1)), C(1))
            else:
                r = E.zx(bits, E.sub(E.sub(a, b), c))
                cf = E.lor(E.cmp('<u', E.zx(bits, a), E.zx(bits, b)),
                           E.land(c, E.cmp('==', E.zx(bits, a), E.zx(bits, b))))
                of = E.band(E.shr(E.band(E.bxor(a, b), E.bxor(a, r)), C(bits - 1)), C(1))
            if a == b and mn == 'sbb' and d.type == X.X86_OP_REG and s.type == X.X86_OP_REG:
                r = E.zx(bits, E.neg(c))     # sbb r, r  ->  0 or all ones
            w(r)
            rec = ('res', r, bits)
            for f in ('zf', 'sf', 'pf'):
                self.define(key_f(f))
                self.st.f[f] = ('lazy', f, rec)
                self.st.frec[f] = rec
            self.set_flag('cf', cf)
            self.set_flag('of', of)
            self.set_flag('af', C(0))
            return
        if mn in ('add',):
            r = E.zx(bits, E.add(a, b))
            rec = ('add', a, b, r, bits)
        elif mn in ('sub', 'cmp'):
            r = E.zx(bits, E.sub(a, b))
            rec = ('sub', a, b, r, bits)
        else:
            op = {'and': E.band, 'test': E.band, 'or': E.bor, 'xor': E.bxor}[mn]
            r = op(a, b)
            rec = ('logic', a, b, r, bits)
        if mn not in ('cmp', 'test'):
            w(r)
        else:
            self.check_value(a, 'frame address compared')
            self.check_value(b, 'frame address compared')
        self.set_flags(rec)

    def shift(self, ins, mn):
        ops = ins.operands
        d = ops[0]
        bits = self.bits(d)
        cnt = self.rd(ins, ops[1], 8) if len(ops) > 1 else C(1)
        cnt = E.band(cnt, C(31))
        a, w = self.rmw(ins, d)
        if cnt[0] == 'c' and cnt[1] == 0:
            return
        if mn in ('shl', 'sal'):
            r = E.zx(bits, E.shl(a, cnt))
            cf = E.band(E.shr(a, E.sub(C(bits), cnt)), C(1)) if cnt[0] != 'c' or cnt[1] <= bits else C(0)
            of = E.bxor(E.band(E.shr(r, C(bits - 1)), C(1)), cf)
        elif mn == 'shr':
            r = E.shr(E.zx(bits, a), cnt)
            cf = E.band(E.shr(a, E.sub(cnt, C(1))), C(1))
            of = E.band(E.shr(a, C(bits - 1)), C(1))
        elif mn == 'sar':
            if cnt[0] == 'c':
                k = min(cnt[1], bits - 1)
                r = E.zx(bits, E.sar(E.sx(bits, a), C(k)))
                kk = cnt[1] - 1 if cnt[1] < bits else bits - 1
                cf = E.band(E.sar(E.sx(bits, a), C(kk)), C(1))
            else:
                k = E.ite(E.cmp('<u', cnt, C(bits)), cnt, C(bits - 1))
                r = E.zx(bits, E.sar(E.sx(bits, a), k))
                cf = E.band(E.sar(E.sx(bits, a), E.sub(k, E.ite(E.cmp('<u', cnt, C(bits)), C(1), C(0)))), C(1))
            of = C(0)
        else:
            if cnt[0] != 'c':
                return self.verbatim(ins)
            k = cnt[1] % bits
            za = E.zx(bits, a)
            if k == 0:
                r = za
            elif mn == 'rol':
                r = E.zx(bits, E.bor(E.shl(za, C(k)), E.shr(za, C(bits - k))))
            else:
                r = E.zx(bits, E.bor(E.shr(za, C(k)), E.shl(za, C(bits - k))))
            if mn == 'rol':
                cf = E.band(r, C(1))
                of = E.bxor(E.band(E.shr(r, C(bits - 1)), C(1)), cf)
            else:
                cf = E.band(E.shr(r, C(bits - 1)), C(1))
                of = E.band(E.bxor(E.shr(r, C(bits - 1)), E.shr(r, C(bits - 2))), C(1))
            w(r)
            if cnt[1] != 0:
                self.set_flag('cf', cf)
                self.set_flag('of', of)
            return
        if cnt[0] == 'c':
            w(r)
            rec = ('res', r, bits)
            for f in ('zf', 'sf', 'pf'):
                self.define(key_f(f))
                self.st.f[f] = ('lazy', f, rec)
                self.st.frec[f] = rec
            self.set_flag('cf', cf)
            self.set_flag('of', of)
            return
        # count in a register: a zero count leaves the operand and the flags as they were
        nz = E.cmp('!=', cnt, C(0))
        w(E.ite(nz, r, E.zx(bits, a)) if bits < 32 else r)
        live = [f for f in FLAGS if self.live(key_f(f))]
        for f in ('zf', 'sf', 'pf'):
            new = self.flag_expr(('res', r, bits), f)
            old = self.flag(f) if f in live else C(0)
            self.set_flag(f, E.ite(nz, new, old) if f in live else new)
        for f, v in (('cf', cf), ('of', of)):
            old = self.flag(f) if f in live else C(0)
            self.set_flag(f, E.ite(nz, v, old) if f in live else v)

    def muldiv(self, ins, mn):
        ops = ins.operands
        if mn == 'imul' and len(ops) >= 2:
            d = ops[0]
            bits = self.bits(d)
            a = self.rd(ins, ops[1]) if len(ops) == 3 else self.rd(ins, d)
            b = self.rd(ins, ops[2], bits) if len(ops) == 3 else self.rd(ins, ops[1], bits)
            if len(ops) == 3 and ops[2].type == X.X86_OP_IMM:
                b = E.zx(bits, E.sx(self.bits(ops[2]), b)) if self.bits(ops[2]) < bits else b
            r = E.zx(bits, E.mul(a, b))
            self.wr(ins, d, r)
            if any(self.live(key_f(f)) for f in ('cf', 'of')):
                ov = ('fn', 'cow_imul_ovf%d' % bits, 'u', (a, b))
                self.set_flag('cf', ov)
                self.set_flag('of', ov)
            else:
                self.set_flag('cf', C(0))
                self.set_flag('of', C(0))
            return
        s, = ops
        bits = self.bits(s)
        if bits != 32:
            return self.verbatim(ins)
        v = self.rd(ins, s)
        eax, edx = self.get('eax'), self.get('edx')
        if mn in ('mul', 'imul'):
            T = 'uint64_t' if mn == 'mul' else 'int64_t'
            if mn == 'mul':
                p = ('raw', None, 'q', ())
                pe = ('fn', '(uint64_t)cow_mulu', 'q', (eax, v))
            else:
                pe = ('fn', '(int64_t)cow_muls', 'q', (eax, v))
            pt = self.bind_now(pe, 'q') if self.mode == 'emit' else V('q0', 'q')
            lo = ('fn', '(uint32_t)', 'u', (pt,))
            hi = ('fn', 'cow_qhi', 'u', (pt,))
            self.set('eax', lo)
            self.set('edx', hi)
            ov = E.cmp('!=', hi, C(0)) if mn == 'mul' else E.cmp('!=', hi, E.sar(lo, C(31)))
            self.set_flag('cf', ov)
            self.set_flag('of', ov)
            return
        # div / idiv: the dividend is edx:eax
        if mn == 'div':
            if edx == C(0):
                q, r = ('bin', '/', eax, v), ('bin', '%', eax, v)
                q = ('fn', 'cow_divu', 'u', (eax, v))
                r = ('fn', 'cow_modu', 'u', (eax, v))
            else:
                q = ('fn', 'cow_divu64', 'u', (edx, eax, v))
                r = ('fn', 'cow_modu64', 'u', (edx, eax, v))
        else:
            if edx == E.sar(eax, C(31)):
                q = ('fn', 'cow_divs', 'u', (eax, v))
                r = ('fn', 'cow_mods', 'u', (eax, v))
            else:
                q = ('fn', 'cow_divs64', 'u', (edx, eax, v))
                r = ('fn', 'cow_mods64', 'u', (edx, eax, v))
        q = self.bind_now(q, 'u')
        r = self.bind_now(r, 'u')
        self.set('eax', q)
        self.set('edx', r)

    # ------------------------------------------------------------------ string instructions
    def string(self, ins, mn, prefix):
        kind, w = mn[:4], {'b': 8, 'w': 16, 'd': 32}[mn[4]]
        n = w // 8
        regs = {'movs': ('esi', 'edi'), 'stos': ('edi', 'eax'), 'lods': ('esi', 'eax'),
                'scas': ('edi', 'eax'), 'cmps': ('esi', 'edi')}[kind]
        if prefix is not None:
            regs = regs + ('ecx',)
        for r in regs:
            self.check_value(self.st.r[r], 'frame address in a string instruction')
        # everything the loop touches lives in its register variable
        self.flush('M')
        writes = {'movs': ('esi', 'edi'), 'stos': ('edi',), 'lods': ('esi', 'eax'), 'scas': ('edi',),
                  'cmps': ('esi', 'edi')}[kind] + (('ecx',) if prefix is not None else ())
        for r in regs:
            self.use(key_r(r))
        for r in writes:
            self.define(key_r(r))
        if kind in ('scas', 'cmps'):
            for f in FLAGS:
                if prefix is not None:
                    self.use(key_f(f))
                self.define(key_f(f))
        if self.mode == 'emit':
            for r in regs:
                v = self.st.r[r]
                if v != V(r):
                    self.out.append('%s = %s;' % (r, self.pr.p(v)))
                    self.decls[r] = 'uint32_t'
                else:
                    self.decls[r] = 'uint32_t'
            if kind in ('scas', 'cmps') and prefix is not None:
                for f in FLAGS:
                    self.out.append('%s = %s;' % (f, self.pr.p(self.flag_value_for_var(f))))
                    self.decls[f] = 'unsigned'
            T = E.Printer  # noqa
            step = '(g->df ? (uint32_t)-%d : %du)' % (n, n)
            ut = {8: 'uint8_t', 16: 'uint16_t', 32: 'uint32_t'}[w]
            acc = {8: '(uint8_t)eax', 16: '(uint16_t)eax', 32: 'eax'}[w]
            acc_w = {8: 'eax = (eax & 0xFFFFFF00u) | v;', 16: 'eax = (eax & 0xFFFF0000u) | v;', 32: 'eax = v;'}[w]
            subf = ('cf = a < b; of = ((a ^ b) & (a ^ r)) >> %d & 1u; af = ((a ^ b ^ r) >> 4) & 1u; '
                    'zf = r == 0; sf = (r >> %d) & 1u; pf = PARITY(r);' % (w - 1, w - 1))
            if kind == 'movs':
                body = 'wr%d(edi, rd%d(esi)); esi += %s; edi += %s;' % (w, w, step, step)
            elif kind == 'stos':
                body = 'wr%d(edi, (%s)%s); edi += %s;' % (w, ut, acc, step)
            elif kind == 'lods':
                body = '{ %s v = rd%d(esi); %s } esi += %s;' % (ut, w, acc_w, step)
            elif kind == 'scas':
                body = '{ %s a = %s, b = rd%d(edi), r = (%s)(a - b); %s } edi += %s;' % (ut, acc, w, ut, subf, step)
            else:
                body = '{ %s a = rd%d(esi), b = rd%d(edi), r = (%s)(a - b); %s } esi += %s; edi += %s;' % (
                    ut, w, w, ut, subf, step, step)
            if prefix is None:
                self.out.append(body)
            elif kind in ('movs', 'stos', 'lods'):
                self.out.append('while (ecx) { %s ecx--; }' % body)
            elif prefix in ('repe', 'repz', 'rep'):
                self.out.append('while (ecx) { %s ecx--; if (!zf) break; }' % body)
            else:
                self.out.append('while (ecx) { %s ecx--; if (zf) break; }' % body)
        for r in writes + regs:
            self.st.r[r] = V(r)
        if kind in ('scas', 'cmps'):
            for f in FLAGS:
                self.st.f[f] = V(f)
                self.st.frec[f] = None
                if self.mode == 'emit':
                    self.decls[f] = 'unsigned'

    def flag_value_for_var(self, f):
        v = self.st.f[f]
        return self.flag_expr(v[2], f) if v[0] == 'lazy' else v

    # ------------------------------------------------------------------ x87
    def st_get(self, i):
        while i >= len(self.st.x):
            k = len(self.st.x) - self.st.xd
            if k < 0:
                raise Refuse('x87 stack shape')
            self.st.x.append(V('xin%d' % k, 'd'))
            if self.mode == 'scan':
                self.xin_max = max(getattr(self, 'xin_max', -1), k)
        return self.st.x[i]

    def st_set(self, i, v):
        self.st_get(i)
        self.st.x[i] = self.contain(v)

    def fpush(self, v):
        self.st.x.insert(0, self.contain(v))
        self.st.xd += 1

    def fpop(self):
        v = self.st_get(0)
        self.st.x.pop(0)
        self.st.xd -= 1
        return v

    def x87(self, ins, opc):
        op, modrm = opc
        mod, reg, rm = modrm >> 6, (modrm >> 3) & 7, modrm & 7
        memop = next((o for o in ins.operands if o.type == X.X86_OP_MEM), None)
        A = self.address(ins, memop) if memop is not None else None

        def arith(r, d, s):
            # r: 0 add 1 mul 4 sub 5 subr 6 div 7 divr
            if d == s:
                d = s = self.share(d)
            x = {0: ('+', d, s), 1: ('*', d, s), 4: ('-', d, s), 5: ('-', s, d), 6: ('/', d, s), 7: ('/', s, d)}[r]
            return E.fr(E.dbin(*x))

        if mod != 3:
            if op in (0xD8, 0xDC, 0xDA, 0xDE):
                bits = {0xD8: 32, 0xDC: 64, 0xDA: 32, 0xDE: 16}[op]
                if op in (0xD8, 0xDC):
                    src = self.load(A, bits, 'f' if bits == 32 else 'd')
                else:
                    raw = self.load(A, bits)
                    src = ('cvt', 'i2d' if bits == 32 else 'i16d', raw)
                if reg in (2, 3):
                    self.fcompare(self.st_get(0), src)
                    if reg == 3:
                        self.fpop()
                    return
                if reg not in (0, 1, 4, 5, 6, 7):
                    raise Refuse('x87 %02x/%d' % (op, reg))
                self.st_set(0, arith(reg, self.st_get(0), src))
                return
            if op == 0xD9:
                if reg == 0:
                    self.fpush(self.load(A, 32, 'f'))
                elif reg in (2, 3):
                    v = self.st_get(0)
                    self.store(A, 32, ('cvt', 'd2f', v), 'f')
                    if reg == 3:
                        self.fpop()
                elif reg == 5:
                    v = self.load(A, 16)
                    self.flush('F')
                    self.stmt('g->fcw = %s;' % self.pr.p(v) if self.mode == 'emit' else '')
                    self.fcw_written = True
                elif reg == 7:
                    self.store(A, 16, ('raw', 'g->fcw', 'u', ('F',)))
                else:
                    raise Refuse('x87 d9/%d (environment)' % reg)
                return
            if op == 0xDB:
                if reg == 0:
                    self.fpush(('cvt', 'i2d', self.load(A, 32)))
                elif reg in (2, 3):
                    v = self.st_get(0)
                    self.store(A, 32, ('fn', '(uint32_t)fist32', 'u', (v,)))
                    if reg == 3:
                        self.fpop()
                elif reg == 1:
                    v = self.fpop()
                    self.store(A, 32, ('fn', '(uint32_t)(int32_t)trunc', 'u', (v,)))
                elif reg == 5:
                    self.fpush(self.load(A, 80, 't'))
                elif reg == 7:
                    self.store(A, 80, self.fpop(), 't')
                else:
                    raise Refuse('x87 db/%d' % reg)
                return
            if op == 0xDD:
                if reg == 0:
                    self.fpush(self.load(A, 64, 'd'))
                elif reg in (2, 3):
                    v = self.st_get(0)
                    self.store(A, 64, v, 'd')
                    if reg == 3:
                        self.fpop()
                elif reg == 7:
                    self.store(A, 16, self.fsw_word())
                else:
                    raise Refuse('x87 dd/%d' % reg)
                return
            if op == 0xDF:
                if reg == 0:
                    self.fpush(('cvt', 'i16d', self.load(A, 16)))
                elif reg in (2, 3):
                    v = self.st_get(0)
                    self.store(A, 16, ('fn', '(uint16_t)fist16', 'u', (v,)))
                    if reg == 3:
                        self.fpop()
                elif reg == 5:
                    self.fpush(('cvt', 'i64d', self.load(A, 64, 'q')))
                elif reg == 7:
                    v = self.fpop()
                    self.store(A, 64, ('fn', 'fist64', 'q', (v,)), 'q')
                else:
                    raise Refuse('x87 df/%d' % reg)
                return
            raise Refuse('x87 %02x' % op)
        i = rm
        if op == 0xD8:
            if reg in (2, 3):
                self.fcompare(self.st_get(0), self.st_get(i))
                if reg == 3:
                    self.fpop()
                return
            self.st_set(0, arith(reg, self.st_get(0), self.st_get(i)))
            return
        if op in (0xDC, 0xDE):
            if op == 0xDE and modrm == 0xD9:
                self.fcompare(self.st_get(0), self.st_get(1))
                self.fpop()
                self.fpop()
                return
            m = {0: 0, 1: 1, 4: 5, 5: 4, 6: 7, 7: 6}
            if reg not in m:
                raise Refuse('x87 %02x %02x' % (op, modrm))
            self.st_set(i, arith(m[reg], self.st_get(i), self.st_get(0)))
            if op == 0xDE:
                self.fpop()
            return
        if op == 0xD9:
            if reg == 0:
                v = self.share(self.st_get(i))
                self.st_set(i, v)
                self.fpush(v)
                return
            if reg == 1:
                a, b = self.st_get(0), self.st_get(i)
                self.st_set(0, b)
                self.st_set(i, a)
                return
            simple = {0xD0: None, 0xE0: lambda x: ('dun', '-', x), 0xE1: lambda x: ('dun', 'fabs', x),
                      0xFA: lambda x: E.fr(('dun', 'sqrt', x)), 0xFE: lambda x: E.fr(('dun', 'sin', x)),
                      0xFF: lambda x: E.fr(('dun', 'cos', x)), 0xFC: lambda x: ('fn', 'frnd', 'd', (x,))}
            if modrm in simple:
                if simple[modrm]:
                    self.st_set(0, simple[modrm](self.st_get(0)))
                return
            consts = {0xE8: '1.0', 0xE9: '3.3219280948873623', 0xEA: '1.4426950408889634',
                      0xEB: '3.141592653589793', 0xEC: '0.30102999566398120', 0xED: '0.69314718055994531',
                      0xEE: '0.0'}
            if modrm in consts:
                self.fpush(('raw', consts[modrm], 'd', ()))
                return
            if modrm == 0xE4:
                self.fcompare(self.st_get(0), ('raw', '0.0', 'd', ()))
                return
            if modrm == 0xF3:
                x = self.fpop()
                self.st_set(0, E.fr(('fn', 'atan2', 'd', (self.st_get(0), x))))
                return
            if modrm == 0xF1:
                x = self.fpop()
                self.st_set(0, E.fr(E.dbin('*', self.st_get(0), ('fn', 'log2', 'd', (x,)))))
                return
            if modrm == 0xFD:
                self.st_set(0, E.fr(('fn', 'cow_fscale', 'd', (self.st_get(0), self.st_get(1)))))
                return
            if modrm == 0xF2:
                self.st_set(0, E.fr(('dun', 'tan', self.st_get(0))))
                self.fpush(('raw', '1.0', 'd', ()))
                return
            if modrm == 0xFB:
                x = self.st_get(0)
                self.st_set(0, E.fr(('dun', 'sin', x)))
                self.fpush(E.fr(('dun', 'cos', x)))
                return
            if modrm == 0xF0:
                self.st_set(0, E.fr(E.dbin('-', ('fn', 'exp2', 'd', (self.st_get(0),)), ('raw', '1.0', 'd', ()))))
                return
            if modrm == 0xF9:
                x = self.fpop()
                self.st_set(0, E.fr(E.dbin('*', self.st_get(0), ('fn', 'log2', 'd', (E.dbin('+', x, ('raw', '1.0', 'd', ())),)))))
                return
            if modrm in (0xF8, 0xF5):
                self.st_set(0, E.fr(('fn', 'fmod' if modrm == 0xF8 else 'remainder', 'd', (self.st_get(0), self.st_get(1)))))
                return
            raise Refuse('x87 d9 %02x' % modrm)
        if op == 0xDA and modrm == 0xE9:
            self.fcompare(self.st_get(0), self.st_get(1))
            self.fpop()
            self.fpop()
            return
        if op == 0xDB and reg in (5, 6):
            return self.fcomi(i, False)
        if op == 0xDF and reg in (5, 6):
            return self.fcomi(i, True)
        if op == 0xDD:
            if reg == 0:
                return
            if reg == 2:
                self.st_set(i, self.st_get(0))
                return
            if reg == 3:
                self.st_set(i, self.st_get(0))
                self.fpop()
                return
            if reg in (4, 5):
                self.fcompare(self.st_get(0), self.st_get(i))
                if reg == 5:
                    self.fpop()
                return
        if op == 0xDF and modrm == 0xE0:
            self.set('ax', self.fsw_word())
            return
        raise Refuse('x87 %02x %02x' % (op, modrm))

    def fcompare(self, a, b):
        a2, b2 = self.share(a), self.share(b)
        if a2 is not a and self.st.x and self.st.x[0] == a:
            self.st.x[0] = a2
        self.st.fsw = (a2, b2, self.st.xd)

    def fsw_word(self):
        if self.st.fsw is None:
            raise Refuse('fnstsw without a compare in the block')
        a, b, _depth = self.st.fsw
        # TOP as it is now (after any pop the compare did), not as it was at the compare
        return ('fn', 'cow_fsw', 'u', (a, b, C(self.st.xd & 0xFFFFFFFF)))

    def fcomi(self, i, pop):
        a, b = self.st_get(0), self.st_get(i)
        word = ('fn', 'cow_fsw', 'u', (a, b, C(self.st.xd & 0xFFFFFFFF)))
        rec = ('fsw', word)
        for f in FLAGS:
            self.define(key_f(f))
            self.st.f[f] = ('lazy', f, rec)
            self.st.frec[f] = rec
        if pop:
            self.fpop()

    # ------------------------------------------------------------------ control flow
    def branch(self, ins, mn):
        if mn == 'jmp':
            op = ins.operands[0]
            if op.type == X.X86_OP_IMM:
                return
            if ins.address in self.img.switches:
                a = self.address(ins, op)
                self.check_value(a, 'switch on a frame address')
                self.term_switch = E.ld(32, a)
                return
            self.term_tailind = self.rd(ins, op, 32)
            return
        if mn == 'jecxz':
            self.term_cond = E.cmp('==', self.get('ecx'), C(0))
            return
        if mn in ('loop', 'loope', 'loopne'):
            ecx = E.sub(self.get('ecx'), C(1))
            self.set('ecx', ecx)
            c = E.cmp('!=', self.get('ecx'), C(0))
            if mn == 'loope':
                c = E.land(c, self.flag('zf'))
            elif mn == 'loopne':
                c = E.land(c, E.lnot(self.flag('zf')))
            self.term_cond = c
            return
        self.term_cond = self.cond(JCC[mn])
        self.check_value(self.term_cond, 'frame address compared')

    def peek_float_return(self, ins):
        """after a call to an unknown function: does the code use an x87 value it did not load itself?"""
        b = self.blocks[self.cur]
        k = b.ins.index(ins)
        for j in b.ins[k + 1:]:
            xo = x87_op(j)
            if xo is None:
                if j.mnemonic in ('call', 'ret') or j.mnemonic.startswith('j'):
                    return False
                continue
            op, modrm = xo
            reg = (modrm >> 3) & 7
            mod = modrm >> 6
            if mod != 3 and ((op == 0xD9 and reg == 0) or (op == 0xDB and reg in (0, 5)) or
                             (op == 0xDD and reg == 0) or (op == 0xDF and reg in (0, 5))):
                return False
            if mod != 3 and op == 0xD9 and reg in (5, 7):
                continue
            if op == 0xD9 and modrm in (0xE8, 0xE9, 0xEA, 0xEB, 0xEC, 0xED, 0xEE):
                return False
            if op == 0xD9 and reg == 0 and mod == 3:
                return True
            return True
        return False

    def call(self, ins):
        op = ins.operands[0]
        nxt = ins.address + ins.size
        info = None
        target = None
        name = ''
        is_import = False
        if op.type == X.X86_OP_IMM:
            tgt = op.imm & 0xFFFFFFFF
            if tgt == nxt:
                self.set('esp', E.sub(self.st.r['esp'], C(4)))
                self.slot_write(self.esp_off(), 4, 'u', E.img(nxt))
                return
            if tgt not in self.img.functions:
                raise Refuse('call to %x outside every function' % tgt)
            info = self.img.info(tgt)
            target = E.img(tgt)
            if info.get('helper'):
                return self.inline_helper(ins, info['helper'])
            if info['probe']:
                eax = self.st.r['eax']
                if eax[0] != 'c':
                    raise Refuse('stack probe of a variable size')
                self.set('esp', E.sub(self.st.r['esp'], eax))
                return
        else:
            if op.type == X.X86_OP_MEM and not op.mem.base and not op.mem.index and \
                    (op.mem.disp & 0xFFFFFFFF) in self.img.iat:
                is_import = True
                name = '%s!%s' % self.img.iat[op.mem.disp & 0xFFFFFFFF]
            target = self.rd(ins, op, 32)
            self.check_value(target, 'call through a frame address')
        E0 = self.esp_off()
        pop = info['pop'] if info else None
        if info is None and not is_import:
            # `mov edi, [__imp_X]; call edi`: the register holds what an import slot holds
            slot = None
            if target[0] == 'ld' and target[1] == 32 and target[2][0] == 'fn' and target[2][1] == 'COW_IMG' \
                    and target[2][3] and target[2][3][0][0] == 'c':
                slot = target[2][3][0][1]
            if slot is not None and slot in self.img.iat:
                is_import = True
                name = '%s!%s' % self.img.iat[slot]
        if is_import and pop is None:
            nw = self.img.import_args.get(tuple(name.split('!', 1)))
            if nw is not None:
                pop = 4 * nw
        nwritten = self.count_args(E0)
        caller_pops = False
        if pop is None:
            nx = self.next_ins(ins)
            guess = 'callee'
            if nx is not None and nx.mnemonic == 'add' and nx.op_str.replace(' ', '').startswith('esp,') and \
                    nx.operands[1].type == X.X86_OP_IMM:
                guess = 'caller'
            elif nx is not None and nx.mnemonic == 'pop' and nwritten and nx.operands[0].type == X.X86_OP_REG and \
                    nx.reg_name(nx.operands[0].reg) in ('ecx', 'edx', 'eax'):
                guess = 'caller'
            if not nwritten:
                guess = 'callee'
            choice = self.choices.get(('p', ins.address), guess)
            # recorded even when nothing was written in this block: an argument pushed before a branch
            # sits in the frame all the same (the fit may give the callee up to the words below the
            # return address, at most 16)
            self.unknown.append(('p', ins.address, choice))
            self.unknown_words[ins.address] = max(nwritten, min(16, max(0, -E0 // 4)))
            n = nwritten
            if choice == 'caller':
                caller_pops = True
                pop = 0
            elif isinstance(choice, int):
                # a count the function's own stack shape asked for (see fit_pops): the callee pops `choice`
                # bytes, which are its arguments; any words pushed below them are the caller's to clean
                pop = choice
                n = choice // 4
                caller_pops = pop == 0
            else:
                pop = 4 * n
            self.unknown_pop[ins.address] = pop
        elif pop == 0:
            caller_pops = True
            n = nwritten
            use = self.img.retuse.get('%08x' % (op.imm & 0xFFFFFFFF)) if op.type == X.X86_OP_IMM else None
            p = int(use[1]) if use is not None else None
            own = info.get('nargs') if info else None
            if p == 0 and own is None:
                p = None          # a signature with no parameters and a body we could not read: no evidence
            if own is not None and p is not None:
                p = max(p, own)
            elif own is not None:
                p = own
            if p is not None:
                # the callee says how many it reads; words pushed beyond them belong to a later call
                # (deferred cleanup)
                if p <= n or E0 + 4 * p <= 0:
                    n = p
        else:
            n = pop // 4
        if E0 + 4 * n > 0 and not caller_pops:
            raise Refuse('call arguments reach above the frame')
        args = []
        for k in range(n):
            off = E0 + 4 * k
            if off >= 0:
                args.append(self.slot_read(off, 4, 'u'))
            else:
                args.append(self.slot_read(off, 4, 'u'))
        for a in args:
            self.check_value(a, 'frame address passed to a call')
        if info is not None:
            reads = set(info['reads'])
        elif is_import:
            reads = set()
        else:
            reads = {'ecx'}
        regv = {}
        for r in ('eax', 'ecx', 'edx'):
            if r in reads:
                regv[r] = self.get(r)
                self.check_value(regv[r], 'frame address in a register argument')
        clob = set(info.get('clobbers', ())) if info else set()
        for r in CALLEE_SAVED:
            if r in reads or r in clob:
                v = self.get(r)
                if v != V('in_' + r) or r in self.dirty_g:
                    self.check_value(v, 'frame address in a register argument')
                    self.flush('G')
                    self.stmt('g->%s = %s;' % (r, self.pr.p(v) if self.mode == 'emit' else ''))
                    self.dirty_g.add(r)
        # a callee that reads the caller's flags (a run-time check) finds them in g
        if info is not None and info.get('flags_in'):
            for f in FLAGS:
                v = self.flag(f)
                self.check_value(v, 'frame address in a flag')
                self.flush('G')
                if self.mode == 'emit':
                    self.out.append('g->%s = %s;' % (f, self.pr.p(self.rebound(v))))
        # the x87 values the callee consumes (_ftol) go where it reads them
        xd = info['xdelta'] if info else None
        if xd is None:
            xd = self.choices.get(('x', ins.address))
            if xd is None:
                xd = 1 if self.peek_float_return(ins) else 0
            self.unknown.append(('x', ins.address, xd))
        # a scratch register the code reads after the call keeps whatever the callee leaves in it, which
        # is ours when the callee does not touch it: hand it over in g and read it back
        # eax too, when the callee may return without writing it (a void function): what the caller reads
        # after the call is then what it held before
        use = self.img.retuse.get('%08x' % (op.imm & 0xFFFFFFFF)) if op.type == X.X86_OP_IMM else None
        if 'eax' not in regv and self.live(key_r('eax')):
            v = self.get('eax')
            self.check_value(v, 'frame address in eax across a call')
            if v != self.geax:
                self.flush('G')
                if self.mode == 'emit':
                    self.out.append('g->eax = %s;' % self.pr.p(self.rebound(v)))
        for r in ('ecx', 'edx'):
            if r not in regv and self.live(key_r(r)):
                v = self.get(r)
                self.check_value(v, 'frame address in a register across a call')
                if v != V('g->' + r):
                    self.flush('G')
                    if self.mode == 'emit':
                        self.out.append('g->%s = %s;' % (r, self.pr.p(self.rebound(v))))
        self.flush('MFG')
        args = [self.rebound(a) for a in args]
        target = self.rebound(target)
        regv = {k: self.rebound(v) for k, v in regv.items()}
        for k in range(-xd if xd < 0 else 0):
            v = self.fpop()     # handed to the callee, which pops it from g
            self.stmt('fpush(g, %s);' % (self.pr.p(v) if self.mode == 'emit' else ''))
        ret_live = self.live(key_r('eax'))
        # the callee's frame sits exactly where the original's did: its locals' addresses are visible to
        # whatever it hands them to
        want = E0 + 4 * n
        if self.gesp != want:
            self.stmt('g->esp = %s;' % (self.pr.p(frame_addr(want)) if self.mode == 'emit' else ''))
            self.gesp = want
        if self.mode == 'emit':
            P = self.pr
            al = ''.join(', ' + P.p(a) for a in args)
            T = P.p(target)
            if 'eax' in regv or ('edx' in regv and 'ecx' not in regv):
                call = 'cow_call_regs(g, %s, %s, %s, %s, %d, %d%s)' % (
                    T, P.p(regv.get('eax', V('g->eax'))), P.p(regv.get('ecx', V('g->ecx'))),
                    P.p(regv.get('edx', V('g->edx'))), 1 if caller_pops else 0, n, al)
            elif 'ecx' in regv and 'edx' in regv:
                if caller_pops and n:
                    call = 'cow_call_regs(g, %s, g->eax, %s, %s, 1, %d%s)' % (T, P.p(regv['ecx']), P.p(regv['edx']), n, al)
                else:
                    call = 'cow_fastcall(g, %s, %s, %s, %d%s)' % (T, P.p(regv['ecx']), P.p(regv['edx']), n, al)
            elif 'ecx' in regv:
                fn = 'cow_thiscall_cdecl' if caller_pops and n else 'cow_thiscall'
                call = '%s(g, %s, %s, %d%s)' % (fn, T, P.p(regv['ecx']), n, al)
            else:
                fn = 'cow_cdecl' if caller_pops and n else 'cow_stdcall'
                call = '%s(g, %s, %d%s)' % (fn, T, n, al)
            if n > 16:
                # more arguments than the cow_call helpers carry: the bridge itself, with the words in order
                call = 'cow_bridge_indirect(g, %s, 0u, %du, (const uint32_t[]){%s}, %s, %s, %s, %du)' % (
                    T, n, ', '.join(P.p(a) for a in args), P.p(regv.get('ecx', V('g->ecx'))),
                    P.p(regv.get('edx', V('g->edx'))), P.p(regv.get('eax', V('g->eax'))),
                    4 * n if caller_pops else 0)
            note = '   /* %s */' % name if name else ''
            if ret_live:
                tv = self.new_temp('u')
                self.out.append('%s = %s;%s' % (tv[1], call, note))
                rv = tv
            else:
                self.out.append('%s;%s' % (call, note))
                rv = C(0)
        else:
            rv = V('callret')
        for r in ('eax', 'ecx', 'edx'):
            self.define(key_r(r))
        self.st.r['eax'] = rv
        self.geax = rv
        for r in ('ecx', 'edx'):
            if self.live(key_r(r)) and self.mode == 'emit':
                tv = self.new_temp('u')
                self.out.append('%s = g->%s;' % (tv[1], r))
                self.st.r[r] = tv
            else:
                self.st.r[r] = V('g->' + r) if self.mode == 'emit' else V('callclob')
        # a callee-saved register the callee hands back changed (see callee_clobbers) is its output too
        for r in sorted(clob):
            self.define(key_r(r))
            self.dirty_g.add(r)
            if self.live(key_r(r)) and self.mode == 'emit':
                tv = self.new_temp('u')
                self.out.append('%s = g->%s;' % (tv[1], r))
                self.st.r[r] = tv
            else:
                self.st.r[r] = V('g->' + r) if self.mode == 'emit' else V('callclob')
        for f in FLAGS:
            self.define(key_f(f))
            self.st.f[f] = ('raw', 'g->' + f, 'u', ('G',))
            self.st.frec[f] = None
        # the stack: the return address and whatever the callee pops
        newsp = E0 + pop
        self.set('esp', frame_addr(newsp))
        # the argument words keep what we put there: a callee that changes its own arguments and a caller
        # that reads them back is not something a compiler emits (the judge checks the rest)
        if self.guest:
            for off in list(self.st.s):
                if not self.stable(self.st.s[off].e):
                    del self.st.s[off]
        self.st.written = set()
        for k in range(xd if xd > 0 else 0):
            if self.mode == 'emit':
                tv = self.new_temp('d')
                self.out.append('%s = cow_take_float(g);' % tv[1])
                self.fpush(tv)
            else:
                self.fpush(V('fret%d' % k, 'd'))

    def inline_helper(self, call, body):
        """run a frame helper's instructions here, as if they were the caller's own"""
        nxt = call.address + call.size
        self.set('esp', E.sub(self.st.r['esp'], C(4)))
        self.push_only = self.is_save = True
        self.slot_write(self.esp_off(), 4, 'u', E.img(nxt))
        self.push_only = self.is_save = False
        self.inlining = True
        try:
            for ci in body[:-1]:
                self.do(ci)
        finally:
            self.inlining = False
        v = self.slot_read(self.esp_off(), 4, 'u')
        if v != E.img(nxt):
            raise Refuse('frame helper returns somewhere else')
        self.set('esp', E.add(self.st.r['esp'], C(4)))

    def count_args(self, E0):
        """how many words from esp upward this function wrote since its last call"""
        w = getattr(self.st, 'written', set())
        n = 0
        while (E0 + 4 * n) in w and E0 + 4 * n < 0:
            n += 1
        return n

    def next_ins(self, ins):
        b = self.blocks[self.cur]
        k = b.ins.index(ins)
        if k + 1 < len(b.ins):
            return b.ins[k + 1]
        nb = self.blocks.get(ins.address + ins.size)
        return nb.ins[0] if nb else None

    def stable(self, e):
        if E.deps(e):
            return False
        for v in E.vars_of(e):
            if not (v.startswith('in_') or v == 'sp0' or v.startswith('arg_') or v.startswith('xin')):
                return False
        return True

    def ret(self, ins):
        n = ins.operands[0].imm if ins.operands else 0
        if self.esp_off() != 0:
            raise Refuse('ret with esp off the return address (%d) at %08x' % (self.esp_off(), ins.address))
        self.exit_pops.add(n)
        self.emit_exit()
        self.st.r['esp'] = E.add(SP, C(4 + n))

    def emit_exit(self, tail=None):
        st = self.st
        stmts = []
        for r in CALLEE_SAVED:
            v = self.get(r)
            if v != V('in_' + r) or r in self.dirty_g:
                self.check_value(v, 'frame address left in a callee-saved register')
                stmts.append(('g->%s' % r, v))
        if not self.edx_dead or tail:
            v = self.get('edx')
            self.check_value(v, 'frame address returned')
            stmts.append(('g->edx', v))
        if tail:
            for r in ('eax', 'ecx'):
                self.check_value(self.get(r), 'frame address passed to a tail call')
        retv = None
        if self.eax_dead != 0xFFFFFFFF and not tail:
            retv = self.get('eax')
            self.check_value(retv, 'frame address returned')
        if self.mode != 'emit':
            return
        P = self.pr
        # x87: pop what we consumed of the caller's stack, push what we leave
        x = list(st.x)
        j = len(x) - st.xd
        while x and j > 0 and x[-1] == V('xin%d' % (j - 1), 'd'):
            x.pop()
            j -= 1
        lines = ['%s = %s;' % (lhs, P.p(v)) for lhs, v in stmts if not (lhs == 'g->edx' and v == V('in_edx'))]
        if j > 0:
            lines.append('g->top = (g->top + %du) & 7u;' % j)
        elif j < 0:
            raise Refuse('x87 stack shape at exit')
        for v in reversed(x):
            lines.append('fpush(g, %s);' % P.p(v))
        if tail is not None:
            ex, ec = self.get('eax'), self.get('ecx')
            ed = self.get('edx')
            lines.append('return cow_tailcall(g, %s, %s, %s, %s);' % (P.p(tail), P.p(ex), P.p(ec), P.p(ed))
                         if self.eax_dead != 0xFFFFFFFF else
                         'cow_tailcall(g, %s, %s, %s, %s);' % (P.p(tail), P.p(ex), P.p(ec), P.p(ed)))
            if self.eax_dead == 0xFFFFFFFF:
                lines.append('return;')
        elif retv is not None:
            lines.append('return %s;' % P.p(retv))
        else:
            lines.append('return;')
        self.exit_code = lines

    # ------------------------------------------------------------------ the end of a block
    def finish_block(self, b):
        a = b.start
        term = b.term
        t = term[0]
        tc = getattr(self, 'term_cond', None)
        ts = getattr(self, 'term_switch', None)
        ti = getattr(self, 'term_tailind', None)
        self.term_cond = self.term_switch = self.term_tailind = None
        ex = getattr(self, 'exit_code', None)
        self.exit_code = None
        if t == 'ret':
            if self.mode == 'emit':
                self.out.extend(ex or ['return;'])
            return
        if t == 'trap' or t == 'end':
            if self.mode == 'emit':
                self.out.append('rt_fatal(g, COW_IMG(0x%xu), "no way on");' % b.ins[-1].address)
                if self.eax_dead != 0xFFFFFFFF:
                    self.out.append('return 0;')
            return
        if t in ('tail', 'tailind'):
            if self.esp_off() != 0:
                raise Refuse('tail jump with esp off the return address (%d) at %08x' % (
                    self.esp_off(), b.ins[-1].address if b.ins else a))
            if t == 'tail':
                tgt = E.img(term[1])
            else:
                tgt = ti
            self.has_tail = True
            self.in_term = True
            for r in ('eax', 'ecx', 'edx'):
                self.use(key_r(r))
            if self.gesp != 0:
                self.stmt('g->esp = sp0;')
                self.gesp = 0
            self.emit_exit(tail=tgt)
            self.in_term = False
            if self.mode == 'emit':
                self.out.extend(self.exit_code)
            return
        succs = b.succ
        for s in succs:
            self.reach(a, s)
        if self.mode != 'emit':
            return
        P = self.pr
        if t == 'fall' or t == 'jmp':
            self.tinfo[a] = ('goto', succs[0], self.edge(a, succs[0]))
        elif t == 'cond':
            tgt, fall = term[1], term[2]
            e1 = self.edge(a, tgt)
            e2 = self.edge(a, fall) if fall != tgt else []
            self.tinfo[a] = ('cond', tc, tgt, e1, fall, e2)
        elif t == 'switch':
            idx = self.bind_now(ts, 'u')
            edges = {s: self.edge(a, s) for s in succs}
            same = all(e == edges[succs[0]] for e in edges.values())
            if same:
                self.out.extend(edges[succs[0]])
            self.out.append('switch (%s - RD)' % P.p(idx))
            self.out.append('{')
            for tgt in dict.fromkeys(term[1]):
                if same or not edges[tgt]:
                    self.out.append('case 0x%xu: goto L_%08x;' % (tgt, tgt))
                else:
                    self.out.append('case 0x%xu: %s goto L_%08x;' % (tgt, ' '.join(edges[tgt]), tgt))
            self.out.append('default: rt_fatal(g, COW_IMG(0x%xu), "switch");' % b.ins[-1].address)
            self.out.append('}')
            if self.eax_dead != 0xFFFFFFFF:
                self.out.append('return 0;')
            else:
                self.out.append('return;')

    def norm_x87(self):
        x = list(self.st.x)
        while x and x[-1] == V('xin%d' % (len(x) - 1 - self.st.xd), 'd'):
            x.pop()
        self.st.x = x

    def reach(self, a, s):
        """record (scan) or check the shape of the state carried from block a into s"""
        self.norm_x87()
        st = self.st
        ebp = st.r['ebp']
        ebp_off = frame_split(ebp)
        if ebp_off is None:
            self.check_value(ebp, 'frame address in ebp')
        # A frame address in any register is a FACT of the edge, as ebp's is: hand-written code keeps its
        # frame in ebx (`mov ebx, esp; and esp, -16; ... mov esp, ebx`), and a frame address that became a
        # variable at a block boundary could never be put back in esp. Where two paths disagree the register
        # drops back to an ordinary variable (fit for guest-frame mode only).
        fr = {}
        for r in GPR:
            if r != 'ebp':
                o = frame_split(st.r[r])
                if o is not None:
                    fr[r] = o
                elif self.mode == 'scan' and 'sp0' in E.vars_of(st.r[r]) and not self.guest:
                    # a frame address carried in a register: fine only if it is dead there (pass 2 checks)
                    self.ptr_regs.add((s, r))
        shape = {off: (sl.size, sl.kind) for off, sl in st.s.items()
                 if off < 0 and not (sl.e[0] == 'raw' and 'clobbered' in sl.e[1])}
        # and a frame address SAVED in a frame slot (`mov eax, esp; and esp, -16; mov [esp+4], eax` ...
        # `mov esp, [esp+4]`): the same fact, kept while every path agrees on it
        fs = {}
        for off, sl in st.s.items():
            if off in shape and sl.size == 4 and sl.kind == 'u':
                o = frame_split(sl.e)
                if o is not None:
                    fs[off] = o
        fx = {'esp': self.esp_off(), 'ebp': ebp_off, 'slots': shape, 'x87': len(st.x), 'xd': st.xd, 'fr': fr,
              'fs': fs}
        old = self.facts.get(s)
        if old is None:
            if self.mode == 'emit':
                raise Refuse('internal: no facts for %x' % s)
            self.facts[s] = fx
            return
        if old['esp'] != fx['esp']:
            raise Refuse('esp differs at %x (%d vs %d)' % (s, old['esp'], fx['esp']))
        if old['ebp'] != fx['ebp']:
            raise Refuse('ebp differs at %x' % s)
        keeps = {o: v for o, v in old.get('fs', {}).items() if fs.get(o) == v}
        if keeps != old.get('fs', {}):
            if self.mode != 'scan':
                raise Refuse('internal: frame slot facts changed at %x' % s)
            old['fs'] = keeps
            self.facts_changed = True
        keep = {r: o for r, o in old.get('fr', {}).items() if fr.get(r) == o}
        if keep != old.get('fr', {}):
            if self.mode != 'scan':
                raise Refuse('internal: frame register facts changed at %x' % s)
            for r in old['fr']:
                if r not in keep and self.guest is False and 'sp0' in E.vars_of(st.r[r]):
                    self.ptr_regs.add((s, r))
            old['fr'] = keep
            self.facts_changed = True
        if (old['x87'], old['xd']) != (fx['x87'], fx['xd']):
            raise Refuse('x87 stack differs at %x (%d vs %d)' % (s, old['x87'] - old['xd'], fx['x87'] - fx['xd']))
        if self.mode == 'scan':
            for off, sh in shape.items():
                if off in old['slots'] and old['slots'][off] != sh:
                    if self.guest:
                        # the frame is guest memory, which holds whatever shape it was last written in
                        old.setdefault('dropped', set()).add(off)
                        del old['slots'][off]
                        self.facts_changed = True
                        continue
                    raise Refuse('stack value shape differs at %x' % s)
                if off in old.get('dropped', ()):
                    continue
                if off not in old['slots']:
                    old['slots'][off] = sh
                    self.facts_changed = True

    def edge(self, a, s):
        """the assignments that carry block a's values into block s's variables"""
        st = self.st
        fx = self.facts[s]
        live = self.live_in.get(s, set())
        fixed = self.fixed_in.setdefault(s, None)
        first = fixed is None
        if first:
            fixed = {}
            self.fixed_in[s] = fixed
        assigns = []

        def want(key, var, val, kind):
            if (s, key) not in self.forced and s not in self.done_blocks:
                if first:
                    if self.stable(val):
                        fixed[key] = val
                        return
                elif key in fixed:
                    if fixed[key] == val:
                        return
                    self.mismatch.add((s, key))
                    return
            elif key in fixed:
                if fixed[key] != val:
                    self.mismatch.add((s, key))
                return
            if val == V(var, kind):
                self.decls.setdefault(var, {'d': 'double', 'q': 'int64_t', 't': 'double', 'f': 'double'}.get(kind, 'uint32_t'))
                return
            self.check_value(val, 'frame address carried between blocks')
            assigns.append((var, val, kind))
        for r in GPR:
            if r == 'ebp' and fx['ebp'] is not None:
                continue
            if r in fx.get('fr', ()):
                continue                 # a frame address the target block rebuilds from the fact
            if key_r(r) in live:
                want(key_r(r), r, st.r[r], 'u')
        for f in FLAGS:
            if key_f(f) in live:
                v = st.f[f]
                if v[0] == 'lazy':
                    v = self.flag_expr(v[2], f)
                want(key_f(f), f, v, 'u')
        for off, (size, kind) in fx['slots'].items():
            if off in fx.get('fs', ()):
                continue                 # a saved frame address the target rebuilds from the fact
            words = self.slot_words(off, size)
            if not any(key_s(w) in live for w in words):
                continue
            sl = st.s.get(off)
            if sl is None or sl.size != size:
                if self.guest:
                    # A guest frame holds every word in memory, and this path does not have this one in a variable,
                    # but the target block does (another path brought it there): it is loaded here. Skipping it
                    # left the target's variable unassigned on this path - an uninitialised C local that the
                    # judge saw as a call the original never made (0x102dc58d, `if (loc_20 != 0)` at its exit).
                    fa = frame_addr(off)
                    val = E.ld(size * 8, fa) if kind == 'u' else ('ldf', size * 8, fa) if kind in ('f', 'd', 't') \
                        else ('fn', '(int64_t)rd64', 'q', (fa,))
                    want(key_s(off), self.slot_var(off, kind), val, kind)
                    continue
                val = self.slot_read(off, size, kind) if sl is None else self.convert(sl, kind)
            else:
                val = self.convert(sl, kind)
            want(key_s(off), self.slot_var(off, kind), val, kind)
        n = fx['x87']
        for i in range(n):
            pos = n - 1 - i
            want('x:%d' % pos, 'x%d' % pos, st.x[i], 'd')
        # parallel assignment: write a var only after everything that reads its old value
        out = []
        pending = list(assigns)
        while pending:
            progress = False
            for k, (var, val, kind) in enumerate(pending):
                readers = [p for j, p in enumerate(pending) if j != k and var in E.vars_of(p[1])]
                if not readers:
                    out.append('%s = %s;' % (var, self.pr.p(val)))
                    self.decls.setdefault(var, {'d': 'double', 'q': 'int64_t', 't': 'double', 'f': 'double'}.get(kind, 'uint32_t'))
                    pending.pop(k)
                    progress = True
                    break
            if not progress:
                var, val, kind = pending[0]
                tv = self.new_temp(kind)
                out.append('%s = %s;' % (tv[1], var))
                pending = [(v2, E.subst(x, {var: tv}), k2) for (v2, x, k2) in pending]
        return out


# ============================================================================================ liveness

def liveness(L):
    blocks = L.blocks
    live_in = {a: set() for a in blocks}
    changed = True
    while changed:
        changed = False
        for a in reversed(L.order):
            b = blocks[a]
            live = set(L.term_uses.get(a, ()))
            for s in b.succ:
                live |= live_in[s]
            for i in reversed(b.ins):
                live = (live - L.defs.get(i.address, set())) | L.uses.get(i.address, set())
            if live != live_in[a]:
                live_in[a] = live
                changed = True
    live_after = {}
    for a in L.order:
        b = blocks[a]
        live = set(L.term_uses.get(a, ()))
        for s in b.succ:
            live |= live_in[s]
        for i in reversed(b.ins):
            live_after[i.address] = set(live)
            live = (live - L.defs.get(i.address, set())) | L.uses.get(i.address, set())
    return live_after, live_in


# ============================================================================================ the unit

INPUTS = {'in_eax': 'g->eax', 'in_ecx': 'g->ecx', 'in_edx': 'g->edx', 'in_ebx': 'g->ebx', 'in_esi': 'g->esi',
          'in_edi': 'g->edi', 'in_ebp': 'g->ebp', 'in_cf': 'g->cf', 'in_zf': 'g->zf', 'in_sf': 'g->sf',
          'in_of': 'g->of', 'in_pf': 'g->pf', 'in_af': 'g->af'}


FRAME_SHAPE_ERRORS = ('stack read overlaps', 'partial write into a stack', 'unaligned stack slot',
                      'stack write over', 'stack value read as another type', 'stack value shape differs',
                      'reads an argument word')


def lift(img, entry):
    last = None
    for guest in (False, True):
        try:
            return lift_mode(img, entry, guest)
        except Escape as e:
            last = e
            continue
        except Refuse as r:
            # a frame whose words are used in shapes C locals cannot hold: keep it in guest memory instead
            if not guest and str(r).startswith(FRAME_SHAPE_ERRORS):
                last = r
                continue
            raise
    raise Refuse('frame escapes even in guest memory: %s' % last)


SHAPE_ERRORS = ('esp differs', 'ret with esp off', 'x87 stack differs', 'x87 stack shape', 'tail jump with esp',
                'call arguments reach')


def shape_delta(msg):
    """what a shape refusal says is off: ('p', [d]) where some unknown callee should pop d more bytes, or
    ('x', [d]) where one should leave d more values on the x87 stack (a merge could be wrong on either path,
    so both signs)"""
    m = re.search(r'x87 stack differs at [0-9a-f]+ \((-?\d+) vs (-?\d+)\)', msg)
    if m:
        d = int(m.group(1)) - int(m.group(2))
        return 'x', [d, -d]
    m = re.search(r'esp differs at [0-9a-f]+ \((-?\d+) vs (-?\d+)\)', msg)
    if m:
        d = int(m.group(1)) - int(m.group(2))
        return 'p', [d, -d]
    m = re.search(r'with esp off the return address \((-?\d+)\)', msg)
    if m:
        return 'p', [-int(m.group(1))]
    return None, []


def fit_pops(L, first):
    """THE STACK SAYS HOW MANY. A call whose callee we cannot read (through a vtable, a function pointer, or
    a body rise does not know) pops an unknown number of bytes, and the two guesses scan() tries - the
    caller cleans up, or the callee pops every word pushed since the last call - are both wrong for a
    stdcall method called with saved registers on the stack (`push esi; push edi; push edx; push esi;
    call [ecx+0xc]` pops 8, not 16 and not 0). The function's own shape pins the answer: esp has to agree
    where paths meet and sit on the return address at `ret`, and the refusal says by how many bytes it
    does not. So move one unknown call's pop by exactly that much (never below 0, never past the words
    pushed for it), scan again, and repeat while each move gets further. The judge still compares the
    result with the original in every state: a count that fits the shape but is wrong fails there."""
    err = first
    tried = set()
    for _round in range(24):
        kind, deltas = shape_delta(str(err))
        if not deltas:
            raise first
        keys = list(dict.fromkeys(a for k, a, _v in L.unknown if k == kind))
        m = re.search(r'at ([0-9a-f]{8})', str(err))
        at = int(m.group(1), 16) if m else None
        if at is not None:
            # the calls just before the place it shows first (by address, nearest first), then the rest
            keys = sorted([a for a in keys if a < at], reverse=True) + sorted(a for a in keys if a >= at)
        else:
            keys = list(reversed(keys))
        moved = None
        base = dict(L.choices)
        pops = dict(L.unknown_pop)
        same = []                       # single moves that left the same refusal: try them in pairs

        def attempt(extra):
            """scan with these moves on top of the base: facts, a new refusal, or None (the same one)"""
            choices = dict(base)
            choices.update(extra)
            key = tuple(sorted(choices.items(), key=str))
            if key in tried:
                return None
            tried.add(key)
            L.choices = choices
            try:
                return scan(L)
            except Refuse as r2:
                if not str(r2).startswith(SHAPE_ERRORS):
                    raise
                if str(r2) != str(err):
                    return r2
                return None
        seen = set(keys)
        i = 0
        while i < len(keys) and i < 24:
            a = keys[i]
            i += 1
            if kind == 'p':
                words = L.unknown_words.get(a, 0)
                cur = pops.get(a, 0)
            else:
                cur = base.get((kind, a))
                if cur is None:
                    cur = next((v for k, aa, v in L.unknown if k == kind and aa == a), 0)
            for d in deltas:
                new = cur + d
                if kind == 'p' and (new < 0 or new > 4 * words or new % 4):
                    continue
                if kind == 'x' and not -2 <= new <= 2:
                    continue
                mv = {(kind, a): new}
                got = attempt(mv)
                # a call the first scan never reached (it stopped at the merge) shows up once a path is
                # fixed: queue it, nearest the refusal first
                fresh = [x for x in dict.fromkeys(aa for k, aa, _v in L.unknown if k == kind) if x not in seen]
                for x in fresh:
                    seen.add(x)
                    pops.setdefault(x, L.unknown_pop.get(x, 0))
                keys[i:i] = sorted(fresh, key=lambda x: (x >= at if at is not None else 0, -x))
                if got is None:
                    # two paths that each need the same fix (a call on either arm of an if) show the
                    # same refusal until both are moved
                    for other in same:
                        got = attempt({**other, **mv})
                        if got is not None:
                            mv = {**other, **mv}
                            break
                    if got is None:
                        same.append(mv)
                        continue
                if isinstance(got, Refuse):
                    moved = got
                    base.update(mv)
                    break
                return got
            if moved is not None:
                break
        L.choices = base
        if moved is None:
            raise first
        err = moved
    raise first


def scan(L):
    facts = {}
    for it in range(8):
        L.run('scan', entry_facts=facts)
        if not L.facts_changed:
            return facts
    raise Refuse('the frame never settles')


def scan_fitted(L):
    """the scan, and when an unknown callee's cleanup or x87 effect was guessed wrong, the other guesses
    (one call at a time, then two), then a fit of the pops to the frame: the facts lift_mode emits from
    (tools/cow/rise/seek.py drives the same ones)"""
    try:
        facts = scan(L)
    except Refuse as r:
        if not str(r).startswith(SHAPE_ERRORS):
            raise
        # an unknown callee's cleanup or x87 effect was guessed wrong somewhere: try the other guesses,
        # one call at a time, then two
        import itertools
        base = list(dict.fromkeys((k, a) for k, a, _v in L.unknown))
        alts = {('p', a): ('caller', 'callee') for k, a in base if k == 'p'}
        alts.update({('x', a): (0, 1, -1) for k, a in base if k == 'x'})
        keys = list(alts)
        facts = None
        tries = 0
        for n in (1, 2):
            for combo in itertools.combinations(keys, n):
                for vals in itertools.product(*[alts[k] for k in combo]):
                    tries += 1
                    if tries > 120:
                        break
                    L.choices = dict(zip(combo, vals))
                    try:
                        facts = scan(L)
                        break
                    except Refuse as r2:
                        if not str(r2).startswith(SHAPE_ERRORS):
                            raise
                if facts is not None or tries > 120:
                    break
            if facts is not None or tries > 120:
                break
        if facts is None:
            L.choices = {}          # from the scan's own guesses, not the last combination tried
            try:
                facts = scan(L)
            except Refuse as r0:
                if not str(r0).startswith(SHAPE_ERRORS):
                    raise
                facts = fit_pops(L, r0)
    return facts


def lift_mode(img, entry, guest):
    L = Lifter(img, entry, guest)
    facts = scan_fitted(L)
    args_written = set(L.args_written)
    min_sp, min_sp1 = L.min_sp, L.min_sp1
    live_after, live_in = liveness(L)
    forced = set()
    for it in range(12):
        L.pr = E.Printer()
        L.live_in = live_in
        L._argw = {(o, s) for (o, s) in args_written}
        L.run('emit', live_after, facts, forced)
        if not L.mismatch:
            break
        forced |= L.mismatch
    else:
        raise Refuse('the values carried between blocks never settle')
    pops = L.exit_pops or {0}
    if len(pops) != 1:
        raise Refuse('the function pops %s bytes on different paths' % sorted(pops))
    L.ret_pop = pops.pop()
    L.min_sp_final = min_sp
    L.min_sp1_final = min_sp1
    return assemble(L)


def postdominators(L):
    """immediate post-dominator of each block (None: only the exit)"""
    blocks = L.blocks
    nodes = list(L.order)
    EXIT = -1
    succ = {a: (blocks[a].succ if L.tinfo.get(a) else []) or [EXIT] for a in nodes}
    for a in nodes:
        if not L.tinfo.get(a):
            succ[a] = [EXIT]
    pdom = {a: set(nodes) | {EXIT} for a in nodes}
    pdom[EXIT] = {EXIT}
    changed = True
    while changed:
        changed = False
        for a in reversed(nodes):
            ss = [pdom[x] for x in succ[a]]
            new = set.intersection(*ss) | {a} if ss else {a}
            if new != pdom[a]:
                pdom[a] = new
                changed = True
    ipdom = {}
    for a in nodes:
        cands = pdom[a] - {a}
        best = None
        for c in cands:
            # the closest: every other candidate post-dominates c
            if all(o == c or o in pdom.get(c, ()) for o in cands):
                best = c
                break
        ipdom[a] = None if best in (None, EXIT) else best
    return ipdom


def dominators(L):
    nodes = list(L.order)
    preds = {a: [p for p in L.blocks[a].pred if p in L.blocks] for a in nodes}
    dom = {a: set(nodes) for a in nodes}
    dom[L.entry] = {L.entry}
    changed = True
    while changed:
        changed = False
        for a in nodes:
            if a == L.entry:
                continue
            ps = [dom[p] for p in preds[a]]
            new = (set.intersection(*ps) if ps else set()) | {a}
            if new != dom[a]:
                dom[a] = new
                changed = True
    return dom


def structure(L):
    """the blocks as nested if/else where the shape allows it, labels and gotos where it does not"""
    ipdom = postdominators(L)
    dom = dominators(L)
    emitted = set()
    out = []

    def region_ok(start, stop, head):
        """every block from start up to stop is entered only through start, and start only from head"""
        if start == stop:
            return True
        if start in emitted:
            return False
        if [p for p in L.blocks[start].pred] != [head] and set(L.blocks[start].pred) != {head}:
            return False
        seen, work = set(), [start]
        while work:
            x = work.pop()
            if x in seen or x == stop:
                continue
            seen.add(x)
            if x in emitted or start not in dom[x]:
                return False
            ti = L.tinfo.get(x)
            if ti:
                work.extend(L.blocks[x].succ)
        return True

    def emit(start, stop, ind):
        cur = start
        while cur is not None and cur != stop:
            if cur in emitted:
                out.append(ind + 'goto L_%08x;' % cur)
                return
            emitted.add(cur)
            out.append('L_%08x:' % cur)
            out.extend(ind + x for x in L.code[cur])
            ti = L.tinfo.get(cur)
            if not ti:
                return
            if ti[0] == 'goto':
                out.extend(ind + x for x in ti[2])
                cur = ti[1]
                continue
            _k, c, T, e1, F, e2 = ti
            P = L.pr
            join = ipdom.get(cur)
            if T == F:
                out.extend(ind + x for x in e1)
                cur = T
                continue
            okT = region_ok(T, join, cur) if join is not None else False
            okF = region_ok(F, join, cur) if join is not None else False
            if join is not None and okT and okF:
                tb, fb = [], []
                saved = out[:]
                del out[:]
                out.extend(ind + '    ' + x for x in e1)
                emit(T, join, ind + '    ')
                tb = out[:]
                del out[:]
                out.extend(ind + '    ' + x for x in e2)
                emit(F, join, ind + '    ')
                fb = out[:]
                out[:] = saved
                tb_real = [x for x in tb if not x.startswith('L_')]
                fb_real = [x for x in fb if not x.startswith('L_')]
                if tb_real and fb_real:
                    out.append(ind + 'if (%s)' % P.p(c))
                    out.append(ind + '{')
                    out.extend(tb)
                    out.append(ind + '}')
                    out.append(ind + 'else')
                    out.append(ind + '{')
                    out.extend(fb)
                    out.append(ind + '}')
                elif tb_real:
                    out.extend(x for x in fb if x.startswith('L_'))
                    out.append(ind + 'if (%s)' % P.p(c))
                    out.append(ind + '{')
                    out.extend(tb)
                    out.append(ind + '}')
                elif fb_real:
                    out.extend(x for x in tb if x.startswith('L_'))
                    out.append(ind + 'if (%s)' % P.p(E.lnot(c)))
                    out.append(ind + '{')
                    out.extend(fb)
                    out.append(ind + '}')
                else:
                    out.extend(tb + fb)
                cur = join
                continue
            # no structure: a jump, and the fall-through continues here
            if e1:
                out.append(ind + 'if (%s)' % P.p(c))
                out.append(ind + '{')
                out.extend(ind + '    ' + x for x in e1)
                out.append(ind + '    goto L_%08x;' % T)
                out.append(ind + '}')
            else:
                out.append(ind + 'if (%s) goto L_%08x;' % (P.p(c), T))
            out.extend(ind + x for x in e2)
            cur = F
        if cur is not None and cur == stop:
            return

    emit(L.entry, None, '')
    for a in sorted(L.code):
        if a not in emitted:
            emit(a, None, '')
    # tidy: a goto to the label right after it, labels nobody jumps to, code after a return
    text = '\n'.join(out)
    lines = []
    for k, ln in enumerate(out):
        st = ln.strip()
        if st.startswith('goto L_'):
            nxt = next((x for x in out[k + 1:] if x.strip()), '')
            if nxt == st[5:-1] + ':':
                continue
        lines.append(ln)
    used = set(re.findall(r'goto (L_[0-9a-f]{8});|: goto (L_[0-9a-f]{8});', '\n'.join(lines)))
    used = {u for pair in used for u in pair if u}
    used |= set(re.findall(r'goto (L_[0-9a-f]{8})', '\n'.join(lines)))
    res = []
    dead = False
    for ln in lines:
        st = ln.strip()
        if ln.startswith('L_'):
            if ln[:-1] in used:
                res.append(ln + ' ;')      # a label needs a statement after it, even before a `}`
                dead = False
            continue
        if dead and st and not st.startswith('}'):
            continue
        if st.startswith('}'):
            dead = False
        res.append(ln)
        if st.startswith('return') or (st.startswith('goto ') and not st.startswith('goto L_') is False):
            dead = st.startswith('return') or st.startswith('goto ')
    return res


def assemble(L):
    entry = L.entry
    hexe = '%08x' % entry
    void = L.eax_dead == 0xFFFFFFFF
    import re
    clean = structure(L)
    code = '\n'.join(clean)
    # declarations: what the code mentions
    words = set(re.findall(r'\b[A-Za-z_][A-Za-z0-9_]*\b', code))
    decl = []
    if 'sp0' in words or 'sp1' in words or L.guest:
        decl.append('const uint32_t sp0 = g->esp;')
    if 'sp1' in words or (L.guest and L.sp1 is not None):
        k, m = L.sp1
        decl.append('const uint32_t sp1 = (sp0 - 0x%xu) & 0x%xu;' % ((-k) & 0xFFFFFFFF, m))
    for n, src in INPUTS.items():
        if n in words:
            decl.append('const uint32_t %s = %s;' % (n, src))
    for w in sorted(words):
        if w.startswith('arg_') and re.match(r'^arg_[0-9a-f]+$', w):
            decl.append('const uint32_t %s = rd32(g->esp + 0x%su);' % (w, w[4:]))
        m = re.match(r'^xin(\d+)$', w)
        if m:
            decl.append('const double %s = ST(%s);' % (w, m.group(1)))
    vars_ = []
    for v, ty in sorted(L.decls.items()):
        if v in words and not v.startswith('in_'):
            vars_.append('%s %s;' % (ty, v))
    if L.guest:
        below = -L.min_sp_final + 4
        if L.sp1 is not None:
            below = max(below, -L.sp1[0] + ((-L.sp1[1]) & 0xFFFFFFFF) - L.min_sp1_final + 4)
        decl.append('cow_frame(g, sp0, %du);' % below)
    fn_name = 'cow_fn_%s' % hexe
    rtype = 'void' if void else 'uint32_t'
    ind = []
    for ln in vars_ + decl + [''] + clean:
        if ln.startswith('L_'):
            ind.append(ln)
        elif ln == '':
            ind.append('')
        else:
            ind.append('    ' + ln)
    fn = '%s %s(Guest* g)\n{\n%s\n}\n' % (rtype, fn_name, '\n'.join(ind).rstrip())
    # readable names for the inputs
    fn = re.sub(r'\bin_ecx\b', 'self', fn)
    fn = re.sub(r'\barg_([0-9a-f]+)\b', lambda m: 'arg%d' % ((int(m.group(1), 16) - 4) // 4 + 1)
                if int(m.group(1), 16) % 4 == 0 else m.group(0), fn)
    fn = fn.replace('rd32(g->esp + 0x', 'rd32(g->esp + 0x')
    tail_check = ('    if (g->esp > sp0)\n        return; /* left through a tail call: the callee returned for us */\n'
                  if L.has_tail else '')
    adapter = ('/* COW_ADAPTER BEGIN */\nvoid cow_adapter_%s(Guest* g)\n{\n    const uint32_t sp0 = g->esp;\n'
               '%s\n%s    g->esp = sp0;\n    rt_return(g, %s, %du);\n}\n/* COW_ADAPTER END */\n') % (
        hexe, ('    const uint32_t r = %s(g);' % fn_name) if not void else '    %s(g);' % fn_name,
        tail_check, 'r' if not void else 'g->eax', L.ret_pop)
    use = L.img.retuse.get(hexe)
    stack_args = int(use[1]) if use else 0
    label = use[0] if use else 'strict'
    head = ('/* f_0x%s - RISE UNIT. COW_OWNER: conveyor   station: rise\n\n'
            '   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.\n'
            '   Names are the machine\'s (registers, stack offsets); naming and structs come later.\n'
            '*/\n#include "cow.h"\n#include "cow_call.h"\n#include "cow_rise.h"\n\n'
            '/* COW_CONTRACT ret=%s stack_args=%d */\n') % (hexe, label, stack_args)
    return head + fn + '\n' + adapter


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--entries', default='')
    ap.add_argument('--list', default='')
    ap.add_argument('--all', action='store_true')
    ap.add_argument('--out', required=True)
    ap.add_argument('--image', default=None)
    ap.add_argument('--meta', default=None)
    ap.add_argument('--report', default='')
    ap.add_argument('--skip-list', default='', help='entries (hex, one a line) to leave alone')
    ap.add_argument('--machine-only', action='store_true', help='leave hand-written and named functions alone')
    ap.add_argument('--jobs', type=int, default=0, help='processes (default: half the logical processors, at most 16)')
    a = ap.parse_args()
    img = Image(ROOT, a.image, a.meta)
    entries = [int(x, 16) for x in a.entries.split(',') if x.strip()]
    if a.list:
        entries += [int(l.strip(), 16) for l in open(a.list) if l.strip()]
    if a.all:
        entries = sorted(img.functions)
    if a.skip_list:
        skip = {int(l.strip(), 16) for l in open(a.skip_list) if l.strip()}
        entries = [e for e in entries if e not in skip]
    if a.machine_only:
        # the hand-written units and named functions belong to their readers (ledger/functions.csv), and a
        # thunk is not a function of its own
        import csv
        have = set()
        lifted_dir = os.path.join(ROOT, 'src', 'lifted')
        if os.path.isdir(lifted_dir):
            have = {int(f[4:12], 16) for f in os.listdir(lifted_dir) if f.startswith('cow_') and f.endswith('.c')}
        ok_set = set()
        with open(os.path.join(ROOT, 'ledger', 'functions.csv'), encoding='utf-8', newline='') as fh:
            for r in csv.DictReader(fh):
                try:
                    e = int(r['entry'], 16)
                except (ValueError, KeyError, TypeError):
                    continue
                hand = r.get('status') in ('done', 'failed', 'wip', 'in_progress') or (r.get('name') or '').strip()
                if r.get('thunk') == 'true':
                    continue
                if hand and e not in have:
                    continue
                ok_set.add(e)
        entries = [e for e in entries if e in ok_set]
    os.makedirs(a.out, exist_ok=True)
    jobs = a.jobs or max(1, min(16, (os.cpu_count() or 2) // 2))
    if jobs > 1 and len(entries) > 200:
        import multiprocessing
        parts = [entries[k::jobs] for k in range(jobs)]
        with multiprocessing.Pool(jobs) as pool:
            results = pool.map(_work, [(p, a.out, a.image, a.meta) for p in parts])
        rows = {}
        for r in results:
            rows.update(r)
    else:
        rows = _work((entries, a.out, a.image, a.meta), img)
    ok = sum(1 for v in rows.values() if v == 'ok')
    why = defaultdict(int)
    for v in rows.values():
        if v != 'ok':
            k = v.replace('refused: ', '')
            why[k.split(':')[0][:60] if not k.startswith('BUG') else k[:60]] += 1
    print('lifted %d of %d' % (ok, len(entries)))
    for k, n in sorted(why.items(), key=lambda kv: -kv[1])[:40]:
        print('  %5d  %s' % (n, k))
    if a.report:
        with open(a.report, 'w') as fh:
            json.dump(rows, fh, indent=0, sort_keys=True)


def _work(job, img=None):
    entries, out, image, meta = job
    if img is None:
        img = Image(ROOT, image, meta)
    rows = {}
    for e in entries:
        try:
            text = lift(img, e)
            with open(os.path.join(out, 'cow_%08x.c' % e), 'w', newline='\n') as fh:
                fh.write(text)
            rows['%08x' % e] = 'ok'
        except Refuse as r:
            rows['%08x' % e] = 'refused: ' + str(r)
        except RecursionError:
            rows['%08x' % e] = 'refused: too deep'
        except Exception as x:   # a bug here must not stop the run; it is counted and named
            import traceback
            k = 'BUG %s: %s' % (type(x).__name__, x)
            rows['%08x' % e] = k + ' | ' + traceback.format_exc().strip().splitlines()[-2].strip()
    return rows


if __name__ == '__main__':
    main()
