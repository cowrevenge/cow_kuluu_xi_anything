"""rexpr.py - the expression trees the new lifter computes with, and how they print as C.

Every value is either an integer word (kind 'u', held in a uint32_t; narrower values are zero-extended) or
an x87 value (kind 'd', a double). Nodes are immutable tuples, so equal trees compare equal and a register
that still holds what it held at entry is recognised by `==`.

    ('c', v)                    integer constant (32-bit, unsigned)
    ('v', name, kind)           a C variable
    ('bin', op, a, b)           + - * & | ^ << >>u >>s == != <u <s <=u <=s (integer; compares give 0/1)
    ('un', op, a)               ~ - !
    ('zx', bits, a)             the low `bits` of a, zero-extended
    ('sx', bits, a)             the low `bits` of a, sign-extended to 32
    ('ld', bits, addr)          guest memory read (integer, zero-extended)
    ('ldf', bits, addr)         guest memory read as float/double
    ('ite', c, a, b)            c ? a : b
    ('fn', name, kind, args)    a call to a pure helper, printed name(args...)
    ('dbin', op, a, b)          double + - * /
    ('dcmp', op, a, b)          double compare, gives 0/1
    ('dun', op, a)              double negate / fabs
    ('cvt', how, a)             conversions: 'i2d' int32->double, 'i16d', 'i64d', 'd2f' (round to float)
    ('raw', text, kind, deps)   C text, only where nothing simpler fits
Dependencies (what a value reads that a later statement could change): 'M' guest memory, 'F' the x87
control word / status in g, 'G' other Guest fields. The block executor binds pending values to temps
before a statement that changes what they depend on.
"""

M32 = 0xFFFFFFFF


def C(v):
    return ('c', v & M32)


def V(name, kind='u'):
    return ('v', name, kind)


def is_c(e):
    return e[0] == 'c'


def kind_of(e):
    t = e[0]
    if t == 'v':
        return e[2]
    if t in ('ldf', 'dbin', 'dun'):
        return 'd'
    if t == 'cvt':
        return 'u' if e[1] in ('d2i32', 'd2i16', 'd2i64lo', 'd2i64hi', 'f2bits', 'dlo', 'dhi') else 'd'
    if t == 'fn':
        return e[2]
    if t == 'raw':
        return e[2]
    if t == 'ite':
        return kind_of(e[2])
    return 'u'


# ----------------------------------------------------------------------------------------------- building

def sx_const(v, bits):
    v &= (1 << bits) - 1
    return v - (1 << bits) if v >> (bits - 1) else v


def split_add(e):
    """(base, const) with e == base + const; base None when e is a constant."""
    if e[0] == 'c':
        return None, e[1]
    if e[0] == 'bin' and e[1] == '+' and e[3][0] == 'c':
        b, k = split_add(e[2])
        return b, (k + e[3][1]) & M32
    if e[0] == 'bin' and e[1] == '-' and e[3][0] == 'c':
        b, k = split_add(e[2])
        return b, (k - e[3][1]) & M32
    return e, 0


def img(v):
    """an address inside the game image: COW_IMG(va), relocated at run time"""
    return ('fn', 'COW_IMG', 'u', (C(v),))


def is_img(e):
    return e[0] == 'fn' and e[1] == 'COW_IMG'


def linear(e, depth=0):
    """e as {term: coefficient} + constant, when e is built from + - and constant * <<; else None"""
    t = e[0]
    if t == 'c':
        return {}, e[1]
    if depth > 12:
        return {e: 1}, 0
    if t == 'bin':
        op, a, b = e[1], e[2], e[3]
        if op in ('+', '-'):
            la, ka = linear(a, depth + 1)
            lb, kb = linear(b, depth + 1)
            sg = 1 if op == '+' else -1
            out = dict(la)
            for k, v in lb.items():
                out[k] = (out.get(k, 0) + sg * v) & M32
            return {k: v for k, v in out.items() if v}, (ka + sg * kb) & M32
        if op == '*' and b[0] == 'c':
            la, ka = linear(a, depth + 1)
            return {k: (v * b[1]) & M32 for k, v in la.items() if (v * b[1]) & M32}, (ka * b[1]) & M32
        if op == '<<' and b[0] == 'c' and (b[1] & 31) <= 8:
            m = 1 << (b[1] & 31)
            la, ka = linear(a, depth + 1)
            return {k: (v * m) & M32 for k, v in la.items() if (v * m) & M32}, (ka * m) & M32
    if t == 'un' and e[1] == '-':
        la, ka = linear(e[2], depth + 1)
        return {k: (-v) & M32 for k, v in la.items()}, (-ka) & M32
    return {e: 1}, 0


