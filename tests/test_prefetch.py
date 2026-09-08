"""Prove bounded lookahead and sequential local work without a live cluster."""
from argparse import Namespace
from contextlib import redirect_stdout
import io
import json
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

from tools import campaign
from test_generator import payload


class PrefetchTests(unittest.TestCase):
    def exercise(self, *, stop=False, interrupt=False, generation_error=False, mismatch=False):
        with tempfile.TemporaryDirectory() as temporary:
            root=Path(temporary); session=root/'session_test'; session.mkdir()
            args=Namespace(seed=10, num_tests=3, once=False, preflight=False,
                           stop_on_failure=stop, sleep=0, generated_dir=root/'generated')
            events=[]; outstanding=set(); cancelled=[]
            materialize=campaign.materialize_generated_test

            def submit(seed, selection=None):
                self.assertFalse(outstanding, 'More than one unconsumed remote generation')
                outstanding.add(seed); events.append(('submit',seed)); return seed

            def get(seed):
                events.append(('get',seed)); outstanding.remove(seed)
                data=payload(seed)
                if generation_error and seed==11:
                    data.update(success=False,status='INITIALIZATION_ERROR',error='bad marker')
                return data

            def persist(data,*a):
                events.append(('materialize',data['seed']))
                return materialize(data,*a)

            def execute(elf,directory,args,preflight=False):
                seed=int(directory.name.rsplit('_',1)[-1]); events.append(('execute',seed))
                if seed==10:
                    self.assertEqual(outstanding,set() if stop else {11})
                    self.assertFalse(list(args.generated_dir.glob('*seed_11')))
                if interrupt:
                    raise KeyboardInterrupt
                runner=dict(returncode=0,timed_out=False,error=None,trace_created=True)
                status='TRACE_MISMATCH' if mismatch and seed==10 else 'PASS'
                events.append(('execute_done',seed))
                return runner,runner,dict(status=status,trace={'status':status},signature={'status':'NOT_AVAILABLE'})

            def cancel(ref,force):
                self.assertFalse(force)
                outstanding.remove(ref); cancelled.append(ref)

            with patch.object(campaign.generate_riscv_dv_test,'chia_remote',side_effect=submit), \
                 patch.object(campaign,'get',side_effect=get), \
                 patch.object(campaign,'cancel',side_effect=cancel), \
                 patch.object(campaign,'materialize_generated_test',side_effect=persist), \
                 redirect_stdout(io.StringIO()):
                status=campaign.run_campaign(args,session,execute,lambda *a,**k:None,lambda *a:None)
            summary=json.loads((session/'campaign.json').read_text())
            requests=[json.loads(p.read_text()) for p in sorted(session.glob('*/request.json'))]
            self.assertFalse(outstanding)
            return status,events,summary,requests,cancelled

    def test_one_lookahead_with_no_early_materialization_or_extra_seed(self):
        status,events,summary,requests,cancelled=self.exercise()
        self.assertEqual(status,0)
        self.assertEqual([s for action,s in events if action=='submit'],[10,11,12])
        self.assertLess(events.index(('submit',11)),events.index(('execute',10)))
        self.assertGreater(events.index(('materialize',11)),events.index(('execute_done',10)))
        self.assertEqual(summary['trace_pass'],3)
        self.assertEqual(summary['generation_lookahead'],1)
        self.assertEqual([r['prefetched'] for r in requests],[False,True,True])
        self.assertEqual(cancelled,[])

    def test_stop_on_failure_does_not_generate_unused_test(self):
        status,events,summary,requests,cancelled=self.exercise(stop=True,mismatch=True)
        self.assertEqual(status,1)
        self.assertEqual([s for action,s in events if action=='submit'],[10])
        self.assertEqual(summary['generation_lookahead'],0)

    def test_prefetched_initialization_failure_is_preserved_and_not_executed(self):
        status,events,summary,requests,cancelled=self.exercise(generation_error=True)
        self.assertEqual(status,1)
        self.assertNotIn(('execute',11),events)
        self.assertEqual(summary['results'][1]['status'],'INITIALIZATION_ERROR')
        self.assertEqual(summary['trace_pass'],2)
        self.assertEqual(summary['infrastructure_generator_errors'],1)

    def test_interrupt_cancels_and_records_unconsumed_generation(self):
        status,events,summary,requests,cancelled=self.exercise(interrupt=True)
        self.assertEqual(status,130)
        self.assertEqual(cancelled,[11])
        self.assertEqual(summary['unconsumed_generation'][0]['seed'],11)
        self.assertEqual(requests[1]['status'],'CANCEL_REQUESTED')
