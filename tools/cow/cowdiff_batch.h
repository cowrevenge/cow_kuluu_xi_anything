/* tools/cow/cowdiff_batch.h - the contract between the harness and a TABLE build.

   A normal cowdiff run compares one entry: the generated target file defines cow_side_a/cow_side_b and
   the harness loops states once. A table run compares every row of src/tables/cow_trivial_rows.def in
   one process - one mapped image, one DllMain, one link - and each row brings its own instrumented
   original, its own adapter and its own coverage counters. Both builds answer the same questions; only
   the number of entries differs, and this header is what they agree on.

   tools/cow/cowdiff.py's render() defines the two symbols as "no batch"; tools/cow/table_proof.py's
   render_table() defines them as the rows. The harness reads them and never cares which build it is in.
*/
#ifndef COW_COWDIFF_BATCH_H
#define COW_COWDIFF_BATCH_H

#include "guest.h"

typedef struct
{
    const char* entry;      /* "10001370" - what the PASS line says */
    unsigned int va;        /* the same number as a word, so the state seeding differs per entry */
    GuestFn a;              /* the instrumented generated original, unique to this row */
    GuestFn b;              /* the adapter src/tables/cow_trivial.c minted from the row */
    unsigned* cov;          /* this row's coverage counters */
    unsigned cov_count;
    const char* const* sites; /* the instruction text behind each counter, for the unreached list */
    int has_adapter;
    /* ---- judge v2: the unit's contract. ALL ZERO = the strict, legacy comparison, so a renderer that
       does not fill these in (table_proof, an old lift_proof) changes nothing. They are read only when
       the run asks for the contract grade (cowdiff.exe --grade contract).
         eax_dead    bits of eax no caller reads: 0xFFFFFFFF for a function that returns nothing or
                     returns in st(0), 0xFFFFFF00 for a byte result, 0xFFFF0000 for a word result,
                     0 for a full 32-bit result
         edx_dead    1 unless the function returns a 64-bit value in edx:eax
         stack_args  how many of the entry's OWN argument words sit above the return address; a callee
                     owns its parameter slots and may scribble on them, so they are not compared */
    unsigned int eax_dead;
    int edx_dead;
    unsigned int stack_args;
    /* ---- judge v3 (cowdiff.exe --stategen 3): the unit's world list. NULL/0 = none, so a renderer that
       does not fill these in changes nothing. (address, width in bytes) pairs, world_count numbers in all:
       image data words the entry or the functions it calls depend on (tools/cow/judge2.py:world_list).
       The harness gives them something to hold in some states - see THE GLOBALS in tools/cow/cowdiff.c. */
    const unsigned* world;
    unsigned int world_count;
    /* ---- judge v4 (cowdiff.exe --stategen 4): the unit's stub list. NULL/0 = none. (callee address,
       bytes its own ret pops) pairs, stub_count numbers in all (tools/cow/judge2.py:stub_list). In a
       quarter of the states the harness answers those calls itself - see THE CALLEES ANSWER in
       tools/cow/cowdiff.c. */
    const unsigned* stubs;
    unsigned int stub_count;
    /* ---- judge 7: the row's own pinned states. NULL/0 = none. Option/value pairs, pin_count strings in
       all, exactly as a single run takes them on its command line (--pin-args, --pin-reg, --pin-mem,
       --pin-answer, --stub, --pin-call): tools/cow/ghidra/lift_proof.py flattens cow/seeds/<hex>.json and
       cow/seeds_auto/<hex>.json into them. They run before the fuzzed states. */
    const char* const* pins;
    unsigned int pin_count;
    /* ---- judge 14, BLOCK ENTRY: int cow_entry_fix_<entry>(Guest*, uint32_t block), the unit's own (rise.py
       writes it), that makes a state agree with what the unit assumes at a block before both sides start
       there (--pin-entry). NULL: the row's states all start at the entry. */
    const void* entry_fix;
    /* ---- judge 15, THE ORIGINAL'S OWN FRAME: 1 + the bytes the entry's own `ret N` takes off the stack
       (tools/cow/judge2.py:callee_purge), 0 when that is not known. A state after which side A comes back
       with esp anywhere else did not return to its caller: a callee it reached popped what its call did not
       push (a made-up object's method), so the original itself broke the frame every caller relies on. Like
       a fault, that is not an input the contract speaks about: counted, never compared. */
    unsigned int ret_pop1;
    /* ---- judge 15, THE X87 STACK A CALLEE LEAVES: (callee address, 8 + values it leaves on its caller's x87
       stack) pairs, x87_count numbers in all, for the callees on the row's lists that do not leave it as they
       found it (judge2.x87_list): +1 a float result, -1 _ftol. An answer the harness gives for one of them does
       to the x87 stack what the callee would, so the caller goes on from the stack the program has. */
    const unsigned* x87;
    unsigned int x87_count;
} CowBatchRow;

extern const CowBatchRow* cow_batch_rows;   /* NULL in a single-entry build */
extern const unsigned cow_batch_count;

/* The coverage counter, with the batch's per-row time budget riding on it. Instrumented bodies call
   this instead of bumping their counter directly, because a row that spins inside ONE fuzzed state
   never returns to a loop where a check could live - the counter is the only code guaranteed to run.
   (tools/cow/cowdiff.c defines it; cow_check_budget unwinds to the row guard.) */
void cow_tick(unsigned* counter);

#endif /* COW_COWDIFF_BATCH_H */
