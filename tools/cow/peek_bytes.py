"""Read guest bytes out of the mapped image: the evidence tool for string/record claims.

Every name in cow/names.csv that says "this address holds the text ..." has to be checkable without
running the game, and the only file that holds those bytes is the image the recompiler read. This maps
the VA through the PE's own section headers and prints what is there.

  python tools/cow/peek_bytes.py 0x10371b4c                 # 32 bytes, hex + printable
  python tools/cow/peek_bytes.py 0x10371b4c --len 16 --as ascii
  python tools/cow/peek_bytes.py 0x10371b4c --len 16 --json

Reads generated/FFXiMain.unpacked.dll by default (the file tools/build.py produced); --image for another.
"""
import argparse
import json
import os
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))


def sections(data):
    """(va, vsize, raw_ptr, raw_size) per section, from the PE headers."""
    if data[:2] != b'MZ':
        raise SystemExit('not a PE (no MZ)')
    pe_off = struct.unpack_from('<I', data, 0x3C)[0]
    if data[pe_off:pe_off + 4] != b'PE\0\0':
        raise SystemExit('not a PE (no PE signature)')
    nsec = struct.unpack_from('<H', data, pe_off + 6)[0]
    opt_size = struct.unpack_from('<H', data, pe_off + 20)[0]
    opt = pe_off + 24
    image_base = struct.unpack_from('<I', data, opt + 28)[0]      # 32-bit OptionalHeader
    table = opt + opt_size
    out = []
    for i in range(nsec):
        e = table + i * 40
        name = data[e:e + 8].rstrip(b'\0').decode('latin-1')
        vsize = struct.unpack_from('<I', data, e + 8)[0]
        va = struct.unpack_from('<I', data, e + 12)[0]
        raw_size = struct.unpack_from('<I', data, e + 16)[0]
        raw_ptr = struct.unpack_from('<I', data, e + 20)[0]
        out.append((image_base + va, vsize or raw_size, raw_ptr, raw_size, name))
    return out


def read(data, secs, va, n):
    for base, vsize, raw_ptr, raw_size, name in secs:
        if base <= va < base + max(vsize, raw_size) and va + n <= base + raw_size:
            off = raw_ptr + (va - base)
            return data[off:off + n], name
    raise SystemExit('0x%08x is not inside any section that is present in the file' % va)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('va', help='guest address, e.g. 0x10371b4c')
    ap.add_argument('--len', dest='n', type=int, default=32)
    ap.add_argument('--image', default=os.path.join(ROOT, 'generated', 'FFXiMain.unpacked.dll'))
    ap.add_argument('--as', dest='fmt', choices=['both', 'hex', 'ascii'], default='both')
    ap.add_argument('--json', action='store_true')
    a = ap.parse_args()

    va = int(a.va, 16)
    with open(a.image, 'rb') as fh:
        data = fh.read()
    secs = sections(data)
    blob, name = read(data, secs, va, a.n)
    printable = ''.join(chr(b) if 32 <= b < 127 else '.' for b in blob)
    if a.json:
        print(json.dumps({'va': '0x%08x' % va, 'section': name, 'len': a.n,
                          'hex': blob.hex(), 'ascii': printable}))
        return 0
    print('0x%08x  [%s]  %d bytes' % (va, name, a.n))
    if a.fmt in ('both', 'hex'):
        print('  hex  :', ' '.join('%02x' % b for b in blob))
    if a.fmt in ('both', 'ascii'):
        print('  ascii:', printable)
    return 0


if __name__ == '__main__':
    sys.exit(main())
