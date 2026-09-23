"""Conservative continuation policy for unattended discovery campaigns."""
from dataclasses import dataclass
import math


STOP_OUTCOMES = {'fix_attempts_exhausted', 'fix_rejected', 'regression_blocked',
                 'api_rate_limit', 'mcp_server_timeout', 'agent_failed',
                 'agent_output_invalid', 'invalid_artifacts', 'controller_error'}
RECOVERABLE = {'fix_attempts_exhausted', 'fix_rejected', 'agent_output_invalid'}
COMPLETED = {'confirmed', 'candidate_fix_verified', 'no_bug', 'no_grounded_lead', 'bug_rejected',
             'baseline_not_reproduced', 'baseline_not_reproducible', 'no_fix', 'test_repair_exhausted'}


@dataclass
class CampaignPolicy:
    hours: float = 0
    max_consecutive_failures: int = 3
    consecutive_failures: int = 0

    def __post_init__(self):
        if not math.isfinite(self.hours) or self.hours < 0:
            raise ValueError('WALLY_CAMPAIGN_HOURS must be finite and nonnegative')
        if self.max_consecutive_failures < 1:
            raise ValueError('WALLY_CAMPAIGN_MAX_FAILURES must be positive')

    def expired(self, elapsed: float) -> bool:
        return bool(self.hours) and elapsed >= self.hours * 3600

    def stop_reason(self, record: dict, receipt: dict | None) -> str | None:
        if (not isinstance(receipt, dict) or receipt.get('tag') != record['tag']
                or receipt.get('safe_to_release') is not True):
            return 'Archive was not acknowledged as complete; workspace must be retained'
        status = record['status']
        if status in COMPLETED:
            self.consecutive_failures = 0
            return None
        if status not in STOP_OUTCOMES:
            return f'Unexpected or unfinished outcome {status}; workspace retained'
        recoverable = status in RECOVERABLE or (
            status == 'invalid_artifacts' and record.get('artifact_guard_restored') is True)
        if not self.hours or not recoverable:
            return f'{status} requires attention; evidence retained'
        self.consecutive_failures += 1
        if self.consecutive_failures >= self.max_consecutive_failures:
            return f'{self.consecutive_failures} consecutive failed investigations; stopping repeated failures'
        return None
