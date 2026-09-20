"""Central schemas and one tool-free format repair for every agent."""
import json
from typing import Callable, Any


class AgentOutputInvalid(ValueError):
    status = 'agent_output_invalid'


SCHEMAS = {
    'architect': {'target': str, 'rationale': str, 'tester_prompt': str, 'knowledge': str},
    'tester': {'found_bug': bool, 'report': str},
    'critic': {'verdict': str, 'critique': str},
    'rtl_fixer': {'changed': bool, 'report': str},
}


def parse_agent_response(agent_name: str, raw_output: str, schema: dict | None = None,
                         required_fields=None, enums: dict | None = None) -> dict:
    decoder = json.JSONDecoder()
    try:
        value = decoder.decode(raw_output)
    except json.JSONDecodeError:
        objects, cursor = [], 0
        while (start := raw_output.find('{', cursor)) >= 0:
            try:
                value, end = decoder.raw_decode(raw_output, start)
            except json.JSONDecodeError:
                cursor = start + 1
                continue
            cursor = end
            if isinstance(value, dict):
                objects.append(value)
        if len(objects) != 1:
            raise AgentOutputInvalid(f'{agent_name}: expected one JSON object; found {len(objects)}')
        value = objects[0]
    if not isinstance(value, dict):
        raise AgentOutputInvalid(f'{agent_name}: response must be an object')
    schema = SCHEMAS.get(agent_name, {}) if schema is None else schema
    for key in required_fields if required_fields is not None else schema:
        if key not in value or type(value[key]) is not schema.get(key, str):
            raise AgentOutputInvalid(f'{agent_name}: missing or invalid field {key}')
        if isinstance(value[key], str) and not value[key].strip():
            raise AgentOutputInvalid(f'{agent_name}: empty field {key}')
    enums = enums if enums is not None else ({'verdict': ['approve', 'revise', 'reject']} if agent_name == 'critic' else {})
    for key, allowed in enums.items():
        if value.get(key) not in allowed:
            raise AgentOutputInvalid(f'{agent_name}: invalid {key}; expected {allowed}')
    if agent_name == 'tester' and value['found_bug']:
        if not isinstance(value.get('evidence'), str) or not value['evidence'].strip():
            raise AgentOutputInvalid('tester: missing evidence')
        # Legacy script responses are still parseable, but deterministic preflight
        # rejects them unless they supply the independent execution contract.
        if 'reproducer_file' in value and (value['reproducer_file'] != 'reproducer.json' or 'reproducer' in value):
            raise AgentOutputInvalid('tester: use only reproducer_file="reproducer.json", without an inline reproducer')
        if (value.get('reproducer_file') != 'reproducer.json' and
                not isinstance(value.get('reproducer'), dict) and not isinstance(value.get('reproduce_command'), str)):
            raise AgentOutputInvalid('tester: missing reproducer contract')
    return value


def structured_response(agent: str, raw: str, repair: Callable[[str], str],
                        save: Callable[[str, Any], None]) -> dict:
    save('original.txt', raw)
    errors = []
    for attempt in range(2):
        try:
            parsed = parse_agent_response(agent, raw)
            save('parsed.json', parsed)
            return parsed
        except AgentOutputInvalid as exc:
            errors.append(str(exc))
            save('validation-errors.json', errors)
            if attempt:
                raise AgentOutputInvalid(f'{agent}: invalid after one format repair: {exc}') from exc
            schema = {key: kind.__name__ for key, kind in SCHEMAS[agent].items()}
            prompt = ('FORMAT REPAIR ONLY. Do not redo technical work, execute tools, or alter files. '
                      'Convert the original answer to one JSON object. Do not invent missing facts; '
                      'if the answer lacks required information leave it absent. Schema: '
                      + json.dumps(schema) + '. Critic verdict is approve, revise, or reject. '
                      'Tester found_bug=true also requires evidence and reproducer_file="reproducer.json" '
                      'for an existing saved contract, or an inline reproducer object. '
                      '\nValidation error: ' + str(exc) + '\nOriginal answer:\n' + raw)
            raw = repair(prompt)
            save('format-repair.txt', raw)
    raise AssertionError('unreachable')
