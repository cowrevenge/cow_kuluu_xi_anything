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
SP2 = V('sp2')          # a guest frame whose esp differs where paths meet (an _alloca on one of them): esp is
                        # rebased there, each path setting sp2 to its own esp on the way in
VBASE2 = 0x20000000     # offsets from sp2 are kept as (off - VBASE2)
SP2BASE = -VBASE2       # the fact `esp == sp2`
VBASE = 0x10000000        # offsets from sp1 are kept as (off - VBASE) so they never meet sp0's


def frame_split(e):
    """offset from sp0 (or virtual offset from sp1) when e is a frame address, else None"""
    base, k = E.split_add(e)
    k = k if k < 0x80000000 else k - 0x100000000
    if base == SP:
        return k
    if base == SP1:
        return k - VBASE
    if base == SP2:
        return k - VBASE2
    return None


def frame_addr(off):
    if off < -(VBASE + VBASE2) // 2:
        return E.add(SP2, C(off + VBASE2))
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
            # the body by its braces: a one-line shim (`{ RET(0, 1); }`) has no closing brace on a line of
            # its own, and a lazy match to the next one swallowed the shims after it - Enter- and
            # LeaveCriticalSection read as the bodies of Delete- and TryEnterCriticalSection, so neither was
            # known and rise counted pushes for them (0x10265d00: Leave popped nothing, `pop edi` then took
            # the argument instead of the saved edi)
            for m in re.finditer(r'static void (sh_\w+)\(Guest\* g\)\s*\{', t):
                depth, k = 1, m.end()
                while depth and k < len(t):
                    depth += {'{': 1, '}': -1}.get(t[k], 0)
                    k += 1
                ns = {int(x) for x in re.findall(r'\bRET\([^;]*,\s*(\d+)\)\s*;', t[m.end():k])}
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
        self._thru = {}         # entry -> handed_through()
        self._scratch = {}      # entry -> scratch_written()
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

    def vslot_pop(self, disp):
        """what a call through slot `disp` of a vtable pops, when the image's own vtables agree on it.
        `call [edx+0x1c8]` names no callee, so its cleanup was a guess (the callee pops every word pushed
        since the last call) and a function with twenty of them could not be fitted (0x1001ee60). Every
        vtable in the image is a run of function addresses in data; the function in slot disp/4 of each run
        long enough has a known `ret N`. One count for (nearly) all of them is the count; anything else,
        no answer, and the guess and the fit go on as before."""
        if disp < 0 or disp % 4 or disp > 0x2000:
            return None
        if not hasattr(self, '_vt'):
            import struct
            img = bytes(self.prog.image)
            lo_t, hi_t = self.text[0], self.text[1] if len(self.text) > 1 else self.text[0]
            ents = self.entries
            runs, cur = [], []
            n = len(img) // 4
            words = struct.unpack('<%dI' % n, img[:4 * n])
            for i, w in enumerate(words):
                a = self.base + 4 * i
                if lo_t <= a < hi_t:
                    if cur:
                        if len(cur) >= 3:
                            runs.append(cur)
                        cur = []
                    continue
                if w in ents:
                    cur.append(w)
                else:
                    if len(cur) >= 3:
                        runs.append(cur)
                    cur = []
            if len(cur) >= 3:
                runs.append(cur)
            self._vt = runs
            self._vt_pop = {}
        k = disp // 4
        if k in self._vt_pop:
            return self._vt_pop[k]
        votes = {}
        for run in self._vt:
            if k < len(run):
                p_ = self.info(run[k]).get('pop')
                if p_ is not None:
                    votes[p_] = votes.get(p_, 0) + 1
        ans = None
        if votes:
            best = max(votes, key=lambda v: (votes[v], -v))
            tot = sum(votes.values())
            if votes[best] >= 2 and votes[best] * 2 > tot:
                ans = best
        self._vt_pop[k] = ans
        return ans

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
        if r.get('pop') is None:
            d = self.dispatch_default(entry)
            if d is not None and d != entry:
                # `jmp dword ptr [slot]` through a table the image fills at start-up (the D3DX math table:
                # 0x102d7d56 jumps through 0x103cc4a8): what the callee does is what the function the table
                # starts with does. Every entry it may later hold implements the same call. Unknown, the cleanup
                # was guessed from the caller's pushes, and a register save pushed before them counted as a
                # third argument (0x102d9f24: callee-saved edi)
                r = dict(self.info(d, depth + 1))
        if self._cuts == cuts0:
            self._info[entry] = r
        elif depth == 0:
            self._top[entry] = r
        return r

    def probe_returns_its_address(self, entry):
        """a stack probe that ends `mov ecx, [eax]; mov eax, [eax + 4]; push eax; ret` (MSVC __chkstk): eax
        comes back as the call's return address, ecx as it went in"""
        ins = self.decode(entry).insns
        tail = [(i.mnemonic, i.op_str.replace(' ', '')) for i in ins[-4:]]
        return tail == [('mov', 'ecx,dwordptr[eax]'), ('mov', 'eax,dwordptr[eax+4]'), ('push', 'eax'), ('ret', '')]

    def dispatch_default(self, entry):
        """the function a `jmp dword ptr [slot]` thunk reaches before anything rewrote the slot: the slot's
        word in a table that start-up code copies in with `rep movsd` (esi = the defaults, edi = the table), or
        None when the thunk is not one of those"""
        try:
            b = bytes(self.prog.image[entry - self.base:entry - self.base + 13])
        except Exception:
            return None
        # the table's first-use stub is `push 1; call <fill the table>; jmp dword ptr [slot]` (0x102d6f16): the
        # filler cleans its own argument, so what the stub does is what the slot's function does
        if len(b) >= 13 and b[0] == 0x6A and b[2] == 0xE8 and b[7] == 0xFF and b[8] == 0x25:
            filler = (entry + 7 + int.from_bytes(b[3:7], 'little', signed=True)) & 0xFFFFFFFF
            if filler not in self.functions or self.info(filler).get('pop') != 4:
                return None
            b = b[7:]
        if len(b) < 6 or b[0] != 0xFF or b[1] != 0x25:
            return None
        slot = int.from_bytes(b[2:6], 'little')
        if slot in self.iat:
            return None
        for src, dst, n in self.table_copies():
            if dst <= slot < dst + 4 * n and (slot - dst) % 4 == 0:
                d = self.u32(src + slot - dst)
                return d if d in self.functions else None
        return None

    def table_copies(self):
        """(source, destination, dwords) of every `rep movsd` whose esi, edi and ecx are constants set just
        before it: `mov esi, imm` / `mov edi, imm` (or `mov ebx, imm` ... `mov edi, ebx`) / `push n; pop ecx`
        or `mov ecx, imm`"""
        got = getattr(self, '_table_copies', None)
        if got is not None:
            return got
        import re as _re
        got = []
        lo, hi = self.text
        img = bytes(self.prog.image[lo - self.base:hi - self.base])
        for m in _re.finditer(b'\xf3\xa5', img):
            w = img[max(0, m.start() - 32):m.start()]
            regs = {}
            k = 0
            while k < len(w):
                op = w[k]
                if 0xB8 <= op <= 0xBF and k + 5 <= len(w):
                    regs[op - 0xB8] = int.from_bytes(w[k + 1:k + 5], 'little')
                    k += 5
                    continue
                if op == 0x6A and k + 3 <= len(w) and w[k + 2] == 0x59:
                    regs[1] = w[k + 1]
                    k += 3
                    continue
                if op == 0x8B and k + 2 <= len(w) and w[k + 1] == 0xFB and 3 in regs:
                    regs[7] = regs[3]          # mov edi, ebx
                    k += 2
                    continue
                k += 1
            if 6 in regs and 7 in regs and 1 in regs and 0 < regs[1] <= 0x400:
                got.append((regs[6], regs[7], regs[1]))
        self._table_copies = got
        return got

    def scratch_written(self, entry):
        """which of eax, ecx, edx `entry` may write: its own instructions and those of the functions it calls
        (a call through a pointer, to an import or out of every function writes all three)"""
        r = self._scratch.get(entry)
        if r is not None:
            return r
        ALL = frozenset(('eax', 'ecx', 'edx'))
        self._scratch[entry] = ALL                  # a function that reaches itself: not known
        out = set()
        ft = self.decode(entry)
        if not ft.insns:
            return ALL
        for i in ft.insns:
            if out == ALL:
                break
            if i.mnemonic == 'call' or (i.mnemonic == 'jmp' and i.operands and i.operands[0].type == X.X86_OP_IMM
                                        and not (ft.insns[0].address <= (i.operands[0].imm & 0xFFFFFFFF)
                                                 <= ft.insns[-1].address)):
                t = i.operands[0].imm & 0xFFFFFFFF if i.operands[0].type == X.X86_OP_IMM else None
                if t is None or t not in self.functions:
                    out = set(ALL)
                else:
                    out |= self.scratch_written(t)
                continue
            if i.mnemonic == 'jmp' and i.operands and i.operands[0].type != X.X86_OP_IMM:
                out = set(ALL)                      # a jump through a pointer or a table: where to is not asked
                continue
            try:
                _rr, ww = i.regs_access()
            except Exception:
                out = set(ALL)
                continue
            for r_ in ww:
                n = i.reg_name(r_)
                if n in SUB and SUB[n][0] in ALL:
                    out.add(SUB[n][0])
        r = self._scratch[entry] = frozenset(out)
        return r

    def handed_through(self, entry):
        """the registers `entry` reads of its caller's, counting its own instructions and the callees it calls
        before it has written anything (see entry_reads)"""
        r = self._thru.get(entry)
        if r is None:
            self._thru[entry] = set()               # a function that reaches itself adds nothing
            r = self._thru[entry] = entry_reads(self, entry, 0, light=True)
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
        # A BODY THAT RUNS OFF ITS END INTO THE NEXT FUNCTION returns through that one: 0x10312ce9 is `lea edx,
        # [esp + 0xc]; call 0x1031b1c5` and then 0x10312cf2's first instruction (two entries of one routine,
        # the CRT's pow). With no `ret` and no jump of its own it was taken for a function that never returns,
        # and every unit that calls it had rt_fatal("no way on") behind the call, where the original goes on to
        # `fmul` (0x102beba8, 0x102c20d9: `fault` in the first state through). The next entry is its tail.
        if ins and ins[-1].mnemonic not in ('ret', 'jmp', 'int3'):
            nxt_ = ins[-1].address + ins[-1].size
            if nxt_ in self.entries and nxt_ != entry and nxt_ not in ft.addrs:
                tails.append(nxt_)
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
        longjmp = False
        if any(i.mnemonic == 'mov' and len(i.operands) == 2 and i.operands[0].type == X.X86_OP_REG
               and i.reg_name(i.operands[0].reg) == 'esp' and i.operands[1].type == X.X86_OP_MEM for i in ins) and \
                any(i.mnemonic == 'jmp' and i.operands and i.operands[0].type != X.X86_OP_IMM for i in ins):
            # longjmp: esp loaded from a buffer, then a jump through it - it never comes back to its caller
            # (0x103161a8: the `ret` after the jump is dead padding, and the path after the call set ebp to
            # "clobbered" and broke the caller's frame: 0x10253ae0)
            noreturn, pop = True, None
            longjmp = True
        reads = entry_reads(self, entry, depth)
        xdelta = callee_xdelta(self, entry, depth)
        nargs = callee_nargs(ins, entry)
        va = callee_va(ins, entry)
        flags_in = callee_reads_flags(ins, entry)
        helper = frame_helper(ins)
        clobbers = callee_clobbers(self, ins, tails, depth)
        xtakes = callee_xtakes(self, entry)
        return {'pop': pop, 'noreturn': noreturn, 'probe': probe, 'reads': reads, 'xdelta': xdelta, 'xtakes': xtakes,
                'helper': helper, 'nargs': nargs, 'va': va, 'flags_in': flags_in, 'clobbers': clobbers,
                'longjmp': longjmp}


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
    address order with esp and an ebp frame tracked); None when the walk loses the stack.

    THREE THINGS IT GOT WRONG. (1) the sign: `[esp + K]` after pushes that moved esp by d is entry + d + K, and
    it took K - d, so every push before the read counted as two more arguments (a function that reads one
    argument after `push ebp; mov ebp, esp` came out as three; of 157 functions whose own `ret N` says the
    count it was right for 58 and over for 77). (2) the size: `fld qword ptr [ebp + 0x10]` reads two words.
    (3) it stopped at the first jump, where esp is no longer followed - but in a function with a frame
    pointer the arguments are at [ebp + 8] on every path, so there the walk goes on to the end. With the three
    0x102c7f2d (`f(a, b, double)`) reads 4 words: its signature says 3 parameters, its caller was handed the
    low half of the double, and the high half was whatever lay on the stack (0x102c8522: `fault`)."""
    d = 0
    ebp = None
    most = 0
    lost = False                # esp is not followed any more (a jump or a call went by)
    for i in ins:
        if i.address < entry:
            continue
        mn = i.mnemonic
        for op in i.operands:
            if op.type == X.X86_OP_MEM and not op.mem.index:
                base = i.reg_name(op.mem.base) if op.mem.base else ''
                off = None
                if base == 'esp' and not lost:
                    off = op.mem.disp + d
                elif base == 'ebp' and ebp is not None:
                    off = op.mem.disp + ebp
                if off is not None and off >= 4:
                    size = 4 if mn == 'lea' else max(1, int(op.size or 4))
                    most = max(most, (off - 4 + size + 3) // 4)
                if base == 'esp' and mn == 'lea' and not lost:
                    return None
        if lost:
            # only the frame pointer is followed now: the walk ends where something else is put in it
            if mn in ('mov', 'lea', 'xor', 'add', 'sub', 'xchg') and i.operands and \
                    i.operands[0].type == X.X86_OP_REG and i.reg_name(i.operands[0].reg) == 'ebp':
                return most if most else None
            continue
        if mn == 'push':
            d -= 4
        elif mn == 'pop':
            d += 4
        elif mn in ('sub', 'add') and i.op_str.replace(' ', '').startswith('esp,') and i.operands[1].type == X.X86_OP_IMM:
            d += -i.operands[1].imm if mn == 'sub' else i.operands[1].imm
        elif mn == 'mov' and i.op_str.replace(' ', '') == 'ebp,esp':
            ebp = d
        elif mn == 'ret':
            if ebp is None:
                return most
            lost = True
        elif mn == 'jmp' or mn.startswith('j') or mn == 'call':
            # the walk ends before the function does: what it saw is a lower bound, not the count
            if ebp is None:
                return most if most else None
            lost = True
        elif i.operands and i.operands[0].type == X.X86_OP_REG and i.reg_name(i.operands[0].reg) in ('esp',):
            if ebp is None:
                return None
            lost = True
    return most


def callee_va(ins, entry):
    """does a function take the address of an argument word (`lea eax, [ebp + 0xc]`: va_start, or a pointer to
    a parameter handed on)? What it reads through that address its own instructions do not show."""
    d = 0
    ebp = None
    for i in ins:
        if i.address < entry:
            continue
        mn = i.mnemonic
        if mn == 'lea' and len(i.operands) == 2 and i.operands[1].type == X.X86_OP_MEM and not i.operands[1].mem.index:
            m_ = i.operands[1].mem
            base = i.reg_name(m_.base) if m_.base else ''
            if (base == 'ebp' and ebp is not None and m_.disp + ebp >= 4) or \
                    (base == 'esp' and d is not None and m_.disp + d >= 4):
                return True
        if d is None:
            continue
        if mn == 'push':
            d -= 4
        elif mn == 'pop':
            d += 4
        elif mn in ('sub', 'add') and i.op_str.replace(' ', '').startswith('esp,') and i.operands[1].type == X.X86_OP_IMM:
            d += -i.operands[1].imm if mn == 'sub' else i.operands[1].imm
        elif mn == 'mov' and i.op_str.replace(' ', '') == 'ebp,esp':
            ebp = d
        elif mn in ('ret', 'jmp', 'call') or \
                (i.operands and i.operands[0].type == X.X86_OP_REG and i.reg_name(i.operands[0].reg) == 'esp'):
            # (a conditional jump is walked past: the code after it runs with the esp it had,
            # 0x10317e25 `jle done; push esi; lea esi, [esp + 0x10]`)
            if ebp is None:
                return False
            d = None            # esp is not followed any more; the frame pointer is
    return False


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


def x87_reads(ins):
    """the deepest x87 stack slot an instruction reads, counted from the top (0 = st(0)); -1 when none"""
    if x87_op(ins) is None:
        return -1
    op, modrm = x87_op(ins)
    deep = 0
    for o in ins.operands:
        if o.type == X.X86_OP_REG:
            m_ = re.match(r'^st\((\d)\)$', ins.reg_name(o.reg) or '')
            if m_:
                deep = max(deep, int(m_.group(1)))
    mn = ins.mnemonic
    if mn in ('fld', 'fild', 'fbld', 'fldz', 'fld1', 'fldpi', 'fldl2t', 'fldl2e', 'fldlg2', 'fldln2',
              'fldcw', 'fnstcw', 'fstcw', 'fnstsw', 'fstsw', 'fnclex', 'fclex', 'fninit', 'finit', 'fwait',
              'wait', 'fnop', 'ffree', 'fincstp', 'fdecstp', 'fnstenv', 'fldenv', 'fnsave', 'frstor'):
        return deep if (mn == 'fld' and any(o.type == X.X86_OP_REG for o in ins.operands)) else -1
    if mn in ('faddp', 'fsubp', 'fsubrp', 'fmulp', 'fdivp', 'fdivrp', 'fcompp', 'fucompp', 'fyl2x', 'fyl2xp1',
              'fpatan', 'fprem', 'fprem1', 'fscale') and not any(o.type == X.X86_OP_REG for o in ins.operands):
        deep = max(deep, 1)
    return deep


def callee_xtakes(img, entry):
    """how many x87 values a function reads from its caller's stack, along its first path: _CIpow's
    `fxch st(1)` reads two. None when the walk cannot say."""
    ci = cintrin(img, entry)
    if ci is not None:
        return ci[1]
    ft = img.decode(entry)
    d, need = 0, 0
    for i in ft.insns:
        if i.mnemonic == 'ret' or i.mnemonic.startswith('j') or i.mnemonic == 'call':
            break
        r = x87_reads(i)
        if r >= 0:
            need = max(need, r + 1 - d)
        d += x87_delta(i)
        need = max(need, -d)
    return need


CINTRIN_HEAD = bytes.fromhex('558bec81c430fdffff539bd9bd5cffffff')   # MSVC's _cintrindisp1/2 (judge2._cintrin)


def cintrin(img, entry):
    """(x87 delta, values taken) for the CRT's x87 intrinsic dispatchers, followed through `mov edx, T; jmp D`
    (judge2._cintrin says why); None for anything else"""
    try:
        head = img.read(entry, 32)
    except Exception:
        return None
    if head[:1] == b'\xba' and head[5:6] == b'\xe9':          # mov edx, imm32; jmp rel32
        entry = (entry + 10 + int.from_bytes(head[6:10], 'little', signed=True)) & 0xFFFFFFFF
        try:
            head = img.read(entry, 32)
        except Exception:
            return None
    if not head.startswith(CINTRIN_HEAD):
        return None
    body = img.read(entry, 0x40)
    return (-1, 2) if b'\xd9\xc9' in body else (0, 1)      # fxch st(1): the two-operand one


def callee_xdelta(img, entry, depth):
    """the x87 depth a function leaves (+1 a float return, -1 _ftol), along its first path to a ret"""
    ci = cintrin(img, entry)
    if ci is not None:
        return ci[0]
    ft = img.decode(entry)
    by = {i.address: i for i in ft.insns}
    order = [i.address for i in ft.insns]
    nxt = {order[k]: order[k + 1] for k in range(len(order) - 1)}
    # icd: the depth at the last call through a pointer that has not been counted yet. The ABI lets such a
    # callee leave 0 values or 1 (a float result), nothing else; when the code after it takes a value below
    # that depth, the call left one (`call [edx+0x98]; fstp [edi+0x434]`, 0x100abea0: three float getters
    # read off a vtable, and the function was "unknown" to every caller and to the judge's stub table)
    work = [(entry, 0, False, None, False)]
    seen = set()
    while work:
        pc, d, ind, icd, neg = work.pop()
        while pc in by:
            if (pc, d) in seen or len(seen) > 20000:
                break
            if d > 8 or d < -8:
                break
            seen.add((pc, d))
            i = by[pc]
            mn = i.mnemonic
            d += x87_delta(i)
            if icd is not None and d < icd:
                d, icd = d + 1, None
            neg = neg or (ind and d < 0)
            if mn == 'ret':
                # a call through a pointer counted as 0. The ABI: a function leaves 0 values or 1 (a float), so a
                # path that never went below 0 after such a call and ends at 0 or 1 is that count; anything else
                # may be the call's doing. judge2.x87_delta, the same rule: the harness answers a stubbed call
                # with ITS count, and a lift built on another one is off by one from there on (0x100aaef0:
                # `call [eax+0x1c8]` then a float result, None here and 1 there; 0x100a6240 solved it as 0 and
                # every fnstsw after it read TOP one too high)
                return None if (ind and (neg or d not in (0, 1))) else d
            if mn == 'call':
                if i.operands[0].type != X.X86_OP_IMM:
                    ind, icd = True, d
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
                work.append((i.operands[0].imm & 0xFFFFFFFF, d, ind, icd, neg))
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


def entry_reads(img, entry, depth, light=False):
    """registers a function reads before it writes them (a light walk of its CFG, calls included).
    light: only what its own instructions read, and the callees it hands its registers through to"""
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
                # A FUNCTION THAT CALLS ON BEFORE IT HAS WRITTEN A REGISTER HANDS ITS CALLER'S REGISTERS THROUGH.
                # `lea ecx, [eax + 8]; call 0x10035290` reaches `push 0; call 0x10035270`, that one starts with
                # `call 0x10035250`, and that one with `call 0x10035210`, where `this` is read at last. What a
                # callee reads is asked two calls deep and no further, and behind that a call read nothing: the
                # unit called 0x10035290 with no `this` (0x10023bd0: `cow_stdcall(g, 0x10035290, 0)`, and the
                # callee read a field of whatever ecx held: `fault`). Such a call is the same level, not one
                # deeper (a function that reaches itself this way is stopped by info()).
                # The walk of a callee is cut for what it costs and for what it would guess (a call through a
                # pointer is taken to read ecx and edx). What is followed without a limit is only this: the
                # calls made with nothing written yet, and in them the registers an instruction reads.
                thru = t is not None and t in img.functions and not (written - {'esp'})
                if light:
                    sub = img.handed_through(t) if thru else set()
                elif t is not None and t in img.functions and img.deeper(depth, 2):
                    sub = img.info(t, depth + 1)['reads']
                else:
                    sub = {'ecx', 'edx'} if t is None else set()
                if thru and not light:
                    sub = set(sub) | img.handed_through(t)
                for r in sub:
                    if r not in written:
                        out.add(r)
                # A FRAME HELPER LEAVES THE REGISTERS IT DOES NOT USE. `mov eax, handler; call __EH_prolog;
                # push ecx; ... mov esi, ecx` is how every method with an exception frame begins, and the
                # helper works in eax alone: the `this` in ecx is the caller's. A call was taken to spend
                # eax, ecx and edx whatever it called, so such a method read no ecx, and a unit that calls
                # it did not hand `this` over (0x102da910: `cow_stdcall(g, 0x102ea7f9, 0)` for `lea ecx,
                # [ebp-0x3f4]; call 0x102ea7f9`; the constructor wrote through whatever ecx held: `fault`).
                spent = {'eax', 'ecx', 'edx'}
                if t is not None and t in img.functions:
                    hb = frame_helper(img.decode(t).insns)
                    if hb is not None:
                        wr_ = set()
                        for j in hb:
                            try:
                                _rr, ww_ = j.regs_access()
                            except Exception:
                                ww_ = []
                                wr_ = {'eax', 'ecx', 'edx'}
                            for r in ww_:
                                n = j.reg_name(r)
                                if n in SUB:
                                    wr_.add(SUB[n][0])
                        spent = spent & (wr_ | {'eax'})
                    elif not light and img.deeper(depth, 2) and img.info(t, depth + 1)['probe']:
                        # and so does the stack probe (`mov eax, N; call __chkstk`): it saves ecx and puts
                        # it back, and has no use for edx
                        spent = {'eax'}
                    else:
                        # and a callee that writes none of them leaves them all: `push edi; call 0x10043de0;
                        # mov edx, eax; shl edx, 5; add edx, ecx` is how 0x10044010 begins, and 0x10043de0 is
                        # `xor eax, eax; ret`. The `this` in ecx is read after that call, and a unit that
                        # calls 0x10044010 did not hand it over (0x1003ebf0: `cow_stdcall(g, 0x10044010, 1,
                        # t1)` for `mov ecx, [0x1047bba8]; push eax; call 0x10044010`; the callee stored
                        # through whatever ecx held: `memory`)
                        spent = spent & img.scratch_written(t)
                written = written | spent
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
                    if t in img.functions and not light and img.deeper(depth, 2):
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


E_TAGS = frozenset(('v', 'c', 'raw', 'bin', 'un', 'zx', 'sx', 'ld', 'ldf', 'ite', 'fn', 'dbin', 'dcmp', 'dun', 'cvt'))
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
        if mn == 'call' and k + 1 < len(ins):
            # RETURN SITES ARE BLOCKS (judge 17): the instruction after a call is where a state can start. A
            # site after a call no state could reach - the callee faulted in the judge's world, or never
            # returned what the path needs - was out of reach for good: block entry starts states at blocks,
            # and the return site was the middle of one. 181 of 517 unreached runs in the bench began there.
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
    # a call to a function that never returns (no `ret` anywhere; a longjmp) ends the path there: the
    # recompiler's blocks run on after it, into a frame the callee broke (0x102bc97e, 0x10253ae0)
    for b in blocks.values():
        for k, i in enumerate(b.ins):
            if i.mnemonic == 'call' and i.operands and i.operands[0].type == X.X86_OP_IMM and \
                    (i.address in NORET_CALLS or img.info(i.operands[0].imm & 0xFFFFFFFF).get('noreturn')):
                if k + 1 < len(b.ins) or b.succ:
                    b.ins = b.ins[:k + 1]
                    b.term = ('end',)
                    b.succ = []
                break
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
        self.esc = ESCAPED.setdefault(entry, set())
        self.ptr_regs = set()
        import time
        self.t_start = time.time()
        self.choices = {}
        self.use_vslots = False         # scan_fitted: the vtables' cleanup, second attempt only
        self.allow_rebase = False       # scan_fitted: esp rebased where paths meet, last attempt only
        self.use_saves = False          # scan_fitted: register saves are not arguments (count_args)
        self.pushed_saved = {}          # frame offset -> callee-saved registers pushed there
        self.save_slots = set()         # offsets a register was pushed to and popped back from (count_args)
        self.sp1 = None

    # ------------------------------------------------------------------ the run
    def run(self, mode, live_after=None, entry_facts=None, forced_vars=None):
        self.mode = mode
        self.uses = defaultdict(set)
        self.defs = defaultdict(set)
        self.live_after = live_after or {}
        self.forced = forced_vars or set()      # (block, key) that must be a variable at block entry
        self.facts = entry_facts if entry_facts is not None else {}
        self.facts_src = {}
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
            if off < -(VBASE + VBASE2) // 2:
                pass                    # below sp2: memory the guest stack already has
            elif off < -VBASE // 2:
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
        if self.guest and E.value_vars(e) & {'sp0', 'sp1'}:
            # in a guest frame it may, and whoever has it can write the frame from there up (see call)
            self.esc.add(frame_split(e))

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

    def store(self, addr, bits, val, kind='u', when=None):
        """`when`: the store is made only where this holds (a shift of memory by a count that may be 0)"""
        off = self.stack_off(addr)
        if off is not None:
            self.slot_write(off, bits // 8, kind, val)
            return
        self.check_value(addr, 'frame address used in arithmetic')
        self.check_value(val, 'frame address stored to memory')
        self.forget_frame(addr)         # on the address as both passes see it (a temp is emit's alone)
        self.flush('M', also_val=val)
        val, addr = self.rebound(val), self.rebound(addr)
        if kind == 'f' and val[0] == 'cvt' and val[1] == 'd2f':
            val = val[2]
        if self.mode == 'emit':
            P = self.pr
            if kind == 'u' and when is not None:
                self.out.append('if (%s) wr%d(%s, %s);' % (P.p(self.rebound(when)), bits, P.p(addr),
                                                         P.p(E.zx(bits, val) if bits < 32 else val)))
            elif kind == 'u':
                self.out.append('wr%d(%s, %s);' % (bits, P.p(addr), P.p(E.zx(bits, val) if bits < 32 else val)))
            elif kind == 'f':
                self.out.append('wrf32(%s, (float)%s);' % (P.p(addr), P.p(val, 11)))
            elif kind == 'd':
                self.out.append('wrf64(%s, %s);' % (P.p(addr), P.p(val)))
            elif kind == 't':
                self.out.append('wrf80(%s, %s);' % (P.p(addr), P.p(val)))
            elif kind == 'q':
                self.out.append('wr64(%s, (uint64_t)%s);' % (P.p(addr), P.p(val, 11)))

    def forget_frame(self, addr):
        """a store through a pointer in a unit whose frame is guest memory. Such a unit has let a frame address
        out (that is why it has a guest frame), so the pointer may land on any frame word, and nothing held of
        one is known after it: the next read of a word comes from memory. Keeping them read a word the store
        had changed (0x10171930: a loop writes 4x4 matrices through `ebp = esp + ecx + 0x68` and the next loop
        multiplied by the constants the frame held before it, where the original read the new floats)."""
        if not self.guest or not E.vars_of(addr):
            return
        for o in list(self.st.s):
            del self.st.s[o]

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
        if w >= 4 and off + size <= w + 4 and kind == 'u' and not (self.guest and self.esc) and not any(
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
        if self.guest and self.mode == 'emit' and not self.push_only:
            # A VALUE STILL READING THIS WORD reads it before the store, as the instruction that loaded it did
            # (`mov ecx, [esp+0x10]` ... `mov [esp+0x10], eax` ... `[ecx*4 + table]`): a value that came out of
            # the frame as a load of guest memory (the word was the callee's to fill) is held in a temp now
            mine = {frame_addr(o) for o in range(off - 7, off + size)}
            self.flush('M', also_val=val,
                       hit=lambda e: e[2] in mine and any(off - e[1] // 8 < o < off + size
                                                          for o in range(off - 7, off + size) if frame_addr(o) == e[2]))
            val = self.rebound(val)
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
    def flush(self, dep, also_val=None, hit=None):
        """before a statement that changes what `dep` reads ('M' memory, 'F' the control word, 'G' g):
        every live value still waiting on it is put in a temp now. hit: only the loads it says yes to"""
        if self.mode != 'emit':
            return
        memo = self.bound = {}

        want = set(dep)

        def bind(e):
            d = E.deps(e)
            if not (want & d):
                return e
            t = e[0]
            if hit is not None and t in ('ld', 'ldf') and not hit(e):
                return (t, e[1], bind(e[2])) + tuple(e[3:])
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

    def flush_vars(self, names):
        """before a statement that writes the C variables `names` in the middle of a block (a string loop, a
        verbatim instruction): every value the state still holds that reads one of them gets a copy of it
        first. A register is a C variable only up to its next write: `mov edx, ecx` before `repne scasb` stayed
        `edx = ~ecx`, and after the loop that read the count the loop left behind (0x10236fe0: strcat copied
        three bytes where the original copied one). The values about to be assigned to those variables go
        through the same copies, so the assignments before the loop can be made in any order."""
        if self.mode != 'emit':
            return
        names = set(names)
        snap = {}

        def sub(e):
            vs = E.vars_of(e) & names
            if not vs:
                return e
            for v in sorted(vs):
                if v not in snap:
                    tv = self.new_temp('u')
                    self.out.append('%s = %s;' % (tv[1], v))
                    snap[v] = tv
            return E.subst(e, {v: snap[v] for v in vs})
        st = self.st
        for r in GPR:
            if r in st.r and st.r[r] != V(r):          # a register its own variable still holds needs no copy
                st.r[r] = sub(st.r[r])
        done = set()
        for f in FLAGS:
            v = st.f.get(f)
            if v is None:
                continue
            if v[0] == 'lazy':
                rec = v[2]
                if id(rec) in done:
                    continue
                nrec = tuple(sub(x) if isinstance(x, tuple) and x and x[0] in E_TAGS else x for x in rec)
                if nrec != rec:
                    for g_ in FLAGS:
                        if st.f.get(g_) is not None and st.f[g_][0] == 'lazy' and st.f[g_][2] is rec:
                            st.f[g_] = ('lazy', g_, nrec)
                            st.frec[g_] = nrec
                    done.add(id(nrec))
                done.add(id(rec))
            elif v != V(f):
                st.f[f] = sub(v)
        for off in list(st.s):
            s = st.s[off]
            ns = sub(s.e)
            if ns is not s.e:
                st.s[off] = Slot(s.size, s.kind, ns)
        st.x = [sub(x) for x in st.x]
        if st.fsw is not None:
            st.fsw = (sub(st.fsw[0]), sub(st.fsw[1]), st.fsw[2])

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
            if self.mode == 'emit' and 'M' in E.deps(v):
                # THE VALUE IS READ ONCE, BEFORE THE WRITE. The flags of `dec dword ptr [ebp + 0x1c]` are set
                # after its store, and their record held the load itself: the `jne` read the word again and
                # compared the new value (0x10325fe2: `if (rd32(sp0 + 0x18) != 1)` after the decrement ran
                # the loop one round short)
                tv = self.new_temp(E.kind_of(v))
                self.out.append('%s = %s;' % (tv[1], self.pr.p(v)))
                v = tv
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
            if s.type == X.X86_OP_REG and ins.reg_name(s.reg) in CALLEE_SAVED:
                self.pushed_saved.setdefault(self.esp_off(), set()).add(ins.reg_name(s.reg))
                if ins.address in self.save_pushes():
                    self.save_slots.add(self.esp_off())
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
            if d.type == X.X86_OP_REG and ins.reg_name(d.reg) in self.pushed_saved.get(self.esp_off(), ()):
                self.save_slots.add(self.esp_off())     # pushed from and popped into the same register
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
        self.flush_vars(set(regs) | {f for f in flags if f != 'df'})
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
            # the guest's callee-saved registers are the caller's until the lift's own epilogue: an
            # instruction carried over verbatim goes through them (`cpuid` sets g->ebx) and puts them back after
            # (0x102ca6b0 returned with cpuid's ebx where the original had popped the caller's)
            keep = [r for r in ('ebx', 'esi', 'edi', 'ebp') if re.search(r'\bg->%s\s*=[^=]' % r, body)]
            if keep:
                body = '%s %s %s' % (' '.join('uint32_t keep_%s = g->%s;' % (r, r) for r in keep), body,
                                     ' '.join('g->%s = keep_%s;' % (r, r) for r in keep))
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
        guarded = None
        if d.type == X.X86_OP_MEM and cnt[0] != 'c' and mn in ('shl', 'sal', 'shr', 'sar'):
            ga = self.address(ins, d)
            if self.stack_off(ga) is None:
                guarded = ga
        if guarded is not None:
            # A SHIFT OF MEMORY BY A COUNT OF 0 DOES NOT TOUCH THE MEMORY in the original's translation (`c =
            # cl & 31; if (c) { a = rd8(A); ...; wr8(A, r); }`). The unit read the byte and wrote it back
            # whatever the count: where the pointer is no memory and the count is 0 the original runs on
            # and the unit faults (0x102beba8, `shr byte ptr [esi], cl` three times a round with all three
            # counts 0 and [ebx+0x114] unset: `fault` in one state of 2000), and where it is memory the
            # unit makes a store the original does not. Read and written only when the count is not 0.
            nz0 = E.cmp('!=', cnt, C(0))
            self.check_value(ga, 'frame address used in arithmetic')
            a = E.ite(nz0, E.ld(bits, ga), C(0))
            if self.mode == 'emit':
                tv = self.new_temp('u')
                self.out.append('%s = %s;' % (tv[1], self.pr.p(a)))
                a = tv
            w = (lambda val: self.store(guarded, bits, val, when=nz0))
        else:
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
        if kind in ('movs', 'stos'):
            self.forget_frame(V('edi'))         # the loop writes through edi: it may be a frame address
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
        self.flush_vars(set(regs) | set(writes) | (set(FLAGS) if kind in ('scas', 'cmps') else set()))
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
        if self.st.xd == 8 and self.mode == 'emit':
            # THE EIGHTH VALUE SITS IN THE CALLER'S st(0). A function that fills all eight registers (the
            # matrix builders: 0x1016cc50, 0x1016d580, 0x1016c5d0, 0x102d745b, 0x102f4473) pushes its eighth
            # value into the register the stack began at, and the original leaves what it last held there
            # when it comes back with the stack as it found it. The unit keeps its values in locals and left
            # that register alone: every such function FAILed `st0` on the first state that took the deep
            # path (15 functions with no unit, 0.29% of the code). What the eighth value is when it is popped
            # is what stays in the register, so it is written there.
            self.out.append('g->st[g->top & 7u] = %s;' % self.pr.p(v))
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
        if op == 0xDB and modrm == 0xE2:
            return      # fnclex: the exception flags, which nothing here models or reads back (fnstsw gives C0-C3)
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
        return float_after(self.blocks, b, b.ins.index(ins))

    def saved_by_original(self):
        """the callee-saved registers the original saves and restores itself (`push esi` ... `pop esi`), when it
        also calls something: their value at `ret` is the original's own doing, not the callees' good manners"""
        if getattr(self, '_saved_regs', None) is None:
            pushed, popped, calls = set(), set(), False
            for b in self.blocks.values():
                for i in b.ins:
                    if i.mnemonic == 'call':
                        calls = True
                    elif i.mnemonic in ('push', 'pop') and i.operands and i.operands[0].type == X.X86_OP_REG:
                        (pushed if i.mnemonic == 'push' else popped).add(i.reg_name(i.operands[0].reg))
            self._saved_regs = (pushed & popped) if calls else set()
        return self._saved_regs

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
                # __chkstk leaves eax holding its own return address (`mov eax, [eax + 4]; push eax; ret`):
                # `mov ax, word ptr [edi]` after it keeps those upper 16 bits, and they went out as an argument
                # (0x1031a1c2: A passed 0x1031ffff where the lift passed 0x0000ffff)
                if not self.img.probe_returns_its_address(tgt):
                    raise Refuse('stack probe that leaves eax unknown')
                self.set('eax', E.img(nxt))
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
            ax = self.cleanup_after(ins)
            if ax is not None and ax.operands[1].type == X.X86_OP_IMM:
                # `add esp, N` after the call, with nothing between that moves or reads esp (`call [ecx+4];
                # mov eax, [ebp+0x1c]; ...; add esp, 0x14`: 0x1030555f): the caller cleans
                guess = 'caller'
            elif nx is not None and nx.mnemonic == 'pop' and nwritten and nx.operands[0].type == X.X86_OP_REG and \
                    nx.reg_name(nx.operands[0].reg) in ('ecx', 'edx', 'eax'):
                guess = 'caller'
            if not nwritten:
                guess = 'callee'
            cleaned = ax is not None and ax.operands[1].type == X.X86_OP_IMM and nwritten \
                and (ax.operands[1].imm & 0xFFFFFFFF) == 4 * nwritten
            if not cleaned and self.use_vslots and op.type == X.X86_OP_MEM and op.mem.base and not op.mem.index:
                # (an `add esp, N` that takes off exactly what this call pushed says the caller cleans, whatever
                # other classes' methods at this slot pop)
                vp = self.img.vslot_pop(op.mem.disp)
                if vp is not None and vp <= 4 * max(nwritten, min(16, max(0, -E0 // 4))):
                    guess = vp                  # what the image's vtables pop at this slot
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
            if p is not None and not (info and info.get('va') and n > p):
                # the callee says how many it reads; words pushed beyond them belong to a later call
                # (deferred cleanup). Not a callee that takes the address of its arguments (va_start): what
                # it reads through that its body does not say, and it gets every word pushed since the
                # last call.
                if p <= n or E0 + 4 * p <= 0:
                    n = p
            # ... UNLESS THE CALLER SAYS IT PUSHED MORE FOR THIS ONE: `push [0x103d0740]; push edi; push
            # [0x103d073c]; push 3; push [0x103d0734]; call 0x10317e25; ...; add esp, 0x14` hands five words to
            # a variadic callee whose own body reads four (the count, then a loop over the rest). The fifth
            # was never put on the guest's stack and the callee took what lay there for a string
            # (0x10317c51: `fault`). What the caller takes off after the call, it pushed for it: those words
            # go, as far as this function wrote them.
            ax = self.cleanup_after(ins)
            if ax is not None and ax.operands[1].type == X.X86_OP_IMM:
                c_ = (ax.operands[1].imm & 0xFFFFFFFF) // 4
                if n < c_ <= nwritten:
                    n = c_
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
        if self.mode == 'scan':
            # AN ARGUMENT'S ADDRESS HANDED TO THE CALLEE (`lea edx, [esp + 0x10]; push edx; call`): the callee
            # may write the caller's argument words through it (0x10252c50 passes &arg1 to 0x102702b0 and then
            # tests a bit of arg1), so those words are memory from now on, not the value they came in with.
            # The words from that address on are taken as written (a struct may span several).
            for v in list(args) + list(regv.values()) + [self.st.r.get(r) for r in GPR]:
                try:
                    base, k = E.split_add(v) if v is not None else (None, 0)
                except Exception:
                    continue
                if base == V('sp0') and isinstance(k, int):
                    k &= 0xFFFFFFFF
                    if 4 <= k < 0x400:
                        for w in range(k - k % 4, min(k - k % 4 + 0x40, 0x400), 4):
                            self.args_written.add((w, 4))
        self.flush('MFG')
        args = [self.rebound(a) for a in args]
        target = self.rebound(target)
        regv = {k: self.rebound(v) for k, v in regv.items()}
        # TAKES AND GIVES: a callee may read more values than it leaves behind (_CIpow: two in, one out, net -1;
        # 0x102f182d handed it one and lost its result). It is handed every value it reads, bottom first, and
        # every value it leaves comes back.
        takes = -xd if xd < 0 else 0
        xt = info.get('xtakes') if info else None
        if xt is not None and xt > takes and xt + xd >= 0 and self.st.xd >= xt:
            takes = xt
        gives = takes + xd if xd is not None else 0
        handed = [self.fpop() for _k in range(takes)]   # top first
        for v in reversed(handed):                       # pushed bottom first: the callee finds them in order
            self.stmt('fpush(g, %s);' % (self.pr.p(v) if self.mode == 'emit' else ''))
        ret_live = self.live(key_r('eax'))
        # the callee's frame sits exactly where the original's did: its locals' addresses are visible to
        # whatever it hands them to
        want = E0 + 4 * n
        self.last_nargs = n             # the words this call passes (tools/cow/rise/seek.py reads it)
        if self.mode == 'emit':
            if not hasattr(self, 'emit_nargs'):
                self.emit_nargs = {}
            self.emit_nargs[ins.address] = n    # what the unit passes there (EMIT_NARGS)
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
            # the return-address word is the call's own return site, as the original pushes it: a callee that
            # keeps the address it was called from (layout/cow_call.h, cow_ret_word) stores the same word
            ret_site = 'COW_IMG(0x%xu)' % ((ins.address + ins.size) & 0xFFFFFFFF)
            if n > 16:
                # more arguments than the cow_call helpers carry: the bridge itself, with the words in order
                call = 'cow_bridge_indirect(g, %s, %s, %du, (const uint32_t[]){%s}, %s, %s, %s, %du)' % (
                    T, ret_site, n, ', '.join(P.p(a) for a in args), P.p(regv.get('ecx', V('g->ecx'))),
                    P.p(regv.get('edx', V('g->edx'))), P.p(regv.get('eax', V('g->eax'))),
                    4 * n if caller_pops else 0)
            else:
                self.out.append('COW_RET(0x%xu);' % ((ins.address + ins.size) & 0xFFFFFFFF))
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
        # ... and a local whose ADDRESS the function gave away keeps nothing across a call: 0x1000f870 stores 0
        # in a local, hands `lea eax, [esp + 0x14]` to 0x1000fa80, which fills it, and reads it back. The 0 was
        # "stable", the read came out as the constant, and the lift copied a string from address 0
        # (`esi = 0u; ... lstrlenW(0)`). No state had reached it, so the unit sat at silver with a wrong
        # block in it. What is forgotten: the locals from an escaped address up (the callee writes an object
        # of a size it knows and we do not), except a word that holds a register of the caller, which is
        # where the function saved it and nothing a callee is given.
        if self.guest:
            for off in list(self.st.s):
                if not self.stable(self.st.s[off].e) or self.given_away(off, self.st.s[off].e):
                    del self.st.s[off]
        self.st.written = set()
        taken = []
        for k in range(gives if gives > 0 else 0):
            if self.mode == 'emit':
                tv = self.new_temp('d')
                self.out.append('%s = cow_take_float(g);' % tv[1])    # the top first
                taken.append(tv)
            else:
                taken.append(V('fret%d' % k, 'd'))
        for v in reversed(taken):                        # back on our stack in the callee's order
            self.fpush(v)

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

    def save_pushes(self):
        """the `push ebx/esi/edi/ebp` instructions that push a register no path from the entry has written
        yet: the caller's value, saved - never an argument"""
        if getattr(self, '_save_pushes', None) is not None:
            return self._save_pushes
        dirty_out = {}
        order = sorted(self.blocks)
        changed = True
        while changed:
            changed = False
            for a in order:
                b = self.blocks[a]
                d = set()
                if a != self.entry:
                    for p_ in b.pred:
                        d |= dirty_out.get(p_, set())
                for i in b.ins:
                    try:
                        _r, w = i.regs_access()
                    except Exception:
                        w = []
                    for r in w:
                        n = i.reg_name(r)
                        if n in SUB and SUB[n][0] in CALLEE_SAVED:
                            d.add(SUB[n][0])
                if d != dirty_out.get(a):
                    dirty_out[a] = d
                    changed = True
        out = set()
        for a in order:
            b = self.blocks[a]
            d = set()
            if a != self.entry:
                for p_ in b.pred:
                    d |= dirty_out.get(p_, set())
            for i in b.ins:
                if i.mnemonic == 'push' and i.operands and i.operands[0].type == X.X86_OP_REG:
                    n = i.reg_name(i.operands[0].reg)
                    if n in CALLEE_SAVED and n not in d:
                        out.add(i.address)
                try:
                    _r, w = i.regs_access()
                except Exception:
                    w = []
                for r in w:
                    n = i.reg_name(r)
                    if n in SUB and SUB[n][0] in CALLEE_SAVED:
                        d.add(SUB[n][0])
        self._save_pushes = out
        return out

    def count_args(self, E0):
        """how many words from esp upward this function wrote since its last call"""
        w = getattr(self.st, 'written', set())
        n = 0
        while (E0 + 4 * n) in w and E0 + 4 * n < 0:
            if self.use_saves and (E0 + 4 * n) in self.save_slots:
                # a word this function pushes a callee-saved register into and pops the same register back
                # from: a save, not an argument (`push edi; push ebx; ...; call [edx+0x40]` pops five words,
                # not six: 0x1000c850)
                break
            n += 1
        return n

    def cleanup_after(self, ins):
        """the `add esp, N` that follows a call in its block, past instructions that neither move nor read esp;
        None when something else comes first"""
        b = self.blocks[self.cur]
        try:
            k = b.ins.index(ins)
        except ValueError:
            return None
        return cleanup_ins(self.blocks, b, k)

    def next_ins(self, ins):
        b = self.blocks[self.cur]
        k = b.ins.index(ins)
        if k + 1 < len(b.ins):
            return b.ins[k + 1]
        nb = self.blocks.get(ins.address + ins.size)
        return nb.ins[0] if nb else None

    def given_away(self, off, e):
        """the local at `off` lies at or above a frame address that left the function (ESCAPED), and is not a
        saved register"""
        if e[0] == 'v' and e[1].startswith('in_'):
            return False
        def region(o):
            return 0 if o >= -VBASE // 2 else (1 if o >= -(VBASE + VBASE2) // 2 else 2)
        for a in self.esc:
            if a is None:
                return True                     # an address we could not place: anything may be written
            if region(a) == region(off) and a <= off and (region(off) != 0 or off < 0):
                return True
        return False

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
            elif r in self.saved_by_original():
                # THE ORIGINAL PUTS IT BACK ITSELF (judge 14): it saved r, used it, and pops it before `ret`. We
                # never touch g->r, and leaned on every callee to keep it - true of the game's callees, not of
                # any callee: the original's own pop does not lean on that. So the caller's value goes back.
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
            self.facts_src[s] = getattr(self, 'cur', None)
            return
        if old['esp'] != fx['esp']:
            # Paths that really do meet with different esp: `if (!buf) buf = _alloca(0x104);` in a loop
            # (0x1000e250). A guest frame is memory at real addresses, so esp is rebased at s: each path
            # sets sp2 to its own esp on the way in (edge), and s and what follows address the stack from
            # sp2. The frame pointer, sp0, is untouched, and `ret` still needs esp back on it.
            if self.guest and old['esp'] == SP2BASE:
                pass
            elif self.guest and self.allow_rebase and self.mode == 'scan':
                old['esp'] = SP2BASE
                self.facts_changed = True
            else:
                # A CALL THAT NEVER COMES BACK. Compiled code never meets itself with two esp values, so when
                # one of the two ways in is the return from a call, the compiler knew that call does not return
                # (`push 0; call exit` with no cleanup after it, 0x1027d6e0: exit() reaches ExitProcess through
                # _doexit, which has a `ret` for its other callers). That way in is not a way in: the lift
                # starts again with the call ending its path, as a call to a function with no `ret` does.
                # ... UNLESS A CALLEE NOBODY CAN READ IS ON THE WAY. `call [edx+0x1ec]` with three words pushed
                # (0x1005da8c) is scanned first as popping nothing, the path then meets 0x1005dad2 12 bytes
                # low, and the call the block before the meeting ends with, 0x1005dacd, was taken for the one
                # that never returns: rise wrote `rt_fatal("no way on")` behind it, and the unit could not be
                # right from 0x1005dabe on (0x10057fb0, 23660 bytes, 26 sites short for that). While the scan
                # has a call whose cleanup it only guessed, the difference is that guess's to answer first
                # (_scan_fitted moves the count until esp agrees); lift() comes back here without the hold
                # when no count fits.
                held = self.entry in NORET_HOLD and any(k == 'p' for k, _a, _v in self.unknown)
                for src in (getattr(self, 'cur', None), self.facts_src.get(s)):
                    c = self.call_before(src, s)
                    if c is not None and c not in NORET_CALLS and not held:
                        NORET_CALLS.add(c)
                        raise Refuse('the call at %x never returns: the lift starts again' % c)
                raise Refuse('esp differs at %x (%d vs %d)' % (s, old['esp'], fx['esp'])
                             + (' from %x' % self.cur if getattr(self, 'cur', None) is not None else ''))
        if old['ebp'] != fx['ebp']:
            # A function that keeps no frame pointer uses ebp as one more register: one path into s has it
            # pointing into the frame, another has it holding something else (0x10171930). A guest frame is
            # memory at real addresses, so ebp is then simply a variable at s, set on each path's way in.
            if self.guest and old['ebp'] is None:
                pass
            elif self.guest and self.mode == 'scan':
                old['ebp'] = None
                self.facts_changed = True
            else:
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
        if old['xd'] == fx['xd'] and old['x87'] != fx['x87']:
            # The same depth, one path holding more of it in variables (it rewrote values the caller left,
            # the other did not touch them): the target keeps the larger count, and a path with fewer hands
            # over the caller's own values for the rest (edge, st_get). It was a refusal ("0 vs 0").
            if self.mode == 'scan':
                if fx['x87'] > old['x87']:
                    old['x87'] = fx['x87']
                    self.facts_changed = True
            elif fx['x87'] > old['x87']:
                raise Refuse('x87 stack differs at %x (%d vs %d)' % (s, old['xd'], fx['xd']))
        elif old['xd'] != fx['xd']:
            # a different depth: some callee's x87 effect was guessed wrong; the message says by how much
            # (pushes since entry on each path), which is what fit_pops moves a guess by
            raise Refuse('x87 stack differs at %x (%d vs %d)' % (s, old['xd'], fx['xd']))
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

    def call_before(self, a, s):
        """the address of the direct call block `a` ends with, when s is where that call returns to"""
        b = self.blocks.get(a) if a is not None else None
        if not b or not b.ins:
            return None
        i = b.ins[-1]
        if i.mnemonic != 'call' or not i.operands or i.operands[0].type != X.X86_OP_IMM:
            return None
        t = i.operands[0].imm & 0xFFFFFFFF
        # only a callee whose cleanup is read off its own body: an unknown one may simply pop another count
        if t not in self.img.functions or self.img.info(t).get('pop') is None:
            return None
        return i.address if i.address + i.size == s else None

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
        if fx['esp'] == SP2BASE and self.esp_off() != SP2BASE:
            self.decls.setdefault('sp2', 'uint32_t')
            assigns.append(('sp2', self.st.r['esp'], 'u'))     # this path's esp, where s rebases it

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
            want('x:%d' % pos, 'x%d' % pos, self.st_get(i), 'd')
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


