"""Typed bounded retries retain the same assignment and workspace."""
from dataclasses import dataclass
from datetime import datetime, timezone
import time
import math
from typing import Callable, Any


class AgentCallFailure(RuntimeError):
    status = 'agent_call_failed'


class ProviderRateLimited(RuntimeError):
    status = 'api_rate_limit'
    def __init__(self, response):
        self.retry_after = response.api_metadata.get('retry_after')
        self.exit_code = response.returncode
        self.stdout, self.stderr = response.result, response.stderr
        self.transcript = response.stream_result
        self.api_metadata = response.api_metadata
        super().__init__(response.api_metadata.get('message', 'API rate limit'))
    def __reduce__(self):
        from types import SimpleNamespace
        response = SimpleNamespace(api_metadata=self.api_metadata, returncode=self.exit_code,
                                   result=self.stdout, stderr=self.stderr, stream_result=self.transcript)
        return type(self), (response,)


class MCPFailure(RuntimeError):
    status = 'mcp_server_timeout'


@dataclass(frozen=True)
class RetryPolicy:
    rate_retries: int = 4
    base_delay: float = 30
    max_delay: float = 300


def rate_delay(exc: Exception, attempt: int, policy: RetryPolicy) -> float:
    delay = getattr(exc, 'retry_after', None)
    if delay is None and getattr(exc, 'reset_time', None):
        reset = exc.reset_time
        if reset.tzinfo is None:
            reset = reset.replace(tzinfo=timezone.utc)
        delay = (reset - datetime.now(timezone.utc)).total_seconds()
    if delay is not None:
        try:
            parsed = float(delay)
            if math.isfinite(parsed) and parsed >= 0:
                return parsed
        except (ValueError, TypeError):
            pass
    return min(policy.max_delay, policy.base_delay * 2 ** attempt)


def retry_call(call: Callable[[], Any], is_rate_limit: Callable[[Exception], bool],
               emit: Callable[..., None], policy: RetryPolicy = RetryPolicy(),
               sleep: Callable[[float], None] = time.sleep):
    for attempt in range(policy.rate_retries + 1):
        try:
            response = call()
            if getattr(response, 'api_metadata', {}).get('error_type') == 'rate_limit':
                raise ProviderRateLimited(response)
            if not response.success or not response.result:
                emit('AGENT_CALL_FAILED', retry_count=attempt,
                     raw_exit_code=getattr(response, 'returncode', None),
                     stdout=getattr(response, 'result', ''), stderr=getattr(response, 'stderr', ''),
                     api_metadata=getattr(response, 'api_metadata', {}), transcript=getattr(response, 'stream_result', ''))
                raise AgentCallFailure('OpenCode failed; see stage diagnostics')
            return response
        except Exception as exc:
            if not isinstance(exc, ProviderRateLimited) and not is_rate_limit(exc):
                if not isinstance(exc, AgentCallFailure):
                    emit('AGENT_CALL_FAILED', error=str(exc), stderr=getattr(exc, 'stderr', ''),
                         raw_exit_code=getattr(exc, 'exit_code', None),
                         stdout=getattr(exc, 'stdout', ''), api_metadata=getattr(exc, 'api_metadata', {}))
                if isinstance(exc, (AgentCallFailure, MCPFailure)):
                    raise
                raise AgentCallFailure(f'{type(exc).__name__}: provider/CLI failure; see stage diagnostics') from exc
            delay = rate_delay(exc, attempt, policy)
            emit('API_RATE_LIMIT', retry_count=attempt, retry_after=delay,
                 raw_exit_code=getattr(exc, 'exit_code', None), error=str(exc),
                 stdout=getattr(exc, 'stdout', ''), stderr=getattr(exc, 'stderr', ''),
                 transcript=getattr(exc, 'transcript', ''), api_metadata=getattr(exc, 'api_metadata', {}))
            if attempt == policy.rate_retries or delay > policy.max_delay:
                # Do not retry earlier than a long Retry-After. Preserve the
                # candidate and stop rather than sleep beyond the retry budget.
                raise
            # Keep long waits interruptible and observable to the caller.
            wait_started = time.monotonic()
            while delay > 0:
                interval = min(60, delay)
                sleep(interval)
                delay -= interval
            emit('RATE_LIMIT_WAIT', retry_count=attempt, duration_seconds=time.monotonic() - wait_started)
