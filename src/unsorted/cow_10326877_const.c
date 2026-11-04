/* f_10326877 - the whole original is `push 1 / pop eax / ret`: it returns the constant 1 (push 1 / pop eax is how MSVC loads an immediate where mov would clobber flags)

   The body is shared (src/util/cow_return.c) because a lot of entries compile to exactly this; what is
   per-entry is the adapter below, and what makes it done is cowdiff against this entry's generated
   original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger can say who calls it.

   Name: `cow_return_1` (guess). see cow/names.csv
*/
#include "cow.h"

uint32_t cow_return_1(void);

/* COW_ADAPTER BEGIN - the original is `push 1 / pop eax / ret`; its ret pops 0 bytes above the return address and
   leaves eax the constant 1. The readability gate skips this block. */
void cow_adapter_10326877(Guest* g)
{
    wr32(g->esp - 4, 1u); /* the push 1, visible in memory after the pop restores esp */
    g->eax = cow_return_1();
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
