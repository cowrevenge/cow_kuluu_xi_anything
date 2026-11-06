"""ghidra_c.py - translate Ghidra's decompiled C into cow's guest-facing C.

This is the mechanical half of a lift. Ghidra says `*(int *)(param_1 + 0x14) = 3;` and cow has to say
`wr32((uint32_t)(param_1 + 0x14u), 3u);`, because guest memory is not this process's memory: every access
goes through the harness's tracked rd*/wr* so cowdiff can compare the two sides word by word. Likewise
`DAT_103517f4` is not a C global - it is the dword at guest address 0x103517f4, which the launcher may have
relocated, so it becomes `rd32(COW_IMG(0x103517F4u))`.

WHAT IS REWRITTEN
  *(T *)EXPR = V;      wr<T>(EXPR, V)          - store through a pointer
  *(T *)EXPR           rd<T>(EXPR)             - load through a pointer
  name[EXPR]           rd/wr at name + EXPR*sizeof(T)   - only for names DECLARED as pointers
  DAT_hex / _DAT_hex   the dword at hex; with & , the address itself
  PTR_any_hex          the pointer word at hex; with &, the address itself
  s_text_hex           the address of the string
  FUN_hex(a,b)         a call - handed to the caller's bridge callback, never emitted as a bare name

WHAT IS DELIBERATELY NOT DONE
  It does not invent structure, rename locals, infer types, or second-guess the decompiler's arithmetic.
  Anything it cannot translate is reported in `problems` and the caller refuses the lift. A lift that
  quietly keeps a `DAT_` or a `code *` in the output compiles against a symbol nobody defined and fails
  somewhere much later than the place it went wrong.
"""
import re

# Ghidra type spellings -> (byte width, is_float). `None` width means "no honest equivalent": padding a
# 5-byte field to 8 changes which bytes the function touches, so those refuse.
TYPE_MAP = {
    "undefined1": (1, False), "byte": (1, False), "uchar": (1, False),
    "char": (1, False), "signed char": (1, False), "unsigned char": (1, False),
    "undefined2": (2, False), "word": (2, False), "ushort": (2, False),
    "short": (2, False), "signed short": (2, False), "unsigned short": (2, False),
    "undefined3": (3, False),
    "undefined4": (4, False), "dword": (4, False), "uint": (4, False),
    "int": (4, False), "signed int": (4, False), "unsigned": (4, False),
    "unsigned int": (4, False), "long": (4, False), "signed long": (4, False),
    "undefined": (4, False), "bool": (1, False),
    "undefined5": (5, False), "undefined6": (6, False), "undefined7": (7, False),
    "undefined8": (8, False), "qword": (8, False), "ulonglong": (8, False),
    "longlong": (8, False), "unsigned long long": (8, False), "signed long long": (8, False),
    "float": (4, True), "double": (8, True), "longdouble": (10, True),
}

# Ghidra's names for the widths we do have, in the form the rest of the tree uses them.
GHIRDA_TYPES = [
    (r"\bundefined8\b", "uint64_t"), (r"\bundefined4\b", "CowU32"),
    (r"\bundefined2\b", "CowU16"), (r"\bundefined1\b", "CowU8"),
    (r"\bundefined\b", "CowU32"),
    (r"\bulonglong\b", "uint64_t"), (r"\blonglong\b", "int64_t"),
    (r"\bulong\b", "CowU32"), (r"\buint\b", "CowU32"),
    (r"\bushort\b", "CowU16"), (r"\buchar\b", "CowU8"),
    (r"\bqword\b", "CowU32"), (r"\bdword\b", "CowU32"),
    (r"\bword\b", "CowU16"), (r"\bbyte\b", "CowU8"),
    (r"\blongdouble\b", "long double"),
]

RD = {1: "rd8", 2: "rd16", 4: "rd32", 8: "rd64"}
WR = {1: "wr8", 2: "wr16", 4: "wr32", 8: "wr64"}
RDF = {4: "rdf32", 8: "rdf64"}
WRF = {4: "wrf32", 8: "wrf64"}

