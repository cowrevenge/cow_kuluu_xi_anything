"""Register translation entries for addresses a run actually asked for.

The stand-in dies with

    [recomp] FATAL at 044cbb5a: indirect call/jump to an address with no translation

which means an indirect jump/ret targeted a guest address discovery never made an entry. The same
log line prints the guest stack, and that is full of the other addresses the same call chain will
need (return addresses after calls into coroutine tails, e.g. the 0x102DBB49/0x102DBB59/0x102DBB5A
family that tools/cow/add_yield_entries.py documents).

This takes those addresses - given on the command line or harvested from a .recomp.log - and makes
each one an entry, the way discovery would:

  * the address must be on an instruction boundary (decoded from the containing range's lo),
  * the containing range is split so the new entry owns [addr, hi),
  * the instruction boundaries after it are tiled as well, because a resume lands on the first one
    and falls through into the rest (that is what left 0x102DBB5A bare when only 0x102DBB59 was
    added),
  * the continuation after any `call` in that span is registered too.

  python tools/cow/add_entries.py 0x102DBB5A 0x102DBB49
  python tools/cow/add_entries.py --log build/phoenix-run-1/FFXiMain.recomp.log
  python tools/cow/add_entries.py --log ... --write
"""
import argparse
import json
import os
import re
import sys

import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_32

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
sys.path.insert(0, os.path.join(ROOT, 'tools'))
import buildinfo  # noqa: E402

MAX_TAIL = 16          # instruction boundaries to tile per new entry
GAP_LIMIT = 0x400      # do not bridge a hole wider than this
NEW_BASE = 0x041f0000  # the launcher relocates the image here; undo that for log addresses
md = Cs(CS_ARCH_X86, CS_MODE_32)


def load():
    build = buildinfo.current()['build']
    meta_path = os.path.join(ROOT, 'meta', 'FFXiMain.%s.meta.json' % build)
    pe = pefile.PE(os.path.join(ROOT, 'generated', 'FFXiMain.unpacked.dll'), fast_load=True)
    text = next(s for s in pe.sections if s.Name.rstrip(b'\0') == b'.text')
    base = pe.OPTIONAL_HEADER.ImageBase
    return meta_path, base, base + text.VirtualAddress, text.get_data()


def as_guest(a):
    """Normalise an address from a log (which may show the relocated view)."""
    out = {a}
    if NEW_BASE <= a < NEW_BASE + 0x1000000:
        out.add(a - NEW_BASE + 0x10000000)
    return {x for x in out if 0x10000000 <= x < 0x11000000}


def harvest_from_log(path):
    text = open(path, 'r', errors='replace').read()
    addrs = set()
    for m in re.finditer(r'FATAL at ([0-9a-fA-F]{8}):', text):
        addrs |= as_guest(int(m.group(1), 16))
    for m in re.finditer(r'guest stack: ([0-9a-fA-F ]+)', text):
        for w in m.group(1).split():
            addrs |= as_guest(int(w, 16))
    for m in re.finditer(r'in the translation of f_([0-9a-fA-F]{8})', text):
        addrs |= as_guest(int(m.group(1), 16))
    return sorted(addrs)


def insn_stream(blob, text_lo, start, stop):
    """Decode instructions from blob, which is the .text bytes starting at address text_lo."""
    off = start - text_lo
    for ins in md.disasm(blob[off:off + (stop - start)], start):
        yield ins
        if ins.address + ins.size >= stop:
            return


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('addrs', nargs='*')
    ap.add_argument('--log')
    ap.add_argument('--tile', type=int, default=0,
                    help='also register the boundaries that follow each new entry, up to N bytes')
    ap.add_argument('--write', action='store_true')
    args = ap.parse_args()

    wanted = [int(a, 16) for a in args.addrs]
    for a in list(wanted):
        wanted += sorted(as_guest(a))
    if args.log:
        got = harvest_from_log(args.log)
        print('harvested %d candidate addresses from %s' % (len(got), os.path.basename(args.log)))
        wanted += got

    meta_path, base, text_lo, blob = load()
    meta = json.load(open(meta_path, encoding='utf-8'))
    fns = meta['functions']
    text_hi = text_lo + len(blob)

    def entry_set():
        s = {f['entry'] for f in fns}
        for f in fns:
            for lo, hi in f['ranges']:
                s.add(lo)
        return s

    entries = entry_set()
    added = []
    skipped = []

    def container(addr):
        for f in fns:
            for lo, hi in f['ranges']:
                if lo <= addr < hi:
                    return f, lo, hi
        return None, None, None

    def boundaries_of(f, lo, hi):
        """Instruction starts of a function, decoded from its authoritative entry point."""
        start = f['entry'] if f is not None and f['entry'] <= lo else lo
        start = min(start, lo)
        out = []
        n = 0
        for ins in insn_stream(blob, text_lo, start, hi):
            out.append(ins.address)
            n += 1
            if n > 4000:
                break
        return out

    def ensure(addr, why, depth=0):
        if not (text_lo <= addr < text_hi):
            return
        if addr in entries:
            return
        f, lo, hi = container(addr)
        if f is None:
            nxt = min((r[1] for g in fns for r in g['ranges'] if r[1] > addr), default=None)
            prv = max((r[1] for g in fns for r in g['ranges'] if r[1] <= addr), default=None)
            if nxt is None or (addr - (prv or text_lo)) > GAP_LIMIT and (nxt - addr) > GAP_LIMIT:
                skipped.append((addr, why))
                return
            hi = nxt
        else:
            # an entry in the middle of an instruction would translate garbage: insist on a boundary
            if addr not in boundaries_of(f, lo, hi):
                skipped.append((addr, 'not an instruction boundary'))
                return
            if lo < addr < hi:
                f['ranges'] = [[lo, addr] if g == [lo, hi] else g for g in f['ranges']]
        fns.append({'ranges': [[addr, hi]], 'thunk': False, 'entry': addr})
        entries.add(addr)
        added.append((addr, why, 'to %08X' % hi))
        if depth >= 2 or not args.tile:
            return
        # a resume that lands here falls through, so give the following boundaries entries too
        for b in [x for x in boundaries_of(f, lo, hi) if x > addr][:MAX_TAIL]:
            if args.tile and b - addr > args.tile:
                break
            ensure(b, 'tail', depth + 1)
        for ins in insn_stream(blob, text_lo, addr, hi):
            if ins.mnemonic == 'call' and ins.op_str.startswith('0x'):
                ensure(ins.address + ins.size, 'call-cont', depth + 1)
            if ins.mnemonic in ('ret', 'int3'):
                break

    for a in sorted(set(wanted)):
        ensure(a, 'requested')

    for a in sorted(set(wanted)):
        print('  %08X  covered=%s' % (a, any(lo <= a < hi for f in fns for lo, hi in f['ranges'])))
    print('\nnew entries: %d   functions %d -> %d' % (len(added), len(fns) - len(added), len(fns)))
    for a, why, note in added[:40]:
        print('   + %08X  %-11s %s' % (a, why, note))
    if skipped:
        print('skipped (outside .text or too far from a known range): %s'
              % ', '.join('%08X' % a for a, _ in skipped[:12]))

    if args.write:
        sha_before = meta['sha256']
        text = json.dumps(meta, separators=(',', ':'))
        assert json.loads(text)['sha256'] == sha_before, 'sha256 field drifted'
        open(meta_path, 'w', encoding='utf-8', newline='\n').write(text)
        print('wrote %s (%d bytes, one line)' % (meta_path, len(text)))
    else:
        print('dry run; add --write')


if __name__ == '__main__':
    main()
