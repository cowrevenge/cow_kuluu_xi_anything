"""Find how the launcher authenticates to gamefiles.phoenix-xi.com.

Reads the launcher binary as bytes and prints unique ASCII strings matching header-ish patterns
(X-*, Authorization, Bearer, token, session, gamefiles). Only strings that look like header names
or URL templates are printed, so we learn the scheme without dumping secrets.

  python tools/cow/probe_headers.py [path-to-exe]
"""
import re
import sys

DEFAULT = r'C:\Users\Owner\AppData\Local\Phoenix Launcher\phoenix-launcher.exe'
p = sys.argv[1] if len(sys.argv) > 1 else DEFAULT
data = open(p, 'rb').read()
print(p, len(data), 'bytes')

pat = re.compile(rb'[ -~]{4,}')
seen = set()
KEYS = ('x-', 'authorization', 'bearer', 'token', 'session', 'cookie', 'gamefiles',
        'phoenix-xi', 'grant', 'jwt', 'api/')
for m in pat.finditer(data):
    s = m.group().decode('ascii', 'ignore')
    low = s.lower()
    if not any(k in low for k in KEYS):
        continue
    if len(s) > 160 or s.count(' ') > 6:
        continue
    if s in seen:
        continue
    seen.add(s)

for s in sorted(seen):
    print(s)
print('total', len(seen))
