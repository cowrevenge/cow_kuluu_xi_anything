"""Minimal PE dumper: imports and exports (32- and 64-bit), no third-party deps.

Used to answer how the boot loader binds polcore: if 'polcore.dll' shows up in the loader's import
directory then it is statically bound (so the DLL just has to be findable on the search path),
whereas an absence of it means the loader reaches polcore through COM/LoadLibrary instead, and the
HKCU\\Software\\Classes registration is what matters.

  python tools/cow/pe_dump.py <file> [more files...]
"""
import struct
import sys


def rva_to_off(sec, rva):
    for name, va, vsz, raw, rsz in sec:
        if va <= rva < va + max(vsz, rsz):
            return raw + (rva - va)
    return None


def parse(path):
    d = open(path, 'rb').read()
    pe = struct.unpack_from('<I', d, 0x3C)[0]
    assert d[pe:pe + 4] == b'PE\0\0', 'not a PE'
    machine, nsec = struct.unpack_from('<HH', d, pe + 4)
    size_of_opts = struct.unpack_from('<H', d, pe + 20)[0]
    opt_off = pe + 24
    magic = struct.unpack_from('<H', d, opt_off)[0]
    is32 = magic == 0x10B
    dd_off = opt_off + (96 if is32 else 112)
    num_dd = struct.unpack_from('<I', d, opt_off + (92 if is32 else 108))[0]
    secs = []
    for i in range(nsec):
        o = opt_off + size_of_opts + i * 40
        name = d[o:o + 8].rstrip(b'\0').decode('latin-1')
        vsz, va, rsz, raw = struct.unpack_from('<IIII', d, o + 8)
        secs.append((name, va, vsz, raw, rsz))

    def dd(idx):
        if idx * 8 + 8 > num_dd * 8:
            return 0, 0
        return struct.unpack_from('<II', d, dd_off + idx * 8)

    out = {'machine': '0x%04X' % machine,
           'bits': {0x14C: 32, 0x8664: 64}.get(machine, '?%s' % ('pe32' if is32 else 'pe32+')),
           'magic': '0x%04X' % magic, 'imports': {}, 'exports': []}

    # imports (thunk directory is index 1 for both pe32 and pe32+; export is 0)
    ea, esz = dd(0)
    if ea:
        o = rva_to_off(secs, ea)
        (chars, ts, major, minor, name_rva, ord_base,
         nfuncs, nnames, addr_funcs, addr_names, addr_ords) = struct.unpack_from('<IIHHIIIIIII', d, o)
        cnt, fcnt = nnames, nfuncs
        fn_rva = addr_names
        fo = rva_to_off(secs, fn_rva)
        for i in range(fcnt):
            r = struct.unpack_from('<I', d, fo + i * 4)[0]
            if r & 0x80000000:
                continue
            so = rva_to_off(secs, r)
            end = d.index(b'\0', so)
            out['exports'].append(d[so:end].decode('latin-1'))

    ia, isz = dd(1)
    if ia:
        o = rva_to_off(secs, ia)
        while True:
            orig, tstamp, fwd, name_rva, first = struct.unpack_from('<IIIII', d, o)
            if name_rva == 0 and first == 0:
                break
            no = rva_to_off(secs, name_rva)
            dll = d[no:d.index(b'\0', no)].decode('latin-1') if no is not None else '?'
            names = []
            t = first
            to = rva_to_off(secs, t)
            for _ in range(4000):
                if to is None:
                    break
                v = struct.unpack_from('<I', d, to)[0]
                if v == 0:
                    break
                if not (v & 0x80000000):
                    so = rva_to_off(secs, v)
                    if so is not None:
                        names.append(d[so:d.index(b'\0', so)].decode('latin-1'))
                to += 4
            out['imports'][dll] = names
            o += 20
    return out


def main():
    for p in sys.argv[1:] or [r'C:\PhoenixXI\bootloader\phoenix-loader.exe']:
        try:
            info = parse(p)
        except Exception as e:
            print('%s: %s: %s' % (p, type(e).__name__, e))
            continue
        print('\n== %s  (%s bit, machine %s)' % (p, info['bits'], info['machine']))
        print('   imports:')
        for dll, names in sorted(info['imports'].items()):
            preview = ', '.join(n.encode('ascii', 'replace').decode('ascii') for n in names[:12])
            print('     %-24s %d names%s' % (dll, len(names), (': ' + preview) if len(names) <= 12 else ''))
        if info['exports']:
            print('   exports (%d): %s' % (len(info['exports']), ', '.join(info['exports'][:20])))


if __name__ == '__main__':
    main()
