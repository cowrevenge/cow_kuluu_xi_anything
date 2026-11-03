"""Is the oracle's build the same code as ours? Byte-compare two unpacked FFXiMain.dll images.

Every RVA in vendor/cow_ffxi_disassembly (and in vendor/kuluu's notes) belongs to the build that vault
dissected, not to ours: the vault's install is md5 fb7464073c06489268fdd9215c3e5313, our 2026-10-05
retail DLL is ac6d09d9cdb9dc2acb38317a5f57f3bd. tools/cow/oracle_probe.py showed 12,741 of their 16,010
function seeds still land exactly on a ledger entry - but an address that survived a build bump says
nothing about the code behind it. This answers the real question with bytes.

  --mode sections    both PE section tables side by side (they do NOT share a file layout: ours is
                     6,209,536 bytes, the vault's unpacked image is 12,668,928, so every read goes
                     through a per-image RVA->offset map, never through `va - base`)
  --mode text        the section as a whole: identical bytes, first divergence, 4K-block histogram
  --mode functions   per ledger function (entry..end): how many are byte-identical, by leaf_rank
  --mode vas         the addresses of a table in the vault's artifact zip: are N bytes equal there

The vault's unpacked DLL is read out of Disassembly_Tools/artifacts/ffximain_tables_v0.zip into build/
(gitignored) - it is a Square Enix binary and never enters the repo.

  python tools/cow/image_cmp.py --mode sections
  python tools/cow/image_cmp.py --mode functions --rank 0
  python tools/cow/image_cmp.py --mode text --json
  python tools/cow/image_cmp.py --mode vas --csv tables_strings.csv --bytes 24
"""
import argparse
import collections
import csv
import io
import json
import os
import struct
import sys
import zipfile

if hasattr(sys.stdout, 'reconfigure'):
    sys.stdout.reconfigure(encoding='utf-8', errors='replace')

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
OURS = os.path.join(ROOT, 'generated', 'FFXiMain.unpacked.dll')
VAULT_ZIP = os.path.join(ROOT, 'vendor', 'cow_ffxi_disassembly', 'Disassembly_Tools', 'artifacts',
                         'ffximain_tables_v0.zip')
CACHE = os.path.join(ROOT, 'build', 'vault-FFXiMain.unpacked.dll')
LEDGER = os.path.join(ROOT, 'ledger', 'functions.csv')
BASE = 0x10000000
PAGE = 0x1000


def vault_image():
    """The vault's unpacked DLL, unzipped once into build/ (gitignored)."""
    if os.path.isfile(CACHE) and os.path.getsize(CACHE) > 1000000:
        return CACHE
    if not os.path.isfile(VAULT_ZIP):
        raise SystemExit('no vault artifact zip at %s (submodule not checked out?)' % VAULT_ZIP)
    os.makedirs(os.path.dirname(CACHE), exist_ok=True)
    with zipfile.ZipFile(VAULT_ZIP) as zf:
        key = next((n for n in zf.namelist() if n.endswith('FFXiMain.unpacked.dll')), None)
        if key is None:
            raise SystemExit('FFXiMain.unpacked.dll not in %s' % VAULT_ZIP)
        tmp = CACHE + '.part'
        with zf.open(key) as src, open(tmp, 'wb') as dst:
            while True:
                chunk = src.read(1 << 20)
                if not chunk:
                    break
                dst.write(chunk)
        os.replace(tmp, CACHE)
    print('unzipped %s (%d bytes) -> %s' % (os.path.basename(key), os.path.getsize(CACHE),
                                            os.path.relpath(CACHE, ROOT)), file=sys.stderr)
    return CACHE


def load(path):
    with open(path, 'rb') as fh:
        return fh.read()


