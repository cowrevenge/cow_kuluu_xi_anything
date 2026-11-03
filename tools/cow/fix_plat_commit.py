"""plat_commit has to work in both guest-address models, and MEM_RESERVE is not free.

gwin_commit() asks plat_commit() for pages, and the two host models differ:

  * the 64-bit hosts (boot64/host64, CFLAGS64 sets -DRT_GUEST_WINDOW) reserve the whole 4 GB window
    in gwin_init(), so pages inside it want plain MEM_COMMIT - and asking for MEM_RESERVE on a range
    that is already reserved is NOT a no-op, as an earlier version of this file assumed: VirtualAlloc
    answers ERROR_INVALID_PARAMETER, gwin_commit fails and boot64 dies with
    "[recomp] cannot map FFXiMain.dll at 10000000".
  * the 32-bit stand-in runs the flat model, where guest addresses are host addresses and nothing
    was ever reserved; there plain MEM_COMMIT fails, gwin_alloc returns 0 and every gheap_alloc
    hands the guest a null pointer (gamecore_init died 'writing 00000000' that way).

So: try MEM_COMMIT, and only if that fails try MEM_RESERVE|MEM_COMMIT.

  python tools/cow/fix_plat_commit.py            # show the current body and whether it is right
  python tools/cow/fix_plat_commit.py --apply    # rewrite it to the two-step form
"""
import argparse
import io
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
P = os.path.join(ROOT, 'runtime', 'portable', 'plat_win.c')

BODY = ('int plat_commit(void* p, size_t size)\n'
        '{\n'
        '    /* Plain MEM_COMMIT first: inside the 64-bit hosts\' guest window the range is already\n'
        '     * reserved, and MEM_RESERVE there is rejected outright, not a no-op. The flat 32-bit\n'
        '     * host reserved nothing, so plain MEM_COMMIT fails there: retry with MEM_RESERVE. */\n'
        '    if (VirtualAlloc(p, size, MEM_COMMIT, PAGE_READWRITE) != NULL)\n'
        '        return 1;\n'
        '    return VirtualAlloc(p, size, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE) != NULL;\n'
        '}')


def body_of(text):
    """The whole plat_commit definition. Matched with a regex because the file is CRLF and a
    literal '\\n}\\n' search silently finds nothing, which is how this script first crashed."""
    m = re.search(r'int plat_commit\(void\* p, size_t size\)\r?\n\{.*?\r?\n\}', text, re.S)
    if not m:
        raise SystemExit('cannot find plat_commit in %s' % P)
    return m.group(0)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--apply', action='store_true')
    args = ap.parse_args()

    with io.open(P, encoding='utf-8', newline='') as fh:
        text = fh.read()
    crlf = '\r\n' in text
    want = BODY.replace('\n', '\r\n') if crlf else BODY
    current = body_of(text)
    print('%s: %s (crlf=%s)' % (os.path.relpath(P, ROOT),
                                'correct' if current == want else 'NEEDS the two-step form', crlf))
    print(current)
    if current == want:
        return 0
    if args.apply:
        with io.open(P, 'w', encoding='utf-8', newline='') as fh:
            fh.write(text.replace(current, want, 1))
        print('patched')
    else:
        print('dry run; add --apply')
    return 0


if __name__ == '__main__':
    sys.exit(main())
