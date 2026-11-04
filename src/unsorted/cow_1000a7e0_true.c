/* f_1000a7e0 - the whole original is `mov al, 1 / ret 0x18`: it answers yes (only al is written; the rest of eax is left alone)

   The body is shared (src/util/cow_return.c) because a lot of entries compile to exactly this; what is
   per-entry is the adapter below, and what makes it done is cowdiff against this entry's generated
   original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger can say who calls it.

   Name: `cow_table_entry_at_1000a7e0` (placeholder). data reference(s) in POL1 at 0x10b4b21c - entered through a table or struct slot, not a call
*/
#include "cow.h"

uint32_t cow_always_true(uint32_t eax);

/* COW_ADAPTER BEGIN - the original is `mov al, 1 / ret 0x18`; its ret pops 24 bytes above the return address and
   leaves eax al = 1 with the other three bytes untouched. The readability gate skips this block. */
void cow_adapter_1000a7e0(Guest* g)
{
    g->eax = cow_always_true(g->eax);
    rt_return(g, g->eax, 24);
}
/* COW_ADAPTER END */
