"""Typed bounded retries retain the same assignment and workspace."""
from dataclasses import dataclass
from datetime import datetime, timezone
import time
import math
from typing import Callable, Any


class AgentCallFailure(RuntimeError):
    status = 'agent_call_failed'

    def __init__(self, message, api_metadata=None):
        self.api_metadata = api_metadata or {}
        super().__init__(message)

    def __reduce__(self):
        return type(self), (str(self), self.api_metadata)


class EmptyResponseFailure(AgentCallFailure):
    status = 'agent_empty_response'


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
    empty_retries: int = 1
    empty_delay: float = 5


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
    rate_attempt = 0
    empty_attempt = 0
    while True:
        try:
            response = call()
            if getattr(response, 'api_metadata', {}).get('error_type') == 'rate_limit':
                raise ProviderRateLimited(response)
            if not response.result and (response.success or getattr(response, 'returncode', None) == 0):
                raise EmptyResponseFailure('OpenCode returned an empty response',
                                           getattr(response, 'api_metadata', {}))
            if not response.success:
                emit('AGENT_CALL_FAILED', retry_count=rate_attempt,
                     raw_exit_code=getattr(response, 'returncode', None),
                     stdout=getattr(response, 'result', ''), stderr=getattr(response, 'stderr', ''),
                     api_metadata=getattr(response, 'api_metadata', {}), transcript=getattr(response, 'stream_result', ''),
                     protocol_recovery=getattr(response, 'protocol_recovery', None))
                from .event_log import redact
                metadata = getattr(response, 'api_metadata', {})
                reason = redact(str(metadata.get('message') or getattr(response, 'stderr', '') or 'No usable response'))[:500]
                raise AgentCallFailure(f'OpenCode failed: {reason}; see stage diagnostics', metadata)
            return response
        except EmptyResponseFailure as exc:
            will_retry = empty_attempt < policy.empty_retries
            emit('AGENT_EMPTY_RESPONSE', retry_count=empty_attempt,
                 attempt_number=empty_attempt + 1,
                 max_attempts=policy.empty_retries + 1,
                 will_retry=will_retry, error=str(exc),
                 api_metadata=exc.api_metadata)
            if not will_retry:
                raise
            sleep(policy.empty_delay)
            empty_attempt += 1
        except Exception as exc:
            if not isinstance(exc, ProviderRateLimited) and not is_rate_limit(exc):
                if not isinstance(exc, AgentCallFailure):
                    emit('AGENT_CALL_FAILED', error=str(exc), stderr=getattr(exc, 'stderr', ''),
                         raw_exit_code=getattr(exc, 'exit_code', None),
                         stdout=getattr(exc, 'stdout', ''), api_metadata=getattr(exc, 'api_metadata', {}))
                if isinstance(exc, (AgentCallFailure, MCPFailure)):
                    raise
                raise AgentCallFailure(f'{type(exc).__name__}: provider/CLI failure; see stage diagnostics') from exc
            delay = rate_delay(exc, rate_attempt, policy)
            will_retry = rate_attempt < policy.rate_retries and delay <= policy.max_delay
            emit('API_RATE_LIMIT', retry_count=rate_attempt, retry_after=delay,
                 attempt_number=rate_attempt + 1, max_attempts=policy.rate_retries + 1,
                 will_retry=will_retry,
                 raw_exit_code=getattr(exc, 'exit_code', None), error=str(exc),
                 stdout=getattr(exc, 'stdout', ''), stderr=getattr(exc, 'stderr', ''),
                 transcript=getattr(exc, 'transcript', ''), api_metadata=getattr(exc, 'api_metadata', {}))
            if not will_retry:
                # Do not retry earlier than a long Retry-After. Preserve the
                # candidate and stop rather than sleep beyond the retry budget.
                raise
            # Keep long waits interruptible and observable to the caller.
            wait_started = time.monotonic()
            while delay > 0:
                interval = min(60, delay)
                sleep(interval)
                delay -= interval
            emit('RATE_LIMIT_WAIT', retry_count=rate_attempt, duration_seconds=time.monotonic() - wait_started)
            rate_attempt += 1
