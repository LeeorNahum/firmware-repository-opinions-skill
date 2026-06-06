# Local Values

- Commit `hardware/secrets.example.ini` with placeholder values only when local injected values are needed.
- Ignore the real local-value file: `hardware/secrets.ini`.
- Never paste real Wi-Fi passwords, API keys, tokens, or private keys into chat, docs, screenshots, or commits.
- If real-looking secrets appear in tracked history, stop and recommend rotation before treating the project as clean.
- Prefer runtime provisioning or NVS storage for device API keys and Wi-Fi credentials when the device flow supports it.

Local value options:

| Pattern | Best for | Tradeoff |
| --- | --- | --- |
| Runtime provisioning / NVS | device credentials, Wi-Fi, per-device API keys | needs provisioning UI or manufacturing flow |
| Provisioning over Wi-Fi, BLE, serial, or app | user/device setup without recompiling firmware | requires a stable setup UX and validation |
| `hardware/secrets.ini` build flags | bring-up, demos, temporary bearer tokens | can leak in build logs or generated compile metadata |
| command-line `-D ...` | CI or one-off non-secret build switches | easy to lose, hard to reproduce, risky for credentials |

Recommendation: runtime provisioning first for shipped device credentials; `hardware/secrets.ini` only for local bring-up or temporary keys; command-line macros for non-secret build switches.

Default ignore shape:

```gitignore
.pio
.vscode
```

If `hardware/secrets.ini` or any other local secret files exist, ignore them too. See `assets/secrets.example.ini` for a copyable placeholder.

Ask before rotating or moving device API keys.
