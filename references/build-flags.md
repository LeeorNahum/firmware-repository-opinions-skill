# Build Flags

- Always use the spaced `-D FLAG` form rather than `-DFLAG`. PlatformIO accepts both; the spaced form reads clearly and stays consistent across all flags.
- Shared debug flags belong in `[debug]`.
- Env-specific flags belong in that env's `hardware/<target>/<target>.ini`.
