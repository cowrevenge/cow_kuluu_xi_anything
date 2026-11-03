/* layout/enums.h - named constants taken from the game's own comparisons. An enum entry is only
   allowed with the instruction that proves it, in the comment. */
#ifndef COW_LAYOUT_ENUMS_H
#define COW_LAYOUT_ENUMS_H

/* Flags byte at CowCountedObj.flags_1c. */
enum
{
    /* f_100083b0: `test byte ptr [eax + 0x1c], 1` then `je` past the increment, so bit 0 must be set
       for the counter to move. What the game calls it is not known: cow/names.csv has it as
       confidence=guess and NAMES_TODO.md lists it. */
    COW_COUNTED_FLAGS_ACTIVE = 1u << 0
};

#endif /* COW_LAYOUT_ENUMS_H */
