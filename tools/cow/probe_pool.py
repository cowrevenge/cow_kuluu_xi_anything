"""Print a binary's string pool around interesting markers.

Tauri/reqwest binaries keep a merged .rodata string pool, so the headers and URL templates that go
together sit next to each other. Dumping the neighbourhood of a marker string shows the auth scheme
the launcher actually uses. Secrets are not in the binary - only names and URL templates.

  python tools/cow/probe_pool.py /auth
  python tools/cow/probe_pool.py login --path C:\\PhoenixXI\\bootloader\\xiloader.exe --window 600
  python tools/cow/probe_pool.py polcore --json

This used to take bare positionals in the order <marker> [path] [window], which meant a call that
passed --flag-looking arguments (or swapped path and marker) either raised IndexError on argv[1] or
silently treated a path as the marker. Everything is an option now except the marker.
"""
import argparse
import json
import os
import re
import sys

CANDIDATES = [
    r'C:\PhoenixXI\bootloader\phoenix-loader.exe',
    r'C:\PhoenixXI\bootloader\xiloader.exe',
    r'C:\Users\Owner\AppData\Local\Phoenix Launcher\phoenix-launcher.exe',
    r'C:\PhoenixXI\Ashita-cli.exe',
]


def pick_binary(explicit):
    if explicit:
        if not os.path.isfile(explicit):
            raise SystemExit('no such file: %s' % explicit)
        return explicit
    for c in CANDIDATES:
        if os.path.isfile(c):
            return c
    raise SystemExit('no launcher found; pass --path (tried:\n  %s)' % '\n  '.join(CANDIDATES))


def pool_around(data, marker, window, hits_limit):
    pat = marker.encode('utf-8', 'surrogateescape')
    offsets = [m.start() for m in re.finditer(re.escape(pat), data)]
    out = []
    for off in offsets[:hits_limit]:
        chunk = data[max(0, off - window):off + window]
        printable = re.sub(rb'[^\x20-\x7e]', b'\n', chunk).decode('ascii', 'ignore')
        lines = [l.strip() for l in printable.split('\n') if len(l.strip()) > 3]
        out.append({'offset': off, 'strings': lines})
    return offsets, out


def main():
    ap = argparse.ArgumentParser(description='dump the string pool around a marker in a binary')
    ap.add_argument('marker', help='substring to search for (bytes, case-sensitive)')
    ap.add_argument('--path', help='binary to search (default: first launcher found)')
    ap.add_argument('--window', type=int, default=400, help='bytes of context each side (default 400)')
    ap.add_argument('--hits', type=int, default=8, help='max occurrences to dump (default 8)')
    ap.add_argument('--ignore-case', action='store_true')
    ap.add_argument('--json', action='store_true', help='machine-readable output')
    args = ap.parse_args()

    path = pick_binary(args.path)
    with open(path, 'rb') as fh:
        data = fh.read()

    marker = args.marker
    hay = data
    if args.ignore_case:
        marker = marker.lower()
        hay = data.lower()

    offsets, hits = pool_around(hay, marker, args.window, args.hits)

    if args.json:
        print(json.dumps({'path': path, 'marker': marker, 'total_hits': len(offsets),
                          'dumped': hits}, indent=1))
        return 0 if offsets else 1

    print('%s: %d bytes, marker %r -> %d hit(s), showing %d'
          % (path, len(data), marker, len(offsets), len(hits)))
    for h in hits:
        print('\n=== offset %d ===' % h['offset'])
        for line in h['strings']:
            print('   ', line)
    return 0 if offsets else 1


if __name__ == '__main__':
    sys.exit(main())