def from_linear(terms, k):
    """terms in a stable order (the image base first, then by size), the constant last"""
    out = None
    neg = []
    for term, c in sorted(terms.items(), key=lambda kv: (not is_img(kv[0]), size(kv[0]), repr(kv[0]))):
        if c & 0x80000000:
            neg.append((term, (-c) & M32))
            continue
        x = term if c == 1 else ('bin', '*', term, C(c))
        out = x if out is None else ('bin', '+', out, x)
    for term, c in neg:
        x = term if c == 1 else ('bin', '*', term, C(c))
        out = ('un', '-', x) if out is None else ('bin', '-', out, x)
    if out is None:
        return C(k)
    if k == 0:
        return out
    if is_img(out) and k:
        return img(out[3][0][1] + k)
    if k & 0x80000000 and k != 0x80000000:
        return ('bin', '-', out, C((-k) & M32))
    return ('bin', '+', out, C(k))


def lin_simplify(e):
    terms, k = linear(e)
    if len(terms) > 4:
        return e
    # fold an image constant plus a constant
    return from_linear(terms, k)


def add(a, b):
    if a[0] != 'c' and b[0] != 'c' and not (a[0] == 'un' or b[0] == 'un'):
        r = lin_simplify(('bin', '+', a, b))
        if r[0] != 'bin' or r[1] != '+' or r != ('bin', '+', a, b):
            return r
    return _add(a, b)


def _add(a, b):
    if a[0] == 'c' and b[0] == 'c':
        return C(a[1] + b[1])
    if a[0] == 'c':
        a, b = b, a
    if b[0] == 'c':
        if b[1] == 0:
            return a
        if is_img(a):
            return img(a[3][0][1] + b[1])
        if a[0] == 'bin' and a[1] == '+' and is_img(a[2]):
            return add(add(a[2], b), a[3])
        base, k = split_add(a)
        k = (k + b[1]) & M32
        if base is None:
            return C(k)
        if k == 0:
            return base
        if k & 0x80000000 and k != 0x80000000:
            return ('bin', '-', base, C((-k) & M32))
        return ('bin', '+', base, C(k))
    if b[0] == 'un' and b[1] == '-':
        return sub(a, b[2])
    return ('bin', '+', a, b)


def sub(a, b):
    if b[0] == 'c':
        return add(a, C(-b[1]))
    if a == b:
        return C(0)
    if a[0] == 'c' and a[1] == 0:
        return neg(b)
    ba, ka = split_add(a)
    bb, kb = split_add(b)
    if ba is not None and ba == bb:
        return C(ka - kb)
    return ('bin', '-', a, b)


def neg(a):
    if a[0] == 'c':
        return C(-a[1])
    if a[0] == 'un' and a[1] == '-':
        return a[2]
    return ('un', '-', a)


def bnot(a):
    if a[0] == 'c':
        return C(~a[1])
    if a[0] == 'un' and a[1] == '~':
        return a[2]
    return ('un', '~', a)


def lnot(a):
    """logical not of a 0/1 or any word: !a"""
    if a[0] == 'c':
        return C(0 if a[1] else 1)
    if a[0] == 'un' and a[1] == '!' and is_bool(a[2]):
        return a[2]
    if a[0] == 'bin' and a[1] in NEG_CMP:
        return ('bin', NEG_CMP[a[1]], a[2], a[3])
    if a[0] == 'dcmp' and a[1] in ('==', '!='):
        return ('dcmp', '!=' if a[1] == '==' else '==', a[2], a[3])
    return ('un', '!', a)