# calls that never return, read off the stack (Lifter.facts_in: a call whose return meets another path with a
# different esp). Kept for the process: every lift and every drive of the function cuts the path there.
NORET_CALLS = set()
POPS_VARIANT = {}       # entry -> which of the frame's equally good answers its lift takes (solve_pops); None: any entry
POPS_TIES = {}          # entry -> how many there were, the last time it was solved
if os.environ.get('COW_RISE_VARIANT', '').isdigit():
    POPS_VARIANT[None] = int(os.environ['COW_RISE_VARIANT'])
NORET_HOLD = set()      # entries being lifted with "that call never returns" held back (see lift)

# the frame addresses a function lets out of its hands (Lifter.check_value in a guest frame), by entry: offsets
# from sp0, None for one that is not a constant offset. Kept for the process like NORET_CALLS: what a call
# may have written is asked at every call of the function, so a lift during which the set grew is done again
# with all of it known from the first instruction (the scan and the emit pass must see the same facts).
ESCAPED = {}


def lift(img, entry):
    """the lift. First with the conclusion "a call that leaves esp off where paths meet never returns" held
    back wherever an unknown callee's cleanup could be what is off (Lifter.merge, NORET_HOLD); when that does
    not come out, the way it always was."""
    NORET_HOLD.add(entry)
    POPS_TIES.pop(entry, None)
    try:
        return _lift_again(img, entry)
    except Refuse:
        pass
    finally:
        NORET_HOLD.discard(entry)
    return _lift_again(img, entry)


