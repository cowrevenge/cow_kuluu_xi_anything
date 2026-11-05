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

#endif /* COW_LAYOUT_ADDRESSES_H */
