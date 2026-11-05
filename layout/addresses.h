/* layout/addresses.h - the only file in the repository where a guest address is written down.

   Every constant here names something the code actually uses, with the evidence that ties the number
   to the meaning. Nothing in src/ may contain a 0x10xxxxxx literal: if user code needs an address,
   it gets a name from this file (and the name goes into cow/names.csv).

   Image-internal addresses (anything inside .rdata/.data, which the retail launcher may relocate) are
   used through COW_VIEW/COW_GLOBAL in cow.h, which add the relocation delta. Handles read out of
   guest memory are not constants and are never listed here.
*/
#ifndef COW_LAYOUT_ADDRESSES_H
#define COW_LAYOUT_ADDRESSES_H

/* A byte the game reads directly, most recently at f_100083d0 (generated/all/funcs_000.c:55171:
   `mov al, byte ptr [0x10455c38]`). What it means is not established yet, so the name says so -
   cow/names.csv carries it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_10455C38 0x10455C38u

/* A static block in .data whose address f_10082aa0 hands out (generated/all: `mov eax, 0x1047d4cc / ret`,
   vtable 0x1032e3c8 slot 246/283). The bytes at it are not yet interpreted, so the name says so -
   cow/names.csv carries it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_1047D4CC 0x1047D4CCu

/* A byte the game reads directly, most recently at f_10087110 (generated/all: `mov al, byte ptr
   [0x10487ef5] / ret`, called from 0x10002d80). It holds 1 in the shipped image - a flag, but what for
   is not established yet, so the name says so; cow/names.csv carries the reader as placeholder. */
#define COW_ADDR_UNK_10487EF5 0x10487EF5u


/* A dword the game reads directly (generated/all: `mov eax, dword ptr [0x10480adc]`). What it holds
   is not established yet, so the name says so - cow/names.csv carries it as
   confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_10480ADC 0X10480ADCu


/* A dword the game reads directly (generated/all: `mov eax, dword ptr [0x10480ab4]`). What it holds
   is not established yet, so the name says so - cow/names.csv carries it as
   confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_10480AB4 0X10480AB4u


/* A static block in the image whose address the game hands out (`mov eax, 0x1032d700` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_1032D700 0x1032D700u


/* A static block in the image whose address the game hands out (`mov eax, 0x1032db30` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_1032DB30 0x1032DB30u


/* A static block in the image whose address the game hands out (`mov eax, 0x1032df68` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_1032DF68 0x1032DF68u


/* A static block in the image whose address the game hands out (`mov eax, 0x1032df74` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_1032DF74 0x1032DF74u


/* A static block in the image whose address the game hands out (`mov eax, 0x1032e85c` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_1032E85C 0x1032E85Cu


/* A static block in the image whose address the game hands out (`mov eax, 0x1032e868` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_1032E868 0x1032E868u


/* A static block in the image whose address the game hands out (`mov eax, 0x1032e874` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_1032E874 0x1032E874u


/* A static block in the image whose address the game hands out (`mov eax, 0x1032e880` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_1032E880 0x1032E880u


/* A static block in the image whose address the game hands out (`mov eax, 0x1032fd4c` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_1032FD4C 0x1032FD4Cu


/* A static block in the image whose address the game hands out (`mov eax, 0x10330278` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_10330278 0x10330278u


/* A static block in the image whose address the game hands out (`mov eax, 0x10330684` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_10330684 0x10330684u


/* A static block in the image whose address the game hands out (`mov eax, 0x10330690` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_10330690 0x10330690u


/* A static block in the image whose address the game hands out (`mov eax, 0x10330ebc` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_10330EBC 0x10330EBCu


/* A static block in the image whose address the game hands out (`mov eax, 0x10330ec8` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_10330EC8 0x10330EC8u


/* A static block in the image whose address the game hands out (`mov eax, 0x103313d8` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_103313D8 0x103313D8u


/* A byte the game reads directly at `0x104b1770`. What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_104B1770 0x104B1770u


/* A static block in the image whose address the game hands out (`mov eax, 0x104adde0` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_104ADDE0 0x104ADDE0u


/* A static block in the image whose address the game hands out (`mov eax, 0x104ca438` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_104CA438 0x104CA438u


/* A dword the game reads directly at `0x105782a0`. What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_105782A0 0x105782A0u


/* A dword the game reads directly at `0x104e1708`. What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_104E1708 0x104E1708u


/* A byte the game reads directly at `0x1036cf5c`. What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_1036CF5C 0x1036CF5Cu


/* A static block in the image whose address the game hands out (`mov eax, 0x1036f854` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_1036F854 0x1036F854u


/* A static block in the image whose address the game hands out (`mov eax, 0x1036fa70` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_1036FA70 0x1036FA70u


/* A static block in the image whose address the game hands out (`mov eax, 0x1036fd98` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_1036FD98 0x1036FD98u


/* A static block in the image whose address the game hands out (`mov eax, 0x1036fbb0` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_1036FBB0 0x1036FBB0u


/* A static block in the image whose address the game hands out (`mov eax, 0x10371484` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_10371484 0x10371484u


/* A static block in the image whose address the game hands out (`mov eax, 0x10371490` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_10371490 0x10371490u


/* A static block in the image whose address the game hands out (`mov eax, 0x10376444` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_10376444 0x10376444u


/* A static block in the image whose address the game hands out (`mov eax, 0x10376458` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_10376458 0x10376458u


/* A static block in the image whose address the game hands out (`mov eax, 0x1033673c` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_1033673C 0x1033673Cu


/* A static block in the image whose address the game hands out (`mov eax, 0x10631ed0` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_10631ED0 0x10631ED0u


/* A static block in the image whose address the game hands out (`mov eax, 0x103367dc` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_103367DC 0x103367DCu


/* A static block in the image whose address the game hands out (`mov eax, 0x1033682c` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_1033682C 0x1033682Cu


/* A static block in the image whose address the game hands out (`mov eax, 0x10662838` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_10662838 0x10662838u


/* A static block in the image whose address the game hands out (`mov eax, 0x10337cc0` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_10337CC0 0x10337CC0u


/* A static block in the image whose address the game hands out (`mov eax, 0x10337d00` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_10337D00 0x10337D00u


/* A byte the game reads directly at `0x1048098d`. What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_1048098D 0x1048098Du


/* A static block in the image whose address the game hands out (`mov eax, 0x10337d98` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_10337D98 0x10337D98u


/* A static block in the image whose address the game hands out (`mov eax, 0x10337dd8` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_10337DD8 0x10337DD8u


/* A static block in the image whose address the game hands out (`mov eax, 0x10337e4c` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_10337E4C 0x10337E4Cu


/* A static block in the image whose address the game hands out (`mov eax, 0x10337e58` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_10337E58 0x10337E58u


/* A static block in the image whose address the game hands out (`mov eax, 0x103383cc` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_103383CC 0x103383CCu


/* A static block in the image whose address the game hands out (`mov eax, 0x103385c4` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_103385C4 0x103385C4u


/* A static block in the image whose address the game hands out (`mov eax, 0x1034f2b8` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_1034F2B8 0x1034F2B8u


/* A static block in the image whose address the game hands out (`mov eax, 0x1037f1d4` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_1037F1D4 0x1037F1D4u


/* A static block in the image whose address the game hands out (`mov eax, 0x1037f290` materialises it). What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_1037F290 0x1037F290u


/* A dword the game reads directly at `0x10663560`. What it holds is not established yet, so the name says so - cow/names.csv carries
   it as confidence=placeholder and docs/cow/NAMES_TODO.md lists it. */
