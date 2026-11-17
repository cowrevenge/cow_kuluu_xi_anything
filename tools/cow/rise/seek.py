"""seek.py - states that reach the blocks random states do not (judge 7).

    python tools/cow/rise/seek.py --list FILE [--jobs N]     writes cow/seeds_auto/<hex>.json per entry

A weak unit is almost never wrong: it is unexplored. A big function has a few gates near the top -
`cmp byte ptr [ecx+0x326], 0`, `test eax, eax` after a call, `cmp dword ptr [0x1045666c], 3` - and behind
each a third of its blocks. Random states set a field of `this` to the one value a gate wants about never,
so those blocks are never run and the unit can never be gold, however right its code is.

This writes the states that open the gates. For each block no earlier state covers, it takes a path from
the entry through that block to a `ret`, runs the path through rise's own block executor (the same
symbolic machinery that lifts the function, so a branch condition here is exactly the condition the
instructions compute), and solves the branch conditions along it:
    * every register, argument or loaded word the path uses as a POINTER gets an object of its own, 16 KB in
      the harness's heap region, so the original runs the path instead of faulting on the first field;
    * every value a branch condition reads - an argument, a field, a global, what a callee returned - is
      chosen to send the branch the way the path goes, and laid down in the state;
    * a callee whose answer decides a branch is answered with that value (a stub; only callees on the
      row's stub list, the ones both sides route through the harness).
The result is a seed file in the shape of cow/seeds (plus "regs"), which tools/cow/ghidra/lift_proof.py
puts on the unit's table row; the judge runs those states first, alongside its random ones.

Nothing here decides a verdict. A state only adds evidence: the judge compares both sides on it like on
any other state, a state the original does not finish proves nothing (it is an afault), and a solution that
is wrong (memory a callee rewrote, a branch on a value the path wrote first) just reaches less.
"""
import argparse
import json
import math
import os
import time
import struct
import sys
from concurrent.futures import ProcessPoolExecutor, as_completed
from concurrent.futures.process import BrokenProcessPool

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import rise                                                   # noqa: E402
import rexpr as E                                             # noqa: E402
from capstone import x86_const as X                           # noqa: E402

ROOT = rise.ROOT if hasattr(rise, 'ROOT') else os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
M32 = 0xFFFFFFFF
HEAP = 0x60000000          # the harness's heap region, as a model address (lift's token: heap+off)
OBJ = 0x4000               # one object
NOBJ = 120                 # 2 MB / 16 KB, leaving room
FAKE_LO = 0xC0DE0000       # addresses of no function, answered as stubs (lift_proof lets these through)
FRAME = 0x1000            # how far below SP0 a state may lay the frame's bytes down (cowdiff.c: `frame`)
SP0 = 0x7F000000           # the frame, as a model address (never laid down: the harness owns the stack)
MAX_STATES = 32
FUNC_SECONDS = float(os.environ.get('COW_SEEK_SECONDS') or 120)   # one function's drives, wall clock


class Unsolved(Exception):
    pass


class DeadEnd(Unsolved):
    """a drive that got stuck after choosing at open branches: `trail` is those choices, in order"""

    def __init__(self, why, trail):
        Unsolved.__init__(self, why)
        self.trail = trail


# ----------------------------------------------------------------------------------------------- paths

def bfs(blocks, src, ok, avoid=()):
    """shortest path of block starts from src to a block for which ok(b) holds"""
    prev = {src: None}
    q = [src]
    for a in q:
        if ok(a):
            out = []
            while a is not None:
                out.append(a)
                a = prev[a]
            return out[::-1]
        for s in blocks[a].succ:
            if s not in prev and s not in avoid and s in blocks:
                prev[s] = a
                q.append(s)
    return None


def path_through(blocks, entry, target):
    head = bfs(blocks, entry, lambda a: a == target)
    if head is None:
        return None
    tail = bfs(blocks, target, lambda a: blocks[a].term[0] in ('ret', 'tail', 'tailind'))
    if tail is None:
        return None
    p = head + tail[1:]
    return p if len(p) <= MAX_PATH else None


# ----------------------------------------------------------------------------------------------- driving

def distances(blocks, goal_ok):
    """block -> fewest edges to a block for which goal_ok holds (absent: cannot get there)"""
    preds = {a: [] for a in blocks}
    for a, b in blocks.items():
        for s_ in b.succ:
            if s_ in preds:
                preds[s_].append(a)
    d = {a: 0 for a in blocks if goal_ok(a)}
    q = list(d)
    for a in q:
        for p_ in preds[a]:
            if p_ not in d:
                d[p_] = d[a] + 1
                q.append(p_)
    return d


