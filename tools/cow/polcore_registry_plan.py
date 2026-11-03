"""What does polcore.dll want registered, and which POL files come with it?

Two jobs in one pass:

 1. Print the registry strings polcore.dll carries (CLSID / InprocServer32 / ProgID / well-known
    keys) so the HKCU registration can be written by hand - DllRegisterServer would try HKLM and
    need admin. Also lists its imports so we know which sibling DLLs have to be present.
 2. List the launcher manifest entries under PlayOnlineViewer (the /files/<path> route serves
    exactly those), so the companions (polstd, polcon, ...) can be fetched too.

  python tools/cow/polcore_registry_plan.py
"""
import json
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from fetch_polcore import locate

DLL = os.path.join(os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))),
                   'vendor', 'polcore', 'polcore.dll')
KEEP = re.compile(r'(CLSID|InprocServer32|ProgID|Interface\\\\|\\{[0-9A-Fa-f]{8}-|polcore|polstd|polcon|polupdat|RegKey|SOFTWARE)', re.I)


def strings(data, minlen=6):
    for m in re.finditer(rb'[\x20-\x7e]{%d,}' % minlen, data):
        yield m.group().decode('ascii', 'ignore')


def main():
    if os.path.isfile(DLL):
        data = open(DLL, 'rb').read()
        print('== %s  %d bytes' % (DLL, len(data)))
        seen = set()
        for s in strings(data):
            if s in seen:
                continue
            if KEEP.search(s) and len(s) < 200:
                seen.add(s)
        for s in sorted(seen):
            print('   ', s)
        print('\n== dll names imported by polcore.dll ==')
        dlls = sorted({s for s in strings(data, 5) if re.fullmatch(r'[A-Za-z0-9_\-\.]+\.dll', s)})
        print('   ', ', '.join(dlls))
    else:
        print('polcore.dll not at', DLL)

    print('\n== launcher manifest entries under PlayOnlineViewer (first 40) ==')
    m = json.load(open(locate('manifest-game.json'), encoding='utf-8'))
    rows = [(k, v['size'], v['sha256']) for k, v in m['files'].items()
            if k.lower().startswith('squareenix/playonlineviewer')]
    print('   total %d entries, %d bytes' % (len(rows), sum(r[1] for r in rows)))
    com = [r for r in rows if '/com/' in r[0].lower() or r[0].lower().endswith(('polcore.dll', 'polstd.dll'))]
    print('   -- com/ and POL dlls (%d)' % len(com))
    for k, sz, sha in sorted(com)[:40]:
        print('      %9d  %s  %s' % (sz, sha[:12], k))


if __name__ == '__main__':
    main()
