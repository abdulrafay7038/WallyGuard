import json
import os
from pathlib import Path
import subprocess
import sys
import unittest


class ModelConfigTests(unittest.TestCase):
    def models(self, **overrides):
        env=dict(os.environ)
        for name in ('CHIA_TESTER_MODEL','CHIA_FIXER_MODEL'):
            env.pop(name,None)
        env.update(overrides)
        result=subprocess.run([sys.executable,'-B','-c',
            'import json, loop; print(json.dumps(loop.MODELS))'],
            cwd=Path(__file__).resolve().parents[1],env=env,
            capture_output=True,text=True,timeout=20,check=True)
        return json.loads(result.stdout.splitlines()[-1])

    def test_fixer_defaults_to_configured_tester_model(self):
        models=self.models()
        self.assertEqual(models['rtl_fixer'],models['tester'])
        self.assertNotIn('mimo-v2.5-free',models.values())
        self.assertEqual(self.models(CHIA_TESTER_MODEL='provider/tester')['rtl_fixer'],'provider/tester')

    def test_explicit_fixer_override_does_not_change_other_roles(self):
        models=self.models(CHIA_TESTER_MODEL='provider/tester',CHIA_FIXER_MODEL='provider/fixer')
        self.assertEqual(models['rtl_fixer'],'provider/fixer')
        self.assertEqual(models['tester'],'provider/tester')
