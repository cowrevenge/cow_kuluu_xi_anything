"""Which imported function an address reaches - the evidence tool for `jmp [0x...]` thunks.

FFXiMain reaches several APIs through a one-instruction thunk (`jmp dword ptr [0x10329400]`), so the
callee is not an address in the disassembly, it is a slot the loader fills. This answers "what is
imported *here*" two ways and reports both, because an unpacked image is not consistent about which
form the slot is in:

  1. the Import Directory of the PE - the slot's dll!name, where the directory indexes it;
  2. the slot's own contents - in an image that has not been bound yet the slot holds the RVA of a
     hint/name record, so the name can be read straight out of it (this is what proves
     `jmp [0x10329400]` reaches timeGetTime, where (1) alone said nothing).

  python tools/cow/iat_slot.py 0x10329400
  python tools/cow/iat_slot.py 0x10329400 --json
  python tools/cow/iat_slot.py --dump | Select-String timeGet
"""
import argparse
import json
import os
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))


def sections(data):
    """(image_base, import_directory_rva, [(rva, size, raw_ptr)]) from the PE headers."""
    pe_off = struct.unpack_from('<I', data, 0x3C)[0]
    nsec = struct.unpack_from('<H', data, pe_off + 6)[0]
    opt_size = struct.unpack_from('<H', data, pe_off + 20)[0]
    opt = pe_off + 24
    image_base = struct.unpack_from('<I', data, opt + 28)[0]
    magic = struct.unpack_from('<H', data, opt)[0]
    dd = opt + (96 if magic == 0x10b else 104)
    imp_rva = struct.unpack_from('<I', data, dd)[0]
    table = opt + opt_size
    secs = []
    for i in range(nsec):
        e = table + i * 40
        vsize = struct.unpack_from('<I', data, e + 8)[0]
        va = struct.unpack_from('<I', data, e + 12)[0]
        raw_size = struct.unpack_from('<I', data, e + 16)[0]
        raw_ptr = struct.unpack_from('<I', data, e + 20)[0]
        secs.append((va, max(vsize, raw_size), raw_ptr))
    return image_base, imp_rva, secs


def make_reader(data, secs):
    def rva_to_off(rva):
        for va, sz, raw in secs:
            if va <= rva < va + sz:
                return raw + (rva - va)
        return None

    def cstr(rva, limit=96):
        """A C string by RVA, bounds-checked: an unpacked image has junk where the loader expects
        names, and raising ValueError on one lost the whole table for the slots we do care about."""
        off = rva_to_off(rva)
        if off is None or off >= len(data):
            return None
        end = data.find(b'\0', off, min(len(data), off + limit))
        if end < 0:
            return None
        raw = data[off:end]
        if not raw or any(b < 0x20 or b > 0x7E for b in raw):
            return None
        return raw.decode('latin-1')

    def read32(rva):
        off = rva_to_off(rva)
        if off is None or off + 4 > len(data):
            return None
        return struct.unpack_from('<I', data, off)[0]

    return rva_to_off, cstr, read32


def directory(data):
    """[(iat_va, dll, name)] from the PE's import directory, and the headers it was read with."""
    image_base, imp_rva, secs = sections(data)
    rva_to_off, cstr, read32 = make_reader(data, secs)
    out = []
    i = 0
    while True:
        e = rva_to_off(imp_rva + i * 20)
        if e is None:
            break
        orig, _stamp, _forward, name_rva, first = struct.unpack_from('<IIIII', data, e)
        if name_rva == 0 and first == 0:
            break
        dll = cstr(name_rva) or '?'
        for src in (orig, first):
            j = 0
            while True:
                val = read32(src + j * 4) if src else None
                if val is None or val == 0:
                    break
                if val & 0x80000000:
                    nm = '#%u' % (val & 0xFFFF)
                else:
                    nm = cstr((val & 0x7FFFFFFF) + 2) or '?'
                out.append((image_base + src + j * 4, dll, nm))
                j += 1
        i += 1
    return out, image_base, secs


def slot_value_name(data, image_base, secs, addr):
    """What the slot itself says: an unbound IAT entry holds the RVA of a hint/name record."""
    _rva_to_off, cstr, read32 = make_reader(data, secs)
    val = read32(addr - image_base)
    if val is None or val & 0x80000000:
        return None, val
    return cstr((val & 0x7FFFFFFF) + 2), val


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('slot', nargs='?', help='the address the thunk jumps through, e.g. 0x10329400')
    ap.add_argument('--image', default=os.path.join(ROOT, 'generated', 'FFXiMain.unpacked.dll'))
    ap.add_argument('--dump', action='store_true')
    ap.add_argument('--json', action='store_true')
    a = ap.parse_args()

    with open(a.image, 'rb') as fh:
        data = fh.read()
    entries, image_base, secs = directory(data)

    if a.dump:
        for va, dll, nm in entries:
            print('0x%08x  %s!%s' % (va, dll, nm))
        return 0
    if not a.slot:
        raise SystemExit('give a slot, or --dump')

    want = int(a.slot, 16)
    from_dir = ['%s!%s' % (dll, nm) for va, dll, nm in entries if va == want]
    name, val = slot_value_name(data, image_base, secs, want)
    if a.json:
        print(json.dumps({'slot': '0x%08x' % want, 'directory': from_dir,
                          'slot_says': name, 'slot_value': '0x%x' % val if val is not None else None}))
        return 0
    print('slot 0x%08x' % want)
    print('  import directory : %s' % (', '.join(from_dir) or 'does not index this slot'))
    if name:
        listed = any(name.split('!')[-1] in n for _, _, n in entries)
        print('  the slot itself  : points at a hint/name record -> %s%s'
              % (name, '' if listed else '  (the directory does not list it either: read it here)'))
    else:
        print('  the slot itself  : holds %s, which is not a hint/name record'
              % ('0x%x' % val if val is not None else 'nothing readable'))
    return 0


if __name__ == '__main__':
    sys.exit(main())
