"""loopy as a stdio MCP server: three tools, so the loop is driven by tool results.

    python tools/cow/loopy/server.py        # speaks JSON-RPC 2.0 over stdin/stdout

Add to Goose as an extension (config.yaml):

    extensions:
      loopy:
        command: python
        args: ["C:/cow_kuluu_xi_anything/tools/cow/loopy/server.py"]
        description: The FFXiMain conversion loop: hands out the next unit and books the finished one.
        enabled: true

Every tool result carries the next job, so "this unit is done" is always a tool call and a summary
cannot end the loop. The heavy lifting is in loopy.py, which is the same code the CLI uses.
"""
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import loopy  # noqa: E402

PROTOCOL = '2024-11-05'
TOOLS = [
    {'name': 'loopy_next',
     'description': 'Hand out the unit to convert now: resumes any in_progress unit first, otherwise '
                    'picks status=todo with the lowest leaf_rank then the smallest size, marks it '
                    'in_progress, and returns the hex, where its generated body is and how many '
                    'instruction sites it has, its callee count, the attempts already used, the style '
                    'rules, and what to call next. Returns "STOP: ... end your turn now" when a halt '
                    'condition holds (STOP file, halted state, dirty tree, HEAD != origin/main, '
                    '10 consecutive failures).',
     'inputSchema': {'type': 'object', 'properties': {}, 'additionalProperties': False}},
    {'name': 'loopy_submit',
     'description': 'Submit a finished unit. loopy runs tools/cow/gate.ps1 itself. On PASS it does the '
                    'bookkeeping in code - ledger row to done, cow/names.csv, genwraps, loop.log, '
                    'status.py, one commit "cow: <hex> <name> [<confidence>]", fetch, fast-forward '
                    'push - and returns the NEXT unit in the same result. On FAIL it returns the gate '
                    'lines and attempts left; on the third failure it records status=failed, commits '
                    '"cow: <hex> failed: gate" and hands over the next unit.',
     'inputSchema': {'type': 'object',
                     'properties': {'entry': {'type': 'string', 'description': '0x100083b0'},
                                    'name': {'type': 'string', 'description': 'the function name'},
                                    'confidence': {'type': 'string',
                                                   'enum': ['confirmed', 'guess', 'placeholder']},
                                    'file': {'type': 'string',
                                             'description': 'repo-relative path of the .c you wrote'},
                                    'oracle': {'type': 'string',
                                               'description': 'evidence: file:line, string, caller'},
                                    'full_build': {'type': 'boolean',
                                                   'description': 'also run host/difftest/boot64 in the '
                                                                  'gate (default false)'},
                                    'verified': {'type': 'boolean'}},
                     'required': ['entry', 'name', 'file'], 'additionalProperties': False}},
    {'name': 'loopy_checkpoint',
     'description': 'Push work in progress so a compaction loses nothing: copies the unit file to '
                    'cow/wip/<hex>/, writes a NOTE, sets the ledger row to in_progress with the note, '
                    'regenerates the status docs, commits "cow: checkpoint <hex>: <note>" and pushes.',
     'inputSchema': {'type': 'object',
                     'properties': {'entry': {'type': 'string'}, 'note': {'type': 'string'}},
                     'required': ['entry', 'note'], 'additionalProperties': False}},
]


def call(name, args):
    if name == 'loopy_next':
        return loopy.job()
    if name == 'loopy_submit':
        return loopy.submit(args['entry'], args.get('name', 'unnamed'),
                            args.get('confidence', 'guess'), args['file'], args.get('oracle', ''),
                            full=bool(args.get('full_build')), verified=args.get('verified', True))
    if name == 'loopy_checkpoint':
        return loopy.checkpoint(args['entry'], args['note'])
    raise KeyError(name)


def reply(mid, result):
    json.dump({'jsonrpc': '2.0', 'id': mid, 'result': result}, sys.stdout)
    sys.stdout.write('\n')
    sys.stdout.flush()


def reply_err(mid, code, message):
    json.dump({'jsonrpc': '2.0', 'id': mid, 'error': {'code': code, 'message': message}}, sys.stdout)
    sys.stdout.write('\n')
    sys.stdout.flush()


def main():
    for line in sys.stdin:
        line = line.strip()
        if not line:
            continue
        try:
            msg = json.loads(line)
        except ValueError:
            continue
        mid, method = msg.get('id'), msg.get('method', '')
        params = msg.get('params') or {}
        try:
            if method == 'initialize':
                reply(mid, {'protocolVersion': PROTOCOL,
                            'capabilities': {'tools': {}},
                            'serverInfo': {'name': 'loopy', 'version': '1.0'}})
            elif method in ('tools/list', 'list_tools'):
                reply(mid, {'tools': TOOLS})
            elif method in ('tools/call', 'call_tool'):
                try:
                    out = call(params.get('name'), params.get('arguments') or {})
                    text = out if isinstance(out, str) else json.dumps(out, indent=1, ensure_ascii=False)
                    reply(mid, {'content': [{'type': 'text', 'text': text}], 'isError': False})
                except Exception as exc:                                  # noqa: BLE001
                    reply(mid, {'content': [{'type': 'text',
                                             'text': 'loopy error: %s: %s' % (type(exc).__name__, exc)}],
                                'isError': True})
            elif method == 'notifications/initialized':
                pass
            elif method == 'ping':
                reply(mid, {})
            elif mid is not None:
                reply_err(mid, -32601, 'method not found: %s' % method)
        except BrokenPipeError:
            return 0
        except Exception as exc:                                          # noqa: BLE001
            if mid is not None:
                reply_err(mid, -32603, str(exc))
    return 0


if __name__ == '__main__':
    os.chdir(os.path.dirname(os.path.dirname(os.path.dirname(HERE))))
    sys.exit(main())
