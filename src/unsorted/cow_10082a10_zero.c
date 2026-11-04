/* f_10082a10 - the whole original is `xor eax, eax / ret`: it answers 0

   The body is shared (src/util/cow_return.c) because a lot of entries compile to exactly this; what is
   per-entry is the adapter below, and what makes it done is cowdiff against this entry's generated
   original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger can say who calls it.

   Name: `cow_vf237_at_1032e890` (placeholder). vtable 0x1032e890 slot 237/1056 - a virtual method
*/
#include "cow.h"

uint32_t cow_return_zero(void);

/* COW_ADAPTER BEGIN - the original is `xor eax, eax / ret`; its ret pops 0 bytes above the return address and
   leaves eax zero. The readability gate skips this block. */
void cow_adapter_10082a10(Guest* g)
{
    g->eax = cow_return_zero();
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
