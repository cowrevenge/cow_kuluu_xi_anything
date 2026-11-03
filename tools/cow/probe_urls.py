"""Dump URL-ish strings from the launcher binary.

The Rust binary keeps its URL templates in a merged string pool, so printing every printable
string that contains a scheme or an /api/ or /objects/ style path shows how requests are built.
No secrets are in these - only endpoint templates and header names.

  python tools/cow/probe_urls.py [exe]
"""
import re
import sys

DEFAULT = r'C:\Users\Owner\AppData\Local\Phoenix Launcher\phoenix-launcher.exe'
path = sys.argv[1] if len(sys.argv) > 1 else DEFAULT
data = open(path, 'rb').read()
seen = set()
pat = re.compile(rb'[ -~]{5,}')
KEEP = re.compile(r'(https?://|/api/|/objects|object|manifest|archive|/v2/|/v1/|latest\.json)', re.I)
for m in pat.finditer(data):
    s = m.group().decode('ascii', 'ignore')
    if len(s) > 220:
        # split on obvious path starts so concatenated pools still yield usable fragments
        frag = s
    else:
        frag = s
    if not KEEP.search(frag):
        continue
    for piece in re.split(r'(?=https?://)', frag):
        piece = piece.strip()
        if len(piece) >= 6 and KEEP.search(piece) and piece not in seen:
            seen.add(piece)

for s in sorted(seen, key=len):
    if s.count(' ') > 4 and '://' not in s:
        continue
    print(s[:220])