# An image symbol: an optional Ghidra prefix, some name, and the guest address Ghidra took from the
# symbol's own label. The address has to be IN the image or it is not one of these at all.
#
# The `&` group must not swallow free whitespace on its own: writing `&?\s*(?:DAT_|...)` made `return
# DAT_104569c4` match starting at the space, and the replacement produced `returnrd32(...)` - a token
# that does not exist, in a body that otherwise looked fine. An ampersand only binds when it is actually
# there, and a bare `&` before a symbol can equally be a bitwise AND, which the callback checks.
SYM_RE = re.compile(r"(?:(?P<amp>&)\s*)?(?P<kind>__x86\.|_?DAT_|PTR_|UNK_|s_|FUN_|LAB_|LAB_|caseLAB_)"
                    r"(?P<name>[A-Za-z0-9_.]*?)(?P<hex>[0-9a-fA-F]{6,8})\b")
IDENT_CHARS = set("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_")

KEYWORDS = frozenset("""
    if else while for do switch case default break continue return sizeof goto typedef struct union enum
    static const void volatile signed unsigned inline __fastcall __cdecl __thiscall __stdcall
""".split())

# What a lifted body may call besides the bridges. Everything here is either the C library or something
# this tree already provides, so "it compiles" still means "it links".
C_ALLOWLIST = frozenset("""
    abs labs llabs fabs sqrt fabsf sqrtf floor ceil floorf ceilf round roundf trunc truncf
    memcpy memset memmove memcmp strcmp strncmp strlen strcpy strncpy strcat strncat
    malloc free calloc realloc powf pow exp log sin cos tan atan atan2 fmod
""".split())


def _sig_prev(s, i):
    j = i - 1
    while j >= 0 and s[j] in " \t\n\r":
        j -= 1
    return s[j] if j >= 0 else ""


def _replace_bools(body):
    """Ghidra's `true`/`false` as 1/0, outside string literals.

    There is no `true` in this tree's C - the runtime is C11 without stdbool.h - so a lifted file that
    inherits one from the decompiler fails with C2065 "undeclared identifier", an error that says nothing
    about booleans. A plain regex would not do: a lifted body can carry a guest string literal (see the
    string-literal-becomes-address case in lift_selftest), and rewriting `true` inside the TEXT of one
    changes bytes the guest reads. So this walks the text, tracks quoting, and substitutes only whole
    tokens outside a literal - `istrue` and `true_pos` survive, and so does "true love".
    """
    out, i, n = [], 0, len(body)
    quote = None
    while i < n:
        c = body[i]
        if quote:
            if c == "\\":
                out.append(body[i:i + 2])
                i += 2
                continue
            if c == quote:
                quote = None
            out.append(c)
            i += 1
            continue
        if c in "\"'":
            quote = c
            out.append(c)
            i += 1
            continue
        for word, rep in (("true", "1"), ("false", "0")):
            if body.startswith(word, i):
                before = body[i - 1] if i else ""
                j = i + len(word)
                after = body[j] if j < n else ""
                if before not in IDENT_CHARS and after not in IDENT_CHARS:
                    out.append(rep)
                    i = j
                    break
        else:
            out.append(c)
            i += 1
    return "".join(out)


def _prev_token(s, i):
    """The identifier token before position i (whitespace skipped), or '' at the start of a line."""
    j = i - 1
    while j >= 0 and s[j] in " \t\n\r":
        j -= 1
    end = j + 1
    while j >= 0 and (s[j].isalnum() or s[j] == "_"):
        j -= 1
    return s[j + 1:end]


def _balanced(s, k, open_c, close_c):
    """s[k] must be open_c; return (text_including_both, index_after) or (None, k)."""
    if k >= len(s) or s[k] != open_c:
        return None, k
    depth = 0
    for j in range(k, len(s)):
        if s[j] == open_c:
            depth += 1
        elif s[j] == close_c:
            depth -= 1
            if depth == 0:
                return s[k:j + 1], j + 1
    return None, k


SIMPLE_EXPR = re.compile(r"[A-Za-z_][A-Za-z0-9_]*(?:\s*(?:<<|>>|[-+*/%&|^])\s*"
                         r"(?:0x[0-9a-fA-F]+|\d+|[A-Za-z_][A-Za-z0-9_]*))*")