NEG_CMP = {'==': '!=', '!=': '==', '<u': '>=u', '>=u': '<u', '<s': '>=s', '>=s': '<s',
           '<=u': '>u', '>u': '<=u', '<=s': '>s', '>s': '<=s'}
CMP_OPS = set(NEG_CMP)


def is_bool(e):
    if e[0] == 'c':
        return e[1] in (0, 1)
    if e[0] == 'bin' and (e[1] in CMP_OPS or e[1] in ('&&', '||')):
        return True
    if e[0] == 'un' and e[1] == '!':
        return True
    if e[0] == 'dcmp':
        return True
    if e[0] == 'fn' and e[1] in ('PARITY',):
        return True
    if e[0] == 'bin' and e[1] == '&' and e[3] == C(1):
        return True
    if e[0] == 'bin' and e[1] in ('&', '|', '^') and is_bool(e[2]) and is_bool(e[3]):
        return True
    if e[0] == 'v' and e[1] in ('cf', 'zf', 'sf', 'of', 'pf', 'af', 'df'):
        return True
    if e[0] == 'ite':
        return is_bool(e[2]) and is_bool(e[3])
    return False


def mask_of(e):
    """an upper bound on the bits e can have set"""
    t = e[0]
    if t == 'c':
        return e[1]
    if is_bool(e):
        return 1
    if t == 'zx':
        return (1 << e[1]) - 1
    if t == 'ld':
        return (1 << e[1]) - 1 if e[1] < 32 else M32
    if t == 'bin':
        if e[1] == '&':
            return mask_of(e[2]) & mask_of(e[3])
        if e[1] in ('|', '^'):
            return mask_of(e[2]) | mask_of(e[3])
        if e[1] == '>>u' and e[3][0] == 'c':
            return mask_of(e[2]) >> (e[3][1] & 31)
        if e[1] == '<<' and e[3][0] == 'c':
            return (mask_of(e[2]) << (e[3][1] & 31)) & M32
    return M32


def narrow(e, m):
    """an expression equal to e on the bits in m (bits outside m are unspecified)"""
    t = e[0]
    if m == 0:
        return C(0)
    if t == 'bin':
        op, p, q = e[1], e[2], e[3]
        if op == '|' or op == '^':
            if mask_of(p) & m == 0:
                return narrow(q, m)
            if mask_of(q) & m == 0:
                return narrow(p, m)
            np_, nq = narrow(p, m), narrow(q, m)
            if np_ is p and nq is q:
                return e
            return bor(np_, nq) if op == '|' else bxor(np_, nq)
        if op == '&' and q[0] == 'c':
            if q[1] & m == m:
                return narrow(p, m)
            np_ = narrow(p, m & q[1])
            return e if np_ is p else band(np_, q)
        if op == '>>u' and q[0] == 'c':
            k = q[1] & 31
            np_ = narrow(p, (m << k) & M32)
            return e if np_ is p else shr(np_, q)
        if op == '<<' and q[0] == 'c':
            k = q[1] & 31
            np_ = narrow(p, m >> k)
            return e if np_ is p else shl(np_, q)
    if t == 'zx':
        lim = (1 << e[1]) - 1
        if m & ~lim & M32 == 0:
            return narrow(e[2], m)
    return e


