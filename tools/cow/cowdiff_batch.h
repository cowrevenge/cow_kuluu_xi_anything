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
} CowBatchRow;

extern const CowBatchRow* cow_batch_rows;   /* NULL in a single-entry build */
extern const unsigned cow_batch_count;

/* The coverage counter, with the batch's per-row time budget riding on it. Instrumented bodies call
   this instead of bumping their counter directly, because a row that spins inside ONE fuzzed state
   never returns to a loop where a check could live - the counter is the only code guaranteed to run.
   (tools/cow/cowdiff.c defines it; cow_check_budget unwinds to the row guard.) */
void cow_tick(unsigned* counter);

#endif /* COW_COWDIFF_BATCH_H */
