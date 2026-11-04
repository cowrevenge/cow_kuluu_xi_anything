"""Emit the unit file for an entry whose original is literally `ret` / `ret N`.

Hundreds of rank-0 entries compile to a single instruction: MSVC /OPT:ICF folds identical leaves and
rt_table points at each one. There is nothing to express by hand beyond `return;`, and the shared body
is src/util/cow_noop.c. This writes the per-entry adapter - the only thing that differs is the number
of bytes the callee pops - after READING the generated body and refusing anything that is not exactly
one `ret`. Every file it produces still has to pass cowdiff and the gate like any other unit; the
generator removes typing, not verification.

  python tools/cow/mkret.py 0x10011930 0x100139d0
  python tools/cow/mkret.py --next 8 --write
"""
import argparse
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import cowdiff  # reuse find_generated_source: one definition of "the generated body for <hex>"

ROOT = cowdiff.ROOT
TEMPLATE = '''/* f_{hex} - the one-byte function: `{text}`, and nothing else - and the ledger says who calls it.

   The body is shared (src/util/cow_return.c) because a lot of entries compile to exactly this; what is
   per-entry is the adapter below, and what makes it done is cowdiff against this entry's generated
   original plus tools/cow/gate.ps1.

   Name: {namepara}
*/
#include "cow.h"

void cow_return_immediate(void);

/* COW_ADAPTER BEGIN - the original is `{text}`; its ret pops {argbytes} bytes above the return address and
   leaves eax exactly as it found it. The readability gate skips this block. */
void cow_adapter_{hex}(Guest* g)
{{
    cow_return_immediate();
    rt_return(g, g->eax, {argbytes});
}}
/* COW_ADAPTER END */
'''
TEMPLATE_MULTI = '''/* f_{hex} - the whole original is `{text}`: {meaning}

   The body is shared (src/util/cow_return.c) because a lot of entries compile to exactly this; what is
   per-entry is the adapter below, and what makes it done is cowdiff against this entry's generated
   original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger can say who calls it.

   Name: {namepara}
*/
#include "cow.h"

{decl}

/* COW_ADAPTER BEGIN - the original is `{text}`; its ret pops {argbytes} bytes above the return address and
   leaves eax {leaves}. The readability gate skips this block. */
void cow_adapter_{hex}(Guest* g)
{{
    {pre}{call}
    rt_return(g, g->eax, {argbytes});
}}
/* COW_ADAPTER END */
'''

RET_RE = re.compile(r'^ret(?:\s+(0x[0-9a-fA-F]+|\d+))?$')

