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
import re
import json
import math
import os
import time
import threading
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
FRAME_DEEP = 0x80000      # and below that, in a frame __chkstk made (cowdiff.c: `deep`)
FLOAT_MS = int(os.environ.get('COW_SEEK_FLOAT_MS') or 4000)   # the solver's time for a branch on floats
# what one state may hold in the harness (cowdiff.c PIN_STUBS_MAX, PIN_ANSWERS_MAX, PIN_WRITES_MAX, judge 14)
STUB_CALLEES = 32
STUB_ANSWERS = 64
MEM_WRITES = 256
ARG_WORDS = 8             # stack argument words a state may set (judge2.FUZZ_ARGS)
SP0 = 0x7F000000           # the frame, as a model address (never laid down: the harness owns the stack)
MAX_STATES = 128            # a run's states for a function ... (below: more for one with more blocks left)
MAX_STATES_BIG = 1024       # a function with that many blocks left gets a state for each, up to this (the row
                            # takes 1536, cowdiff.c PIN_STATES_MAX); 128 a round left a 7,000-block one weak
# THE TIME A FUNCTION GETS. A flat 120 s gave a 3,000-block function the same minutes as a 10-block one, and
# the big ones (13% of the code) ran out of time at their first hundred targets. With the judge's own list of
# the sites it never reached (--reached), the time follows the work left: FUNC_SECONDS for the function, and
# SECONDS_PER_TARGET more for every block still unreached, up to FUNC_SECONDS_MAX.
SECONDS_PER_TARGET = float(os.environ.get('COW_SEEK_SECONDS_PER_TARGET') or 1.5)
FUNC_SECONDS_MAX = float(os.environ.get('COW_SEEK_SECONDS_MAX') or 1200)
FUNC_SECONDS = float(os.environ.get('COW_SEEK_SECONDS') or 120)   # one function's drives, wall clock
DEEP_SECONDS = float(os.environ.get('COW_SEEK_DEEP_SECONDS') or 30)   # and its drives with the whole-path
                                                                    # solver, on top of that (0: none)


class Unsolved(Exception):
    pass


class DeadEnd(Unsolved):
    """a drive that got stuck after choosing at open branches: `trail` is those choices, in order"""

    def __init__(self, why, trail):
        Unsolved.__init__(self, why)
        self.trail = trail


# name -> (the dividend is edx:eax, signed, the remainder) for the lift's division helpers (layout/cow_rise.h)
_DIVS = {'cow_divu': (0, 0, 0), 'cow_modu': (0, 0, 1), 'cow_divs': (0, 1, 0), 'cow_mods': (0, 1, 1),
         'cow_divu64': (1, 0, 0), 'cow_modu64': (1, 0, 1), 'cow_divs64': (1, 1, 0), 'cow_mods64': (1, 1, 1)}

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


_FORCED = {}


def pop_forced(L, addr, pop):
    """is this indirect call's count the only one the function's frame allows? rise's scan with it moved by a
    word either way: when both refuse (esp would not agree where paths meet, or at `ret`), the frame itself
    says it, and the original's side runs right on it."""
    key = (L.entry, addr, pop)
    if key in _FORCED:
        return _FORCED[key]
    ok = True
    for d in (4, -4):
        if pop + d < 0:
            continue
        L2 = rise.Lifter(L.img, L.entry, L.guest)
        L2.use_saves, L2.use_vslots = getattr(L, 'use_saves', False), getattr(L, 'use_vslots', False)
        L2.allow_rebase = getattr(L, 'allow_rebase', False)
        L2.choices = dict(getattr(L, 'choices', {}) or {})
        L2.choices[('p', addr)] = pop + d
        try:
            rise.scan(L2)
            ok = False              # another count fits the frame as well: not this one for sure
            break
        except rise.Refuse:
            continue
        except Exception:
            ok = False
            break
    _FORCED[key] = ok
    return ok


def entry_locations(L, a, st):
    """BLOCK ENTRY: [(kind, where, expression)] in the order rise's entry_support reads them (registers, flags,
    frame slots, x87), so the location a variable is laid down in is the one cow_entry_fix_<entry> reads it from"""
    out = [('r', r, st.r.get(r)) for r in rise.GPR]
    out += [('f', f, st.f.get(f)) for f in rise.FLAGS]
    out += [('s', off, sl) for off, sl in sorted(st.s.items())]
    return out