#define COW_ADDR_UNK_10663560 0x10663560u

/* The UI cluster behind cow_ui_open_main_menu (f_1015ee40). Each name is the ROLE the address plays
   in that original, read off the instruction that touches it (docs/cow/REFERENCE.md); none of them
   claims to know what the field means beyond "it blocks the open". */
#define COW_ADDR_UI_IDLE_GATE_PTR 0x1057876Cu   /* 0x1015ee40: mov eax,[...] then the three gate reads */
#define COW_ADDR_UI_MODE_OBJECT_PTR 0x10662d40u /* 0x1015ee5d: mov ecx,[...] for the mode query call */
#define COW_ADDR_UI_SECOND_GATE_PTR 0x106631d4u /* 0x1015ee6c: mov eax,[...], null-checked, then +0x1c */
#define COW_ADDR_UI_MANAGER 0x10621838u         /* 0x1015ee85: mov ecx,... - the this for the window call */
#define COW_ADDR_UI_SHOW_WINDOW_FN 0x1015e350u  /* 0x1015ee8a: call - asks the manager to show a resource */
#define COW_ADDR_UI_MODE_IS_4_OR_5_FN 0x101b5c90u /* 0x1015ee63: call - reads [this+0xf108], true for 4 or 5 */
#define COW_ADDR_MENUWIND_RESOURCE 0x10371b4cu  /* 0x1015ee80: push - "menu    menuwind": category "menu    "
                                                   + 8-char name, the DAT record layout xi-on-anything
                                                   documents in host/datui.h:10 */

/* --- f_100dc1f0: the zone connection's clock ------------------------------------------------------

   The name is upstream's own, not ours: meta/builds.json lists 0x10492e10 as `frame_net_clock` for
   this build (2026-10-05), tools/frame_sites.py describes it as "the global holding its clock (+8 the
   milliseconds since its last frame, set once a frame)", and host/frame.c:293 reads it exactly that
   way (`rd32(FFXI_FRAME_NET_CLOCK)` then `rd32(clock + 8)`).

   f_100dbe50 is what stands the object up: `mov edi, 0x10492db8 / mov ecx, 0x16 / xor eax, eax /
   mov [0x10492e10], edi / rep stosd` - zero 0x16 dwords at 0x10492db8 and publish the address. So the
   object is 0x58 bytes and lives in .data, and the global is the game's only handle to it. */
