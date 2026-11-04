"""Emit the accessor units: `mov eax,[ecx+N] / ret`, `mov [ecx+N],eax / ret`, `lea eax,[ecx+N] / ret`.

These are the object accessors the game is full of - a thiscall member function that reads or writes one
field of its object and returns. They are not noops: they name a field of an object. So each one gets a
real struct in layout/structs.h with a COW_ASSERT_OFFSET per field (a wrong offset is a compile error),
one shared body in src/util/cow_accessors.c that says what the instruction does, and a per-entry adapter
that hands it the object (`ecx`, thiscall) and restores esp the way the original did.

The loop calls this after tools/cow/mkret.py --prove declines to write the unit, and it is handed the
proof (who calls the address) that mkret already established:

  python tools/cow/mkaccessor.py 0x10060950 --write --name cow_vf3_at_1032e890 \
      --confidence placeholder --oracle 'vtable 0x1032e890 slot 3/283 - a virtual method' --json

What it will not do is invent a field. An offset only becomes a named field here once THIS build's bytes
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
NUM = r'(?:0x[0-9a-fA-F]+|\d+)'
GET_RE = re.compile(r'^mov eax, dword ptr \[ecx(?: \+ (%s))?\]$' % NUM, re.I)
SET_RE = re.compile(r'^mov dword ptr \[ecx(?: \+ (%s))?\], eax$' % NUM, re.I)
LEA_RE = re.compile(r'^lea eax, \[ecx(?: \+ (%s))?\]$' % NUM, re.I)

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


def num(s):
    return int(s, 0) if s else 0


def shape(texts):
    """(kind, offset, argbytes) when the body is one of the accessor shapes we can lay out, else None."""
    if len(texts) != 2:
        return None
    body, ret = texts[0].strip(), texts[1].strip()
    m = RET_RE.match(ret)
    if not m:
        return None
    argbytes = num(m.group(1))
    for kind, rx in (('get', GET_RE), ('set', SET_RE), ('lea', LEA_RE)):
        got = rx.match(body)
        if got:
            return kind, num(got.group(1)), argbytes
    return None


def names_for(kind, off):
    """The struct, the field or macro, and the shared function this shape needs."""
    tag = '%02x' % off
    if kind == 'get':
        return {'struct': 'CowWordObj_%s' % tag, 'field': 'word_%s' % tag, 'fn': 'cow_read_word_%s' % tag,
                'opaque': off, 'size': off + 4}
    if kind == 'set':
        return {'struct': 'CowWordObj_%s' % tag, 'field': 'word_%s' % tag, 'fn': 'cow_store_word_%s' % tag,
                'opaque': off, 'size': off + 4}
    return {'struct': 'CowBaseObj_%s' % tag, 'field': 'COW_LEA_%s' % tag, 'fn': 'cow_object_plus_%s' % tag,
            'opaque': None, 'size': None}


def ensure_layout(n, kind, off):
    """Write the struct / macro the accessor needs, once. Offsets live ONLY in layout/."""
    with open(STRUCTS, encoding='utf-8') as fh:
        text = fh.read()
    add = []
    if kind in ('get', 'set'):
        if ('} %s;' % n['struct']) not in text:
            lines = ['', '/* written by tools/cow/mkaccessor.py: an object this build reads or writes one',
                     '   word of. Only +0x%02x has been seen, so the bytes below it stay opaque. */' % off,
                     'typedef struct %s' % n['struct'], '{']
            if off:
                lines.append('    uint8_t opaque_00[0x%02x]; /* never read by a conversion */' % off)
            lines.append('    uint32_t %s;' % n['field'])
            lines.append('} %s;' % n['struct'])
            lines.append('')
            lines.append('COW_ASSERT_OFFSET(%s, %s, 0x%02x);' % (n['struct'], n['field'], off))
            if off:
                lines.append('COW_ASSERT_OFFSET(%s, opaque_00, 0x00);' % n['struct'])
            lines.append('COW_ASSERT_SIZE(%s, 0x%02x);' % (n['struct'], off + 4))
            add.append('\n'.join(lines) + '\n')
    elif ('#define %s ' % n['field']) not in text:
        add.append('\n/* written by tools/cow/mkaccessor.py: `lea eax, [ecx+0x%02x]` hands back the address\n'
                   '   of that byte of the object, so the offset is a named constant, not a number in user\n'
                   '   code. */\n#define %s 0x%02xu\n' % (off, n['field'], off))
    if add:
        marker = '#endif /* COW_LAYOUT_STRUCTS_H */'
        text = text.replace(marker, ''.join(add) + '\n' + marker)
        with open(STRUCTS, 'w', encoding='utf-8', newline='\n') as fh:
            fh.write(text)
    return True


def ensure_body(kind, n, off):
    """Define the shared accessor in src/util/cow_accessors.c, once."""
    if not os.path.isfile(BODIES):
        with open(BODIES, 'w', encoding='utf-8', newline='\n') as fh:
            fh.write('/* src/util/cow_accessors.c - the shared bodies of the object accessors that\n'
                     '   tools/cow/mkaccessor.py found in FFXiMain.dll. Each one is one instruction of the\n'
                     '   original, expressed as C: it reads or writes exactly the field named in layout/structs.h.\n'
                     '   cowdiff proves every entry that calls one against its generated original.\n'
                     '*/\n#include "cow.h"\n\n')
    with open(BODIES, encoding='utf-8') as fh:
        text = fh.read()
    if ('%s(' % n['fn']) in text:
        return
    if kind == 'get':
        body = ('/* `mov eax, [ecx+0x%02x]` then `ret`: read the field. */\n'
                'uint32_t %s(const %s* o)\n{\n    return o->%s;\n}\n\n' % (off, n['fn'], n['struct'], n['field']))
    elif kind == 'set':
        body = ('/* `mov [ecx+0x%02x], eax` then `ret`: store the field, and hand eax back unchanged. */\n'
                'uint32_t %s(%s* o, uint32_t value)\n{\n    o->%s = value;\n    return value;\n}\n\n'
                % (off, n['fn'], n['struct'], n['field']))
    else:
        body = ('/* `lea eax, [ecx+0x%02x]` then `ret`: the address of that byte of the object. */\n'
                'uint32_t %s(uint32_t self)\n{\n    return self + %s;\n}\n\n' % (off, n['fn'], n['field']))
    with open(BODIES, 'a', encoding='utf-8', newline='\n') as fh:
        fh.write(body)


def emit(entry, kind, off, argbytes, n, name, confidence, evidence, texts):
    shown = ' / '.join(texts)
    if kind == 'get':
        sentence = 'it reads the word at +0x%02x of its object and returns it' % off
        why = 'The object is a `thiscall` self pointer in ecx; only this one field of it has been read in ' \
              'this build, and it is named in layout/structs.h with a COW_ASSERT_OFFSET.'
        decl = 'uint32_t %s(const %s* o);' % (n['fn'], n['struct'])
        call = 'g->eax = %s(COW_AS(%s, g->ecx));' % (n['fn'], n['struct'])
        leaves = 'that word'
    elif kind == 'set':
        sentence = 'it stores eax into the word at +0x%02x of its object' % off
        why = 'eax is left exactly as the caller passed it, which is what the body returns.'
        decl = 'uint32_t %s(%s* o, uint32_t value);' % (n['fn'], n['struct'])
        call = 'g->eax = %s(COW_AS(%s, g->ecx), g->eax);' % (n['fn'], n['struct'])
        leaves = 'the value it stored'
    else:
        sentence = 'it returns the address of +0x%02x of its object' % off
        why = 'The offset is a named constant in layout/structs.h, so no number appears in user code.'
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
                           decl=decl, call=call, argbytes=argbytes, leaves=leaves)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('entries', nargs='*')
    ap.add_argument('--write', action='store_true')
    ap.add_argument('--name', default=None)
    ap.add_argument('--confidence', default=None, choices=('confirmed', 'guess', 'placeholder'))
    ap.add_argument('--oracle', default='')
    ap.add_argument('--json', action='store_true')
    args = ap.parse_args()
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
        n = names_for(kind, off)
        ensure_layout(n, kind, off)
        ensure_body(kind, n, off)
        import review_pass as rp                                   # names.csv registration, same as the loop
        why = 'generated/all: %s in f_%s (tools/cow/mkaccessor.py)' % (' / '.join(texts), entry)
        rp.register_name(n['fn'], 'function', 'shared', 'src/util/cow_accessors.c: %s' % why)
        if kind in ('get', 'set'):
            rp.register_name(n['struct'], 'struct', n['struct'],
                             'layout/structs.h: only +0x%02x has been read in this build; the bytes below '
                             'it are opaque. %s' % (off, why))
            rp.register_name(n['field'], 'field', '%s+0x%02x' % (n['struct'], off), why)
        else:
            rp.register_name(n['field'], 'global', n['field'],
                             'layout/structs.h: the named offset used by %s. %s' % (n['fn'], why))
        rp.register_name('cow_adapter_%s' % entry, 'adapter', '0x' + entry,
                         'recomp.py --wraps contract (runtime/cow/cow_wraps.c binds rt_wrap_cow_%s); '
                         'thiscall self in ecx' % entry)
        rel = os.path.join('src', 'unsorted', 'cow_%s_%s.c' % (entry, kind))
        full = os.path.join(ROOT, rel)
        text = emit(entry, kind, off, argbytes, n, args.name or n['fn'], args.confidence, args.oracle,
                    texts)
        if args.write:
            with open(full, 'w', encoding='utf-8', newline='\n') as fh:
                fh.write(text)
            print('  %-12s wrote %s (%s at +0x%02x)' % (entry, rel, kind, off))
        else:
            print('  %-12s would write %s' % (entry, rel))
        if args.json:
            print(json.dumps({'entry': '0x' + entry, 'file': rel.replace(os.sep, '/'),
                              'name': args.name or n['fn'], 'confidence': args.confidence or 'guess',
                              'oracle': args.oracle, 'proven': True, 'kind': 'accessor_' + kind}))
    return 0


if __name__ == '__main__':
    sys.exit(main())
