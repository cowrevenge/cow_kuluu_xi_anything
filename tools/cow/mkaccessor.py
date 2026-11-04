"""Emit the accessor units: the one-instruction thiscall members that read or write one field.

Shapes understood (each is exactly two instructions, read from the generated body - never guessed):

    mov eax, dword ptr [ecx+N] / ret      read a word      -> cow_read_word_NN
    mov dword ptr [ecx+N], eax / ret      store a word     -> cow_store_word_NN
    mov al, byte ptr [ecx+N] / ret        read a byte      -> cow_read_byte_NN   (only al is written)
    fld dword ptr [ecx+N] / ret           push a float     -> cow_read_float_NN  (X87_PUSH in the adapter)
    lea eax, [ecx+/-N] / ret              address of a byte -> cow_object_plus_NN

These are the object accessors the game is full of: a thiscall member that touches one field of its own
object and returns. They are not noops - they name a field. So each one gets a real struct in
layout/structs.h with a COW_ASSERT_OFFSET per field (a wrong offset is a compile error, not a wrong
value), one shared body in src/util/cow_accessors.c that says what the instruction does, and a per-entry
adapter that hands it the object (`ecx`, thiscall) and restores esp the way the original did.

The loop calls this when tools/cow/mkret.py --prove declines to write the unit, and it is handed the proof
(who calls the address) that mkret already established:

  python tools/cow/mkaccessor.py 0x10060950 --write --confidence guess \
      --oracle 'vtable 0x1032e890 slot 3/283 - a virtual method' --json

What it will not do is invent a field: an offset only becomes a named field here once THIS build's bytes
show it, and the bytes nobody has read stay inside an opaque array in the struct (layout/structs.h rule).
"""
import argparse
import json
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import cowdiff  # find_generated_source + SITE_RE: one definition of "the body of <hex>"

ROOT = cowdiff.ROOT
STRUCTS = os.path.join(ROOT, 'layout', 'structs.h')
BODIES = os.path.join(ROOT, 'src', 'util', 'cow_accessors.c')
NAMES = os.path.join(ROOT, 'cow', 'names.csv')

RET_RE = re.compile(r'^ret(?:\s+(0x[0-9a-fA-F]+|\d+))?$', re.I)
OFF = r'(?:\+\s*(0x[0-9a-fA-F]+|\d+)|-\s*(0x[0-9a-fA-F]+|\d+))?'
GET_RE = re.compile(r'^mov eax, dword ptr \[ecx\s*%s\]$' % OFF, re.I)
SET_RE = re.compile(r'^mov dword ptr \[ecx\s*%s\], eax$' % OFF, re.I)
BYTE_RE = re.compile(r'^mov al, byte ptr \[ecx\s*%s\]$' % OFF, re.I)
FLD_RE = re.compile(r'^fld dword ptr \[ecx\s*%s\]$' % OFF, re.I)
LEA_RE = re.compile(r'^lea eax, \[ecx\s*%s\]$' % OFF, re.I)
SETSELF_RE = re.compile(r'^mov dword ptr \[ecx\s*%s\], ecx$' % OFF, re.I)

TEMPLATE = '''/* f_{hex} - {sentence}

   The whole original is `{text}`. {why}

   Name: {namepara}
*/
#include "cow.h"

{decl}

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `{text}`; its ret pops {argbytes}
   bytes above the return address and leaves eax {leaves}. The readability gate skips this block. */
void cow_adapter_{hex}(Guest* g)
{{
    {call}
    rt_return(g, g->eax, {argbytes});
}}
/* COW_ADAPTER END */
'''


def off_of(match):
    """The displacement of [ecx+/-N] as a signed int (capstone writes the sign outside the number)."""
    pos, neg = match.group(1), match.group(2)
    if pos:
        return int(pos, 0)
    if neg:
        return -int(neg, 0)
    return 0


def tag_of(off):
    return ('m%02x' % -off) if off < 0 else '%02x' % off


