#!/usr/bin/env bash
set -euo pipefail

parent="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
wally="$parent/cvw"
url=https://github.com/openhwgroup/cvw.git
merged=()
backup='not created'

# Every Wally git operation below runs from this exact repository.
cd "$wally"
[[ "$(git rev-parse --show-toplevel)" == "$wally" ]] || {
    echo 'ERROR: incorrect Wally repository root.' >&2; exit 1;
}
[[ "$(git remote get-url origin)" == "$url" ]] || {
    echo 'ERROR: unexpected Wally origin.' >&2; exit 1;
}

report() {
    printf '\nMerged PR numbers: %s\n' "${merged[*]:-none}"
    git status
    git rev-parse HEAD
    git --no-pager log --graph --oneline --decorate -30
    printf 'Backup tag: %s\n' "$backup"
}
trap report EXIT

if [[ -n "$(git status --porcelain=v1 --untracked-files=all)" ]]; then
    echo 'ERROR: dirty Wally working tree; stopping without discarding files.' >&2
    git status --short
    exit 1
fi
for state in MERGE_HEAD CHERRY_PICK_HEAD REVERT_HEAD rebase-merge rebase-apply; do
    if [[ -e "$(git rev-parse --git-path "$state")" ]]; then
        echo "ERROR: unfinished Git operation ($state)." >&2
        exit 1
    fi
done
echo 'Listing open PRs targeting main through the GitHub API.'
pr_rows=$(python3 - <<'PY'
import json
import urllib.request

page = 1
while True:
    url = f'https://api.github.com/repos/openhwgroup/cvw/pulls?state=open&per_page=100&page={page}'
    request = urllib.request.Request(url, headers={'Accept': 'application/vnd.github+json', 'User-Agent': 'WallyGuard-merge-open-prs'})
    with urllib.request.urlopen(request, timeout=60) as response:
        pulls = json.load(response)
    for pull in pulls:
        if pull['base']['ref'] == 'main':
            print(f"{int(pull['number'])}\t{pull['head']['sha']}")
    if len(pulls) < 100:
        break
    page += 1
PY
)
git fetch origin
git checkout main
git merge --no-edit origin/main
backup="before-open-prs-$(date -u +%Y%m%d-%H%M%S)"
git tag "$backup"

mapfile -t prs < <(printf '%s\n' "$pr_rows" | sed '/^$/d' | sort -k1,1nr)
for row in "${prs[@]}"; do
    IFS=$'\t' read -r pr sha <<< "$row"
    [[ "$pr" =~ ^[0-9]+$ && "$sha" =~ ^[0-9a-f]{40}$ ]] || {
        echo 'ERROR: invalid PR metadata.' >&2; exit 1;
    }
    git fetch origin "pull/$pr/head"
    fetched=$(git rev-parse FETCH_HEAD)
    [[ "$fetched" == "$sha" ]] || {
        echo "ERROR: PR #$pr changed while it was being fetched; stopping." >&2
        exit 1
    }
    git branch -f "wallyguard-pr-$pr" "$sha"
    if ! git merge --no-ff --no-edit "wallyguard-pr-$pr"; then
        printf 'STOPPED: merge failed for PR #%s. Conflicting files:\n' "$pr" >&2
        git diff --name-only --diff-filter=U
        exit 1
    fi
    merged+=("$pr")
done
git submodule update --init --recursive
