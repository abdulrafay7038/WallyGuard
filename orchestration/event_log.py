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
        configure_logger('wallyguard.events').info('%s stage=%s exit=%s', status,
            record.get('stage', ''), record.get('raw_exit_code'))
    return record