def band(a, b):
    if a[0] == 'c' and b[0] == 'c':
        return C(a[1] & b[1])
    if a[0] == 'c':
        a, b = b, a
    if b[0] == 'c':
        m = b[1]
        a = narrow(a, m)
        if a[0] == 'c':
            return C(a[1] & m)
        if m == 0:
            return C(0)
        if mask_of(a) & ~m & M32 == 0:
            return a
        if m in (0xFF, 0xFFFF):
            return zx(8 if m == 0xFF else 16, a)
        # (x & m1) & m2
        if a[0] == 'bin' and a[1] == '&' and a[3][0] == 'c':
            return band(a[2], C(a[3][1] & m))
        if a[0] == 'zx':
            return band(a[2], C(m & ((1 << a[1]) - 1)))
        # (x | y) & m  where y's bits all outside m
        if a[0] == 'bin' and a[1] == '|':
            if mask_of(a[3]) & m == 0:
                return band(a[2], b)
            if mask_of(a[2]) & m == 0:
                return band(a[3], b)
    if a == b:
        return a
    return ('bin', '&', a, b)


def bor(a, b):
    if a[0] == 'c' and b[0] == 'c':
        return C(a[1] | b[1])
    if a[0] == 'c':
        a, b = b, a
    if b[0] == 'c' and b[1] == 0:
        return a
    if a == b:
        return a
    if b[0] == 'c' and b[1] == M32:
        return C(M32)
    return ('bin', '|', a, b)


def bxor(a, b):
    if a == b:
        return C(0)
    if a[0] == 'c' and b[0] == 'c':
        return C(a[1] ^ b[1])
    if a[0] == 'c':
        a, b = b, a
    if b[0] == 'c':
        if b[1] == 0:
            return a
        if b[1] == M32:
            return bnot(a)
        if b[1] == 1 and is_bool(a):
            return lnot(a)
    return ('bin', '^', a, b)


def mul(a, b):
    if a[0] == 'c' and b[0] == 'c':
        return C(a[1] * b[1])
    if a[0] == 'c':
        a, b = b, a
    if b[0] == 'c':
        if b[1] == 0:
            return C(0)
        if b[1] == 1:
            return a
        if a[0] == 'bin' and a[1] in ('+', '-', '*'):
            return lin_simplify(('bin', '*', a, b))
    return ('bin', '*', a, b)


def shl(a, n):
    if n[0] == 'c':
        k = n[1] & 31
        if k == 0:
            return a
        if a[0] == 'c':
            return C(a[1] << k)
        if a[0] == 'bin' and a[1] in ('+', '-', '*') and k <= 8:
            return lin_simplify(('bin', '<<', a, n))
    return ('bin', '<<', a, n)


def shr(a, n):
    if n[0] == 'c':
        k = n[1] & 31
        if k == 0:
            return a
        if a[0] == 'c':
            return C(a[1] >> k)
        if mask_of(a) >> k == 0:
            return C(0)
        if a[0] == 'bin' and a[1] == '>>u' and a[3][0] == 'c' and (a[3][1] & 31) + k < 32:
            return ('bin', '>>u', a[2], C((a[3][1] & 31) + k))
    return ('bin', '>>u', a, n)


def sar(a, n):
    if n[0] == 'c':
        k = n[1] & 31
        if k == 0:
            return a
        if a[0] == 'c':
            return C(sx_const(a[1], 32) >> k)
    return ('bin', '>>s', a, n)


def zx(bits, a):
    if bits >= 32:
        return a
    m = (1 << bits) - 1
    a = narrow(a, m)
    if a[0] == 'c':
        return C(a[1] & m)
    if mask_of(a) & ~m & M32 == 0:
        return a
    if a[0] == 'zx':
        return zx(min(bits, a[1]), a[2])
    if a[0] == 'sx' and a[1] >= bits:
        return zx(bits, a[2])
    if a[0] == 'bin' and a[1] == '|':
        # (hi | lo) truncated where hi lives only above the cut
        if mask_of(a[2]) & m == 0:
            return zx(bits, a[3])
        if mask_of(a[3]) & m == 0:
            return zx(bits, a[2])
    if a[0] == 'bin' and a[1] == '&' and a[3][0] == 'c':
        return band(zx(bits, a[2]), C(a[3][1] & m))
    if a[0] == 'bin' and a[1] in ('+', '-', '*', '^', '|', '&') and bits in (8, 16):
        # narrowing distributes over these; keep the outer cast only
        pass
    return ('zx', bits, a)