# The shapes we can express faithfully with one shared body. Each entry is the list of instruction texts
# in the generated original (read from generated/all/funcs_*.c, never guessed), the C function that says
# what they do, and whether that function needs eax handed to it (because the original wrote only part of
# it). Anything outside this table is NOT generated: the loop stops and the body gets written by hand.
FAMILY = {
    ('ret',): {'fn': 'cow_return_immediate', 'takes_eax': False, 'tag': 'ret',
               'decl': 'void cow_return_immediate(void);', 'call': 'cow_return_immediate();',
               'meaning': 'it returns, and nothing else', 'leaves': 'exactly as it found it'},
    ('xor eax, eax', 'ret'): {'fn': 'cow_return_zero', 'takes_eax': False, 'tag': 'zero',
                              'decl': 'uint32_t cow_return_zero(void);',
                              'call': 'g->eax = cow_return_zero();',
                              'meaning': 'it answers 0', 'leaves': 'zero'},
    ('mov eax, ecx', 'ret'): {'fn': 'cow_return_object', 'takes_eax': False, 'tag': 'self',
                              'decl': 'uint32_t cow_return_object(uint32_t ecx);',
                              'call': 'g->eax = cow_return_object(g->ecx);',
                              'meaning': 'it hands back the object it was called on (thiscall: ecx is the object)',
                              'leaves': 'equal to ecx - the object pointer'},
    ('xor al, al', 'ret'): {'fn': 'cow_always_false', 'takes_eax': True, 'tag': 'false',
                            'decl': 'uint32_t cow_always_false(uint32_t eax);',
                            'call': 'g->eax = cow_always_false(g->eax);',
                            'meaning': 'it answers no (only al is cleared; the rest of eax is left alone)',
                            'leaves': 'al = 0 with the other three bytes untouched'},
    ('mov al, 1', 'ret'): {'fn': 'cow_always_true', 'takes_eax': True, 'tag': 'true',
                           'decl': 'uint32_t cow_always_true(uint32_t eax);',
                           'call': 'g->eax = cow_always_true(g->eax);',
                           'meaning': 'it answers yes (only al is written; the rest of eax is left alone)',
                           'leaves': 'al = 1 with the other three bytes untouched'},
    # `push 1 / pop eax` is how MSVC loads an immediate into eax where `mov eax, 1` would clobber flags on
    # that path. The pair leaves the 1 behind in memory below esp after the pop restores esp, and cowdiff
    # compares guest memory, so the adapter has to write the same trace - the pre line does that.
    ('push 1', 'pop eax', 'ret'): {'fn': 'cow_return_1', 'takes_eax': False, 'tag': 'const',
                                   'decl': 'uint32_t cow_return_1(void);',
                                   'call': 'g->eax = cow_return_1();',
                                   'pre': 'wr32(g->esp - 4, 1u); /* the push 1, visible in memory after '
                                          'the pop restores esp */\n    ',
                                   'meaning': 'it returns the constant 1 (push 1 / pop eax is how MSVC '
                                              'loads an immediate where mov would clobber flags)',
                                   'leaves': 'the constant 1'},
}


def family_of(texts):
    """The shared body that says exactly what these instructions do, or None."""
    norm = [t.strip().lower().replace('  ', ' ') for t in texts]
    got = FAMILY.get(tuple(norm))
    if got is None and len(norm) >= 2 and norm[-1].startswith('ret'):
        got = FAMILY.get(tuple(norm[:-1] + ['ret']))
    return got


def one_ret(lines):
    """The single instruction of a bare-ret body, or None."""
    sites = [cowdiff.SITE_RE.match(l) for l in lines]
    texts = [m.group(2).strip() for m in sites if m]
    if len(texts) != 1:
        return None
    m = RET_RE.match(texts[0])
    if not m:
        return None
    return int(m.group(1) or 0)


def one_family(lines):
    """(texts, argbytes) when the body is exactly one of the FAMILY shapes, else (None, None)."""
    sites = [cowdiff.SITE_RE.match(l) for l in lines]
    texts = [m.group(2).strip() for m in sites if m]
    if len(texts) < 2 or not RET_RE.match(texts[-1]):
        return None, None
    argbytes = int(RET_RE.match(texts[-1]).group(1) or '0', 0)
    if family_of(texts) is None:
        return None, None
    return texts, argbytes


def name_para(name=None, confidence=None, evidence=None):
    """The sentence the file says about its own name. It must never claim 'placeholder' after the
    review pass promoted it, and it must never claim more than the evidence supports.
    """
    if not name:
        return ("see cow/names.csv - the loop books it at submit; anything unconfirmed is listed in "
                "docs/cow/NAMES_TODO.md")
    conf = confidence or "guess"
    if conf == "placeholder":
        return ("`%s` (placeholder). %s" % (name, evidence or
                'the ledger has not cited an owner for it yet'))
    why = (evidence or "see cow/names.csv").replace("*/", "* /")
    return "`%s` (%s). %s" % (name, conf, why)


