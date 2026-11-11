"""Materialise the CONTROL set, so the re-lift proves the units it should NOT have touched too.

The pricing already picks 40 frame-symmetric controls and shows they come back byte-identical - but it
kept that list in its own printout. Proving "the fix did not break what it never touched" needs the list
in a FILE that the runner feeds to lift_proof and the verdict tool buckets separately; otherwise the
control claim lives only in yesterday's terminal scrollback, which is where claims go to rot.
"""
import ast
import io
import sys

PRICE = r"D:\Projects\ffxi_disassembly\Cow_kuluu_xi_anything\tools\cow\ghidra\lift_relift_price.py"
RUN = r"D:\Projects\ffxi_disassembly\Cow_kuluu_xi_anything\tools\cow\ghidra\lift_relift_run.py"


def sub(path, pairs):
    with io.open(path, encoding="utf-8", newline="") as fh:
        s = fh.read()
    for a, b in pairs:
        if "\n" in a:
            ac, bc = a.replace("\n", "\r\n"), b.replace("\n", "\r\n")
            nc, nl = s.count(ac), s.count(a)
            if not (nc == 1) ^ (nl == 1):
                sys.exit("in %s: %d/%d for %r" % (path, nc, nl, a[:60]))
            s = s.replace(ac if nc == 1 else a, bc if nc == 1 else b, 1)
        else:
            if s.count(a) != 1:
                sys.exit("in %s: %d for %r" % (path, s.count(a), a[:60]))
            s = s.replace(a, b, 1)
    compile(s, path, "exec")
    with io.open(path, "w", encoding="utf-8", newline="") as fh:
        fh.write(s)
    with io.open(path, encoding="utf-8", newline="") as fh:
        back = fh.read()
    assert back == s and "\r\r\n" not in back
    ast.parse(back.replace("\r\n", "\n"))
    print("patched", path.split("\\")[-1])


sub(PRICE, [
    ('    if "--list-out" in sys.argv:',
     '    if "--controls-out" in sys.argv:\n'
     '        _cpath = sys.argv[sys.argv.index("--controls-out") + 1]\n'
     '        with io.open(_cpath, "w", encoding="utf-8", newline="\\n") as _fh:\n'
     '            for _a, _p, _q in identical:\n'
     '                _fh.write(_a + "\\n")\n'
     '        print("  controls written to %s (%d) - prove these too; they are the units the knobs"\n'
     '              " must not touch" % (_cpath, len(identical)))\n'
     '    if "--list-out" in sys.argv:'),
])

sub(RUN, [
    ('    ap.add_argument("--controls", default="")',
     '    ap.add_argument("--controls", default=os.path.join(ROOT, "cow", "wip",\n'
     '                                                   "relift-controls.txt"))'),
    ('''    units = read_list(a.list)
    head = guard_clean_tree()''',
     '''    units = read_list(a.list)
    # the control set is proved in the same batch as the changed units: a fix that leaves the untouched
    # files broken is not a fix, and "they were byte-identical in the pricing" is only a claim about the
    # EMITTER - the proof is what says whether the harness agrees
    controls = read_list(a.controls) if os.path.exists(a.controls) else []
    if controls and not set(controls) & set(units):
        prove_units = units + controls
    else:
        prove_units = units
    head = guard_clean_tree()'''),
    ('''        entries = ",".join("0x" + u for u in units)''',
     '''        entries = ",".join("0x" + u for u in prove_units)'''),
    ('''        offlist = changed_lifted_files()
        unexpected = [u for u in offlist if u not in set(units)]''',
     '''        offlist = changed_lifted_files()
        # controls are EXPECTED to be rewritten byte-identically (the lifter is deterministic), so they
        # are not "unexpected"; only units outside both lists are
        unexpected = [u for u in offlist if u not in set(units) | set(controls)]'''),
    ('''  units        : %d   (list sha %s)"''',
     '''  units        : %d   (list sha %s)   controls: %d"'''),
])