#define COW_ADDR_FRAME_NET_CLOCK_PTR 0x10492E10u /* the global: holds the clock object's address */
/* The input-method (IME) state probe f_101b41a0.
 *
 * The global at 0x103d3c64 holds an object whose +0x18 is the window handle the game owns its input
 * method through: f_101b41a0 loads it twice (0x101b41a0 and 0x101b41bc/0x101b41cf) and passes it as the
 * first argument of ImmGetContext, whose own manual argument is a HWND.
 *
 * The three addresses below are the OUTERMOST thunks the entry calls, and that is what the bridges call
 * too: cowdiff compares the call trace (target, args, order), so bridging at a deeper address would
 * report a different target than the original's `call` instruction pushed. Each chain:
 *   0x101aff50 -> jmp 0x102bc84c -> jmp [0x10329070]   user32!ImmGetContext(HWND) -> HIMC
 *   0x102bc87c -> jmp [0x10329090]                     user32!ImmGetOpenStatus(HIMC) -> BOOL
 *   0x101aff60 -> jmp 0x102bc852 -> jmp [0x10329074]   user32!ImmReleaseContext(HWND, HIMC) -> BOOL
 * (names from python tools/cow/iat_slot.py 0x10329070 / 0x10329090 / 0x10329074, each of which reads
 * the hint/name record behind the slot; all three are stdcall, so every one cleans its own arguments,
 * which is why the entry needs no `add esp` anywhere and its lone `pop esi` closes the save block.) */
#define COW_ADDR_IME_OWNER_PTR 0x103D3C64u              /* holds the object with the window handle */
#define COW_ADDR_IME_GET_COMP_STRING_THUNK 0x102BC888u /* -> user32!ImmGetCompositionStringA
                                                          (0x102bc888 is one instruction,
                                                           `jmp dword ptr [0x10329098]`, and that slot
                                                           is the import - python tools/cow/iat_slot.py
                                                           0x10329098) */
#define COW_ADDR_IME_GET_COMP_STRING_RETURN 0x101B3F9Au /* the word that callee's epilogue pops */
#define COW_ADDR_IME_RELEASE_RETURN_COMPOSITION 0x101B3FABu /* the release called from a third site,
                                                                0x101b3fa6, in f_101b3f70 */

#define COW_ADDR_IME_GET_CONTEXT_THUNK 0x101AFF50u       /* -> user32!ImmGetContext */
#define COW_ADDR_IME_GET_OPEN_STATUS_THUNK 0x102BC87Cu   /* -> user32!ImmGetOpenStatus */
#define COW_ADDR_IME_RELEASE_CONTEXT_THUNK 0x101AFF60u   /* -> user32!ImmReleaseContext */

/* The word each real `call` leaves below esp, which the callee's epilogue pops and cowdiff compares:
 * 0x101b41af after the ImmGetContext call, 0x101b41b7 after ImmGetOpenStatus, and - because the release
 * is called from two different sites on the two branches - 0x101b41cb on the open branch and
 * 0x101b41de on the closed one. */
#define COW_ADDR_IME_GET_CONTEXT_RETURN 0x101B41AFu
#define COW_ADDR_IME_GET_OPEN_STATUS_RETURN 0x101B41B7u
#define COW_ADDR_IME_RELEASE_RETURN_OPEN 0x101B41CBu
#define COW_ADDR_IME_RELEASE_RETURN_CLOSED 0x101B41DEu

/* The ImmGetConversionStatus probes f_101b40d0 / f_101b4140 / f_101b41f0 (cluster of 2026-11-05).
 * Each asks the same three questions of the same owner object and then reads back the context handle
 * it stashed on its own stack: 0x102bc882 is one instruction, `jmp dword ptr [0x10329094]`, and that
 * slot is the import ImmGetConversionStatus (python tools/cow/iat_slot.py 0x10329094; its two
 * out-parameters are written by the callee but never read back by these entries, which is what the
 * seeds' distinct saved-himc values prove). stdcall, 3 arguments, so it cleans its own 0xc. */
