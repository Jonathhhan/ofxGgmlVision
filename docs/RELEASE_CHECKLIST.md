# Release Checklist

Use this before tagging or announcing an `ofxGgmlVision` release. The goal is to
prove the addon boundary and example layout without claiming a model runtime
that is not wired yet.

## Fresh Clone Layout

From the openFrameworks `addons` folder:

```powershell
git clone https://github.com/Jonathhhan/ofxGgmlCore.git
git clone https://github.com/Jonathhhan/ofxGgmlVision.git
cd ofxGgmlVision
```

Expected layout:

```text
addons/
  ofxGgmlCore/
  ofxGgmlVision/
  ofxImGui/
```

## Local Validation

Run:

```powershell
scripts\validate-local.bat
```

macOS/Linux:

```sh
./scripts/validate-local.sh
```

For a pre-tag release candidate gate:

```powershell
scripts\release-candidate.bat
```

macOS/Linux:

```sh
./scripts/release-candidate.sh
```

## Example Scope

`ofxGgmlVisionImageExample` is intentionally narrow in this release:

- root-level openFrameworks example
- `ofxImGui` dependency declared in `addons.make`
- image understanding request smoke surface
- clear future path for CLIP, embeddings, captions, and VLM adapters

This release does not promise a complete model-backed vision runtime.

## Before Tagging

- `git status --short --ignored` shows no unexpected generated outputs
- no model files, generated media, generated OF project files, or build outputs
  are staged
- `CHANGELOG.md` has an entry for the release
- `docs/releases/vX.Y.Z.md` matches the release scope
- release notes distinguish request/helper skeleton work from future runtime
  adapters
