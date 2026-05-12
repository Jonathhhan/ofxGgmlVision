# AGENTS.md

This repository is `ofxGgmlVision`, the vision companion addon for the ofxGgml family.

Codex should treat `ofxGgmlCore` as the shared backend-neutral foundation. This repo owns CLIP/image embeddings, captions, image understanding workflows, and vision-specific examples.

## Addon contract

Do:

- keep vision-specific workflows in this addon
- depend on shared primitives from `ofxGgmlCore`
- preserve openFrameworks addon layout and `addon_config.mk`
- keep examples projectGenerator-friendly
- document image/model paths clearly

Do not:

- move backend-neutral Core primitives into this repo
- commit models, generated images, binaries, or caches
- hardcode local absolute paths

## Codex workflow

1. Inspect existing files first.
2. Keep changes small and focused.
3. Preserve addon boundaries.
4. Update docs/examples/scripts with code changes.
5. Summarize validation honestly.