#define COW_ADDR_IME_GET_CONV_STATUS_THUNK 0x102BC882u  /* -> user32!ImmGetConversionStatus */
/* Each entry's own call sites, i.e. the word each callee's epilogue pops (cowdiff compares them): */
#define COW_ADDR_IME_D0_GET_CONTEXT_RETURN 0x101B40E2u  /* call at 0x101b40dd */
#define COW_ADDR_IME_D0_GET_OPEN_RETURN 0x101B40EAU     /* call at 0x101b40e5 */
#define COW_ADDR_IME_D0_GET_CONV_RETURN 0x101B40FEu     /* call at 0x101b40f9 */
#define COW_ADDR_IME_D0_RELEASE_RETURN 0x101B410Eu      /* open-branch release, call at 0x101b4109 */
#define COW_ADDR_IME_40_GET_CONTEXT_RETURN 0x101B4152u  /* f_101b4140 call at 0x101b414d */
#define COW_ADDR_IME_40_GET_OPEN_RETURN 0x101B415Au     /* call at 0x101b4155 */
#define COW_ADDR_IME_40_GET_CONV_RETURN 0x101B416Eu     /* call at 0x101b4169 */
#define COW_ADDR_IME_40_RELEASE_RETURN 0x101B417Eu      /* open-branch release, call at 0x101b4179 */
#define COW_ADDR_IME_F0_GET_CONTEXT_RETURN 0x101B4202u  /* f_101b41f0 call at 0x101b41fd */
#define COW_ADDR_IME_F0_GET_OPEN_RETURN 0x101B420Au     /* call at 0x101b4205 */
#define COW_ADDR_IME_F0_GET_CONV_RETURN 0x101B421Eu     /* call at 0x101b4219 */
#define COW_ADDR_IME_F0_RELEASE_RETURN_OPEN 0x101B422Eu /* open-branch release, call at 0x101b4229 */
#define COW_ADDR_IME_F0_RELEASE_RETURN_CLOSED 0x101B4251u /* closed-branch release, call at 0x101b424c */
/* f_101b40d0 releases on BOTH branches; the closed one is called from its own site: */
#define COW_ADDR_IME_D0_RELEASE_RETURN_CLOSED 0x101B412Bu /* call at 0x101b4126 */

#define COW_ADDR_FRAME_NET_CLOCK_OBJ 0x10492DB8u /* that object, published by f_100dbe5d */

/* f_100dc1fc: `call 0x100dbe00`, and 0x100dbe00 is one instruction - `jmp dword ptr [0x10329400]`.
   The ledger books it as a thunk (nothing to convert), and the slot it jumps through is an import:
   python tools/cow/iat_slot.py 0x10329400 reads the hint/name record the slot points at and answers
   timeGetTime - winmm's millisecond tick, which is also what our own shim for it returns
   (runtime/portable/user32.c:1339, rt_monotonic_ns()/1000000). The thunk is bridged, never inlined. */
#define COW_ADDR_TIMEGETTIME_THUNK 0x100DBE00u
#define COW_ADDR_TIMEGETTIME_IAT 0x10329400u    /* the slot the thunk jumps through */
#define COW_ADDR_NET_CLOCK_TICK_RETURN 0x100DC201u /* the address f_100dc1fc's call returns to */
/* f_100dc210 begins with its OWN `call 0x100dbe00` (e8 eb fb ff ff at 0x100dc210), a different site in
   the same thunk, so it has its own return address: the word that `ret` pops is 0x100dc215, and cowdiff
   compares that stack word byte for byte. */
#define COW_ADDR_NET_CLOCK_TICK_AT_TOP_RETURN 0x100DC215u

/* --- f_103165a8: the local-unwind thunk that asks the OS to tear the SEH chain down ----------------

   The whole original (python tools/cow/peek_bytes.py 0x103165a8 --len 32 -> 55 8b ec 53 56 57 55 6a 00
   6a 00 68 c0 65 31 10 ff 75 08 e8 5c 0d 01 00 5d 5f 5e 5b 8b e5 5d c3) is a request block and one
   call: push ebp / mov ebp,esp / push ebx,esi,edi / push ebp / push 0 / push 0 / push <resume> / push
   [ebp+8] / call 0x1032731c / pop ebp,edi,esi,ebx / mov esp,ebp / pop ebp / ret.

   0x1032731c is a thunk of one instruction - `jmp dword ptr [0x103290e4]` (peek_bytes 0x1032731c --len 6
   -> ff 25 e4 90 32 10) - and the slot is an import: python tools/cow/iat_slot.py 0x103290e4 reads the
   hint/name record behind it and answers RtlUnwind, kernel32's SEH-chain unwinder, which our own runtime
   shims (runtime/portable/k32_misc.c:246, registered at :307). The four words it finds above its return
   address are therefore TargetFrame, TargetIp, ExceptionRecord, ReturnValue - in that order because
   cdecl pushes the last argument first, so the last push ([ebp+8], the caller's argument) is arg0.
   The resume address is the instruction right after the original's own call, which is why an unwind that
   runs to completion lands in this thunk's epilogue: 0x103165c0 = 0x103165bb + 5. */
#define COW_ADDR_RTLUNWIND_THUNK 0x1032731Cu /* jmp [COW_ADDR_RTLUNWIND_IAT]; a thunk, bridged not inlined */
#define COW_ADDR_RTLUNWIND_IAT 0x103290E4u   /* the slot the thunk jumps through: kernel32!RtlUnwind */
#define COW_ADDR_SEH_UNWIND_RESUME 0x103165C0u /* RtlUnwind's TargetIp AND the call's return address */

/* f_103162e8: the same RtlUnwind from a wrapper that names its finally block as the resume address.
 * 0x10316310 is both the value stored at [ebp-4] (pushed as TargetIp at 0x10316305) and the address the
 * call at 0x1031630b returns to - one block serves as handler-continuation and as the normal path. */
#define COW_ADDR_SEH_UNWIND_CLEAR_RESUME 0x10316310u