KINDS = {
    # kind: (regex, ctype, field prefix, fn prefix, size delta)
    # 'float' is deliberately NOT here yet: a `fld dword ptr [ecx+N] / ret` accessor was generated, gated
    # and cowdiff said `5 mismatch(es), first at state 501 (st0)` - the pushed value did not match the
    # original's x87 stack. Until that is understood (guest FCW precision control, see runtime/guest.h:65)
    # the shape is parked: those entries stay in cow/skip.txt for a hand-written body, and no new one is
    # booked. An unproven-or-mismatched accessor is not a conversion.
    'get':   (GET_RE, 'uint32_t', 'word', 'cow_read_word', 4),
    'set':   (SET_RE, 'uint32_t', 'word', 'cow_store_word', 4),
    'byte':  (BYTE_RE, 'uint8_t', 'byte', 'cow_read_byte', 1),
    'lea':   (LEA_RE, None, None, 'cow_object_plus', None),
}


def shape(texts):
    """(kind, offset, argbytes) when the body is one of the accessor shapes we can lay out, else None."""
    if len(texts) == 3 and texts[2].strip().lower().startswith('ret'):
        # `push imm32` / `pop eax` / `ret`: MSVC's way of returning a constant, when the value did not fit
        # the one-byte `mov eax, imm8` form. The whole function is `return <value>;`.
        m_push = re.match(r'^push\s+(0x[0-9a-fA-F]+|\d+)$', texts[0].strip(), re.I)
        m_pop = re.match(r'^pop eax$', texts[1].strip(), re.I)
        m_ret = RET_RE.match(texts[2].strip())
        if m_push and m_pop and m_ret:
            return 'const', int(m_push.group(1), 0), int(m_ret.group(1) or '0', 0)
    if len(texts) != 2:
        return None
    body, ret = texts[0].strip(), texts[1].strip()
    m = RET_RE.match(ret)
    if not m:
        return None
    argbytes = int(m.group(1) or '0', 0)
    for kind, (rx, _t, _p, _f, _s) in KINDS.items():
        got = rx.match(body)
        if got:
            return kind, off_of(got), argbytes
    got = SETSELF_RE.match(body)
    if got:
        return 'setself', off_of(got), argbytes
    return None


def names_for(kind, off):
    """The struct, the field (or named offset macro) and the shared function this shape needs."""
    tag = tag_of(off)
    rx, ctype, fieldpfx, fnpfx, delta = KINDS[kind] if kind in KINDS else (None, None, None, None, None)
    if kind == 'lea':
        return {'struct': None, 'field': 'COW_LEA_%s' % tag, 'fn': 'cow_object_plus_%s' % tag,
                'ctype': None, 'off': off, 'delta': None}
    if kind == 'setself':
        return {'struct': 'CowWordObj_%s' % tag, 'field': 'word_%s' % tag,
                'fn': 'cow_link_self_%s' % tag, 'ctype': 'uint32_t', 'off': off, 'delta': 4}
    if kind == 'const':
        return {'struct': None, 'field': None, 'fn': 'cow_return_%d' % off, 'ctype': None,
                'off': off, 'delta': None}
    return {'struct': 'Cow%sObj_%s' % (fieldpfx.capitalize(), tag),
            'field': '%s_%s' % (fieldpfx, tag), 'fn': '%s_%s' % (fnpfx, tag),
            'ctype': ctype, 'off': off, 'delta': delta}


def ensure_layout(n, kind):
    """Write the struct / macro the accessor needs, once. Offsets live ONLY in layout/."""
    with open(STRUCTS, encoding='utf-8') as fh:
        text = fh.read()
    off, add = n['off'], []
    if kind in ('lea', 'const'):
        if kind == 'lea' and ('#define %s ' % n['field']) not in text:
            add.append('\n/* written by tools/cow/mkaccessor.py: `lea eax, [ecx%+d]` hands back the address of\n'
                       '   that byte of the object, so the displacement is a named constant, not a number in\n'
                       '   user code. */\n#define %s ((uint32_t)%d)\n' % (off, n['field'], off))
    elif ('} %s;' % n['struct']) not in text:
        lines = ['', '/* written by tools/cow/mkaccessor.py: an object this build %s one %s of.'
                 % ('reads or stores' if kind in ('get', 'set') else 'reads',
                    'word' if kind in ('get', 'set') else ('byte' if kind == 'byte' else 'float')),
                 '   Only the offset below has been seen, so the bytes around it stay opaque. */',
                 'typedef struct %s' % n['struct'], '{']
        if off > 0:
            lines.append('    uint8_t opaque_00[0x%02x]; /* never read by a conversion */' % off)
        elif off < 0:
            raise SystemExit('negative displacement %d on a field accessor: not expressible as a struct' % off)
        lines.append('    %s %s;' % (n['ctype'], n['field']))
        lines.append('} %s;' % n['struct'])
        lines.append('')
        lines.append('COW_ASSERT_OFFSET(%s, %s, 0x%02x);' % (n['struct'], n['field'], off))
        if off > 0:
            lines.append('COW_ASSERT_OFFSET(%s, opaque_00, 0x00);' % n['struct'])
        lines.append('COW_ASSERT_SIZE(%s, 0x%02x);' % (n['struct'], off + n['delta']))
        add.append('\n'.join(lines) + '\n')
    if add:
        marker = '#endif /* COW_LAYOUT_STRUCTS_H */'
        text = text.replace(marker, ''.join(add) + '\n' + marker)
        with open(STRUCTS, 'w', encoding='utf-8', newline='\n') as fh:
            fh.write(text)


