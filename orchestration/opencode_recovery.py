"""Bounded, progress-aware Gemini continuation; never retry arbitrary 400s."""
from copy import deepcopy
import json
import re

MODEL_TURN_ERROR = 'Requests ending with a model turn are not supported.'
CONTINUATION = ('Continue the existing assignment from the completed tool results. '
                'The previous request failed because the provider rejected a conversation '
                'ending with a model turn; this user message resumes that conversation. '
                'Do not restart exploration or repeat completed commands. Check existing '
                'artifacts before any further edits. Preserve all original constraints and '
                'return the originally requested structured answer when ready.')


def completed_tool_ids(stdout: str) -> set[str]:
    """Count only identified completed calls, not reasoning or error events."""
    calls = set()
    for line in stdout.splitlines():
        try:
            entry = json.loads(line)
        except ValueError:
            continue
        if not isinstance(entry, dict) or entry.get('type') != 'tool_use':
            continue
        part = entry.get('part') or {}
        call_id = part.get('callID')
        if isinstance(call_id, str) and call_id and (part.get('state') or {}).get('status') == 'completed':
            calls.add(call_id)
    return calls


def continuation_session(stdout: str) -> str | None:
    events = []
    for line in stdout.splitlines():
        try:
            value = json.loads(line)
            if isinstance(value, dict):
                events.append(value)
        except ValueError:
            continue
    if not events or events[-1].get('type') != 'error':
        return None
    last = events[-1]
    data = (last.get('error') or {}).get('data', {})
    session = last.get('sessionID', '')
    if (data.get('statusCode') != 400 or data.get('message') != MODEL_TURN_ERROR
            or not isinstance(session, str) or not re.fullmatch(r'ses_[A-Za-z0-9]+', session)):
        return None
    for entry in events:
        if entry.get('sessionID') not in (None, session):
            return None
        if entry.get('type') == 'tool_use':
            if (entry.get('part', {}).get('state') or {}).get('status') not in {'completed', 'error'}:
                return None
    return session


def clear_recovered_error(export: dict, session: str) -> dict:
    """Ignore only the exact old error before the newly appended user turn.

    OpenCode exports the whole session, including historical errors. New errors
    (and every other kind of old error) must still reach normal classification.
    """
    if export.get('info', {}).get('id') != session:
        return export
    messages = export.get('messages', []) or []
    boundaries = [i for i, message in enumerate(messages)
                  if message.get('info', {}).get('role') == 'user'
                  # OpenCode 1.18.25 can retain literal double quotes around
                  # CLI prompt text. Match only these two exact representations;
                  # substring matches could suppress an unrelated old failure.
                  and any(part.get('type') == 'text' and part.get('text') in
                          (CONTINUATION, '"' + CONTINUATION + '"')
                          for part in message.get('parts', []))]
    if not boundaries:
        return export
    cleaned = deepcopy(export)
    for message in cleaned['messages'][:boundaries[-1]]:
        info = message.get('info', {})
        error = info.get('error') or {}
        data = error.get('data', {})
        if info.get('role') == 'assistant' and data.get('statusCode') == 400 and data.get('message') == MODEL_TURN_ERROR:
            info.pop('error')
    return cleaned
