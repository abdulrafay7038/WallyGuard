The Architect, Tester and Critic use Vertex AI through `OpenCodeLLM`:

| Agent | Default model | Environment override |
| --- | --- | --- |
| Architect | `google-vertex/gemini-3.8-flash` | `CHIA_ARCHITECT_MODEL` |
| Tester | `google-vertex/gemini-3.1-pro-preview-customtools` | `CHIA_TESTER_MODEL` |
| Critic | `google-vertex/gemini-3.1-pro-preview-customtools` | `CHIA_CRITIC_MODEL` |

The current four-agent loop, RTL Fixer model, prompts, timeouts and verification
are preserved. `GOOGLE_CLOUD_PROJECT` defaults in Python to
`jovial-analyst-507116-p9`; the provider pins location to `global`.

`cluster.yaml` mounts the host's `${HOME}/.config/gcloud` directory read-only at
`/home/ray/.config/gcloud`. The actual container user is `ray` (UID 1000), and
Chia names this worker `chia-opencode-abdul-0`. It receives
`GOOGLE_CLOUD_PROJECT` and `VERTEX_LOCATION=global` at container creation.
OpenCode uses the standard mounted ADC location. No temporary ADC copy,
API key login, or per-command credential environment override is required.

On this host, ADC is owned by UID 1001 and was initially mode 600. A file ACL
allows container UID 1000 to read it without granting other users access:

```bash
setfacl -m u:1000:r ~/.config/gcloud/application_default_credentials.json
```

If reauthenticating replaces the file, check that this ACL still exists.

To recreate an idle cluster with this configuration, use the repository's
existing CHIA commands from the activated `chia_env`:

```bash
export HEAD_IP=10.212.0.2
export GOOGLE_CLOUD_PROJECT=jovial-analyst-507116-p9
chia down cluster.yaml -y
chia up cluster.yaml -y
```

A running container does not pick up changed mounts via `chia up` alone.
Preserve any container-local OpenCode data before recreation.

Verify authentication with a small request from the actual container:

```bash
docker exec chia-opencode-abdul-0 opencode run \
  -m google-vertex/gemini-3.8-flash 'Reply with exactly PONG'
```

Ray job drivers do not automatically inherit shell exports. `submit.py` forwards
the project and the three `CHIA_*_MODEL` settings using `--runtime-env-json`.
It uses the absolute loop path on this existing head host, avoiding an upload
of the large Wally checkout. Inspect the command without starting a campaign:

```bash
python submit.py --dry-run
```

To try the small AND-gate task in `test.py` first, use `python submit.py --test`.
It uses the Architect model and the same Vertex provider configuration.
When ready to start the campaign, use `python submit.py`. It also accepts
`chia job submit` options such as `--address` and `--submission-id`.
For direct `python loop.py` execution, normal shell environment inheritance works.

Local CHIA references: `chia/docs/user_guides/google_auth.rst` describes the
persistent ADC mount and job environment forwarding; the installed
`AdditionalModelProvider` and `additional_providers` APIs match the requested API.

Validation on 2026-09-10: the container command above returned `PONG` with the
persistent read-only mount, project and location already configured, and
`GOOGLE_APPLICATION_CREDENTIALS` unset. A second request through `OpenCodeLLM`
on the CHIA worker also returned `PONG` with `success=true`. Python syntax/provider
construction and all 13 controller tests passed. No bug-hunting campaign was started.

Vertex `Resource exhausted` / HTTP 429 during an agent call is an API failure,
not a hardware-test verdict. CHIA's OpenCode backend raises `RateLimitError`
immediately even when its own `retries` setting is increased. The loop now
retries the same agent up to four times, waiting 30, 60, 120 and 240 seconds
plus up to five seconds of jitter. It keeps the same worktree and Bash tool.
Each retry starts a fresh OpenCode conversation with instructions to inspect
existing files and logs before continuing; it does not restore chat history.
Authentication errors and other exception types are not retried by this policy.
If all retries fail, the existing error/archive/next-iteration behavior applies.

These changes apply to newly submitted jobs; an already running job retains
the code it loaded at startup. The retained worktree from an earlier failed
iteration remains available but is not automatically resumed by a new campaign.
See [Google's 429 guidance](https://cloud.google.com/vertex-ai/generative-ai/docs/error-code-429).