def sections(data):
    """[(name, vsize, rva, rawsize, ptr)] straight from the section table."""
    nt = struct.unpack_from('<I', data, 0x3C)[0]
    nsec = struct.unpack_from('<H', data, nt + 4 + 2)[0]
    opt = nt + 4 + 20
    sec = data[opt + struct.unpack_from('<H', data, nt + 4 + 16)[0]:]
    out = []
    for i in range(nsec):
        e = sec[i * 40:(i + 1) * 40]
        out.append((e[:8].rstrip(b'\0').decode('latin1'),
                    struct.unpack_from('<I', e, 8)[0], struct.unpack_from('<I', e, 12)[0],
                    struct.unpack_from('<I', e, 16)[0], struct.unpack_from('<I', e, 20)[0]))
    return out


def reader(data, section):
    """(va -> bytes or None, rva, span) for one section, honouring its own file pointer."""
    for name, vsize, rva, rawsize, ptr in sections(data):
        if name == section:
            span = max(vsize, rawsize)

            def at(va, length, rva=rva, ptr=ptr, span=span, data=data):
                o = (va - BASE) - rva
                if o < 0 or o + length > span or ptr + o + length > len(data):
                    return None
                return data[ptr + o:ptr + o + length]
            return at, rva, span
    raise SystemExit('no %s section' % section)


