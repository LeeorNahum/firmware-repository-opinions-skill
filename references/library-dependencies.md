# Library Dependencies

- Use GitHub URLs for all firmware library dependencies, including third-party libraries that also exist in the PlatformIO registry.
- Do not use bare PlatformIO registry names in new work.
- Default to the library repo's active top branch, usually `#main` or `#master`, so active firmware work stays current.
- If a repo already intentionally pins a tag, version branch, or commit, preserve that pin unless the task is to update dependencies.
- Keep project-owned libraries under GitHub URLs so agents can inspect source and behavior.