def sx(bits, a):
    if bits >= 32:
        return a
    if a[0] == 'c':
        return C(sx_const(a[1], bits))
    if a[0] == 'zx' and a[1] == bits:
        return sx(bits, a[2])
    if a[0] == 'sx' and a[1] <= bits:
        return a
    return ('sx', bits, a)


def cmp(op, a, b):
    if a[0] == 'c' and b[0] == 'c':
        x, y = a[1], b[1]
        if op.endswith('s'):
            x, y = sx_const(x, 32), sx_const(y, 32)
        r = {'==': x == y, '!=': x != y, '<u': x < y, '<s': x < y, '<=u': x <= y, '<=s': x <= y,
             '>u': x > y, '>s': x > y, '>=u': x >= y, '>=s': x >= y}[op]
        return C(1 if r else 0)
    # bool == 0  ->  !bool ;  bool != 0 -> bool
    if b == C(0) and op in ('==', '!=') and is_bool(a):
        return lnot(a) if op == '==' else a
    if b == C(0) and op == '<u':
        return C(0)
    if b == C(0) and op == '>=u':
        return C(1)
    if b == C(0) and op == '>u':
        return ('bin', '!=', a, b)
    if b == C(0) and op == '<=u':
        return ('bin', '==', a, b)
    # (x - y) == 0  ->  x == y
    if b == C(0) and op in ('==', '!=') and a[0] == 'bin' and a[1] == '-':
        return cmp(op, a[2], a[3])
    if b == C(0) and op in ('==', '!=') and a[0] == 'bin' and a[1] == '^':
        return cmp(op, a[2], a[3])
    if a == b:
        return C(1 if op in ('==', '<=u', '<=s', '>=u', '>=s') else 0)
    return ('bin', op, a, b)


def land(a, b):
    if a == C(0) or b == C(0):
        return C(0)
    if a == C(1):
        return b
    if b == C(1):
        return a
    return ('bin', '&&', a, b)


def lor(a, b):
    if a == C(1) or b == C(1):
        return C(1)
    if a == C(0):
        return b
    if b == C(0):
        return a
    return ('bin', '||', a, b)


def ite(c, a, b):
    if c[0] == 'c':
        return a if c[1] else b
    if a == b:
        return a
    if a == C(1) and b == C(0) and is_bool(c):
        return c
    if a == C(0) and b == C(1) and is_bool(c):
        return lnot(c)
    return ('ite', c, a, b)


def ld(bits, addr):
    return ('ld', bits, addr)


def merge_low(old, val, bits):
    """old with its low `bits` replaced by val (al/ax writes)"""
    m = (1 << bits) - 1
    return bor(band(old, C(~m)), zx(bits, val))


def merge_high8(old, val):
    """old with bits 8..15 replaced by val (ah writes)"""
    return bor(band(old, C(0xFFFF00FF)), shl(zx(8, val), C(8)))


def get_low(e, bits):
    return zx(bits, e)


def get_high8(e):
    return zx(8, shr(e, C(8)))


# double ops
def dbin(op, a, b):
    return ('dbin', op, a, b)


def fr(x):
    """the x87's precision-control rounding of one result (runtime/guest.h fr)"""
    return ('fn', 'fr', 'd', (x,))


# ----------------------------------------------------------------------------------------------- facts

def deps(e, memo=None):
    """the set of 'M'/'F'/'G' things e reads"""
    t = e[0]
    if t in ('c',):
        return frozenset()
    if t == 'v':
        return frozenset()
    if t in ('ld', 'ldf'):
        return frozenset('M') | deps(e[2])
    if t == 'fn':
        s = set()
        if e[1].rsplit(')', 1)[-1] in ('fr', 'fist16', 'fist32', 'fist64', 'frnd'):
            s.add('F')
        if e[1].rsplit(')', 1)[-1] in ('rd64',):
            s.add('M')
        if e[1] in ('G',):
            s.add('G')
        for a in e[3]:
            s |= deps(a)
        return frozenset(s)
    if t == 'raw':
        return frozenset(e[3])
    s = set()
    for a in e[1:]:
        if isinstance(a, tuple):
            s |= deps(a)
        elif isinstance(a, (list,)):
            for x in a:
                s |= deps(x)
    return frozenset(s)


