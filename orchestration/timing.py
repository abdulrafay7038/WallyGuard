"""Small timing records; durations overlap and must not be summed blindly."""
from contextvars import ContextVar
from functools import wraps
from pathlib import Path
import time

from .event_log import event


active_record = ContextVar('wallyguard_timing_record', default=None)


def record_event(path, kind, **fields):
    """Diagnostics must not change a verification result if their disk is full."""
    try:
        event(Path(path), kind, readable=False, **fields)
    except OSError:
        pass


def measured_worker(function):
    """Transport monotonic worker time back without comparing host clocks."""
    @wraps(function)
    def wrapped(*args, _wg_measure=False, **kwargs):
        if not _wg_measure:
            return function(*args, **kwargs)
        started = time.monotonic()
        value = function(*args, **kwargs)
        return {'__wg_timing__': True, 'value': value,
                'worker_seconds': time.monotonic() - started}
    wrapped._wg_measured = True
    return wrapped


def union_seconds(intervals):
    total, end = 0.0, None
    for start, stop in sorted(intervals):
        if stop < start:
            continue
        total += max(0, stop - max(start, end if end is not None else start))
        end = max(stop, end if end is not None else stop)
    return total / 1000


def export_timing(export):
    """OpenCode timestamps are milliseconds. Non-tool time is not pure LLM time."""
    assistant, tool, calls = [], [], 0
    for message in export.get('messages', []) or []:
        info = message.get('info', {})
        if info.get('role') != 'assistant':
            continue
        stamps = info.get('time') or {}
        if all(isinstance(stamps.get(key), (int, float)) for key in ('created', 'completed')):
            assistant.append((stamps['created'], stamps['completed']))
        for part in message.get('parts', []):
            if part.get('type') != 'tool':
                continue
            calls += 1
            stamps = (part.get('state') or {}).get('time') or {}
            if all(isinstance(stamps.get(key), (int, float)) for key in ('start', 'end')):
                tool.append((stamps['start'], stamps['end']))
    # Intersect: tool calls may outlive a message's completed timestamp.
    intersections = [(max(a, c), min(b, d)) for a, b in assistant for c, d in tool
                     if max(a, c) < min(b, d)]
    return dict(tool_calls=calls, tool_rpc_seconds=union_seconds(tool) if tool else None,
                assistant_non_tool_seconds=max(0, union_seconds(assistant) - union_seconds(intersections)) if assistant else None,
                llm_generation_seconds=None,
                note='Assistant non-tool time includes provider/CLI waits; pure generation is not exposed. '
                     'Async commands can overlap non-tool time; use command events for execution time.')
