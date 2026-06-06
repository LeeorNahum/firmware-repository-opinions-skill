# Provisioning

Device credentials that users or manufacturing flows provide at runtime should live in persistent storage such as NVS, not compile-time headers.

Provisioning may happen through Wi-Fi captive portal, BLE, serial, a desktop/mobile app, or a manufacturing flow. Use compile-time placeholders only for local development, demos, or bring-up when runtime provisioning does not exist yet.

Ask before replacing runtime provisioning with compile-time secrets.
