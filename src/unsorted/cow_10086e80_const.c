/* f_10086e80 - the whole original is `mov eax, 0x1032d44c / ret`: it returns the constant 271766604 (mov eax, 0x1032d44c is the whole function)

   The body is shared (src/util/cow_return.c) because a lot of entries compile to exactly this; what is
   per-entry is the adapter below, and what makes it done is cowdiff against this entry's generated
   original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger can say who calls it.

   Name: `cow_vf0_at_1032e3c8` (placeholder). vtable 0x1032e3c8 slot 0/283 - a virtual method
*/
#include "cow.h"

uint32_t cow_return_value(uint32_t v);

/* COW_ADAPTER BEGIN - the original is `mov eax, 0x1032d44c / ret`; its ret pops 0 bytes above the return address and
   leaves eax the constant 271766604. The readability gate skips this block. */
void cow_adapter_10086e80(Guest* g)
{
    g->eax = cow_return_value(271766604u);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