def _read_primary(s, k):
    """The address expression of a dereference: a parenthesised group, or a simple arithmetic expression."""
    while k < len(s) and s[k] in " \t":
        k += 1
    if k >= len(s):
        return None, k
    if s[k] == "(":
        return _balanced(s, k, "(", ")")
    m = SIMPLE_EXPR.match(s, k)
    if m and m.group(0).strip():
        return m.group(0).strip(), m.end()
    return None, k


def _width_of(typ):
    """(bytes, is_float) for a Ghidra type spelling, or None when there is no honest equivalent."""
    t = re.sub(r"\s+", " ", typ.replace("const", "").replace("signed", "signed").strip()).strip()
    t = re.sub(r"\s*\*+$", "", t).strip()
    if t in TYPE_MAP:
        return TYPE_MAP[t]
    t2 = re.sub(r"\bstruct\s+\w+", "int", t)
    if t2 in TYPE_MAP:
        return TYPE_MAP[t2]
    return None


class Rewriter:
    """One pass over a Ghidra body. `problems` collects every reason the body is not liftable.

    `bridge(target, args, call_text)` is asked what a call becomes; returning None means the caller does
    not know how to bridge that target and the body is refused. It is a callback so this module stays
    about syntax and lift.py keeps the ownership of what a call MEANS.
    """

    def __init__(self, layout, bridge=None, image_lo=0x10000000, image_hi=0x10C15000):
        self.layout = layout            # "0x103517f4" -> COW_ADDR_... macro name (shared across a run)
        self.bridge = bridge
        self.problems = []
        self.image_lo, self.image_hi = image_lo, image_hi
        self.ptr_names = {}             # name -> (bytes, is_float) for every pointer-typed local/param

    # ---------------------------------------------------------------- layout macros
    def macro_for(self, va):
        key = "0x%x" % (va if isinstance(va, int) else int(va, 16))
        name = self.layout.get(key)
        if not name:
            name = "COW_ADDR_LIFT_%s" % key[2:].upper()
            self.layout[key] = name
        return name

    def img(self, va):
        return "COW_IMG(%s)" % self.macro_for(va)

    # ---------------------------------------------------------------- pointer-typed names
    def collect_pointer_decls(self, text):
        """Which identifiers are pointers, and to what width. `param_1[0x181]` only scales correctly
        if we know it is an `undefined4 *` (x4) and not a `char *` (x1) - Ghidra wrote the type, so use it."""
        for m in re.finditer(r"\b([A-Za-z_][A-Za-z0-9_]*)\s*(?:\*\s*)+\s*([A-Za-z_][A-Za-z0-9_]*)\s*(?:;|,|\))",
                             text):
            typ, name = m.group(1), m.group(2)
            w = _width_of(typ)
            if w:
                self.ptr_names[name] = w
        # `undefined4 *param_1` in the signature, and `int *piVar2;` among the locals
        for m in re.finditer(r"(?:^|[;{}\n])\s*([A-Za-z_][A-Za-z0-9_ ]*?)\s*\*\s*([A-Za-z_][A-Za-z0-9_]*)\s*;",
                             text):
            w = _width_of(m.group(1))
            if w:
                self.ptr_names[m.group(2)] = w

    # ---------------------------------------------------------------- the passes
    def rewrite(self, body, sig=""):
        body = re.sub(r"/\*\s*WARNING:.*?\*/", "", body, flags=re.S)   # Ghidra's own editorialising
        # The SIGNATURE is scanned for pointer types too: `undefined4 *param_1` is the only place that
        # says param_1 is a dword pointer, and without it `param_1[0x181] = v` cannot be scaled to +0x604
        # and stays C array indexing on an integer, which does not compile.
        self.collect_pointer_decls(sig + "\n" + body)
        body = self._unknown_calls(body)
        body = self._calls(body)
        body = self._bitops(body)
        body = self._overlays(body)
        body = self._derefs(body)
        body = self._arrays(body)
        body = self._global_stores(body)
        body = self._symbols(body)
        body = self._types(body)
        return body

    # ---- Ghidra's bit-packing idioms, which belong to the decompiler and not to C.
    # CONCAT44(hi, lo) glues two halves; ZEXT48(x) keeps the low 48 bits; SEXT48(x) sign-extends them.
    # All three are ordinary shifts and masks, spelled out here so a function that needs them converts
    # instead of refusing - and with the widths written down where a wrong one is visible.
    def _bitops(self, body):
        def mask(bits):
            return "0x%xu" % ((1 << bits) - 1)

        out, i, n = [], 0, len(body)
        pat = re.compile(r"\b(?:CONCAT(\d)(\d)|ZEXT(\d+)|SEXT(\d+))\s*\(")
        while i < n:
            m = pat.search(body, i)
            if not m:
                out.append(body[i:])
                break
            out.append(body[i:m.start()])
            grp, after = _balanced(body, m.end() - 1, "(", ")")
            if grp is None:
                self.problems.append("unparsable_bitop")
                out.append(body[m.start():m.end()])
                i = m.end()
                continue
            args = self._split_args(grp[1:-1])
            if m.group(1) and m.group(2):                      # CONCAT<hi-bytes><lo-bytes>
                nhi, nlo = int(m.group(1)), int(m.group(2))
                if not (1 <= nhi <= 8) or not (1 <= nlo <= 8) or len(args) != 2:
                    self.problems.append("concat_width_%d%d" % (nhi, nlo))
                    out.append(grp)
                else:
                    t = "uint64_t" if nhi + nlo > 4 else "uint32_t"
                    out.append("(((%s)(%s) & %s) << %u | ((%s)(%s) & %s))"
                               % (t, args[0], mask(8 * nhi), 8 * nlo, t, args[1], mask(8 * nlo)))
            else:                                              # ZEXTnn / SEXTnn
                bits = int(m.group(3) or m.group(4))
                signed = bool(m.group(4))
                if bits not in (8, 16, 24, 32, 40, 48, 56) or len(args) != 1:
                    self.problems.append("ext_width_%d" % bits)
                    out.append(grp)
                else:
                    base = "((uint64_t)(%s) & %s)" % (args[0], mask(bits))
                    if signed:
                        base = "((int64_t)(%s) << %d) >> %d" % (base, 64 - bits, 64 - bits)
                    out.append("(%s)" % base)
            i = after
        return "".join(out)

    # ---- Ghidra's bitfield overlay syntax: `x._1_2_` is "the 2 bytes of x starting at offset 1". It is
    # not C, and the decompiler uses it constantly for packed reads.
    @staticmethod
    def _overlays(body):
        def sub(m):
            base, off, width = m.group(1), int(m.group(2)), int(m.group(3))
            if width not in (1, 2, 4, 8):
                return m.group(0)
            mask = "0x%xu" % ((1 << (8 * width)) - 1)
            shift = " << %u" % (8 * off) if off else ""
            return "(((uint64_t)(%s)%s) & %s)" % (base, shift, mask)

        return re.sub(r"\b([A-Za-z_][A-Za-z0-9_()\[\]. +-]*?)\._(\d+)_(\d+)_", sub, body)

    # ---- a call to something that is neither the C library nor a guest function is a symbol that does
    # not exist in this link (Ghidra's names for C++ operators and CRT helpers: operator_new, __ftol).
    # Refuse it here, because "compiles and links" is the minimum bar and an unresolved extern is not a
    # behaviour difference cowdiff could ever have reported.
    def _unknown_calls(self, body):
        for m in re.finditer(r"\b([A-Za-z_][A-Za-z0-9_]*)\s*\(", body):
            name = m.group(1)
            if name in KEYWORDS or name in C_ALLOWLIST or name.startswith("cow_"):
                continue
            if name.startswith(("rd", "wr", "rt_", "guest_", "f_")):
                continue
            if name.startswith(("FUN_", "THUNK_", "thunk_", "CONCAT", "ZEXT", "SEXT", "DAT_", "PTR_")):
                continue      # guest symbols: the passes that run after this one own them
            self.problems.append("calls_unknown_symbol_%s" % name)
        return body

    # ---- calls: FUN_hex(...) -> whatever the caller's bridge says it is
    def _calls(self, body):
        out, i, n = [], 0, len(body)
        # `thunk_FUN_10028aa0(x)` is Ghidra's name for a call that landed on a one-instruction jmp: it is
        # still just a call to that address, and the `thunk_` prefix must not survive - it used to be left
        # behind in front of the rewritten address, which produced `thunk_COW_IMG(...)(x)` and a compiler
        # error nobody could read as "this is a call".
        call_re = re.compile(r"\b(?:thunk_)?FUN_([0-9a-fA-F]{8})\s*\(")
        while i < n:
            m = call_re.search(body, i)
            if not m:
                out.append(body[i:])
                break
            out.append(body[i:m.start()])
            # the regex consumed the open paren, so the balanced group starts one character back
            args_txt, after = _balanced(body, m.end() - 1, "(", ")")
            if args_txt is None:
                self.problems.append("unparsable_call_at_%s" % m.group(1))
                out.append(body[m.start():m.end()])
                i = m.end()
                continue
            args = self._split_args(args_txt[1:-1])
            repl = self.bridge(int(m.group(1), 16), args) if self.bridge else None
            if repl is None:
                self.problems.append("unbridgeable_call_FUN_%s" % m.group(1))
                out.append(args_txt and ("COW_UNBRIDGED_%s(%s)" % (m.group(1), args_txt[1:-1])) or "")
            else:
                out.append(repl)
            i = after
        return "".join(out)

    @staticmethod
    def _split_args(s):
        """Split a C argument list on top-level commas."""
        out, depth, cur = [], 0, []
        for ch in s:
            if ch in "([{":
                depth += 1
            elif ch in ")]}":
                depth -= 1
            if ch == "," and depth == 0:
                out.append("".join(cur).strip())
                cur = []
            else:
                cur.append(ch)
        last = "".join(cur).strip()
        if last:
            out.append(last)
        return out

    # ---- *(T *)EXPR  /  *(T *)EXPR = V
    def _derefs(self, body):
        out, i, n = [], 0, len(body)
        cast_re = re.compile(r"\s*\(\s*([^()]+?)\s*\*\s*\)\s*")
        while i < n:
            ch = body[i]
            # NOTE the explicit `prev and`: `'' in ")]"` is True in Python, so a deref at the very start of
            # a statement (which is where almost every deref is) used to be read as a multiplication and
            # left untouched - silently, with the original `*(int *)(...) = v;` still in the output.
            prev = _sig_prev(body, i)
            after_prev = prev and (prev in IDENT_CHARS or prev in ")]")
            # `return *(int *)(p + 4);` - the character before the star is the `n` of a KEYWORD, not the end
            # of an operand, and reading it as one leaves the deref untouched for _types to strip the `*`
            # out of its cast: `*(CowU32)(...)`, a dereference of an integer, which is C2100 and the single
            # largest reject in the tree (749 files, mostly one-line `return *(undefined4 *)(DAT_x + n)`
            # accessors). The token is what distinguishes it from `a * b`, where `a` really is an operand -
            # same test that keeps `return &PTR_x` from being read as a bitwise AND.
            if after_prev and _prev_token(body, i) in KEYWORDS:
                after_prev = False
            # `)` normally means multiplication (`(a) * b`), but a CAST followed by a typed dereference is
            # the other case and it is everywhere in Ghidra's output: `(CowU16)*(CowU8 *)(p + 0x326)`.
            # The typed cast after the `*` is what tells them apart, so look for it before giving up.
            if ch == "*" and prev == ")" and cast_re.match(body, i + 1):
                after_prev = False
            if ch != "*" or after_prev:
                out.append(ch)
                i += 1
                continue
            m = cast_re.match(body, i + 1)
            if not m:
                # `*name` with no cast: still a dereference when what precedes it is not an operand.
                # The WIDTH has to come from the declared type of `name`, because `*pChar` reads one byte
                # and `*pDword` reads four, and defaulting both to four changes how many bytes the guest
                # is seen to touch - a memory-trace difference cowdiff will blame on something else.
                expr, after = _read_primary(body, i + 1)
                w = None
                if expr is not None and re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", expr):
                    w = self.ptr_names.get(expr)
                if w is None:
                    self.problems.append("bare_deref_width_unknown")
            else:
                w = _width_of(m.group(1))
                expr, after = _read_primary(body, m.end())
            if expr is None:
                out.append(ch)
                i += 1
                continue
            if w is None:
                w = (4, False)                        # Ghidra's default object size is a dword
            if w[0] in (3, 5, 6, 7, 10):
                self.problems.append("odd_width_%d" % w[0])
                out.append(body[i:after])
                i = after
                continue
            size, isf = w
            # an assignment? (but not `==`)
            m2 = re.compile(r"\s*=(?!=)").match(body, after)
            if m2:
                semi = _top_level(body, m2.end(), ";")
                if semi < 0:
                    self.problems.append("unterminated_store")
                    out.append(body[i:after])
                    i = after
                    continue
                # Both the address and the VALUE have to go through this pass too. The store rewrite jumps
                # to the end of the statement, so anything it did not rewrite there is never seen again by
                # the scanner - and `*(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1` is the shape
                # that repeats through the population: the left half became wr16(...) and the right half
                # kept its `*(short *)`, which a later pass turned into `*(CowU32)` - a dereference of an
                # integer, which is 749 files that did not compile (C2100, the single largest reject).
                val = self._derefs(body[m2.end():semi].strip())
                addr = self._derefs(expr)
                fn = WRF[size] if isf else WR[size]
                out.append("%s((uint32_t)%s, %s);" % (fn, addr, val))
                i = semi + 1
                continue
            fn = RDF[size] if isf else RD[size]
            # a read can nest the same way: `*(int *)(*(int *)0x104568fc + 0x34)` - the outer operand is
            # itself a dereference, and it must be rewritten before the scanner moves past it.
            out.append("%s((uint32_t)%s)" % (fn, self._derefs(expr)))
            i = after
        return "".join(out)

    # ---- name[EXPR] for a declared pointer
    def _arrays(self, body):
        if not self.ptr_names:
            return body
        pat = re.compile(r"\b([A-Za-z_][A-Za-z0-9_]*)\s*\[")
        out, i, n = [], 0, len(body)
        while i < n:
            m = pat.search(body, i)
            if not m:
                out.append(body[i:])
                break
            name = m.group(1)
            w = self.ptr_names.get(name)
            if not w:
                out.append(body[i:m.end()])
                i = m.end()
                continue
            idx, after = _balanced(body, m.end() - 1, "[", "]")
            if idx is None:
                out.append(body[i:m.end()])
                i = m.end()
                continue
            size, isf = w
            if size not in RD and size not in RDF:
                self.problems.append("odd_width_%d" % size)
                out.append(body[i:after])
                i = after
                continue
            base = "(uint32_t)(%s + %uu * (uint32_t)(%s))" % (name, size, idx[1:-1])
            # The text BEFORE the match has to be carried along. It was not: every successful rewrite
            # appended its replacement and moved past it, silently deleting whatever sat between the last
            # position and this subscript. The shape that made it visible is everywhere - a bridge call,
            # then a store, then `param_1[2] = 0` - and the whole of the bridge call and the store between
            # them vanished, taking the `]){ 0u }, ...);` tail of the compound literal with it. That is
            # where most of the remaining rejects came from (C2057 "expected constant expression", C2109
            # "subscript requires array or pointer type", C2146 "missing ';' before rd32"): not three
            # bugs, one deleted span, seen from wherever the sentence happened to break.
            gap = body[i:m.start()]
            m2 = re.compile(r"\s*=(?!=)").match(body, after)
            if m2:
                semi = _top_level(body, m2.end(), ";")
                val = body[m2.end():semi].strip() if semi >= 0 else ""
                if semi < 0:
                    self.problems.append("unterminated_store")
                    out.append(gap + body[m.start():after])
                    i = after
                    continue
                # The value goes back through this same pass. `param_1[1] = param_2[1];` rewrites its left
                # side and jumps to the end of the statement, so the right side - a subscript on a pointer
                # that needs exactly the same treatment - was never looked at, and stayed C array indexing
                # on an integer: C2109 "subscript requires array or pointer type", which was 117 of the
                # remaining 185 rejects. Same shape as the store bug in _derefs, one pass later.
                val = self._arrays(val) if val else val
                fn = WRF[size] if isf else WR[size]
                out.append(gap + "%s(%s, %s);" % (fn, base, val))
                i = semi + 1
                continue
            fn = RDF[size] if isf else RD[size]
            out.append(gap + "%s(%s)" % (fn, base))
            i = after
        return "".join(out)

    # ---- a write to a global: `DAT_103d3c90 = x;` is a store, and the generic symbol pass (which reads)
    # has to see it first, or it produces `rd32(...) = x;` - not C, and the kind of thing that gets
    # "fixed" by hand later without anyone looking at the bytes again.
    def _global_stores(self, body):
        pat = re.compile(r"(?<![\w.&])_?(?:DAT_|PTR_)[A-Za-z0-9_]*?"
                         r"(?P<hex>[0-9a-fA-F]{6,8})\s*=(?!=)\s*(?P<val>[^;]*);")

        def s(m):
            va = int(m.group("hex"), 16)
            if not (self.image_lo <= va < self.image_hi):
                self.problems.append("symbol_out_of_image_%s" % m.group("hex"))
                return m.group(0)
            return "wr32(%s, %s);" % (self.img(va), m.group("val").strip())

        return pat.sub(s, body)

    # ---- DAT_ / PTR_ / s_ / _DAT_ / &sym
    def _symbols(self, body):
        def sub(m):
            kind = m.group("kind")
            hexs = m.group("hex")
            va = int(hexs, 16)
            if kind.startswith("LAB_") or kind.startswith("caseLAB_"):
                self.problems.append("label_%s" % hexs)
                return m.group(0)
            if not (self.image_lo <= va < self.image_hi):
                self.problems.append("symbol_out_of_image_%s" % hexs)
                return m.group(0)
            # The `&` is part of the match, so whatever is decided here, the replacement owns it.
            # Deciding "that was a bitwise AND" and then not putting the character back produced
            # `a b` from `a & DAT_x`: C that does not compile, with an error message that does not
            # mention the symbol at all.
            #
            # What decides address-of versus AND is the preceding TOKEN, not the preceding character:
            # `return &PTR_x` is address-of even though the character before `&` is the `n` of `return`,
            # because a keyword does not end an expression.
            amp_raw = m.group("amp")
            is_addr = bool(amp_raw) and not _before_is_operand(body, m.start())
            if is_addr or kind in ("s_",) or kind.startswith("FUN_"):
                val = self.img(va)                        # the address of the thing
            elif kind in ("UNK_", "_UNK_"):
                # UNK_hex is Ghidra saying "there is data here and I never learned what it is". The ADDRESS
                # is a fact (that is what a `&` in front of it asks for, and the shape that reaches here from
                # a real accessor: `return (CowU32)(&UNK_1032a4f8);`). Reading it is not - the width is
                # unknown, and a guessed dword is a memory trace cowdiff will blame on something else.
                if is_addr:
                    val = self.img(va)
                else:
                    self.problems.append("bare_undefined_symbol_%s" % hexs)
                    return m.group(0)
            elif kind in ("DAT_", "_DAT_", "PTR_", "_PTR_"):
                val = "rd32(%s)" % self.img(va)           # the dword stored there
            else:
                self.problems.append("unknown_symbol_%s" % kind)
                return m.group(0)
            if amp_raw and not is_addr:
                return "& " + val                         # the '&' the match swallowed
            return val

        # `&DAT_x` is two tokens with the & possibly separated; SYM_RE carries an optional ampersand, and
        # a bare `&` before a symbol we did not match is itself a problem worth reporting.
        body = SYM_RE.sub(sub, body)
        for m in re.finditer(r"&\s*(?:DAT_|_DAT_|PTR_|UNK_|FUN_|s_|LAB_)", body):
            self.problems.append("dangling_address_of")
        return body

    # ---- Ghidra's type spellings -> ours
    def _types(self, body):
        body = _replace_bools(body)
        # A pointer CAST becomes an integer cast. After the deref passes there is no pointer arithmetic
        # left, so `(void *)0x0` comparing against a CowU32 is a type error (and a 64-bit-host warning)
        # for no benefit: in this tree an address IS a number.
        body = re.sub(r"\(\s*(?:const\s+)?[A-Za-z_][A-Za-z0-9_ ]*\s*\*\s*\)", "(CowU32)", body)
        for pat, rep in GHIRDA_TYPES:
            body = re.sub(pat, rep, body)
        for bad in ("undefined3", "undefined5", "undefined6", "undefined7"):
            if re.search(r"\b%s\b" % bad, body):
                self.problems.append("unmappable_type_%s" % bad)
        return body


