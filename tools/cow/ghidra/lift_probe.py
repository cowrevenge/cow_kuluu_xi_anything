"""lift_probe.py - print, for one entry, the three things a lift has to agree about.

    python tools/cow/ghidra/lift_probe.py 0x102d8161 --what all
    python tools/cow/ghidra/lift_probe.py 0x102d8161 --what ghidra
    python tools/cow/ghidra/lift_probe.py 0x102d8161 --what generated --calls

  ghidra     the decompiled C from the Phase A dump (what lift.py has to work from)
  generated  the recompiler's own translation from generated/all/funcs_*.c (the truth about plumbing)
  disasm     the guest instructions, via tools/cow/disasm.py's capstone
  --calls    with `generated`, print only the call/push/esp lines: the shape a bridge must reproduce

This is the reading tool for lift work. It exists because a lift is judged by whether Ghidra's structure
and the generated body's plumbing can be stitched together, and that question can only be answered by
looking at both for a real function - never from memory of what decompilers usually emit.
"""
import argparse
import json
import os
import re
import sys

if hasattr(sys.stdout, "reconfigure"):
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
GEN_DIR = os.path.join(ROOT, "generated", "all")
DUMP = os.environ.get("COW_LIFT_DUMP", "D:/projects/ghidra/ghidra_out/functions_all.jsonl")


def norm(a):
    a = (a or "").strip().lower()
    if not a.startswith("0x"):
        a = "0x" + a
    try:
        return "0x%x" % int(a, 16)
    except ValueError:
        return ""


def load_dump_entry(addr, dump=DUMP):
    """The dump is 28 MB of JSONL; a linear scan is fast enough for a probe and keeps this dependency-free."""
    with open(dump, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            if addr[2:] not in line.lower():
                continue
            try:
                d = json.loads(line)
            except ValueError:
                continue
            if norm(d.get("addr")) == addr:
                return d
    return None


def find_generated(addr):
    """(file, list_of_lines) of the generated function body, including its signature."""
    short = addr[2:]
    pat = re.compile(r"\bf_%s(?:_body)?\s*\(" % short)
    for name in sorted(os.listdir(GEN_DIR)):
        if not name.startswith("funcs_") or not name.endswith(".c"):
            continue
        path = os.path.join(GEN_DIR, name)
        with open(path, encoding="utf-8", errors="replace") as fh:
            lines = fh.readlines()
        for i, ln in enumerate(lines):
            if pat.search(ln) and ln.lstrip().startswith(("void", "static", "RT_", "inline")):
                # collect to the matching close brace
                depth = 0
                out = []
                for j in range(i, len(lines)):
                    out.append(lines[j])
                    depth += lines[j].count("{") - lines[j].count("}")
                    if j > i and depth <= 0:
                        break
                return name, out
    return None, None


CALLISH = re.compile(r"\b(f_[0-9a-f]{8}|call|push|pop|esp|rt_return|rt_arg|rt_table|jmp|goto|rt_call|rt_orig|rt_wrap)")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("entry")
    ap.add_argument("--what", default="all",
                    choices=["all", "ghidra", "generated", "disasm", "calls"])
    ap.add_argument("--dump", default=DUMP)
    ap.add_argument("--calls", action="store_true",
                    help="with generated, only the call/push/esp/return lines")
    ap.add_argument("--max-lines", type=int, default=0)
    args = ap.parse_args()

    addr = norm(args.entry)
    what = "generated" if args.calls and args.what == "all" else args.what

    if what in ("all", "ghidra"):
        d = load_dump_entry(addr, args.dump)
        print("=" * 78)
        print("GHIDRA C   %s   (dump: %s)" % (addr, os.path.basename(args.dump)))
        print("=" * 78)
        if not d:
            print("  <not in dump>")
        else:
            print("  is_thunk=%s external=%s param_count=%s body_max=%s"
                  % (d.get("is_thunk"), d.get("external"), d.get("param_count"), d.get("body_max")))
            print("  signature: %s" % (d.get("signature") or d.get("decompiled") or ""))
            print()
            print(d.get("c") or "<no c>")

    if what in ("all", "generated", "calls"):
        name, lines = find_generated(addr)
        print("=" * 78)
        print("GENERATED C  %s   (%s)" % (addr, name or "NOT FOUND"))
        print("=" * 78)
        if lines is None:
            print("  <not found in generated/all>")
        else:
            out = [ln.rstrip("\n") for ln in lines]
            if what == "calls":
                out = [ln for ln in out if CALLISH.search(ln)]
            if args.max_lines:
                out = out[:args.max_lines]
            print("\n".join(out))

    if what in ("all", "disasm"):
        print("=" * 78)
        print("DISASSEMBLY  %s" % addr)
        print("=" * 78)
        sys.path.insert(0, os.path.join(ROOT, "tools", "cow"))
        try:
            import disasm  # noqa: E402
            disasm.main_entry(addr) if hasattr(disasm, "main_entry") else os.system(
                "python %s %s" % (os.path.join(ROOT, "tools", "cow", "disasm.py"), addr))
        except Exception as exc:  # pragma: no cover - probe tool
            print("  disasm unavailable: %s" % exc)
    return 0


if __name__ == "__main__":
    sys.exit(main())
