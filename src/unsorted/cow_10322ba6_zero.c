/* f_10322ba6 - the whole original is `xor eax, eax / ret`: it answers 0

   The body is shared (src/util/cow_return.c) because a lot of entries compile to exactly this; what is
   per-entry is the adapter below, and what makes it done is cowdiff against this entry's generated
   original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger can say who calls it.

   Name: `cow_table_entry_at_10322ba6` (placeholder). data reference(s) in .data at 0x103d0744 - entered through a table or struct slot, not a call
*/
#include "cow.h"

uint32_t cow_return_zero(void);

/* COW_ADAPTER BEGIN - the original is `xor eax, eax / ret`; its ret pops 0 bytes above the return address and
   leaves eax zero. The readability gate skips this block. */
void cow_adapter_10322ba6(Guest* g)
{
    g->eax = cow_return_zero();
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