def ownership(entry):
    """Who calls this address? vtable_model answers it, and without an answer the unit is a stub.

    The rule is in the README: a noop is a stub, and a stub means the file was not read. So the ret
    generator only emits when the entry is a virtual method (a vtable slot) or is actually called from
    code - and it uses that to name the function instead of inventing `unk_return_noop`.
    """
    import vtable_model as vm
    target = int(entry, 16)
    tables = vm.enumerate_vtables(2)
    owners = vm.owners_of(target, tables)
    if owners:
        best = max(owners, key=lambda o: o['slots'])
        vidx = vm.vendor_string_index()
        tags = vm.classname_strings()
        ctor = vm.constructor_vtables(tags)
        col_names = vm.col_classnames(tables, tags)
        name, why, how = vm.name_vtable(best['vtable_va'], best['targets'], vidx, ctor, {}, col_names)
        if name:
            ident = ''.join(c for c in name if c.isalnum() or c == '_')
            if ident and ident[0].isdigit():
                ident = 'c' + ident
            fn = 'cow_%s_vf%d' % (ident.lower(), best['slot'])
            conf = 'guess'
            refs = ['vtable %s slot %d/%d - a virtual method' % (best['vtable'], best['slot'],
                                                                     len(best['targets'])),
                    'vtable named %s from the vocabulary its slots cite: %s' % (name, ', '.join(why)[:120])]
        else:
            fn = 'cow_vf%d_at_%s' % (best['slot'], best['vtable'][2:])
            conf = 'placeholder'
            refs = ['vtable %s slot %d/%d - a virtual method' % (best['vtable'], best['slot'],
                                                                     len(best['targets']))]
        return {'proven': True, 'kind': 'vtable_slot', 'name': fn, 'confidence': conf,
                'oracle': ';'.join(refs)}
    hits = vm.callers_in_code(target)
    if hits:
        return {'proven': True, 'kind': 'called', 'name': 'cow_return_at_%s' % entry,
                'confidence': 'placeholder',
                'oracle': 'called from %d code site(s): %s' % (len(hits), ', '.join('0x%08x' % h for h in hits[:4]))}
    gent = vm.fcalls_index().get('%08x' % target)
    if gent:
        callers = ', '.join('f_' + c for c in (gent[2] if len(gent) > 2 else [])[:3]) or 'the translation itself'
        return {'proven': True, 'kind': 'generated_call', 'name': 'cow_return_at_%s' % entry,
                'confidence': 'placeholder',
                'oracle': 'called from the translation: %d f_%s( call site(s) in generated/all/%s, from %s'
                          % (gent[0], entry, gent[1], callers)}
    refs = vm.data_refs(target)
    if refs:
        return {'proven': True, 'kind': 'data', 'name': 'cow_table_entry_at_%s' % entry,
                'confidence': 'placeholder',
                'oracle': 'data reference(s) in %s at %s - entered through a table or struct slot, not a call'
                          % (refs[0][0], ', '.join('0x%08x' % a for _n, a in refs[:4]))}
    return {'proven': False, 'kind': 'none', 'name': '', 'confidence': '', 'oracle': ''}


def shape_of(entry):
    """(texts, argbytes, family) when the original is one of the shapes we can say in one C line.

    Everything else returns None and the loop stops: the point of the family table is that the shared body
    states what those instructions DO, so an entry outside it is a body that has to be read by hand.
    """
    _path, _kind, body = cowdiff.find_generated_source(entry)
    if body is None:
        return None
    sites = [cowdiff.SITE_RE.match(l) for l in body]
    texts = [m.group(2).strip() for m in sites if m]
    if not texts:
        return None
    if len(texts) == 1 and RET_RE.match(texts[0]):
        return texts, int(RET_RE.match(texts[0]).group(1) or '0', 0), FAMILY[('ret',)]
    if not RET_RE.match(texts[-1] if texts[-1].lower().startswith('ret') else ''):
        return None
    fam = family_of(texts)
    if fam is None:
        return None
    return texts, int(RET_RE.match(texts[-1]).group(1) or '0', 0), fam


