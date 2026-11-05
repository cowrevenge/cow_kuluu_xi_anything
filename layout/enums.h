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

/* f_100dc210 (cow_advance_net_clock_tick): after the millisecond tick is taken, `sub ecx, eax` /
   `cmp ecx, 0xe0000000` / `jb 0x100dc240`. The clock's stored tick may sit ahead of the live one by
   anything below this and the entry does nothing about it; at or above it the entry counts a wrap and
   restamps. A 32-bit millisecond counter comes round every 2^32 ms (49.7 days), so the margin this
   comparison leaves - 0xE0000000 ms, 43.5 days - is what separates "the clock jumped a little
   backwards" from "the counter has passed us". The value is the instruction's; that reading of it is
   ours and stays a guess (cow/names.csv). */
enum
{
    COW_NET_CLOCK_WRAP_MS = 0xE0000000u
};

#endif /* COW_LAYOUT_ENUMS_H */
