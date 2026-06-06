# AGENTS.md

Rules for editing the **firmware-repository-opinions** skill. User-facing opinions live in `SKILL.md` and `references/`. `README.md` is the human skim layer.

## File roles

| File | Role |
| --- | --- |
| `SKILL.md` | Trigger, default toolchain, reference-loading map, non-negotiables, audit |
| `references/*.md` | One single concept per file, named by paradigm |
| `assets/` | Copyable starter configs that drop into a firmware repo |
| `README.md` | Short human summary |

One owner per opinion. Each reference owns its concept; other files use the term or shape without restating the rule. The reference-loading map lives in `SKILL.md` once.

## Repository-Opinions Skill Layout

This skill follows the shared layout for repository-opinions skills. Keep that shape so the skill type stays consistent and grows cleanly:

- `SKILL.md` is a slim spine: a short thesis, a default-stack or default-toolchain table of swappable tool picks, the reference-loading map, the core non-negotiables, the repository audit, and a closing note that risky-change "Ask before" lines live in the references.
- `references/*.md` hold one concept each, named by paradigm, carrying the detailed opinions. Distribute each "Ask before" guardrail into the reference that owns its topic rather than a standalone section.
- `assets/` hold copyable starter configs that drop into a target repo. References explain the judgment; assets are the copy-paste artifacts.
- `AGENTS.md` is this maintenance contract.
- `README.md` is the human skim layer.

A repository-opinions skill is opinionated and explicit, names its default tools as swappable picks, uses placeholder project names, and keeps one owner per opinion.

## Editing

- Bump `metadata.version` with semver in the same change whenever behavior changes.
- Encode a default only when backed by user preference or real usage. Do not invent opinions the skill never stated.
- Prefer deletion over caveats. More words is not better.
- One opinion per reference. A new paradigm, layer, or workflow gets its own reference file and an entry in the `SKILL.md` reference-loading map. Do not bolt a second unrelated concept onto an existing reference.
- When an existing concept grows, refactor its reference rather than scattering the idea across several files.
- **Opinionated and explicit.** State the preference clearly. This skill takes positions.
- **Paradigm-named, tool-stated.** Name files and sections for the job. PlatformIO is the stated default build system; name other tools as swappable picks.
- **No project leakage.** Use placeholder target, device, and project names such as `target_name`. Do not embed a real product's device names or credentials.
- **No em dashes.** Use commas, periods, parentheses, or "to".
- **Match depth to scope.** A single-concept reference stays short. Do not pad.
- **Capitalized bullets.** Start every bullet with a capital letter. Keep list voice consistent across all files.
- **Sparing examples.** Use a concrete example to clarify a shape, never to fix a naming choice a reader could copy verbatim instead of choosing the most accurate name.
- **Positive rules.** State the action to take, not the mistake to avoid.

Before finishing, confirm every `references/*.md` file appears in the `SKILL.md` reference-loading map, no reference restates another reference's rule, every bullet starts capitalized, `metadata.version` is bumped if behavior changed, and the README layout matches the actual files.