/* The three identical calls of f_102d920a (the bezier/segment split of a cubic, per the 1-t
 * arithmetic at 0x102d923c-0x102d9248) all go to 0x102d90f1, `jmp dword ptr [0x103cc49c]`. That
 * slot is not an import - iat_slot.py reads the guest address 0x102d90cd, the tail-jump
 * trampoline `push 1 / call 0x102e7670 / ... / call [0x103cc49c] / ret 0x10` that ends in a
 * table-init/refresh routine reached only through this slot. A bridge to the TRAMPOLINE, not to
 * the thunk, is what reproduces side A's behaviour: the generated thunk is a bare jmp (it never
 * returns), and the trampoline's `call [slot]` re-enters the same trampoline at runtime on both
 * sides, which is the self-reference this cluster must keep honest. */
#define COW_ADDR_CUBIC_SPLIT_THUNK 0x102D90F1u      /* jmp [COW_ADDR_CUBIC_SPLIT_SLOT] */
#define COW_ADDR_CUBIC_SPLIT_SLOT 0x103CC49Cu       /* holds the trampoline's guest address */
#define COW_ADDR_CUBIC_SPLIT_TRAMPOLINE 0x102D90CDu /* what the slot names */
/* The three call sites' return addresses (the word the trampoline's `ret 0x10` pops): */
#define COW_ADDR_CUBIC_SPLIT_RETURN_A 0x102D9226u   /* call at 0x102d9221 */
#define COW_ADDR_CUBIC_SPLIT_RETURN_B 0x102D923Cu   /* call at 0x102d9237 */
#define COW_ADDR_CUBIC_SPLIT_RETURN_C 0x102D925Au   /* call at 0x102d9255 */

/* --- the net clock's own cluster: f_100dbe50 / f_100dbe30 / f_100dbeb0 / f_100dbf20 / f_100dc060 /
   f_100dc080 (2026-11-05), the six entries that stand the 0x10492db8 object up and run it -------------

   One object, one commit: all six load COW_ADDR_FRAME_NET_CLOCK_PTR (tools/cow/cluster.py finds them
   through that - 17 bodies cite it in the whole image). The addresses below are the call sites inside
   the cluster and the callees they reach; a callee that is a thunk is bridged, never converted, and a
   callee that is already converted is still reached through the call machinery so both sides of
   cowdiff see the same call trace. */
#define COW_ADDR_NET_CLOCK_RESET_ACCUM_FN 0x100DBE30u /* 0x100dbe77: call - sets [clock+0x0c] from the
                                                         version answer and clears [clock+0x10] */
#define COW_ADDR_NET_CLOCK_RESET_ACCUM_RETURN 0x100DBE7Cu /* the address that call returns to; the
                                                         callee is cdecl and its caller does
                                                         `add esp,8` at 0x100dbe7c, which the adapter
                                                         reproduces - a site-exact bridge leaves the
                                                         callee's register aftermath in place */
#define COW_ADDR_OS_VERSION_ANSWER_FN 0x10314F31u     /* 0x100dbe32: `push 0 / call` - asks the OS for
                                                         its version block, compares it against the
                                                         cached five words at 0x109b26b0, and returns
                                                         either the cached answer at 0x109b26a8 or one
                                                         computed from the fresh words by 0x10319c9b.
                                                         Not converted: a cluster converts the object's
                                                         owners, not every function it calls. */
#define COW_ADDR_OS_VERSION_ANSWER_RETURN 0x100DBE37u /* the word the callee's `leave / ret` pops */
#define COW_ADDR_OS_VERSION_CACHE 0x109B26A8u         /* the cached answer, with the five version words
                                                         it is keyed on at 0x109b26b0-0x109b26c0 */
/* The winmm tick reached from two more sites than the ones in COW_ADDR_TIMEGETTIME_THUNK's block
   above: f_100dbe50 asks for it after resetting the accumulators, f_100dbf20 as its FIRST action
   (after only its two pushes). Same one-instruction thunk, different return address each time,
   because cowdiff compares the word below esp that the callee's epilogue pops. */
#define COW_ADDR_NET_CLOCK_INIT_TICK_RETURN 0x100DBE84u /* the call at 0x100dbe7f */
#define COW_ADDR_NET_CLOCK_ADVANCE_TICK_RETURN 0x100DBF27u /* the call at 0x100dbf22 */
#define COW_ADDR_NET_CLOCK_RESET_TICK_RETURN 0x100DC17Bu   /* the call at 0x100dc176, in f_100dc150 - the
                                                              same thunk a third time */
/* The pump's first action: the converted f_100dbf20, whose own entry in this cluster is the reason it
   is called from here once per frame. */
#define COW_ADDR_NET_CLOCK_ADVANCE_MS_FN 0x100DBF20u  /* 0x100dbeb0: call, in f_100dbeb0 */
#define COW_ADDR_NET_CLOCK_ADVANCE_MS_RETURN 0x100DBEB5u
/* f_100dbf00 (cow_clock_window_delta) is called from both sides of the clock's pump, and each caller
   cleans its own three cdecl arguments with `add esp,0xc` (0x100dbed2 and 0x100dbf3a). */
