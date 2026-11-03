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
TEMPLATE = '''/* f_{hex} - the one-byte function: `{text}`, and nothing else.

   The body is shared (src/util/cow_noop.c) because a lot of entries compile to exactly this; what is
   per-entry is the adapter below, and what makes it done is cowdiff against this entry's generated
   original plus tools/cow/gate.ps1.

   Name: {namepara}
*/
#include "cow.h"

void cow_return_noop(void);

/* COW_ADAPTER BEGIN - the original pops {popword} ({argbytes} bytes) above the return address and
   leaves eax exactly as it found it. The readability gate skips this block. */
void cow_adapter_{hex}(Guest* g)
{{
    cow_return_noop();
    rt_return(g, g->eax, {argbytes});
}}
/* COW_ADAPTER END */
'''
RET_RE = re.compile(r'^ret(?:\s+(\d+))?$')


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
    return {'proven': False, 'kind': 'none', 'name': '', 'confidence': '', 'oracle': ''}


def emit(entry, name=None, confidence=None, evidence=None):
    _path, _kind, body = cowdiff.find_generated_source(entry)
    if body is None:
        print('  %-12s SKIP no generated body' % entry)
        return None
    argbytes = one_ret(body)
    if argbytes is None:
        print('  %-12s SKIP not a bare ret' % entry)
        return None
    rel = os.path.join('src', 'unsorted', 'cow_%s_ret.c' % entry)
    text = TEMPLATE.format(hex=entry, argbytes=argbytes,
                           namepara=name_para(name, confidence, evidence),
                           popword=('ret %d' % argbytes) if argbytes else 'ret',
                           text=('ret %d' % argbytes) if argbytes else 'ret')
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
            if args.json:
                import json
                print(json.dumps({'entry': '0x' + e, 'file': 'src/unsorted/cow_%s_ret.c' % e,
                                  'name': own['name'], 'confidence': own['confidence'],
                                  'oracle': own['oracle'], 'proven': own['proven'], 'kind': own['kind']}))
            if not own['proven']:
                print('  %-12s UNPROVEN no vtable slot and no caller: a stub, not booked' % e)
                continue
        got = emit(e, args.name or (own['name'] if own else None),
                   args.confidence or (own['confidence'] if own else None),
                   args.evidence or (own['oracle'] if own else None))
        if not got:
            continue
        rel, text = got
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
    if args.json and len(made) == 1:
        import json
        e = made[0].replace('0x', '')
        own = ownership(made[0])
        print(json.dumps({'entry': made[0], 'file': 'src/unsorted/cow_%s_ret.c' % e,
                          'name': own['name'], 'confidence': own['confidence'],
                          'oracle': own['oracle'], 'proven': own['proven'], 'kind': own['kind']}))
    return 0


if __name__ == '__main__':
    sys.exit(main())
