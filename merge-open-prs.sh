#!/usr/bin/env bash
set -euo pipefail

parent=/home/rafay/miniconda3/WallyGuard2
wally="$parent/cvw"
url=https://github.com/openhwgroup/cvw.git
merged=()
backup='not created'

cd "$parent"
git remote -v
if [[ "$(git remote get-url upstream 2>/dev/null || true)" == "$url" ]]; then
    git remote remove upstream
fi

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
    git log --graph --oneline --decorate -30
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
# Prefer gh; public PR metadata also works without a GitHub account.
if command -v gh >/dev/null && pr_numbers=$(gh pr list --repo openhwgroup/cvw --state open --limit 100 --json number --jq '.[].number'); then
    mapfile -t listed < <(printf '%s\n' "$pr_numbers" | sed '/^$/d')
    if (( ${#listed[@]} >= 100 )); then
        use_public_api=1
    else
        use_public_api=0
    fi
else
    use_public_api=1
fi
if (( use_public_api )); then
    echo 'Listing public PRs through the GitHub API (no authentication required).'
    pr_numbers=$(python3 - <<'PY'
import json
import urllib.request

page = 1
numbers = set()
while True:
    url = f'https://api.github.com/repos/openhwgroup/cvw/pulls?state=open&per_page=100&page={page}'
    request = urllib.request.Request(url, headers={'Accept': 'application/vnd.github+json', 'User-Agent': 'WallyGuard-merge-open-prs'})
    with urllib.request.urlopen(request, timeout=60) as response:
        pulls = json.load(response)
    for pull in pulls:
        numbers.add(int(pull['number']))
    if len(pulls) < 100:
        break
    page += 1
for number in sorted(numbers, reverse=True):
    print(number)
PY
    )
fi
git fetch origin
git checkout main
git merge --ff-only origin/main
backup="before-open-prs-$(date -u +%Y%m%d-%H%M%S)"
git tag "$backup"

mapfile -t prs < <(printf '%s\n' "$pr_numbers" | sed '/^$/d')
for pr in "${prs[@]}"; do
    [[ "$pr" =~ ^[0-9]+$ ]] || { echo 'ERROR: invalid PR number.' >&2; exit 1; }
    if ! git fetch origin "pull/$pr/head:wallyguard-pr-$pr"; then
        # A PR author may rebase/force-push. Preserve the previous local
        # branch before refreshing it; never rewrite main or discard commits.
        git fetch origin "pull/$pr/head"
        previous=$(git rev-parse --verify "refs/heads/wallyguard-pr-$pr")
        saved="${backup}-pr-${pr}-${previous:0:12}"
        git tag "$saved" "$previous"
        git branch -f "wallyguard-pr-$pr" FETCH_HEAD
        printf 'Preserved previous PR #%s head as %s\n' "$pr" "$saved"
    fi
    if ! git merge --no-ff --no-edit "wallyguard-pr-$pr"; then
        printf 'STOPPED: merge failed for PR #%s. Conflicting files:\n' "$pr" >&2
        git diff --name-only --diff-filter=U
        exit 1
    fi
    merged+=("$pr")
done
git submodule update --init --recursive
