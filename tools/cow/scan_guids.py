"""Scan a PE for raw GUID constants.

The boot loader calls CoCreateInstance with a CLSID that is compiled in as 16 raw bytes, so text
searches miss it. This walks the file at 4-byte alignment and prints any 16-byte window that looks
like a GUID (variant bits set in Data4[0], Data2/Data3 in a plausible range), tagged with the file
offset - enough to pick out the polcore CLSID that has to appear under HKCU\\Software\\Classes.

  python tools/cow/scan_guids.py <file> [--around 0xOFFSET]
"""
import struct
import sys


def looks_like_guid(b):
    d1, d2, d3 = struct.unpack('<IHH', b[0:8])
    if d1 == 0:
        return False
    if d2 > 0xFFFF or d3 > 0xFFFF:
        return False
    if (b[8] & 0xC0) != 0x80:      # RFC variant bits
        return False
    # reject mostly-zero / mostly-ff noise
    if sum(1 for x in b if x == 0) > 8 or sum(1 for x in b if x == 0xFF) > 8:
        return False
    # require some printable-free entropy in the node
    return True


def fmt(b):
    d1, d2, d3 = struct.unpack('<IHH', b[0:8])
    return '{%08X-%04X-%04X-%s-%s}' % (d1, d2, d3, b[8:10].hex().upper(), b[10:16].hex().upper())


def main():
    path = sys.argv[1]
    data = open(path, 'rb').read()
    print('%s: %d bytes' % (path, len(data)))
    out = {}
    for off in range(0, len(data) - 16, 4):
        blob = data[off:off + 16]
        if looks_like_guid(blob):
            out.setdefault(fmt(blob), []).append(off)
    # the interesting ones are those near the polcore strings
    anchors = []
    for needle in (b'polcore.dll', b'polcoreeu.dll', b'PlayOnline', b'SOFTWARE'):
        i = data.find(needle)
        while i != -1 and len(anchors) < 20:
            anchors.append((needle.decode(), i))
            i = data.find(needle, i + 1)
    print('anchors: %s' % anchors[:12])
    for g, offs in sorted(out.items(), key=lambda kv: kv[1][0]):
        near = [n for n, o in anchors if abs(o - offs[0]) < 4096]
        if near:
            print('  %-40s @ %s  (near %s)' % (g, [hex(o) for o in offs[:3]], near))
    print('\nall candidates: %d (printing those with any anchor within 4 KB shown above)' % len(out))
    for g, offs in list(sorted(out.items(), key=lambda kv: kv[1][0]))[:60]:
        print('   %-40s @ %s' % (g, [hex(o) for o in offs[:2]]))


if __name__ == '__main__':
    main()
