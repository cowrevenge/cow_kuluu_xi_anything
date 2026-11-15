"""Union-merge a scratch lift's three layout files into layout/: every entry already in layout/ stays exactly
as it is; only names layout/ does not have yet are added. Used by install_argfix.py.

    python layout_merge.py <scratch_dir> <layout_dir> [--check]
"""
import os
import re
import sys

DEF = re.compile(r"^#define (COW_ADDR_LIFT_[0-9A-Za-z_]+)\s", re.M)
PROTO = re.compile(r"^CowU32 (cow_bridge_[0-9a-f]{8})\(", re.M)
BLOCK_START = re.compile(r"\n(?=/\* 0x[0-9a-f]{8} - )")
DEFN = re.compile(r"^CowU32 (cow_bridge_[0-9a-f]{8})\(", re.M)


def read(p):
    with open(p, encoding="utf-8", newline="") as fh:
        return fh.read()


def write(p, text):
    tmp = p + ".tmp"
    with open(tmp, "w", encoding="utf-8", newline="") as fh:
        fh.write(text)
    os.replace(tmp, p)


def before_endif(text, add):
    i = text.rstrip().rfind("#endif")
    if i < 0:
        raise SystemExit("no #endif in a layout header")
    return text[:i] + add + text[i:]


def blocks(text):
    """name -> block text, for every bridge definition; plus the count of definitions seen"""
    out, ndef = {}, len(DEFN.findall(text))
    for chunk in BLOCK_START.split(text):
        names = DEFN.findall(chunk)
        if len(names) == 1 and chunk.lstrip().startswith("/* 0x"):
            out[names[0]] = chunk.rstrip("\n") + "\n"
    return out, ndef


def merge(scratch, layout, check=False):
    added = {}
    # addresses
    a_old, a_new = read(os.path.join(layout, "lifted_addresses.h")), read(os.path.join(scratch, "lifted_addresses.h"))
    have = set(DEF.findall(a_old))
    lines = [ln for ln in a_new.splitlines(True) if DEF.match(ln) and DEF.match(ln).group(1) not in have]
    added["address macros"] = len(lines)
    a_out = before_endif(a_old, "".join(lines)) if lines else a_old
    # prototypes
    h_old, h_new = read(os.path.join(layout, "lifted_bridges.h")), read(os.path.join(scratch, "lifted_bridges.h"))
    have = set(PROTO.findall(h_old))
    lines = [ln for ln in h_new.splitlines(True) if PROTO.match(ln) and PROTO.match(ln).group(1) not in have]
    added["bridge prototypes"] = len(lines)
    h_out = before_endif(h_old, "".join(lines)) if lines else h_old
    new_protos = {PROTO.match(ln).group(1) for ln in lines}
    # bridge bodies
    c_old, c_new = read(os.path.join(layout, "lifted_bridges.c")), read(os.path.join(scratch, "lifted_bridges.c"))
    have = set(DEFN.findall(c_old))
    nb, ndef = blocks(c_new)
    if len(nb) != len([n for n in DEFN.findall(c_new)]):
        raise SystemExit("could not cut lifted_bridges.c into one block per bridge (%d blocks, %d definitions); "
                         "nothing was merged" % (len(nb), ndef))
    add = [nb[n] for n in sorted(nb) if n not in have]
    added["bridge bodies"] = len(add)
    missing = new_protos - {DEFN.search(b).group(1) for b in add}
    if missing:
        raise SystemExit("a new prototype has no body: %s; nothing was merged" % ", ".join(sorted(missing)[:5]))
    c_out = c_old.rstrip("\n") + "\n\n" + "\n".join(add) if add else c_old
    if not check:
        write(os.path.join(layout, "lifted_addresses.h"), a_out)
        write(os.path.join(layout, "lifted_bridges.h"), h_out)
        write(os.path.join(layout, "lifted_bridges.c"), c_out)
    return added


if __name__ == "__main__":
    print(merge(sys.argv[1], sys.argv[2], "--check" in sys.argv))