def multi_reader(data):
    """va -> bytes or None, across every section: tables_strings/classnames point into .rdata and .data."""
    table = [(vsize if vsize else rawsize, rva, ptr, rawsize) for _, vsize, rva, rawsize, ptr in sections(data)]

    def at(va, length):
        rva = va - BASE
        for span, sec_rva, ptr, rawsize in table:
            o = rva - sec_rva
            if 0 <= o < max(span, rawsize):
                end = min(o + length, rawsize, len(data) - ptr)
                if end <= o:
                    return None
                return data[ptr + o:ptr + end]
        return None
    return at


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--ours', default=OURS)
    ap.add_argument('--theirs', default=None, help='default: the vault zip, unzipped into build/')
    ap.add_argument('--mode', default='functions', choices=('sections', 'text', 'functions', 'vas'))
    ap.add_argument('--section', default='.text')
    ap.add_argument('--ledger', default=LEDGER)
    ap.add_argument('--zip', default=VAULT_ZIP)
    ap.add_argument('--csv', default='tables_functions.csv')
    ap.add_argument('--column', type=int, default=0, help='address column for --mode vas')
    ap.add_argument('--bytes', dest='nbytes', type=int, default=16)
    ap.add_argument('--rank', help='limit --mode functions to a leaf_rank, or 3+')
    ap.add_argument('--sample', type=int, default=6)
    ap.add_argument('--json', action='store_true')
    args = ap.parse_args()

    a = load(args.ours)
    theirs_path = args.theirs or vault_image()
    b = load(theirs_path)
    out = {'ours': os.path.relpath(args.ours, ROOT), 'theirs': os.path.relpath(theirs_path, ROOT),
           'ours_size': len(a), 'theirs_size': len(b), 'mode': args.mode, 'section': args.section}

    if args.mode == 'sections':
        out['ours_sections'] = ['%s vsize=0x%x rva=0x%x raw=0x%x ptr=0x%x' % s for s in sections(a)]
        out['theirs_sections'] = ['%s vsize=0x%x rva=0x%x raw=0x%x ptr=0x%x' % s for s in sections(b)]
        if args.json:
            print(json.dumps(out, indent=1))
        else:
            for side in ('ours_sections', 'theirs_sections'):
                print('  %s:' % side)
                for line in out[side]:
                    print('    %s' % line)
        return 0

    at_a, rva_a, span_a = reader(a, args.section)
    at_b, rva_b, span_b = reader(b, args.section)
    out.update({'section_rva': '0x%x' % rva_a, 'section_span': '0x%x/0x%x' % (span_a, span_b)})

    if args.mode == 'text':
        identical = first_diff = 0
        blocks = collections.Counter()
        for va in range(BASE + rva_a, BASE + rva_a + min(span_a, span_b), PAGE):
            ea, eb = at_a(va, PAGE), at_b(va, PAGE)
            if ea is None or eb is None:
                break
            if ea == eb:
                identical += PAGE
            else:
                blocks[va] += 1
                if not first_diff:
                    first_diff = next((va + i for i in range(PAGE) if ea[i] != eb[i]), 0)
        out.update({'identical': identical,
                    'identical_pct': round(100.0 * identical / max(1, min(span_a, span_b)), 3),
                    'differing_blocks': len(blocks),
                    'first_diff_va': '0x%08x' % first_diff if first_diff else None,
                    'hotspots': ['0x%08x x%d' % (k, v) for k, v in blocks.most_common(8)]})
    elif args.mode == 'functions':
        with open(args.ledger, encoding='utf-8', newline='') as fh:
            rows = list(csv.DictReader(fh))
        good = collections.Counter()
        total = collections.Counter()
        missing = 0
        bad = []
        for r in rows:
            rank = int(r['leaf_rank'])
            if args.rank and not ((rank >= 3 and args.rank.endswith('+')) or str(rank) == args.rank):
                continue
            entry, end = int(r['entry'], 16), int(r['end'], 16)
            size = max(1, end - entry)
            ba = at_a(entry, size)
            bb = at_b(entry, size)
            if ba is None or bb is None:
                missing += 1
                continue
            total[rank] += 1
            if ba == bb:
                good[rank] += 1
            elif len(bad) < args.sample:
                i = next((j for j in range(size) if ba[j] != bb[j]), size - 1)
                bad.append({'entry': '%08x' % entry, 'size': size, 'rank': rank,
                            'diff_at': '+0x%x' % i, 'ours': '%02x' % ba[i], 'theirs': '%02x' % bb[i]})
        out.update({'functions': sum(total.values()), 'unreadable': missing,
                    'identical': sum(good.values()),
                    'identical_pct': round(100.0 * sum(good.values()) / max(1, sum(total.values())), 2),
                    'by_leaf_rank': {str(k): '%d/%d' % (good.get(k, 0), total[k]) for k in sorted(total)},
                    'differing_examples': bad})
    else:
        with zipfile.ZipFile(args.zip) as zf:
            key = next((x for x in zf.namelist() if x.endswith(args.csv)), None)
            if key is None:
                raise SystemExit('%s not in %s' % (args.csv, args.zip))
            text = zf.read(key).decode('utf-8', 'replace')
        addrs = []
        for row in list(csv.reader(io.StringIO(text)))[1:]:
            if len(row) <= args.column:
                continue
            cell = row[args.column].strip().lower().lstrip('0x')
            try:
                addrs.append(int(cell, 16) + (BASE if 'rva' in args.csv.lower() else 0))
            except ValueError:
                continue
        same = diff = oob = 0
        worst = []
        mat_a, mat_b = multi_reader(a), multi_reader(b)
        for va in addrs:
            ba, bb = mat_a(va, args.nbytes), mat_b(va, args.nbytes)
            if ba is None or bb is None or len(ba) != args.nbytes or len(bb) != args.nbytes:
                oob += 1
                continue
            if ba == bb:
                same += 1
            else:
                diff += 1
                if len(worst) < args.sample:
                    worst.append({'va': '%08x' % va, 'ours': ba[:8].hex(), 'theirs': bb[:8].hex()})
        out.update({'addresses': len(addrs), 'identical': same, 'different': diff, 'out_of_range': oob,
                    'bytes_compared': args.nbytes, 'examples': worst})

    if args.json:
        print(json.dumps(out, indent=1))
        return 0
    print('image_cmp %s' % args.mode)
    for k, v in out.items():
        if k in ('by_leaf_rank', 'differing_examples', 'examples', 'hotspots'):
            continue
        print('  %-16s %s' % (k, v))
    for rk in sorted(out.get('by_leaf_rank', {}), key=int):
        print('    leaf_rank %-3s %s' % (rk, out['by_leaf_rank'][rk]))
    for k in ('hotspots', 'differing_examples', 'examples'):
        for item in out.get(k, []):
            print('    %s' % (item,))
    return 0


if __name__ == '__main__':
    sys.exit(main())
