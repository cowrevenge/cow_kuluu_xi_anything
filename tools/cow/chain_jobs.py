"""Build chain.py job JSON for a list of entries: asks vtable_model who owns each one and says so.

The oracle is what makes a trivial body a conversion instead of a stub (README rule), so it is derived
from the same evidence the gate will re-check, never typed by hand.
"""
import json
import subprocess
import sys

import vtable_model as vm


def oracle_for(entry):
    target = int(entry, 16)
    tables = vm.enumerate_vtables(2)
    owners = vm.owners_of(target, tables)
    if owners:
        best = max(owners, key=lambda o: o['slots'])
        return 'vtable %s slot %d/%d - a virtual method' % (best['vtable'], best['slot'], len(best['targets']))
    hits = vm.callers_in_code(target)
    if hits:
        return 'called from %d code site(s): %s (callers_of.py)' % (
            len(hits), ', '.join('0x%08x' % h for h in hits[:3]))
    gent = vm.fcalls_index().get('%08x' % target)
    if gent:
        return 'called from the translation: %d call site(s) in generated/all/%s' % (gent[0], gent[1])
    refs = vm.data_refs(target)
    if refs:
        return 'data reference(s) in %s at %s - entered through a table or struct slot, not a call' % (
            refs[0][0], ', '.join('0x%08x' % a for _n, a in refs[:3]))
    return ''


def main():
    entries = sys.argv[1:]
    jobs = []
    for e in entries:
        o = oracle_for(e.lower())
        if not o:
            print('skip (unproven): %s' % e, file=sys.stderr)
            continue
        jobs.append({'entry': e.lower(), 'oracle': o, 'confidence': 'guess'})
    print(json.dumps(jobs))


if __name__ == '__main__':
    main()
