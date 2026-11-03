"""Minimal PE dumper: imports and exports (32- and 64-bit), no third-party deps.

Used to answer how the boot loader binds polcore: if 'polcore.dll' shows up in the loader's import
directory then it is statically bound (so the DLL just has to be findable on the search path),
whereas an absence of it means the loader reaches polcore through COM/LoadLibrary instead, and the
HKCU\\Software\\Classes registration is what matters.

  python tools/cow/pe_dump.py <file> [more files...]
  python tools/cow/pe_dump.py --json <file>
  python tools/cow/pe_dump.py --filter polcore <file>

What used to be wrong here, and is the reason the import names looked empty or bogus:
  * the import descriptor's Name field was read fine, but the *names* were taken from
    AddressOfFirstThunk (the IAT, which holds runtime function addresses) instead of
    AddressOfOriginalFirstThunk (the INT, which holds hint/name RVAs). A PE with both therefore
    yielded nothing useful; only a PE whose INT is null may fall back to the IAT.
  * no bounds checks: a malformed directory walked off the end of the buffer and raised struct.error
    instead of reporting the file as odd.
  * `d.index(b'\0', so)` raised ValueError on an unterminated string near the section end.
"""
import argparse
import json
import os
import struct
import sys

MACHINE_BITS = {0x14C: 32, 0x8664: 64, 0xAA64: 64}
EXPORT_DIR, IMPORT_DIR = 0, 1


def rva_to_off(sections, rva):
    for _name, va, vsz, raw, rsz in sections:
        if rsz and va <= rva < va + max(vsz, rsz):
            return raw + (rva - va)
    return None


def cstr(data, off, limit=512):
    """NUL-terminated latin-1 at off, with no exception if it runs away."""
    if off is None or off < 0 or off >= len(data):
        return None
    end = data.find(b'\0', off, off + limit)
    if end < 0:
        return None
    return data[off:end].decode('latin-1', 'replace')