def _lift_again(img, entry):
    for _again in range(8):
        n, m = len(NORET_CALLS), len(ESCAPED.get(entry, ()))
        try:
            out = _lift(img, entry)
        except Refuse:
            if len(NORET_CALLS) == n and len(ESCAPED.get(entry, ())) == m:
                raise
            continue
        if len(ESCAPED.get(entry, ())) == m:
            return out
    return _lift(img, entry)


def _lift(img, entry):
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
    for _round in range(40):
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
        while i < len(keys) and i < 64:
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


# (register saves are not arguments, the vtables' counts, esp rebased where paths meet): plain first.
# The rebase (allow_rebase) is not among them: of 7 functions it lifted, 3 failed the judge, 0x1000e250 (the
# _alloca case it is for) among them - wrong arguments after the merge. Until that is found it stays off.
ATTEMPTS = ((False, False, False), (True, False, False), (False, True, False), (True, True, False))


def scan_fitted(L):
    """the scan with the guesses below; when they cannot be fitted, again with more evidence about what a
    call pops, one kind at a time and then together, and only then with esp rebased where paths meet. Each
    later attempt broke lifts the earlier ones made when it went first (a function's own register saves
    taken out of the argument count lost 18 of 1,737; the vtables' counts lost 0x1000a820), so they come
    after, on the functions that are still refused."""
    first = None
    for saves, vslots, rebase in ATTEMPTS:
        if rebase and not L.guest:
            continue
        L.use_saves, L.use_vslots, L.allow_rebase = saves, vslots, rebase
        L.choices = {}
        try:
            return _scan_fitted(L)
        except Refuse as r:
            if not str(r).startswith(SHAPE_ERRORS):
                if first is None:
                    raise
                raise first
            if first is None:
                first = r
    raise first


