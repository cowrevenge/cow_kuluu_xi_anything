"""Hunt the CLSID / ProgID the loader actually asks PlayOnline for.

CoCreateInstance targets can live in a binary as a raw 16-byte GUID, as an ASCII '{...}' string or
as a UTF-16 '{...}' string (CLSIDFromString). This scans a PE for all three, and separately prints
any POLCore/PlayOnline related strings, so we know exactly which keys to write under
HKCU\\Software\\Classes - which needs no admin.

  python tools/cow/find_polcore_clsid.py [exe ...]
"""
import re
import struct
import sys

DEFAULTS = [r'C:\PhoenixXI\bootloader\phoenix-loader.exe',
            r'D:\projects\ffxi_disassembly\Cow_kuluu_xi_anything\vendor\polcore\polcore.dll']
GUID_RE = re.compile(r'\{[0-9A-Fa-f]{8}-[0-9A-Fa-f]{4}-[0-9A-Fa-f]{4}-[0-9A-Fa-f]{4}-[0-9A-Fa-f]{12}\}')
WORDS = re.compile(r'(polcore|POLCore|PlayOffice|PlayOnline|polboot|Pol360|POL0|inprocserver|threadingmodel)', re.I)


def fmt(b):
    d1, d2, d3 = struct.unpack('<IHH', b[0:8])
    t = b[8:16]
    return '{%08X-%04X-%04X-%s-%s}' % (d1, d2, d3, t[:2].hex().upper(), t[2:].hex().upper())


def main():
    for p in sys.argv[1:] or DEFAULTS:
        data = open(p, 'rb').read()
        print('\n== %s (%d bytes)' % (p, len(data)))
        ascii = set(GUID_RE.findall(data.decode('latin-1')))
        wide = set(GUID_RE.findall(data.decode('utf-16-le', 'ignore')))
        print('   textual GUIDs (ascii): %s' % (sorted(ascii)[:40] or 'none'))
        print('   textual GUIDs (utf16): %s' % (sorted(wide)[:40] or 'none'))
        words = set()
        for m in re.finditer(rb'[\x20-\x7e]{5,}', data):
            s = m.group().decode('ascii', 'ignore')
            if WORDS.search(s) and len(s) < 120 and '{' not in s:
                words.add(s)
        for m in re.finditer(rb'(?:[\x20-\x7e]\x00){5,}', data):
            s = m.group().decode('utf-16-le', 'ignore')
            if WORDS.search(s) and len(s) < 120:
                words.add(s)
        for w in sorted(words)[:60]:
            print('   str: %s' % w)


if __name__ == '__main__':
    main()
