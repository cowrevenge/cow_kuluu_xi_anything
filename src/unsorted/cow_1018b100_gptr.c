/* f_1018b100 - the whole original is `mov eax, 0x1033682c / ret`: it hands out the address of a static block - 0x1033682c, named in layout/addresses.h as COW_ADDR_UNK_1033682C (what lives there is not yet established)

   The body is shared (src/util/cow_return.c) because a lot of entries compile to exactly this;  what is per-entry is the adapter below, and what makes it done is cowdiff against this
   entry's generated original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger
   can say who calls it.

   Name: `cow_addr_unk_1033682c` (guess). see cow/names.csv
*/
#include "cow.h"

uint32_t cow_addr_unk_1033682c(void);

/* COW_ADAPTER BEGIN - the original is `mov eax, 0x1033682c / ret`; its ret pops 0 bytes above the return address and
   leaves eax that address. The readability gate skips this block. */
void cow_adapter_1018b100(Guest* g)
{
    g->eax = cow_addr_unk_1033682c();
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
