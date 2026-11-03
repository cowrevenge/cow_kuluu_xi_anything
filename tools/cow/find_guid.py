"""Find a GUID stored as bytes inside an exe.

The loader logs 'CoCreateInstance({E436EBB3-...})' but keeps the GUID as 16 raw bytes, so a text
search misses it. This converts the leading Data1 into its little-endian byte order, scans the
file for that pattern and prints every 16-byte candidate reformatted as a GUID - that is exactly
what has to appear under HKCU\\Software\\Classes\\CLSID.

  python tools/cow/find_guid.py <data1-hex-e.g.-E436EBB3> [exe ...]
"""
import re
import struct
import sys

DEFAULTS = [r'C:\PhoenixXI\bootloader\phoenix-loader.exe']


def guid_from(b):
    d1, d2, d3 = struct.unpack('<IHH', b[0:8])
    tail = b[8:16]
    return '{%08X-%04X-%04X-%s-%s}' % (d1, d2, d3, tail[:2].hex().upper(), tail[2:].hex().upper())


def main():
    data1 = int(sys.argv[1], 16)
    pat = struct.pack('<I', data1)
    paths = sys.argv[2:] or DEFAULTS
    for p in paths:
        data = open(p, 'rb').read()
        hits = []
        for m in re.finditer(re.escape(pat), data):
            blob = data[m.start():m.start() + 16]
            if len(blob) == 16:
                hits.append((m.start(), guid_from(blob)))
        print('%s: %d candidate(s) for Data1=%08X' % (p, len(hits), data1))
        seen = set()
        for off, g in hits:
            if g in seen:
                continue
            seen.add(g)
            print('   %-42s at 0x%X' % (g, off))


if __name__ == '__main__':
    main()