def cleanup_ins(blocks, b, k):
    """the `add esp, N` that follows the call b.ins[k], past up to seven instructions that neither move nor read
    esp; None when something else comes first. LIKE float_after IT READS ON INTO THE NEXT BLOCK: a call ends
    its block, so within the call's own block there was nothing to find, and no call was ever seen to be
    cleaned up after by its caller (the guess for a call through a pointer was `the callee pops what was
    pushed` for every cdecl one, and a variadic callee got the words its own body reads and no more)."""
    seq = b.ins[k + 1:]
    left = 7
    for _hop in range(4):
        for nx in seq:
            if left <= 0:
                return None
            left -= 1
            ops = nx.op_str.replace(' ', '')
            if nx.mnemonic == 'add' and ops.startswith('esp,'):
                return nx
            if nx.mnemonic in ('push', 'pop', 'call', 'ret', 'leave', 'enter') or 'esp' in ops:
                return None
        if not b.term or b.term[0] != 'fall':
            return None
        b = blocks.get(b.term[1])
        if b is None:
            return None
        seq = b.ins
    return None


def float_after(blocks, b, k):
    """After the call that is b.ins[k]: does the code use an x87 value before it loads one? (The callee left
    it: a float result.) A CALL ENDS ITS BLOCK since states start at blocks (judge 14), so the instructions
    after it are the next block's: this looked at the rest of the call's own block only, found nothing, and
    said no for every call in every function. Which unknown callee returns a float was then left to what
    balances the x87 stack, and where two answers balance the wrong one could be taken (0x10011a00: `call
    [edx+0x30]; fstp [esp+0x18]` is plainly one, and the value was given to a `call [ecx+0xfc]` instead).
    Follows the code on through blocks that are fallen into, up to the next call, jump or ret."""
    seq = b.ins[k + 1:]
    for _hop in range(8):
        for j in seq:
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
                return False                # it loads one first
            if mod != 3 and op == 0xD9 and reg in (5, 7):
                continue                    # fldcw, fnstcw: no value
            if op == 0xD9 and modrm in (0xE8, 0xE9, 0xEA, 0xEB, 0xEC, 0xED, 0xEE):
                return False                # a constant loaded
            return True
        if not b.term or b.term[0] != 'fall':
            return False
        b = blocks.get(b.term[1])
        if b is None:
            return False
        seq = b.ins
    return False


