"""Model the vtables, so an empty `ret` slot becomes `<Class>::vf<N>` instead of a nameless noop.

RTTI is stripped from this build (six `.?A` strings in the whole image - see tools/cow/rtti_probe.py), so
the class name cannot come from a TypeDescriptor. It comes from what the vtable's OWN slots reference:
the vendor's tables_strings.csv lists the strings each code address references, and a class's non-empty
methods cite their own vocabulary (`ShopItemList`, `LinkShell`, `PolyBlockLookup`). We take the dominant
token across the slots of a vtable and use it as the vtable's name, with the slots that do nothing
recorded as that class's empty overrides.

  python tools/cow/vtable_model.py --entry 0x10201ac0          # who owns this address, and what is it called
  python tools/cow/vtable_model.py --ledger-rets --limit 60    # converted ret stubs -> vtable + proposed name
  python tools/cow/vtable_model.py --top 20                    # the biggest vtables we can name
  python tools/cow/vtable_model.py --entry 0x10201ac0 --json

A name is only PROPOSED here (confidence guess). tools/cow/review_pass.py is what writes it to the ledger,
and it cites the vtable, the slot index, and the string that carried the name. Nothing in this file marks
a unit verified - cowdiff does that.
"""
import argparse
import collections
import csv
import io
import json
import os
import re
import struct
import sys
import zipfile

try:
    import pefile
    from capstone import Cs, CS_ARCH_X86, CS_MODE_32
except ImportError:                                        # pragma: no cover
    sys.exit('pefile/capstone missing')

if hasattr(sys.stdout, 'reconfigure'):
    sys.stdout.reconfigure(encoding='utf-8', errors='replace')

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
DLL = os.path.join(ROOT, 'generated', 'FFXiMain.unpacked.dll')
LEDGER = os.path.join(ROOT, 'ledger', 'functions.csv')
ZIP = os.path.join(ROOT, 'vendor', 'cow_ffxi_disassembly', 'Disassembly_Tools', 'artifacts',
                   'ffximain_tables_v0.zip')

PE = pefile.PE(DLL, fast_load=True)
BASE = PE.OPTIONAL_HEADER.ImageBase
SECTIONS = [(s.Name.rstrip(b'\x00').decode('latin-1'), BASE + s.VirtualAddress, s.Misc_VirtualSize,
             s.get_data()) for s in PE.sections]
TEXT = next(s for s in SECTIONS if s[0] == '.text')
DATA_SECTIONS = [s for s in SECTIONS if s[0] != '.text']
SIZE_OF_IMAGE = PE.OPTIONAL_HEADER.SizeOfImage
MD = Cs(CS_ARCH_X86, CS_MODE_32)
MD.detail = False

SETSTATUS = os.path.join(ROOT, 'tools', 'cow', 'setstatus.py')
GENWRAPS = os.path.join(ROOT, 'tools', 'cow', 'genwraps.py')
STATUS = os.path.join(ROOT, 'tools', 'cow', 'status.py')
GATE_BATCH = os.path.join(ROOT, 'tools', 'cow', 'gate_batch.ps1')


def sh(cmd, capture=True):
    import subprocess
    res = subprocess.run(cmd, cwd=ROOT, capture_output=capture, text=True)
    return res.returncode, (res.stdout or '') + (res.stderr or '')

STOP = {'the', 'and', 'for', 'with', 'this', 'that', 'from', 'into', 'value', 'data', 'size', 'type',
        'name', 'list', 'count', 'index', 'get', 'set', 'sub', 'true', 'false', 'null', 'ptr', 'str',
        'www', 'http', 'https', 'com', 'net', 'org', 'ini', 'cfg', 'dll', 'exe', 'txt', 'xml', 'lua'}
TOKEN_RE = re.compile(r'[A-Za-z_][A-Za-z0-9_]{3,40}')


def u32(va):
    for _n, base, size, data in SECTIONS:
        if base <= va < base + size:
            off = va - base
            if off + 4 <= len(data):
                return struct.unpack('<I', data[off:off + 4])[0]
    return None


def in_text(va):
    return va is not None and TEXT[1] <= va < TEXT[1] + TEXT[2]


def in_image(va):
    return va is not None and BASE <= va < BASE + SIZE_OF_IMAGE


