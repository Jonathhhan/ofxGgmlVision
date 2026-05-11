# ofxGgmlVision

`ofxGgmlVision` is the companion addon for CLIP, image embeddings, captions, VLM-style image understanding, and visual search workflows on top of `ofxGgmlCore`.

`ofxGgmlCore` stays the dependency. This addon owns vision-specific workflow code so core can stay small and boring.

Family map: https://jonathhhan.github.io/ofxGgmlCore/

## First Milestone

- define small request/result types
- keep one root-level smoke example
- keep generated models, media, builds, and IDE files out of git
- validate the addon with local headless tests

## Example

`ofxGgmlVisionImageExample` is a root-level image understanding request smoke test. Generate it with the openFrameworks projectGenerator using addons `ofxGgmlVision`, `ofxGgmlCore`, and `ofxImGui`.

## Dependencies

- openFrameworks
- `ofxGgmlCore`
- `ofxImGui` for examples

## Validate

```powershell
scripts\validate-local.bat
```

On macOS/Linux:

```sh
./scripts/validate-local.sh
```

## Boundary

Keep vision-specific preprocessing, postprocessing, model launch, media handling, and examples here. Move code down into `ofxGgmlCore` only when it becomes a stable, domain-neutral primitive with focused tests.