def drive(L, facts, target, stubbable, max_steps=3000, force=None, deep=False, start=None):
    """run the function from its entry, block by block, deciding the state as it goes: a branch whose
    outcome the decided values already fix is followed; at one they do not, the side that gets closer to
    `target` (then to a return) is chosen and the condition solved for it. Returns (model, calls, blocks)."""
    blocks = L.blocks
    to_t = distances(blocks, lambda a: a == target)
    to_x = distances(blocks, lambda a: blocks[a].term[0] in ('ret', 'tail', 'tailind'))
    if (start or L.entry) not in to_t:
        raise Unsolved('no path')
    m = Model(L.img)
    m.deep = deep               # the whole-path solver and backtracking through decided branches
    L.t_start = time.time()     # rise's 90 s guard is per drive here; the function's budget is FUNC_SECONDS
    calls = []                  # (ret atom, target, pop) for every direct call, in the order the path makes them
    per_target = {}             # target -> the atoms of its calls so far
    site_words = {}             # target -> the most words a call site on the path pushed for it
    icalls = {}                 # ret atom -> (vtable slot's model address, bytes popped) of an indirect call
    saved_order = L.order
    L.order = []
    L.run('scan', entry_facts=dict(facts))
    L.order = saved_order
    orig_finish, orig_load, orig_store, orig_call = L.finish_block, L.load, L.store, L.call
    term = {}

    def finish(b):
        term['cond'], term['switch'] = L.term_cond, L.term_switch
        if b.term and b.term[0] == 'tailind' and b.ins:
            tail_slot(b.ins[-1])
        return orig_finish(b)

    def tail_slot(ins):
        # `jmp [reg+N]` at the end (a COM release thunk: `mov ecx, [eax]; jmp [ecx+8]`, 0x102641e0, reached by
        # every this-adjusting thunk in front of it): the same as an indirect call's slot, except that what
        # lands there returns to OUR caller, so it pops what this function pops - the judge's own count for
        # the row (judge2.callee_purge, cowdiff_batch.h ret_pop1). An object of ours held nothing there and
        # every state jumped to address 0.
        op = ins.operands[0]
        if op.type != X.X86_OP_MEM:
            return
        # rise keeps the frame's words itself, so `ld(sp0+4)` in an expression is the argument as the state
        # passed it; the function may have stored over it since (`mov [esp+4], eax`, the thunk's this for
        # the target), and the model's own record of that store must not be read in its place
        keep = (m.cur, m.sym)
        argw = {a for a in m.cur if SP0 <= a < SP0 + 0x1000}
        m.cur = Masked(m.cur, argw)
        m.sym = {k: v for k, v in m.sym.items() if not SP0 <= k < SP0 + 0x1000}
        try:
            a_ = L.address(ins, op)
            m.chain(a_)
            slot = m.ev(a_, strict=True) & M32
        except (Unsolved, rise.Refuse, KeyError, TypeError):
            return
        finally:
            m.cur, m.sym = keep
        if not m.writable(slot) or any((slot + i) & M32 in m.mem for i in range(4)) and not _fresh_pointer(m, slot):
            return
        pop_ = unit_pop(L.entry)
        if pop_ is None and op.mem.base and not op.mem.index:
            # the body has no ret of its own to say it: the slot does, when every vtable of the image pops the
            # same there (IUnknown::Release at +8 pops its this) - the jump's target IS the function's way out
            try:
                pop_ = L.img.vslot_pop(op.mem.disp)
            except Exception:
                pop_ = None
        icalls['ret_%x' % ins.address] = (slot, pop_ or 0, pop_ is not None)
        for i in range(4):
            m.mem[(slot + i) & M32] = None

    def null_page(addr):
        # A READ OR WRITE IN THE NULL PAGE ends the path on the real code, both sides: `alloc() == 0`, then
        # `obj->state = 3` (0x101d2cc0). The drive used to keep going past it once its target was reached, and
        # every state it made faulted at that store: `no clean state`. It is a dead end: the branches before
        # it are tried the other way.
        try:
            a_ = m.ev(addr, strict=True) & M32
        except (Unsolved, KeyError, TypeError, RecursionError):
            return
        if a_ < 0x10000:
            raise DeadEnd('a read or write in the null page', list(trail))

    def load(addr, bits, kind='u'):
        if L.stack_off(addr) is None:
            try:
                m.pointerize(addr)
            except Unsolved:
                pass
            null_page(addr)
        return orig_load(addr, bits, kind)

    def store(addr, bits, val, kind='u'):
        if L.stack_off(addr) is None:
            try:
                m.pointerize(addr)
            except Unsolved:
                pass
            null_page(addr)
        if kind == 'u':
            val = keep_old(addr, bits, val)
            m.stored(addr, bits, val)
        return orig_store(addr, bits, val, kind)

    def keep_old(addr, bits, val):
        # A READ TAKEN BEFORE A STORE KEEPS ITS VALUE. A read is kept as an expression, `ld(address)`, and
        # evaluated when a branch asks: against the function's stores so far. So `mov ecx, [esp+0x68];
        # add ecx, 8; mov [esp+0x68], ecx; mov eax, [ecx]` (0x10185b7d, a block start: the frame word is the
        # state's) read [ecx] at W+16, not W+8: ecx's own expression read the word again AFTER the store.
        # Every counter kept in memory does this (`mov eax, [esp+0x74]; inc eax; mov [esp+0x74], eax;
        # cmp eax, edx`), and the branch behind it was decided on a value one step off, or not at all
        # ("cannot send the branch that way"). Before a store lands, every expression still in use that reads
        # those bytes (registers, flags, frame slots, the x87 stack, the words stored so far) gets what they
        # hold now in its place, under a name of its own (Model.old_value).
        try:
            a_ = m.ev(addr, strict=True) & M32
        except (Unsolved, KeyError, TypeError, ValueError, RecursionError):
            return val
        n_ = bits // 8
        memo = {}

        def fz(e_):
            return m.freeze(e_, a_, n_, memo) if isinstance(e_, tuple) else e_
        st_ = L.st
        try:
            for d_ in (st_.r, st_.f, st_.frec):
                for k_, e_ in list(d_.items()):
                    y_ = fz(e_)
                    if y_ is not e_:
                        d_[k_] = y_
            for k_, sl in list(st_.s.items()):
                e_ = getattr(sl, 'e', None)
                if isinstance(e_, tuple):
                    y_ = fz(e_)
                    if y_ is not e_:
                        st_.s[k_] = type(sl)(sl.size, sl.kind, y_)
            st_.x = [fz(e_) for e_ in st_.x]
            if isinstance(st_.fsw, tuple):
                st_.fsw = fz(st_.fsw)
            for k_, (sz_, e_) in list(m.sym.items()):
                if k_ != a_:
                    y_ = fz(e_)
                    if y_ is not e_:
                        m.sym[k_] = (sz_, y_)
            for k_, e_ in list(m.alias.items()):
                y_ = fz(e_)
                if y_ is not e_:
                    m.alias[k_] = y_
            return fz(val)
        except RecursionError:
            return val

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
        elif op.type == X.X86_OP_REG:
            # `mov eax, [obj+N]` ... `call eax`: the register holds a word loaded from memory, and that word is
            # the slot, exactly as for `call [obj+N]`
            v_ = L.st.r.get(ins.reg_name(op.reg))
            if v_ is not None and v_[0] == 'ld' and v_[1] == 32:
                try:
                    m.pointerize(v_[2])
                    slot = m.ev(v_[2], strict=True) & M32
                except (Unsolved, rise.Refuse, KeyError, TypeError):
                    slot = None
            elif v_ is not None and v_[0] == 'v' and v_[1] not in m.vals and \
                    not v_[1].startswith(('sp0', 'sp1', 'clob_', 'ret_')):
                # the register is an INPUT of the state (`call eax` where eax came in with it: a state started at
                # the block, 0x10010020's `call eax` at 0x100100c2): the input itself is the slot. Left free, the
                # state handed the call whatever the register happened to hold, it faulted on both sides, and the
                # instruction after the call was a site no state reached
                slot = ('atom', v_[1])
        if op.type == X.X86_OP_MEM and not op.mem.base and not op.mem.index:
            imp = L.img.iat.get(op.mem.disp & M32)
            if imp and imp[1] in CS_IMPORTS:
                _unowned_section(m, L)
        L.last_nargs = None
        r = orig_call(ins)
        pushed = L.last_nargs           # the words rise's call passes: the same the unit passes
        fitted = L.unknown_pop.get(ins.address)     # what rise's fit says this call pops, when nothing else does
        if L.st.r.get('eax') == E.V('callret'):
            name = 'ret_%x' % ins.address
            if op.type == X.X86_OP_IMM:
                t = op.imm & M32
                info = L.img.info(t) if t in L.img.functions else None
                seq = per_target.setdefault(t, [])
                # One atom per CALL, not per call site: a site in a loop is asked again each time round, and
                # the harness answers a state's stub call by call (the k-th call its k-th answer). From the
                # 8th call on it repeats the 8th answer, so those calls share the 8th's atom: the path can
                # only be driven the way the harness will answer.
                name = 'ret_%x_%d' % (ins.address, len(calls)) if len(seq) < STUB_ANSWERS else seq[STUB_ANSWERS - 1]
                seq.append(name)
                calls.append((name, t, info.get('pop') if info and info.get('pop') is not None else fitted))
                # the words the UNIT passes at this site, when rise's lift said (EMIT_NARGS): a drive's scan can
                # count a register save the emitted code does not pass
                pushed = rise.EMIT_NARGS.get(L.entry, {}).get(ins.address, pushed)
                if pushed is not None and pushed <= 16:
                    site_words[t] = pushed
            L.st.r['eax'] = E.V(name)
            if op.type == X.X86_OP_IMM:
                pass
            elif slot is not None and (isinstance(slot, tuple) or
                                       m.writable(slot) and (not any((slot + i) & M32 in m.mem for i in range(4))
                                                             or _fresh_pointer(m, slot))):
                pop_ = L.unknown_pop.get(ins.address, 0)
                # THE CLEANUP OF AN IMPORT IS NOT A GUESS AND NOT THE NUMBER OF PUSHES. `call dword ptr
                # [0x10329320]` reaches user32!MapVirtualKeyA: side A runs the runtime's own shim for it, that
                # shim ends with RET(value, nargs) which pops nargs words, and the judge answers the import with
                # the same count (tools/cow/judge_import_pops.h, generated from those shims). So the number is
                # known even where the game's pushes disagree with it, and BOTH sides have to use it or the two
                # walks part company on esp. 0x101b29f0's last six sites waited on exactly this: the code pushes
                # 4 words before MapVirtualKeyA (which pops 2) and 2 before keybd_event (which pops 4), so the
                # pair balances and no rule that reads one call at a time can see it; seek saw 8 bytes of drift
                # at 0x101b2cbf and refused every state that went through the block ("esp differs at 101b2cbf
                # (-472 vs -480)").
                imp_pop = None
                imp = None
                if op.type == X.X86_OP_MEM and not op.mem.base and not op.mem.index:
                    imp = L.img.iat.get(op.mem.disp & M32)
                elif slot is not None and not isinstance(slot, tuple):
                    # THE SLOT CAN REACH THE CALL THROUGH A REGISTER, and then the call names nothing:
                    # `mov esi, dword ptr [0x10329320] ... call esi` (0x101b29f0 at 0x101b2caa) is the
                    # import thunk the compiler made for MapVirtualKeyA, and rise's own `call` sees it
                    # exactly this way (it reads the register's value, a load of the slot's address, and
                    # asks the import table). Reading only `op.mem.disp` here found no import at all and
                    # the drive went on guessing the cleanup from the pushes - which for this pair of
                    # calls is not the answer, so every state through 0x101b2cbf was refused.
                    imp = L.img.iat.get(slot & M32)
                if imp is not None:
                    nw = L.img.import_args.get(imp)
                    if nw is not None:
                        imp_pop = 4 * nw
                        pop_ = imp_pop
                # how sure that count is: the original's side of a state runs on the count a pinned answer
                # pops, ours does not, so a wrong one is a FAIL that is the state's and not the unit's. Sure is:
                # the import's own shim says so (above), the caller cleans up after it (`add esp, N` next, and
                # nothing popped), or every vtable of the image pops that at this slot.
                sure = imp_pop is not None or (pop_ == 0 and _caller_cleans(L, ins))
                if not sure and op.type == X.X86_OP_MEM and op.mem.base and not op.mem.index:
                    try:
                        sure = L.img.vslot_pop(op.mem.disp) == pop_
                    except Exception:
                        sure = False
                if not sure:
                    # the count the UNIT was emitted with (rise.EMIT_POPS, pinned into this drive's choices): the
                    # answer pops exactly that, our side passes exactly that, so both sides go on with the same
                    # esp whatever the method really pops. Only a count the unit does not share was a FAIL that
                    # belonged to the state (398 of 1174 functions stopped here in the first aim round of
                    # OnePass8's run).
                    sure = rise.EMIT_POPS.get(L.entry, {}).get(ins.address) == pop_
                if not sure:
                    sure = pop_forced(L, ins.address, pop_)
                icalls[name] = (slot, pop_, sure)
                if isinstance(slot, tuple):
                    m.vals[slot[1]] = 0                 # reserved: to_state puts the function there
                else:
                    for i in range(4):
                        m.mem[(slot + i) & M32] = None      # reserved: to_state lays the function down
        for r_ in ('ecx', 'edx'):
            if L.st.r.get(r_) == E.V('callclob'):
                L.st.r[r_] = E.V('clob_%x_%s' % (ins.address, r_))
        return r

    orig_string = L.string

    def string(ins, mn, prefix):
        # `repne scasb` over what a callee returned (0x101d0640: strlen of 0x101d05e0's answer): the string
        # instructions read and write through esi/edi without passing load/store, so their pointers were never
        # made objects and every state faulted in the null page
        kind = mn[:4]
        for r in {'movs': ('esi', 'edi'), 'stos': ('edi',), 'lods': ('esi',), 'scas': ('edi',),
                  'cmps': ('esi', 'edi')}.get(kind, ()):
            v = L.st.r.get(r)
            if v is not None:
                try:
                    m.pointerize(v)
                except Unsolved:
                    pass
                null_page(v)
        return orig_string(ins, mn, prefix)

    orig_muldiv = L.muldiv

    def muldiv(ins, mn):
        # A DIVISOR IS NOT 0. A path through `idiv edi` with edi undecided laid nothing there, the state's fill
        # was 0 and the original faulted at the division (0x10057fb0: `mov edi, [ecx+0x10]; cdq; idiv edi`,
        # every state started at 0x100585b0). The division is a condition like a branch: the divisor != 0.
        if mn in ('div', 'idiv') and len(ins.operands) == 1 and L.bits(ins.operands[0]) == 32:
            c = m.unalias(E.cmp("!=", L.rd(ins, ins.operands[0]), E.C(0)))
            try:
                v = m.ev(c, strict=True)
            except Unsolved:
                v = None
            if v is None:
                try:
                    satisfy(m, c, True)
                    m.path.append((c, True) + m.snapshot())
                except Unsolved:
                    pass
            elif not v:
                # the divisor is 0 by a value the state decided on the way, for no branch's sake (a field that
                # was read as a count and came out 0): changed like a branch that goes the wrong way, if every
                # branch passed so far still goes as it did (0x101626e0: `movsx ecx, word [esi+0x54]; cdq;
                # idiv ecx`, five targets "a division by 0 at 10162989")
                m.tent, m.points = {}, []
                if revise(m, c, True) or zsolve(m, c, True):
                    m.path.append((c, True) + m.snapshot())
                else:
                    raise DeadEnd('a division by 0 at %x' % ins.address, list(trail))
        return orig_muldiv(ins, mn)

    L.finish_block, L.load, L.store, L.call = finish, load, store, call
    L.muldiv = muldiv
    L.string = string
    seen = []
    reached = False
    trail = []                  # (key, side taken) at each branch this drive chose
    visits = {}
    force = force or {}
    try:
        cur, carried = L.entry, None
        if start is not None:
            # a state that starts AT a block (judge 14): the block's own inputs are what the state chooses
            st0 = L.entry_state(start)
            cur, carried = start, st0
            m.start = start
            m.entry_locs = entry_locations(L, start, st0)
            m.args_written = {o_ for (o_, _sz) in getattr(L, '_argw', ())}
            for e_ in list(st0.r.values()) + list(st0.f.values()) + [sl.e for sl in st0.s.values()]:
                for n_ in E.vars_of(e_):
                    if n_ not in ('sp0', 'sp1', 'sp2'):
                        m.free.add(n_)
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
            if carried is not None and len(seen) % 16 == 0:
                carried = fold_deep(m, carried)
            if L.dead:
                raise Unsolved('the path ends in a trap')
            b = blocks[cur]
            t = b.term
            goal = to_x if reached else to_t
            if t[0] in ('ret', 'tail', 'tailind'):
                if reached:
                    m.icalls = icalls
                    m.site_words = site_words
                    return m, calls, seen
                raise Unsolved('returned before the target')
            if t[0] in ('trap', 'end'):
                raise Unsolved('the path ends in a trap')
            if t[0] in ('fall', 'jmp'):
                cur = b.succ[0]
                continue
            if t[0] == 'cond':
                c = term['cond']
                if c is not None:
                    c = m.unalias(c)        # its old_ atoms spelled out: what decides it reads only real inputs
                tgt, fall = t[1], t[2]
                if c is None or tgt == fall:
                    cur = fall
                    continue
                visits[cur] = visits.get(cur, 0) + 1
                key = (cur, visits[cur])
                n_path = len(m.path)
                nxt_, chose = decide(m, c, tgt, fall, goal, force.get(key))
                if len(m.path) > n_path:
                    m.path_keys.append(key)
                if (fall if nxt_ == tgt else tgt) in goal and (chose or deep):
                    # a branch backtracking may turn round - chosen, or fixed by values the solver can change -
                    # only where the other side can still get there
                    trail.append((key, nxt_ == tgt))
                cur = nxt_
                continue
            if t[0] == 'switch':
                ld = m.unalias(term['switch'])
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
    except DeadEnd as d:
        if reached and not hasattr(d, 'partial'):
            # past the target: backtracking may still find a way out, and if it cannot, the state that got
            # there is kept (seek's attempt loop) - its sites are reached even if the run then faults
            m.icalls = icalls
            m.site_words = site_words
            m.partial = str(d)
            d.partial = (m, calls, seen)
        raise
    except Unsolved as u:
        if reached:
            # THE TARGET WAS REACHED; only the way out is unknown (a loop the model cannot leave, a branch on
            # something it cannot choose). That is NOT a state that reaches the target: the judge counts a
            # site only in a run the original FINISHES (an afault state is thrown away whole, its sites with
            # it), so this drive is handed back as a dead end with its trail, for backtracking to turn the
            # branches round, and kept aside as the last resort (seek's attempt loop). It used to be returned
            # as a success: the target was booked covered, nothing was retried, the why said nothing, and the
            # judge discarded the state (0x100496f0: 826 pinned states, two sites never counted).
            m.icalls = icalls
            m.site_words = site_words
            m.partial = str(u)
            d = DeadEnd(str(u), trail)
            core = getattr(m, 'last_core', None)
            if core:
                d.core = {m.path_keys[i] for i in core if i < len(m.path_keys)}
            d.partial = (m, calls, seen)
            raise d
        d = DeadEnd(str(u), trail)
        core = getattr(m, 'last_core', None)
        if core:
            d.core = {m.path_keys[i] for i in core if i < len(m.path_keys)}
        raise d
    finally:
        L.finish_block, L.load, L.store, L.call = orig_finish, orig_load, orig_store, orig_call
        L.muldiv = orig_muldiv
        L.string = orig_string
        if 'entry_state' in L.__dict__:
            del L.entry_state


DEEP_FOLD = 64         # an expression deeper than this is folded to the number it already is


def _depth(e, limit):
    """the depth of an expression, counted without recursion, up to `limit`"""
    work, best = [(e, 1)], 0
    while work:
        x, d = work.pop()
        if d > best:
            best = d
            if best > limit:
                return best
        if isinstance(x, tuple):
            for y in x[1:]:
                if isinstance(y, tuple):
                    work.append((y, d + 1))
                elif isinstance(y, list):
                    work.extend((z, d + 1) for z in y if isinstance(z, tuple))
    return best


