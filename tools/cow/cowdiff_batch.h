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
} CowBatchRow;

extern const CowBatchRow* cow_batch_rows;   /* NULL in a single-entry build */
extern const unsigned cow_batch_count;

#endif /* COW_COWDIFF_BATCH_H */
