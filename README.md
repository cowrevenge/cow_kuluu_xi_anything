<a href="https://discord.gg/4vUKPgyvEp"><img src="screenshots/discord_banner.webp" alt="XI on Anything: join the community on Discord"></a>

<!-- COW-STATUS:BEGIN -->
## 5.66% of FFXiMain is proven C

**177,701 of 3,140,766 code bytes** (6,467 of 21,038 functions) are C that the judge has shown to be equal to the original. Today: **+5.66%**, goal +1.00% a day (met). At the goal pace the rest takes 95 days.

**Line: running, last batches +10 +16 +20 +28 +23 gold.** Judge check: recheck ok, audit ok (2026-11-14). Updated 2026-11-14 21:36 UTC+9; this block is rewritten with every push, about every 30 minutes while the line runs. <!-- now -->

<picture>
  <source media="(prefers-color-scheme: dark)" srcset="docs/cow/progress-dark.svg">
  <img alt="Where every byte of FFXiMain stands, and proven C over time against the goal" src="docs/cow/progress.svg">
</picture>

| | functions | code bytes | share of the code |
| :-- | --: | --: | --: |
| **Proven C**: the judge found it equal to the original | 6,467 | 177,701 | **5.66%** |
| &nbsp;&nbsp;&nbsp;of which rewritten as clean C by the model | 1,008 | 18,856 | 0.60% |
| Hand-written units and table rows, proven earlier | 975 | 6,213 | 0.20% |
| Written, not proven: the judge found a difference or could not finish | 4,358 | 362,574 | 11.54% |
| Written, waiting for the judge | 0 | 0 | 0.00% |
| Not written yet | 9,238 | 2,594,278 | 82.60% |
| All of FFXiMain | 21,038 | 3,140,766 | 100% |

| day | proven C | change | goal +1.00% |
| :-- | --: | --: | :-- |
| 2026-11-14 | 5.66% | +5.66% | met |

<details>
<summary>What these numbers mean, and the other counters</summary>

- **Proven C** is C whose behaviour the judge compared with the original machine code on generated inputs: at least 100 clean runs and every instruction of the original reached. Most of it is machine translation: correct, not yet pleasant to read. [Scoreboard](docs/cow/SCOREBOARD.md), [how it works](docs/cow/SYSTEM2.md).
- **Readable, named C written by hand: 32 of 19,190 functions (0.2%)**, each with a `cowdiff` PASS and `gate.ps1`'s 11 named checks. This is the stricter count: source that reads like intent.
- Last hand conversions: `0x103165a8` cow_seh_unwind_to_frame; `0x103162e8` cow_seh_unwind_and_clear_record; `0x102e7f5a` cow_orient_from_axes; `0x102da2b2` cow_reflection_matrix_from_plane; `0x102da1d8` cow_matrix_from_plane_and_vector
- **trivial (tabled): 943 row(s)** in `src/tables/` - entries whose whole body is one or two instructions (a bare `ret`, a getter, a constant). One shared runner, one row each, 943 proven by cowdiff in `cow/table_proof.json`. Not counted as converted, the way thunks are not.
- **trivial (awaiting a row): 915** more entries the meta calls <=8 bytes, still `todo`: same kind of shape, not yet classified by `tools/cow/mktable.py`. Kept out of the 19,190 so the denominator is only functions with logic; listed here so they stay visible.
- Our own C: 878,822 lines in 11,269 files under `src/` and `layout/`; machine lift: 11,218 units written, 6,865 proven.
- Names: 144 confirmed, 452 guess, 149 placeholder.
- This block: commit `3eb02c83`, cow: conveyor +51 gold (6467 gold in all, 5.658% of code bytes)
- [STATUS](docs/cow/STATUS.md) · [MAP](docs/cow/map.svg) · [NAMES_TODO](docs/cow/NAMES_TODO.md) · [LOOP](docs/cow/LOOP.md) · [STYLE](docs/cow/STYLE.md) · [MACHINERY](docs/cow/MACHINERY.md) · [SETUP](docs/cow/SETUP_REPORT.md)

</details>
<!-- COW-STATUS:END -->

