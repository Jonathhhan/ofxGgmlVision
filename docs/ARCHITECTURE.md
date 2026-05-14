# Architecture

`ofxGgmlVision` owns vision-specific workflow code. It should use `ofxGgmlCore` for stable runtime primitives and keep model-family workflow details out of core.

## Dependency Direction

```text
openFrameworks app
  -> ofxGgmlVision
      -> ofxGgmlCore
```

No dependency should point from `ofxGgmlCore` back to `ofxGgmlVision`.

## Owned Here

- vision-specific request/result helpers
- model-specific preprocessing and postprocessing
- focused root-level examples
- local media/model workflow documentation
- Codex, Copilot, and Hermes workflow planning for image embeddings, captions, VLM-style image understanding, and visual search

## Not Owned Here

- ggml runtime setup and backend selection
- generic tensor, graph, model metadata, and result types
- unrelated companion workflows

See `docs/VISION_WORKFLOWS.md` for agent handoff boundaries, generated-artifact rules, and the validation ladder for vision workflow changes.
