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

   Name: placeholder. A bare `{text}` carries no evidence of what it is for, so the file stays in
   src/unsorted/ and NAMES_TODO.md lists it.
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


def emit(entry):
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
                           popword=('ret %d' % argbytes) if argbytes else 'ret',
                           text=('ret %d' % argbytes) if argbytes else 'ret')
    return rel, text


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('entries', nargs='*')
    ap.add_argument('--next', type=int, default=0, help='take N units from tools/cow/next.py')
    ap.add_argument('--write', action='store_true')
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
        got = emit(e)
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
    return 0


if __name__ == '__main__':
    sys.exit(main())
