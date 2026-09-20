"""Bounded exploration context, reconstructed from controller-owned run records."""
import re


AREAS = {
    'csr': ('src/privileged/csr*.sv', r'\bcsr|privileg'),
    'mmu': ('src/mmu/', r'mmu|tlb|pmp|page|translat'),
    'exceptions': ('src/privileged/', r'except|trap'),
    'interrupts': ('src/privileged/', r'interrupt'),
    'decoder': ('src/ieu/controller.sv src/ifu/', r'decod|compress|illegal instruction'),
    'pipeline': ('src/ieu/ src/ifu/', r'pipeline|stall|flush|forward|hazard'),
    'cache': ('src/cache/ src/lsu/', r'cache|lsu|replay|load.store|misalign'),
    'atomics': ('src/lsu/', r'atomic|\bamo|lr.sc|reservation'),
    'integer': ('src/ieu/ src/mdu/', r'\balu|integer|divis|multiply|signed|shift'),
    'floating_point': ('src/fpu/', r'float|\bfp|round|nan|bf16|bfloat'),
}


def area_for(entry: dict) -> str:
    explicit = entry.get('subsystem')
    if isinstance(explicit, str) and explicit in AREAS:
        return explicit
    target = str(entry.get('target', '')).lower()
    # Prefer the specific interaction over incidental words such as "exception".
    for area in ('atomics', 'floating_point', 'mmu', 'csr', 'interrupts',
                 'decoder', 'cache', 'integer', 'pipeline', 'exceptions'):
        if re.search(AREAS[area][1], target):
            return area
    return 'unclassified'


def coverage_summary(history: list[dict], base: str = '') -> dict:
    areas = {name: dict(selected=0, tested=0, reproduced=0, confirmed=0,
                        same_base=0, paths=paths) for name, (paths, _) in AREAS.items()}
    areas['unclassified'] = dict(selected=0, tested=0, reproduced=0, confirmed=0, same_base=0)
    seen = set()
    for entry in history:
        tag = entry.get('tag')
        if not tag or tag in seen or entry.get('target') in (None, '', 'planning failed'):
            continue
        seen.add(tag)
        row = areas[area_for(entry)]
        row['selected'] += 1
        for key in ('tested', 'reproduced'):
            row[key] += entry.get(key) is True
        row['confirmed'] += entry.get('status') == 'confirmed'
        row['same_base'] += bool(base) and entry.get('source_base') == base
    return dict(areas=areas,
                prefer=sorted(AREAS, key=lambda name: (areas[name]['same_base'], areas[name]['selected'], name))[:3],
                note='Selection counts are not coverage proof. Tested/reproduced are controller observations. '
                     'Historical notes may concern different RTL; recheck the selected path on this baseline.')
