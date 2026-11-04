/* f_101e30b0 - the whole original is `mov al, 1 / ret 0xc`: it answers yes (only al is written; the rest of eax is left alone)

   The body is shared (src/util/cow_return.c) because a lot of entries compile to exactly this; what is
   per-entry is the adapter below, and what makes it done is cowdiff against this entry's generated
   original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger can say who calls it.

   Name: `cow_vf38_at_10339298` (placeholder). vtable 0x10339298 slot 38/39 - a virtual method
*/
#include "cow.h"

uint32_t cow_always_true(uint32_t eax);

/* COW_ADAPTER BEGIN - the original is `mov al, 1 / ret 0xc`; its ret pops 12 bytes above the return address and
   leaves eax al = 1 with the other three bytes untouched. The readability gate skips this block. */
void cow_adapter_101e30b0(Guest* g)
{
    g->eax = cow_always_true(g->eax);
    rt_return(g, g->eax, 12);
}
/* COW_ADAPTER END */