def emit(entry, name=None, confidence=None, evidence=None):
    got = shape_of(entry)
    if got is None:
        print('  %-12s SKIP not a shape we can express with one shared body' % entry)
        return None
    texts, argbytes, fam = got
    rel = os.path.join('src', 'unsorted', 'cow_%s_%s.c' % (entry, fam['tag']))
    shown = ' / '.join(texts)
    text = TEMPLATE_MULTI.format(hex=entry, text=shown, meaning=fam['meaning'], decl=fam['decl'],
                                 call=fam['call'], pre=fam.get('pre', ''), argbytes=argbytes,
                                 leaves=fam['leaves'],
                                 namepara=name_para(name or fam['fn'], confidence or 'guess', evidence),
                                 popword=('ret %d' % argbytes) if argbytes else 'ret')
    return rel, text

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('entries', nargs='*')
    ap.add_argument('--next', type=int, default=0, help='take N units from tools/cow/next.py')
    ap.add_argument('--write', action='store_true')
    ap.add_argument('--name', default=None, help='the name the loop is about to book, so the file '
                                                'states its own name instead of guessing')
    ap.add_argument('--confidence', default=None, choices=('confirmed', 'guess', 'placeholder'))
    ap.add_argument('--evidence', default=None)
    ap.add_argument('--prove', action='store_true',
                    help='refuse to write unless the entry is a vtable slot or is actually called, and '
                         'use that to name it - a noop is a stub, and the gate now says so')
    ap.add_argument('--json', action='store_true', help='with --prove: print the submit line as JSON')
    args = ap.parse_args()

    entries = [e.lower().replace('0x', '') for e in args.entries]
    if args.next:
        import json
        import subprocess
        out = subprocess.run([sys.executable, os.path.join(ROOT, 'tools', 'cow', 'next.py'),
                              '--limit', str(args.next), '--json'], capture_output=True, text=True).stdout
        entries += [d['entry'].lower().replace('0x', '') for d in json.loads(out)['next']]
    if not entries:
        raise SystemExit('give entries or --next N')

    made = []
    for e in sorted(set(entries)):
        own = None
        if args.prove:
            own = ownership(e)
            if not own['proven']:
                if args.json:
                    import json
                    print(json.dumps({'entry': '0x' + e, 'file': '', 'name': '', 'confidence': '',
                                      'oracle': '', 'proven': False, 'kind': 'none'}))
                print('  %-12s UNPROVEN no vtable slot and no caller: a stub, not booked' % e)
                continue
        got = emit(e, args.name or (own['name'] if own else None),
                   args.confidence or (own['confidence'] if own else None),
                   args.evidence or (own['oracle'] if own else None))
        if not got:
            if args.json and own:
                import json
                print(json.dumps({'entry': '0x' + e, 'file': '', 'name': own['name'],
                                  'confidence': own['confidence'], 'oracle': own['oracle'],
                                  'proven': True, 'kind': own['kind'], 'needs_body': True}))
            continue
        rel, text = got
        if args.json and own:
            import json
            print(json.dumps({'entry': '0x' + e, 'file': rel.replace(os.sep, '/'),
                              'name': own['name'], 'confidence': own['confidence'],
                              'oracle': own['oracle'], 'proven': True, 'kind': own['kind']}))
        full = os.path.join(ROOT, rel)
        if os.path.isfile(full) and open(full, encoding='utf-8').read() == text:
            print('  %-12s unchanged %s' % (e, rel))
        elif args.write:
            with open(full, 'w', encoding='utf-8', newline='\n') as fh:
                fh.write(text)
            print('  %-12s wrote %s' % (e, rel))
        else:
            print('  %-12s would write %s (add --write)' % (e, rel))
            continue
        made.append('0x' + e)
    print('RET UNITS: %d %s' % (len(made), ' '.join(made)))
    return 0


if __name__ == '__main__':
    sys.exit(main())