def parse(path):
    with open(path, 'rb') as fh:
        d = fh.read()
    if len(d) < 0x40:
        raise ValueError('too small to be a PE')
    pe = struct.unpack_from('<I', d, 0x3C)[0]
    if d[pe:pe + 4] != b'PE\0\0':
        raise ValueError('missing PE signature')
    machine, nsec = struct.unpack_from('<HH', d, pe + 4)
    size_of_opts, = struct.unpack_from('<H', d, pe + 20)
    opt_off = pe + 24
    magic, = struct.unpack_from('<H', d, opt_off)
    is32 = magic == 0x10B
    if not is32 and magic != 0x20B:
        raise ValueError('unknown optional-header magic 0x%04X' % magic)
    num_dd, = struct.unpack_from('<I', d, opt_off + (92 if is32 else 108))
    dd_off = opt_off + (96 if is32 else 112)

    sections = []
    sec_off = opt_off + size_of_opts
    for i in range(nsec):
        o = sec_off + i * 40
        name = d[o:o + 8].rstrip(b'\0').decode('latin-1', 'replace')
        vsz, va, rsz, raw = struct.unpack_from('<IIII', d, o + 8)
        sections.append((name, va, vsz, raw, rsz))

    def dd(idx):
        if idx >= num_dd:
            return 0, 0
        return struct.unpack_from('<II', d, dd_off + idx * 8)

    out = {'file': path,
           'machine': '0x%04X' % machine,
           'bits': MACHINE_BITS.get(machine, '?'),
           'magic': '0x%04X' % magic,
           'sections': [s[0] for s in sections],
           'imports': {}, 'exports': []}

    # ---- exports (IMAGE_EXPORT_DIRECTORY) ----
    ea, _ = dd(EXPORT_DIR)
    if ea:
        o = rva_to_off(sections, ea)
        if o is not None and o + 40 <= len(d):
            (_ch, _ts, _mj, _mn, _name_rva, _ord_base, nfuncs, nnames,
             addr_funcs, addr_names, addr_ords) = struct.unpack_from('<IIHHIIIIIII', d, o)
            no = rva_to_off(sections, addr_names)
            oo = rva_to_off(sections, addr_ords)
            if no is not None and oo is not None:
                for i in range(min(nnames, 4096)):
                    try:
                        r, = struct.unpack_from('<I', d, no + i * 4)
                        ordn, = struct.unpack_from('<H', d, oo + i * 2)
                    except struct.error:
                        break
                    s = cstr(d, rva_to_off(sections, r)) if r else None
                    if s is None:
                        continue
                    out['exports'].append({'ordinal': ordn + _ord_base, 'name': s})
            # functions with no name at all (exported by ordinal)
            fo = rva_to_off(sections, addr_funcs)
            if fo is not None:
                named = {e['name'] for e in out['exports']}
                for i in range(min(nfuncs, 8192)):
                    try:
                        r, = struct.unpack_from('<I', d, fo + i * 4)
                    except struct.error:
                        break
                    if r and rva_to_off(sections, r) is None:
                        out['exports'].append({'ordinal': i + _ord_base, 'name': None,
                                               'forwarded_or_bad_rva': '0x%x' % r})
                        break   # one flag is enough; do not dump thousands

    # ---- imports (IMAGE_IMPORT_DESCRIPTOR) ----
    ia, _ = dd(IMPORT_DIR)
    if ia:
        o = rva_to_off(sections, ia)
        for _desc in range(256):                      # hard cap: never loop off the end
            if o is None or o + 20 > len(d):
                break
            orig, _tstamp, fwd, name_rva, first = struct.unpack_from('<IIIII', d, o)
            if name_rva == 0 and first == 0 and orig == 0:
                break
            dll = cstr(d, rva_to_off(sections, name_rva)) or '?'
            thunk = orig or first                      # INT holds hint/name RVAs; IAT is runtime
            to = rva_to_off(sections, thunk)
            names = []
            if to is not None:
                for _i in range(8192):
                    if to + 4 > len(d):
                        break
                    v, = struct.unpack_from('<I', d, to)
                    if v == 0:
                        break
                    if not (v & 0x80000000):
                        so = rva_to_off(sections, v)
                        if so is not None and so + 2 < len(d):
                            s = cstr(d, so + 2)         # skip the 2-byte hint
                            if s:
                                names.append(s)
                    to += 4
            if fwd:
                names.append('(forwarded: %s)' % (cstr(d, rva_to_off(sections, fwd)) or '?'))
            out['imports'][dll] = names
            o += 20
    return out


def main():
    ap = argparse.ArgumentParser(description='dump PE imports/exports')
    ap.add_argument('files', nargs='*', help='PE files (default: the Phoenix loader)')
    ap.add_argument('--json', action='store_true', help='machine-readable output')
    ap.add_argument('--filter', default='', help='only show DLLs whose name contains this')
    ap.add_argument('--full', action='store_true', help='print every imported name, not 12')
    args = ap.parse_args()

    files = args.files or [r'C:\PhoenixXI\bootloader\phoenix-loader.exe']
    rc = 0
    report = []
    for p in files:
        if not os.path.isfile(p):
            print('%s: no such file' % p, file=sys.stderr)
            rc = 1
            continue
        try:
            info = parse(p)
        except Exception as exc:
            print('%s: %s: %s' % (p, type(exc).__name__, exc), file=sys.stderr)
            rc = 1
            continue
        if args.filter:
            key = args.filter.lower()
            info['imports'] = {k: v for k, v in info['imports'].items() if key in k.lower()}
        report.append(info)
        if args.json:
            continue
        print('\n== %s  (%s-bit, machine %s, %d sections)'
              % (p, info['bits'], info['machine'], len(info['sections'])))
        if not info['imports']:
            print('   imports: none' + (' (after --filter)' if args.filter else ''))
        for dll, names in sorted(info['imports'].items()):
            preview = ', '.join(names[:12]) if not args.full else ', '.join(names)
            more = '' if args.full or len(names) <= 12 else ' ... (+%d)' % (len(names) - 12)
            print('     %-26s %4d  %s%s' % (dll, len(names), preview, more))
        if info['exports']:
            named = [e['name'] for e in info['exports'] if e['name']]
            print('   exports (%d): %s' % (len(named), ', '.join(named[:20])))
    if args.json:
        print(json.dumps(report, indent=1))
    return rc


if __name__ == '__main__':
    sys.exit(main())
