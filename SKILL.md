---
name: firmware-repository-opinions
description: Standard embedded firmware repository opinions for project configuration, board environments, hardware selectors, build flags, library dependencies, and runtime provisioning. Use when working in firmware repos with PlatformIO structure; editing `platformio.ini`, `hardware/`, config headers, board selectors, version flags, provisioning storage, or local value placeholders.
metadata:
  author: Leeor Nahum
  version: "3.0.1"
---

# Firmware Repository Opinions

Firmware configuration starts with hardware reality: board targets, pins, sensors, build environments, device identity, and runtime provisioning. Keep those layers explicit so the project can build, flash, debug, and ship without hidden coupling.

These are opinionated defaults. The named tools below are swappable defaults; the paradigms around them are not.

## Default Toolchain

Prefer these unless the project has a stronger reason not to. Swap the tool, keep the paradigm.

- Build system: PlatformIO. For factual `platformio.ini` syntax, section names, and option behavior, check the official docs first.
- Framework: chosen per hardware target.
- Library source: GitHub repo URLs, not bare registry names.
- Runtime credential storage: NVS or equivalent persistent storage.
- Shared debug: a `[debug]` env carrying shared debug flags and libraries.
- Versioning: firmware semver defined through build flags.

## Reference Loading

Always read every reference relevant to the task before acting on its topic. Bias toward loading.

- Read `references/layers.md` when separating project constants, hardware selectors, version, provisioning, and local values.
- Read `references/repo-layout.md` when creating or reorganizing the top-level repo shape.
- Read `references/environments.md` when configuring `platformio.ini`, build environments, board targets, or upload defaults.
- Read `references/header-guards.md` when writing include guards for firmware headers.
- Read `references/source-layout.md` when structuring `src/`, hardware wrappers, helpers, or BLE composition.
- Read `references/build-flags.md` when setting build flag conventions or placement.
- Read `references/versioning.md` when defining firmware version flags or bumping versions.
- Read `references/library-dependencies.md` when adding or pinning library dependencies.
- Read `references/local-values.md` when handling local injected values, secrets files, or the ignore shape.
- Read `references/provisioning.md` when storing device credentials provided at runtime.

## Core Non-Negotiables

- Firmware starts from hardware reality; keep the layers explicit and never collapse them into one header.
- `platformio.ini` is the coordinator; concrete build environments live under `hardware/<target>/`, not in the root file.
- Create a separate env for any meaningful hardware difference.
- Keep reusable board and hardware selectors in `hardware/`, not scattered through app logic.
- Pair each concrete env `.ini` with a same-named hardware `.h`.
- Use GitHub URLs for all library dependencies; no bare registry names in new work.
- Always use the spaced `-D FLAG` form.
- Define firmware semver through build flags, and `#error` when required version flags are missing.
- Prefer runtime provisioning or NVS for device credentials; use compile-time placeholders only for bring-up.
- Never paste real secrets into chat, docs, screenshots, or commits.
- `src/main.cpp` is glue; each domain lives behind a small public header, never a flat catch-all folder.

## Firmware Repository Audit

When invoked:

1. Inspect `platformio.ini`, `hardware/`, `src/`, `.gitignore`, and docs.
2. Identify project constants, hardware selectors, version flags, build environments, runtime provisioning, and local-only values.
3. Confirm real local-value files are ignored and examples exist when needed.
4. Check for hardcoded credentials, board assumptions, or service endpoints that should be configurable.
5. Verify board environments, library dependency refs, and build flags are documented.
6. Report risks by key/file category, never by secret value.

Several references end with an "Ask before" line for their riskiest changes, such as pin maps, upload targets, provisioning, device keys, and bootloader behavior. Honor those where the topic lives.