def _before_is_operand(s, pos):
    """True when what precedes `pos` ends an expression, so a `&` there is AND, not address-of.

    A keyword does not end an expression: `return &PTR_x` is address-of even though the character before
    the `&` is the `n` of `return`. This is the token-level answer to a question the character level
    cannot ask.
    """
    m = re.search(r"([A-Za-z_][A-Za-z0-9_]*|.)\s*$", s[:pos])
    if not m:
        return False
    tok = m.group(1)
    if len(tok) == 1:
        return tok in ")]0123456789\"'"
    return tok not in KEYWORDS


def _top_level(s, start, ch):
    """Index of `ch` at bracket depth 0, or -1."""
    depth = 0
    for j in range(start, len(s)):
        c = s[j]
        if c in "([{":
            depth += 1
        elif c in ")]}":
            depth -= 1
        elif c == ch and depth == 0:
            return j
    return -1


def leftover_problems(body):
    """Anything still looking like Ghidra after the rewrite - the last line of defence before a file that
    cannot compile reaches the tree."""
    out = []
    for pat, tag in ((r"\bDAT_[0-9a-fA-F]{6,8}", "leftover_DAT"),
                     # A C local whose address escapes is not a lift, it is a bug with a PASS rate
                     # attached. The original kept those bytes in the GUEST frame (a run of pushes the
                     # decompiler folded into locals) and handed the callee a pointer INTO that frame;
                     # `&local_4` is a host address, so the callee writes outside guest memory and the
                     # memory trace disagrees no matter what else is right. Refusing puts the pattern in
                     # the histogram instead of hiding it inside a `memory` failure.
                     (r"&\s*local_[0-9A-Za-z_]*", "local_address_escapes"),
                     # `&uStack_4` was the one that mattered: Ghidra names a function's stack variables
                     # `<typePrefix>Stack_<offset>` (uStack_4, iStack_8, auStack_10, pcStack_c ...), and the
                     # two forms above did not cover it - so a lifted body happily handed the ADDRESS OF A C
                     # LOCAL to a guest callee, which stores through it as if it were a guest address. That
                     # is not a wrong answer, it is a host pointer in guest memory: every one of those rows
                     # lands in the `memory` bucket and none of them says why. The name is the give-away, so
                     # the pattern is the name.
                     (r"&\s*[A-Za-z_][A-Za-z0-9_]*Stack_[0-9A-Za-z_]+", "local_address_escapes"),
                     (r"&\s*_Stack_[0-9A-Za-z_]*", "local_address_escapes"),
                     (r"\bPTR_[A-Za-z0-9_]*[0-9a-fA-F]{6,8}", "leftover_PTR"),
                     (r"\bFUN_[0-9a-fA-F]{8}", "leftover_FUN"),
                     (r"\bthunk_[A-Za-z0-9_]*[0-9a-fA-F]{6,8}", "leftover_thunk"),
                     (r"\bLAB_[0-9a-fA-F]{8}", "leftover_LAB"),
                     (r"\bCOW_UNBRIDGED_", "leftover_unbridged_call"),
                     (r"\bundefined[0-9]?\b", "leftover_undefined"),
                     (r"\b(?:u?int|short|char)[3567]\b", "leftover_odd_width_type"),
                     (r"\._\d+_\d+_", "leftover_overlay"),
                     (r"\bcode\s*\*", "leftover_code_ptr"),
                     (r"\bunaff_[A-Za-z0-9_]+", "leftover_unaff"),
                     (r"\bin_[A-Z]{2,4}\b", "leftover_in_reg"),
                     (r"\bCONCAT[0-9]+[0-9]+\b", "leftover_concat"),
                     (r"\b(?:ZEXT|SEXT)\b", "leftover_zext_sext"),
                     (r"\bgoto\b", "goto"),
                     (r"\x00", "nul_byte_in_source"),
                     (r"\b__x86\.", "leftover_x86")):
        if re.search(pat, body):
            out.append(tag)
    return out