def _global_slot(ins, k):
    """`call [r+K]` whose r was loaded, in the same block, through a chain of loads that starts at a global:
    the chain (as text) and K, or None"""
    op = ins[k].operands[0]
    if op.type != X.X86_OP_MEM or not op.mem.base or op.mem.index:
        return None
    chain = ['%x' % (op.mem.disp & 0xFFFFFFFF)]
    reg = ins[k].reg_name(op.mem.base)
    for j in reversed(ins[:k]):
        ops = j.operands
        if j.mnemonic == 'call':
            return None
        if not ops or ops[0].type != X.X86_OP_REG or j.reg_name(ops[0].reg) != reg or \
                j.mnemonic in ('push', 'cmp', 'test'):
            continue
        if j.mnemonic != 'mov' or ops[1].type != X.X86_OP_MEM or ops[1].mem.index:
            return None
        chain.append('%x' % (ops[1].mem.disp & 0xFFFFFFFF))
        if not ops[1].mem.base:
            return tuple(chain)
        reg = j.reg_name(ops[1].mem.base)
        if len(chain) > 5:
            return None
    return None


def _vtable_def(blocks, preds, a, k):
    """`call [r+K]`: the address of the instruction that last wrote r before the call at blocks[a].ins[k],
    looked for back through the blocks that have one way in; None when it cannot be said (r is eax, ecx or
    edx and a call lies between, a block with several ways in, no write found)"""
    ins = blocks[a].ins[k]
    op = ins.operands[0]
    if op.type != X.X86_OP_MEM or not op.mem.base or op.mem.index:
        return None
    reg = ins.reg_name(op.mem.base)
    if reg not in SUB or reg == 'esp':
        return None
    full = SUB[reg][0]
    scratch = full in ('eax', 'ecx', 'edx')
    seq = blocks[a].ins[:k]
    for _hop in range(12):
        for j in reversed(seq):
            if j.mnemonic == 'call':
                if scratch:
                    return None
                continue
            try:
                _r, w = j.regs_access()
            except Exception:
                return None
            if any(SUB.get(j.reg_name(x), (None,))[0] == full for x in w):
                return j.address
        ps = preds.get(a) or ()
        if len(ps) != 1:
            return None
        a = ps[0]
        seq = blocks[a].ins
    return None