def drive(L, facts, target, stubbable, max_steps=3000, force=None):
    """run the function from its entry, block by block, deciding the state as it goes: a branch whose
    outcome the decided values already fix is followed; at one they do not, the side that gets closer to
    `target` (then to a return) is chosen and the condition solved for it. Returns (model, calls, blocks)."""
    blocks = L.blocks
    to_t = distances(blocks, lambda a: a == target)
    to_x = distances(blocks, lambda a: blocks[a].term[0] in ('ret', 'tail', 'tailind'))
    if L.entry not in to_t:
        raise Unsolved('no path')
    m = Model(L.img)
    calls = {}                  # ret atom -> (target, pop), in the order the path makes them
    icalls = {}                 # ret atom -> (vtable slot's model address, bytes popped) of an indirect call
    saved_order = L.order
    L.order = []
    L.run('scan', entry_facts=dict(facts))
    L.order = saved_order
    orig_finish, orig_load, orig_store, orig_call = L.finish_block, L.load, L.store, L.call
    term = {}

    def finish(b):
        term['cond'], term['switch'] = L.term_cond, L.term_switch
        return orig_finish(b)

    def load(addr, bits, kind='u'):
        if L.stack_off(addr) is None:
            try:
                m.pointerize(addr)
            except Unsolved:
                pass
        return orig_load(addr, bits, kind)

    def store(addr, bits, val, kind='u'):
        if L.stack_off(addr) is None:
            try:
                m.pointerize(addr)
            except Unsolved:
                pass
        if kind == 'u':
            m.stored(addr, bits, val)
        return orig_store(addr, bits, val, kind)

    def call(ins):
        op = ins.operands[0]
        slot = None
        if op.type == X.X86_OP_MEM:
            # `call [reg+N]`: the slot it reads. An object of ours holds nothing there, so a real return-only
            # function goes in it (to_state), chosen for the cleanup and the answer the path needs
            try:
                a_ = L.address(ins, op)
                m.pointerize(a_)
                slot = m.ev(a_, strict=True) & M32
            except (Unsolved, rise.Refuse, KeyError, TypeError):
                slot = None
        r = orig_call(ins)
        if L.st.r.get('eax') == E.V('callret'):
            name = 'ret_%x' % ins.address
            L.st.r['eax'] = E.V(name)
            if op.type == X.X86_OP_IMM:
                t = op.imm & M32
                info = L.img.info(t) if t in L.img.functions else None
                calls[name] = (t, info.get('pop') if info else None)
            elif slot is not None and m.writable(slot) and not any((slot + i) & M32 in m.mem for i in range(4)):
                icalls[name] = (slot, L.unknown_pop.get(ins.address, 0))
                for i in range(4):
                    m.mem[(slot + i) & M32] = None      # reserved: to_state lays the function down
        for r_ in ('ecx', 'edx'):
            if L.st.r.get(r_) == E.V('callclob'):
                L.st.r[r_] = E.V('clob_%x_%s' % (ins.address, r_))
        return r

    L.finish_block, L.load, L.store, L.call = finish, load, store, call
    seen = []
    reached = False
    trail = []                  # (key, side taken) at each branch this drive chose
    visits = {}
    force = force or {}
    try:
        cur, carried = L.entry, None
        for _step in range(max_steps):
            if carried is not None:
                st = carried.copy()
                L.entry_state = lambda _a, st=st: st.copy()
            term['cond'] = term['switch'] = None
            L.run_block(cur)
            seen.append(cur)
            if cur == target:
                reached = True
            carried = L.out_state[cur]
            if L.dead:
                raise Unsolved('the path ends in a trap')
            b = blocks[cur]
            t = b.term
            goal = to_x if reached else to_t
            if t[0] in ('ret', 'tail', 'tailind'):
                if reached:
                    m.icalls = icalls
                    return m, calls, seen
                raise Unsolved('returned before the target')
            if t[0] in ('trap', 'end'):
                raise Unsolved('the path ends in a trap')
            if t[0] in ('fall', 'jmp'):
                cur = b.succ[0]
                continue
            if t[0] == 'cond':
                c = term['cond']
                tgt, fall = t[1], t[2]
                if c is None or tgt == fall:
                    cur = fall
                    continue
                visits[cur] = visits.get(cur, 0) + 1
                key = (cur, visits[cur])
                nxt_, chose = decide(m, c, tgt, fall, goal, force.get(key))
                if chose and (fall if nxt_ == tgt else tgt) in goal:
                    # a choice backtracking may undo: only where the other side can still get there
                    trail.append((key, nxt_ == tgt))
                cur = nxt_
                continue
            if t[0] == 'switch':
                ld = term['switch']
                opts = sorted((s_ for s_ in b.succ if s_ in goal), key=lambda s_: goal[s_])
                if not opts:
                    raise Unsolved('switch: no way on')
                for s_ in opts:
                    snap = (dict(m.vals), dict(m.mem), m.nobj)
                    try:
                        satisfy_switch(m, ld, s_)
                        cur = s_
                        break
                    except Unsolved:
                        m.vals, m.mem, m.nobj = snap[0], snap[1], snap[2]
                else:
                    raise Unsolved('switch: no case reachable')
                continue
            raise Unsolved('terminator %s' % t[0])
        raise Unsolved('too many steps (a loop it cannot leave)')
    except DeadEnd:
        raise
    except Unsolved as u:
        raise DeadEnd(str(u), trail)
    finally:
        L.finish_block, L.load, L.store, L.call = orig_finish, orig_load, orig_store, orig_call
        if 'entry_state' in L.__dict__:
            del L.entry_state


def decide(m, c, tgt, fall, goal, forced=None):
    """(the successor to take at a conditional branch, whether it was a choice), deciding the state if the
    branch is still open. `forced` (True: the jump, False: fall through) is a backtracking drive's order."""
    m.tent, m.points = {}, []
    try:
        v = m.ev(c)
        open_ = bool(m.points)
    except Unsolved:
        v, open_ = None, False
    if v is not None and not open_:
        took, other = (tgt, fall) if v else (fall, tgt)
        if took not in goal and other in goal and forced is None:
            # the values decided so far send it where the target cannot be reached from: change one of them,
            # if every branch passed so far still goes the same way
            m.tent, m.points = {}, []
            if revise(m, c, not v):
                m.path.append((c, not v) + m.snapshot())
                return other, False
        m.path.append((c, bool(v)) + m.snapshot())
        return took, False                  # the decided values fix it: follow it
    order = sorted(((goal.get(tgt, 1 << 30), True, tgt), (goal.get(fall, 1 << 30), False, fall)))
    if forced is not None:
        order = [o for o in order if o[1] == forced]
    for d, want, s_ in order:
        if d >= 1 << 30:
            continue
        snap = (dict(m.vals), dict(m.mem), m.nobj)
        try:
            satisfy(m, c, want)
            m.path.append((c, want) + m.snapshot())
            return s_, True
        except Unsolved:
            m.vals, m.mem, m.nobj = snap[0], snap[1], snap[2]
    # neither side can be forced from here: a dead end, so the drive backs up to an earlier choice rather than
    # locking in whatever the defaults were (a `this` of 0 is how a later field read becomes impossible)
    raise Unsolved('cannot send the branch that way')


# ----------------------------------------------------------------------------------------------- the model

_GONE = object()