def vars_of(e, out=None):
    if out is None:
        out = set()
    t = e[0]
    if t == 'v':
        out.add(e[1])
        return out
    if t == 'c':
        return out
    if t == 'fn':
        for a in e[3]:
            vars_of(a, out)
        return out
    if t == 'raw':
        return out
    for a in e[1:]:
        if isinstance(a, tuple):
            vars_of(a, out)
    return out


def value_vars(e, out=None):
    """the variables e uses as values: those only inside a memory address (rd32(sp0 + 4)) do not count"""
    if out is None:
        out = set()
    t = e[0]
    if t == 'v':
        out.add(e[1])
        return out
    if t in ('c', 'raw', 'ld', 'ldf'):
        return out
    if t == 'fn':
        if e[1].rsplit(')', 1)[-1] in ('rd64',):
            return out
        for a in e[3]:
            value_vars(a, out)
        return out
    for a in e[1:]:
        if isinstance(a, tuple):
            value_vars(a, out)
    return out


def too_big(e, cap=48):
    """more than cap nodes (counted as a tree, stopping at cap): cheap on shared subtrees"""
    n = 0
    stack = [e]
    while stack:
        x = stack.pop()
        n += 1
        if n > cap:
            return True
        t = x[0]
        if t in ('c', 'v', 'raw'):
            continue
        if t == 'fn':
            stack.extend(x[3])
            continue
        for y in x[1:]:
            if isinstance(y, tuple):
                stack.append(y)
    return False


def size(e):
    t = e[0]
    if t in ('c', 'v', 'raw'):
        return 1
    if t == 'fn':
        return 1 + sum(size(a) for a in e[3])
    return 1 + sum(size(a) for a in e[1:] if isinstance(a, tuple))


def subst(e, env):
    """replace variables by expressions (env: name -> expr), simplifying on the way"""
    t = e[0]
    if t == 'v':
        return env.get(e[1], e)
    if t == 'c' or t == 'raw':
        return e
    if t == 'bin':
        a, b = subst(e[2], env), subst(e[3], env)
        return rebuild_bin(e[1], a, b)
    if t == 'un':
        a = subst(e[2], env)
        return {'~': bnot, '-': neg, '!': lnot}[e[1]](a)
    if t == 'zx':
        return zx(e[1], subst(e[2], env))
    if t == 'sx':
        return sx(e[1], subst(e[2], env))
    if t in ('ld', 'ldf'):
        return (t, e[1], subst(e[2], env))
    if t == 'ite':
        return ite(subst(e[1], env), subst(e[2], env), subst(e[3], env))
    if t == 'fn':
        return ('fn', e[1], e[2], tuple(subst(a, env) for a in e[3]))
    if t in ('dbin', 'dcmp'):
        return (t, e[1], subst(e[2], env), subst(e[3], env))
    if t in ('dun', 'cvt'):
        return (t, e[1], subst(e[2], env))
    raise ValueError(t)


def rebuild_bin(op, a, b):
    if op == '+':
        return add(a, b)
    if op == '-':
        return sub(a, b)
    if op == '&':
        return band(a, b)
    if op == '|':
        return bor(a, b)
    if op == '^':
        return bxor(a, b)
    if op == '*':
        return mul(a, b)
    if op == '<<':
        return shl(a, b)
    if op == '>>u':
        return shr(a, b)
    if op == '>>s':
        return sar(a, b)
    if op == '&&':
        return land(a, b)
    if op == '||':
        return lor(a, b)
    if op in CMP_OPS:
        return cmp(op, a, b)
    return ('bin', op, a, b)


# ----------------------------------------------------------------------------------------------- evaluation
# (for the x87 compare truth tables: a condition is evaluated with the status word / flags bound to each of
# the four outcomes of a comparison)

