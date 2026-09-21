"""One writer per event, with secret redaction in both output formats."""
from datetime import datetime, timezone
import json
import logging
import os
from pathlib import Path
import re
from typing import Any


def redact(value: Any) -> Any:
    if isinstance(value, dict):
        return {k: ('[REDACTED]' if re.search(r'token|secret|password|authorization|api.?key|credential', k, re.I)
                    else redact(v)) for k, v in value.items()}
    if isinstance(value, (list, tuple)):
        return [redact(v) for v in value]
    if isinstance(value, str):
        value = re.sub(r'(?i)(Bearer\s+)[\w.\-/+=]+', r'\1[REDACTED]', value)
        value = re.sub(r'(?i)((?:api[_-]?key|access[_-]?token|authorization|password|secret)\s*[=:]\s*)[^\s,;]+',
                       r'\1[REDACTED]', value)
        value = re.sub(r'AIza[\w-]{20,}|sk-[\w-]{16,}', '[REDACTED]', value)
    return value


def configure_logger(name: str, stream=None) -> logging.Logger:
    logger = logging.getLogger(name)
    logger.setLevel(logging.INFO)
    logger.propagate = False
    if not any(getattr(h, '_wallyguard', False) for h in logger.handlers):
        handler = logging.StreamHandler(stream)
        handler._wallyguard = True
        logger.addHandler(handler)
    return logger


class QuietSuccessfulHealthChecks(logging.Filter):
    """Suppress only httpx's successful /healthz access line, never failures."""
    def filter(self, record):
        return not (record.levelno == logging.INFO and re.fullmatch(
            r'HTTP Request: GET https?://\S+/healthz "HTTP/[^ ]+ 200 OK"', record.getMessage()))


def quiet_health_checks():
    logger = logging.getLogger('httpx')
    if not any(isinstance(item, QuietSuccessfulHealthChecks) for item in logger.filters):
        logger.addFilter(QuietSuccessfulHealthChecks())


def event(path: Path, status: str, *, readable: bool = True, **fields: Any) -> dict:
    record = redact(dict(timestamp=datetime.now(timezone.utc).isoformat(),
                         event_type=fields.pop('event_type', status), status=status, **fields))
    path = Path(path)
    path.parent.mkdir(parents=True, exist_ok=True)
    data = (json.dumps(record, sort_keys=True) + '\n').encode()
    # One append syscall avoids interleaving parallel actor records.
    fd = os.open(path, os.O_WRONLY | os.O_CREAT | os.O_APPEND, 0o600)
    try:
        os.write(fd, data)
    finally:
        os.close(fd)
    if readable:
        logger = configure_logger('wallyguard.events')
        if status == 'API_RATE_LIMIT' and 'will_retry' in record:
            action = (f"retry in {record.get('retry_after')}s" if record['will_retry']
                      else 'stopping; retry policy exhausted or Retry-After exceeds wait budget')
            reason = ' '.join(str(record.get('error', '')).split())[:400]
            logger.info('%s stage=%s model=%s attempt=%s/%s; %s; %s', status,
                        record.get('stage', ''), record.get('model', ''),
                        record.get('attempt_number'), record.get('max_attempts'), action, reason)
        else:
            logger.info('%s stage=%s exit=%s', status,
                        record.get('stage', ''), record.get('raw_exit_code'))
    return record
