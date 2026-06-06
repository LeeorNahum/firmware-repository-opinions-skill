# Layers

Use these layers deliberately:

- Project constants: device name, manufacturer, public protocol names
- Hardware selectors: board pins, sensor enables, hardware revision IDs
- Build version: firmware semver and build mode flags
- Runtime provisioning: Wi-Fi credentials, device API key, claimed user/device state
- Local placeholders or injected values: developer-only credentials, demo values, or manufacturing inputs used for testing

Do not collapse all of these into one header.