def ev(e, env):
    t = e[0]
    if t == 'c':
        return e[1]
    if t == 'v':
        if e[1] in env:
            return env[e[1]]
        raise KeyError(e[1])
    if t == 'bin':
        op = e[1]
        if op == '&&':
            return 1 if (ev(e[2], env) and ev(e[3], env)) else 0
        if op == '||':
            return 1 if (ev(e[2], env) or ev(e[3], env)) else 0
        x, y = ev(e[2], env), ev(e[3], env)
        if op == '+':
            return (x + y) & M32
        if op == '-':
            return (x - y) & M32
        if op == '*':
            return (x * y) & M32
        if op == '&':
            return x & y
        if op == '|':
            return x | y
        if op == '^':
            return x ^ y
        if op == '<<':
            return (x << (y & 31)) & M32
        if op == '>>u':
            return x >> (y & 31)
        if op == '>>s':
            return (sx_const(x, 32) >> (y & 31)) & M32
        if op.endswith('s'):
            x, y = sx_const(x, 32), sx_const(y, 32)
        return 1 if {'==': x == y, '!=': x != y, '<u': x < y, '<s': x < y, '<=u': x <= y, '<=s': x <= y,
                     '>u': x > y, '>s': x > y, '>=u': x >= y, '>=s': x >= y}[op] else 0
    if t == 'un':
        x = ev(e[2], env)
        return {'~': (~x) & M32, '-': (-x) & M32, '!': 0 if x else 1}[e[1]]
    if t == 'zx':
        return ev(e[2], env) & ((1 << e[1]) - 1)
    if t == 'sx':
        return sx_const(ev(e[2], env), e[1]) & M32
    if t == 'ite':
        return ev(e[2], env) if ev(e[1], env) else ev(e[3], env)
    if t == 'fn' and e[1] == 'PARITY':
        v = ev(e[3][0], env) & 0xFF
        return 1 if bin(v).count('1') % 2 == 0 else 0
    raise KeyError(t)


# ----------------------------------------------------------------------------------------------- printing

G_FUNCS = ('fr', 'fist16', 'fist32', 'fist64', 'frnd', 'cow_fsw', 'cow_divu', 'cow_modu', 'cow_divs', 'cow_mods',
           'cow_divu64', 'cow_modu64', 'cow_divs64', 'cow_mods64')

PREC = {'||': 1, '&&': 2, '|': 3, '^': 4, '&': 5, '==': 6, '!=': 6,
        '<u': 7, '<s': 7, '<=u': 7, '<=s': 7, '>u': 7, '>s': 7, '>=u': 7, '>=s': 7,
        '<<': 8, '>>u': 8, '>>s': 8, '+': 9, '-': 9, '*': 10, '/': 10}
CSYM = {'>>u': '>>', '>>s': '>>', '<u': '<', '<s': '<', '<=u': '<=', '<=s': '<=', '>u': '>', '>s': '>',
        '>=u': '>=', '>=s': '>='}


def hexc(v):
    v &= M32
    if v < 10:
        return '%du' % v
    return '0x%xu' % v