#define COW_ADDR_CLOCK_WINDOW_DELTA_FN 0x100DBF00u
#define COW_ADDR_CLOCK_WINDOW_DELTA_RETURN_PUMP 0x100DBECCu /* the call at 0x100dbec7 in f_100dbeb0 */
#define COW_ADDR_CLOCK_WINDOW_DELTA_RETURN_ADVANCE 0x100DBF3Au /* the call at 0x100dbf35 in f_100dbf20 */
/* The two entries already converted that the pump calls in sequence, and the tabled row the stand-up
   calls: 0x100dbde0 is one row of src/tables/cow_trivial_rows.def, so it is bridged like a thunk. */
#define COW_ADDR_NET_CLOCK_INIT_HOOK_FN 0x100DBDE0u   /* 0x100dbe65: call - the tabled row */
#define COW_ADDR_NET_CLOCK_INIT_HOOK_RETURN 0x100DBE6Au
#define COW_ADDR_STAMP_NET_CLOCK_TICK_FN 0x100DC1F0u  /* 0x100dbe98: call, in f_100dbe50 */
#define COW_ADDR_STAMP_NET_CLOCK_TICK_RETURN 0x100DBE9Du
#define COW_ADDR_ADVANCE_NET_CLOCK_TICK_FN 0x100DC210u /* 0x100dbeef: call, in f_100dbeb0 */
#define COW_ADDR_ADVANCE_NET_CLOCK_TICK_RETURN 0x100DBEF4u

/* --- f_102d8be9: the quaternion built from an axis and an angle (2026-11-05) -----------------------

   The entry writes four floats into its first argument - three from a vector a table routine fills,
   each scaled by the sine of half the angle, and the fourth (at +0x0c) the cosine of that half - which
   is the axis-angle to quaternion construction, field for field. The vector is not computed here: it
   comes through the table thunk below, whose slot the harness pins (see the seed) because the routine
   behind it is the unconverted table refresh, the same chain that holds 0x102d920a. */
#define COW_ADDR_VECTOR3_TABLE_THUNK 0x102D64B1u     /* `jmp dword ptr [COW_ADDR_VECTOR3_TABLE_SLOT]` - the
                                                    ledger books it as a thunk (nothing to convert). Two
                                                    callers read its contract: f_102d8be9 hands it
                                                    (local, param) and multiplies the three floats it
                                                    finds there by the sine of a half angle; f_102d9502
                                                    hands it (object, object) and takes a dot product of
                                                    the same three floats afterwards. What is proved is
                                                    therefore "fills a vector3 from what it is given",
                                                    and nothing more - it is NOT named a normaliser,
                                                    because no reading has shown the length it produces.
                                                    f_102d7c47 is the third caller: it hands it the SAME
                                                    buffer twice (0x102d7c7d and 0x102d7c81 both push
                                                    `lea eax,[ebp-0x1c]`, the frame's copy of the caller's
                                                    axis) and then builds a rotation matrix from the three
                                                    floats it finds there - in=and out=, which is what a
                                                    normaliser looks like, and still not proof of one */
#define COW_ADDR_VECTOR3_TABLE_SLOT 0x103CC42Cu      /* slot 7 of the 0x39-dword function table at
                                                    0x103cc410; its file image holds the trampoline
                                                    0x102d64a4 (`push 1 / call 0x102e7670 /
                                                    jmp [0x103cc42c]`), so left alone it re-enters
                                                    itself through the unconverted refresh chain */
#define COW_ADDR_VECTOR3_TABLE_RETURN_A 0x102D8BFBu    /* the word the callee's epilogue pops for
                                                          f_102d8be9's call at 0x102d8bf6 */
#define COW_ADDR_VECTOR3_TABLE_RETURN_B 0x102D9581u    /* and for f_102d9502's call at 0x102d957c */
#define COW_ADDR_VECTOR3_TABLE_RETURN_C 0x102D7C88u    /* and for f_102d7c47's call at 0x102d7c83, where
                                                    both arguments are the entry's own frame copy of the
                                                    axis */
#define COW_ADDR_VECTOR3_TABLE_RETURN_D 0x102D804Eu    /* and for f_102d8019's FIRST call, at 0x102d8049,
                                                    where both arguments are the frame copy of
                                                    (eye - at) */
#define COW_ADDR_VECTOR3_TABLE_RETURN_E 0x102D8098u    /* and for the SECOND call in the same entry, at
                                                    0x102d8093, where both arguments are the frame copy of
                                                    up x (eye - at). Two sites, so two words for the
                                                    callee's epilogue to pop, and cowdiff compares both */
#define COW_ADDR_VECTOR3_TABLE_RETURN_F 0x102D8196u    /* f_102d8161's first call, at 0x102d8191: the frame
                                                    copy of (target - position), pushed twice */
#define COW_ADDR_VECTOR3_TABLE_RETURN_G 0x102D81E0u    /* and its second, at 0x102d81db: the frame copy of
                                                    up x that difference, pushed twice. Five sites for one
                                                    thunk across the geometry cluster, so five words the
                                                    callee's epilogue pops and cowdiff compares */
