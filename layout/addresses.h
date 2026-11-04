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

#endif /* COW_LAYOUT_ADDRESSES_H */
