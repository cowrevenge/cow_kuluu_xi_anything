/* f_10001370 - the one-byte function: `ret 4`, and nothing else - and the ledger says who calls it.

   The body is shared (src/util/cow_return.c) because a lot of entries compile to exactly this; what is
   per-entry is the adapter below, and what makes it done is cowdiff against this entry's generated
   original plus tools/cow/gate.ps1.

   Name: `cow_vf1_at_1032e890` (placeholder). vtable 0x1032e890 slot 1/1056 - a virtual method
*/
#include "cow.h"

void cow_return_immediate(void);

/* COW_ADAPTER BEGIN - the original pops ret 4 (4 bytes) above the return address and
   leaves eax exactly as it found it. The readability gate skips this block. */
void cow_adapter_10001370(Guest* g)
{
    cow_return_immediate();
    rt_return(g, g->eax, 4);
}
/* COW_ADAPTER END */