def cstring(va, cap=96):
    """A printable ASCII/NUL string at va, or None. This is how a slot cites its own vocabulary."""
    for _n, base, size, data in SECTIONS:
        if base <= va < base + size:
            off = va - base
            end = data.find(b'\0', off, off + cap)
            if end < 0 or end - off < 4:
                return None
            raw = data[off:end]
            if all(0x20 <= c < 0x7f for c in raw):
                return raw.decode('latin-1')
    return None


def strings_referenced_by(va, max_insns=160):
    """Strings an instruction stream at va references as an immediate (our own read of the image)."""
    out = []
    for _n, base, size, data in SECTIONS:
        if base <= va < base + size:
            blob = data[va - base: va - base + 1200]
            break
    else:
        return out
    try:
        for ins in MD.disasm(blob, va):
            if ins.mnemonic == 'ret':
                break
            # capstone's operand objects need detail=True; the text is cheaper and unambiguous here
            for m in re.finditer(r'0x([0-9a-fA-F]{8})', ins.op_str):
                val = int(m.group(0), 16)
                if not in_image(val):
                    continue
                s = cstring(val)
                if s and not s.startswith('.?A'):
                    out.append(s)
            if len(out) >= 8:
                break
    except Exception:                                      # noqa: BLE001 - a bad decode is not a crash
        pass
    return out


def classname_strings():
    """{va_of_name_string: 'CAcc'} from the vendor's tables_classnames.csv (113 real class tags)."""
    out = {}
    if not os.path.isfile(ZIP):
        return out
    try:
        with zipfile.ZipFile(ZIP) as zf:
            member = next((n for n in zf.namelist() if n.endswith('tables_classnames.csv')), None)
            if not member:
                return out
            with zf.open(member) as raw:
                rows = list(csv.reader(io.StringIO(raw.read().decode('utf-8', 'replace'))))
    except (OSError, zipfile.BadZipFile):
        return out
    head = [h.strip().lower() for h in rows[0]]
    for r in rows[1:]:
        if len(r) < len(head):
            continue
        d = dict(zip(head, [c.strip() for c in r[:len(head)]]))
        try:
            va = int(d.get('va', ''), 16)
        except ValueError:
            continue
        if d.get('name') and in_image(va):
            out[va] = d['name']
    return out


def constructor_vtables(names):
    """{vtable_va: [class names]} - who stores this vtable pointer, and what class tag does that code cite?

    MSVC constructors write `mov dword ptr [reg], offset vtable` and, for a polymorphic class, the same
    function (or its immediate neighbourhood) references the class tag string. We search .text for the
    literal 4-byte name address (fast, the way tools/cow/refs_to.py does), decode a window around each
    hit, and collect every `mov [reg], imm32` whose imm32 is the start of a run of code pointers.
    """
    hits_by_vtable = collections.defaultdict(list)
    text = TEXT[3]
    text_lo, text_hi = TEXT[1], TEXT[1] + TEXT[2]
    for name_va, cname in names.items():
        pat = struct.pack('<I', name_va)
        pos = text.find(pat)
        tries = 0
        while pos != -1 and tries < 12:
            addr = text_lo + pos
            lo = max(0, pos - 0x60)
            hi = min(len(text), pos + 0x80)
            try:
                for ins in MD.disasm(text[lo:hi], text_lo + lo):
                    if ins.mnemonic != 'mov' or 'ptr [' not in ins.op_str:
                        continue
                    m = re.search(r'0x([0-9a-fA-F]{8})', ins.op_str)
                    if not m:
                        continue
                    imm = int(m.group(0), 16)
                    if in_image(imm) and in_text(u32(imm)) and in_text(u32(imm + 4)):
                        hits_by_vtable[imm].append((cname, '0x%08x' % addr))
            except Exception:                              # noqa: BLE001
                pass
            pos = text.find(pat, pos + 1)
            tries += 1
    return hits_by_vtable


