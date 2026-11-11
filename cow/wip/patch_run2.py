"""Add the control set to the re-lift runner, with the anchors read from the file this time.

(The first attempt guessed at a print line and an argument that did not exist. Guessing anchors is just
a slower way of writing the patch wrong, and it aborts the whole run.)
"""
import ast
import io
import sys

RUN = r"D:\Projects\ffxi_disassembly\Cow_kuluu_xi_anything\tools\cow\ghidra\lift_relift_run.py"
with io.open(RUN, encoding="utf-8", newline="") as fh:
    s = fh.read()

pairs = [
    ('''    ap.add_argument("--apply", action="store_true",''',
     '''    ap.add_argument("--controls", default=os.path.join(ROOT, "cow", "wip",
                                                       "relift-controls.txt"),
                    help="units the pricing proved byte-identical; proved in the same batch so a fix "
                         "that breaks untouched files cannot pass as a win")
    ap.add_argument("--apply", action="store_true",'''),
    ('''    units = read_list(a.list)
    head = guard_clean_tree()''',
     '''    units = read_list(a.list)
    # a control that fails is the loudest possible result: it is a unit the knobs were supposed to leave
    # alone. Prove them in the same batch rather than asserting byte-identity from the emitter alone.
    controls = read_list(a.controls) if os.path.exists(a.controls) else []
    prove_units = units + [c for c in controls if c not in set(units)]
    head = guard_clean_tree()'''),
    ('''    print("  units        : %d   (list sha %s)" % (len(units), digest))''',
     '''    print("  units        : %d   (list sha %s)   controls: %d (%s)"
          % (len(units), digest, len(controls),
             os.path.basename(a.controls) if controls else "NO CONTROL FILE - a win here would be "
                                                           "unverified in one direction"))'''),
    ('''        entries = ",".join("0x" + u for u in units)''',
     '''        entries = ",".join("0x" + u for u in prove_units)'''),
    ('''        unexpected = [u for u in offlist if u not in set(units)]''',
     '''        unexpected = [u for u in offlist if u not in set(units) | set(controls)]'''),
    ('''  2) python %s --entries <same list> --states %s --out %s --rerun" % (''',
     '''  2) python %s --entries <same list, + %d controls> --states %s --out %s --rerun"
          % ('''),
    ('''        os.path.relpath(PROOF_TOOL, ROOT), a.states, os.path.relpath(a.out, ROOT)))''',
     '''            os.path.relpath(PROOF_TOOL, ROOT), len(controls), a.states,
            os.path.relpath(a.out, ROOT)))'''),
]
for a, b in pairs:
    if "\n" in a:
        ac, bc = a.replace("\n", "\r\n"), b.replace("\n", "\r\n")
        nc, nl = s.count(ac), s.count(a)
        if not (nc == 1) ^ (nl == 1):
            sys.exit("anchor %d/%d: %r" % (nc, nl, a[:60]))
        s = s.replace(ac if nc == 1 else a, bc if nc == 1 else b, 1)
    else:
        if s.count(a) != 1:
            sys.exit("anchor %d: %r" % (s.count(a), a[:60]))
        s = s.replace(a, b, 1)

compile(s, RUN, "exec")
with io.open(RUN, "w", encoding="utf-8", newline="") as fh:
    fh.write(s)
with io.open(RUN, encoding="utf-8", newline="") as fh:
    back = fh.read()
assert back == s and "\r\r\n" not in back
ast.parse(back.replace("\r\n", "\n"))
print("runner proves controls alongside the changed units")
