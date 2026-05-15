# Vision Workflows

`ofxGgmlVision` is the image-understanding lane in the ofxGgml ecosystem. It owns Codex, Copilot, and Hermes planning for CLIP-style embeddings, captions, VLM-style image understanding, visual search, and vision request/result helpers.

Use the legacy `ofxGgml` split rule as inspiration: keep stable domain-neutral runtime primitives in `ofxGgmlCore`, and keep workflow-specific image reasoning here until it proves reusable outside vision.

## Owned Here

- image input request planning and result contracts
- CLIP-style image and text embedding workflow notes
- captioning and VLM-style image understanding plans
- visual search handoffs that describe indexed media and expected ranking output
- vision-specific preprocessing, postprocessing, and local artifact boundaries
- root-level example expectations for image understanding smoke tests

## Not Owned Here

- ggml runtime setup, backend selection, and generic model discovery
- SAM masks, point prompts, and segmentation-specific workflows
- diffusion image generation, identity adapters, and generated image pipelines
- temporal video workflows and frame-sequence orchestration
- audio, music, RAG, agent, or workflow-runner policy
- generated artifacts such as downloaded models, media caches, build folders, and IDE state

## Planning Handoff

Every agent-authored vision change should start with a short handoff:

```text
Workflow:
Input image or media set:
Backend or model:
Expected user-visible output:
Generated local artifacts:
Out-of-scope sibling lanes:
Validation:
```

Use concrete inputs and outputs. For example, say whether the workflow returns one caption, a ranked visual-search list, one embedding vector, or structured VLM observations. If the task needs segmentation, diffusion generation, or video timing, hand it to the owning sibling addon instead of broadening this lane.

## Validation Ladder

Run the smallest validation command that proves the change:

1. Documentation or planning changes: `scripts\validate-local.bat`
2. Doctor behavior changes: `scripts\doctor-vision.bat`
3. Request/result helper changes: `scripts\test-addon.bat`
4. Ecosystem runtime smoke evidence: `scripts\run-vision-runtime-smoke.bat -Json -SummaryOnly`
5. Example layout or generated-artifact policy changes: `scripts\validate-local.bat`

When a workflow needs local model files or input media, document their expected location without committing them. Generated artifacts remain local-only.

`scripts\run-vision-runtime-smoke.*` is intentionally request-boundary-only
until this addon owns a real local vision backend. It compiles and runs the
deterministic helper tests, checks doctor readiness, and emits JSON for Core
planning without downloading models or committing sample media.

## Safe First Tasks

- tighten request/result naming around embeddings, captions, and VLM observations
- document backend assumptions before adding a bridge adapter
- add deterministic tests for helper functions before wiring a model runner
- clarify handoffs with `ofxGgmlSam`, `ofxGgmlDiffusion`, and `ofxGgmlVideo`
- keep example changes root-level and smoke-test oriented