class Printer:
    """prints expressions; `names` maps image constants to layout names when known"""

    def __init__(self, img_lo=0x10000000, img_hi=0x10400000):
        self.img_lo, self.img_hi = img_lo, img_hi

    def const(self, v, ctx=None):
        return hexc(v)

    def signed(self, e):
        """an operand of a signed comparison"""
        if e[0] == 'c':
            v = e[1]
            return '%d' % (v - (1 << 32) if v & 0x80000000 else v)
        if e[0] == 'sx':
            return '(int%d_t)%s' % (e[1], self.p(e[2], 11))
        return '(int32_t)%s' % self.p(e, 11)

    def p(self, e, prec=0):
        s, my = self._p(e)
        return '(%s)' % s if my < prec else s

    def _p(self, e):
        t = e[0]
        if t == 'c':
            return self.const(e[1]), 12
        if t == 'v':
            return e[1], 12
        if t == 'raw':
            return e[1], 11
        if t == 'bin':
            op = e[1]
            pr = PREC[op]
            a, b = e[2], e[3]
            if op in ('<s', '<=s', '>s', '>=s'):
                return '%s %s %s' % (self.signed(a), CSYM[op], self.signed(b)), pr
            if op == '>>s':
                return '(uint32_t)((int32_t)%s >> %s)' % (self.p(a, 11), self.p(b, 9)), 11
            if op == '-' and b[0] == 'c':
                return '%s - %s' % (self.p(a, pr), self.const(b[1])), pr
            sym = CSYM.get(op, op)
            # left-assoc: right operand needs strictly higher prec for non-associative ops
            rb = pr + 1 if op in ('-', '<<', '>>u', '>>s') or op in CMP_OPS else pr
            if op in ('&', '|', '^') and (b[0] == 'bin' and b[1] in ('&', '|', '^') and b[1] != op):
                rb = 13
            la = pr
            if op in ('&', '|', '^') and (a[0] == 'bin' and a[1] in ('&', '|', '^') and a[1] != op):
                la = 13
            if op in ('<<', '>>u') and a[0] == 'bin' and a[1] in ('+', '-'):
                la = 13
            return '%s %s %s' % (self.p(a, la), sym, self.p(b, rb)), pr
        if t == 'un':
            return '%s%s' % (e[1], self.p(e[2], 11)), 11
        if t == 'zx':
            return '(uint%d_t)%s' % (e[1], self.p(e[2], 11)), 11
        if t == 'sx':
            return '(uint32_t)(int%d_t)%s' % (e[1], self.p(e[2], 11)), 11
        if t == 'ld':
            return 'rd%d(%s)' % (e[1], self.p(e[2])), 12
        if t == 'ldf':
            if e[1] == 32:
                # a float operand is widened first: the x87 computes in double, and float * float in C would not
                return '(double)rdf32(%s)' % self.p(e[2]), 11
            return 'rdf%d(%s)' % (e[1], self.p(e[2])), 12
        if t == 'ite':
            return '%s ? %s : %s' % (self.p(e[1], 1), self.p(e[2], 1), self.p(e[3], 0)), 0
        if t == 'fn':
            name = e[1]
            args = [self.p(a) for a in e[3]]
            if name.rsplit(')', 1)[-1] in G_FUNCS:
                args = ['g'] + args
            if name == 'COW_IMG':
                return 'COW_IMG(0x%xu)' % e[3][0][1], 12
            return '%s(%s)' % (name, ', '.join(args)), 12
        if t == 'dbin':
            pr = 9 if e[1] in '+-' else 10
            rb = pr + 1 if e[1] in '-/' else pr
            return '%s %s %s' % (self.p(e[2], pr), e[1], self.p(e[3], rb)), pr
        if t == 'dcmp':
            return '%s %s %s' % (self.p(e[2], 7), e[1], self.p(e[3], 7)), 6
        if t == 'dun':
            if e[1] == '-':
                return '-%s' % self.p(e[2], 11), 11
            return '%s(%s)' % (e[1], self.p(e[2])), 12
        if t == 'cvt':
            how, a = e[1], e[2]
            if how == 'i2d':
                return '(double)(int32_t)%s' % self.p(a, 11), 11
            if how == 'u2d':
                return '(double)%s' % self.p(a, 11), 11
            if how == 'i16d':
                return '(double)(int16_t)%s' % self.p(a, 11), 11
            if how == 'i64d':
                return '(double)(int64_t)%s' % self.p(a, 11), 11
            if how == 'd2f':
                return '(double)(float)%s' % self.p(a, 11), 11
            if how in ('f2bits', 'dlo', 'dhi', 'bits2f', 'bits2d'):
                return 'cow_%s(%s)' % (how, ', '.join(self.p(x) for x in e[2:])), 12
            raise ValueError(how)
        raise ValueError(t)