> [!IMPORTANT]
> ## ▶ To play, get the [XI on Anything launcher](docs/install.md#the-launcher-players)
>
> **The launcher installs and updates everything for you.** You don't need to build this repo
> to play. Paste into Terminal:
>
> ```bash
> curl -fsSL https://raw.githubusercontent.com/rubymatrix/xi-on-anything/main/install.sh | bash
> ```
>
> Needs an Apple silicon Mac (M1 or later), a Steam Deck or an x86_64 Linux PC, and your own copy
> of FINAL FANTASY XI. Other platforms: see [Platforms](#platforms).
> This repo is the source of the recompiler and game host, for anyone who wants to build it.

FINAL FANTASY XI running natively, with no Wine, Rosetta or Proton. The game's `FFXiMain.dll`
(and `FFXi.dll`) are statically recompiled from 32-bit x86 to C on your own machine, from your own
install, and run on a platform layer of our own: Win32, Direct3D 8 on Metal, Vulkan, Direct3D 12 or WebGPU, audio, input
and sockets. This repo holds the recompiler, its runtime, that platform layer, and `host64`, the
game host, with its own sign-in screen drawn in the game's UI art.

**Works with [LandSandBoat](https://github.com/LandSandBoat/server) servers.** Sign in with a
username, password and one-time code, or a server launcher's token; pick the server in the
sign-in screen's Settings.

## Platforms

> [!TIP]
> **Find your platform, then follow its guide.** Each one goes from nothing to the title screen.

| platform | status | how you get it | guide |
| --- | --- | --- | --- |
| **macOS**, Apple silicon | ✅ Supported | Launcher (the line above), or build from source | [macOS](docs/platforms/macos.md) |
| **Steam Deck** | ✅ Supported | Launcher (the line above, in Desktop Mode), played from Game Mode | [Steam Deck](docs/platforms/steam-deck.md) |
| **Linux**, x86_64 | ✅ Supported | Launcher (the line above), or build from source | [Linux](docs/platforms/linux.md) |
| **iPhone / iPad** | ✅ Supported | Build on a Mac, install with a free Apple account | [iPhone and iPad](docs/platforms/ios.md) |
| **Windows**, x64 | ✅ Supported | Build from source (Visual Studio or llvm-mingw) | [Windows](docs/platforms/windows.md) |
| **Web browser** | 🧪 Experimental, self-hosted only | Build and host it yourself | [Web browser](docs/platforms/web.md) |
| **Xbox One / Series** | 🧪 Experimental | Developer Mode, sideloaded | [Xbox](docs/platforms/xbox-one.md) |
| **Android**, ARM64 | 🧪 Experimental (tested on a Pixel Fold) | Debug APK | [Android](docs/android.md) |
| **PS4** | 🧪 Experimental | Jailbroken console, fake PKG (branch `port/ps4`) | [PS4](docs/platforms/ps4.md) |

Every platform needs your own copy of the game (a `FINAL FANTASY XI` folder of a
[supported build](docs/new-client-version.md#supported-builds), with `FFXiMain.dll` and `ROM` in it)
and a LandSandBoat server to sign in to. What every platform has in common is in
[docs/platforms](docs/platforms/README.md).

## What's better than the original

- **A Modern page in the game's own Config menu**, next to Gameplay, Windows and the rest:
  - ambient occlusion, fog, god rays, bloom, color grading and sun shadows, each with a slider
  - per-pixel lighting (off, sun only, all lights), sharpening and anti-shimmer
  - texture filtering up to 16x, and longer draw and character distances
  - 30 or 60 fps
  - interface shape: full width, 16:9 or 4:3
  - the occlusion check: off (everything counts as seen, the fastest) or exact
- **Widescreen and ultrawide**: the 3D view widens with the window instead of stretching a 4:3
  view, the interface can stay 16:9 in the middle of an ultrawide, and nameplates keep their shape.
- **A native sign-in screen** in the game's own window themes and font, with the password kept in
  the system's password store (macOS Keychain, Windows Credential Manager, Linux Secret Service).
- **[DAT overlays](docs/running.md#dat-overlays---dats)** for a server's own DATs, without touching the install.
- **Ashita v4 and Windower 4 Lua addons**, unmodified, without DLL injection
  ([in progress](docs/addons.md)).
- **Discord Rich Presence**: your character, jobs and zone on your Discord profile while you play,
  straight to the Discord app's local socket (no SDK, nothing to install).

## Screenshots

<table>
  <tr>
    <td colspan="2"><img src="screenshots/titlescreen_uw.jpg" alt="Title screen at 3440x1440"></td>
  </tr>
  <tr>
    <td width="50%"><img src="screenshots/login.jpg" alt="Sign-in screen"></td>
    <td width="50%"><img src="screenshots/login_config.jpg" alt="Sign-in settings"></td>
  </tr>
  <tr>
    <td colspan="2"><img src="screenshots/graphics_options.jpg" alt="Config &gt; Modern graphics options"></td>
  </tr>
  <tr>
    <td width="50%"><img src="screenshots/godrays.jpg" alt="God rays in Bastok Mines"></td>
    <td width="50%"><img src="screenshots/shadows_ao.jpg" alt="Sun shadows and ambient occlusion"></td>
  </tr>
  <tr>
    <td width="50%"><img src="screenshots/lighting.jpg" alt="Per-pixel lighting"></td>
    <td width="50%"><img src="screenshots/lighting2.jpg" alt="Per-pixel lighting and shadows"></td>
  </tr>
</table>

## Documentation

| | |
| --- | --- |
| [Platform guides](docs/platforms/README.md) | Step by step, for every platform |
| [Installing](docs/install.md) | The launcher (macOS, Steam Deck, Linux) and the one-line source install |
| [Building](docs/building.md) | Building by hand on macOS, Linux and Windows; `Final Fantasy XI.app` and its signing |
| [Running `host64`](docs/running.md) | The sign-in screen, command-line options, DAT overlays, environment variables |
| [Options catalog](docs/options.md) | Every setting, in game and out |
| [Addons](docs/addons.md) | Ashita and Windower Lua addons |
| [Client versions](docs/new-client-version.md) | The supported builds, and adding a new one |
| [iPhone and iPad notes](docs/ios.md), [Web](docs/web.md), [Xbox](xbox/README.md), [Android](docs/android.md) | Each port's developer notes |
| [Replay scenes](tools/replay/README.md) | Recorded scenes for performance tests |
| [Repository layout](docs/layout.md) | What lives where |

## Rules

- **This repository exists to turn `FFXiMain.dll` into HUMAN-readable C.** That is the whole point
  of the fork: every function of the client becomes source that reads like intent - named functions,
  real types, structs with a `static_assert` per field, enums, vtables and tables with names, and no
  raw address outside `layout/`. Producing that code, in this repository, is the work - not a
  concession. It is built with `tools/cow` and reviewed by `tools/cow/cowdiff` (return registers,
  callee-saved registers, `esp`, memory writes, calls out, per-instruction coverage) and
  `tools/cow/gate.ps1 <hex>`: a unit is done when the gate says so.
- **No stubs, and no noop disguised as a function.** A body that does nothing is not a conversion - it is
  evidence that the file was not read. Where the original really is one instruction (`ret`, `ret N`), the
  unit is done only once the ledger says **who calls it**: the vtable and slot index from
  `tools/cow/vtable_model.py` (this build's RTTI is stripped, so the class name comes from the tag strings
  and the vocabulary the other slots cite), or the caller from `tools/cow/callers_of.py` and `refs_to.py`.
  The name has to carry that - `cow_menu_vf2_noop`, not `unk_return_noop` - and
  `tools/cow/gate.ps1` refuses anything smaller than a read. An entry nobody owns and nobody calls is not
  converted: it is booked as unread and comes back when we know better.
- **What we write lives here as source:** `layout/` (the memory model), `src/` (one user function per
  converted entry, plus its adapter), `runtime/cow/` (the generated wrap registration), and the
  conversion's own state - `ledger/functions.csv`, `cow/names.csv`, `cow/wraps.json`,
  `cow/seeds/`, `docs/cow/`. Names we guessed are listed in [NAMES_TODO](docs/cow/NAMES_TODO.md) for
  anyone to confirm with `tools/cow/rename.py`.
- **What stays out of git is the bulky stuff, not the code:** the player's own retail install (DLLs,
  DATs, ROMs) and the machine output rebuilt from it (`generated/`, `build/`). `.gitignore` keeps
  them; a player regenerates them from their own client with `tools/prepare.py` and `tools/build.py`.
  Nothing needs Square Enix files to read, review or extend this source.
- Also committed: the recompiler, the runtime, the platform layer, tests, and per-build **metadata**
  - addresses and shapes only (function ranges, switch tables, tail jumps), keyed by the SHA-256 of
  the retail DLL. Supported builds are listed in
  [Client versions](docs/new-client-version.md#supported-builds).
- **LandSandBoat packet captures** are committed too, as the maintainers agreed: the replay suite's
  recordings in `tools/replay/scenes/`, so every machine and CI plays the same scenes.

## License

MIT (`LICENSE`), for the code in this repository. `third_party/` keeps its own licenses (stb: MIT or
public domain; SDL3: zlib; Mbed TLS: Apache-2.0). FINAL FANTASY XI and its marks belong to Square
Enix; you bring your own install, and the files the tools make from it stay on your machine.