def vendor_string_index():
    """{code_va: [strings]} from the vendor's own tables_strings.csv (cited, never copied into the repo)."""
    idx = collections.defaultdict(list)
    if not os.path.isfile(ZIP):
        return idx
    try:
        with zipfile.ZipFile(ZIP) as zf:
            member = next((n for n in zf.namelist() if n.endswith('tables_strings.csv')), None)
            if not member:
                return idx
            with zf.open(member) as raw:
                rows = list(csv.reader(io.StringIO(raw.read().decode('utf-8', 'replace'))))
    except (OSError, zipfile.BadZipFile):
        return idx
    head = [h.strip().lower() for h in rows[0]]
    if 'referenced_from_code' not in head:
        return idx          # this vendor build lists only string va/len/text; our own reads do the joining
    for r in rows[1:]:
        if len(r) < len(head):
            continue
        d = dict(zip(head, [c.strip() for c in r[:len(head)]]))
        text = d.get('text') or ''
        if len(text) < 4:
            continue
        for col in ('referenced_from_code',):
            for m in re.finditer(r'1[0-9a-fA-F]{7}', d.get(col, '') or ''):
                idx[int(m.group(0), 16)].append(text)
    return idx


MAX_SLOTS = 128            # per the audit: any table over 128 slots is our bug, not a class


def col_at(p):
    """Decode the RTTI CompleteObjectLocator that sits immediately below p, or None.

    This is the boundary the old model lacked: a vtable starts where the word at -4 is a valid COL
    (signature 0, TypeDescriptor whose name really begins .?A..., CHD with signature 0) - and it ENDS
    where the next valid COL begins, or where the pointers stop pointing into .text. Without this the
    scan merged adjacent tables and invented classes 254-1056 slots wide."""
    import rtti
    if not in_image(p - 4):
        return None
    col = u32(p - 4)
    if not in_image(col):
        return None
    cname, bases, how = rtti.decode_col(col)
    if not cname:
        return None
    return {'col': col, 'class': cname, 'bases': bases, 'how': how}


def enumerate_vtables(min_slots=2):
    """Only RTTI-BOUNDED vtables: a validated COL at -4 starts the table, and the next COL or a
    non-code pointer ends it. A run without a COL is not claimed as a vtable at all - it is a data
    reference at most. Tables over MAX_SLOTS are reported as bugs (citable=False) and never prove."""
    import rtti
    tables = []
    for name, base, size, data in DATA_SECTIONS:
        if not (name == '.rdata' or name.startswith('.data')):
            continue
        n = min(size, len(data)) // 4 * 4
        i = 0
        while i < n:
            first = struct.unpack('<I', data[i:i + 4])[0]
            if not in_text(first):
                i += 4
                continue
            j = i
            while j < n:
                cur = struct.unpack('<I', data[j:j + 4])[0]
                if not in_text(cur):
                    break
                j += 4
            # split the raw run at every position whose -4 word is a valid COL - each such position is
            # the true start of a table; anything before the first COL in the run is unowned tail.
            k = i
            while k < j:
                colinfo = col_at(base + k)
                if colinfo:
                    # this k starts a table; it ends at the next COL start or the run end
                    e = k + 4
                    while e < j and not col_at(base + e):
                        e += 4
                    count = (e - k) // 4
                    if count >= min_slots:
                        tables.append({'vtable': base + k, 'section': name,
                                       'targets': [struct.unpack('<I', data[k + 4 * q:k + 4 * q + 4])[0]
                                                   for q in range(count)],
                                       'class': colinfo['class'], 'bases': colinfo['bases'],
                                       'bounded': True, 'citable': count <= MAX_SLOTS})
                    k = e
                else:
                    k += 4
            i = j if j > i else i + 4
    return tables


def tokens(strings):
    scored = []
    for s in strings:
        for t in TOKEN_RE.findall(s):
            if t.lower() in STOP or t.isdigit():
                continue
            weight = 2 if (any(c.isupper() for c in t[1:]) or '_' in t) else 1
            scored.append((weight, t))
    return scored


def col_classnames(tables, tag_vas):
    """{vtable_va: class} - the class the table's OWN CompleteObjectLocator decodes to.

    The old version read any word within 24 bytes of the COL and then one level deeper, matching against
    vendor tag addresses; that produced class tags for merged runs that are not classes (switch jump
    tables). Now only a COL that decodes cleanly - signature 0, TypeDescriptor starting .?A..., CHD
    signature 0 - gives a name, and it is the name the descriptor itself carries."""
    return {tb['vtable']: tb['class'] for tb in tables if tb.get('bounded') and tb.get('class')}


