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


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--submit', default=None)
    ap.add_argument('--name', default='unnamed')
    ap.add_argument('--file', default='')
    ap.add_argument('--confidence', default='placeholder')
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

        if args.submit:
            sub = rpc(p, 4, 'tools/call', {'name': 'loopy_submit', 'arguments': {
                'entry': args.submit, 'name': args.name, 'file': args.file,
                'confidence': args.confidence, 'oracle': 'loopy smoke test'}})
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