def _call_sig(blocks, preds, a, k):
    """what says two calls reach the same callee, or None: the same method of the same global object
    (_global_slot), the same slot of a table the same instruction loaded (_vtable_def), the same direct
    target, the same import"""
    b = blocks[a]
    op = b.ins[k].operands[0]
    sig = _global_slot(b.ins, k)
    if sig is None and op.type == X.X86_OP_MEM and op.mem.base and not op.mem.index:
        vd = _vtable_def(blocks, preds, a, k)
        if vd is not None:
            sig = ('table', vd, op.mem.disp & 0xFFFFFFFF)
    if sig is None and op.type == X.X86_OP_IMM:
        sig = ('direct', op.imm & 0xFFFFFFFF)
    elif sig is None and op.type == X.X86_OP_MEM and not op.mem.base and not op.mem.index:
        sig = ('at', op.mem.disp & 0xFFFFFFFF)
    return sig


def _block_preds(blocks):
    preds = {}
    for a_, b_ in blocks.items():
        for t_ in b_.succ:
            preds.setdefault(t_, []).append(a_)
    return preds


def _one_callee_two_cleanups(L):
    """after a scan that came out: is there a callee (_call_sig) whose calls were given different cleanups?"""
    pops = getattr(L, 'unknown_pop', None) or {}
    if len(pops) < 2:
        return False
    preds = _block_preds(L.blocks)
    seen = {}
    for a, b in L.blocks.items():
        for k, ins in enumerate(b.ins):
            if ins.mnemonic != 'call' or ins.address not in pops:
                continue
            sig = _call_sig(L.blocks, preds, a, k)
            if sig is None:
                continue
            if seen.setdefault(sig, pops[ins.address]) != pops[ins.address]:
                return True
    return False


def solve_pops(L):
    """THE POPS AS ONE SYSTEM (judge 14). A function full of calls whose callee's cleanup cannot be read (vtables,
    function pointers) has one unknown per call, and the frame ties them together: esp is one number at every
    block where paths meet, 0 (the return address) at every `ret` and tail jump. fit_pops moves one or two of
    them at a time from a refusal, and a function with forty of them (0x1004e8d0, 15 KB) never settles that
    way. Here each instruction's effect on esp is read off directly, every unknown call is a variable, and z3
    solves the whole frame at once (closest to the guess the call site suggests); the scan then runs with
    those counts. The judge still compares the result with the original in every state: a count that fits
    the frame and is wrong fails there. Returns the choices, or None when the frame cannot be said this way."""
    try:
        import z3
    except ImportError:
        return None
    blocks = L.blocks
    I = z3.Int
    s = z3.Optimize()
    s.set('timeout', 20000)
    esp_in = {a: I('in_%x' % a) for a in blocks if a < (1 << 32)}
    ebp = I('ebp')          # esp after `mov ebp, esp` (one frame pointer for the function)
    ebp_set = []
    pops, guess = {}, {}
    cost = []
    # THE x87 STACK, the same way: once the pops agree, a merge can still disagree on how many values a path
    # left on the x87 stack (0x1004e8d0: 0 vs 6 at 0x100523bf), and that is one more unknown per call whose
    # x87 effect cannot be read off (no xdelta). Its depth at every block, one number where paths meet; at
    # every ret and tail jump the function's own result (none, or one float).
    xd_in = {a: I('x_in_%x' % a) for a in esp_in}
    slot_pop = {}
    xvars = {}
    xtarget = {}
    saved_at, restored_at = {}, []
    preds_ = _block_preds(blocks)
    xret = I('x_ret')
    # (a function may also TAKE values from the caller's x87 stack - the CRT's math helpers, and compiled
    # helpers that finish a caller's expression: the scan knows them as xin. Held at 0 here, the frame was
    # balanced by saying some callee pushed a value it does not, and the original came back one value
    # shorter than the unit in the states that took that path: st0 FAILs on 6 of the first 43 solved.)
    s.add(xret >= -4, xret <= 1)
    cost.append(z3.If(z3.Or(xret == 0, xret == 1), 0, 1))

    def float_used_after(b, k):
        """the first x87 instruction after the call reads st(0) without loading it first"""
        return float_after(blocks, b, k)

    def esp_of(ins, cur, ebp_known):
        """the new esp after one instruction, or None to stop (an effect this does not model)"""
        mn, ops = ins.mnemonic, ins.operands
        txt = ins.op_str.replace(' ', '')
        writes_esp = any(op.type == X.X86_OP_REG and ins.reg_name(op.reg) == 'esp' for op in ops[:1])
        if mn == 'push':
            return cur - 4
        if mn == 'pushal':
            return cur - 32
        if mn in ('pushfd', 'pushf'):
            return cur - 4
        if mn == 'pop':
            if writes_esp:
                return None
            return cur + 4
        if mn == 'popal':
            return cur + 32
        if mn in ('popfd', 'popf'):
            return cur + 4
        if mn == 'leave':
            return (ebp + 4) if ebp_known else None
        if mn in ('sub', 'add') and writes_esp:
            if ops[1].type != X.X86_OP_IMM:
                return None
            v = ops[1].imm & 0xFFFFFFFF
            v = v - (1 << 32) if v & 0x80000000 else v
            return cur - v if mn == 'sub' else cur + v
        if mn == 'lea' and writes_esp:
            m_ = ops[1].mem
            if m_.index:
                return None
            base = ins.reg_name(m_.base) if m_.base else None
            if base == 'esp':
                return cur + m_.disp
            if base == 'ebp' and ebp_known:
                return ebp + m_.disp
            return None
        if mn == 'mov' and writes_esp:
            if ops[1].type == X.X86_OP_REG and ins.reg_name(ops[1].reg) == 'ebp' and ebp_known:
                return ebp
            return None
        if mn == 'and' and writes_esp and ops[1].type == X.X86_OP_IMM:
            # `and esp, -16` (an aligned frame): esp drops by an amount only the run knows, one number for the
            # function all the same. The frame is left through ebp, which is how such a function is written
            # (0x1017de20, 13 KB, was never solved because of this one instruction)
            al = I('al_%x' % ins.address)
            s.add(al <= cur, al > cur - 64, al % 4 == 0)
            return al
        if writes_esp:
            return None
        return cur

    for a, b in blocks.items():
        if a >= (1 << 32) or a not in esp_in:
            continue
        cur = esp_in[a]
        xcur = xd_in[a]
        s.add(xcur >= -4, xcur <= 8)
        ebp_known = bool(ebp_set) or True
        ended = False
        pushed = 0                  # words pushed in this block since its last call
        leaves = bool(b.term) and b.term[0] in ('ret', 'tail', 'tailind')
        last_call = max([k_ for k_, i_ in enumerate(b.ins) if i_.mnemonic == 'call'] or [-1])
        for k, ins in enumerate(b.ins):
            mn, ops = ins.mnemonic, ins.operands
            if mn == 'push':
                pushed += 1
            elif mn == 'pop':
                pushed = max(0, pushed - 1)
            if mn in ('push', 'pop') and len(ops) == 1 and ops[0].type == X.X86_OP_REG and \
                    ins.reg_name(ops[0].reg) in ('ebx', 'esi', 'edi', 'ebp'):
                if mn == 'push':
                    saved_at.setdefault(ins.reg_name(ops[0].reg), []).append(cur - 4)
                elif leaves and k > last_call:
                    restored_at.append((ins.reg_name(ops[0].reg), cur))
            if mn == 'mov' and len(ops) == 2 and ops[0].type == X.X86_OP_REG and ins.reg_name(ops[0].reg) == 'ebp' \
                    and ops[1].type == X.X86_OP_REG and ins.reg_name(ops[1].reg) == 'esp':
                ebp_set.append(cur)
                continue
            if mn == 'call':
                op = ops[0]
                pop = None
                known = False
                xinfo = L.img.info(op.imm & 0xFFFFFFFF) if op.type == X.X86_OP_IMM and \
                    (op.imm & 0xFFFFFFFF) in L.img.functions else None
                if xinfo is not None and xinfo.get('xdelta') is not None:
                    xcur = xcur + xinfo['xdelta']
                elif not (xinfo is not None and xinfo.get('noreturn')):
                    xv = I('x_%x' % ins.address)
                    xvars[ins.address] = xv
                    s.add(z3.Or(xv == -1, xv == 0, xv == 1))
                    if op.type == X.X86_OP_IMM:
                        # one function does one thing to the x87 stack, whoever calls it: its calls share the
                        # number (0x1004e8d0 calls 0x10052a60 22 times, each was free, and a +1 at one cancelled
                        # a -1 at another on paths the frame could not tell apart: st0 differed in 2 states)
                        first = xtarget.setdefault(op.imm & 0xFFFFFFFF, xv)
                        if first is not xv:
                            s.add(xv == first)
                    else:
                        # and one method of one global object does one thing to it too (ONE METHOD, ONE
                        # CLEANUP below, the same rule for the x87 stack): 0x10011a00 calls `[ecx+0xfc]` of
                        # the object at [[0x1045666c]+0xc] 24 times, each was free, and the one value the
                        # function was short of was put on the tenth of them - the unit took a float back
                        # from a call that leaves none, and every state through there FAILed `st0`/`memory`
                        xsig = _global_slot(b.ins, k)
                        if xsig is not None:
                            first = xtarget.setdefault(xsig, xv)
                            if first is not xv:
                                s.add(xv == first)
                    cost.append(z3.If(xv == (1 if float_used_after(b, k) else 0), 0, 2))
                    xcur = xcur + xv
                if op.type == X.X86_OP_IMM:
                    t = op.imm & 0xFFFFFFFF
                    if t in L.img.functions:
                        info = L.img.info(t)
                        if info.get('noreturn'):
                            ended = True
                            break
                        if info.get('helper'):
                            return None
                        if info.get('probe'):
                            # `mov eax, N; call __chkstk`: the frame's size, taken off esp by the probe (the
                            # scan does the same). Every function with a frame over a page came back None
                            # here, so none of them was ever solved (0x1017de20, 13 KB; 0x101b00b0)
                            size = None
                            for j in reversed(b.ins[:k]):
                                if j.mnemonic == 'mov' and len(j.operands) == 2 and \
                                        j.operands[0].type == X.X86_OP_REG and j.reg_name(j.operands[0].reg) == 'eax':
                                    if j.operands[1].type == X.X86_OP_IMM:
                                        size = j.operands[1].imm & 0xFFFFFFFF
                                    break
                                if j.mnemonic == 'call':
                                    break
                            if size is None:
                                return None
                            cur = cur - size
                            pushed = 0
                            continue
                        pop, known = info.get('pop'), info.get('pop') is not None
                elif op.type == X.X86_OP_MEM and not op.mem.base and not op.mem.index and \
                        (op.mem.disp & 0xFFFFFFFF) in L.img.iat:
                    nw = L.img.import_args.get(L.img.iat[op.mem.disp & 0xFFFFFFFF])
                    if nw is not None:
                        pop, known = 4 * nw, True
                if known:
                    cur = cur + pop
                    pushed = 0
                    continue
                v = I('p_%x' % ins.address)
                pops[ins.address] = v
                s.add(v >= 0, v <= 64, v % 4 == 0)
                # ONE METHOD, ONE CLEANUP: `mov edx, [0x1045666c]; mov eax, [edx+0xc]; mov ecx, [eax];
                # call [ecx+0xfc]` calls the same method of the same global object wherever it stands, so all
                # such calls pop alike (0x1017de20: one of them had an argument of the NEXT call pushed before
                # it, `push 3`, the guess counted it, and the frame balanced one call later with the two wrong
                # by 4 - every state through there FAILed with esp off)
                # ONE CALLEE, ONE CLEANUP (_call_sig). A direct call's callee has one `ret N` whoever calls it:
                # 0x101b3c10 calls 0x102bc888 (a jump to an import whose arguments are not listed) twice,
                # the first right after `push ebx; push edi`; each call was free, the guess for the first
                # counted the two saved registers as its arguments, and the frame balanced with one call
                # popping 24 and the other 8 - the unit restored ebx from edi's slot (`callee-saved
                # register`, and 6 answers of equal cost where there is one). And one slot of one table:
                # `mov esi, [ebx]` once, then `call [esi+0x24]` with four words pushed and again with two
                # (0x1006d9c0 and its family: the method takes three, the first call leaves its fourth
                # word on the stack and the second call uses it).
                sig = _call_sig(blocks, preds_, a, k)
                if sig is not None:
                    first = slot_pop.setdefault(sig, v)
                    if first is not v:
                        s.add(v == first)
                nx = cleanup_ins(blocks, b, k)
                # the call site says what the callee cleans: nothing when the caller adds esp after it, else the
                # words pushed for it (a stdcall/thiscall method). Only the first was asked for, and with every
                # other call free the frame came out anyhow: 0x1004e8d0's `push esi; push eax; push eax;
                # call [edx+0x50]` was given 0, then 64, and the paths never met
                if nx is not None and nx.mnemonic == 'add' and nx.op_str.replace(' ', '').startswith('esp,'):
                    g_ = 0
                else:
                    g_ = 4 * pushed if pushed else None
                pushed = 0
                guess[ins.address] = g_
                if g_ is not None:
                    cost.append(z3.If(v == g_, 0, 1))
                cur = cur + v
                continue
            if mn == 'ret':
                s.add(cur == 0)
                s.add(xcur == xret)
                ended = True
                break
            xcur = xcur + x87_delta(ins)
            nc = esp_of(ins, cur, ebp_known)
            if nc is None:
                return None
            cur = nc
        if ended:
            continue
        term = b.term[0] if b.term else None
        if term in ('tail', 'tailind'):
            s.add(cur == 0)
            s.add(xcur == xret)
            continue
        for t in b.succ:
            if t in esp_in:
                s.add(esp_in[t] == cur)
                s.add(xd_in[t] == xcur)
    if not pops and not xvars:
        return None
    # A SAVED REGISTER COMES BACK FROM WHERE IT WAS PUT. The frame's sums leave room where two callees with
    # unknown cleanups stand on every path together: 0x101b3c10 balances with ImmGetContext popping 4 and
    # ImmReleaseContext 8 (what they do) and with 8 and 4, where the first eats the slot esi was saved in and
    # `pop edi; pop ebx` at the end read one slot off - the unit handed ebx back from edi's slot. What the
    # function pops into ebx, esi, edi or ebp on its way out is taken from a slot that register was pushed
    # into: an answer that has it otherwise costs one a pop.
    for reg, at_ in restored_at:
        if saved_at.get(reg):
            cost.append(z3.If(z3.Or([at_ == s_ for s_ in saved_at[reg]]), 0, 1))
    s.add(esp_in[L.entry] == 0)
    s.add(xd_in[L.entry] == 0)
    for e_ in ebp_set:
        s.add(ebp == e_)
    if cost:
        s.minimize(z3.Sum(cost))
    if s.check() != z3.sat:
        return None

    def read(mod):
        out = {('p', a): mod.eval(v, model_completion=True).as_long() for a, v in pops.items()}
        out.update({('x', a): mod.eval(v, model_completion=True).as_long() for a, v in xvars.items()})
        return out
    first = read(s.model())
    if not cost:
        return first
    # THE FRAME OFTEN FITS MORE THAN ONE WAY AT THE SAME COST. `push a; call [x+0x50]; push b; ...; call [arg]`
    # balances with the first call popping the three words before it and the second none, or the other way
    # round (0x10063c80: one is gold, the other FAILs). z3 returned whichever it came to first, and which
    # that was depended on what the process had solved before: the same function lifted twice in one run
    # came out two ways. Every answer of the best cost is now listed (16 at the most) and put in one order,
    # the pops by address; POPS_VARIANT says which is taken (0 unless a unit's text names another), and
    # POPS_TIES how many there were, so what tries a lift can try the next one where this one fails.
    best = s.model().eval(z3.Sum(cost), model_completion=True).as_long()
    s2 = z3.Solver()
    s2.set('timeout', 20000)
    s2.add(s.assertions())
    s2.add(z3.Sum(cost) == best)
    every = [first]
    vs = list(pops.items()) + list(xvars.items())
    while len(every) < 16:
        last = every[-1]
        s2.add(z3.Or([v != last[('p', a)] for a, v in pops.items()] + [v != last[('x', a)] for a, v in xvars.items()]))
        if s2.check() != z3.sat:
            break
        every.append(read(s2.model()))
    every.sort(key=lambda o: [o[('p', a)] for a in sorted(pops)] + [o[('x', a)] for a in sorted(xvars)])
    POPS_TIES[L.entry] = len(every)
    return every[min(POPS_VARIANT.get(L.entry, POPS_VARIANT.get(None, 0)), len(every) - 1)]


