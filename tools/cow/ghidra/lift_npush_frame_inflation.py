"""Is the argcount_mismatch refusal class mostly a BACKWARD-WALK artifact? Measure, don't opine.

The exemplar, read by eye off generated/all/funcs_052.c (f_10316337, the function behind 116 booked `hang`
rows):

    10316337  push ebp            <- frame
    10316338  mov ebp, esp
    1031633a  sub esp, 4
    1031633d  push ebx   \
    1031633e  push esi    } the adapter's own head saves - NOT arguments
    1031633f  push edi   /
    10316340  cld
    10316341  mov dword ptr [ebp - 4], eax
    10316344  xor eax, eax
    10316346  push eax            \
    10316347  push eax             |
    10316348  push eax             |
    10316349  push dword [ebp-4]   } EIGHT argument pushes
    1031634c  push dword [ebp+0x14]|
    1031634f  push dword [ebp+0x10]|
    10316352  push dword [ebp+0xc] |
    10316355  push dword [ebp+8]  /
    10316358  call 0x10320fb3
    1031635d  add esp, 0x20        <- cleanup: 0x20 / 4 = 8, agreeing with the eight pushes exactly

gen_model's backward walk (gen_model.py:250) counts `push` instructions from the call upward and stops at
the nearest control-flow boundary or at `j < m["prologue_len"]`. This unit's `push ebx/esi/edi` sit BELOW
the prologue boundary, so the walk walks straight through them: `npush_walk` = 8 + 3 = **11**, and the
site records npush=11 while the truth is 8. `lift.py:828` then refuses with
`argcount_mismatch_10320fb3_ghidra4_push11`, and `_push_values` bails at `pushed-vs-npush` because the
8 things it can name do not match a count of 11.

So the refusal this unit got is not "Ghidra disagrees with the bytes about an argument count" - the
philosophical problem that `cow/skip_patterns.txt` parked the class for. It is a walk that counted the
frame. Two measurements in the same site already know the answer (`cleanup/4` = 8, and `npush_delta` when
the esp track is reliable); the code simply uses `npush_walk` (`npush = npush_walk`, line 270).

That distinction decides whether anyone should touch it, so this tool measures it across every call site
in the corpus rather than arguing from one unit:

  WALK_RIGHT     npush_walk == cleanup/4 - the walk was already correct (the norm must be this, or the
                 recompiler could not have worked at all)
  FRAME_INFLATED npush_walk - (callee-saved register pushes the walk counted) == cleanup/4 - the walk ate
                 the frame saves, which is the exemplar's shape
  OTHER          neither - something else is wrong, and it is NOT this defect, so it is not this fix

Tripwires: the exemplar must reproduce the by-eye reading (npush_walk 11, cleanup/4 8) or the tool refuses
to print a single percentage; and the FRAME_INFLATED bucket must be able to fire at all.

What a big FRAME_INFLATED number would and would not license: it licenses making the walk stop at the
frame boundary - a MEASUREMENT fix, which is what the parked entry asked for ("make push_values measure
instead of guess"). It does NOT license touching the arg-count comparison itself, which is the thing
`loop-notes.md:303` says not to invent a rule about. The guard stays; it just stops firing on a miscount.
"""
import collections
import io
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import gen_model  # noqa: E402
import trivial_audit  # noqa: E402  (body_index(): the same body dict lift.py reads)

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
RECORD = os.path.join(ROOT, "cow", "lift_proof_all.json")

CALLEE_SAVED = ("ebx", "esi", "edi", "ebp")
EX_UNIT, EX_TARGET, EX_WALK, EX_CLEANUP_WORDS = "10316337", "10320fb3", 11, 8


