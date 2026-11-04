/* f_10161be0 - the whole original is `mov eax, 8 / ret`: it returns the constant 8 (mov eax, 8 is the whole function)

   The body is shared (src/util/cow_return.c) because a lot of entries compile to exactly this;  what is per-entry is the adapter below, and what makes it done is cowdiff against this
   entry's generated original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger
   can say who calls it.

   Name: `cow_return_value` (guess). see cow/names.csv
*/
#include "cow.h"

uint32_t cow_return_value(uint32_t v);

/* COW_ADAPTER BEGIN - the original is `mov eax, 8 / ret`; its ret pops 0 bytes above the return address and
   leaves eax the constant 8. The readability gate skips this block. */
void cow_adapter_10161be0(Guest* g)
{
    g->eax = cow_return_value(8u);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
