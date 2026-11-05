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
/* The composition query f_101b3f70 makes. COW_IME_GCS_COMPSTR is the literal 8 pushed at
   0x101b3f92 between the context handle and the buffer - ImmGetCompositionStringA's index argument, and
   8 is GCS_COMPSTR, "the string the user is still composing". COW_IME_COMPOSITION_BUF_BYTES is the
   0x100 the entry reserves with `sub esp, 0x100` at 0x101b3f75 and pushes again at 0x101b3f8a as the
   buffer length, so the reserve and the length argument are the same number and cannot drift apart.
   That the query is about composition rather than the reading string (GCS_RESULTSTR) follows from the
   constant's meaning; the value the code compares is the returned byte count. */
enum
{
    COW_IME_GCS_COMPSTR = 8u,
    COW_IME_COMPOSITION_BUF_BYTES = 0x100u
};

enum { COW_NET_CLOCK_WRAP_MS = 0xE0000000u };

/* The three numbers f_100dbf20 / f_100dbfe0 use, each named for the instruction that uses it.
   COW_NET_CLOCK_MS_PER_SECOND is the push 0x3e8 at 0x100dbec2 and the cmp against it at 0x100dbfa4 /
   0x100dbfc7 (and the -0x3e8 the loop adds at 0x100dbfa9), i.e. the carry from milliseconds into the
   seconds counter. COW_NET_CLOCK_MS_NEG is that same constant as the two's-complement word the code
   actually loads into edx at 0x100dbfa9. COW_NET_CLOCK_DRIFT_MAX is the 0x14 that appears four times
   in f_100dbf20's clamp (0x100dbf54 cmp 0x14, 0x100dbf5f cmp -0x14, 0x100dbf64 mov 0xffffffec,
   0x100dbf75 cmp 0x14, 0x100dbf7a mov 0x14): the drift never moves by more than 20 ms in one step.
   COW_NET_CLOCK_SAMPLES is the f_100dbfe0 bound: `cmp eax, 0xa / jb` at 0x100dbfe4-0x100dbfe7 refuses
   any index at or above 10, and the object has exactly 10 sample words at +0x18 and 10 flag bytes at
   +0x40. That they count seconds, milliseconds, a rate limit and a sample count is a reading of the
   arithmetic; the comparisons themselves are the game's. */
enum
{
    COW_NET_CLOCK_MS_PER_SECOND = 1000u,
    COW_NET_CLOCK_MS_NEG = 0xfffffc18u, /* -1000, the word at 0x100dbfa9 */
    COW_NET_CLOCK_DRIFT_MAX = 20,       /* 0x14 */
    COW_NET_CLOCK_SAMPLES = 10,         /* 0xa */
    /* f_100dbf20's own f_100dbf00 call pushes it as the cap (0x100dbf33, `push -1`), where the pump
       f_100dbeb0 pushes COW_NET_CLOCK_MS_PER_SECOND (0x100dbec2). The callee only uses cap on its
       wrapped path (`cap - base + value` at 0x100dbf0c-0x100dbf12), so -1 asks for the plain wrapped
       difference minus one tick rather than for a window: the advance measures the tick against
       everything, the pump measures it against one frame's worth. */
    COW_NET_CLOCK_WINDOW_OPEN = 0xffffffffu
};

/* The SEH unwind state bits the runtime's RtlUnwind shim ORs into EXCEPTION_RECORD.ExceptionFlags
   (runtime/portable/k32_misc.c:241-242, EH_UNWINDING/EH_EXIT_UNWIND). f_103162e8 is the game side of
   the same agreement: after the unwind it clears EH_UNWINDING alone (`and al, 0xfd` at 0x10316316)
   and leaves every other bit, including EH_EXIT_UNWIND, exactly as the unwinder set it. */
enum
{
    COW_EH_UNWINDING = 2u,
    COW_EH_EXIT_UNWIND = 4u
};

#endif /* COW_LAYOUT_ENUMS_H */
