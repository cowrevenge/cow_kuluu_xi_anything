"""Build the combined re-lift candidate list, and REFUSE to pad it with units today's knobs cannot lift.

Three queues have accumulated, but they are not the same kind of thing:

  relift-accepted.txt      170 units that already have a lifted file and whose bytes CHANGE under the
                           three lift/model knobs (epilogue-matching, tail epilogue, tail pop-run).
  npush-newly-liftable.txt  23 units currently REFUSED by argcount that COW_MODEL_NPUSH_FRAME_AWARE makes
                           liftable - today's code, measured by lift_npush_price.py.
  frame-read-clean82.txt    82 units whose only string-provenance gap is a frame-relative destination.
                           They need the frame-BINDING feature, which does not exist yet: admitting the
                           provenance without binding the frame emits a body that writes an unnamed
                           address, which is why COW_MODEL_STR_PROV_MEASURE refuses --apply. Putting them
                           in the run list would produce 82 refusals and a headline that counts them as
                           "attempted". So they stay out, and the file says so.

Deduped, validated (0x + 8 hex), sorted. Written where lift_relift_run.py --plan takes it.
"""
import io
import os
import re

ROOT = r"D:\Projects\ffxi_disassembly\Cow_kuluu_xi_anything"
WIP = os.path.join(ROOT, "cow", "wip")

INCLUDE = ["relift-accepted.txt"]
EXCLUDE = {"frame-read-clean82.txt":
           "needs the frame-BINDING feature (not built); STR_PROV_MEASURE refuses --apply on purpose",
           # Moved out of INCLUDE on 2026-11-11 after lift_relift_preflight caught it. They EMIT (the
           # pricing is sound) but they DO NOT COMPILE, and the reason is my own layout guard working as
           # designed: they were never lifted, so layout/lifted_addresses.h has no COW_ADDR_LIFT_* macro
           # for the addresses their bodies mention, and a restricted `--apply --entries` run is now
           # forbidden from rewriting that header (it would erase every other unit's macros - the 6.7 MB
           # incident). Remedy, in order of preference: (a) a whole-population lift run regenerates the
           # layout completely; (b) implement layout MERGE so a restricted run can add macros without
           # overwriting. Until one of those exists, these 23 are not a runnable queue, and pretending
           # otherwise would turn 23 refusals into a headline.
           "npush-newly-liftable.txt":
           "emits but does not compile: C2065 undeclared COW_ADDR_LIFT_* - needs a whole-population lift "
           "or layout merge (see preflight)"}
OUT = os.path.join(WIP, "relift-run-170.txt")
HEX = re.compile(r"^(?:0x)?[0-9a-f]{8}$")   # both forms appear in the queues; the runner's read_list()
                                            # normalises with .replace("0x",""), so BARE is canonical here


def read(p):
    return [l.strip() for l in io.open(p, encoding="utf-8") if l.strip()]


def main():
    taken, skipped = [], []
    for name in INCLUDE:
        p = os.path.join(WIP, name)
        rows = read(p)
        bad = [r for r in rows if not HEX.match(r)]
        if bad:
            raise SystemExit("REFUSING: %s has %d malformed entries (e.g. %r)" % (name, len(bad), bad[:3]))
        taken += [r.lower().replace("0x", "") for r in rows]   # one format on disk, whatever the input was
        print("  included %-32s %4d" % (name, len(rows)))
    for name, why in EXCLUDE.items():
        p = os.path.join(WIP, name)
        n = len(read(p)) if os.path.exists(p) else 0
        skipped.append((name, n, why))
        print("  EXCLUDED %-31s %4d  <- %s" % (name, n, why))

    uniq = sorted(set(taken))
    dupes = len(taken) - len(uniq)
    with io.open(OUT, "w", encoding="utf-8", newline="\n") as fh:
        for a in uniq:
            fh.write(a + "\n")
    print()
    print("  wrote %d unique entries -> %s%s"
          % (len(uniq), os.path.relpath(OUT, ROOT), ("  (deduped %d)" % dupes if dupes else "")))
    print()
    print("  WHY THE EXCLUDED LIST IS NOT PADDED IN: those 82 are gated on naming a frame-relative string")
    print("  destination, and admitting that without binding the frame emits code that writes an unnamed")
    print("  address. The measurement knob refuses --apply for exactly that reason, so a run containing")
    print("  them would report 82 attempted units that are really 82 refusals. A queue count is not a")
    print("  pipeline. When the frame binding exists, move the file in and pre-flight it then.")


if __name__ == "__main__":
    main()
