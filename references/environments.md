# Environments

- Keep `platformio.ini` as the coordinator: project metadata, optional `default_envs`, `extra_configs`, shared `[default]`, and shared `[debug]`.
- Put concrete build environments under `hardware/<target-name>/`, not directly in the main `platformio.ini`.
- Pair each concrete env `.ini` with a same-named hardware `.h`.
- Generic hardware config that is not tied to one target may live directly under `hardware/`.
- Use `[debug]` for shared debug flags and debug-only library settings.
- Create a separate env for any hardware difference: board revision, hardware variant, production vs. prototype, debug/release builds, or release targets.
- Keep reusable board or hardware selectors in `hardware/`, not scattered through app logic.
- Use `-include` board/hardware headers when that is the established repo pattern.
- Document what each environment builds, flashes, and assumes.
- Do not silently change the default upload environment if hardware could be affected.

See `assets/platformio.ini` for the coordinator pattern, and `assets/target.ini` paired with `assets/target.h` for a board target and its hardware header.

Name the env and folder after the hardware target. Create a separate env for any meaningful hardware difference. If two targets are nearly identical, one env can inherit from the other's sections rather than duplicating build flags and lib deps.

Add suffixes only when the split exists, e.g. `target_name_dev`, `target_name_prod`, `target_name_debug`.

Ask before changing board pin maps or hardware revision IDs, changing upload targets or the default environment, or editing recovery or bootloader behavior without hardware access.