#define COW_ADDR_QUAT_FUNCTION_TABLE 0x103CC410u /* the table itself, 0x39 dwords, restored from its
                                                    pristine copy at 0x103cc4f8 by 0x102e7670 */

/* --- the same table, slot 21: the four floats the two matrix builders read (2026-11-05) -------------

   f_102da2b2 and f_102da1d8 are the only two callers of this thunk (tools/cow/owner_index.py
   0x102d9345: `call/jmp from 0x102da1e5` and `from 0x102da2bf`), and they agree on its shape: push the
   parameter, push a four-float buffer, call, read four floats back. What they then BUILD agrees too -
   both write sixteen floats in four columns of four, which is why both entries are read as matrix
   builders and the buffer as the matrix's input vector. Only f_102da2b2 says what the four MEAN: it
   writes I - 2nn^T in the upper-left 3x3, -2wn in the fourth column and 1 at (3,3), which is the
   reflection in the plane with normal n = (v0,v1,v2) and offset w = v3. So the four are read as a
   plane, matching the object f_102d9502 fills three fields of (normal plus offset) at +0x00..+0x0c. */
#define COW_ADDR_VECTOR4_TABLE_THUNK 0x102D9345u   /* `jmp dword ptr [COW_ADDR_VECTOR4_TABLE_SLOT]` - a
                                                    thunk, so bridged and never converted. Its slot's file
                                                    image holds the trampoline 0x102d9338 (`push 1 / call
                                                    0x102e7670 / jmp [slot]`), the same unconverted refresh
                                                    chain as the vector3 slot, so the seed pins the slot to
                                                    a row that returns and pins the four floats too */
#define COW_ADDR_VECTOR4_TABLE_SLOT 0x103CC464u    /* slot 21 of COW_ADDR_QUAT_FUNCTION_TABLE (0x103cc410
                                                    + 0x54) */
#define COW_ADDR_VECTOR4_TABLE_RETURN_A 0x102DA2C4u /* the word the callee's epilogue pops for
                                                    f_102da2b2's call at 0x102da2bf */
#define COW_ADDR_VECTOR4_TABLE_RETURN_B 0x102DA1EAu /* and for f_102da1d8's call at 0x102da1e5 */
#define COW_ADDR_FLOAT_NEG_TWO 0x1032C084u         /* the dword 0xc0000000 = -2.0f, the 2 of I - 2nn^T;
                                                    read three times by f_102da2b2 (0x102da2c7/0x102da2d3/
                                                    0x102da2dc) */
#define COW_ADDR_FLOAT_ONE 0x1032961Cu             /* the dword 0x3f800000 = 1.0f, added to the three
                                                    diagonal terms at 0x102da2e5. Named because f_102da2b2
                                                    ALSO stores a 1.0f at (3,3), and that one comes from
                                                    `fld1` at 0x102da368 instead of from this address: same
                                                    value, different origin, and the difference is the
                                                    reading */
#define COW_ADDR_FLOAT_ZERO_103295D8 0x103295D8u  /* the dword 0x00000000 = +0.0f. Named by address rather
                                                    than called "zero" because it is a GUARD, not an
                                                    operand: f_102e7f5a compares the caller's angle against
                                                    it twice, with `fcom` at 0x102e7f93 (which leaves the
                                                    angle on the stack) and with `fcomp` at 0x102e7fd5
                                                    (which pops it), and both `test ah,0x44 / jnp` take on
                                                    EQUAL only - unordered has C2 and C3 both set and so has
                                                    even parity. So NaN is NOT the skipped case: zero is */
#define COW_ADDR_FLOAT_NEG_ONE 0x1032A3D0u         /* the dword 0xbf800000 = -1.0f, loaded at 0x102e7faa and
                                                    multiplied into the angle by the `fmul st(1)` at
                                                    0x102e7fb0, which side A confirms is st(0)*st(1) - so
                                                    what fsin and fcos are given at 0x102e7fb4/0x102e7fb9 is
                                                    -angle, ONE value used by both through the `fld st(0)`
                                                    at 0x102e7fb2, and not a scaled angle */
#define COW_ADDR_SCALE_ROT_THUNK 0x102D7D56u       /* `jmp dword ptr [0x103cc4a8]`, in the same function
                                                    table as COW_ADDR_AXES_THUNK. Reached from f_102d7ef1
                                                    at 0x102d7f59 with two words pushed - the caller's
                                                    rotation pointer and a scratch slot in the entry's own
                                                    frame - and cleaned by the callee, which the two `lea
                                                    eax,[esp+0x14]` / `lea eax,[esp+0x10]` at 0x102d7f54
                                                    and 0x102d7f63 prove: both must name the SAME scratch
                                                    word, and they only do if the first call's arguments
                                                    are popped by the callee. Bridged and stubbed, never
                                                    converted. What it does to the scratch slot is not
                                                    established by anything this entry shows */