def _scan_fitted(L):
    """the scan, and when an unknown callee's cleanup or x87 effect was guessed wrong, the other guesses
    (one call at a time, then two), then a fit of the pops to the frame: the facts lift_mode emits from
    (tools/cow/rise/seek.py drives the same ones)"""
    try:
        facts = scan(L)
        if _one_callee_two_cleanups(L):
            # THE FRAME CAME OUT, AND ONE CALLEE POPS TWO WAYS IN IT. The guesses (the callee pops what was
            # pushed for it) balance 0x1006d9c0's `call [esi+0x24]` with four words and with two as 16 and
            # 8; it is one method, it pops 12 both times, and nothing in the frame's sums says so. The
            # whole frame is asked (solve_pops, where one callee has one cleanup), and its answer is
            # taken when the scan comes out with it too.
            ch = solve_pops(L)
            if ch:
                keep = dict(getattr(L, 'choices', None) or {})
                L.choices = ch
                try:
                    return scan(L)
                except Refuse:
                    L.choices = keep
                    facts = scan(L)
        return facts
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
        if facts is None and str(r).startswith(('esp differs', 'ret with esp off', 'tail jump with esp',
                                                'x87 stack differs')):
            # the whole frame at once (solve_pops): the counts every unknown call must have for esp to agree
            ch = solve_pops(L)
            if ch:
                L.choices = ch
                try:
                    facts = scan(L)
                except Refuse as r3:
                    if not str(r3).startswith(SHAPE_ERRORS):
                        raise
                    facts = None
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
    """the lift, under each of ATTEMPTS in turn while the frame does not fit: a guess that scans can still
    fail when the code is written (pass 2 sees every path), so the next attempt starts over from there"""
    first = None
    for cfg in ATTEMPTS:
        if cfg[2] and not guest:
            continue
        try:
            return _lift_once(img, entry, guest, cfg)
        except Refuse as r:
            if not str(r).startswith(SHAPE_ERRORS):
                if first is None:
                    raise
                raise first
            if first is None:
                first = r
    raise first


LIFT_CFG = {}       # entry -> (guest, cfg) the last lift that came out used (seek drives the same one)
EMIT_NARGS = {}     # entry -> {call site: the argument words the unit passes there}
EMIT_POPS = {}      # entry -> {call site: the bytes the unit has an unknown callee pop there}


def lift_cfg(img, entry):
    """(guest, cfg) of the lift rise makes of `entry`: the frame mode and the attempt that came out"""
    if entry not in LIFT_CFG:
        lift(img, entry)
    return LIFT_CFG[entry]


def _lift_once(img, entry, guest, cfg):
    r = _lift_once_(img, entry, guest, cfg)
    LIFT_CFG[entry] = (guest, cfg)
    return r


def _lift_once_(img, entry, guest, cfg):
    L = Lifter(img, entry, guest)
    L.use_saves, L.use_vslots, L.allow_rebase = cfg
    facts = _scan_fitted(L)
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
    EMIT_NARGS[entry] = dict(getattr(L, 'emit_nargs', {}))
    EMIT_POPS[entry] = dict(L.unknown_pop)
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
            res.append('COW_AT(%s)' % ln[2:-1])   # where a block-entry state starts (judge 14); nothing otherwise
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


def _kind_rd(size, kind):
    if kind in ('d', 'f'):
        return 'rdf32' if size == 4 else 'rdf64' if size == 8 else None
    return {1: 'rd8', 2: 'rd16', 4: 'rd32'}.get(size)


def _kind_wr(size, kind):
    if kind in ('d', 'f'):
        return 'wrf32' if size == 4 else 'wrf64' if size == 8 else None
    return {1: 'wr8', 2: 'wr16', 4: 'wr32'}.get(size)


def _known_part(e, unnamed, known):
    """(mask, rest) when e is `(V & mask) | rest` with V the one unnamed variable and rest made only of known
    ones: what a location holds is part input the unit never names (V's bits under mask) and part what it
    assumes (rest)"""
    if len(unnamed) != 1 or e[0] != 'bin' or e[1] != '|':
        return None
    (u,) = tuple(unnamed)
    for a, b in ((e[2], e[3]), (e[3], e[2])):
        if a[0] == 'bin' and a[1] == '&':
            x, m = (a[2], a[3]) if a[3][0] == 'c' else (a[3], a[2])
            if x == ('v', u, 'u') or (x[0] == 'v' and x[1] == u):
                if m[0] == 'c' and not (E.vars_of(b) - known):
                    return m[1], b
    return None