def fold_deep(m, st):
    """A LOOP'S VALUES AS NUMBERS. A register a loop adds to on every pass carries the whole history of the
    loop as one expression, one level deeper each time round: past a few thousand passes it could not be
    evaluated at all ("an expression too deep to evaluate", 28 targets in one function) and every target
    after the loop was lost. Once its inputs are decided it is just a number, so it becomes that number. One
    that still depends on something open stays an expression."""
    st = st.copy()
    for r, e in list(st.r.items()):
        if isinstance(e, tuple) and _depth(e, DEEP_FOLD) > DEEP_FOLD:
            try:
                st.r[r] = E.C(m.ev(e, strict=True) & M32)
            except (Unsolved, KeyError, TypeError, ValueError, RecursionError, ZeroDivisionError, OverflowError):
                pass
    for off, sl in list(st.s.items()):
        e = getattr(sl, 'e', None)
        if isinstance(e, tuple) and getattr(sl, 'kind', 'u') == 'u' and _depth(e, DEEP_FOLD) > DEEP_FOLD:
            try:
                st.s[off] = type(sl)(sl.size, sl.kind, E.C(m.ev(e, strict=True) & ((1 << (8 * sl.size)) - 1)))
            except (Unsolved, KeyError, TypeError, ValueError, RecursionError, ZeroDivisionError, OverflowError):
                pass
    return st


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
        if forced is not None and forced != bool(v):
            # backtracking turned this one round: the values have to change so it goes the other way
            m.tent, m.points = {}, []
            if revise(m, c, forced) or zsolve(m, c, forced):
                m.path.append((c, forced) + m.snapshot())
                return other, True
            raise Unsolved('cannot send the branch that way')
        if took not in goal and other in goal and forced is None:
            # the values decided so far send it where the target cannot be reached from: change one of them,
            # if every branch passed so far still goes the same way
            m.tent, m.points = {}, []
            if revise(m, c, not v) or zsolve(m, c, not v):
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
    if any(p_[0] == c or p_[0] == ('un', '!', c) or c == ('un', '!', p_[0]) for p_ in m.path):
        # the very test a branch on this path already decided, with nothing in between that changes it
        # (`test eax, eax; je A` ... `test eax, eax; je B`): the other side of this one is dead code
        raise Unsolved('likely dead: the same test an earlier branch on the path decided')
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


