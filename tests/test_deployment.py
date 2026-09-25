"""Portable deployment settings; no cluster, model or hardware execution."""
import ast
import json
import os
from pathlib import Path
import shlex
import unittest
from unittest.mock import patch

from chia.cluster.config import load_config, load_raw_config
from orchestration.submission import submission_command

ROOT = Path(__file__).resolve().parents[1]


class DeploymentTests(unittest.TestCase):
    def test_submission_default_keeps_host_checkout_outside_uploaded_package(self):
        command, _ = submission_command(ROOT, 'http://localhost:8265', {})
        runtime = json.loads(command[command.index('--runtime-env-json') + 1])
        self.assertEqual(runtime['env_vars']['WALLY_PATH'], str(ROOT / 'cvw'))
        self.assertIn('cvw/', runtime['excludes'])
        self.assertIn('--verify', command)

    def test_explicit_checkout_is_forwarded_unchanged(self):
        for checkout in ('/srv/cvw checkout', 'operator-supplied-relative-path'):
            with self.subTest(checkout=checkout):
                command, _ = submission_command(ROOT, 'http://localhost:8265',
                    {'WALLY_PATH': checkout, 'GOOGLE_CLOUD_PROJECT': 'test-project'})
                runtime = json.loads(command[command.index('--runtime-env-json') + 1])
                self.assertEqual(runtime['env_vars']['WALLY_PATH'], checkout)
                self.assertEqual(runtime['env_vars']['GOOGLE_CLOUD_PROJECT'], 'test-project')

    def test_local_defaults_and_explicit_settings_without_starting_loop(self):
        # Evaluate only deployment assignments, avoiding Ray registration on import.
        tree = ast.parse((ROOT / 'loop.py').read_text())
        names = {'REPO_ROOT', 'WALLY_PATH', 'VERTEX_PROJECT'}
        assignments = [node for node in tree.body if isinstance(node, ast.Assign)
                       and any(isinstance(t, ast.Name) and t.id in names for t in node.targets)]
        code = compile(ast.Module(body=assignments, type_ignores=[]), 'loop.py', 'exec')
        for env in ({}, {'WALLY_PATH': '/srv/custom cvw', 'GOOGLE_CLOUD_PROJECT': 'my-project'}):
            with self.subTest(env=env), patch.dict(os.environ, env, clear=True):
                scope = {'Path': Path, 'os': os, '__file__': str(ROOT / 'loop.py')}
                exec(code, scope)
                self.assertEqual(scope['WALLY_PATH'], env.get('WALLY_PATH', str(ROOT / 'cvw')))
                self.assertEqual(scope['VERTEX_PROJECT'], env.get('GOOGLE_CLOUD_PROJECT', ''))

    def test_actual_chia_loader_expands_cluster_settings_and_preserves_topology(self):
        env = dict(HEAD_IP='192.0.2.10', USER='researcher',
                   GCP_PRIVATE_KEY_PATH='/srv/keys/cluster key',
                   CONDA_SH='/srv/conda install/etc/profile.d/conda.sh',
                   CHIA_ENV_NAME='artifact-env', CVW_SETUP_SCRIPT='/srv/cvw checkout/setup.sh',
                   GCLOUD_CONFIG_DIR='/srv/cloud credentials', GOOGLE_CLOUD_PROJECT='test-project')
        with patch.dict(os.environ, env, clear=True):
            raw = load_raw_config(str(ROOT / 'cluster.yaml'))
            config = load_config(str(ROOT / 'cluster.yaml'))
        self.assertNotIn('${', json.dumps(raw))
        self.assertIn('$RAY_HEAD_IP', raw['worker_start_ray_commands'][1])
        types = raw['available_node_types']
        self.assertEqual(set(types), {'cvw', 'opencode'})
        self.assertEqual(types['cvw']['resources'], {'wally_sim': 1})
        self.assertEqual(types['opencode']['resources'], {'opencode_creds': 3})
        for spec in types.values():
            self.assertEqual(spec['num_workers'], 1)
            self.assertEqual(spec['compatible_ips'], [env['HEAD_IP']])
        self.assertEqual(shlex.split(types['cvw']['worker_env_commands'][1]),
                         ['source', env['CVW_SETUP_SCRIPT']])
        self.assertEqual(shlex.split(raw['head_env_commands'][0]),
                         ['source', env['CONDA_SH'], '&&', 'conda', 'activate', env['CHIA_ENV_NAME']])
        docker = types['opencode']['docker']
        self.assertEqual(docker['container_name'], 'wallyguard-opencode')
        self.assertEqual(shlex.split(docker['run_options'][0]),
                         ['-v', env['GCLOUD_CONFIG_DIR'] + ':/home/ray/.config/gcloud:ro'])
        self.assertEqual(config.head_ip, env['HEAD_IP'])


if __name__ == '__main__':
    unittest.main()