def main():
    bodies = trivial_audit.body_index()
    if not bodies:
        sys.exit("REFUSING: body_index() is empty - nothing to measure")

    # --- capability tripwire: reproduce the by-eye reading of the exemplar or die trying
    bl = bodies.get(EX_UNIT)
    if not bl:
        sys.exit("REFUSING: f_%s is not in the body index - cannot check the exemplar" % EX_UNIT)
    m = gen_model.model_generated(bl)
    site = [s for s in (m.get("call_sites") or [])
            if s.get("target") == int(EX_TARGET, 16)]
    if not site:
        sys.exit("REFUSING: no call site to 0x%s inside f_%s - the exemplar reading is wrong"
                 % (EX_TARGET, EX_UNIT))
    s = site[0]
    got_walk, got_cleanup = s.get("npush_walk"), (s.get("cleanup") or 0) // 4
    if got_walk != EX_WALK or got_cleanup != EX_CLEANUP_WORDS:
        sys.exit("REFUSING: exemplar site says npush_walk=%s cleanup/4=%s, but the file was read as %d "
                 "and %d. Either the file changed under me or my reading was wrong."
                 % (got_walk, got_cleanup, EX_WALK, EX_CLEANUP_WORDS))
    print("tripwire: f_%s -> 0x%s reproduces by-eye (npush_walk=%d, cleanup/4=%d, Ghidra args=4)"
          % (EX_UNIT, EX_TARGET, got_walk, got_cleanup))
    print("          => the walk counts the frame; the refusal 'argcount_mismatch_%s_ghidra4_push11'"
          % EX_TARGET)
    print("             is a MISCOUNT, not Ghidra disagreeing about an argument count.")

    # --- the census
    tally = collections.Counter()
    sites_total = 0
    examples = collections.defaultdict(list)
    for addr, bl in sorted(bodies.items()):
        try:
            mm = gen_model.model_generated(bl)
        except Exception:
            continue
        ins = mm.get("ins") or []
        for s in (mm.get("call_sites") or []):
            tgt = s.get("target")
            if tgt is None:
                continue                      # indirect: no callee to compare against
            cleanup = s.get("cleanup") or 0
            if cleanup <= 0:
                continue                      # cdecl-ish: cleanup says nothing, stay out of the census
            walk = s.get("npush_walk")
            if walk is None:
                continue
            sites_total += 1
            want = cleanup // 4
            # how many of the counted pushes were callee-saved REGISTER pushes (the frame's, not the
            # arguments'): the walk's own record is `pushed`, nearest-the-call-first
            pushed = s.get("pushed") or []
            inflated = sum(1 for op in pushed
                           if op.strip().split()[0].rstrip(',') in CALLEE_SAVED)
            if walk == want:
                tally["WALK_RIGHT"] += 1
            elif walk - inflated == want and inflated > 0:
                tally["FRAME_INFLATED"] += 1
                if len(examples["FRAME_INFLATED"]) < 12:
                    examples["FRAME_INFLATED"].append((addr, "%08x" % tgt, walk, want, inflated))
            else:
                tally["OTHER"] += 1
                if len(examples["OTHER"]) < 6:
                    examples["OTHER"].append((addr, "%08x" % tgt, walk, want, inflated))

    if not sites_total:
        sys.exit("REFUSING: no direct call sites with a cleanup constant anywhere - the census cannot "
                 "see anything, so its zeros would mean nothing")

    print()
    print("=" * 100)
    print("direct call sites with a cleanup constant: %d" % sites_total)
    print("=" * 100)
    for k in ("WALK_RIGHT", "FRAME_INFLATED", "OTHER"):
        n = tally[k]
        print("  %-15s %6d  (%5.1f%%)" % (k, n, 100.0 * n / sites_total))

    if tally["FRAME_INFLATED"] == 0:
        print("\n  FRAME_INFLATED is empty. The exemplar is then a one-off, not a class - and a")
        print("  one-off does not justify touching a walk that %d sites agree with." % tally["WALK_RIGHT"])
        return

    print("\n  FRAME_INFLATED exemplars (unit, callee, walk, cleanup/4, callee-saved pushes eaten):")
    for a, t, w, want, inf in examples["FRAME_INFLATED"]:
        print("    f_%s -> f_%s   walk=%2d  truth=%2d  ate %d frame save(s)" % (a, t, w, want, inf))
    if tally["OTHER"]:
        print("  OTHER (not this defect - do not fold them in):")
        for a, t, w, want, inf in examples["OTHER"]:
            print("    f_%s -> f_%s   walk=%2d  cleanup/4=%2d  ate %d" % (a, t, w, want, inf))

    print()
    print("  WHAT THIS LICENSES: making the backward walk stop at the frame boundary, so npush measures")
    print("  the arguments instead of the arguments plus the saves. That is the 'make push_values measure")
    print("  instead of guess' fix the parked entry asked for. WHAT IT DOES NOT LICENSE: editing the")
    print("  ghidra-vs-pushes comparison, or trusting cleanup blindly (it is 0 for cdecl and wrong for")
    print("  thisp-returned-via-edx - which is why OTHER is kept separate and never counted as helped).")


if __name__ == "__main__":
    main()