class Stores(dict):
    """the bytes the function stored, with their history: `at()` is a view of them as they are now that stays
    as it was however many stores come after (what a branch passed long ago was read against). A copy per
    branch was gigabytes for a function that fills a buffer in a loop."""

    def __init__(self):
        super().__init__()
        self.ver = 0
        self.log = {}               # address -> [(version, byte or _GONE)]

    def _note(self, a, v):
        self.ver += 1
        self.log.setdefault(a, []).append((self.ver, v))

    def __setitem__(self, a, v):
        super().__setitem__(a, v)
        self._note(a, v)

    def pop(self, a, d=None):
        if a in self:
            self._note(a, _GONE)
        return super().pop(a, d)

    def at(self):
        return StoresAt(self, self.ver)


class StoresAt:
    def __init__(self, st, ver):
        self.st, self.ver = st, ver

    def get(self, a, d=None):
        h = self.st.log.get(a)
        if not h:
            return d
        lo, hi = 0, len(h)
        while lo < hi:
            mid = (lo + hi) // 2
            if h[mid][0] <= self.ver:
                lo = mid + 1
            else:
                hi = mid
        if lo == 0:
            return d
        v = h[lo - 1][1]
        return d if v is _GONE else v

    def __contains__(self, a):
        return self.get(a, _GONE) is not _GONE


