# firmware-repository-opinions-skill

An opinionated, modular skill for structuring embedded firmware repositories: project layers, board environments, hardware selectors, source layout, build flags, versioning, library dependencies, local values, and runtime provisioning.

It separates project constants, hardware selectors, build versions, runtime provisioning, and local-only values so firmware projects stay buildable, flashable, and understandable across boards. The opinions are paradigm-named and tool-stated, with PlatformIO as the default build system.

## Layout

- `SKILL.md` is the spine: thesis, default toolchain, the reference-loading map, core non-negotiables, and the repository audit.
- `references/` holds one concept per file, loaded on demand.
- `assets/` holds copyable starter configs for a firmware repo.
- `AGENTS.md` is the maintenance contract for this skill.

## Install

Add as a submodule into your agent's skills directory:

```bash
git submodule add https://github.com/LeeorNahum/firmware-repository-opinions-skill.git .agents/skills/firmware-repository-opinions
```