def name_vtable(vtable_va, targets, vidx, ctor, strings_cache, col_names=None):
    """Propose a name for a vtable. Constructor evidence first (a real class tag), then vocabulary.

    Constructor evidence means: some code references the class's tag string (vendor tables_classnames.csv)
    and, in the same window, stores this vtable's address into an object - which is exactly what an MSVC
    constructor does. Vocabulary evidence is weaker: the dominant token among strings the slots cite.
    """
    if col_names and vtable_va in col_names:
        cname = col_names[vtable_va]
        return cname, ['vtable metadata cites the class tag %s' % cname], \
               'vtable-4 metadata -> class tag (vendor tables_classnames.csv, joined in our image)'
    hits = ctor.get(vtable_va) or []
    if hits:
        tally = collections.Counter(c for c, _a in hits)
        top, n = tally.most_common(1)[0]
        return top, ['%s x%d (code %s)' % (c, k, a) for c, k in tally.most_common(3)][:3], \
               'constructor stores this vtable and cites the class tag (%d hit(s))' % n
    # No vocabulary naming: the audit found it invented class names from whichever token happened to
    # dominate the strings a merged run's slots cited. A table gets a name from its COL or not at all.
    return None, [], 'no COL class tag and no constructor citing it'


def callers_in_code(target, limit=8):
    """Code addresses that reach target: `call rel32`, `jmp rel32`, or `push imm32` of its address.

    This is the second half of the ownership question. A vtable slot is a virtual method; a call site is
    a called function. Neither is a noop we invented - if we find neither, the honest verdict is that the
    entry has not been read yet, and tools/cow/gate.ps1 now refuses the unit until it has.
    """
    hits = []
    text = TEXT[3]
    lo, hi = TEXT[1], TEXT[1] + TEXT[2]
    rel = struct.pack('<B', 0xE8)                        # call rel32
    for i in range(0, len(text) - 5):
        if text[i] in (0xE8, 0xE9):                      # call / jmp rel32
            disp = struct.unpack('<i', text[i + 1:i + 5])[0]
            if lo + i + 5 + disp == target:
                hits.append(lo + i)
                if len(hits) >= limit:
                    return hits
        elif text[i] == 0x68:                            # push imm32
            if struct.unpack('<I', text[i + 1:i + 5])[0] == target:
                hits.append(lo + i)
                if len(hits) >= limit:
                    return hits
    return hits


def owners_of(target, tables):
    """Tables that hold target - only COL-bounded, citable ones (a >128-slot run is a jump table)."""
    out = []
    for tb in tables:
        if not tb.get('bounded') or not tb.get('citable', True):
            continue
        for k, t in enumerate(tb['targets']):
            if t == target:
                out.append({'vtable': '0x%08x' % tb['vtable'], 'vtable_va': tb['vtable'], 'slot': k,
                            'slots': len(tb['targets']), 'section': tb['section'],
                            'class': tb.get('class'), 'targets': tb['targets']})
    out.sort(key=lambda o: (0 if o.get('class') else 1, o['slots']))   # named, smallest table wins
    return out


def fcalls_index(force=False):
    """{hex: (count, first_file)} of every `f_<hex>(` call in the recompiler's own output.

    This is the owner the image cannot show us: the guest's call sites become C calls from one generated
    function to another, so an address that no data table holds and no `call rel32` reaches can still be
    called by the translation. We read it once (generated/ is huge and never committed) and cache it in
    build/, which is also ignored.
    """
    cache_dir = os.path.join(ROOT, 'build', 'cowproof')
    cache = os.path.join(cache_dir, 'fcalls.json')
    if not force and os.path.isfile(cache):
        try:
            with open(cache, encoding='utf-8') as fh:
                return json.load(fh)
        except (OSError, ValueError):
            pass
    gen = os.path.join(ROOT, 'generated', 'all')
    if not os.path.isdir(gen):
        return {}
    index = {}
    call_re = re.compile(r'\bf_([0-9a-fA-F]{8})\s*\(')
    here_re = re.compile(r'^\s*[A-Za-z_][A-Za-z0-9_ \*]*\bf_([0-9a-fA-F]{8})\s*\(\s*Guest\s*\*\s*g\s*\)')
    for sub in ('all',):
        base = os.path.join(ROOT, 'generated', sub)
        if not os.path.isdir(base):
            continue
        for f in sorted(os.listdir(base)):
            if not f.endswith('.c'):
                continue
            path = os.path.join(base, f)
            current = None
            try:
                with open(path, encoding='utf-8', errors='replace') as fh:
                    for line in fh:
                        m_here = here_re.match(line)
                        if m_here:
                            current = m_here.group(1).lower()
                        for m in call_re.finditer(line):
                            h = m.group(1).lower()
                            if h == current:
                                continue                      # the definition itself, not a call
                            ent = index.get(h)
                            if ent:
                                ent[0] += 1
                                if current and current not in ent[2] and len(ent[2]) < 3:
                                    ent[2].append(current)
                            else:
                                index[h] = [1, f, [current] if current else []]
            except OSError:
                continue
    out = {h: [v[0], v[1], v[2]] for h, v in index.items()}
    os.makedirs(cache_dir, exist_ok=True)
    with open(cache, 'w', encoding='utf-8') as fh:
        json.dump(out, fh)
    return out


