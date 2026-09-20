"""Bounded same-stage MCP recovery, independently testable without a cluster."""
from typing import Callable, Any
import time
from .retry_policy import MCPFailure


def with_tool_recovery(create: Callable[[], Any], call: Callable[[Any], Any], emit: Callable[..., None]):
    for attempt in range(2):
        tool = None
        try:
            started = time.monotonic()
            tool = create()
            tool.ready()
            emit('TOOL_READY_TIMING', retry_count=attempt, duration_seconds=time.monotonic() - started)
            result = call(tool)
            tool.ready()
            return result
        except MCPFailure as exc:
            emit('MCP_SERVER_TIMEOUT', retry_count=attempt, error=str(exc))
            if attempt:
                raise
        finally:
            if tool is not None:
                started = time.monotonic()
                tool.stop()
                emit('TOOL_STOP_TIMING', retry_count=attempt, duration_seconds=time.monotonic() - started)
    raise AssertionError('unreachable')
