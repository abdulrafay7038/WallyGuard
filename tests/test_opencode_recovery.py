from copy import deepcopy
import json
from types import SimpleNamespace
import unittest
from unittest.mock import Mock

from orchestration.opencode_recovery import MODEL_TURN_ERROR, CONTINUATION, continuation_session, clear_recovered_error
from orchestration.tool_runtime import DiagnosticOpenCodeLLM


def error(message=MODEL_TURN_ERROR, code=400):
    return dict(name='APIError', data=dict(message=message, statusCode=code))


def stream(message=MODEL_TURN_ERROR, code=400, session='ses_example'):
    return json.dumps(dict(type='error', sessionID=session, error=error(message, code))) + '\n'


class RecoveryTests(unittest.TestCase):
    def test_only_exact_error_and_safe_session_are_recoverable(self):
        self.assertEqual(continuation_session(stream()), 'ses_example')
        for text in (stream('Bad API key', 401), stream('Invalid model'), stream(code=429),
                     stream(session='--bad'), '{}', stream() + '{"type":"text"}\n'):
            self.assertIsNone(continuation_session(text))
        pending = json.dumps(dict(type='tool_use', sessionID='ses_example', part=dict(state=dict(status='running'))))
        self.assertIsNone(continuation_session(pending + '\n' + stream()))

    def llm(self, responses):
        llm = object.__new__(DiagnosticOpenCodeLLM)
        llm.timeout_seconds = 60
        llm._performance = {'commands': []}
        llm._turn_recovery = None
        llm._capture_once = Mock(side_effect=responses)
        return llm

    def test_resume_same_session_once_without_repeating_original_prompt(self):
        failed = SimpleNamespace(stdout=stream(), stderr='provider error', returncode=1)
        success = SimpleNamespace(stdout='new stream', stderr='', returncode=0)
        llm = self.llm([failed, success])
        command = ['opencode', 'run', '--model', 'google-vertex/example', '--format', 'json', 'original assignment']
        env = {'OPENCODE_CONFIG': '/same/config'}
        self.assertIs(llm._capture(command, env), success)
        args, kwargs = llm._capture_once.call_args
        self.assertEqual(args[0], command[:-1] + ['--session', 'ses_example', CONTINUATION])
        self.assertIs(args[1], env)
        self.assertGreater(kwargs['timeout'], 0)
        self.assertLessEqual(kwargs['timeout'], 60)
        self.assertEqual(llm._turn_recovery['stdout'], failed.stdout)
        self.assertEqual(llm._performance['protocol_recovery_attempts'], 1)

    def test_repeated_failure_is_returned_without_unbounded_retries(self):
        failed = SimpleNamespace(stdout=stream(), stderr='provider error', returncode=1)
        llm = self.llm([failed, failed, failed])
        self.assertIs(llm._capture(['opencode', 'run', 'prompt'], {}), failed)
        self.assertEqual(llm._capture_once.call_count, 2)
        llm._capture(['opencode', 'export', 'ses_example'], {})
        self.assertEqual(llm._capture_once.call_count, 3)

    def test_auth_and_generic_400_never_retry(self):
        for raw in (stream('Permission denied', 403), stream('Invalid argument'), stream(code=500)):
            failed = SimpleNamespace(stdout=raw, stderr='error', returncode=1)
            llm = self.llm([failed])
            self.assertIs(llm._capture(['opencode', 'run', 'prompt'], {}), failed)
            llm._capture_once.assert_called_once()

    def test_only_recovered_historical_error_is_removed(self):
        old = dict(info=dict(role='assistant', error=error()), parts=[])
        user = dict(info=dict(role='user'), parts=[dict(type='text', text=CONTINUATION)])
        new_error = dict(info=dict(role='assistant', error=error()), parts=[])
        export = dict(info=dict(id='ses_example'), messages=[old, user, new_error])
        before = deepcopy(export)
        cleaned = clear_recovered_error(export, 'ses_example')
        self.assertNotIn('error', cleaned['messages'][0]['info'])
        self.assertIn('error', cleaned['messages'][2]['info'])
        self.assertEqual(export, before)
        self.assertEqual(clear_recovered_error(export, 'ses_other'), export)
        export['messages'][1]['parts'][0]['text'] = 'Different user message'
        self.assertEqual(clear_recovered_error(export, 'ses_example'), export)
        export['messages'][1]['parts'][0]['text'] = CONTINUATION
        export['messages'][0]['info']['error'] = error('Some other error')
        self.assertIn('error', clear_recovered_error(export, 'ses_example')['messages'][0]['info'])


if __name__ == '__main__':
    unittest.main()