def ensure_body(kind, n):
    """Define the shared accessor in src/util/cow_accessors.c, once."""
    if not os.path.isfile(BODIES):
        with open(BODIES, 'w', encoding='utf-8', newline='\n') as fh:
            fh.write('/* src/util/cow_accessors.c - the shared bodies of the object accessors that\n'
                     '   tools/cow/mkaccessor.py found in FFXiMain.dll. Each one is one instruction of the\n'
                     '   original, expressed as C: it touches exactly the field named in layout/structs.h.\n'
                     '   cowdiff proves every entry that calls one against its generated original.\n'
                     '*/\n#include "cow.h"\n#include <string.h>\n\n')
    with open(BODIES, encoding='utf-8') as fh:
        text = fh.read()
    if ('%s(' % n['fn']) in text:
        return
    off = n['off']
    if kind == 'get':
        body = ('/* `mov eax, [ecx%+d]` then `ret`: read the field. */\n'
                'uint32_t %s(const %s* o)\n{\n    return o->%s;\n}\n\n'
                % (off, n['fn'], n['struct'], n['field']))
    elif kind == 'set':
        body = ('/* `mov [ecx%+d], eax` then `ret`: store the field, and hand eax back unchanged. */\n'
                'uint32_t %s(%s* o, uint32_t value)\n{\n    o->%s = value;\n    return value;\n}\n\n'
                % (off, n['fn'], n['struct'], n['field']))
    elif kind == 'byte':
        body = ('/* `mov al, [ecx%+d]` then `ret`: read the byte into al and leave the other three bytes of\n'
                '   eax exactly as the caller left them, because that is what the instruction does. */\n'
                'uint32_t %s(const %s* o, uint32_t eax)\n{\n    return (eax & ~0xffu) | (uint32_t)o->%s;\n}\n\n'
                % (off, n['fn'], n['struct'], n['field']))
    elif kind == 'float':
        body = ('/* `fld dword ptr [ecx%+d]` then `ret`: the field as a float, for the adapter to push on the\n'
                '   x87 stack. The struct types it as float and the offset is proven by COW_ASSERT_OFFSET. */\n'
                'float %s(const %s* o)\n{\n    return o->%s;\n}\n\n'
                % (off, n['fn'], n['struct'], n['field']))
    elif kind == 'setself':
        body = ('/* `mov [ecx%+d], ecx` then `ret`: store the object pointer into one of its own fields - the\n'
                '   self-link MSVC emits for a node that points back at itself. eax is not written. */\n'
                'void %s(%s* o, uint32_t self)\n{\n    o->%s = self;\n}\n\n'
                % (off, n['fn'], n['struct'], n['field']))
    elif kind == 'const':
        body = ('/* `push %d` then `pop eax` then `ret`: return the constant %d.\n'
                '   MSVC uses this pair where `mov eax, imm32` would clobber flags on the path; the whole\n'
                '   function is one return value. */\n'
                'uint32_t %s(void)\n{\n    return %du;\n}\n\n' % (off, off, n['fn'], off))
    else:
        body = ('/* `lea eax, [ecx%+d]` then `ret`: the address of that byte of the object. */\n'
                'uint32_t %s(uint32_t self)\n{\n    return self + %s;\n}\n\n'
                % (off, n['fn'], n['field']))
    with open(BODIES, 'a', encoding='utf-8', newline='\n') as fh:
        fh.write(body)


