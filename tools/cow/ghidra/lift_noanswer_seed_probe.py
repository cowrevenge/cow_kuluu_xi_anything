"""If no body feature explains the hangs, is it the STATE? (cow/seeds/<hex>.json)

The profile found nothing: 95% of the no-answer units are small, same as the population; the only 2x
signal (`indirect call`) covers ~20 units, and `size:big` covers about three. So the difference between a
row that hangs and a row that answers is probably not in the unit's body at all - and there is a
second, human-authored input that decides what a unit is asked to do: `cow/seeds/<hex>.json`, the
hand-written states with pinned arguments and pinned import answers.

If hangs are strongly associated with a seed file, the fix is in state generation (a pinned answer that
makes a counter spin) and not in the lifter. If they are NOT, the seed theory dies too and the group goes
back to being "needs a run to see where it spins" - which is a legitimate answer, not a failure to find
one.
"""
import io
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import lift_frame_predicates as FP  # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(HERE)))
RECORD = os.path.join(ROOT, "cow", "lift_proof_all.json")
SEEDS = os.path.join(ROOT, "cow", "seeds")


def seed_info(a):
    p = os.path.join(SEEDS, "%s.json" % a)
    if not os.path.exists(p):
        return None
    try:
        with io.open(p, encoding="utf-8", errors="replace") as fh:
            d = json.load(fh)
    except ValueError:
        return {"unreadable": True}
    states = d.get("states") or d if isinstance(d, list) else d.get("states", [])
    n = len(states) if isinstance(states, list) else 0
    pinned = sum(1 for st in (states if isinstance(states, list) else [])
                 if isinstance(st, dict) and (st.get("pins") or st.get("stub") or st.get("mem")))
    return {"states": n, "pinned": pinned, "keys": sorted(d.keys()) if isinstance(d, dict) else ["<list>"]}


def rate(units, label):
    with_seed = sum(1 for a in units if seed_info(a) is not None)
    pinned = 0
    for a in units:
        s = seed_info(a)
        if s and s.get("pinned"):
            pinned += 1
    n = max(1, len(units))
    print("  %-22s %4d units   with a seed file: %4d (%3.0f%%)   with pinned answers: %4d (%3.0f%%)"
          % (label, len(units), with_seed, 100.0 * with_seed / n, pinned, 100.0 * pinned / n))
    return with_seed / n, pinned / n


def main():
    with io.open(RECORD, encoding="utf-8", errors="replace") as fh:
        d = json.load(fh)
    if not os.path.isdir(SEEDS):
        sys.exit("REFUSING: %s does not exist - the seed theory cannot be tested here" % SEEDS)

    # Capability check, added after the first run of this tool printed a confident
    # "the seed theory is DEAD" that meant nothing. seed_info() itself was fine (it read
    # states/pinned off a real file), but every group scored 0% because the two populations
    # are DISJOINT: cow/seeds/ holds 31 files, all of them hand-written units under src/ with
    # human names (100083b0_counted, 100dbe30_net_clock_reset_accum, 102d7c47_rotation_matrix_
    # from_axis_angle), and NOT ONE of the 31 is a row in the lift ledger. A filter that cannot
    # judge its input reports a zero, and a zero reads exactly like a finding. So: prove there
    # is an intersection before comparing rates across it.
    seeds = sorted(f[:-5] for f in os.listdir(SEEDS) if f.endswith(".json"))
    if not seeds:
        sys.exit("REFUSING: no seed files - nothing to associate")
    if seed_info(seeds[0]) is None:
        sys.exit("REFUSING: seed_info() cannot read its own exemplar %s" % seeds[0])
    overlap = [a for a in seeds if a in d]
    print("  seeds on disk: %d   of them present as lift-ledger rows: %d" % (len(seeds), len(overlap)))
    if not overlap:
        print("  THE QUESTION IS UNANSWERABLE HERE, not refuted. Every seed belongs to a hand-written")
        print("  unit (src/<area>/cow_<addr>_<name>.c); the lift ledger contains no hand units at all,")
        print("  so 'seed file' and 'hang' have an empty intersection by construction. Saying the seed")
        print("  theory is dead off these numbers would be the dead-filter mistake again. Lifted units")
        print("  get their states from the fuzzers, so for THIS population the state input is generated,")
        print("  not hand-written - which is a fact worth having, and is not an association test.")
        return
    noanswer = sorted(k for k, v in d.items() if not v.get("pass")
                      and (v.get("why") or "") in ("hang", "no_row_output"))
    timeouts = sorted(k for k, v in d.items() if not v.get("pass")
                      and (v.get("why") or "") == "timeout")
    passing = sorted(k for k, v in d.items() if v.get("pass"))
    failing_compared = sorted(k for k, v in d.items() if not v.get("pass")
                              and (v.get("why") or "") not in ("hang", "no_row_output", "timeout"))
    if not noanswer:
        sys.exit("REFUSING: no no-answer rows")

    print("=" * 100)
    print("does the hand-written STATE explain the rows that never answered?")
    print("=" * 100)
    r_na, p_na = rate(noanswer, "no-answer (hang/etc)")
    r_to, p_to = rate(timeouts, "timeout")
    r_ok, p_ok = rate(passing[:1200], "passing (sample)")
    r_fl, p_fl = rate(failing_compared[:1200], "failing-compared (sample)")
    print()
    if p_na >= 2 * max(p_ok, p_fl, 0.01):
        print("  PINNED STATES are strongly associated with no-answer rows (%.0f%% vs %.0f%%/%.0f%%)."
              % (100 * p_na, 100 * p_ok, 100 * p_fl))
        print("  The suspect is state generation - a pinned answer that turns a bounded loop into an")
        print("  unbounded one - not the lifter. Next: take three such units and read the pinned values.")
    elif p_na <= 0.5 * max(p_ok, p_fl, 0.01):
        print("  The seed theory is DEAD too: no-answer rows are LESS likely to carry pinned states than")
        print("  the ones that answered. Whatever hangs, it is not the hand-written seeds.")
    else:
        print("  No association (pinned: no-answer %.0f%% vs passing %.0f%%, failing %.0f%%)."
              % (100 * p_na, 100 * p_ok, 100 * p_fl))
        print("  Two hypotheses tested, neither supported. The group goes back to 'needs a run to see")
        print("  where it spins' - which is an honest answer, and cheaper than a third guess.")


if __name__ == "__main__":
    main()
