"""Smoke test for the loopy MCP server: start it, speak JSON-RPC, check the three tools answer.

    python tools/cow/loopy/smoke_test.py            # initialize, tools/list, loopy_next, status
    python tools/cow/loopy/smoke_test.py --submit 0x1012ac40 --name unk_return_noop \
        --file src/unsorted/cow_1012ac40_ret.c      # and a real submit through the protocol

It talks to server.py exactly as Goose would (one JSON object per line on stdin), so a protocol
mistake shows up here instead of costing a loop turn.
"""
import argparse
import json
import os
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
SERVER = os.path.join(HERE, 'server.py')


def rpc(proc, mid, method, params=None, expect_reply=True):
    msg = {'jsonrpc': '2.0', 'method': method}
    if params is not None:
        msg['params'] = params
    if expect_reply:
        msg['id'] = mid
    proc.stdin.write(json.dumps(msg) + '\n')
    proc.stdin.flush()
    if not expect_reply:
        return None
    line = proc.stdout.readline()
    if not line:
        raise SystemExit('server closed the pipe on %s' % method)
    return json.loads(line)


def attempts_check():
    """The brief's test for attempt memory: two failing submits, two approaches, both come back.

    Deliberately cheap and deliberately side-effect free:

      * the submits name a file that does not exist, so loopy returns FAIL from its pre-check BEFORE it
        touches the ledger - no row is set in_progress, no commit, no gate run. A test that had to mutate
        the ledger to prove a memory feature would be worse than the feature.
      * the entry is 0xdeadbeef, which is not a ledger row at all, so the attempts file it creates belongs
        to nobody real. A real unit's history is never written by this test, and never deleted by it either
        (append_attempt's whole point is that history survives a failed unit; deleting it here would be
        testing the opposite of the rule).
      * the job() packet is then checked for a REAL todo row, with the attempts file seeded and removed
        around it - a fixture, not the archive.
    """
    HERE_ = os.path.dirname(os.path.abspath(__file__))
    sys.path.insert(0, HERE_)
    import loopy

    bogus = '0xdeadbeef'
    fpath = 'src/unsorted/cow_deadbeef_attempt_fixture.c'   # never written on purpose
    approaches = ['fixture: rewrote the adapter prologue to replay the pops',
                  'fixture: kept the body and changed only the callee bridge cleanup']
    p = loopy.attempt_path(bogus)
    if os.path.isfile(p):
        os.remove(p)
    for ap_ in approaches:
        r = loopy.submit(bogus, 'smoke_attempt_fixture', 'placeholder', fpath, 'loopy smoke test',
                         approach=ap_)
        if r.get('verdict') != 'FAIL':
            print('  attempts_check: expected FAIL from a missing file, got %r' % r.get('verdict'))
            return False

    got = loopy.read_attempts(bogus)
    if len(got) != 2:
        print('  attempts_check: expected 2 recorded attempts, got %d' % len(got))
        return False
    if [g['approach'] for g in got] != list(reversed(approaches)):
        print('  attempts_check: not newest-first: %r' % [g['approach'][:40] for g in got])
        return False
    if not all(g.get('when') and g.get('gate_fail_lines') for g in got):
        print('  attempts_check: records missing when/gate_fail_lines')
        return False
    if 'does not exist' not in (got[0]['gate_fail_lines'][0] or ''):
        print('  attempts_check: gate_fail_lines does not carry the failure: %r'
              % got[0]['gate_fail_lines'])
        return False

    # The hand-off: the packet a later attempt actually reads must carry it. Built with packet_for rather
    # than job() so the assertion is about the packet's CONTENT and not accidentally about precheck, the
    # ledger, or the working tree being clean at this exact moment.
    row = next((r for r in loopy.rows() if r['status'] == 'todo'), None)
    if row is None:
        print('  attempts_check: no todo row available to test the packet')
        return False
    hex8 = row['entry'].lower().replace('0x', '')
    fp = loopy.attempt_path(hex8)
    existed = os.path.isfile(fp)
    backup = open(fp, encoding='utf-8').read() if existed else None
    try:
        with open(fp, 'w', encoding='utf-8', newline='\n') as fh:
            json.dump([{'when': '2026-01-01T00:00:00Z', 'approach': 'older fixture',
                        'gate_fail_lines': ['old'], 'file_sha': ''},
                       {'when': '2026-01-02T00:00:00Z', 'approach': 'newer fixture',
                        'gate_fail_lines': ['new'], 'file_sha': ''}], fh)
        packet = loopy.packet_for(hex8, row, 'new')
    finally:
        if existed:
            with open(fp, 'w', encoding='utf-8', newline='\n') as fh:
                fh.write(backup)
        elif os.path.isfile(fp):
            os.remove(fp)
    if not isinstance(packet, dict):
        print('  attempts_check: job() did not return a packet (%r)' % (str(packet)[:60],))
        return False
    pa = packet.get('previous_attempts')
    if not isinstance(pa, list) or [x.get('approach') for x in pa] != ['newer fixture', 'older fixture']:
        print('  attempts_check: packet.previous_attempts wrong: %r' % (pa,))
        return False
    if 'previous_attempts' not in packet.get('style', ''):
        print('  attempts_check: STYLE_HINT does not tell the reader to use previous_attempts')
        return False
    print('attempts    -> 2 submits recorded, newest-first, and carried into the job packet')
    return True


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--submit', default=None)
    ap.add_argument('--name', default='unnamed')
    ap.add_argument('--file', default='')
    ap.add_argument('--confidence', default='placeholder')
    ap.add_argument('--approach', default='smoke: one sentence on what this attempt did differently')
    ap.add_argument('--no-attempts', action='store_true',
                    help='skip the attempt-memory check (it is the part that runs loopy in-process)')
    args = ap.parse_args()

    p = subprocess.Popen([sys.executable, SERVER], cwd=os.path.dirname(os.path.dirname(HERE)),
                         stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE,
                         text=True, encoding='utf-8', bufsize=1)
    ok = True
    try:
        init = rpc(p, 1, 'initialize', {'protocolVersion': '2024-11-05', 'capabilities': {},
                                        'clientInfo': {'name': 'smoke', 'version': '1'}})
        info = init['result']['serverInfo']
        print('initialize  -> %s %s (protocol %s)'
              % (info['name'], info['version'], init['result']['protocolVersion']))
        rpc(p, None, 'notifications/initialized', {}, expect_reply=False)

        listed = rpc(p, 2, 'tools/list')
        names = [t['name'] for t in listed['result']['tools']]
        print('tools/list  -> %s' % ', '.join(names))
        for want in ('loopy_next', 'loopy_submit', 'loopy_checkpoint'):
            if want not in names:
                print('  MISSING %s' % want)
                ok = False

        nxt = rpc(p, 3, 'tools/call', {'name': 'loopy_next', 'arguments': {}})
        text = nxt['result']['content'][0]['text']
        print('loopy_next  ->\n%s' % '\n'.join('    ' + l for l in text.splitlines()[:9]))
        if nxt['result'].get('isError'):
            ok = False

        if not args.no_attempts:
            if not attempts_check():
                print('  ATTEMPT MEMORY CHECK FAILED')
                ok = False

        if args.submit:
            sub = rpc(p, 4, 'tools/call', {'name': 'loopy_submit', 'arguments': {
                'entry': args.submit, 'name': args.name, 'file': args.file,
                'confidence': args.confidence, 'oracle': 'loopy smoke test',
                # Sent through the protocol, so the test also proves the field survives the MCP surface
                # and is not just a Python keyword argument nobody calls.
                'approach': args.approach}})
            print('loopy_submit ->\n%s' % '\n'.join('    ' + l for l in
                                                    sub['result']['content'][0]['text'].splitlines()[:24]))
            if sub['result'].get('isError'):
                ok = False
    finally:
        try:
            p.stdin.close()
            p.terminate()
            p.wait(timeout=10)
        except Exception:                                              # noqa: BLE001
            p.kill()

    print('LOOPY SMOKE %s' % ('PASS' if ok else 'FAIL'))
    return 0 if ok else 1


if __name__ == '__main__':
    sys.exit(main())
