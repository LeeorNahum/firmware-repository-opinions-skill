# Source Layout

- `src/main.cpp` is glue. It owns setup/loop orchestration, high-level state machines, timing, and calls into modules. It should be sleek in finished code.
- Temporary diagnostic bring-up code in `main.cpp` is acceptable, but do not treat it as the final architecture.
- `src/hardware/<domain>/` is generic reusable hardware wrapper code that could be copied to another project.
- `src/helpers/<domain>/` is project-specific behavior: provisioning flows, telemetry windows, power policy, state machines, storage policies, and service clients.
- `src/ble/<domain>/` owns BLE service/HID composition when BLE is present.
- Each domain should have a small public header and implementation files behind it.
- Use subfolders for domains. Do not let `src/helpers` or `src/hardware` become flat catch-all folders.

Wrapper example:

```text
src/hardware/display/
  display.h
  display_ssd1306.cpp
  display_virtual.cpp
```

Use board macros such as `DISPLAY_SSD1306` to select real implementations. Provide virtual implementations when they make bring-up, tests, or partial hardware useful.

Helper example:

```text
src/helpers/telemetry/
  telemetry.h
  telemetry.cpp
src/helpers/power/
  power.h
  power.cpp
```

Helpers can combine hardware wrappers, configuration, and runtime state. They should not contain reusable chip drivers or pin maps.
