"""Completed stage answers survive the exact provider failure, never missing evidence."""
import asyncio
import io
import json
from pathlib import Path
import pickle
import tempfile
from types import SimpleNamespace
import unittest
from contextlib import redirect_stdout
from unittest.mock import Mock, patch

import loop
from orchestration.agent_protocol import AgentOutputInvalid
from orchestration.artifact_guard import ArtifactViolation
from orchestration.opencode_recovery import MODEL_TURN_ERROR
from orchestration.retry_policy import AgentCallFailure, retry_call
from orchestration.tool_runtime import ManagedBashTool, ToolServer

ANSWER = dict(verdict='reject', critique='The expected value constrains a legal implementation choice.')
METADATA = dict(error_type='invalid_request', status_code=400, message=MODEL_TURN_ERROR)


class SubmissionToolTests(unittest.IsolatedAsyncioTestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.tool = object.__new__(ManagedBashTool)
        self.tool.role = 'critic'
        self.tool.artifact_dir = self.temp.name
        self.tool._metrics = dict(commands=3)
        self.tool._jobs = {}

    async def submit(self, value=ANSWER):
        return json.loads(await self.tool.submit_result(json.dumps(value)))

    async def test_complete_submission_is_immutable_and_blocks_commands(self):
        self.assertEqual((await self.submit())['status'], 'RESULT_ACCEPTED')
        original = json.loads((Path(self.temp.name)/'submitted-result.json').read_text())
        self.assertEqual(original['result'], ANSWER)
        self.assertEqual(original['commands'], 3)
        self.assertEqual((await self.submit())['status'], 'RESULT_ACCEPTED')
        self.assertEqual((await self.submit(dict(ANSWER, verdict='approve')))['status'], 'RESULT_ALREADY_SUBMITTED')
        with patch('orchestration.tool_runtime.run_command') as command:
            result = json.loads(await self.tool.run_command('touch forbidden'))
            command.assert_not_called()
        self.assertEqual(result['status'], 'RESULT_ALREADY_SUBMITTED')
        self.assertEqual(self.tool._metrics['commands'], 3)
        self.assertEqual(self.tool._submitted_result, original)
        self.assertEqual(json.loads(await self.tool.validate_reproducer())['status'], 'RESULT_ALREADY_SUBMITTED')

    async def test_invalid_or_partial_json_never_freezes_or_saves(self):
        for raw in ('{"verdict":"approve",', '{}', '[]', '{"verdict":"approve","critique":3}',
                    json.dumps(dict(ANSWER, verdict='maybe'))):
            self.assertEqual(json.loads(await self.tool.submit_result(raw))['status'], 'RESULT_INVALID')
            self.assertIsNone(getattr(self.tool, '_submitted_result', None))
        self.assertFalse((Path(self.temp.name)/'submitted-result.json').exists())
        self.assertEqual((await self.submit())['status'], 'RESULT_ACCEPTED')

    async def test_running_command_must_finish_before_submission(self):
        job = asyncio.get_running_loop().create_future()
        self.tool._jobs['job'] = job
        result = await self.submit()
        self.assertEqual(result, dict(status='BUSY', job_id='job', note='Wait for the command before submitting.'))
        self.assertIsNone(getattr(self.tool, '_submitted_result', None))
        job.set_result('done')
        self.assertEqual((await self.submit())['status'], 'RESULT_ACCEPTED')

    async def test_disk_write_failure_cannot_acknowledge_submission(self):
        with patch.object(Path, 'write_text', side_effect=OSError('disk full')):
            self.assertEqual((await self.submit())['status'], 'INFRA_FAILURE')
        self.assertIsNone(getattr(self.tool, '_submitted_result', None))

    async def test_controller_reads_actor_memory_not_mutable_disk_copy(self):
        await self.submit()
        server = ToolServer.__ray_metadata__.modified_class()
        server.tool = self.tool
        (Path(self.temp.name)/'submitted-result.json').write_text('{"result":{"verdict":"approve"}}')
        self.assertEqual(server.submitted_result()['result'], ANSWER)


class ControllerSubmissionTests(unittest.TestCase):
    def ask(self, checkpoint, failure=None):
        self.tool = Mock()
        self.tool.name = 'critic_fixture'
        self.tool.submitted_result.return_value = checkpoint
        self.saved = {}
        self.tool.save.side_effect = self.saved.__setitem__
        response = SimpleNamespace(result='done', returncode=0, stderr='', stream_result='original stream')
        with patch.object(loop, 'ManagedBashTool', return_value=self.tool), \
             patch.object(loop, 'DiagnosticOpenCodeLLM'), patch.object(loop, 'remote'), \
             patch.object(loop, 'prompt_with_rate_limit_retry', side_effect=failure, return_value=response):
            return loop.ask_agent('critic', '/fixture', loop.CRITIC_PROMPT,
                                  dict(test_dir='/fixture/run', models={'critic':'mock'}))

    def checkpoint(self, result=ANSWER):
        return dict(role='critic', result=result, commands=73, submitted_at='fixture')

    def test_normal_completion_uses_submitted_answer_without_format_repair(self):
        self.assertEqual(self.ask(self.checkpoint()), ANSWER)
        self.assertEqual(self.saved['parsed.json'], ANSWER)
        self.assertEqual(self.saved['cli-diagnostics.json']['transcript'], 'original stream')
        self.tool.stop.assert_called_once()

    def test_exact_model_turn_error_recovers_only_complete_saved_answer(self):
        failure = AgentCallFailure('OpenCode failed', METADATA)
        self.assertEqual(self.ask(self.checkpoint(), failure), ANSWER)
        self.tool.emit.assert_called_once()
        self.assertEqual(self.tool.emit.call_args.args[0], 'AGENT_RESULT_RECOVERED')
        self.assertEqual(self.tool.emit.call_args.kwargs['api_metadata'], METADATA)
        self.tool.stop.assert_called_once()
        for checkpoint in (None,):
            with self.assertRaises(AgentCallFailure):
                self.ask(checkpoint, failure)
        with self.assertRaises(AgentOutputInvalid):
            self.ask(self.checkpoint({'verdict':'approve'}), failure)
        with self.assertRaises(AgentOutputInvalid):
            self.ask(dict(self.checkpoint(), role='tester'), failure)

    def test_unrelated_failures_cannot_use_submitted_answer(self):
        for metadata in ({}, dict(METADATA, message='Invalid request'), dict(METADATA, status_code=500),
                         dict(METADATA, error_type='authentication_failed'),
                         dict(METADATA, error_type='billing_error'), dict(METADATA, status_code=403)):
            with self.subTest(metadata=metadata), self.assertRaises(AgentCallFailure):
                self.ask(self.checkpoint(), AgentCallFailure('failed', metadata))
            self.tool.submitted_result.assert_not_called()
        with self.assertRaises(OSError):
            self.ask(self.checkpoint(), OSError('connection lost'))

    def test_retry_policy_keeps_raw_failure_and_typed_metadata_across_ray_serialization(self):
        emit = Mock()
        response = SimpleNamespace(success=False, result='', returncode=1, stderr='',
                                   api_metadata=METADATA, stream_result='partial output', protocol_recovery={'session':'ses_example'})
        with self.assertRaises(AgentCallFailure) as caught:
            retry_call(lambda: response, lambda exc: False, emit)
        restored = pickle.loads(pickle.dumps(caught.exception))
        self.assertEqual(restored.api_metadata, METADATA)
        self.assertEqual(emit.call_args.kwargs['transcript'], 'partial output')
        self.assertEqual(emit.call_args.kwargs['raw_exit_code'], 1)

    def test_recovered_stage_still_fails_artifact_guard(self):
        def remote(function, *args):
            if function.__name__ == 'stage_snapshot':
                return '/fixture/guard'
            if function.__name__ == 'critic':
                return self.ask(self.checkpoint(), AgentCallFailure('failed', METADATA))
            if function.__name__ == 'stage_finish':
                raise ArtifactViolation('unauthorized source change')
            raise AssertionError(function.__name__)
        with patch.object(loop, 'remote', side_effect=remote), redirect_stdout(io.StringIO()):
            with self.assertRaises(ArtifactViolation):
                loop.agent_stage(loop.critic, '/fixture', dict(test_dir='/fixture/run', phase='bug_review'))


if __name__ == '__main__':
    unittest.main()
