# Versioning

- Define firmware semver through PlatformIO `build_flags` when the repo does not already have a stronger version generator.
- Headers should `#error` when required version flags are missing.
- Hardware version and firmware version are different concepts.
- Use a release/versioning workflow when bumping versions or publishing artifacts.

Version flag pattern:

```ini
build_flags =
  -D FIRMWARE_VERSION_MAJOR=1
  -D FIRMWARE_VERSION_MINOR=3
  -D FIRMWARE_VERSION_PATCH=0
```

```cpp
#if !defined(FIRMWARE_VERSION_MAJOR) || !defined(FIRMWARE_VERSION_MINOR) || !defined(FIRMWARE_VERSION_PATCH)
#error "FIRMWARE_VERSION_MAJOR, FIRMWARE_VERSION_MINOR, and FIRMWARE_VERSION_PATCH must be defined via build flags."
#endif
```
