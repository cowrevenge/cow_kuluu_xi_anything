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
import os
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

# Which keywords may sit immediately in front of a star that IS a dereference.
#
# This is deliberately NOT `KEYWORDS`. `void`, `const`, `unsigned`, `struct` are TYPE SPECIFIERS, and a star
# after a type specifier belongs to a declarator (`void *pvStack_c;`) or to a cast (`pvVar2 == (void *)0x0`) -
# in C there is no expression in which a type keyword is followed by a dereference operator. The override
# below `_derefs`' multiplication test exists for `return *(int *)(p + 4);`, where `return` is a keyword but
# not an operand; applying it to the specifier keywords as well turned every `void *p;` in Ghidra's
# declaration block into a dereference of `p`, whose width then could not be known because a declarator star
# has no operand to type at all. That is how units whose only bare star was a DECLARATION came to be refused
# as `bare_deref_width_unknown` (the single largest name class in the family: `void *`, 55 of 875 sites in a
# 300-unit sample, plus the `(void *)0x0` cast shapes).
DEREF_KEYWORDS = frozenset("""
    if else while for do switch case default break continue return sizeof goto
""".split())

# `**(int **)(DAT_1045666c + 0xc)` - Ghidra's folded read through a pointer that itself lives in memory, and
# the single largest job left in `bare_deref_width_unknown` (234 of 400 sampled units). The pass takes the
# leading stars, the cast's element type, and the stars inside the cast; the two star counts must AGREE,
# because `*(int **)p` and `**(int *)p` are different reads and which one it was is not ours to guess.
# k stars are k reads: k-1 pointer reads of four bytes each (32-bit guest) and then the object, whose width
# is the cast's element type or nothing - `_width_of` answers None for `code`, a typedef, or a struct it
# cannot size, and the unit keeps refusing rather than read four bytes where the guest read one.
MULTI_STAR_RE = re.compile(r"(\*+)\s*\(\s*([^()]+?)\s*(\*+)\s*\)\s*")

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
    """Ghidra's `true`/`false` as 1/0 and its `bool` type as `_Bool`, outside string literals.

    There is no `true` in this tree's C - the runtime is C11 without stdbool.h - so a lifted file that
    inherits one from the decompiler fails with C2065 "undeclared identifier", an error that says nothing
    about booleans. A plain regex would not do: a lifted body can carry a guest string literal (see the
    string-literal-becomes-address case in lift_selftest), and rewriting `true` inside the TEXT of one
    changes bytes the guest reads. So this walks the text, tracks quoting, and substitutes only whole
    tokens outside a literal - `istrue` and `true_pos` survive, and so does "true love".

    `bool` was added to this same walker on 2026-11-09 rather than to GHIRDA_TYPES, for exactly the reason
    above: the type map is a sequence of plain `re.sub`s over the body, and a guest string that contains the
    separate word `bool` would have been rewritten into `_Bool` inside bytes the guest reads. The word is
    rare enough in identifiers that `\b` alone looks safe; quoting is what actually makes it safe.
    Measured before shipping: of the units the syntax gate was rejecting, 31 failed ONLY because a `bool`
    declaration survived - and 547 more mention bool but are blocked by some other wall, which is why the
    count that mattered was taken from the compiler's own output, not from a grep over Ghidra's C.
    `_Bool` and not `CowU32` because C11 spells the keyword without a header AND normalises on assignment,
    which is the 0/1 behaviour Ghidra's `bool` claims; an integer type would keep a non-0/1 value and change
    what a later `== 1` comparison sees.
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
        for word, rep in (("true", "1"), ("false", "0"), ("bool", "_Bool")):
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


# A PRIMARY expression, and only a primary: a name with its postfix chain.
PRIMARY_WITH_POSTFIX = re.compile(
    r"[A-Za-z_][A-Za-z0-9_]*"
    r"(?:\s*(?:\[[^\[\]]*\]|\([^()]*\)|->\s*[A-Za-z_][A-Za-z0-9_]*|\.\s*[A-Za-z_][A-Za-z0-9_]*))*")


def _read_deref_operand(s, k):
    """What the `*` of a bare (uncast) dereference actually applies to.

    THE PRECEDENCE ARGUMENT, which is the whole reason this is not just `SIMPLE_EXPR`. Unary `*` binds
    tighter than EVERY binary operator, so in C

        *p & 0x1f        is    (*p) & 0x1f          - the mask applies to the VALUE read
        *p + 1           is    (*p) + 1             - the sum applies to the VALUE read
        *(p + 1)         is    a read of p+1        - and Ghidra parenthesises it when it means that

    `SIMPLE_EXPR` walks `name OP operand` for any operator, so it returned `p & 0x1f` as the ADDRESS of the
    dereference. That is a wrong parse, not a missed lookup: had the width been found, the emitted read would
    have gone to `p & 0x1f` - the wrong guest address, in a body that compiles. It did not emit because the
    over-long string then fails the `ptr_names` name lookup and the unit books
    `bare_deref_width_unknown`: a second guard-by-accident, the same shape as the folded vtable call. 26 of
    400 sampled units in that family are this shape (`*X & X`, `*X | X`, `*X * X)`, `*X / X)`).

    So the uncast deref reads a PRIMARY, and any top-level binary operator after it is left exactly where it
    is in the text, where it correctly applies to the value the read produces. A parenthesised operand still
    goes to `_balanced`: inside the parentheses the arithmetic IS the address, and that is the only place it
    can be.
    """
    while k < len(s) and s[k] in " \t":
        k += 1
    if k >= len(s):
        return None, k
    if s[k] == "(":
        return _balanced(s, k, "(", ")")
    m = PRIMARY_WITH_POSTFIX.match(s, k)
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


IMAGE_LEAF = re.compile(r"(?<![\w.])(&?)\s*(?:_?DAT_|PTR_)([0-9a-fA-F]{6,8})\b")


def fold_image_globals(text, img):
    """Rewrite Ghidra's image-global leaves inside a folded callee into the spelling the parser already reads.

    `**(code **)(**(int **)(DAT_1045666c + 0xc) + 200)` is the shape 311 of 311 remaining `**(` bail-outs
    have, and `_callee_read` returned None for it only because `DAT_1045666c` is not in its leaf whitelist.
    Admitting the name to the whitelist is WRONG and was nearly written into the queue: in Ghidra's C a bare
    `DAT_hex` is the VALUE at that address, not its address. The generated body for 0x10003b60 settles it -
    `mov eax,[0x1045666c]` / `mov eax,[eax+0xc]` / `mov ecx,[eax]` / `call [ecx+0xc8]`, four reads - so the
    value has to be fetched before anything is added to it, and an address that skipped that fetch would jump
    through one pointer too few while compiling perfectly.

    So nothing new is parsed here. A bare leaf becomes `*(COW_IMG(...))` - one star over a macro leaf, which
    `_addr_subexpr` already reads as exactly one guest word - and `&DAT_hex` becomes the bare macro, the
    address with no read. The read count then comes out of the existing star bookkeeping and is cross-checked
    in lift.py against the site's own `target_desc` from the generated body, rather than being asserted here.
    """
    def sub(m):
        va = int(m.group(2), 16)
        return img(va) if m.group(1) else "*(%s)" % img(va)

    return IMAGE_LEAF.sub(sub, text)


class Rewriter:
    """One pass over a Ghidra body. `problems` collects every reason the body is not liftable.

    `bridge(target, args, call_text)` is asked what a call becomes; returning None means the caller does
    not know how to bridge that target and the body is refused. It is a callback so this module stays
    about syntax and lift.py keeps the ownership of what a call MEANS.
    """

    def __init__(self, layout, bridge=None, image_lo=0x10000000, image_hi=0x10C15000,
                 bridge_indirect=None, guest_widths=None, rebased_consts=None):
        self.layout = layout            # "0x103517f4" -> COW_ADDR_... macro name (shared across a run)
        self.bridge = bridge
        self.bridge_indirect = bridge_indirect
        self.guest_widths = guest_widths or {}   # image global -> (bytes, is_float), from the GENERATED body
        # Which bare in-image constants this unit's own generated statements spell as `+ RD`, i.e. which
        # ones the recompiler says are ADDRESSES. Empty unless COW_LIFT_REBASE_IMG=1 - see
        # gen_model.model_generated["rebased_consts"] for why the authority is the generated body and not a
        # range test.
        self.rebased_consts = set(rebased_consts or ())
        self.problems = []
        self.image_lo, self.image_hi = image_lo, image_hi
        self.ptr_names = {}             # name -> (bytes, is_float) for every pointer-typed local/param
        # Diagnosis only, never consulted by a translation. Every `*name` the deref pass could not type, and
        # what the text said about that name. See the note at the bail-out in _derefs.
        self.bare_derefs = []
        self.star_declared = {}         # name -> the type words written before its `*`(s), loose
        self.signed_names = set()       # locals Ghidra declared int/short/long/char (see _signed_float_casts)
        # How many calls through a pointer each of the two call-handling passes saw. lift.py refuses a unit
        # that has BOTH: a site is paired with its call by CONSUMPTION ORDER alone, and the two forms are
        # consumed in different passes, so mixing them lets the early pass take the site that belongs to the
        # later call - the wrong return address and argument count on a real call, in a unit that compiles.
        self.n_indirect_static = 0
        self.n_indirect_folded = 0

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

    # ---------------------------------------------------------------- un-rebased image addresses
    def _rebase_image_consts(self, body):
        """Spell a bare in-image constant as COW_IMG(...) when THIS UNIT'S generated body rebases it.

        The wall, found by reading one unit rather than the group: Ghidra prints an in-image address as a
        plain number, so `FUN_10312031(iVar1, 0x1034f8d4, param_1)` reaches the lift as a raw literal while
        the recompiler's translation of the same bytes pushes `(0x1034F8D4u + RD)`. RD is the load-time
        rebase (COW_IMG is `x + RD`), so on a client whose image did not load where Ghidra linked it, our
        side hands the callee a pointer to the wrong place.

        WHAT THIS IS AND IS NOT PROVEN TO FIX - said plainly, because the first draft of this comment claimed
        it explained a `memory, esp-equal` row, and that claim was wrong. The portable proof harness maps the
        image at the PREFERRED base - runtime/portable/pe.c: `rt_set_image(rt_image_base); /* at the preferred
        base: RD = 0 */` - so `rt_reloc_delta` is 0 in every cowdiff run and `COW_IMG(x) == x` there: proof
        CANNOT distinguish a rebased constant from a bare one. Measured after the fact - 140 lifted files
        change, 0 units newly pass, 0 flip to fail. So this is justified by matching the recompiler's own
        translation, not by a differential, and it fixes the relocated client (win32/loader.c calls
        `rt_set_image(g_base)` with whatever base the OS chose) rather than any failure group. If a
        differential is ever wanted, it is one argument away in pe.c - and that is also the only way cowdiff
        could ever see this whole class of bug.
        Consequence worth remembering: the contract cases in lift_selftest.py (group REBASE) are the ONLY
        thing between this rule and a silent regression - and at RD == 0 even a double-wrapped `COW_IMG`
        would still pass the proof, which is why that case exists.

        WHY A WALKER AND NOT ONE regex. Two hazards, both silent:
          * a string literal in a lifted body is GUEST data the game reads; rewriting a `0x...` that appears
            inside one changes bytes the player's client sees. So quoting is tracked, exactly as
            `_replace_bools` does for the same reason.
          * an already-rebased occurrence must not be wrapped twice: `COW_IMG(COW_IMG(x))` adds RD twice and
            is a wrong pointer that still compiles. Whole tokens are matched and a name already preceded by
            `COW_IMG(` is left alone.

        The set is per-unit and comes from the recompiler's own `+ RD` spellings (gen_model), never from a
        range test: a mask or a count that happens to fall inside the image range must stay a number.
        """
        if not self.rebased_consts:
            return body
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
            if c == "0" and body[i + 1:i + 2] in ("x", "X"):
                m = re.match(r"0[xX]([0-9a-fA-F]{6,8})(u|U)?", body[i:])
                if m:
                    before = body[i - 1] if i else ""
                    j = i + m.end()
                    after = body[j] if j < n else ""
                    if before not in IDENT_CHARS and after not in IDENT_CHARS:
                        va = int(m.group(1), 16)
                        if va in self.rebased_consts:
                            out.append(self.img(va))    # registers the macro in ctx.layout, as every other
                            i = j                       # address this file emits does
                            continue
                    out.append(body[i:j])
                    i = j
                    continue
            out.append(c)
            i += 1
        body = "".join(out)
        # The SAME wall in its other spelling, which a hex-only pass walks straight past: the lift often
        # normalises an address into a layout macro, and a bare `COW_ADDR_LIFT_1034F8D4` used as a VALUE is
        # un-rebased just as a bare literal is. Wrap the ones this unit rebases and that are not already
        # inside a COW_IMG(...).
        def _wrap(mm):
            va = int(mm.group(1), 16)
            if va not in self.rebased_consts:
                return mm.group(0)
            return "COW_IMG(%s)" % mm.group(0)
        return re.sub(r"(?<!COW_IMG\()\bCOW_ADDR_LIFT_([0-9a-fA-F]{6,8})\b", _wrap, body)

    # ---------------------------------------------------------------- pointer-typed names
    def bare_width(self, expr):
        """The width a bare (uncast) `*EXPR` reads, from the element type Ghidra gave the pointer at its base.

        The uncast form has no `(T *)` to read, so the only honest source is the declared type of the pointer
        - and the pointer is sometimes not the whole operand: `*(piVar1 + 8)` and `*(param_1 + 1)` (the
        parenthesised form Ghidra uses when the arithmetic IS the address) have their type on the BASE. The
        element type of a sum is the element type of its pointer operand, so peeling the parentheses and one
        additive term recovers a width that is stated, not guessed.

        Anything else stays None and the unit refuses. In particular this does not invent a width for a
        computed expression whose base is not a single declared name: defaulting those to a dword is how a
        byte read silently becomes a four-byte one, which is the reason this branch refuses at all.
        """
        if not expr:
            return None
        inner = expr.strip()
        while inner.startswith("(") and inner.endswith(")"):
            inner = inner[1:-1].strip()
        if re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", inner):
            if inner.lower().startswith(("dat_", "ptr_", "fun_")):
                # An image global has no declared type to read: Ghidra emits `*DAT_10456a28 = 0;` with no
                # `undefined4 *` anywhere, and the census says this one name shape is 75 units of the family
                # on its own. The width is not invented here - it is the accessor the GENERATED body used at
                # that same address (`rd32` / `wr8` / ...), which is the authority on plumbing. An address the
                # body touches two different ways has no entry at all and still refuses.
                g = re.fullmatch(r"(?:DAT|PTR|FUN)_([0-9a-fA-F]{4,8})", inner, re.I)
                if g:
                    w = self.guest_widths.get(int(g.group(1), 16))
                    return w if w and not w[1] else None
                return None
            return self.ptr_names.get(inner)
        m = re.fullmatch(r"\s*([A-Za-z_][A-Za-z0-9_]*)\s*(?:([+-])\s*[^+-]+?|\[[^[\]]*\])\s*", inner)
        if m:
            return self.ptr_names.get(m.group(1))
        return None

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
        # The LOOSE declaration scan, for the census only: any `... * name` shape in the text, with the
        # words in front of it kept verbatim. It deliberately over-reports (`char *param_1, char param_2`
        # makes a candidate out of param_2) - a census wants to see what the decompiler wrote, and the
        # lifter's own table above stays strict.
        for m in re.finditer(r"([A-Za-z_][A-Za-z0-9_ ]*?((?:\*\s*)+))([A-Za-z_][A-Za-z0-9_]*)\s*(?:;|,|\))",
                             text):
            self.star_declared.setdefault(m.group(3), re.sub(r"\s+", " ", m.group(1)).strip())

    # ---------------------------------------------------------------- the passes
    # ---------------------------------------------------------------- signed comparisons
    # Ghidra spells a signed deref `*(int *)x`; every one of these widths is signed on the guest's view of
    # the same bytes. `undefined*`, `uint`, `uchar`, `_BYTE` and friends are NOT in this table: unknown or
    # unsigned means leave the comparison exactly as it is, because guessing a sign that is not there turns a
    # correct unsigned compare into a wrong signed one.
    SIGNED_CAST_WIDTH = {
        "char": 1, "signed char": 1, "short": 2, "signed short": 2,
        "int": 4, "signed int": 4, "long": 4, "signed long": 4, "__int32": 4,
        "__int64": 8, "long long": 8, "signed long long": 8,
    }
    SIGNED_CAST_RE = r"(?:signed\s+)?(?:char|short|int|long|__int32|__int64|long\s+long)"
    CMP_OP_RE = r"(?:<=|>=|<|>)"          # NOT == or !=: equality is the same bit pattern either way
    SIMPLE_RHS_RE = (r"(?:-\s*)?(?:0[xX][0-9a-fA-F]+|\d+|[A-Za-z_]\w*"
                     r"(?:\s*(?:\.|->)\s*\w+)*(?:\[[^\[\]]*\])?)")

    def _signed_compares(self, body):
        """`*(int *)x < y` -> `((int32_t)(*(int *)x) < (int32_t)(y))`, and only where Ghidra SAID signed.

        The bug, found by reading one `eax` unit against its generated body. 0x100083a0 is

            100083a0  cmp dword ptr [ecx + 0xda8], 0xb
            100083a7  setl al                     ; setl = SIGNED less (sf != of)
            100083aa  ret

        and Ghidra's C renders it correctly: `return *(int *)(param_1 + 0xda8) < 0xb;` - the `int` is
        Ghidra telling us the compare is signed. The lift turns that deref into `rd32(...)`, which returns an
        UNSIGNED word, so the emitted compare became unsigned and returned 1 where the guest returned 0 - the
        whole failure is one bit of the low byte, `A:00980201 / B:00980200`.

        WHY IT IS SOUND. Two things do the work. (1) The sign is not inferred, it is read from the cast
        Ghidra wrote - the same "trust Ghidra's declared type, never invent one" rule `param_types()` uses
        for float arguments; a type Ghidra did not state (`undefined4 *`, `uint *`) is left completely
        alone. (2) BOTH sides are cast to the signed type, because C's usual arithmetic conversions would
        otherwise promote `int32_t < uint32_t` back to an UNSIGNED compare and quietly undo the fix. Only
        ordering operators are touched: `< <= > >=` depend on sign, `== !=` do not.

        Only a signed deref on one side and a literal/simple name on the other is matched - anything more
        complex is left exactly as it was, so a failure to recognise is a missed improvement and never a new
        wrong answer.

        WHAT THE A/B SAID, measured the same day rather than assumed: 153 lifted files changed, 34 of them
        passing before and 66 after - **+32 proven, 0 regressions**, build green. But the gain did NOT come
        from the group I read the bug in: those 32 came from `fault` 21, `eax` 7, `memory` 2, `timeout` 1,
        `out-of-region write` 1. So the correct description of this rule is "a signed compare that the lift
        was making unsigned, which most often shows up as a unit faulting", NOT "the mechanism behind the
        `eax` group" - that group is still mostly unexplained at ~512 rows. Reading one unit finds a real
        bug; only the run says where its victims were.
        """
        # The type is matched but NOT captured: a stray group here shifts every group number below and the
        # replacement then reads the TYPE as the operator (it did - emitting `((int32_t)(...) int (...)(<))`,
        # which the first run of the sample caught rather than the compiler three hours later).
        deref = (r"\*\s*\(\s*(?:const\s+)?" + self.SIGNED_CAST_RE + r"\s*\*\s*\)"
                 r"\s*(?:\([^()]*\)|[A-Za-z_]\w*)")
        simple = self.SIMPLE_RHS_RE
        op = self.CMP_OP_RE
        pats = [re.compile(r"(" + deref + r")\s*(" + op + r")\s*(" + simple + r")"),
                re.compile(r"(" + simple + r")\s*(" + op + r")\s*(" + deref + r")")]

        def repl(m, left_is_deref):
            lhs, o, rhs = m.group(1), m.group(2), m.group(3)
            tm = re.search(r"\(\s*(?:const\s+)?(" + self.SIGNED_CAST_RE + r")\s*\*\s*\)",
                           lhs if left_is_deref else rhs)
            if not tm:
                return m.group(0)
            typ = re.sub(r"\s+", " ", tm.group(1)).strip()
            w = self.SIGNED_CAST_WIDTH.get(typ)
            if not w:
                return m.group(0)
            cast = {1: "int8_t", 2: "int16_t", 4: "int32_t", 8: "int64_t"}[w]
            return "((%s)(%s) %s (%s)(%s))" % (cast, lhs, o, cast, rhs)

        for p, left in ((pats[0], True), (pats[1], False)):
            body = p.sub(lambda m, L=left: repl(m, L), body)
        return body

    def _signed_float_casts(self, body):
        """`(float)(iVar3 * rd32(...))` -> `(float)(int32_t)(iVar3 * rd32(...))`, and only there.

        WHY. `rd32` returns an unsigned word, so a mixed product between a signed local and a guest read is
        computed in UNSIGNED arithmetic and converted afterwards - and `(float)` of an unsigned word is not
        `(float)` of the same bits read as signed. 37 of the float/double casts in a 120-unit sample of the
        fild family were exactly this shape with nothing to correct them.

        WHY IT IS SOUND. For `+ - *` the 32-bit pattern is the same operation whichever signedness the
        compiler assumes (two's complement), so re-reading the product as signed gives the bits the guest
        had, and the conversion after it is then the one the x87 would have done. `/ % >> <` are the
        operations where signed and unsigned genuinely DIFFER in the result, not just in the reading, so an
        operand containing them is left strictly alone - this rule cannot fix those and must not pretend to.

        WHY IT IS NARROW. It only fires when BOTH halves of the story are present: a `rd*` read in the
        operand (otherwise there is nothing that lost its sign), and a local Ghidra declared with a signed
        type (otherwise the guest value was never signed to begin with). A `(float)` over an unsigned local
        or a plain parameter is left exactly as it was.
        """
        if not self.signed_names:
            return body
        out, i, n = [], 0, len(body)
        cast_re = re.compile(r"\(\s*(float|double)\s*\)")
        while True:
            m = cast_re.search(body, i)
            if not m:
                out.append(body[i:])
                break
            # the operand runs to the end of the expression: balanced parens, stopping at a top-level
            # `;`/`,`/`=`/`{`/`}`. A regex cannot do this - the reads it has to see are `rd32(COW_IMG(X))`,
            # two levels of nesting deep, which is exactly where a pattern like `(\([^()]*\))?` gives up
            # and would silently leave the wrong sign in place.
            j = m.end()
            while j < n and body[j] in " \t\n\r":
                j += 1
            depth, k = 0, j
            while k < n:
                ch = body[k]
                if ch == "(":
                    depth += 1
                elif ch == ")":
                    if depth == 0:
                        break
                    depth -= 1
                elif depth == 0 and ch in ";,={}":
                    break
                k += 1
            operand = body[j:k].strip()
            out.append(body[i:m.end()])
            new = operand
            if (operand and re.search(r"\brd(8|16|32|64|f32|f64)\(", operand)
                    and not re.search(r"[/%]|>>|<<", operand)
                    and any(re.search(r"\b%s\b" % x, operand) for x in self.signed_names)):
                new = "(int32_t)(%s)" % operand
            out.append(new)
            i = k
        return "".join(out)

    def collect_signed_decls(self, text):
        """Locals Ghidra declared with a SIGNED type. `int iVar3;` is the whole story for the cast rule -
        and GHIRDA_TYPES deliberately does not map int/short/long/char, so those spellings are still in the
        text by the time the casts are rewritten, which is what makes the question answerable at all."""
        for m in re.finditer(r"(?:^|[;{}\n])\s*(unsigned)\s+(?:int|short|long|char)\b", text, re.M):
            pass                                   # placeholder: unsigned words are excluded below
        for m in re.finditer(r"(?:^|[;{}\n])\s*(?<!unsigned )\b(int|short|long|char)\s+([A-Za-z_][A-Za-z0-9_]*)",
                             text):
            self.signed_names.add(m.group(2))
        # a name declared unsigned anywhere is not signed, whatever else the file says about it
        for m in re.finditer(r"\b(?:unsigned|uint|ushort|ulong|uchar)\s+([A-Za-z_][A-Za-z0-9_]*)", text):
            self.signed_names.discard(m.group(1))

    def rewrite(self, body, sig=""):
        body = re.sub(r"/\*\s*WARNING:.*?\*/", "", body, flags=re.S)   # Ghidra's own editorialising
        # FIRST, on pristine Ghidra text. It reads the SIGN Ghidra put on a deref (`*(int *)x < y`), and
        # every later pass destroys that evidence: _derefs turns `*(int *)x` into `rd32(x)`, which is
        # UNSIGNED, and the comparison silently changes meaning.
        body = self._signed_compares(body)
        # The SIGNATURE is scanned for pointer types too: `undefined4 *param_1` is the only place that
        # says param_1 is a dword pointer, and without it `param_1[0x181] = v` cannot be scaled to +0x604
        # and stays C array indexing on an integer, which does not compile.
        self.collect_pointer_decls(sig + "\n" + body)
        self.collect_signed_decls(sig + "\n" + body)
        body = self._unknown_calls(body)
        body = self._calls(body)
        # BEFORE the deref pass, on purpose. Left until last, the callee's own `*`s are fed to _derefs first
        # and it refuses them as bare derefs of unknown width - so the unit books `bare_deref_width_unknown`
        # for what is really a call this pass could have bridged (234 of the 1,268 in today's re-run). Take
        # the call text here, while it is still whole, and both passes get their own business.
        body = self._computed_calls(body)
        body = self._bitops(body)
        body = self._overlays(body)
        body = self._derefs(body)
        body = self._arrays(body)
        body = self._global_stores(body)
        body = self._symbols(body)
        body = self._image_subscripts(body)
        # BEFORE _types: it needs to see the operand while the guest reads are still `rd*` calls and the
        # signed locals are still spelled int/short/long/char.
        body = self._signed_float_casts(body)
        body = self._types(body)
        # AFTER _types and everything else that READS a hex constant: this pass turns bare numbers into
        # COW_IMG(...) calls, and a pass still looking for `0x1034f8d4` would miss it. Late is also where the
        # text is final, so the walker cannot have its token split by a later rewrite.
        body = self._rebase_image_consts(body)
        # LAST, not first: `undefined4 *extraout_EDX` is a pointer DECLARATION, and the deref and subscript
        # passes read their widths from it. Replacing the name earlier emptied that table and every unit
        # using one came back refused as bare_deref_width_unknown - a "fix" that converts 34 wrong units
        # into 34 refusals is not a fix. By now the widths are baked in and the identifier is free to become
        # the live guest register it always was.
        body = self._register_markers(body)
        return body

    # ---- an image symbol Ghidra subscripted as an array
    #
    # `DAT_10377c58` typed as `undefined4 *` reaches the rewriter as `(COW_IMG(COW_ADDR_LIFT_10377C58))[i]`
    # once _symbols has run. COW_IMG yields an ADDRESS, not a pointer object, so subscripting it is not C
    # at all - "error C2109: subscript requires array or pointer type", and a companion C2198 when it sits
    # inside a wr32(...) call. Both were the largest compile-side loss in the newly-released population.
    # The element size is the dword that Ghidra's `undefined4 *` convention states; if that convention is
    # wrong for a site, cowdiff reports the wrong value rather than the build staying quiet.
    IMG_SUB_READ = re.compile(r"\(COW_IMG\((COW_ADDR_\w+)\)\)\s*\[([^\]]+)\]")
    IMG_SUB_WRITE = re.compile(r"(?m)^([ \t]*)\(COW_IMG\((COW_ADDR_\w+)\)\)\s*\[([^\]]+)\]\s*=\s*([^;]+);")

    # THE POINTER-VALUED GLOBAL. `DAT_1047d158[1] = iVar2;` for a global Ghidra never typed arrives here as
    # `rd32(COW_IMG(...))[1] = v` - one read to fetch the POINTER stored in the global, then a subscript
    # through it. The two rules below covered only the other case (subscript the global's OWN storage), so
    # IMG_SUB_READ matched the tail `(COW_IMG(...))[1]` INSIDE that value read and produced
    # `rd32rd32((uint32_t)(COW_ADDR_... + 4u * (uint32_t)(1))) = v` - a call glued to a call and an
    # assignment to a non-lvalue: 32 units refused by the doubled_accessor guard.
    #
    # The generated body decides which reading is right, and it says: `mov ecx,[0x1047d158]` then `mov
    # dwordptr[ecx+4],eax`. So the base still has to be FETCHED - the replacement re-wraps group 2 in
    # `rd32(...)` rather than using the macro as an address, which is the one-pointer-too-few bug this
    # family has now been bitten by twice. These rules run FIRST so the address-form rules below never see
    # a base that is already a read.
    IMG_SUB_PTR_WRITE = re.compile(
        r"(?m)^([ \t]*)rd32\((COW_IMG\(COW_ADDR_\w+\))\)\s*\[([^\]]+)\]\s*=\s*([^;]+);")
    IMG_SUB_PTR_READ = re.compile(r"rd32\((COW_IMG\(COW_ADDR_\w+\))\)\s*\[([^\]]+)\]")

    def _image_subscripts(self, body):
        # pointer-valued global first: write before read, same reason the address form needs that order
        body = self.IMG_SUB_PTR_WRITE.sub(
            r"\1wr32((uint32_t)(rd32(\2) + 4u * (uint32_t)(\3)), \4);", body)
        body = self.IMG_SUB_PTR_READ.sub(
            lambda m: "rd32((uint32_t)(rd32(%s) + 4u * (uint32_t)(%s)))"
                      % (m.group(1), m.group(2).strip()),
            body)
        # the store form first: it has to become a call, and the read rule would otherwise eat its left side
        #
        # NOTE the `%s` here is COW_IMG(group), NOT the bare macro. Both rules match `(COW_IMG(macro))[i]`
        # but capture only the INNER macro name, so an earlier version substituted the macro alone and threw
        # away the rebasing the pattern had gone out of its way to match: `rd32((uint32_t)(COW_ADDR_LIFT_x
        # + 4u * n))` reads the table at its STATIC address. The generated body says `eax * 4 + 0x10480AF0u
        # + RD`. At RD == 0 - which is every cowdiff run, the harness maps at the preferred base - the two
        # are indistinguishable, so proof could not see it and did not: 87 lifted files were shipping an
        # un-rebased access base, 44 of them inside units the record calls proven. It is the recompiler's own
        # translation, not a differential, that makes this right. Pinned by two contract cases in
        # lift_selftest.py (group IMG_SUB), which are the only defence this class has.
        body = self.IMG_SUB_WRITE.sub(
            lambda m: "%swr32((uint32_t)(COW_IMG(%s) + 4u * (uint32_t)(%s)), %s);"
                      % (m.group(1), m.group(2), m.group(3).strip(), m.group(4).strip()), body)
        return self.IMG_SUB_READ.sub(
            lambda m: "rd32((uint32_t)(COW_IMG(%s) + 4u * (uint32_t)(%s)))"
                      % (m.group(1), m.group(2).strip()),
            body)

    # ---- Ghidra's own names for the guest register file
    #
    # `extraout_EDX` is not a variable: it is the decompiler's label for "whatever edx holds after this
    # point", usually around a call it decided does not clobber it. As C it is an unassigned local, and the
    # units that store through it have been compiling with C4700 and writing to a host stack value.
    EXTRA_REG = re.compile(r"\b(?:extraout|extrain|nolang_extraout)_"
                           r"(EAX|EBX|ECX|EDX|ESI|EDI|EBP|ESP)(?:_\d+)?\b")

    # A declaration of a register marker, and NOTHING else. The prefix has to be a type word: the first
    # pattern used a permissive identifier-and-spaces prefix, which matched `return ` and silently deleted
    # `return extraout_EDX;` - a lifted unit losing its return statement, compiling, and failing somewhere
    # that points nowhere near this line.
    _MARKER_TYPES = (r"(?:const\s+)?(?:(?:CowU8|CowU16|CowU32|uint8_t|uint16_t|uint32_t|uint64_t"
                     r"|int8_t|int16_t|int32_t|int64_t|undefined4|undefined2|undefined1|unsigned"
                     r"|signed|int|float|double|char|short|long|bool|void|size_t)(?:\s*\*\s*|\s+))+")
    MARKER_DECL = re.compile(
        r"^[ \t]*(?!(?:return|if|else|while|for|do|switch|case|default|break|continue|goto)\b)"
        + _MARKER_TYPES +
        r"(?:extraout|extrain|nolang_extraout)_"
        r"(?:EAX|EBX|ECX|EDX|ESI|EDI|EBP|ESP)(?:_\d+)?[ \t]*;[ \t\r]*$", re.M)

    def _register_markers(self, body):
        # The declaration goes first: `undefined4 *extraout_EDX;` is not a local, it is the decompiler
        # naming the register file, and if it survives the emitter hoists it into `CowU32 *g->edx;` - a
        # declaration that cannot compile.
        body = self.MARKER_DECL.sub("", body)
        return self.EXTRA_REG.sub(lambda m: "g->%s" % m.group(1).lower(), body)

    @staticmethod
    def is_register_marker(name):
        return bool(re.fullmatch(r"(?:extraout|extrain|nolang_extraout)_"
                                 r"(EAX|EBX|ECX|EDX|ESI|EDI|EBP|ESP)(?:_\d+)?", name or ""))

    # ---- Ghidra's bit-packing idioms, which belong to the decompiler and not to C.
    _ODD_CAST = re.compile(r"^\s*\(\s*(?:u?int|short|char)([3567])\s*\)\s*(.*)$", re.S)

    def _drop_redundant_cast(self, arg, mask_bytes):
        """Strip an outermost odd-width cast from a CONCAT half, but only while the mask hides it.

        `(int3)v` then masked to `8*mask_bytes` bits is the same value as `v` masked, exactly when the mask is
        no wider than the cast truncates to (8*mask_bytes <= 8*cast_bytes). If the mask is WIDER, the cast was
        discarding real high bits and removing it would resurrect them - so this returns the argument
        unchanged and the leftover scan refuses the unit, which is the correct outcome, not a failure.

        Only a single outermost cast is considered. A nested one may sit under a shift whose sign behaviour
        depends on it, and this cannot see far enough to promise anything about it.
        """
        m = self._ODD_CAST.match(arg or "")
        if not m:
            return arg
        cast_bytes = int(m.group(1))
        inner = m.group(2).strip()
        if not inner or 8 * mask_bytes > 8 * cast_bytes:
            return arg
        return inner

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
                    # Ghidra spells a partial register write like `mov al,1` as
                    # `CONCAT31((int3)(x >> 8), 1)`, and the bare `int3` then trips the leftover scan
                    # (`leftover_odd_width_type`) even though the value is about to be masked to 8*nhi bits
                    # by this very line - so 214 of 262 units in that family are refused over a token that
                    # cannot affect the result. Drop the cast ONLY where the mask makes it unobservable:
                    # truncating to c bytes before masking to m bits is the same value iff m <= 8c. Drop it
                    # the other way and CONCAT41((int3)x, y) would keep bits the guest had thrown away, which
                    # is a silent wrong answer rather than a refusal - so the condition is the fix, not a
                    # detail of it.
                    if os.environ.get("COW_LIFT_ODD_WIDTH_CAST"):
                        args = [self._drop_redundant_cast(a, nhi) for a in args[:1]] + \
                               [self._drop_redundant_cast(a, nlo) for a in args[1:]]
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
        # `FUN_10001070(...)` is a call to a known address; `(*param_4)(...)` and `(*PTR_FUN_10329e88)(...)`
        # are the decompiler's spelling of a call THROUGH a pointer, which the generated body says plainly
        # (`call ebx`, `call dword ptr [ecx+0x18]`). Both are calls; both go to the bridge machinery, and
        # the indirect one reaches the runtime's own rt_call_indirect - see cow_bridge_indirect.
        call_re = re.compile(r"\b(?:thunk_)?FUN_([0-9a-fA-F]{8})\s*\("
                             r"|\(\s*\*\s*(?:(PTR_FUN_|UNK_|DAT_)?([0-9a-fA-F]{8})|([A-Za-z_][A-Za-z0-9_]*))"
                             r"\s*\)\s*\(")
        while i < n:
            m = call_re.search(body, i)
            if not m:
                out.append(body[i:])
                break
            out.append(body[i:m.start()])
            # groups: 1 = FUN_<hex>;  2/3 = PTR_FUN_|UNK_|DAT_ + <hex>;  4 = a plain callee variable
            if m.group(4) is not None or m.group(2):
                # an indirect call: hand the callee expression to the bridge callback verbatim and let
                # lift.py decide whether the generated body can name the target
                name = m.group(4) or ("%s%s" % (m.group(2), m.group(3)))
                args_txt, after = _balanced(body, m.end() - 1, "(", ")")
                if args_txt is None:
                    self.problems.append("unparsable_indirect_call_at_%s" % name)
                    out.append(body[i:m.end()])
                    i = m.end()
                    continue
                args = self._split_args(args_txt[1:-1])
                self.n_indirect_static += 1
                repl = self.bridge_indirect(name, args) if self.bridge_indirect else None
                if repl is None:
                    self.problems.append("unbridgeable_indirect_call_%s" % name)
                    out.append("COW_UNBRIDGED_INDIR_%s(%s)" % (name, args_txt[1:-1]))
                else:
                    out.append(repl)
                i = after
                continue
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

    # ---- Ghidra's folded vtable call, bridged LAST, when every other pass has had its say
    def _computed_calls(self, body):
        """Bridge `(**(code **)(*param_1 + 0x24))(a, b)` - the call Ghidra writes with its pointer load
        folded into the callee, which the call pass above cannot see (its indirect alternative needs a bare
        identifier) and which the deref pass, running later and not knowing the text is a call, leaves as a
        RAW HOST CALL through a guest pointer.

        Why it runs last and not with the other call handling: the bridge wants a C expression it can hand
        to `rt_call_indirect` as the target, and that expression only exists after the deref, symbol, type
        and register passes have turned Ghidra's text into ours (`rd32`, `COW_IMG`). Trying to match the
        form in the call pass means parsing `(code **)` soup; trying to name it from the guest side means
        naming a LOAD, which `call_reg_values` rightly refuses outside the effect-free tail window (762 of
        820 sites in tools/cow/ghidra/lift_indirect_diag.py are exactly that wall).

        What keeps it honest is not this pass but the check in lift.py: the number of reads produced here is
        carried to the bridge and compared against the site's own `target_desc`, which came from the
        GENERATED BODY - the guest's `call [eax+0x24]` says how many indirections there are, and a callee
        text that disagrees is refused. Ghidra's leading `*`s are never counted as if they were reads:
        in `(**(code **)(X))()` the outermost `*` is the call idiom (it turns a `code *` into the `code`
        being called), not a memory read, and a rule that counted it would jump through one pointer too
        many - the wrong address, on a call, which is the failure in this family that could still look
        right to cowdiff.
        """
        hits = computed_pointer_calls(body)
        if not hits:
            return body
        self.n_indirect_folded = len(hits)
        out, i = [], 0
        for start, end, callee, args_txt in hits:
            if start < i:
                continue                                   # nested inside one already taken
            # The image-global fold runs HERE, with the layout in hand, so the macro a callee's base needs is
            # registered on the way through (`_callee_read` is a classmethod and has no layout of its own).
            read = self._callee_read(fold_image_globals(callee, self.img))
            if read is None:
                # left alone on purpose: `leftover_problems` refuses the unit as
                # host_call_through_computed_pointer, so an untranslated callee becomes a NAMED refusal
                # rather than a host call that compiles.
                self.problems.append("indirect_callee_not_translatable")
                continue
            expr, reads = read
            args = self._split_args(args_txt)
            repl = (self.bridge_indirect("EXPR:%d:%s" % (reads, expr), args)
                    if self.bridge_indirect else None)
            if repl is None:
                self.problems.append("unbridgeable_indirect_call_folded")
                out.append(body[i:start])
                out.append("COW_UNBRIDGED_INDIR_FOLDED(%s)" % args_txt.strip())
                i = end
                continue
            out.append(body[i:start])
            out.append(repl)
            i = end
        out.append(body[i:])
        return "".join(out)

    # The canonical folded callee, and nothing else. `(code **)` / `(int **)` casts, a parenthesised
    # address that may itself deref ONE identifier, and only +/- with constants around it. Every other
    # spelling returns None and is refused: a callee expression we cannot fully account for is a call whose
    # target we would be guessing at.
    FOLDED_HEAD = re.compile(r"\A\s*(\*+)\s*((?:\(\s*[A-Za-z_][A-Za-z0-9_ ]*\s*\*+\s*\)\s*)*)\(")
    SIMPLE_ADDR = re.compile(r"\A\s*(?:(\*+)([A-Za-z_][A-Za-z0-9_]*)|([A-Za-z_][A-Za-z0-9_]*|COW_IMG\s*\(\s*COW_ADDR_[0-9A-Z_]+\s*\)|0x[0-9a-fA-F]+|\d+))"
                             r"\s*(?:([+-])\s*(0x[0-9a-fA-F]+|\d+))?\s*\Z")

    @classmethod
    def _callee_read(cls, text):
        """(C target expression, number of guest reads it performs), or None if it is not a form I can account for.

        TWO spellings, because this pass runs after the deref pass and the text it is handed is usually
        already ours. That is what my first version got wrong and why the family released nothing: it parsed
        only Ghidra's raw `**(code **)(...)` and was actually handed `*rd32(...)` by the pipeline.

          POST-DEREF (what the pipeline really gives):  `*rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x24u)))`
              one leading `*` = the call idiom; drop it, and the remainder IS the target. The reads are the
              `rd32` calls inside it.

          G HIDRA RAW (unit tests, and any callee the deref pass declined): `**(code **)(*param_1 + 0x24)`
              two leading `*`: one is the call idiom, one is the slot read; the inner `*param_1` is the
              vtable pointer read.

        Either way the outermost `*` is NEVER counted as a memory read - it turns the `code *` into the
        `code` being called - and miscounting it is a jump through one pointer too many, i.e. a wrong
        address on a call, which is the failure mode here that can still look healthy to cowdiff. That is
        why lift.py re-checks the count against target_desc instead of trusting this function.
        """
        t = text.strip()
        if not t.startswith("*"):
            return None
        rest = t[1:].strip()
        if rest.startswith("*") or rest.startswith("(") and re.match(r"\(\s*[A-Za-z_][A-Za-z0-9_ ]*\*+\s*\)",
                                                                     rest):
            return cls._callee_read_ghidra(t)
        # post-deref: `*<our C>` - drop the call idiom and account for every token that is left
        if rest.count("(") != rest.count(")"):
            return None
        expr = rest[1:-1].strip() if rest.startswith("(") and rest.endswith(")") else rest
        if not expr:
            return None
        reads = len(re.findall(r"\brd(?:8|16|32|64|f32|f64)\s*\(", expr))
        if not cls._callee_leaves_ok(expr):
            return None
        return expr, reads

    # What may appear in a translated callee address, and nothing else. A Ghidra LOCAL is the frame-aliasing
    # model's business (149 of the 560 sampled sites, refused on purpose - the same wall the string family
    # waits on), `&` would hand a guest callee a host address, and a call inside a callee is an effect the
    # bridge would be performing at a time the guest did not.
    LEAVE_OK = re.compile(r"\A(?:\s*(?:rd(?:8|16|32|64|f32|f64)|uint32_t|COW_IMG|COW_ADDR_[0-9A-Z_]+"
                          r"|param_\d+|[0-9xuX]|[(\)\s+\-*/&|^]|\b0x[0-9a-fA-F]+\b))*\s*\Z")

    @classmethod
    def _callee_leaves_ok(cls, expr):
        if "&" in expr or "[" in expr or "=" in expr or ";" in expr:
            return False
        # NUMBERS FIRST, and this is the second time it has bitten: `[A-Za-z_]\w*` matches the `x24u` inside
        # `0x24u` and the `u` inside `36u`, so scanning for identifiers before deleting the literals rejects
        # every displaced address as if it named a forbidden variable.
        for name in re.findall(r"[A-Za-z_][A-Za-z0-9_]*",
                               re.sub(r"0x[0-9a-fA-F]+[uU]?|\b\d+[uU]?", " ", expr)):
            if not re.fullmatch(r"rd8|rd16|rd32|rd64|rdf32|rdf64|uint32_t|COW_IMG|COW_ADDR_[0-9A-Z_]+|param_\d+",
                                name):
                return False
        return True

    # A Ghidra cast sitting on the address of a folded callee: `(int **)`, `(code **)`, `(uint32_t *)`.
    SUB_CAST = re.compile(r"\(\s*[A-Za-z_][A-Za-z0-9_ ]*\*+\s*\)")
    # A leaf address with its optional constant displacement - the same leaf set SIMPLE_ADDR admits.
    SUB_LEAF = re.compile(r"\A([A-Za-z_][A-Za-z0-9_]*|COW_IMG\s*\(\s*COW_ADDR_[0-9A-Z_]+\s*\)"
                          r"|0x[0-9a-fA-F]+|\d+)\s*(?:([+-])\s*(0x[0-9a-fA-F]+|\d+))?\s*\Z")

    @classmethod
    def _addr_subexpr(cls, text, depth=0):
        """(address C expression, guest reads) for a NESTED folded-call address, or None.

        `**(int **)(param_1 + 4)` is the vtable-pointer load Ghidra folds into the callee of a virtual call:
        stars, a cast, a parenthesised sub-expression, an optional constant displacement. This parses that,
        recursively, and NOTHING else - no `&`, no indexing, no assignment, no call inside the address, no
        arithmetic on anything but a trailing constant, and a hard depth cap so a pathological expression
        cannot make this hang.

        The outermost `*` of the whole callee is still never counted as a read: that is the call idiom, and
        counting it would jump through one pointer too many - a wrong target address on a CALL, the one
        failure in this family that can still look healthy to cowdiff. The read total is only trusted once
        lift.py has cross-checked it against the site's own `target_desc` from the GENERATED BODY.
        """
        if not text or depth > 4:
            return None
        t = text.strip()
        nstars = 0
        while t.startswith("*"):
            nstars += 1
            t = t[1:].strip()
        cast = cls.SUB_CAST.match(t)
        if cast:
            t = t[cast.end():].strip()
        if not t:
            return None
        if t.startswith("("):
            grp, after = _balanced(t, 0, "(", ")")
            if grp is None:
                return None
            sub = cls._addr_subexpr(grp[1:-1], depth + 1)
            if sub is None:
                return None
            expr, reads = sub
            rest = t[after:].strip()
        else:
            lm = cls.SUB_LEAF.match(t)
            if not lm:
                return None
            expr, reads, rest = lm.group(1), 0, ""
            if lm.group(2):
                expr = "(%s %s 0x%xu)" % (expr, lm.group(2), int(lm.group(3), 0))
        for _ in range(nstars):
            expr = "rd32((uint32_t)(%s))" % expr
            reads += 1
        if rest:
            dm = re.fullmatch(r"([+-])\s*(0x[0-9a-fA-F]+|\d+)", rest)
            if not dm:
                return None                       # displacement we cannot account for: refuse, do not guess
            expr = "(%s %s 0x%xu)" % (expr, dm.group(1), int(dm.group(2), 0))
        return expr, reads

    @classmethod
    def _callee_read_ghidra(cls, text):
        """The raw Ghidra spelling, `**(code **)(*param_1 + 0x24)` - see _callee_read for when this is used."""
        m = cls.FOLDED_HEAD.match(text)
        if not m:
            return None
        stars = len(m.group(1))
        if stars not in (1, 2):
            return None                        # three is a shape nobody has shown me; do not invent one
        j = m.end() - 1                        # sit on the '(' of the address group
        grp, after = _balanced(text, j, "(", ")")
        if grp is None or text[after:].strip():
            return None                        # trailing junk after the callee: not this form
        inner = grp[1:-1].strip()
        am = cls.SIMPLE_ADDR.match(inner)
        if am is None:
            # THE NESTED FORM. SIMPLE_ADDR puts only a BARE identifier under its stars, so the ordinary
            # C++ vtable call
            #     **(code **)(**(int **)(param_1 + 4) + 0x24)
            # came back None: its stars sit on `(int **)(...)`, a cast-wrapped GROUP, not a name. That single
            # missing level of grammar is what priced 196 of the 400 sampled units of this family as
            # "RELEASABLE: regex widening only" - callees whose every leaf is a parameter or an image macro
            # the lifted body already holds, refused for spelling rather than for meaning. The walk cannot
            # name these either (the base came from a LOAD, the `mem-base-unnameable:<reg>=...:mov` wall in
            # lift_indirect_diag.py), so this was the whole family's dominant blocker.
            #
            # What keeps the widening honest: the leaf whitelist at the bottom of this function runs on the
            # RESULT, so a Ghidra LOCAL (`piVar2` - the 137-unit class) is refused here exactly as it always
            # was, and `leftover_problems` still refuses any callee left unbribged as
            # host_call_through_computed_pointer. Widening the CALL VIEW is this change; naming a LOCAL is
            # the frame-aliasing model's job, and mixing the two would ship unproven semantics.
            sub = cls._addr_subexpr(inner)
            if sub is None:
                return None
            addr, reads = sub[0], sub[1] + (1 if stars == 2 else 0)
        else:
            base_stars, base = am.group(1), am.group(2) or am.group(3)
            if re.fullmatch(r"COW_IMG\s*\(\s*COW_ADDR_[0-9A-Z_]+\s*\)|0x[0-9a-fA-F]+|\d+", base):
                addr = base
            elif not re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", base):
                return None
            elif base_stars == "*":
                addr = "rd32((uint32_t)(%s))" % base
            elif base_stars == "**":
                addr = "rd32((uint32_t)(rd32((uint32_t)(%s))))" % base
            elif base_stars is None:
                addr = base
            else:
                return None
            reads = (1 if base_stars == "*" else 2 if base_stars == "**" else 0) + (1 if stars == 2 else 0)
            if am.group(4):
                addr = "(%s %s 0x%xu)" % (addr, am.group(4), int(am.group(5), 0))
        # what may survive in the address: parameters, image macros, our own reads, and constants. A Ghidra
        # LOCAL is the frame-aliasing model's business (149 of the 560 sampled sites, refused on purpose),
        # and `&` would hand a guest callee a host address.
        #
        # NUMBERS FIRST, and this is the second time: `[A-Za-z_]\w*` matches the `x24u` inside `0x24u` and
        # the `u` inside `36u`, so scanning an expression for identifiers without deleting the literals
        # first rejects every displaced address as if it named a forbidden variable. The same trap cost a
        # third of the param-only class in lift_indirect_ghidra.py its correct classification yesterday.
        for name in re.findall(r"[A-Za-z_][A-Za-z0-9_]*",
                               re.sub(r"0x[0-9a-fA-F]+[uU]?|\b\d+[uU]?", " ", addr)):
            if not re.fullmatch(r"rd32|uint32_t|COW_IMG|COW_ADDR_[0-9A-Z_]+|param_\d+", name):
                return None
        if "&" in addr or "[" in addr or "=" in addr:
            return None
        return "rd32((uint32_t)(%s))" % addr if stars == 2 else addr, reads

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
            if after_prev and _prev_token(body, i) in DEREF_KEYWORDS:
                after_prev = False
            # `)` normally means multiplication (`(a) * b`), but a CAST followed by a typed dereference is
            # the other case and it is everywhere in Ghidra's output: `(CowU16)*(CowU8 *)(p + 0x326)`.
            # The typed cast after the `*` is what tells them apart, so look for it before giving up.
            if ch == "*" and prev == ")" and cast_re.match(body, i + 1):
                after_prev = False
            # and the mirror case: `(int *)*param_1`, where the star follows a CAST rather than a
            # parenthesised expression. cast_re above only recognises a pointer cast AFTER the star, so a
            # bare `*param_1` sitting behind `(int *)` was read as a multiplication and left in the output,
            # where _types then turned the cast into CowU32 and left `*(CowU32)param_1` - C2100, "you cannot
            # dereference an operand of type 'CowU32'", which was 54 of the 299 units this family released.
            # The same question as the `&` case below, so the same tested answer: a `)` closes a cast when
            # what it encloses is a type from the closed list, and an unknown word stays a multiplication.
            if ch == "*" and prev == ")" and _is_cast_paren(body, i):
                after_prev = False
            if ch != "*" or after_prev:
                out.append(ch)
                i += 1
                continue
            m = cast_re.match(body, i + 1)
            pending_wraps = 0
            if not m:
                # THE FOLDED MULTI-STAR DEREF: `**(int **)(DAT_1045666c + 0xc)`, Ghidra's way of writing a
                # read through a pointer that is itself in memory. 234 of 400 sampled units in this family
                # are that one shape. cast_re above only recognises ONE star, so the pass fell through to
                # the bare-name branch, whose operand starts with `*` and so is not a name: refused.
                #
                # k stars mean k reads. The first k-1 read POINTERS (four bytes each, 32-bit guest) and the
                # last reads the OBJECT, whose width is the cast's element type and nothing else. When that
                # type is one we have no honest equivalent for - `code`, a typedef, a struct we cannot size -
                # the unit keeps refusing: this is the exact case where defaulting to a dword turns a
                # one-byte guest read into a four-byte one, which is why the family refuses at all.
                mm = MULTI_STAR_RE.match(body, i)
                if mm and len(mm.group(1)) == len(mm.group(3)) >= 2:
                    w = _width_of(mm.group(2))
                    if w is None:
                        self.bare_derefs.append({"expr": None, "star_declared": False,
                                                 "declared_type": mm.group(2),
                                                 "lead": body[max(0, i - 160):i],
                                                 "snippet": body[i:i + 90]})
                        self.problems.append("bare_deref_width_unknown")
                        i += 1
                        continue
                    expr, after = _read_primary(body, mm.end())
                    if expr is None:
                        out.append(ch)
                        i += 1
                        continue
                    pending_wraps = len(mm.group(1)) - 1
                else:
                    # `*name` with no cast: still a dereference when what precedes it is not an operand.
                    # The WIDTH has to come from the declared type of `name`, because `*pChar` reads one byte
                    # and `*pDword` reads four, and defaulting both to four changes how many bytes the guest
                    # is seen to touch - a memory-trace difference cowdiff will blame on something else.
                    expr, after = _read_deref_operand(body, i + 1)
                    w = self.bare_width(expr)
                    if w is None:
                        # WHICH name it gave up on, and whether the text ever wrote a `*` in front of it. This
                        # one string covers several different jobs - never declared, declared with a type word
                        # TYPE_MAP does not know (`void`, a typedef), and an operand that is not a name at all -
                        # and they are different fixes. A census written against the body re-finds the deref by
                        # its own idea of the shape and gets this wrong about two thirds of the time, which is
                        # how a scanner "fix" was proposed, built, and released nothing. Only this line knows
                        # what it was looking at. Recording it changes no behaviour.
                        # `snippet` is the text from the star onward, which is the only way a census can tell a
                        # pointer cast it did not recognise from an operand it did not parse: `expr` alone is None
                        # for both, and the two have opposite answers (one is a regex to widen, the other is a
                        # width that was never stated). Recording a slice changes no behaviour.
                        self.bare_derefs.append({
                            "expr": expr,
                            "star_declared": (expr in self.star_declared) if expr else False,
                            "declared_type": self.star_declared.get(expr) if expr else None,
                            # `lead` is the text before the star. The shape on THAT side is what separates a
                            # dereference from a pointer DECLARATION whose type word is a keyword (`void *p;`) -
                            # the KEYWORDS exclusion at the top of this pass turns such a star into a deref, and a
                            # unit can be refused for a line that never reads memory at all.
                            "lead": body[max(0, i - 160):i],
                            "snippet": body[i:i + 90]})
                        self.problems.append("bare_deref_width_unknown")
            else:
                w = _width_of(m.group(1))
                expr, after = _read_primary(body, m.end())
            if expr is None:
                out.append(ch)
                i += 1
                continue
            # Is this deref the CALLEE of a call? `(**(code **)(piVar2 + 8))(piVar2)` is, and rewriting
            # it yields a host call through an address read out of guest memory - the hazard
            # leftover_problems refuses as host_call_through_computed_pointer. That guard looks for the
            # star soup, and this pass is in the business of deleting star soup, so the refusal has to
            # live HERE, in front of every path that can emit a read. Stepping over `)` is what makes it
            # see the callee form at all, and it is only allowed when a group actually opened at the
            # stars: without that condition, `if (x == **(int **)q) (f)(x);` reads as a callee and a
            # perfectly good unit is refused for a call that has nothing to do with it.
            j = after
            # Where the STAR RUN begins: the scanner reaches `**(code **)` a second time with its
            # pointer on the inner star, so testing body[i-1] alone sees another star instead of the
            # `(` that opened the callee group, and the read slips through to become `(rd32(...))(args)`
            # - a call on a value fetched from guest memory.
            k = i
            while k > 0 and (body[k - 1] == "*" or body[k - 1] in " \t"):
                k -= 1
            wrapped = k > 0 and body[k - 1] == "("
            while j < n:
                if body[j] in " \t\r\n":
                    j += 1
                elif body[j] == ")" and wrapped:
                    j += 1
                else:
                    break
            if j < n and body[j] == "(":
                # A deref with a `(` straight after its operand is the CALLEE of a call - `(*p)(args)`,
                # `(**(code **)(piVar2 + 8))(piVar2)` - not a value. Rewriting it produces a HOST call
                # through an address read out of guest memory, which is the hazard leftover_problems refuses
                # as host_call_through_computed_pointer; the folded-multi-star rule nearly painted over that
                # guard (the star soup vanished, so the leftover check no longer saw it), which is why the
                # refusal lives HERE, in front of every path that could emit a read, and not in the text
                # pattern that looks for leftovers. Leave the statement exactly as Ghidra wrote it, book the
                # refusal under the same name the guard uses, and let the call passes have their turn first -
                # they run before this one, so reaching here means they already declined.
                self.problems.append("host_call_through_computed_pointer")
                out.append(body[i:after])
                i = after
                continue
            for _ in range(pending_wraps):
                expr = "rd32((uint32_t)(%s))" % expr
            # the address is a POINTER expression: `param_1 + 1` means one element. Do this before the
            # store/load is assembled, so the read and the write of a read-modify-write agree on where they
            # went (the failure mode is a word stored at +1 and read back from +4, which is two bugs in one
            # line and shows up in cowdiff as a memory difference with no fault).
            expr = self._scale_ptr_add(expr)
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
    def _scale_ptr_add(self, expr):
        """`param_1 + 1` on an `undefined4 *param_1` is FOUR bytes, and the store has to say so.

        Ghidra renders pointer arithmetic in elements (it is C), so both its subscript form and its
        explicit `+ n` form mean n *elements*. The array pass multiplies; before this, the typed-deref pass
        did not, and `*(undefined2 *)(param_1 + 1)` became a word store at +1. Only a bare identifier whose
        declared element size we recovered is touched, and only for a single additive term: `*(int *)(p + i)`
        scales as `p + 4u * (uint32_t)(i)`, and anything stranger is left exactly as it was rather than
        half-scaled.
        """
        if not expr or not self.ptr_names:
            return expr
        # `_read_primary` hands the operand back WITH its parentheses - the address in
        # `*(undefined2 *)(param_1 + 1)` arrives as `(param_1 + 1)` - so peel one level before matching.
        # Without this the rule compiled, looked right in the mirror, and never fired once.
        inner = expr.strip()
        if inner.startswith("(") and inner.endswith(")") and inner.count("(") == 1:
            inner = inner[1:-1].strip()
        m = re.fullmatch(r"\s*([A-Za-z_][A-Za-z0-9_]*)\s*([+-])\s*([^+-]+?)\s*", inner)
        if not m:
            return expr
        name, sign, term = m.group(1), m.group(2), m.group(3)
        # Parameters only. A parameter's pointer type is the decompiler's calling-convention analysis and
        # its element arithmetic is consistent with it; a LOCAL that Ghidra decorates with `undefined4 *`
        # after seeing a dword stored through it may be a computed byte address all along, and
        # `*(undefined1 *)(puVar1 + 1)` then means the byte at +1. Measured: 243 param scalings gave 102
        # fixed / 1 broken, 4 local scalings gave 1 fixed / 1 broken - a coin flip on an invented type.
        if not re.fullmatch(r"param_\d+", name):
            return expr
        w = self.ptr_names.get(name)
        if not w:
            return expr
        size = w[0]
        if size in (0, 1) or "*(uint32_t)(" in term:
            return expr
        # `p - q` between two pointers is a COUNT, not an address, and scaling it would invent a stride.
        # Only a term with no other pointer-typed name in it is treated as an element count.
        for tok in re.findall(r"[A-Za-z_][A-Za-z0-9_]*", term):
            if tok in self.ptr_names:
                return expr
        return "(uint32_t)(%s %s %uu * (uint32_t)(%s))" % (name, sign, size, term)

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
        if tok == ")":
            # `(int)&DAT_104ca438` is address-of, but `(a[i]) & b` is AND, and a bare ")" cannot tell them
            # apart. Only a parenthesised TYPE is a cast, so look back for the matching "(" and ask what it
            # encloses. This was silently breaking every such site: the rewriter left the "&" in place and
            # turned the symbol into a load, producing `& rd32(...)` - "error C2102: '&' requires l-value".
            return not _is_cast_paren(s, pos)
        return tok in ")]0123456789\"'"
    return tok not in KEYWORDS


# the words that make a parenthesised group a cast rather than a parenthesised expression. Deliberately a
# CLOSED LIST, not "any identifier": `(a) & b` is an AND and `(Foo *)` would be a cast, and guessing wrong
# the first way silently corrupts an expression. An unrecognised type falls back to AND, which reproduces
# the old C2102 - a refusal, which is the safe direction, and shows up as a compile group to fix next time.
CAST_TYPES = {
    "void", "bool", "char", "short", "int", "long", "float", "double",
    "uchar", "ushort", "uint", "ulong", "byte", "word", "dword", "qword",
    "_BYTE", "_WORD", "_DWORD", "_QWORD",
    "undefined", "undefined1", "undefined2", "undefined3", "undefined4",
    "undefined5", "undefined6", "undefined7", "undefined8", "code",
    "int8_t", "uint8_t", "int16_t", "uint16_t", "int32_t", "uint32_t",
    "int64_t", "uint64_t", "size_t", "ssize_t", "ptrdiff_t", "intptr_t", "uintptr_t",
    "CowU8", "CowU16", "CowU32", "CowU64", "CowI8", "CowI16", "CowI32", "CowI64",
    "CowAddr", "CowF32", "CowF64", "Guest",
}
CAST_TYPE_RE = re.compile(
    r"^\s*(?:(?:const|volatile|unsigned|signed|struct|enum)\s+)*"
    r"(?P<t>[A-Za-z_][A-Za-z0-9_]*)\s*"
    r"(?:(?:const|volatile)\s+)*(?:\*\s*)*$")


def _is_cast_paren(s, pos):
    """True when the `)` just before pos closes a type cast, e.g. the `(int)` in `(int)&DAT_x`."""
    close = s.rfind(")", 0, pos)
    if close < 0:
        return False
    depth = 0
    for j in range(close, -1, -1):
        c = s[j]
        if c in ")]}":
            depth += 1
        elif c in "([{":
            depth -= 1
            if depth == 0:
                inner = s[j + 1:close]
                mt = CAST_TYPE_RE.match(inner)
                return bool(mt) and "," not in inner and mt.group("t") in CAST_TYPES
            return False
    return False


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


def computed_pointer_calls(body):
    """(start, end, callee_text, args_text) for every call made through a COMPUTED value.

    A structural scan, not a pattern, because the callee is an expression: a `)` immediately followed by
    `(` whose group, read backward with a paren balance, DEREFERENCES something. Comments are stripped
    first - the lift's own header and evidence lines quote guest text, and a documented `(*arg1)++` is not
    a call (that string is in 0x100083b0's hand unit).

    WHY THIS EXISTS. Ghidra writes a vtable call with the pointer load folded into the callee -
    `(**(code **)(*piVar2 + 8))(piVar2)` - and the call pass above does not see that form at all: its
    indirect alternative needs a bare identifier inside `(* ... )(`. So nothing bridges it, and the deref
    pass, which runs later and has no idea the text is a call, turns the READS into guest reads and leaves
    the CALL alone:

        (*rd32((uint32_t)(rd32((uint32_t)piVar2 + 8))))(piVar2);

    That compiles. It is a HOST call through a value read from GUEST memory: no return address pushed, no
    REGS_STORE/REGS_LOAD, no `rt_call_indirect`, and the callee is entered as C code with the guest's
    registers in no particular state. It is the worst thing this pipeline could ship, and until now the only
    thing that stopped it was the `indirect_call_not_modelled` clause refusing the whole unit for a
    DIFFERENT reason - the guest-instruction walk could not name the base register. A guard that holds by
    accident is not a guard: relax that clause, which is the obvious move with a 1,268-unit family, and this
    ships. Naming the shape here means the folded call has to be fixed ON PURPOSE - by the pass below, which
    bridges it - and cannot be released by deleting the clause that happened to be covering it.
    """
    body = re.sub(r"/\*.*?\*/", " ", body, flags=re.S)
    body = re.sub(r"//[^\n]*", " ", body)
    hits = []
    i = 0
    while True:
        i = body.find(")(", i)
        if i < 0:
            return hits
        depth = 0
        for j in range(i, -1, -1):
            if body[j] == ")":
                depth += 1
            elif body[j] == "(":
                depth -= 1
                if depth == 0:
                    if body[j + 1:i].strip().startswith("*"):
                        args_txt, after = _balanced(body, i + 1, "(", ")")
                        if args_txt is not None:
                            hits.append((j, after, body[j + 1:i].strip(), args_txt[1:-1]))
                    break
        i += 1


def leftover_problems(body):
    """Anything still looking like Ghidra after the rewrite - the last line of defence before a file that
    cannot compile reaches the tree."""
    out = []
    for pat, tag in ((r"\bDAT_[0-9a-fA-F]{6,8}", "leftover_DAT"),
                     # An accessor glued straight onto another accessor is not C and not a read: it is a
                     # translation that wrapped a value that was already a read. It shows up as
                     # `unresolved external symbol rd32rd32` at LINK time, which fails a whole chunk and
                     # hides the thirteen good units beside it - so the shape is refused here, where it
                     # books as this pattern, and never reaches a linker. Found the day the image-global
                     # width rule went in: `*DAT_x` typed by the generated body's own accessor emitted
                     # `rd32rd32((uint32_t)(COW_ADDR_... + 4u * 7u))` for a subscripted global.
                     (r"\b(?:rd|wr)f?(?:8|16|32|64)(?:rd|wr)f?(?:8|16|32|64)\s*\(", "doubled_accessor"),
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
                     # `&param_1` is the same hazard wearing a different name. Ghidra prints it when the
                     # guest took the address of its own stack argument (`lea eax, [esp+4]` / `push eax`) -
                     # which is passing by reference, and the callee then writes through it. The lifted body
                     # holds that argument in a C local, so `&param_1` is a HOST address handed to guest code
                     # that will store through it. Converting it needs the frame model (the right answer is
                     # sp0 + 4 + 4k, an address in the guest's stack), and until that exists the honest
                     # output is a refusal that names the pattern.
                     (r"&\s*param_[0-9]+", "param_address_escapes"),
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
    # not a pattern: a call through a computed value is a structure, and it is the one shape in this file
    # that compiles, runs and is a host call through a guest pointer (see computed_pointer_calls)
    if computed_pointer_calls(body):
        out.append("host_call_through_computed_pointer")
    return out