class Model:
    """what a state decides: input values, memory bytes, objects. Addresses are model addresses: HEAP+...
    for the objects this state creates, the image's own for globals, SP0-... for the frame."""

    def __init__(self, img):
        self.img = img
        self.vals = {}          # atom name -> value
        self.mem = {}           # model address -> byte the state lays down (the memory the function starts with)
        self.cur = Stores()     # model address -> byte the function itself stored on the way (read first)
        self.sym = {}           # model address -> (bytes, expression) it stored there, when not yet a number
        self.nobj = 0
        self.tent = {}          # choice point -> tentative value (this condition only)
        self.points = []        # choice points met while evaluating, in order
        self.path = []          # (condition, outcome, cur, sym) of every branch the drive went through: what a
                                # later change to an already decided value must keep true
        self._snap = None       # (cur, sym) copied once per run of branches with no store between them

    def new_obj(self):
        if self.nobj >= NOBJ:
            raise Unsolved('out of objects')
        a = HEAP + OBJ * self.nobj + 0x40
        self.nobj += 1
        return a

    # -- atoms that are pointers
    def pointerize(self, e):
        """make sure the base of an address expression is an object (allocating one), if it is an atom"""
        base, _k = E.split_add(e)
        if base is not None and base[0] == 'bin' and base[1] == '+':
            # base + index (an array): the 32-bit term is the pointer, the rest is the index
            terms, work = [], [base]
            while work:
                x = work.pop()
                if x[0] == 'bin' and x[1] == '+':
                    work += [x[2], x[3]]
                else:
                    terms.append(x)
            ptr = [t for t in terms if (t[0] == 'ld' and t[1] == 32) or t[0] == 'v']
            if len(ptr) >= 1:
                base = ptr[0]
        if base is None:
            return
        if base[0] == 'v' and base[1] not in self.vals and not base[1].startswith(('sp0', 'sp1', 'clob_')):
            if base[1].startswith(('in_', 'arg_', 'ret_')):
                self.vals[base[1]] = self.new_obj()
        elif base[0] == 'ld':
            self.pointerize(base[2])
            try:
                a = self.ev(base[2], strict=True)
            except Unsolved:
                return
            n = base[1] // 8
            if not all((a + i) & M32 in self.mem for i in range(n)) and self.writable(a):
                p = self.new_obj()
                for i in range(n):
                    self.mem[(a + i) & M32] = (p >> (8 * i)) & 0xFF

    def writable(self, a):
        """memory a state may lay down: its own objects, and the image's DATA (never code, .rdata or the
        resources: those pages are read-only in the harness as in the game, and a constant table is not an
        input anyway)"""
        if HEAP <= a < HEAP + OBJ * NOBJ:
            return True
        if SP0 - FRAME <= a < SP0:
            # the entry's own frame, below its return address: a byte the function reads before it ever
            # stores it (a buffer an answered callee would have filled) holds whatever the stack held, and
            # the harness lays that down (`frame` in cowdiff.c's pin_region). A byte the function stored is
            # in `cur` and is read from there, never chosen.
            return True
        return any(lo <= a < hi for lo, hi in self.img.data_ranges)

    # -- evaluation
    def ev(self, e, strict=False):
        t = e[0]
        if t == 'c':
            return e[1]
        if t == 'v':
            n = e[1]
            if n == 'sp0':
                return SP0
            if n in self.vals:
                return self.vals[n]
            if strict or not n.startswith(('in_', 'arg_', 'ret_')):
                raise Unsolved('atom %s' % n)
            key = ('v', n)
            if key not in self.tent:
                self.tent[key] = 0
                self.points.append(key)
            return self.tent[key]
        if t == 'fn' and e[1] == 'COW_IMG':
            return self.ev(e[3][0], strict)
        if t == 'ld':
            bits = e[1]
            if not strict:
                try:
                    self.pointerize(e[2])   # an address's base is an object before anything reads through it
                except Unsolved:
                    pass
            a = self.ev(e[2], strict) & M32
            n = bits // 8
            have = [self.cur.get((a + i) & M32, self.mem.get((a + i) & M32)) for i in range(n)]
            if -1 in have:
                rec = self.sym.get(a)
                if rec is not None and rec[0] == n:
                    return self.ev(rec[1], strict) & ((1 << bits) - 1 if bits < 32 else M32)
                raise Unsolved('a value the function stored and nobody can know')
            if all(b is not None for b in have):
                return sum(b << (8 * i) for i, b in enumerate(have))
            if self.img.lo <= a < self.img.hi and not self.writable(a):
                try:
                    return int.from_bytes(self.img.read(a, n), 'little')       # a constant: what the image holds
                except Exception:
                    raise Unsolved('memory %08x' % a)
            if strict or not self.writable(a):
                raise Unsolved('memory %08x' % a)
            key = ('m', a, bits)
            if key not in self.tent:
                # the image's own bytes are what a global holds when nobody lays anything down
                v = 0
                if self.img.lo <= a < self.img.hi:
                    try:
                        v = int.from_bytes(self.img.read(a, n), 'little')
                    except Exception:
                        v = 0
                self.tent[key] = v
                self.points.append(key)
            v = self.tent[key]
            return sum(((have[i] if have[i] is not None else (v >> (8 * i)) & 0xFF) << (8 * i)) for i in range(n))
        if t == 'bin':
            op = e[1]
            if op == '&&':
                return 1 if (self.ev(e[2], strict) and self.ev(e[3], strict)) else 0
            if op == '||':
                return 1 if (self.ev(e[2], strict) or self.ev(e[3], strict)) else 0
            x, y = self.ev(e[2], strict), self.ev(e[3], strict)
            return E.ev(('bin', op, E.C(x), E.C(y)), {})
        if t == 'un':
            return E.ev(('un', e[1], E.C(self.ev(e[2], strict))), {})
        if t == 'zx':
            return self.ev(e[2], strict) & ((1 << e[1]) - 1)
        if t == 'sx':
            return E.sx_const(self.ev(e[2], strict), e[1]) & M32
        if t == 'ite':
            return self.ev(e[2], strict) if self.ev(e[1], strict) else self.ev(e[3], strict)
        if t == 'fn' and e[1] == 'PARITY':
            v = self.ev(e[3][0], strict) & 0xFF
            return 1 if bin(v).count('1') % 2 == 0 else 0
        # ---- x87 values (Python floats)
        if t == 'ldf':
            return self.evf_load(e, strict)
        if t == 'dbin':
            x, y = self.ev(e[2], strict), self.ev(e[3], strict)
            try:
                return {'+': x + y, '-': x - y, '*': x * y, '/': (x / y) if y else math.copysign(math.inf, x) if x else math.nan}[e[1]]
            except OverflowError:
                return math.inf
        if t == 'dun':
            x = self.ev(e[2], strict)
            if e[1] == 'sqrt':
                return math.sqrt(x) if x >= 0 else math.nan
            f = {'-': lambda v: -v, 'neg': lambda v: -v, 'abs': abs, 'fabs': abs, 'sin': math.sin, 'cos': math.cos,
                 'tan': math.tan}.get(e[1])
            if f is None:
                raise Unsolved('form dun %s' % e[1])
            try:
                return f(x)
            except (ValueError, OverflowError):
                return math.nan
        if t == 'dcmp':
            x, y = self.ev(e[2], strict), self.ev(e[3], strict)
            if x != x or y != y:
                return 1 if e[1] == '!=' else 0
            return 1 if {'<': x < y, '<=': x <= y, '>': x > y, '>=': x >= y, '==': x == y, '!=': x != y}[e[1]] else 0
        if t == 'cvt':
            x = self.ev(e[2], strict)
            if e[1] == 'i2d':
                return float(E.sx_const(int(x) & M32, 32))
            if e[1] == 'i16d':
                return float(E.sx_const(int(x) & 0xFFFF, 16))
            if e[1] == 'd2f':
                try:
                    return struct.unpack('<f', struct.pack('<f', x))[0]
                except OverflowError:
                    return math.copysign(math.inf, x)
            raise Unsolved('form cvt %s' % e[1])
        if t == 'fn' and e[1] in ('fr', 'frnd'):
            return self.ev(e[3][0], strict)
        if t == 'fn' and e[1] == 'cow_fsw':
            a, b = self.ev(e[3][0], strict), self.ev(e[3][1], strict)
            if a != a or b != b:
                c3, c2, c0 = 1, 1, 1
            elif a > b:
                c3, c2, c0 = 0, 0, 0
            elif a < b:
                c3, c2, c0 = 0, 0, 1
            else:
                c3, c2, c0 = 1, 0, 0
            return (c3 << 14) | (c2 << 10) | (c0 << 8)
        if t == 'raw' and len(e) > 2 and e[2] == 'd':
            try:
                return float(e[1])
            except ValueError:
                raise Unsolved('form raw')
        raise Unsolved('form %s' % t)

    def evf_load(self, e, strict):
        bits = e[1]
        if not strict:
            try:
                self.pointerize(e[2])
            except Unsolved:
                pass
        a = self.ev(e[2], strict) & M32
        n = bits // 8
        fmt = '<f' if n == 4 else '<d'
        have = [self.cur.get((a + i) & M32, self.mem.get((a + i) & M32)) for i in range(n)]
        if -1 in have:
            raise Unsolved('a value the function stored and nobody can know')
        if all(b_ is not None for b_ in have):
            return struct.unpack(fmt, bytes(have))[0]
        if self.img.lo <= a < self.img.hi and not self.writable(a):
            try:
                return struct.unpack(fmt, bytes(self.img.read(a, n)))[0]   # a float constant of the image
            except Exception:
                raise Unsolved('memory %08x' % a)
        if strict or not self.writable(a):
            raise Unsolved('memory %08x' % a)
        key = ('f', a, bits)
        if key not in self.tent:
            v = 0.0
            if self.img.lo <= a < self.img.hi:
                try:
                    v = struct.unpack(fmt, bytes(self.img.read(a, n)))[0]
                except Exception:
                    v = 0.0
            self.tent[key] = v
            self.points.append(key)
        return self.tent[key]

    def snapshot(self):
        if self._snap is None:
            self._snap = (self.cur.at(), dict(self.sym))
        return self._snap

    def stored(self, addr, bits, val):
        """the function stored val at addr on the way: later reads of those bytes see it"""
        try:
            a = self.ev(addr, strict=True) & M32
        except Unsolved:
            return
        n = bits // 8
        self._snap = None                  # the stores changed: the next snapshot is a new copy
        for i in range(n):
            self.cur.pop((a + i) & M32, None)
        for o in [o for o in self.sym if o < a + n and a < o + self.sym[o][0]]:
            del self.sym[o]
        try:
            v = self.ev(val, strict=True)
        except Unsolved:
            # not a number yet (it depends on something no branch has decided): kept as the expression, so a
            # later read of exactly these bytes is that expression, and deciding it decides its inputs
            self.sym[a] = (n, val)
            for i in range(n):
                self.cur[(a + i) & M32] = -1
            return
        for i in range(n):
            self.cur[(a + i) & M32] = (v >> (8 * i)) & 0xFF

    def commit(self):
        for key, v in self.tent.items():
            if key[0] == 'v':
                self.vals[key[1]] = v & M32
            elif key[0] == 'f':
                _f, a, bits = key
                raw = struct.pack('<f' if bits == 32 else '<d', v)
                for i, b_ in enumerate(raw):
                    self.mem.setdefault((a + i) & M32, b_)
            else:
                _m, a, bits = key
                for i in range(bits // 8):
                    self.mem.setdefault((a + i) & M32, (v >> (8 * i)) & 0xFF)
        self.tent, self.points = {}, []


def consts_of(e, out):
    if e[0] == 'c':
        out.add(e[1])
    elif e[0] in ('bin', 'dbin'):
        consts_of(e[2], out)
        consts_of(e[3], out)
    elif e[0] in ('un', 'zx', 'sx', 'cvt'):
        consts_of(e[2], out)
    elif e[0] == 'ite':
        for x in e[1:]:
            consts_of(x, out)
    return out


def candidates(cond):
    cs = consts_of(cond, set())
    out = [0, 1]
    for c in sorted(cs):
        for d in (0, 1, -1, 2):
            out.append((c + d) & M32)
        out.append((~c) & M32)
    out += [0xFFFFFFFF, 0x80000000, 0x7FFFFFFF, 0x100, 0x10000]
    return list(dict.fromkeys(out))


def float_consts(m, e, out):
    """the float values a condition compares against: constants of the image, raw literals"""
    if not isinstance(e, tuple) or not e:
        return out
    if e[0] == 'ldf':
        try:
            out.add(m.ev(e, strict=True))
        except (Unsolved, KeyError):
            pass
        return out
    if e[0] == 'raw' and len(e) > 2 and e[2] == 'd':
        try:
            out.add(float(e[1]))
        except ValueError:
            pass
        return out
    for x in e[1:]:
        if isinstance(x, tuple):
            float_consts(m, x, out)
        elif isinstance(x, (list,)) or (isinstance(x, tuple)):
            for y in x:
                float_consts(m, y, out)
    if e[0] == 'fn':
        for x in e[3]:
            float_consts(m, x, out)
    return out


def float_candidates(m, cond):
    cs = {c for c in float_consts(m, cond, set()) if c == c and abs(c) != math.inf}
    out = [0.0, 1.0, -1.0, 0.5, -0.5, 100.0, -100.0, 1e6, -1e6]
    for c in sorted(cs):
        out += [c, c + 1.0, c - 1.0, c * 2.0, -c, c * 0.5, c + abs(c) * 0.01 + 1e-3, c - abs(c) * 0.01 - 1e-3]
    return list(dict.fromkeys(out))


def satisfy(m, cond, want):
    """decide what cond reads so that it evaluates to want"""
    if cond[0] == 'switch':
        _s, idx_ld, target = cond
        return satisfy_switch(m, idx_ld, target)
    m.tent, m.points = {}, []
    v = m.ev(cond)
    if bool(v) == want:
        m.commit()
        return
    points = list(m.points)
    base = dict(m.tent)
    for p in points:
        wide = p[0] == 'v' or (p[0] == 'm' and p[2] == 32)
        cands = float_candidates(m, cond) if p[0] == 'f' else (['obj'] if wide else []) + candidates(cond)
        for c in cands:
            nobj = m.nobj
            if c == 'obj':
                # a field that is tested and then followed (`if (this->p) this->p->x`): an object, not a 1
                try:
                    c = m.new_obj()
                except Unsolved:
                    continue
            m.tent = dict(base)
            m.tent[p] = c
            m.points = []
            try:
                v = m.ev(cond)
            except Unsolved:
                m.nobj = nobj
                continue
            if bool(v) == want:
                m.commit()
                return
            m.nobj = nobj
    # two choice points at once (x == y with both unknown)
    for i, p in enumerate(points):
        for q in points[i + 1:]:
            cp = float_candidates(m, cond)[:12] if p[0] == 'f' else candidates(cond)[:12]
            cq = float_candidates(m, cond)[:12] if q[0] == 'f' else candidates(cond)[:12]
            for c in cp:
                for d in cq:
                    m.tent = dict(base)
                    m.tent[p], m.tent[q] = c, d
                    m.points = []
                    try:
                        v = m.ev(cond)
                    except Unsolved:
                        continue
                    if bool(v) == want:
                        m.commit()
                        return
    if revise(m, cond, want):
        return
    raise Unsolved('cannot send the branch that way')


def holds(m, cond, want, cur, sym):
    """does cond still come out `want`, read against the function's own stores as they were back then"""
    keep = (m.cur, m.sym, m.tent, m.points)
    m.cur, m.sym, m.tent, m.points = cur, sym, {}, []
    try:
        return bool(m.ev(cond, strict=True)) == want
    except Unsolved:
        return False
    finally:
        m.cur, m.sym, m.tent, m.points = keep


def revise(m, cond, want):
    """the branch reads a value an earlier branch already decided (`test byte [ecx+0x2c], 1` fixed the
    whole byte to 1; now `(dword [ecx+0x2c] & 7) >= 6` needs 7): try other values for it, and take one only
    if every branch the drive has gone through still comes out the way it did"""
    spots = []
    for ld in walk_lds(cond):
        try:
            a = m.ev(ld[2], strict=True) & M32
        except Unsolved:
            continue
        n = ld[1] // 8
        if any((a + i) & M32 in m.cur for i in range(n)):
            continue                                   # the function's own store: not the state's to change
        if any(m.mem.get((a + i) & M32) is not None for i in range(n)):
            spots.append(('m', a, n))
    for name in sorted(vars_of(cond)):
        if name in m.vals and name.startswith(('in_', 'arg_', 'ret_')):
            spots.append(('v', name, 4))
    if len(m.path) > 2000:
        return False                    # checking every branch passed would cost more than the state is worth
    for kind, where, n in spots[:4]:
        for c in candidates(cond)[:24]:
            old_mem, old_vals = m.mem, m.vals
            if kind == 'm':
                m.mem = dict(old_mem)
                for i in range(n):
                    m.mem[(where + i) & M32] = (c >> (8 * i)) & 0xFF
            else:
                m.vals = dict(old_vals)
                m.vals[where] = c & M32
            if holds(m, cond, want, m.cur, m.sym) and all(holds(m, *p_) for p_ in m.path):
                return True
            m.mem, m.vals = old_mem, old_vals
    return False


def vars_of(e, out=None):
    out = set() if out is None else out
    if isinstance(e, tuple) and e:
        if e[0] == 'v':
            out.add(e[1])
            return out
        for x in e[1:]:
            if isinstance(x, tuple):
                vars_of(x, out)
            elif isinstance(x, list):
                for y in x:
                    vars_of(y, out)
    return out


def satisfy_switch(m, ld, target):
    """`jmp [table + idx*4]` to one target: the index whose table entry is that target"""
    if ld[0] != 'ld':
        raise Unsolved('switch shape')
    # table + index*4: the constant terms (a number, or the image address COW_IMG(n)) are the table
    terms, work = [], [ld[2]]
    while work:
        x = work.pop()
        if x[0] == 'bin' and x[1] == '+':
            work += [x[2], x[3]]
        else:
            terms.append(x)
    k, rest = 0, []
    for t_ in terms:
        if t_[0] == 'c':
            k += t_[1]
        elif t_[0] == 'fn' and t_[1] == 'COW_IMG' and t_[3][0][0] == 'c':
            k += t_[3][0][1]
        else:
            rest.append(t_)
    if not rest:
        raise Unsolved('switch base')
    base = rest[0]
    for t_ in rest[1:]:
        base = E.add(base, t_)
    k &= M32
    for i in range(0, 256):
        try:
            w = int.from_bytes(m.img.read((k + 4 * i) & M32, 4), 'little')
        except Exception:
            break
        if w == target:
            # the index itself, where the scaling is plain (idx*4, idx<<2): its candidates are then i itself
            if base[0] == 'bin' and base[3] == ('c', 4) and base[1] == '*':
                return satisfy(m, E.cmp('==', base[2], E.C(i)), True)
            if base[0] == 'bin' and base[3] == ('c', 2) and base[1] == '<<':
                return satisfy(m, E.cmp('==', base[2], E.C(i)), True)
            return satisfy(m, E.cmp('==', E.add(base, E.C(0)), E.C(4 * i)), True)
    raise Unsolved('no table entry')


# ----------------------------------------------------------------------------------------------- one state

def tok(v):
    if HEAP <= v < HEAP + OBJ * NOBJ:
        return 'heap+0x%x' % (v - HEAP)
    return '0x%x' % (v & M32)


def to_state(m, calls, stubbable, note):
    st = {'note': note}
    args = {}
    regs = {}
    for n, v in sorted(m.vals.items()):
        if n.startswith('arg_'):
            k = (int(n[4:], 16) - 4) // 4
            if 0 <= k < 8:
                args[k] = tok(v)
        elif n.startswith('in_') and n[3:] in ('eax', 'ecx', 'edx', 'ebx', 'esi', 'edi', 'ebp'):
            regs[n[3:]] = tok(v)
    nargs = max(args) + 1 if args else 0
    st['args'] = [args.get(k, '0') for k in range(max(4, nargs))]
    if nargs > 4:
        st['nargs'] = nargs
    if regs:
        st['regs'] = regs
    # every direct callee on the path that both sides route through the harness is ANSWERED: its body would
    # run in a world nobody set up (a manager object read from a global, its device, its vtable) and fault,
    # and a state the original does not finish proves nothing. A branch on what one returned gets the value
    # it needs; the others answer 0, or the object the path then uses. One answer per callee (the table is
    # keyed by target), at most 8.
    stubs, by_target = [], {}
    for n, (t, _rise_pop) in calls.items():
        v = m.vals.get(n)
        pop = stubbable.get(t) if t is not None else None     # the judge's own count (judge2.callee_purge)
        if t is None or t not in stubbable or pop is None:
            if v is not None:
                raise Unsolved('a branch on what %s returned, and that callee cannot be answered' % n)
            continue
        # the k-th call of a callee on the path gets the k-th answer (cowdiff.c: `--stub T=A|B|C`): both
        # sides make its calls in the same order, or they already differ on the call log
        by_target.setdefault(t, []).append(v if v is not None else 0)
    for t, answers in by_target.items():
        if len(answers) > 8:
            if len(set(answers[7:])) > 1:
                raise Unsolved('one callee would have to answer more than 8 ways')
            answers = answers[:8]
        while len(answers) > 1 and answers[-1] == answers[-2]:
            answers.pop()                   # past the last answer the last repeats
        pop = stubbable[t]
        info = m.img.info(t) if t in m.img.functions else {}
        na = info.get('nargs')
        if na is None or (pop and na > pop // 4) or na > 16:
            na = pop // 4               # what its cleanup says, when the read-off count is not believable
        stubs.append({'target': '0x%08x' % t, 'eax': '|'.join(tok(x) for x in answers), 'pop': '0x%x' % pop,
                      'nargs': na})
    if len(stubs) > 8:
        stubs = stubs[:8]
    # indirect calls: the slot points at a return-only function with the right cleanup and answer
    nfake = 0
    for n, (slot, pop) in getattr(m, 'icalls', {}).items():
        fn = trivial_for(m.img, pop, m.vals.get(n))
        if fn is None:
            # no function in the image does just that: the slot gets an address that is no function at all
            # (FAKE_LO up), and the state answers it as a stub - an indirect call asks the harness's seam
            # before it looks for code (rt_set_indirect_stub), on both sides
            if len(stubs) >= 8:
                raise Unsolved('more than 8 callees to answer')
            fn = FAKE_LO + 16 * nfake
            nfake += 1
            v = m.vals.get(n)
            stubs.append({'target': '0x%08x' % fn, 'eax': tok(v if v is not None else 0), 'pop': '0x%x' % pop,
                          'nargs': pop // 4})
        for i in range(4):
            m.mem[(slot + i) & M32] = (fn >> (8 * i)) & 0xFF
    if stubs:
        st['stubs'] = stubs
    # memory: runs of decided bytes, at most 32 to a write; a 4-byte object address is written as a pointer
    mem = []
    addrs = sorted(m.mem)
    i = 0
    while i < len(addrs):
        a = addrs[i]
        word = [m.mem.get(a + j) for j in range(4)]
        if all(b is not None for b in word):
            v = sum(b << (8 * j) for j, b in enumerate(word))
            if HEAP <= v < HEAP + OBJ * NOBJ:
                mem.append((a, '&' + tok(v)))
                i += 4
                while i < len(addrs) and addrs[i] < a + 4:
                    i += 1
                continue
        run = [m.mem[a]]
        j = i + 1
        while j < len(addrs) and addrs[j] == a + len(run) and len(run) < 32:
            nxt4 = [m.mem.get(addrs[j] + q) for q in range(4)]
            if all(b is not None for b in nxt4) and HEAP <= sum(b << (8 * q) for q, b in enumerate(nxt4)) < HEAP + OBJ * NOBJ:
                break
            run.append(m.mem[addrs[j]])
            j += 1
        mem.append((a, ''.join('%02x' % b for b in run)))
        i = j
    if len(mem) > 48:
        raise Unsolved('more than 48 memory writes')
    out = []
    for a, val in mem:
        if HEAP <= a < HEAP + OBJ * NOBJ:
            out.append({'where': 'heap', 'off': '0x%x' % (a - HEAP), 'bytes': val})
        elif SP0 - FRAME <= a < SP0:
            out.append({'where': 'frame', 'off': '0x%x' % (a - (SP0 - FRAME)), 'bytes': val})
        else:
            out.append({'where': '0x%08x' % a, 'off': '0', 'bytes': val})
    if out:
        st['mem'] = out
    return st


def walk_lds(e, out=None):
    out = [] if out is None else out
    if isinstance(e, tuple) and e:
        if e[0] == 'ld':
            out.append(e)
            walk_lds(e[2], out)
        elif e[0] in ('bin', 'dbin'):
            walk_lds(e[2], out)
            walk_lds(e[3], out)
        elif e[0] in ('un', 'zx', 'sx', 'cvt'):
            walk_lds(e[2], out)
        elif e[0] == 'ite':
            for x in e[1:]:
                walk_lds(x, out)
        elif e[0] == 'fn':
            for x in e[3]:
                walk_lds(x, out)
    return out


def seek(img, entry, stubbable, reached=None):
    """the states for one function: [state], plus what was not solved (for the report)"""
    try:
        L = rise.Lifter(img, entry, True)
        facts = rise.scan_fitted(L)     # the facts rise lifts from (an unknown callee's cleanup fitted)
    except rise.Refuse:
        # the lift may have come out of the other frame mode (rise.lift tries both): drive that one
        L = rise.Lifter(img, entry, False)
        facts = rise.scan_fitted(L)
    covered = set(reached or ())
    states, why = [], {}
    t_end = time.time() + FUNC_SECONDS
    for a in L.order:
        if a in covered or len(states) >= MAX_STATES:
            continue
        if time.time() > t_end:
            # a function whose drives take this long has more targets than the cycle has minutes: the states
            # found so far are kept, the rest are counted, never silently dropped
            why['time budget'] = why.get('time budget', 0) + 1
            continue
        st, seen, last = None, None, None
        force = {}
        for _attempt in range(10):
            try:
                m, calls, seen = drive(L, facts, a, stubbable, force=force)
                st = to_state(m, calls, stubbable, 'seek: drives to %x' % a)
                break
            except DeadEnd as d:
                last = d
                # backtrack: the latest choice not yet forced goes the other way, the ones before it stay
                flip = [(k, side) for k, side in d.trail if k not in force]
                if not flip:
                    break
                k, side = flip[-1]
                force = {kk: ss for kk, ss in d.trail[:d.trail.index((k, side))]}
                force[k] = not side
            except (Unsolved, rise.Refuse, KeyError, IndexError, TypeError, ValueError, AttributeError,
                    RecursionError, ZeroDivisionError, OverflowError) as u:
                # one target the drive cannot get to; the function's other targets are still tried
                last = u if not isinstance(u, RecursionError) else Unsolved('an expression too deep to evaluate')
                break
        if st is None:
            k = str(last).split(':')[0][:50]
            why[k] = why.get(k, 0) + 1
            continue
        states.append(st)
        covered.update(seen)
    return states, why


# ----------------------------------------------------------------------------------------------- driver

_IMG = None


def load_image(image):
    import pefile
    img = rise.Image(ROOT, image, None)
    img.lo = img.prog.base
    img.hi = img.prog.base + len(img.prog.image)
    img.read = img.prog.read
    pe = pefile.PE(image, fast_load=True)
    base = pe.OPTIONAL_HEADER.ImageBase
    # writable, initialised or not, and not code (IMAGE_SCN_MEM_WRITE without IMAGE_SCN_CNT_CODE)
    img.data_ranges = [(base + s_.VirtualAddress, base + s_.VirtualAddress + s_.Misc_VirtualSize)
                       for s_ in pe.sections if s_.Characteristics & 0x80000000 and not s_.Characteristics & 0x20]
    img.trivial = trivial_functions(img)
    return img


def trivial_functions(img):
    """{(bytes its ret pops, what it returns): address} for the image's functions that do nothing but return:
    `ret N` (eax untouched: None), `xor eax, eax / ret N` (0), `mov eax, K / ret N` (K), `mov al, 1` / `xor al,
    al` ('al1' / 'al0'). A synthesized state points a vtable slot of one of its objects at one, so an
    indirect call on the path is a real call into real code on both sides - it just has nothing to do."""
    out = {}
    for e in sorted(img.functions):
        try:
            ins = img.decode(e).insns
        except Exception:
            continue
        if not ins or len(ins) > 2 or ins[-1].mnemonic != 'ret' or ins[0].address != e:
            continue
        pop = ins[-1].operands[0].imm if ins[-1].operands else 0
        val = 'none'
        if len(ins) == 2:
            t = '%s %s' % (ins[0].mnemonic, ins[0].op_str)
            if t == 'xor eax, eax':
                val = 0
            elif t == 'mov al, 1':
                val = 'al1'
            elif t == 'xor al, al':
                val = 'al0'
            elif ins[0].mnemonic == 'mov' and ins[0].op_str.startswith('eax, '):
                try:
                    val = int(ins[0].op_str[5:], 0) & M32
                except ValueError:
                    continue
            else:
                continue
        out.setdefault((pop, val), e)
    return out


def trivial_for(img, pop, v):
    """a return-only function popping `pop` bytes whose answer is v (None: any)"""
    t = img.trivial
    if v is None:
        for k in ((pop, 'none'), (pop, 0)):
            if k in t:
                return t[k]
        return None
    if (pop, v) in t:
        return t[(pop, v)]
    if v & 0xFF == 1 and (pop, 'al1') in t:
        return t[(pop, 'al1')]          # a byte answer: the callers of these test al
    if v & 0xFF == 0 and (pop, 'al0') in t:
        return t[(pop, 'al0')]
    return None


def _init(image):
    global _IMG
    _IMG = load_image(image)


def stubbable_of(entry):
    """the callees the judge routes through the harness for this unit's row (judge2.stub_list)"""
    try:
        sys.path.insert(0, os.path.join(ROOT, 'tools', 'cow'))
        import judge2
        import trivial_audit
        index = getattr(stubbable_of, '_index', None)
        if index is None:
            index = stubbable_of._index = trivial_audit.body_index()
        src = os.path.join(os.environ.get('COW_LIFT_SRC') or os.path.join(ROOT, 'src', 'lifted'), 'cow_%s.c' % entry)
        text = open(src, encoding='utf-8', errors='replace').read() if os.path.isfile(src) else ''
        return dict(judge2.pin_stub_list(index, entry, text))
    except Exception:
        return {}


def _work(entry):
    try:
        states, why = seek(_IMG, int(entry, 16), stubbable_of(entry))
    except Exception as x:          # a function rise cannot scan has no seeds: that is all
        return entry, None, {str(x)[:60]: 1}
    return entry, states, why


def free_bytes():
    """physical memory free for new processes, or None when it cannot be read"""
    try:
        if os.name == 'nt':
            import ctypes

            class MS(ctypes.Structure):
                _fields_ = [('len', ctypes.c_ulong), ('load', ctypes.c_ulong), ('total', ctypes.c_ulonglong),
                            ('avail', ctypes.c_ulonglong), ('tpage', ctypes.c_ulonglong), ('apage', ctypes.c_ulonglong),
                            ('tvirt', ctypes.c_ulonglong), ('avirt', ctypes.c_ulonglong), ('aext', ctypes.c_ulonglong)]
            ms = MS()
            ms.len = ctypes.sizeof(MS)
            if ctypes.windll.kernel32.GlobalMemoryStatusEx(ctypes.byref(ms)):
                return ms.avail
            return None
        with open('/proc/meminfo') as fh:
            for line in fh:
                if line.startswith('MemAvailable:'):
                    return int(line.split()[1]) * 1024
    except Exception:
        return None
    return None


WORKER_BYTES = 1600 << 20       # one worker: the image and its program (~800 MB) and a function's drives


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--list', required=True)
    ap.add_argument('--image', default=os.path.join(ROOT, 'generated', 'FFXiMain.unpacked.dll'))
    ap.add_argument('--out', default=os.path.join(ROOT, 'cow', 'seeds_auto'))
    ap.add_argument('--jobs', type=int, default=max(1, (os.cpu_count() or 2) - 1))
    a = ap.parse_args()
    entries = [l.strip().lower().replace('0x', '') for l in open(a.list) if l.strip()]
    for need in (a.image, os.path.join(ROOT, 'generated', 'build.json')):
        if not os.path.isfile(need):
            # said here: a worker that cannot load the image only ever reports a broken process pool
            print('SEEK FAIL: %s is missing' % need)
            sys.exit(2)
    os.makedirs(a.out, exist_ok=True)
    free = free_bytes()
    if free is not None and a.jobs > max(1, free // WORKER_BYTES):
        # each worker holds the whole image: more of them than the memory holds is a pool killed halfway
        print('SEEK: %d workers, not %d: %.1f GB free' % (max(1, free // WORKER_BYTES), a.jobs, free / 2 ** 30))
        a.jobs = int(max(1, free // WORKER_BYTES))
    made, states_total, why_all = 0, 0, {}
    def keep(entry, states, why):
        nonlocal made, states_total
        for k, v in why.items():
            why_all[k] = why_all.get(k, 0) + v
        path = os.path.join(a.out, entry + '.json')
        if states:
            doc = {'comment': 'synthesized by tools/cow/rise/seek.py - states that take the branches '
                              'random states do not; regenerated, never hand-edited', 'states': states}
            with open(path, 'w', encoding='utf-8', newline='\n') as fh:
                json.dump(doc, fh, indent=1)
            made += 1
            states_total += len(states)
        elif os.path.isfile(path):
            os.remove(path)

    # A worker the system kills (memory) breaks the whole pool. The functions it had not answered are dealt
    # out again to a new pool; one that was in flight when two pools died is given up on, and said so.
    left, tries = list(entries), {}
    while left:
        done = set()
        try:
            with ProcessPoolExecutor(max_workers=a.jobs, initializer=_init, initargs=(a.image,)) as ex:
                futs = {ex.submit(_work, e): e for e in left}
                for f in as_completed(futs):
                    entry, states, why = f.result()
                    keep(entry, states, why)
                    done.add(futs[f])
        except BrokenProcessPool:
            pending = [e for e in left if e not in done]
            print('SEEK: a worker died; %d functions left' % len(pending), flush=True)
            for e in pending[:a.jobs]:
                tries[e] = tries.get(e, 0) + 1
            gone = [e for e in pending if tries.get(e, 0) >= 2]
            for e in gone:
                keep(e, None, {'worker died': 1})
            left = [e for e in pending if e not in set(gone)]
            continue
        left = [e for e in left if e not in done]
    print('SEEK: %d of %d functions have synthesized states (%d states)' % (made, len(entries), states_total))
    for k, v in sorted(why_all.items(), key=lambda kv: -kv[1])[:8]:
        print('   %6d  %s' % (v, k))


if __name__ == '__main__':
    main()