#define COW_ADDR_SCALE_ROT_THUNK_SLOT 0x103CC4A8u  /* the table word behind it */
#define COW_ADDR_SCALE_ROT_THUNK_RETURN 0x102D7F5Eu /* the instruction after that call */

#define COW_ADDR_ORIENT_THUNK 0x102D6F23u          /* `jmp dword ptr [0x103cc41c]` - the first slot of the
                                                    same table. Reached from f_102d7ef1 TWICE, at 0x102d7f86
                                                    and at 0x102d7fa7, each time with three words pushed
                                                    (the scratch slot and the matrix pointer twice) and
                                                    cleaned by the callee. The two sites are why there are
                                                    two return-address macros below: the same routine
                                                    reached from two places has to leave two different
                                                    words on the stack */
#define COW_ADDR_ORIENT_THUNK_SLOT 0x103CC41Cu     /* the table word behind it */
#define COW_ADDR_ORIENT_THUNK_RETURN_A 0x102D7F8Bu /* the word the callee pops for the call at 0x102d7f86,
                                                    the one on the path where the offset pointer existed */
#define COW_ADDR_ORIENT_THUNK_RETURN_B 0x102D7FACu /* and for the call at 0x102d7fa7, the path where it
                                                    did not */

#define COW_ADDR_AXES_THUNK 0x102D7E83u            /* `jmp dword ptr [COW_ADDR_AXES_THUNK_SLOT]` - a table
                                                    thunk like COW_ADDR_VECTOR4_TABLE_THUNK, so bridged and
                                                    never converted, and STUBBED in the seed: its slot's file
                                                    image holds the unconverted refresh trampoline, which the
                                                    fuzzed states would follow into recursion until the
                                                    harness's own stack goes. Reached from f_102e7f5a at
                                                    0x102e8010 with seven words pushed and no `add esp`
                                                    afterwards, so the callee cleans them */
#define COW_ADDR_AXES_THUNK_SLOT 0x103CC4ACu       /* the table word behind the thunk */
#define COW_ADDR_AXES_THUNK_RETURN 0x102E8015u     /* the word the callee's epilogue pops: the instruction
                                                    after the call at 0x102e8010 */
#define COW_ADDR_AXES_VTABLE_RETURN 0x102E802Bu    /* the word the vtable slot's epilogue pops: the
                                                    `pop edi` at 0x102e802b, which is where the entry
                                                    goes after the indirect call at 0x102e8028 */
#define COW_OFF_VTABLE_SET_ORIENT 0x18u            /* the vtable slot the entry calls indirectly at
                                                    0x102e8028 - `call dword ptr [ecx+0x18]` with ecx the
                                                    first word of the object at [ebp+8], i.e. slot 6. Named
                                                    because a bare 0x18 there would be an unexplained
                                                    offset in user code; what the slot does is not
                                                    established by anything this entry shows */

#define COW_ADDR_FLOAT_HALF 0x10329A08u          /* the dword 0x3f000000 = 0.5f, read at 0x102d8c01.
                                                    Worth naming because it is the address that once
                                                    clustered six unrelated functions as "one object":
                                                    187 bodies cite it (tools/cow/cluster.py's
                                                    MAX_OBJECT_REFS test exists because of it) */

/* --- the net clock's second cluster: f_100dc090 / f_100dc0a0 / f_100dc0e0 / f_100dc150 / f_100dc1b0
   (2026-11-05) - the five that SET the clock and read it back in other units -----------------------

   Same object as the first cluster (COW_ADDR_FRAME_NET_CLOCK_PTR); cluster.py grew them from it. These
   are the clock's setter side: two that write the pair the advance drains, one that resets everything
   including the sample array, and two that ask the accumulator how far ahead the clock is. */
#define COW_ADDR_DOUBLE_TO_INT64_FN 0x10311C6Cu   /* the game's own truncating conversion: it reads st(0),
                                                     reloads the FPU control word with the rounding bits
                                                     set to truncate-toward-zero (`or ah,0xc` at
                                                     0x10311c7b), `fistp qword ptr [ebp-0xc]`, restores
                                                     the word, and hands back eax=low / edx=high. No
                                                     stack arguments, cdecl, bare `ret`. */
#define COW_ADDR_DOUBLE_TO_INT64_RETURN_A 0x100DC0C8u /* the call at 0x100dc0c3, in f_100dc0a0 */
#define COW_ADDR_DOUBLE_TO_INT64_RETURN_B 0x100DC108u /* the call at 0x100dc103, in f_100dc0e0 */
#define COW_ADDR_NET_CLOCK_MS_RATE 0x10331810u    /* the dword 0xbd75c28f = -0.06f (tools/cow/peek_bytes.py),
                                                     what both f_100dc0a0 and f_100dc0e0 multiply the
                                                     millisecond accumulator by before truncating it.
                                                     The next dword is 1/2pi, so this is one entry of a
                                                     table of float constants, not a value with a name
                                                     of its own; what -0.06 means is not established */

#endif /* COW_LAYOUT_ADDRESSES_H */
