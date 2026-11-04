/* f_100c38f0 - the whole original is `xor al, al / ret 0xc`: it answers no (only al is cleared; the rest of eax is left alone)

   The body is shared (src/util/cow_return.c) because a lot of entries compile to exactly this; what is
   per-entry is the adapter below, and what makes it done is cowdiff against this entry's generated
   original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger can say who calls it.

   Name: `cow_vf159_at_10330288` (placeholder). vtable 0x10330288 slot 159/255 - a virtual method
*/
#include "cow.h"

uint32_t cow_always_false(uint32_t eax);

/* COW_ADAPTER BEGIN - the original is `xor al, al / ret 0xc`; its ret pops 12 bytes above the return address and
   leaves eax al = 0 with the other three bytes untouched. The readability gate skips this block. */
void cow_adapter_100c38f0(Guest* g)
{
    g->eax = cow_always_false(g->eax);
    rt_return(g, g->eax, 12);
}
/* COW_ADAPTER END */