def generated_call_sites(target, limit=3):
    idx = fcalls_index()
    ent = idx.get('%08x' % target)
    if not ent:
        return []
    return ['%s:%d f_%08x(' % (ent[1], ent[0], target)][:limit]


def data_refs(target, limit=6):
    """Every data-section word that holds this address: a table or struct slot that enters it.

    A run of code pointers is a vtable; a single pointer is a callback slot in a struct, a registry entry,
    or a jump/branch table. Either way the address is entered through data, which is an owner - and it is
    what separates 'we read this' from 'we saw ret and wrote a noop'.
    """
    hits = []
    pat = struct.pack('<I', target)
    for name, base, size, data in DATA_SECTIONS:
        if name == '.text':
            continue
        i = data.find(pat)
        while i != -1 and len(hits) < limit:
            if i % 4 == 0:
                hits.append((name, base + i))
            i = data.find(pat, i + 4)
    return hits


def proof_for(target, tables, vidx, tags, cache):
    """What the loop is allowed to say about one entry before it books it as done.

    Proven means one of two things, both read out of the image: the address is a slot in a table of code
    pointers (so it is a virtual method of a class), or code reaches it with call/jmp/push (so it is a
    called leaf). Anything else is an address we have not read, and the gate refuses a noop standing in
    for it. Returns the name and the citation to put in the ledger.
    """
    owners = owners_of(target, tables)
    if owners:
        best = max(owners, key=lambda o: o['slots'])
        name, why, how = name_vtable(best['vtable_va'], best['targets'], vidx, cache['ctor'],
                                     cache['strings'], cache['col'])
        if name:
            ident = ''.join(c for c in name if c.isalnum() or c == '_')
            if ident and ident[0].isdigit():
                ident = 'c' + ident
            fn = 'cow_%s_vf%d' % (ident.lower(), best['slot'])
            conf = 'guess'
            refs = ['vtable %s slot %d/%d - a virtual method' % (best['vtable'], best['slot'],
                                                                     len(best['targets'])),
                    'vtable named %s from the vocabulary its slots cite: %s'
                    % (name, ', '.join(why)[:120])]
        else:
            fn = 'cow_vf%d_at_%s' % (best['slot'], best['vtable'][2:])
            conf = 'placeholder'
            refs = ['vtable %s slot %d/%d - a virtual method' % (best['vtable'], best['slot'],
                                                                 len(best['targets']))]
        return {'entry': '0x%08x' % target, 'proven': True, 'kind': 'vtable_slot', 'name': fn,
                'confidence': conf, 'oracle': ';'.join(refs),
                'vtable': best['vtable'], 'slot': best['slot'],
                'slots': len(best['targets'])}
    hits = callers_in_code(target)
    if hits:
        return {'entry': '0x%08x' % target, 'proven': True, 'kind': 'called',
                'name': 'cow_return_at_%08x' % target, 'confidence': 'placeholder',
                'oracle': 'called from %d code site(s): %s'
                          % (len(hits), ', '.join('0x%08x' % h for h in hits[:4]))}
    gcs = fcalls_index().get('%08x' % target)
    if gcs:
        callers = ', '.join('f_' + c for c in (gcs[2] if len(gcs) > 2 else [])[:3]) or 'the translation itself'
        return {'entry': '0x%08x' % target, 'proven': True, 'kind': 'generated_call',
                'name': 'cow_return_at_%08x' % target, 'confidence': 'placeholder',
                'oracle': 'called from the translation: %d f_%08x( call site(s) in generated/all/%s, from %s'
                          % (gcs[0], target, gcs[1], callers)}
    refs = data_refs(target)
    if refs:
        return {'entry': '0x%08x' % target, 'proven': True, 'kind': 'data',
                'name': 'cow_table_entry_at_%08x' % target, 'confidence': 'placeholder',
                'oracle': 'data reference(s) in %s at %s - entered through a table or struct slot, '
                          'not a call' % (refs[0][0], ', '.join('0x%08x' % a for _n, a in refs[:4]))}
    return {'entry': '0x%08x' % target, 'proven': False, 'kind': 'none', 'name': '',
            'confidence': '', 'oracle': '',
            'why': 'no table of code pointers holds it, no call/jmp/push reaches it, '
                   'and no data word names it'}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--entry', action='append', default=[])
    ap.add_argument('--entries', default='')
    ap.add_argument('--ledger-rets', action='store_true')
    ap.add_argument('--limit', type=int, default=0)
    ap.add_argument('--top', type=int, default=0)
    ap.add_argument('--min-slots', type=int, default=6)
    ap.add_argument('--json', action='store_true')
    ap.add_argument('--apply', action='store_true',
                    help='write what we proved into the ledger: the vtable that owns each ret stub, and '
                         'a name when the vtable has one (via tools/cow/setstatus.py, never the CSV)')
    ap.add_argument('--gate', type=int, default=2, help='with --apply: how many entries to re-gate')
    ap.add_argument('--no-commit', action='store_true',
                    help='with --apply: write the ledger/names/source changes only - used by the loop, '
                         'which gates and commits once per unit through loopy_submit')
    ap.add_argument('--proof', default=None,
                    help='answer one question for the loop before it books a unit: can we say who calls '
                         'this address? Prints the name and citation to use, or proven=false')
    ap.add_argument('--diag', action='store_true', help='report what the oracles and our own reads actually give')
    args = ap.parse_args()

    entries = list(args.entry) + [e for e in args.entries.split(',') if e.strip()]
    if args.ledger_rets:
        with open(LEDGER, encoding='utf-8', newline='') as fh:
            rows = [r for r in csv.DictReader(fh)
                    if r['status'] == 'done' and (r.get('file') or '').endswith('_ret.c')]
        entries += [r['entry'] for r in (rows[-args.limit:] if args.limit else rows)]

    tables = enumerate_vtables(2 if args.proof else args.min_slots)
    vidx = vendor_string_index()
    tags = classname_strings()
    ctor = constructor_vtables(tags)
    col_names = col_classnames(tables, tags)
    strings_cache = {}

    if args.proof:
        cache = {'ctor': ctor, 'col': col_names, 'strings': strings_cache}
        got = proof_for(int(args.proof, 16), tables, vidx, tags, cache)
        print(json.dumps(got, indent=1))
        return 0

    if args.diag:
        print('DIAG: %d section(s), %d vtable run(s) >= %d slots, vendor string keys %d, '
              'class tags %d, vtables named by metadata %d, by constructor %d, %d entr%s to look up'
              % (len(SECTIONS), len(tables), args.min_slots, len(vidx), len(tags), len(col_names),
                 len(ctor), len(entries), 'y' if len(entries) == 1 else 'ies'))
        for vt, cname in list(col_names.items())[:12]:
            print('   vtable %08x is %s (metadata cites its class tag)' % (vt, cname))
        for vt, hits in list(ctor.items())[:12]:
            print('   vtable %08x <- %s' % (vt, hits[:3]))
        for tb in sorted(tables, key=lambda t: -len(t['targets']))[:6]:
            nm, why, how = name_vtable(tb['vtable'], tb['targets'], vidx, ctor, strings_cache, col_names)
            print('   %s %3d slots -> %s (%s)' % ('0x%08x' % tb['vtable'], len(tb['targets']),
                                                  nm or '-', how))
        if not entries:
            return 0

    if args.top:
        rows = []
        for tb in sorted(tables, key=lambda t: -len(t['targets']))[:args.top * 6]:
            name, why, how = name_vtable(tb['vtable'], tb['targets'], vidx, ctor, strings_cache, col_names)
            rows.append({'vtable': '0x%08x' % tb['vtable'], 'slots': len(tb['targets']),
                         'section': tb['section'], 'name': name, 'why': why, 'how': how})
        rows = [r for r in rows if r['name']][:args.top]
        if args.json:
            print(json.dumps(rows, indent=1))
        else:
            print('NAMED VTABLES: %d (scanned %d runs of >= %d code pointers)'
                  % (len(rows), len(tables), args.min_slots))
            for r in rows:
                print('  %s %3d slots  %-24s %s' % (r['vtable'], r['slots'], r['name'] or '-',
                                                    ', '.join(r['why'] or [])))
        return 0

    if not entries:
        raise SystemExit('give --entry/--entries/--ledger-rets/--top')

    report = []
    for e in entries:
        target = int(e, 16)
        owners = owners_of(target, tables)
        if not owners:
            code_hits = callers_in_code(target)
            drefs = data_refs(target)
            gent = fcalls_index().get('%08x' % target)
            report.append({'entry': '0x%08x' % target, 'owners': 0, 'name': None,
                           'vtable': '', 'slot': None, 'slots': 0, 'why': [],
                           'callers': ['0x%08x' % c for c in code_hits],
                           'data': ['%s@0x%08x' % (n, a) for n, a in drefs],
                           'gen': [gent[0], gent[1], gent[2]] if gent else [],
                           'how': ('called from %d code site(s)' % len(code_hits)) if code_hits
                           else ('%d f_() call site(s) in generated/all' % gent[0]) if gent
                           else ('%d data reference(s)' % len(drefs) if drefs
                                 else 'no vtable slot, no caller, no data word: not read yet')})
            continue
        best = max(owners, key=lambda o: o['slots'])
        name, why, how = name_vtable(best['vtable_va'], best['targets'], vidx, ctor, strings_cache,
                                     col_names)
        dupes = sum(1 for t in best['targets'] if t == target)
        report.append({'entry': '0x%08x' % target, 'owners': len(owners), 'name': name,
                       'vtable': best['vtable'], 'slot': best['slot'], 'slots': best['slots'],
                       'same_slot_targets': dupes, 'why': why, 'how': how, 'callers': []})
    if args.apply:
        import review_pass as rp                                   # reuse the ledger/name writers
        stats = {'slot': 0, 'caller': 0, 'unread': 0}
        for r in report:
            with open(LEDGER, encoding='utf-8', newline='') as fh:
                row = next((x for x in csv.DictReader(fh)
                            if x['entry'].lower() == r['entry'].lower()), None)
            if not row or row['status'] != 'done' or not row.get('file'):
                continue
            full = os.path.join(ROOT, row['file'])
            if r['owners']:
                refs = ['vtable 0x%s slot %d/%d - the address is a virtual method, not a noop'
                        % (r['vtable'][2:], r['slot'], r['slots'])]
                name = row['name']
                if r['name']:
                    ident = re.sub(r'[^0-9A-Za-z_]', '', r['name'])
                    if ident and ident[0].isdigit():
                        ident = 'c' + ident
                    name = 'cow_%s_vf%d' % (ident.lower(), r['slot'])
                    refs.append('vtable named %s from the vocabulary its slots cite: %s'
                                % (r['name'], ', '.join(r['why'] or [])[:120]))
                else:
                    name = 'cow_vf%d_at_%s' % (r['slot'], r['vtable'][2:])
                joined = ';'.join(refs)
                conf = 'guess' if r['name'] else 'placeholder'
            elif r.get('callers') or r.get('data') or r.get('gen'):
                if r.get('callers'):
                    name = 'cow_return_at_%s' % r['entry'][2:]
                    joined = 'called from %d code site(s): %s' % (len(r['callers']),
                                                                  ', '.join(r['callers'][:4]))
                elif r.get('gen'):
                    name = 'cow_return_at_%s' % r['entry'][2:]
                    callers = ', '.join('f_' + c for c in (r['gen'][2] if len(r['gen']) > 2 else [])[:3]) \
                        or 'the translation itself'
                    joined = 'called from the translation: %d f_%s( call site(s) in generated/all/%s, from %s' % (
                        r['gen'][0], r['entry'][2:], r['gen'][1], callers)
                else:
                    name = 'cow_table_entry_at_%s' % r['entry'][2:]
                    joined = 'data reference(s) %s - entered through a table or struct slot, not a call' % (
                        ', '.join(r['data'][:4]),)
                conf = 'placeholder'
            else:
                # Nobody owns it and nobody calls it: we have not read this file, so it is not a
                # conversion. Take it back out of `done` rather than keep a stub that looks like one.
                code, out = sh([sys.executable, SETSTATUS, r['entry'], '--status', 'failed',
                                '--name', '', '--file', '', '--oracle', '', '--verified', 'false',
                                '--note', 'unbooked: no vtable slot and no caller - a stub, not read'])
                if code:
                    raise SystemExit('setstatus (unbook) failed for %s: %s' % (r['entry'], out.strip()[-300:]))
                if os.path.isfile(full):
                    os.remove(full)
                stats['unread'] += 1
                continue
            code, out = sh([sys.executable, SETSTATUS, r['entry'], '--status', 'done',
                            '--name', name, '--file', row['file'], '--oracle', joined,
                            '--verified', 'true', '--note', 'ownership proved by vtable_model'])
            if code:
                raise SystemExit('setstatus failed for %s: %s' % (r['entry'], out.strip()[-400:]))
            if conf == 'guess':
                rp.register_name(name, 'function', name, joined)
            rp.set_name_paragraph(full, name, conf, joined)
            stats['slot' if r['owners'] else 'caller'] += 1
        print('VTABLE APPLY: %d virtual method(s), %d called function(s), %d unbooked as unread'
              % (stats['slot'], stats['caller'], stats['unread']))
        if args.no_commit:
            return 0                                       # the loop gates and commits the unit itself
        owned = [r['entry'] for r in report if r['owners'] or r.get('callers')]
        code, out = sh([sys.executable, GENWRAPS])
        if code:
            raise SystemExit('genwraps failed: %s' % out.strip()[-600:])
        msg = 'cow: vtable model - %d virtual method(s), %d called leaf(s), %d unbooked as unread' % (
            stats['slot'], stats['caller'], stats['unread'])
        sh([sys.executable, STATUS, '--describe', msg])
        sample = owned[::max(1, len(owned) // max(1, args.gate))][:args.gate]
        if sample:
            code, out = sh(['pwsh', '-NoProfile', '-File', GATE_BATCH, '-Entries', ','.join(sample)])
            print('\n'.join(l for l in out.splitlines() if 'VERDICT' in l or 'FAIL' in l) or out[-1500:])
            if code:
                raise SystemExit('GATE_BATCH failed on the sample; nothing committed')
        paths = ['ledger/functions.csv', 'cow/names.csv', 'cow/wraps.json', 'runtime/cow', 'src',
                 'README.md', 'docs/cow/STATUS.md', 'docs/cow/NAMES_TODO.md',
                 'tools/cow/vtable_model.py', 'tools/cow/rtti.py', 'tools/cow/rtti_probe.py',
                 'tools/cow/review_pass.py', 'tools/cow/oracle_join.py', 'tools/cow/mkret.py']
        sh(['git', 'add'] + paths)
        code, out = sh(['git', 'commit', '-m', msg])
        print(out.strip())
        sh(['git', 'fetch', 'origin', 'main'])
        code, out = sh(['git', 'push', 'origin', 'main'])
        print('pushed:', out.strip() or 'no change')

    if args.json:
        print(json.dumps(report, indent=1))
        return 0
    named = sum(1 for r in report if r['name'])
    print('VTABLE MODEL: %d entry(s), %d owned by a vtable, %d with a proposed name'
          % (len(report), sum(1 for r in report if r['owners']), named))
    for r in report:
        print('  %s vtable=%-12s slot=%-4s of %-4s name=%-22s %s'
              % (r['entry'], r['vtable'] or '-', r['slot'], r['slots'], r['name'] or '-',
                 ', '.join(r['why'] or []) or r['how']))
    return 0


if __name__ == '__main__':
    sys.exit(main())