def entry_support(L, words, declared):
    """BLOCK ENTRY (judge 14). A site no input reaches from the function's entry is still code, and is checked
    like any other by starting a state at its block. For every block whose entry state rise can say in terms
    of the guest's registers, flags, frame and x87 stack: (the lines that set the unit's variables from the
    guest, the lines that make the guest agree with what the unit assumes there). The second set runs before
    both sides (cow_entry_fix_<entry>), so the original and the unit start from one and the same state.
    Returns {block: (set_lines, fix_lines, decls)} and {block: why not}."""
    P = L.pr
    ok, why_not = {}, {}
    names = {}                      # variable -> C type
    for v, ty in L.decls.items():
        names[v] = ty
    reach_cache = {}

    def reach_words(a):
        if a in reach_cache:
            return reach_cache[a]
        seen, work, ws = set(), [a], set()
        while work:
            x = work.pop()
            if x in seen or x not in L.blocks:
                continue
            seen.add(x)
            for ln in L.code.get(x, ()):
                ws |= set(re.findall(r'\b[A-Za-z_][A-Za-z0-9_]*\b', ln))
            ti = L.tinfo.get(x)
            if ti:
                for part in ti[2:] if ti[0] == 'goto' else (ti[3], ti[5]):
                    for ln in part or ():
                        ws |= set(re.findall(r'\b[A-Za-z_][A-Za-z0-9_]*\b', ln))
                ws |= set(re.findall(r'\b[A-Za-z_][A-Za-z0-9_]*\b', P.p(ti[1]) if ti[0] != 'goto' else ''))
                work.extend(L.blocks[x].succ)
        reach_cache[a] = ws
        return ws

    for a in L.order:
        if a == L.entry or a not in L.facts or a not in L.code:
            continue
        try:
            st = L.entry_state(a)
        except Exception as x:              # noqa: BLE001  a block whose state cannot be said: no entry
            why_not[a] = 'entry state: %s' % x
            continue
        locs = []                           # (read from the guest, write to the guest, expression, C type)
        for r in GPR:
            locs.append(('g->%s' % r, 'g->%s = %%s;' % r, st.r.get(r), 'uint32_t'))
        for f in FLAGS:
            locs.append(('g->%s' % f, 'g->%s = (uint8_t)(%%s);' % f, st.f.get(f), 'unsigned'))
        for off, sl in sorted(st.s.items()):
            rd, wr = _kind_rd(sl.size, sl.kind), _kind_wr(sl.size, sl.kind)
            if rd is None:
                continue
            addr = P.p(frame_addr(off))
            ty = 'double' if sl.kind in ('d', 'f') else 'uint32_t'
            locs.append(('%s(%s)' % (rd, addr), '%s(%s, %%s);' % (wr, addr), sl.e, ty))
        for i, v in enumerate(st.x):
            locs.append(('ST(%d)' % i, 'ST(%d) = %%s;' % i, v, 'double'))
        have = {'sp0'}
        if 'sp1' in words:
            have.add('sp1')
        args = {w for w in words if re.match(r'^arg_[0-9a-f]+$', w)}
        have |= args                        # an argument is a word above the return address: sp0 says where
        sets, fixes, decls = [], [], {}
        saved = {}                          # callee-saved register -> where its value at the entry is now
        need = reach_words(a)
        bad = None
        source = set()                      # the locations a variable was read from
        for k, (rd, wr, e, ty) in enumerate(locs):   # the plain variables first: each from where it is
            if e is not None and e[0] == 'v' and e[1] not in have and e[1] not in ('sp0', 'sp1', 'sp2'):
                n = e[1]
                if n in declared:
                    sets.append('%s = %s;' % (n, rd))
                    decls[n] = names.get(n, ty)
                    have.add(n)
                    source.add(k)
                if n.startswith('in_') and n[3:] in ('ebx', 'esi', 'edi', 'ebp'):
                    saved[n[3:]] = rd
        for k, (rd, wr, e, ty) in enumerate(locs):   # a variable that is only held with an offset: `esi = self+4`
            if e is None or k in source or e[0] != 'bin' or e[1] not in ('+', '-'):
                continue
            x, c_ = e[2], e[3]
            if e[1] == '+' and x[0] == 'c':
                x, c_ = c_, x
            if x[0] != 'v' or c_[0] != 'c' or x[1] in have or x[1] in ('sp0', 'sp1', 'sp2') or x[1] not in declared:
                continue
            off = c_[1] if e[1] == '+' else (-c_[1]) & 0xFFFFFFFF
            sets.append('%s = %s - 0x%xu;' % (x[1], rd, off & 0xFFFFFFFF))
            decls[x[1]] = names.get(x[1], ty)
            have.add(x[1])
            source.add(k)
        for k, (rd, wr, e, ty) in enumerate(locs):   # then every location that holds an expression of them
            if e is None or k in source:
                continue
            vs = E.vars_of(e)
            if 'sp2' in vs:
                bad = 'a frame rebased where paths meet'
                break
            unnamed = vs - have - declared - args - {'sp0', 'sp1'}
            if unnamed:
                part = _known_part(e, unnamed, have | args)
                if part is not None and rd.startswith('g->'):
                    # `mov cx, [esp+8]` over an ecx the unit never names: (in_ecx & 0xffff0000) | (uint16_t)arg1.
                    # The unit assumes the low half (it reads `(int16_t)arg1` for cx), so the guest is made to
                    # agree on that half and keeps its own high half (0x1011cb50: the fix left cx random)
                    mask, rest = part
                    fixes.append(wr % P.p(E.bor(E.band(('raw', rd), C(mask)), rest)))
                    for v in E.vars_of(rest) & args:
                        decls.setdefault(v, 'uint32_t')
                continue                    # a value the unit's code never names: the unit assumes nothing of it
            if vs - have:
                if e[0] == 'v' and e[1] not in need:
                    continue                # a variable nothing from here on reads: whatever it holds
                bad = 'holds %s, which no location here says' % ', '.join(sorted(vs - have))
                break
            fixes.append(wr % P.p(e))
            for v in vs & args:
                decls.setdefault(v, 'uint32_t')
        if bad is None:
            # inputs the code from here on still reads, that no location holds any more
            gone = sorted(w for w in need if (w.startswith('in_') or w.startswith('xin')) and w not in have)
            if gone:
                bad = 'reads %s, which no location holds here' % ', '.join(gone)
        if bad:
            why_not[a] = bad
            continue
        fixes = ['g->esp = %s;' % P.p(st.r['esp'])] + fixes
        if st.xd > 0:
            # the values the function itself pushed on the x87 stack are the unit's own variables from here on,
            # not the guest's: read (above), they leave the guest's stack, which holds only what the caller
            # gave - the way it does on every path from the entry. Left there, the unit ended with one value too
            # many on the stack in every state started at such a block (0x102f182d at 0x102f1ae4: st0 FAILs)
            sets.append('g->top = (g->top + %du) & 7u;' % st.xd)
        # the unit leaves the callee-saved registers alone and returns with them as the caller gave them; started
        # at a block, the caller's values are where the original saved them, so that is what they hold again
        restores = ['g->%s = %s;' % (r, rd) for r, rd in sorted(saved.items())
                    if st.r.get(r) != V('in_' + r)]
        ok[a] = (sets, fixes, decls, restores)
    return ok, why_not


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
    declared = {v for v in L.decls if v in words and not v.startswith('in_')}
    declared |= {n for n in INPUTS if n in words}
    declared |= {w for w in words if re.match(r'^xin\d+$', w)}
    support, unsupported = entry_support(L, words, declared)
    L.entry_unsupported = unsupported
    cq = 'const ' if not support else ''      # a unit with block entries sets its inputs a second way
    decl.append('%suint32_t sp0 = COW_ENTRY_SP0(g);' % cq)
    if 'sp1' in words or (L.guest and L.sp1 is not None):
        k, m = L.sp1
        decl.append('%suint32_t sp1 = (sp0 - 0x%xu) & 0x%xu;' % (cq, (-k) & 0xFFFFFFFF, m))
    for n, src in INPUTS.items():
        if n in words:
            decl.append('%suint32_t %s = %s;' % (cq, n, src))
    for w in sorted(words):
        if w.startswith('arg_') and re.match(r'^arg_[0-9a-f]+$', w):
            decl.append('const uint32_t %s = rd32(sp0 + 0x%su);' % (w, w[4:]))
        m = re.match(r'^xin(\d+)$', w)
        if m:
            decl.append('%sdouble %s = ST(%s);' % (cq, w, m.group(1)))
    vars_ = []
    for v, ty in sorted(L.decls.items()):
        if v in words and not v.startswith('in_'):
            vars_.append('%s %s;' % (ty, v))
    if L.guest:
        below = -L.min_sp_final + 4
        if L.sp1 is not None:
            below = max(below, -L.sp1[0] + ((-L.sp1[1]) & 0xFFFFFFFF) - L.min_sp1_final + 4)
        decl.append('cow_frame(g, sp0, %du);' % below)
    if support:
        decl.append('#ifdef COW_BLOCK_ENTRY')
        decl.append('switch (cow_entry_at)')
        decl.append('{')
        for a in sorted(support):
            sets, _fixes, _d, restores = support[a]
            decl.append('case 0x%08xu: %s goto E_%08x;' % (a, ' '.join(sets + restores), a))
        decl.append('default: break;')
        decl.append('}')
        decl.append('#endif')
    fn_name = 'cow_fn_%s' % hexe
    rtype = 'void' if void else 'uint32_t'
    ind = []
    for ln in vars_ + decl + [''] + clean:
        if ln.startswith('L_') or ln.startswith('#'):
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
    if support:
        fx = ['#ifdef COW_BLOCK_ENTRY',
              '/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both',
              '   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */',
              'int cow_entry_fix_%s(Guest* g, uint32_t at)' % hexe, '{', '    const uint32_t sp0 = g->esp;']
        if 'sp1' in words or (L.guest and L.sp1 is not None):
            k, m = L.sp1
            fx.append('    const uint32_t sp1 = (sp0 - 0x%xu) & 0x%xu;' % ((-k) & 0xFFFFFFFF, m))
        fx += ['    switch (at)', '    {']
        for a in sorted(support):
            sets, fixes, decls, _restores = support[a]
            fx.append('    case 0x%08xu:' % a)
            fx.append('    {')
            for n in sorted(decls):
                if re.match(r'^arg_[0-9a-f]+$', n):
                    fx.append('        const uint32_t %s = rd32(sp0 + 0x%su);' % (n, n[4:]))
                else:
                    fx.append('        %s %s;' % (decls[n], n))
            fx += ['        ' + x for x in sets]
            fx += ['        ' + x for x in fixes]
            fx += ['        (void)sp0;', '        return 1;', '    }']
        fx += ['    }', '    return 0;', '}']
        if unsupported:
            fx.append('/* blocks no state can start at, and why (the gittable lists their sites):')
            for a in sorted(unsupported):
                fx.append('     %08x: %s' % (a, str(unsupported[a])[:120].replace('*/', '* /')))
            fx.append('*/')
        fx += ['#endif', '']
        fixfn = re.sub(r'\bin_ecx\b', 'self', '\n'.join(fx))
        fixfn = re.sub(r'\barg_([0-9a-f]+)\b', lambda m: 'arg%d' % ((int(m.group(1), 16) - 4) // 4 + 1)
                       if int(m.group(1), 16) % 4 == 0 else m.group(0), fixfn)
        fn = fn + '\n' + fixfn
    tail_check = ('    if (g->esp > sp0)\n        return; /* left through a tail call: the callee returned for us */\n'
                  if L.has_tail else '')
    adapter = ('/* COW_ADAPTER BEGIN */\nvoid cow_adapter_%s(Guest* g)\n{\n    const uint32_t sp0 = COW_ENTRY_SP0(g);\n'
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
    if POPS_TIES.get(L.entry, 1) > 1:
        # which of the frame's equally good answers this text is (solve_pops): what builds states on the
        # unit's reading lifts the same one (tools/cow/rise/seek.py), and the cycle tries the others
        head += '/* COW_FRAME_ANSWER %d of %d */\n' % (
            min(POPS_VARIANT.get(L.entry, POPS_VARIANT.get(None, 0)), POPS_TIES[L.entry] - 1), POPS_TIES[L.entry])
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
    ap.add_argument('--ties', default='', help='where to write {entry: how many equally good frame answers it has}')
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
    ties = {k[5:]: rows.pop(k) for k in [k for k in rows if k.startswith('ties ')]}
    if a.ties:
        with open(a.ties, 'w') as fh:
            json.dump(ties, fh, indent=0, sort_keys=True)
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
            if POPS_TIES.get(e, 1) > 1:
                rows['ties %08x' % e] = POPS_TIES[e]
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