class Masked:
    """the function's stores with some bytes taken out: an `ldm` reads the state's own bytes, as they were"""
    def __init__(self, cur, gone):
        self.cur, self.gone = cur, gone

    def get(self, a, d=None):
        return d if a in self.gone else self.cur.get(a, d)

    def __contains__(self, a):
        return a not in self.gone and a in self.cur


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
        self.symd = {}          # model address -> how many stored expressions deep its expression goes
        self.free = set()       # a state that starts at a block: the block's own inputs, as choosable as in_*
        self.alias = {}         # old_<addr>_<k> -> what a word held BEFORE the function stored over it (keep_old)
        self.nobj = 0
        self.tent = {}          # choice point -> tentative value (this condition only)
        self.points = []        # choice points met while evaluating, in order
        self.path = []          # (condition, outcome, cur, sym) of every branch the drive went through: what a
                                # later change to an already decided value must keep true
        self._snap = None       # (cur, sym) copied once per run of branches with no store between them
        self.path_keys = []     # the drive's branch key for each entry of path (backtracking by unsat core)
        self.last_core = None

    def new_obj(self):
        if self.nobj >= NOBJ:
            raise Unsolved('out of objects')
        a = HEAP + OBJ * self.nobj + 0x40
        self.nobj += 1
        return a

    # -- atoms that are pointers
    def pointerize(self, e):
        """make sure the base of an address expression is an object (allocating one), if it is an atom"""
        e = self.unalias(e)
        base, _k = E.split_add(e)
        if base is not None and _k is not None and self.img.lo <= (_k & M32) < self.img.hi:
            # THE CONSTANT IS THE POINTER, the rest is its index: `mov byte [edi + 0x103551e8], 0` (0x10076ebe)
            # stores into a table of the image at index edi. The atom was made an object like any other base,
            # the store landed at heap + 0x103551e8, and the original faulted there in the state that was
            # meant to reach the two instructions behind it. An open index is 0: the table's first entry.
            if base[0] == 'v' and base[1] not in self.vals and \
                    (base[1].startswith(('in_', 'arg_', 'ret_')) or base[1] in self.free):
                self.vals[base[1]] = 0
            return
        if base is not None and base[0] == 'bin' and base[1] == '+':
            # base + index (an array): the 32-bit term is the pointer, the rest is the index
            terms, work = [], [base]
            while work:
                x = work.pop()
                if x[0] == 'bin' and x[1] == '+':
                    work += [x[2], x[3]]
                else:
                    terms.append(x)
            ptr = [t for t in terms if (t[0] in ('ld', 'ldm') and t[1] == 32) or t[0] == 'v']
            # `mov cl, [eax]` ... `mov [edx + eax], cl` (a copy whose edx is dest - src): one term is already a
            # pointer, so the sum is only an address if the OTHER term is chosen to make it one. The open atom
            # becomes (a fresh object) - (the rest), and both reads and writes land in objects of the state.
            free_ = [t for t in terms if t[0] == 'v' and t[1] not in self.vals
                     and (t[1].startswith(('in_', 'arg_', 'ret_')) or t[1] in self.free)]
            if len(free_) == 1 and len(terms) >= 2:
                rest = [t for t in terms if t is not free_[0]]
                try:
                    known = sum(self.ev(t, strict=True) for t in rest) & M32
                except (Unsolved, KeyError, TypeError):
                    known = None
                if known is not None and HEAP <= known < HEAP + OBJ * NOBJ:
                    self.vals[free_[0][1]] = (self.new_obj() - known) & M32
                    return
                if known is not None and (SP0 - FRAME_DEEP) <= known <= SP0 + 0x400:
                    # an index into the frame (`mov eax, [esp + ebx + 0x4c]`, 0x100cb4e0): the open term is the
                    # index, and 0 keeps the read in the frame. Left open, every state started there read
                    # wherever the register pointed and died on the next instruction
                    self.vals[free_[0][1]] = 0
                    return
                if known is not None and self.img.lo <= known < self.img.hi:
                    # ... and an index into a table of the image (the address written as COW_IMG(k) + atom)
                    self.vals[free_[0][1]] = 0
                    return
            if len(ptr) >= 1:
                base = ptr[0]
        if base is None:
            return
        if base[0] == 'v' and base[1] not in self.vals and not base[1].startswith(('sp0', 'sp1', 'clob_')):
            if base[1].startswith(('in_', 'arg_', 'ret_')) or base[1] in self.free:
                # an object starts 0x40 in; an access further below its pointer than that (a this-adjusting
                # thunk: `sub [esp+4], 0x94` then `mov eax, [eax-8]`, 0x10265950) would land in the object
                # before it, or below the heap for the first one. The pointer moves up instead, so the lowest
                # access is the object's first byte.
                k = _k - (1 << 32) if _k & 0x80000000 else _k
                lift = (-k - 0x40 + 15) & ~15 if -OBJ // 2 < k < -0x40 else 0
                self.vals[base[1]] = self.new_obj() + lift
        elif base[0] == 'ldm':
            # a word of the state's own that the function has stored over since (`mov ecx, [esp+0x68]; add ecx, 8;
            # mov [esp+0x68], ecx; mov eax, [ecx]`, 0x10185b7d): what it held at the start is the pointer
            a, n = base[2], base[1] // 8
            if n == 4 and not all((a + i) & M32 in self.mem for i in range(n)) and self.writable(a):
                p = self.new_obj()
                for i in range(n):
                    self.mem[(a + i) & M32] = (p >> (8 * i)) & 0xFF
        elif base[0] == 'ld':
            self.pointerize(base[2])
            self.settle(base[2])
            try:
                a = self.ev(base[2], strict=True)
            except Unsolved:
                return
            n = base[1] // 8
            rec = self.sym.get(a & M32)
            if rec is not None and rec[0] == n:
                # the function stored this word itself (`obj = new X(); this->p = obj; this->p->state = 3`): the
                # value it stored is what the address is made of, so that value is made an object (0x101d2cc0:
                # the constructor's answer stayed 0, and every state faulted at the store through it)
                self.pointerize(rec[1])
                return
            if not all((a + i) & M32 in self.mem for i in range(n)) and self.writable(a):
                p = self.new_obj()
                for i in range(n):
                    self.mem[(a + i) & M32] = (p >> (8 * i)) & 0xFF

    def chain(self, e, depth=0):
        """An address read through pointers nothing decided (`mov eax, [arg-8]; mov ecx, [eax]; jmp [ecx+8]`):
        each word on the way that the state still leaves open becomes a fresh object of the state, inside out,
        so the address evaluates. No branch on the way decided them, so nothing else would."""
        if depth > 6:
            return
        base, _k = E.split_add(e)
        if base is None:
            return
        if base[0] == 'ld' and base[1] == 32:
            self.chain(base[2], depth + 1)
            try:
                a = self.ev(base[2], strict=True) & M32
            except (Unsolved, KeyError, TypeError):
                return
            if self.writable(a) and all(self.cur.get((a + i) & M32, self.mem.get((a + i) & M32)) is None
                                        for i in range(4)):
                p = self.new_obj()
                for i in range(4):
                    self.mem[(a + i) & M32] = (p >> (8 * i)) & 0xFF
        else:
            self.pointerize(e)

    def settle(self, e, depth=0):
        """AN ADDRESS THAT READS A WORD NOTHING DECIDED: `mov ecx, [eax+0xa90]` ... `mov edi, [eax+ecx*4+0xa10]`
        (an index kept in the object). The slot the pointer has to go in cannot be said until the index is, so
        an index word of the state's own memory that is still open is decided now, as 0 (0x1003d220: the
        pointer stayed random and every state faulted on it)."""
        if depth > 8 or not isinstance(e, tuple):
            return
        if e[0] == 'ld':
            self.settle(e[2], depth + 1)
            try:
                a = self.ev(e[2], strict=True)
            except (Unsolved, KeyError, TypeError):
                return
            n = e[1] // 8
            if self.writable(a) and not any((a + i) & M32 in self.mem for i in range(n)):
                for i in range(n):
                    self.mem[(a + i) & M32] = 0
            return
        for x in e[1:]:
            if isinstance(x, tuple):
                self.settle(x, depth + 1)

    def writable(self, a):
        """memory a state may lay down: its own objects, and the image's DATA (never code, .rdata or the
        resources: those pages are read-only in the harness as in the game, and a constant table is not an
        input anyway)"""
        if HEAP <= a < HEAP + OBJ * NOBJ:
            return True
        if SP0 + 4 <= a < SP0 + 4 + 4 * ARG_WORDS:
            # the entry's own stack arguments, read as bytes or as a float (`fld dword [esp+4]`): rise reads
            # those through memory, not as an arg_ atom, and a branch on a float argument was "cannot send the
            # branch that way" for want of being allowed to choose it. to_state turns them into --pin-args words.
            return True
        if SP0 - FRAME_DEEP <= a < SP0:
            # the entry's own frame, below its return address: a byte the function reads before it ever
            # stores it (a buffer an answered callee would have filled) holds whatever the stack held, and
            # the harness lays that down (`frame` in cowdiff.c's pin_region). A byte the function stored is
            # in `cur` and is read from there, never chosen.
            return True
        return any(lo <= a < hi for lo, hi in self.img.data_ranges)

    # -- evaluation
    def ev(self, e, strict=False):
        # ONE VALUE PER SUBEXPRESSION. A loop's accumulated expression shares its parts (the same `ld` inside
        # every later one), and evaluated as a tree it costs 2^depth: 0x102c69ef's drive never came back and
        # held the aim for 5.3 hours. Within one evaluation a part is computed once; what it reads only ever
        # gains decisions (an object placed, a tentative value), so the second look would find the same.
        if t_ := (e[0] if e else None):
            if t_ in ('c',):
                return e[1]
        memo = getattr(self, '_memo', None)
        if memo is None:
            self._memo = {}
            try:
                return self._ev_memo(e, strict)
            finally:
                self._memo = None
        return self._ev_memo(e, strict)

    def _ev_memo(self, e, strict):
        k = (id(e), strict)
        m = self._memo
        hit = m.get(k)
        if hit is not None and hit[0] is e:
            return hit[1]
        v = self._ev_raw(e, strict)
        m[k] = (e, v)
        return v

    def _ev_raw(self, e, strict=False):
        t = e[0]
        if t == 'c':
            return e[1]
        if t == 'v':
            n = e[1]
            if n == 'sp0':
                return SP0
            if n in self.vals:
                return self.vals[n]
            if n in self.alias:
                return self.ev(self.alias[n], strict)
            if strict or not (n.startswith(('in_', 'arg_', 'ret_')) or n in self.free):
                raise Unsolved('atom %s' % n)
            key = ('v', n)
            if key not in self.tent:
                self.tent[key] = 0
                self.points.append(key)
            return self.tent[key]
        if t == 'fn' and e[1] == 'COW_IMG':
            return self.ev(e[3][0], strict)
        if t == 'ldm':
            # the state's own bytes at a fixed address, read past whatever the function stored there since
            a, n = e[2], e[1] // 8
            keep = (self.cur, self.sym)
            self.cur = Masked(self.cur, {(a + i) & M32 for i in range(n)})
            self.sym = {k: v for k, v in self.sym.items() if not (k < a + n and a < k + v[0])}
            try:
                return self.ev(('ld', e[1], E.C(a)), strict)
            finally:
                self.cur, self.sym = keep
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
        if t == 'fn' and e[1] in _DIVS:
            # A QUOTIENT OR A REMAINDER (layout/cow_rise.h: cow_divu, cow_mods64, ...). They had no value here,
            # so every branch on one (`cdq; idiv ecx; cmp edx, ebx; jle`, 0x101626e0) was "cannot send the
            # branch that way". A division that would trap (by 0, or a quotient that does not fit) has none.
            wide, signed, rem = _DIVS[e[1]]
            a_ = [self.ev(x, strict) & M32 for x in e[3]]
            n_ = (a_[0] << 32 | a_[1]) if wide else a_[0]
            d_ = a_[-1]
            if not d_:
                raise Unsolved('a division by 0')
            if signed:
                nb = 64 if wide else 32
                n_ = n_ - (1 << nb) if n_ >> (nb - 1) else n_
                d_ = d_ - (1 << 32) if d_ >> 31 else d_
                q_ = abs(n_) // abs(d_) * (-1 if (n_ < 0) != (d_ < 0) else 1)
                if not -(1 << 31) <= q_ < (1 << 31):
                    raise Unsolved('a quotient that does not fit')
            else:
                q_ = n_ // d_
                if q_ > M32:
                    raise Unsolved('a quotient that does not fit')
            return (n_ - q_ * d_ if rem else q_) & M32
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
        if t == 'fn' and e[1] == 'cow_bits2f':
            # a float that went through memory or a register as its bits (a spilled `fstp dword`, reloaded)
            return struct.unpack('<f', struct.pack('<I', self.ev(e[3][0], strict) & M32))[0]
        if t == 'fn' and e[1] == 'cow_bits2d':
            lo, hi = self.ev(e[3][0], strict) & M32, self.ev(e[3][1], strict) & M32
            return struct.unpack('<d', struct.pack('<II', lo, hi))[0]
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
        # `x = f(x)`: the expression reads the very bytes it is about to replace. Kept as it is, a later read
        # of x evaluated f(x) against the NEW x, which is itself, and recursed until the stack gave out (every
        # target after such a store was "an expression too deep to evaluate"). The read is of the value before
        # the store, so it is replaced by that value now: the number, or the expression stored there before.
        val = self._own_value(val, a, n)
        self._snap = None                  # the stores changed: the next snapshot is a new copy
        for i in range(n):
            self.cur.pop((a + i) & M32, None)
        for o in [o for o in self.sym if o < a + n and a < o + self.sym[o][0]]:
            del self.sym[o]
        try:
            v = self.ev(val, strict=True)
        except Unsolved:
            v = None
            # how deep this word's stored expression goes through the words it was computed from
            d = 0
            for ld in walk_lds(val):
                try:
                    la = self.ev(ld[2], strict=True) & M32
                except (Unsolved, KeyError, TypeError, ValueError, RecursionError):
                    continue
                d = max(d, self.symd.get(la, 0))
            d += 1
            if d > DEEP_FOLD or _depth(val, DEEP_FOLD) > DEEP_FOLD:
                # a loop storing into the same word round after round, on top of an input nothing has decided:
                # kept as an expression it nests one level deeper each pass, and past a few thousand it can no
                # longer be evaluated at all ("an expression too deep to evaluate"). Its open inputs take the
                # values they would have now, and the word becomes the number it then is.
                try:
                    keep_t, keep_p = self.tent, self.points
                    self.tent, self.points = {}, []
                    v = self.ev(val)
                    self.commit()
                    self.tent, self.points = keep_t, keep_p
                except (Unsolved, RecursionError, KeyError, TypeError, ValueError):
                    self.tent, self.points = keep_t, keep_p
                    v = None
        if v is None:
            # not a number yet (it depends on something no branch has decided): kept as the expression, so a
            # later read of exactly these bytes is that expression, and deciding it decides its inputs
            self.sym[a] = (n, val)
            self.symd[a] = d
            for i in range(n):
                self.cur[(a + i) & M32] = -1
            return
        for i in range(n):
            self.cur[(a + i) & M32] = (v >> (8 * i)) & 0xFF

    def _own_value(self, e, a, n):
        """e with every read of the n bytes at a replaced by what those bytes hold before a store to them"""
        if not isinstance(e, tuple) or not e:
            return e
        if e[0] == 'ld' and e[1] // 8 == n:
            try:
                la = self.ev(e[2], strict=True) & M32
            except (Unsolved, KeyError, TypeError, ValueError, RecursionError):
                la = None
            if la == a:
                have = [self.cur.get((a + i) & M32) for i in range(n)]
                if all(b is not None and b != -1 for b in have):
                    return E.C(sum(b << (8 * i) for i, b in enumerate(have)))
                rec = self.sym.get(a)
                if -1 in have and rec is not None and rec[0] == n:
                    return rec[1]
                if all(b is None for b in have):
                    return ('ldm', e[1], a)     # the state's own bytes, as they were before the function stored
                return e
        out = []
        for x in e:
            if isinstance(x, tuple):
                out.append(self._own_value(x, a, n))
            elif isinstance(x, list):
                out.append([self._own_value(y, a, n) if isinstance(y, tuple) else y for y in x])
            else:
                out.append(x)
        return tuple(out)

    def old_value(self, a, n, bits):
        """what the n bytes at a hold right now, as an expression no later store changes; None when the bytes
        are part stored and part not"""
        have = [self.cur.get((a + i) & M32) for i in range(n)]
        if all(b is not None and b != -1 for b in have):
            return E.C(sum(b << (8 * i) for i, b in enumerate(have)))
        rec = self.sym.get(a)
        if -1 in have and rec is not None and rec[0] == n:
            defn = rec[1]
        elif all(b is None for b in have):
            defn = ('ldm', bits, a)         # the state's own bytes, as they were before the function stored
        else:
            return None
        name = 'old_%x_%d' % (a, len(self.alias))
        self.alias[name] = defn
        return E.V(name)

    def freeze(self, e, a, n, memo):
        """e with every read of the n bytes at a replaced by what they hold NOW (old_value): for an expression
        that was read before a store to those bytes and is still in use after it"""
        if not isinstance(e, tuple) or not e or e[0] in ('c', 'v', 'ldm'):
            return e
        hit = memo.get(id(e))
        if hit is not None and hit[0] is e:
            return hit[1]
        out = e
        if e[0] == 'ld' and isinstance(e[1], int) and e[1] // 8 == n:
            try:
                la = self.ev(e[2], strict=True) & M32
            except (Unsolved, KeyError, TypeError, ValueError, RecursionError):
                la = None
            if la == a:
                if 'old' not in memo:
                    memo['old'] = self.old_value(a, n, e[1])
                if memo['old'] is not None:
                    out = memo['old']
        if out is e:
            parts, changed = [], False
            for x in e:
                if isinstance(x, tuple):
                    y = self.freeze(x, a, n, memo)
                elif isinstance(x, list):
                    y = [self.freeze(q, a, n, memo) if isinstance(q, tuple) else q for q in x]
                    if all(p_ is q_ for p_, q_ in zip(y, x)):
                        y = x
                else:
                    y = x
                changed = changed or y is not x
                parts.append(y)
            if changed:
                out = tuple(parts)
        memo[id(e)] = (e, out)
        return out

    def unalias(self, e, memo=None):
        """e with every old_ atom replaced by what it stands for"""
        if not self.alias or not isinstance(e, tuple) or not e or e[0] in ('c', 'ldm'):
            return e
        if e[0] == 'v':
            return self.unalias(self.alias[e[1]], memo) if e[1] in self.alias else e
        memo = {} if memo is None else memo
        hit = memo.get(id(e))
        if hit is not None and hit[0] is e:
            return hit[1]
        parts, changed = [], False
        for x in e:
            if isinstance(x, tuple):
                y = self.unalias(x, memo)
            elif isinstance(x, list):
                y = [self.unalias(q, memo) if isinstance(q, tuple) else q for q in x]
                if all(p_ is q_ for p_, q_ in zip(y, x)):
                    y = x
            else:
                y = x
            changed = changed or y is not x
            parts.append(y)
        out = tuple(parts) if changed else e
        memo[id(e)] = (e, out)
        return out

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
    try:
        v = m.ev(cond)
    except Unsolved:
        # the condition reads somewhere no value can be placed as things stand (`[arg + answer]` with the
        # answer an object): only a change to a value already decided can make it readable
        m.tent, m.points = {}, []
        if revise(m, cond, want) or zsolve(m, cond, want):
            return
        raise
    if bool(v) == want:
        # An input the condition only does arithmetic on (`lea ecx,[ecx+0x14]; test ecx,ecx`) comes out 0 by
        # default, and 0 satisfies most "is it non-null" tests. But that input is nearly always a pointer
        # the next block reads through, and a `this` of 0 makes every field read after it impossible: the
        # drive dead-ends one branch later with nothing left to change. So an open register or argument
        # takes an object here whenever an object satisfies the condition as well.
        base = dict(m.tent)
        for p in list(m.points):
            if p[0] == 'v' and base.get(p) == 0 and p[1].startswith(('in_', 'arg_', 'ret_')):
                nobj = m.nobj
                try:
                    o = m.new_obj()
                except Unsolved:
                    break
                m.tent = dict(base)
                m.tent[p] = o
                m.points = []
                try:
                    ok = bool(m.ev(cond)) == want
                except Unsolved:
                    ok = False
                if ok:
                    base = dict(m.tent)
                else:
                    m.nobj = nobj
        m.tent = base
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
    if revise(m, cond, want) or zsolve(m, cond, want):
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
            if kind == 'v' and all(holds(m, *p_) for p_ in m.path) and _revise_open(m, cond, want):
                return True
            m.mem, m.vals = old_mem, old_vals
    return False


def _revise_open(m, cond, want):
    """the decided value changed, the condition now reads bytes nobody decided: a callee's answer that is an
    index or a length (`call 0x100769f0; add esi, eax; mov al, [esi]; test al, al`, 0x10076ab0). The answer
    was an object to keep `!= 0`, so `[arg + answer]` was nowhere; with 1 it is the next byte of arg's
    object, which the state can set. Decide those bytes too; the caller has already checked the path."""
    m.tent, m.points = {}, []
    try:
        v = m.ev(cond)
    except Unsolved:
        m.tent, m.points = {}, []
        return False
    if bool(v) == want and m.points:
        m.commit()
        return True
    points, base = [p_ for p_ in m.points if p_[0] == 'm'], dict(m.tent)
    for p_ in points[:4]:
        for c in candidates(cond)[:24]:
            m.tent = dict(base)
            m.tent[p_] = c
            m.points = []
            try:
                v = m.ev(cond)
            except Unsolved:
                continue
            if bool(v) == want:
                m.commit()
                return True
    m.tent, m.points = {}, []
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
        # the index is a number on this path (`mov eax, 1; jmp [eax*4 + table]`, 0x10159ff0): the jump goes one
        # way, and it is either the wanted one or not. This used to be "switch base" for every case, so a path
        # through such a block could not go on at all
        if int.from_bytes(m.img.read(k & M32, 4), 'little') == target:
            return
        raise Unsolved('switch: the index is fixed on this path')
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

