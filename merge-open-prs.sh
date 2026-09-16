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
command -v gh >/dev/null || { echo 'ERROR: install GitHub CLI and run gh auth login.' >&2; exit 1; }
git fetch origin
git checkout main
git merge --ff-only origin/main
backup="before-open-prs-$(date -u +%Y%m%d-%H%M%S)"
git tag "$backup"

pr_numbers=$(gh pr list --repo openhwgroup/cvw --state open --limit 100 --json number --jq '.[].number')
# Refuse to silently omit PRs if the requested limit was reached.
mapfile -t prs < <(printf '%s\n' "$pr_numbers" | sed '/^$/d')
if (( ${#prs[@]} >= 100 )); then
    echo 'ERROR: PR list reached its 100-item limit; completeness cannot be guaranteed.' >&2
    exit 1
fi
for pr in "${prs[@]}"; do
    [[ "$pr" =~ ^[0-9]+$ ]] || { echo 'ERROR: invalid PR number.' >&2; exit 1; }
    git fetch origin "pull/$pr/head:wallyguard-pr-$pr"
    if ! git merge --no-ff --no-edit "wallyguard-pr-$pr"; then
        printf 'STOPPED: merge failed for PR #%s. Conflicting files:\n' "$pr" >&2
        git diff --name-only --diff-filter=U
        exit 1
    fi
    merged+=("$pr")
done
git submodule update --init --recursive
