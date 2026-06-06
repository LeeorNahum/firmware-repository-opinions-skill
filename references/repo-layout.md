# Repo Layout

Preferred firmware repo shape:

```text
platformio.ini
hardware/
  <target-name>/
    <target-name>.ini
    <target-name>.h
src/
  main.cpp
  ble/
  hardware/
  helpers/
```

If configuration is shared across targets but not target-specific, place it as a shared header directly under `hardware/`.

Use project-specific names when already established, but preserve the separation. Add `hardware/secrets.example.ini` only when local injected values are needed.

For factual PlatformIO syntax, section names, and option behavior, check the official ["platformio.ini" Project Configuration File](https://docs.platformio.org/en/latest/projectconf/index.html) docs first.