# the kernel32 imports whose first argument is a CRITICAL_SECTION: the harness's shims read it as one, and a
# section that looks owned by another thread is a wait no single-threaded run comes back from (cowdiff.c
# enter_would_wait ends the state). A state passes them a section nobody holds: 24 zero bytes.
CS_IMPORTS = ('EnterCriticalSection', 'LeaveCriticalSection', 'TryEnterCriticalSection', 'DeleteCriticalSection',
              'InitializeCriticalSection', 'InitializeCriticalSectionAndSpinCount')


def _unowned_section(m, L):
    """the word the call passes first (at esp) points at a critical section nobody holds"""
    try:
        off = L.esp_off()
        sl = L.st.s.get(off) if off is not None else None
        if sl is None or sl.size != 4:
            return
        m.pointerize(sl.e)
        a = m.ev(sl.e, strict=True) & M32
    except (Unsolved, rise.Refuse, KeyError, TypeError, ValueError):
        return
    if not m.writable(a):
        return
    for i in range(24):
        if (a + i) & M32 not in m.mem:
            m.mem[(a + i) & M32] = 0


def _caller_cleans(L, ins):
    """the caller takes the call's arguments off itself: an `add esp, N` follows the call, with nothing between
    that moves or reads esp (`call [edi+0x28]; add [ebp-4], 0x54; add esp, 0x10`: 0x1030555f)"""
    nx = L.next_ins(ins)
    for _ in range(6):
        if nx is None:
            return False
        ops = nx.op_str.replace(' ', '')
        if nx.mnemonic == 'add' and ops.startswith('esp,'):
            return True
        if nx.mnemonic in ('push', 'pop', 'call', 'ret', 'leave', 'enter') or nx.mnemonic.startswith('j') \
                or 'esp' in ops:
            return False
        try:
            nx = L.next_ins(nx)
        except ValueError:          # past the block the call is in: no further than that
            return False
    return False


def _fresh_pointer(m, slot):
    """the word at `slot` was decided only as SOME object (a `test eax, eax` wanted it non-zero) and nothing of
    that object was ever read or decided: a function's address does just as well there, and an indirect call
    through it then returns instead of running into data"""
    try:
        bs = [m.mem[(slot + i) & M32] for i in range(4)]
    except KeyError:
        return False
    if any(b is None for b in bs):
        return False
    v = sum(b << (8 * i) for i, b in enumerate(bs))
    if not (HEAP <= v < HEAP + OBJ * NOBJ):
        return False
    lo = v - (v - HEAP) % OBJ
    return not any(lo <= a < lo + OBJ for a in m.mem)


def tok(v):
    if HEAP <= v < HEAP + OBJ * NOBJ:
        return 'heap+0x%x' % (v - HEAP)
    return '0x%x' % (v & M32)