def emit(entry, kind, n, name, confidence, evidence, texts):
    shown = ' / '.join(texts)
    off = n['off']
    if kind == 'get':
        sentence = 'it reads the word at +0x%02x of its object and returns it' % off
        why = ('The object is a `thiscall` self pointer in ecx; only this one field of it has been read in '
               'this build, and it is named in layout/structs.h with a COW_ASSERT_OFFSET.')
        decl = 'uint32_t %s(const %s* o);' % (n['fn'], n['struct'])
        call = 'g->eax = %s(COW_AS(%s, g->ecx));' % (n['fn'], n['struct'])
        leaves = 'that word'
    elif kind == 'set':
        sentence = 'it stores eax into the word at +0x%02x of its object' % off
        why = 'eax is left exactly as the caller passed it, which is what the body returns.'
        decl = 'uint32_t %s(%s* o, uint32_t value);' % (n['fn'], n['struct'])
        call = 'g->eax = %s(COW_AS(%s, g->ecx), g->eax);' % (n['fn'], n['struct'])
        leaves = 'the value it stored'
    elif kind == 'byte':
        sentence = 'it reads the byte at +0x%02x of its object into al' % off
        why = ('Only the low byte of eax is written, so the body takes eax as well: the top three bytes come '
               'back as the caller left them.')
        decl = 'uint32_t %s(const %s* o, uint32_t eax);' % (n['fn'], n['struct'])
        call = 'g->eax = %s(COW_AS(%s, g->ecx), g->eax);' % (n['fn'], n['struct'])
        leaves = 'al = that byte, the rest untouched'
    elif kind == 'float':
        sentence = 'it pushes the float at +0x%02x of its object on the x87 stack' % off
        why = ('The field is typed `float` in layout/structs.h with a COW_ASSERT_OFFSET; the adapter does the\n'
               '               fpush, because the floating-point stack belongs to the guest, not to the conversion.')
        decl = 'float %s(const %s* o);' % (n['fn'], n['struct'])
        call = 'fpush(g, (double)%s(COW_AS(%s, g->ecx)));' % (n['fn'], n['struct'])
        leaves = 'as it was (fld does not write a GPR)'
    elif kind == 'setself':
        sentence = 'it stores the object pointer into the word at +0x%02x of itself' % off
        why = ('That is the self-link MSVC emits for a node that points back at itself; eax is not written by\n'
               'the original, so the adapter leaves it exactly as the caller had it.')
        decl = 'void %s(%s* o, uint32_t self);' % (n['fn'], n['struct'])
        call = '%s(COW_AS(%s, g->ecx), g->ecx);' % (n['fn'], n['struct'])
        leaves = 'exactly as the caller left it (the original writes no GPR)'
    elif kind == 'const':
        sentence = 'it returns the constant %d' % off
        why = ('`push %d` / `pop eax` is how MSVC loads a return value when `mov eax, imm32` would clobber\n'
               'the flags on that path; the function is nothing but that value.' % off)
        decl = 'uint32_t %s(void);' % n['fn']
        call = 'g->eax = %s();' % n['fn']
        leaves = 'the constant %d' % off
    else:
        sentence = 'it returns the address of %+d of its object' % off
        why = 'The displacement is a named constant in layout/structs.h, so no number appears in user code.'
        decl = 'uint32_t %s(uint32_t self);' % n['fn']
        call = 'g->eax = %s(g->ecx);' % n['fn']
        leaves = 'that address'
    conf = confidence or 'guess'
    if conf == 'placeholder':
        namepara = '`%s` (placeholder). %s' % (name or n['fn'], evidence or 'the ledger cites its owner')
    else:
        namepara = '`%s` (%s). %s' % (name or n['fn'], conf,
                                      evidence or 'one instruction of the original, laid out in layout/structs.h')
    return TEMPLATE.format(hex=entry, sentence=sentence, why=why, namepara=namepara, text=shown,
                           decl=decl, call=call, argbytes=int(RET_RE.match(texts[-1]).group(1) or '0', 0),
                           leaves=leaves)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('entries', nargs='*')
    ap.add_argument('--write', action='store_true')
    ap.add_argument('--name', default=None)
    ap.add_argument('--confidence', default=None, choices=('confirmed', 'guess', 'placeholder'))
    ap.add_argument('--oracle', default='')
    ap.add_argument('--json', action='store_true')
    ap.add_argument('--unpark-match', action='store_true',
                    help='walk cow/skip.txt and remove every entry whose body one of the shapes above now '
                         'covers, so the loop takes it again with the new generator')
    args = ap.parse_args()

    if args.unpark_match:
        skip_file = os.path.join(ROOT, 'cow', 'skip.txt')
        if not os.path.isfile(skip_file):
            print('UNPARK: no cow/skip.txt')
            return 0
        with open(skip_file, encoding='utf-8', errors='replace') as fh:
            parked = [l.strip() for l in fh if l.strip() and not l.startswith('#')]
        keep, freed = [], []
        for ent in parked:
            _p, _k, body = cowdiff.find_generated_source(ent.lower().replace('0x', ''))
            texts = [m.group(2).strip() for m in (cowdiff.SITE_RE.match(l) for l in (body or [])) if m]
            (freed if shape(texts) else keep).append(ent)
        with open(skip_file, 'w', encoding='utf-8', newline='\n') as fh:
            fh.write('\n'.join(keep) + ('\n' if keep else ''))
        print('UNPARK: %d of %d parked entries are covered by the shapes now; %d still need a hand'
              % (len(freed), len(parked), len(keep)))
        for ent in freed[:12]:
            print('   unparked %s' % ent)
        return 0

    if not args.entries:
        raise SystemExit('give an entry')

    for e in args.entries:
        entry = e.lower().replace('0x', '')
        _path, _kind, body = cowdiff.find_generated_source(entry)
        if body is None:
            print('  %-12s SKIP no generated body' % entry)
            continue
        texts = [m.group(2).strip() for m in (cowdiff.SITE_RE.match(l) for l in body) if m]
        got = shape(texts)
        if not got:
            print('  %-12s SKIP not an accessor shape (%s)' % (entry, ' / '.join(texts[:4])))
            continue
        kind, off, argbytes = got
        try:
            n = names_for(kind, off)
            ensure_layout(n, kind)
        except SystemExit as exc:
            print('  %-12s SKIP %s' % (entry, exc))
            continue
        ensure_body(kind, n)
        import review_pass as rp                                   # names.csv registration, same as the loop
        why = 'generated/all: %s in f_%s (tools/cow/mkaccessor.py)' % (' / '.join(texts), entry)
        rp.register_name(n['fn'], 'function', 'shared', 'src/util/cow_accessors.c: %s' % why)
        if n['struct']:
            rp.register_name(n['struct'], 'struct', n['struct'],
                             'layout/structs.h: only +0x%02x has been read in this build; the bytes around '
                             'it are opaque. %s' % (max(off, 0), why))
            rp.register_name(n['field'], 'field', '%s+0x%02x' % (n['struct'], max(off, 0)), why)
        elif n['field']:
            rp.register_name(n['field'], 'global', n['field'],
                             'layout/structs.h: the named displacement used by %s. %s' % (n['fn'], why))
        rp.register_name('cow_adapter_%s' % entry, 'adapter', '0x' + entry,
                         'recomp.py --wraps contract (runtime/cow/cow_wraps.c binds rt_wrap_cow_%s); '
                         'thiscall self in ecx' % entry)
        rel = os.path.join('src', 'unsorted', 'cow_%s_%s.c' % (entry, kind))
        full = os.path.join(ROOT, rel)
        text = emit(entry, kind, n, args.name or n['fn'], args.confidence, args.oracle, texts)
        if args.write:
            with open(full, 'w', encoding='utf-8', newline='\n') as fh:
                fh.write(text)
            print('  %-12s wrote %s (%s at %+d)' % (entry, rel, kind, off))
        else:
            print('  %-12s would write %s' % (entry, rel))
        if args.json:
            print(json.dumps({'entry': '0x' + entry, 'file': rel.replace(os.sep, '/'),
                              'name': args.name or n['fn'], 'confidence': args.confidence or 'guess',
                              'oracle': args.oracle, 'proven': True, 'kind': 'accessor_' + kind}))
    return 0


if __name__ == '__main__':
    sys.exit(main())