def to_state(m, calls, stubbable, note):
    st = {'note': note}
    args = {}
    regs = {}
    start = getattr(m, 'start', None)
    # an indirect call through an input register: the function goes in the input itself, before the inputs
    # are placed (wherever the state's start reads that input from, the function is what it finds)
    fake_atoms = []
    for n, (slot, pop, sure) in getattr(m, 'icalls', {}).items():
        if isinstance(slot, tuple):
            if not sure:
                raise Unsolved('an indirect call whose cleanup the code does not say')
            fn = trivial_for(m.img, pop, m.vals.get(n))
            if fn is None:
                fn = FAKE_LO + 16 * (len(fake_atoms) + 8)
                fake_atoms.append((fn, n, pop))
            m.vals[slot[1]] = fn
    placed = set()
    # WHAT THE DRIVE ASSUMED IS PART OF THE STATE. An input no branch constrains is still read on the path (an
    # index, a pointer's offset), and the drive ran it on its tentative value, 0. Left out of the state, the
    # judge fuzzed it: 0x100496f0's `starts at 100499f9` never set ecx, so `mov [eax + ecx*4 + 0xa10], edi`
    # stored through a random index, the original faulted, and the target site stayed unreached in every
    # round (`seek made a state for it`). Every input the drive read goes in with the value it was run on.
    vals = {k[1]: v for k, v in getattr(m, 'tent', {}).items() if isinstance(k, tuple) and k and k[0] == 'v'}
    vals.update(m.vals)
    if start is not None:
        # the block's inputs go where the unit's cow_entry_fix reads each one from: the first location holding
        # it, register or frame slot. The others the fix makes agree. A block input the drive never read is
        # laid down as 0 too: the fix reads it either way, and a fuzzed one is a different state every time
        st['entry'] = '0x%08x' % start
        for kind, where, e_ in m.entry_locs:
            ex = e_.e if kind == 's' else e_
            if ex is None or ex[0] != 'v' or ex[1] in placed or ex[1].startswith('arg_'):
                continue
            vals.setdefault(ex[1], 0)
        for kind, where, e_ in m.entry_locs:
            ex = e_.e if kind == 's' else e_
            if ex is None or ex[0] != 'v' or ex[1] in placed or ex[1] not in vals:
                continue
            if ex[1].startswith('arg_'):
                # an ARGUMENT that some register also holds at this block (`mov ebp, [esp+0x18]` earlier): the fix
                # reads the argument word and sets the register from it (`g->ebp = arg2`), so the argument word is
                # where it goes. Laid in the register, the fix overwrote it with whatever the word held (1011cb50).
                continue
            v = vals[ex[1]]
            if kind == 'r':
                regs[where] = tok(v)
            elif kind == 's' and e_.size == 4 and SP0 + where >= SP0 - FRAME_DEEP:
                for i in range(4):
                    m.mem[(SP0 + where + i) & M32] = (v >> (8 * i)) & 0xFF
            else:
                continue
            placed.add(ex[1])
    # started at a block, an argument word the function has since written (`and [ebp+8], 0` makes arg1 a loop
    # counter) holds that value, not the argument: the argument goes nowhere (0x1030555f: the counter started
    # as arg1's object address and indexed past every object)
    reused = set()
    if start is not None:
        # rise forgets an argument word once the function writes it (a write to the caller's memory), so the
        # words it writes anywhere are the ones a block may find holding something else
        reused = {'arg_%x' % off for off in getattr(m, 'args_written', ())}
    for n, v in sorted(vals.items()):
        if n in placed or n in reused:
            continue
        if n.startswith('arg_'):
            k = (int(n[4:], 16) - 4) // 4
            if 0 <= k < 8:
                # an object as an argument: `--pin-args` reads a region only behind '@' (`@heap+0x40`). Bare,
                # the whole state failed to parse and the row was judged without ANY of its pinned states
                # (157 of 543 states, 28 of 66 units) - judged, and passed, on random states alone
                t_ = tok(v)
                args[k] = t_ if t_[:1].isdigit() else '@' + t_
        elif n.startswith('in_') and n[3:] in ('eax', 'ecx', 'edx', 'ebx', 'esi', 'edi', 'ebp') and start is None:
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
    stubs, by_target, pops = [], {}, {}
    for n, t, rise_pop in calls:
        v = m.vals.get(n)
        try:
            site_ = int(n.split('_')[1], 16)
        except (IndexError, ValueError):
            site_ = None
        if site_ in rise.NORET_CALLS or (t is not None and t in m.img.functions and m.img.info(t).get('noreturn')):
            # THE CALL THE PATH ENDS IN, one that never returns (exit, a throw): it is not answered. Answered,
            # the original went on past it into code no run of the program reaches, while the lift stops at
            # the call, and the two could never end the same way (0x10102340: `push -1; call exit`, 5 sites
            # no state could count). Run for real it ends both sides inside the same callee, which is what
            # the judge's same-crash rule asks.
            continue
        pop = stubbable.get(t) if t is not None else None     # the judge's own count (judge2.callee_purge)
        if t is None or t not in stubbable or pop is None:
            if v is not None:
                raise Unsolved('a branch on what %s returned, and that callee cannot be answered' % n)
            continue
        # the k-th call of a callee on the path gets the k-th answer (cowdiff.c: `--stub T=A|B|C`): both
        # sides make its calls in the same order, or they already differ on the call log
        by_target.setdefault(t, []).append(v if v is not None else 0)
        if pops.setdefault(t, pop) != pop:
            raise Unsolved('two calls of one callee pop differently')
    for t, answers in by_target.items():
        if len(answers) > STUB_ANSWERS:
            if len(set(answers[STUB_ANSWERS - 1:])) > 1:
                raise Unsolved('one callee would have to answer more than %d ways' % STUB_ANSWERS)
            answers = answers[:STUB_ANSWERS]
        while len(answers) > 1 and answers[-1] == answers[-2]:
            answers.pop()                   # past the last answer the last repeats
        pop = pops[t]
        info = m.img.info(t) if t in m.img.functions else {}
        na = info.get('nargs')
        if na is None or (pop and na > pop // 4) or na > 16:
            na = pop // 4               # what its cleanup says, when the read-off count is not believable
        if not pop and t in getattr(m, 'site_words', {}):
            # a caller-cleaned callee: the words its call site passes, as rise lifts it (the body's own count read
            # 3 where the site passes 1, and the judge compared words nobody passed: 0x1029a0b0)
            na = m.site_words[t]
        stubs.append({'target': '0x%08x' % t, 'eax': '|'.join(tok(x) for x in answers), 'pop': '0x%x' % pop,
                      'nargs': na})
    if len(stubs) > STUB_CALLEES:
        # the harness holds STUB_CALLEES: the callees whose answers the path depends on go first, the rest run
        # for real
        need = {t for n, t, _p in calls if m.vals.get(n) is not None}
        stubs.sort(key=lambda d: int(d['target'], 16) not in need)
        if sum(1 for d in stubs if int(d['target'], 16) in need) > STUB_CALLEES:
            raise Unsolved('more than %d callees to answer' % STUB_CALLEES)
        stubs = stubs[:STUB_CALLEES]
    # indirect calls: the slot points at a return-only function with the right cleanup and answer
    nfake = 0
    for fn, n, pop in fake_atoms:
        if len(stubs) >= STUB_CALLEES:
            raise Unsolved('more than %d callees to answer' % STUB_CALLEES)
        v = m.vals.get(n)
        stubs.append({'target': '0x%08x' % fn, 'eax': tok(v if v is not None else 0), 'pop': '0x%x' % pop,
                      'nargs': pop // 4})
    for n, (slot, pop, sure) in getattr(m, 'icalls', {}).items():
        if isinstance(slot, tuple):
            continue
        if not sure:
            raise Unsolved('an indirect call whose cleanup the code does not say')
        fn = trivial_for(m.img, pop, m.vals.get(n))
        if fn is None:
            # no function in the image does just that: the slot gets an address that is no function at all
            # (FAKE_LO up), and the state answers it as a stub - an indirect call asks the harness's seam
            # before it looks for code (rt_set_indirect_stub), on both sides
            if len(stubs) >= STUB_CALLEES:
                raise Unsolved('more than %d callees to answer' % STUB_CALLEES)
            fn = FAKE_LO + 16 * nfake
            nfake += 1
            v = m.vals.get(n)
            stubs.append({'target': '0x%08x' % fn, 'eax': tok(v if v is not None else 0), 'pop': '0x%x' % pop,
                          'nargs': pop // 4})
        for i in range(4):
            m.mem[(slot + i) & M32] = (fn >> (8 * i)) & 0xFF
    if stubs:
        st['stubs'] = stubs
    # argument words decided as memory (a float or a byte of an argument, or the slot of an indirect call
    # through an argument that was just pointed at a function): the bytes become the word, never a --pin-mem
    # (the stack above the entry is the harness's own, and a write there was laid down nowhere)
    for k in range(ARG_WORDS):
        lo = SP0 + 4 + 4 * k
        word = [m.mem.pop((lo + i) & M32, None) for i in range(4)]
        if all(b is None for b in word):
            continue
        v = sum((b or 0) << (8 * i) for i, b in enumerate(word))
        t_ = tok(v)
        t_ = t_ if t_[:1].isdigit() else '@' + t_
        if k in args and args[k] != t_:
            raise Unsolved('an argument decided two ways')
        args[k] = t_
        n_ = max(args) + 1
        st['args'] = [args.get(q, '0') for q in range(max(4, n_))]
        if n_ > 4:
            st['nargs'] = n_
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
    if len(mem) > MEM_WRITES:
        raise Unsolved('more than %d memory writes' % MEM_WRITES)
    out = []
    for a, val in mem:
        if HEAP <= a < HEAP + OBJ * NOBJ:
            out.append({'where': 'heap', 'off': '0x%x' % (a - HEAP), 'bytes': val})
        elif SP0 - FRAME <= a < SP0:
            out.append({'where': 'frame', 'off': '0x%x' % (a - (SP0 - FRAME)), 'bytes': val})
        elif SP0 - FRAME_DEEP <= a < SP0:
            out.append({'where': 'deep', 'off': '0x%x' % (a - (SP0 - FRAME_DEEP)), 'bytes': val})
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


def seek(img, entry, stubbable, reached=None, unreached_sites=None):
    """the states for one function: [state], plus what was not solved (for the report). `unreached_sites`: the
    instruction sites the judge never reached in a clean state (lift_proof.py, COW_SITES_DIR); every block
    with none of them in it is reached already and is not a target."""
    # THE LIFT'S OWN READING: the frame mode and the attempt rise's lift came out of (rise.lift_cfg). A drive
    # made with another one read a register save as an argument (0x1008e9a0: `push edi` before a thiscall
    # counted as its argument word, the stub said nargs 1, and the judge compared a word nobody passed)
    # ... and the frame answer the unit's text was written with (COW_FRAME_ANSWER, rise.solve_pops): where the
    # frame fits more than one way the unit names which, and a state laid down on another one answers a call
    # with the wrong cleanup
    try:
        src = os.path.join(os.environ.get('COW_LIFT_SRC') or os.path.join(ROOT, 'src', 'lifted'), 'cow_%08x.c' % entry)
        with open(src, encoding='utf-8', errors='replace') as fh:
            m_ = re.search(r'COW_FRAME_ANSWER (\d+) of', fh.read(4096))
        rise.POPS_VARIANT[entry] = int(m_.group(1)) if m_ else 0
    except OSError:
        pass
    try:
        guest, cfg = rise.lift_cfg(img, entry)
        L = rise.Lifter(img, entry, guest)
        L.use_saves, L.use_vslots, L.allow_rebase = cfg
        facts = rise.scan_fitted(L)
    except rise.Refuse:
        try:
            L = rise.Lifter(img, entry, True)
            facts = rise.scan_fitted(L)     # the facts rise lifts from (an unknown callee's cleanup fitted)
        except rise.Refuse:
            # the lift may have come out of the other frame mode (rise.lift tries both): drive that one
            L = rise.Lifter(img, entry, False)
            facts = rise.scan_fitted(L)
    # THE CLEANUP THE LIFT SETTLED ON, for every call whose callee does not say it. The scan guesses it from the
    # words pushed since the last call, and a drive runs a block from the state its own path brought: a word
    # the scan counted as an argument (`push ebp; push edx; call [0x10329458]`, 0x100f9eb0) the drive's path
    # counted as a register save, the call popped 4 instead of 8, and every target past it was "esp differs".
    # The count is the call's, not the path's: it is pinned to the scan's.
    # The count is the EMITTED lift's (rise.EMIT_POPS): the scan_fitted here can settle on another fit than
    # the one the unit was emitted with (0x1003db60), and a drive on it reads frame words off by the difference.
    emitted = rise.EMIT_POPS.get(entry, {})
    keep_choices = dict(L.choices)
    L.choices = dict(L.choices)
    for a_, p_ in L.unknown_pop.items():
        p_ = emitted.get(a_, p_)
        L.choices[('p', a_)] = p_ if p_ else 'caller'
    if L.choices != keep_choices:
        # the facts (esp at each block) from a scan on those same counts
        try:
            facts = rise.scan(L)
        except rise.Refuse:
            L.choices = keep_choices
    # the argument words the function writes, as rise's own lift sets them after its scan (_lift_once): a read
    # of one of them is a read of memory, not of the argument (0x1030555f: `and [ebp+8], 0` makes arg1 a loop
    # counter, and seek went on reading arg1 there)
    L._argw = {(o, s_) for (o, s_) in getattr(L, 'args_written', ())}
    covered = set(reached or ())
    if unreached_sites is not None:
        u = set(unreached_sites)
        covered |= {b for b, blk in L.blocks.items() if blk.ins and not any(i.address in u for i in blk.ins)}
    left = sum(1 for a in L.order if a not in covered)
    budget = min(FUNC_SECONDS_MAX, FUNC_SECONDS + SECONDS_PER_TARGET * left) if unreached_sites is not None \
        else FUNC_SECONDS
    states, why = [], {}
    last_why = {}
    cap = max(MAX_STATES, min(MAX_STATES_BIG, left))
    # THE BLOCKS THE UNIT CAN START AT: its own `case 0x...u:` list. A unit lifted before rise made a block of
    # every return site has fewer; a state started at a block it does not have ran from the entry instead with
    # the block's registers, and faulted (0x1009ee60: 154 of 182 states). Such blocks are driven to from the
    # entry only.
    src = os.path.join(os.environ.get('COW_LIFT_SRC') or os.path.join(ROOT, 'src', 'lifted'), 'cow_%08x.c' % entry)
    try:
        text_ = open(src, encoding='utf-8', errors='replace').read()
        # ... the cases of cow_entry_fix_<entry>, which rise writes last. Every `case 0x...u:` of the file used
        # to count, and a unit with no block entries at all but a `switch` of its own (0x10159ff0: its four
        # jump-table cases) was started at those: from the entry, with the block's registers
        at_ = text_.find('int cow_entry_fix_%08x(' % entry)
        starts = {int(x, 16) for x in re.findall(r'case 0x([0-9a-f]{8})u:', text_[at_:])} if at_ >= 0 else set()
    except OSError:
        starts = None

    def can_start(a):
        return starts is None or a in starts
    # two passes: the plain drive for every target first (cheap), then the whole-path solver (deep) for the
    # targets the first pass did not get to - each with its own time, so the solver's never costs a target the
    # plain drive gets, and a function is done in FUNC_SECONDS + DEEP_SECONDS at the most
    for deep in (False, True):
        if deep and DEEP_SECONDS <= 0:
            break
        t_end = time.time() + (DEEP_SECONDS * budget / FUNC_SECONDS if deep else budget)
        for a in L.order:
            if a in covered or len(states) >= cap:
                continue
            if time.time() > t_end:
                # a function whose drives take this long has more targets than the cycle has minutes: the
                # states found so far are kept, the rest are counted, never silently dropped
                last_why[a] = 'time budget'
                continue
            st, seen, last = None, None, None
            got_there = None        # a drive that reached the target and dead-ended after it
            start_partial = False
            force = {}
            turned = []             # the choices already turned round, in the order of the path
            if cap > MAX_STATES and a != L.entry and not deep and can_start(a):
                # a big function: the block started at directly first. A drive from the entry to each of
                # thousands of blocks took the function's whole time for the first few hundred
                try:
                    m, calls, seen = drive(L, facts, a, stubbable, start=a)
                    states.append(to_state(m, calls, stubbable, 'seek: starts at %x' % a))
                    covered |= set(seen or ())
                    continue
                except (Unsolved, rise.Refuse, KeyError, IndexError, TypeError, ValueError, AttributeError,
                        RecursionError, ZeroDivisionError, OverflowError) as u:
                    if got_there is None and getattr(u, 'partial', None):
                        got_there = u.partial
                        start_partial = True
            for _attempt in range(24):
                if _attempt and time.time() > t_end:
                    last = Unsolved('time budget')      # the retries are inside the function's time too
                    break
                try:
                    m, calls, seen = drive(L, facts, a, stubbable, force=force, deep=deep)
                    st = to_state(m, calls, stubbable, ('seek, solver: drives to %x' if deep else 'seek: drives to %x') % a)
                    break
                except DeadEnd as d:
                    last = d
                    if got_there is None and getattr(d, 'partial', None):
                        got_there = d.partial
                    # backtrack: the latest choice not yet turned round goes the other way, the ones before it
                    # stay AS THEY ARE FOR NOW. They used to be closed for good (every choice before the one
                    # turned was "forced"), so only the end of a path was ever searched: 0x10159ff0's cases 2
                    # and 3 need `jns` taken four branches before the switch, the three after it were each
                    # turned once, and then nothing was left (30 of its targets blocked, 1 with this; over
                    # 60 silver units, "cannot send the branch that way" 46 -> 28). Now a choice is closed
                    # only once BOTH its sides are done, and turning an earlier one opens the later ones
                    # again: a depth-first search, 24 turns at the most, inside the function's time.
                    flip = [(k, side) for k, side in d.trail if k not in turned]
                    core = getattr(d, 'core', None)
                    if core and any(k in core for k, _s in flip):
                        flip = [(k, side) for k, side in flip if k in core]     # the solver says which
                    if not flip:
                        break
                    k, side = flip[-1]
                    before = [kk for kk, _ss in d.trail[:d.trail.index((k, side))]]
                    force = {kk: ss for kk, ss in d.trail[:d.trail.index((k, side))]}
                    force[k] = not side
                    turned = [kk for kk in turned if kk in before] + [k]
                except (Unsolved, rise.Refuse, KeyError, IndexError, TypeError, ValueError, AttributeError,
                        RecursionError, ZeroDivisionError, OverflowError) as u:
                    # one target the drive cannot get to; the function's other targets are still tried
                    last = u if not isinstance(u, RecursionError) else Unsolved('an expression too deep to evaluate')
                    break
            if st is not None and a != L.entry and unreached_sites is not None and len(states) < cap and can_start(a):
                # reached, but only on a path the model could not finish: the block started at directly as well
                try:
                    m2, calls2, _seen2 = drive(L, facts, a, stubbable, start=a, deep=deep)
                    states.append(to_state(m2, calls2, stubbable, 'seek: starts at %x' % a))
                except (Unsolved, rise.Refuse, KeyError, IndexError, TypeError, ValueError, AttributeError,
                        RecursionError, ZeroDivisionError, OverflowError):
                    pass
            if st is None and a != L.entry and time.time() <= t_end and can_start(a):
                # no path from the entry reaches it: a state that starts at the block itself (judge 14). The
                # way OUT of the block is searched like the way in: a dead end past the start turns the latest
                # choice round, depth first, as the drive from the entry does. It was one try, and a start
                # that got past its own block and met one branch it could not send was "reached, but the run
                # does not finish" (0x101626e0: five targets, each two branches from the end).
                force, turned = {}, []
                for _attempt in range(24):
                    if _attempt and time.time() > t_end:
                        break
                    try:
                        m, calls, seen = drive(L, facts, a, stubbable, start=a, force=force, deep=deep)
                        st = to_state(m, calls, stubbable, 'seek: starts at %x' % a)
                        break
                    except DeadEnd as d:
                        last = d
                        if got_there is None and getattr(d, 'partial', None):
                            got_there = d.partial   # a start that got there and dead-ended after (0x10165070)
                            start_partial = True
                        flip = [(k, side) for k, side in d.trail if k not in turned]
                        core = getattr(d, 'core', None)
                        if core and any(k in core for k, _s in flip):
                            flip = [(k, side) for k, side in flip if k in core]
                        if not flip:
                            break
                        k, side = flip[-1]
                        before = [kk for kk, _ss in d.trail[:d.trail.index((k, side))]]
                        force = {kk: ss for kk, ss in d.trail[:d.trail.index((k, side))]}
                        force[k] = not side
                        turned = [kk for kk in turned if kk in before] + [k]
                    except (Unsolved, rise.Refuse, KeyError, IndexError, TypeError, ValueError, AttributeError,
                            RecursionError, ZeroDivisionError, OverflowError) as u:
                        last = u if not isinstance(u, RecursionError) else Unsolved('an expression too deep to evaluate')
                        if got_there is None and getattr(u, 'partial', None):
                            got_there = u.partial
                            start_partial = True
                        break
            if st is None and got_there is not None:
                # every way past the target dead-ended (0x1003db60: a frame word a callee would have filled is
                # read as a pointer after it): the drive that got there is still a state for it, kept for the
                # one case the judge counts a run that does not finish (both sides crash the same way). It is
                # NOT the target reached: the original does not finish it, so the judge discards it, and the
                # target stays open with the real reason, for the next round and for the why table.
                m, calls, seen = got_there
                why_out = 'reached, but the run does not finish: %s' % (getattr(m, 'partial', None) or last)
                try:
                    states.append(to_state(m, calls, stubbable, '%s %x (ends early)'
                                           % ('seek: starts at' if start_partial else 'seek: drives to', a)))
                except (Unsolved, rise.Refuse, KeyError, IndexError, TypeError, ValueError, AttributeError,
                        RecursionError, ZeroDivisionError, OverflowError):
                    pass
                last_why[a] = why_out[:90]
                continue
            if st is None:
                # the whole message, up to the cap the other reason path already uses: this string is
                # what the next reader of build/aim/why/<entry>.why.json has to work from, and 'memory'
                # or 'switch' tells them nothing about which address or which failure
                last_why[a] = str(last)[:90]
                continue
            last_why.pop(a, None)
            states.append(st)
            covered.update(seen)
    blocked = {}
    for a, k in last_why.items():
        if a not in covered:
            # the table groups by family (the part before the colon, the shape it always had), the
            # file keeps the whole sentence: a summary is for counting, a why file is for fixing
            why[k.split(':')[0][:50]] = why.get(k.split(':')[0][:50], 0) + 1
            blocked['%08x' % a] = k
    seek.blocked = blocked          # target block -> why no state reaches it (the gittable's per-site reasons)
    seek.blocks = sorted('%08x' % b for b in L.blocks if b < (1 << 32))
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


def _init(image, reached_dir=None, out_dir=None):
    global _IMG, _REACHED_DIR, _OUT_DIR
    _IMG = load_image(image)
    _REACHED_DIR = reached_dir
    _OUT_DIR = out_dir


def unit_pop(entry):
    """bytes the unit at `entry` pops, as the judge reads them for its row (judge2.callee_purge); None unknown"""
    try:
        sys.path.insert(0, os.path.join(ROOT, 'tools', 'cow'))
        import judge2
        import trivial_audit
        index = getattr(stubbable_of, '_index', None)
        if index is None:
            index = stubbable_of._index = trivial_audit.body_index()
        return judge2.callee_purge(index, '%08x' % entry)
    except Exception:
        return None


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


# THE DRIVE'S STACK. Evaluating a loop's accumulated expression recurses as deep as the loop ran: on the main
# thread's stack that stopped at Python's limit ("an expression too deep to evaluate", 138 targets in 13
# functions), so the drive runs on a thread with a big stack and a limit to match. The size is asked for
# largest first and the next one down is taken when the platform says no: Windows' Python refuses 256 MB and
# over (Python/thread_nt.h, THREAD_MAX_STACKSIZE) with a ValueError where Linux gives 512 MB, and a size asked
# for with no way back ended the whole run on Windows at its first function (judge 11: no states at all).
STACK_SIZES = (512 << 20, 255 << 20, 128 << 20, 64 << 20)
STACK_PER_LEVEL = 2560          # stack bytes allowed for one level of recursion: 200000 levels in 512 MB


def on_big_stack(run):
    """run() on a thread with the largest stack this platform gives, and a recursion limit to match; on the
    calling thread, with the limit as it is, where no bigger stack is to be had. Returns the stack's size."""
    import threading
    limit = sys.getrecursionlimit()
    try:
        old = threading.stack_size()
    except Exception:
        old = 0
    try:
        for size in STACK_SIZES:
            try:
                threading.stack_size(size)
                t = threading.Thread(target=run)
                sys.setrecursionlimit(max(limit, size // STACK_PER_LEVEL))
                t.start()
            except (ValueError, RuntimeError, MemoryError):
                sys.setrecursionlimit(limit)
                continue            # not a size this platform gives, or no room for it now: the next one down
            t.join()
            return size
        run()
        return 0
    finally:
        sys.setrecursionlimit(limit)
        try:
            threading.stack_size(old)
        except Exception:
            pass


_REACHED_DIR = None


def unreached_of(entry):
    """the sites the judge never reached for this unit, from --reached DIR (one hex address a line); None
    when there is no list (every block is a target, as before)"""
    if not _REACHED_DIR:
        return None
    path = os.path.join(_REACHED_DIR, entry + '.txt')
    try:
        with open(path, encoding='utf-8') as fh:
            return {int(ln.strip(), 16) for ln in fh if ln.strip() and not ln.startswith('#')}
    except (OSError, ValueError):
        return None


# The function's time budget is asked for between drives; a drive that never comes back (one solve, one loop)
# is never asked. OnePass3c's aim sat 5.3 hours on the last function of 3,265 with every other step waiting.
# So each worker also has a clock nothing inside the drive can stop: past HARD_SECONDS it names its function
# in <out>/hung.txt and ends its own process. The pool breaks, the run reads the name, gives that function
# up with its reason and deals the rest out again.
HARD_SECONDS = float(os.environ.get('COW_SEEK_HARD_SECONDS') or 0) or FUNC_SECONDS_MAX * 1.25 + 120


def _hung(entry):
    try:
        with open(os.path.join(_OUT_DIR or '.', 'hung.txt'), 'a', encoding='utf-8') as fh:
            fh.write(entry + '\n')
    finally:
        os._exit(3)


def _work(entry):
    box = {}
    clock = threading.Timer(HARD_SECONDS, _hung, (entry,))
    clock.daemon = True
    clock.start()
    try:
        return _work_one(entry, box)
    finally:
        clock.cancel()


def _work_one(entry, box):

    def run():
        try:
            seek.blocked = {}
            box['r'] = seek(_IMG, int(entry, 16), stubbable_of(entry), None, unreached_of(entry))
            box['b'] = {'blocked': dict(seek.blocked), 'blocks': list(getattr(seek, 'blocks', []))}
        except Exception as x:      # a function rise cannot scan has no seeds: that is all
            box['x'] = x
    try:
        on_big_stack(run)
    except Exception as x:          # nothing about one function ends the run: it is that function's reason
        box.setdefault('x', x)
    if 'x' in box or 'r' not in box:
        x = box.get('x')
        if x is None:
            k = 'no answer'
        elif isinstance(x, (rise.Refuse, Unsolved)):
            k = str(x)                                  # a reason, in rise's or the drive's own words
        else:
            k = '%s: %s' % (type(x).__name__, x)        # anything else is an error: named as one
        return entry, None, {k[:60]: 1}
    states, why = box['r']
    if box.get('b') is not None and _OUT_DIR:
        # per target: why no state was made for it - the gittable (docs/cow/SITES.csv) is written from these
        try:
            with open(os.path.join(_OUT_DIR, entry + '.why.json'), 'w', encoding='utf-8', newline='\n') as fh:
                json.dump(box['b'], fh, indent=0, sort_keys=True)
        except OSError:
            pass
    return entry, states, why


_OUT_DIR = None


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
    ap.add_argument('--reached', default='', help='a directory of <entry>.txt: the sites the judge never reached '
                                                  '(one hex address a line); only the blocks with one in them are '
                                                  'targets, and the time follows how many there are')
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
    left, tries, worker_errors, hung_all = list(entries), {}, [], []
    if os.path.isfile(os.path.join(a.out, 'hung.txt')):
        os.remove(os.path.join(a.out, 'hung.txt'))
    t_start = t_said = time.time()
    if os.name == 'nt':
        a.jobs = min(a.jobs, 61)        # the most workers a process pool takes on Windows
    while left:
        done = set()
        try:
            with ProcessPoolExecutor(max_workers=a.jobs, initializer=_init,
                                     initargs=(a.image, a.reached or None, a.out)) as ex:
                futs = {ex.submit(_work, e): e for e in left}
                for f in as_completed(futs):
                    try:
                        entry, states, why = f.result()
                    except BrokenProcessPool:
                        raise
                    except Exception as x:      # the worker itself raised: said, counted, and the run goes on
                        entry, states, why = futs[f], None, {('worker: %s: %s' % (type(x).__name__, x))[:60]: 1}
                        worker_errors.append('%s: %s: %s' % (futs[f], type(x).__name__, x))
                    keep(entry, states, why)
                    done.add(futs[f])
                    if time.time() - t_said >= 60:
                        # a line a minute: the run is hours long on the whole pool, and a silent hour reads
                        # as a hang
                        t_said = time.time()
                        print('SEEK: %d of %d functions, %d with states (%d states), %.0f min'
                              % (len(entries) - len(left) + len(done), len(entries), made, states_total,
                                 (t_said - t_start) / 60), flush=True)
        except BrokenProcessPool:
            pending = [e for e in left if e not in done]
            hung = set()
            hp = os.path.join(a.out, 'hung.txt')
            if os.path.isfile(hp):
                hung = set(open(hp, encoding='utf-8').read().split()) & set(pending)
                os.remove(hp)
            if hung:
                print('SEEK: over %.0f s and ended: %s; %d functions left'
                      % (HARD_SECONDS, ' '.join(sorted(hung)), len(pending) - len(hung)), flush=True)
                for e in hung:
                    keep(e, None, {'hung: over the hard time limit': 1})
                    hung_all.append(e)
                left = [e for e in pending if e not in hung]
                continue
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
    if hung_all:
        print('SEEK: gave up on %d that never came back: %s' % (len(hung_all), ' '.join(sorted(hung_all))))
    for k, v in sorted(why_all.items(), key=lambda kv: -kv[1])[:8]:
        print('   %6d  %s' % (v, k))
    for ln in worker_errors[:3]:
        print('   worker error: ' + ln[:200])
    if (made == 0 and len(entries) >= 20) or len(worker_errors) * 20 > len(entries):
        # a run that gave no function a state, or where one worker in twenty raised, did not do its work:
        # said in the exit code, so the cycle does not book it as a seek that found nothing
        print('SEEK FAIL: %s' % ('no function of %d got a state' % len(entries) if made == 0
                                 else '%d of %d functions ended on a worker error' % (len(worker_errors), len(entries))))
        sys.exit(3)



# --------------------------------------------------------------------------------------------- the solver
# THE WHOLE PATH AT ONCE. The quick search above tries a value for one input at a time, and `revise` one
# decided input at a time: a branch that needs two of them changed together (a field AND a callee's answer),
# or a value an earlier branch fixed for its own sake, was "cannot send the branch that way" - most of what
# kept weak units weak. z3 takes every branch the drive has passed plus the one it wants, as bit-vector
# constraints over the inputs (registers, arguments, callees' answers, the bytes a state lays down), and
# finds values that satisfy all of them. Pointers stay as they are (an address is pinned to what it is
# now), and anything it cannot express (x87 values) makes it give up, never guess: whatever it answers is
# checked again with the model's own evaluator before it is taken.

class _NoZ3(Exception):
    pass


def _z3():
    try:
        import z3
        return z3
    except ImportError:
        return None


def has_float(e):
    if isinstance(e, tuple) and e:
        if e[0] in ('dcmp', 'ldf', 'dbin') or (e[0] == 'fn' and e[1] in ('cow_fsw', 'cow_bits2f', 'cow_bits2d')):
            return True
        return any(has_float(x) for x in e[1:] if isinstance(x, tuple)) or \
            any(has_float(y) for x in e[1:] if isinstance(x, list) for y in x)
    return False


def zsolve(m, cond, want):
    """the whole path at once (above). Trouble inside the solver - an expression it cannot take, its own
    error, no z3 on this machine - is "not solved": the drive goes on as it would without it."""
    if _z3() is None or not (getattr(m, 'deep', False) or has_float(cond)):
        # the plain drive leaves the solver to the deep pass, except for a float branch: candidates guessed
        # one input at a time almost never satisfy `(a - b) / c < d`, and the deep pass's 30 s is too late
        return False
    try:
        return _zsolve(m, cond, want)
    except Exception:
        return False


def _zsolve(m, cond, want):
    z3 = _z3()
    cond = m.unalias(cond)
    vars_, bytes_ = {}, {}
    pins = []
    W = 32

    def is_ptr(v):
        return HEAP <= v < HEAP + OBJ * NOBJ or SP0 - FRAME_DEEP <= v <= SP0

    def var(n):
        if n == 'sp0':
            return z3.BitVecVal(SP0, W)
        if n in m.alias:
            raise _NoZ3()       # never reached: _zsolve is handed the condition with its old_ atoms spelled out
        if n in m.vals and is_ptr(m.vals[n]):
            return z3.BitVecVal(m.vals[n], W)
        if not (n.startswith(('in_', 'arg_', 'ret_')) or n in m.free):
            if n in m.vals:
                return z3.BitVecVal(m.vals[n] & M32, W)
            raise _NoZ3()
        if n not in vars_:
            vars_[n] = z3.BitVec(n, W)
        return vars_[n]

    def byte(a):
        if a not in bytes_:
            bytes_[a] = z3.BitVec('m%08x' % a, 8)
        return bytes_[a]

    def b2v(c):
        return z3.If(c, z3.BitVecVal(1, W), z3.BitVecVal(0, W))

    def tr(e, cur, sym):
        t = e[0]
        if t == 'c':
            return z3.BitVecVal(e[1] & M32, W)
        if t == 'v':
            return var(e[1])
        if t == 'fn' and e[1] == 'COW_IMG':
            return tr(e[3][0], cur, sym)
        if t == 'ldm':
            a_, n_ = e[2], e[1] // 8
            return tr(('ld', e[1], ('c', a_)), Masked(cur, {(a_ + i) & M32 for i in range(n_)}),
                      {k: v for k, v in sym.items() if not (k < a_ + n_ and a_ < k + v[0])})
        if t == 'ld':
            bits = e[1]
            n = bits // 8
            keep = (m.cur, m.sym, m.tent, m.points)
            m.cur, m.sym, m.tent, m.points = cur, sym, {}, []
            try:
                a = m.ev(e[2], strict=True) & M32
            except Unsolved:
                raise _NoZ3()
            finally:
                m.cur, m.sym, m.tent, m.points = keep
            ae = tr(e[2], cur, sym)
            if not z3.is_bv_value(ae):
                pins.append(ae == z3.BitVecVal(a, W))       # the address stays where it is now
            own = [cur.get((a + i) & M32) for i in range(n)]
            if any(b is not None for b in own):
                if -1 in own:
                    rec = sym.get(a)
                    if rec is None or rec[0] != n:
                        raise _NoZ3()
                    v = tr(rec[1], cur, sym)
                    return v if bits == 32 else z3.ZeroExt(W - bits, z3.Extract(bits - 1, 0, v))
                if any(b is None for b in own):
                    raise _NoZ3()
                return z3.BitVecVal(sum(b << (8 * i) for i, b in enumerate(own)), W)
            if n == 4 and all(m.mem.get((a + i) & M32) is not None for i in range(4)):
                v = sum(m.mem[(a + i) & M32] << (8 * i) for i in range(4))
                if is_ptr(v):
                    return z3.BitVecVal(v, W)                # a pointer this state lays down: kept
            if not m.writable(a):
                if m.img.lo <= a < m.img.hi:
                    try:
                        return z3.BitVecVal(int.from_bytes(m.img.read(a, n), 'little'), W)
                    except Exception:
                        raise _NoZ3()
                raise _NoZ3()
            parts = [byte((a + i) & M32) for i in reversed(range(n))]
            v = parts[0] if n == 1 else z3.Concat(*parts)
            return v if bits == 32 else z3.ZeroExt(W - bits, v)
        if t == 'bin':
            op = e[1]
            if op in ('&&', '||'):
                x, y = tr(e[2], cur, sym) != 0, tr(e[3], cur, sym) != 0
                return b2v(z3.And(x, y) if op == '&&' else z3.Or(x, y))
            x, y = tr(e[2], cur, sym), tr(e[3], cur, sym)
            if op == '+':
                return x + y
            if op == '-':
                return x - y
            if op == '*':
                return x * y
            if op == '&':
                return x & y
            if op == '|':
                return x | y
            if op == '^':
                return x ^ y
            if op == '<<':
                return x << (y & 31)
            if op == '>>u':
                return z3.LShR(x, y & 31)
            if op == '>>s':
                return x >> (y & 31)
            c = {'==': lambda: x == y, '!=': lambda: x != y, '<u': lambda: z3.ULT(x, y), '<=u': lambda: z3.ULE(x, y),
                 '>u': lambda: z3.UGT(x, y), '>=u': lambda: z3.UGE(x, y), '<s': lambda: x < y, '<=s': lambda: x <= y,
                 '>s': lambda: x > y, '>=s': lambda: x >= y}.get(op)
            if c is None:
                raise _NoZ3()
            return b2v(c())
        if t == 'un':
            x = tr(e[2], cur, sym)
            if e[1] == '~':
                return ~x
            if e[1] == '-':
                return -x
            if e[1] == '!':
                return b2v(x == 0)
            raise _NoZ3()
        if t == 'zx':
            return z3.ZeroExt(W - e[1], z3.Extract(e[1] - 1, 0, tr(e[2], cur, sym))) if e[1] < 32 else tr(e[2], cur, sym)
        if t == 'sx':
            return z3.SignExt(W - e[1], z3.Extract(e[1] - 1, 0, tr(e[2], cur, sym))) if e[1] < 32 else tr(e[2], cur, sym)
        if t == 'ite':
            return z3.If(tr(e[1], cur, sym) != 0, tr(e[2], cur, sym), tr(e[3], cur, sym))
        if t == 'fn' and e[1] in ('cow_divu', 'cow_modu', 'cow_divs', 'cow_mods'):
            n_, d_ = tr(e[3][0], cur, sym), tr(e[3][1], cur, sym)
            pins.append(d_ != 0)            # it does not trap
            if e[1] in ('cow_divs', 'cow_mods'):
                pins.append(z3.Not(z3.And(n_ == 0x80000000, d_ == 0xFFFFFFFF)))
            return {'cow_divu': z3.UDiv, 'cow_modu': z3.URem, 'cow_divs': lambda x, y: x / y,
                    'cow_mods': z3.SRem}[e[1]](n_, d_)
        if t == 'fn' and e[1] == 'PARITY':
            v = tr(e[3][0], cur, sym)
            p = z3.Extract(0, 0, v)
            for i in range(1, 8):
                p = p ^ z3.Extract(i, i, v)
            return b2v(p == 0)
        if t == 'dcmp':
            x, y = trf(e[2], cur, sym), trf(e[3], cur, sym)
            c = {'<': lambda: x < y, '<=': lambda: x <= y, '>': lambda: x > y, '>=': lambda: x >= y,
                 '==': lambda: x == y, '!=': lambda: x != y}.get(e[1])
            if c is None:
                raise _NoZ3()
            return b2v(c())
        if t == 'fn' and e[1] == 'cow_fsw':
            x, y = trf(e[3][0], cur, sym), trf(e[3][1], cur, sym)
            return z3.If(x > y, z3.BitVecVal(0, W), z3.If(x < y, z3.BitVecVal(0x100, W), z3.BitVecVal(0x4000, W)))
        raise _NoZ3()

    # x87 values, as real numbers. IEEE floats in z3 are bit-blasted, and one division of two laid-down floats
    # ran past 20 s; the reals answer in milliseconds. Rounding (`fr`, the 80-bit stack, a float32 store) is
    # not modelled: the answer is rounded to the float it is laid down as and checked again with the model's
    # own evaluator below, so the approximation can only cost a solution, never take a wrong one. A float the
    # state lays down is a number of a sane size: no NaN, no infinity.
    fvars = {}

    def trf(e, cur, sym):
        t = e[0]
        if t == 'raw' and len(e) > 2 and e[2] == 'd':
            v = float(e[1])
            if v != v or abs(v) == math.inf:
                raise _NoZ3()
            return z3.RealVal(v)
        if t == 'ldf':
            bits = e[1]
            n = bits // 8
            keep = (m.cur, m.sym, m.tent, m.points)
            m.cur, m.sym, m.tent, m.points = cur, sym, {}, []
            try:
                a = m.ev(e[2], strict=True) & M32
            except Unsolved:
                raise _NoZ3()
            finally:
                m.cur, m.sym, m.tent, m.points = keep
            ae = tr(e[2], cur, sym)
            if not z3.is_bv_value(ae):
                pins.append(ae == z3.BitVecVal(a, W))
            fmt = '<f' if n == 4 else '<d'
            own = [cur.get((a + i) & M32) for i in range(n)]
            if any(b is not None for b in own):
                if -1 in own or any(b is None for b in own):
                    raise _NoZ3()
                v = struct.unpack(fmt, bytes(own))[0]
            elif not m.writable(a):
                if not m.img.lo <= a < m.img.hi:
                    raise _NoZ3()
                try:
                    v = struct.unpack(fmt, bytes(m.img.read(a, n)))[0]
                except Exception:
                    raise _NoZ3()
            else:
                if any(fa != a and fa < a + n and a < fa + fn_ for fa, fn_ in fvars):
                    raise _NoZ3()       # overlaps another float read at another offset
                key = (a, n)
                if key not in fvars:
                    fvars[key] = z3.Real('f%08x_%d' % (a, n))
                    fin.append(fvars[key] <= 1e7)
                    fin.append(fvars[key] >= -1e7)
                return fvars[key]
            if v != v or abs(v) == math.inf:
                raise _NoZ3()
            return z3.RealVal(v)
        if t == 'dbin':
            x, y = trf(e[2], cur, sym), trf(e[3], cur, sym)
            if e[1] == '+':
                return x + y
            if e[1] == '-':
                return x - y
            if e[1] == '*':
                return x * y
            if e[1] == '/':
                fin.append(y != 0)
                return x / y
            raise _NoZ3()
        if t == 'dun':
            x = trf(e[2], cur, sym)
            if e[1] in ('-', 'neg'):
                return -x
            if e[1] in ('abs', 'fabs'):
                return z3.If(x >= 0, x, -x)
            raise _NoZ3()
        if t == 'cvt':
            if e[1] == 'i2d':
                return z3.ToReal(z3.BV2Int(tr(e[2], cur, sym), is_signed=True))
            if e[1] == 'i16d':
                return z3.ToReal(z3.BV2Int(z3.Extract(15, 0, tr(e[2], cur, sym)), is_signed=True))
            if e[1] == 'd2f':
                return trf(e[2], cur, sym)
            raise _NoZ3()
        if t == 'fn' and e[1] in ('fr', 'frnd'):
            return trf(e[3][0], cur, sym)
        if t == 'fn' and e[1] == 'cow_bits2f':
            x = e[3][0]
            if x[0] == 'ld' and x[1] == 32:
                return trf(('ldf', 32, x[2]), cur, sym)     # the bits of a word: the float in that word
            keep = (m.cur, m.sym, m.tent, m.points)
            m.cur, m.sym, m.tent, m.points = cur, sym, {}, []
            try:
                v = m.ev(e, strict=True)
            except Unsolved:
                raise _NoZ3()
            finally:
                m.cur, m.sym, m.tent, m.points = keep
            if v != v or abs(v) == math.inf:
                raise _NoZ3()
            return z3.RealVal(v)
        if t == 'ite':
            return z3.If(tr(e[1], cur, sym) != 0, trf(e[2], cur, sym), trf(e[3], cur, sym))
        raise _NoZ3()

    fin = []
    s = z3.Solver()
    s.set('timeout', 800 if not has_float(cond) else FLOAT_MS)
    m.last_core = None
    tracked = {}
    try:
        for i, (c, w, cur, sym) in enumerate(m.path):
            try:
                x = (tr(c, cur, sym) != 0) == bool(w)
            except _NoZ3:
                continue        # checked below, with the model's own evaluator
            b = z3.Bool('p%d' % i)
            tracked[str(b)] = i
            s.assert_and_track(x, b)
        s.add((tr(cond, m.cur, m.sym) != 0) == bool(want))
    except _NoZ3:
        return False
    for p_ in pins + fin:
        s.add(p_)
    if any(fa <= b_ < fa + fn_ for fa, fn_ in fvars for b_ in bytes_):
        return False        # the same bytes read as an integer and as a float: not this solver's to answer
    r = s.check()
    if r == z3.unsat:
        # the branches passed that this one cannot agree with: what backtracking should turn round
        m.last_core = {tracked[str(b)] for b in s.unsat_core() if str(b) in tracked}
        return False
    if r != z3.sat:
        return False
    mod = s.model()
    old_vals, old_mem = dict(m.vals), dict(m.mem)
    for n, v in vars_.items():
        m.vals[n] = mod.eval(v, model_completion=True).as_long() & M32
    for a, b in bytes_.items():
        m.mem[a] = mod.eval(b, model_completion=True).as_long() & 0xFF
    for (a, n), fv in fvars.items():
        r_ = mod.eval(fv, model_completion=True)
        try:
            val = float(r_.numerator_as_long()) / float(r_.denominator_as_long())
        except Exception:
            val = float(r_.as_decimal(20).rstrip('?'))
        for i, b_ in enumerate(struct.pack('<f' if n == 4 else '<d', val)):
            m.mem[(a + i) & M32] = b_
    m.tent, m.points = {}, []
    try:
        ok = holds(m, cond, want, m.cur, m.sym) and all(holds(m, *p_) for p_ in m.path)
    except Exception:
        ok = False
    if ok:
        return True
    m.vals, m.mem = old_vals, old_mem   # the values as they were: a model that does not hold changes nothing
    return False

if __name__ == '__main__':
    main()
