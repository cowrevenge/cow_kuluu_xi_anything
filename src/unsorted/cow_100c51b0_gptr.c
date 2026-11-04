/* f_100c51b0 - the whole original is `mov eax, 0x10330ec8 / ret`: it hands out the address of a static block - 0x10330ec8, named in layout/addresses.h as COW_ADDR_UNK_10330EC8 (what lives there is not yet established)

   The body is one honest line - it says exactly what those instructions do, and it stays in this file because the address it reads is the per-entry part;  what is per-entry is the adapter below, and what makes it done is cowdiff against this
   entry's generated original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger
   can say who calls it.

   Name: `cow_addr_unk_10330ec8` (guess). see cow/names.csv
*/
#include "cow.h"

uint32_t cow_addr_unk_10330ec8(void)
{
    return COW_ADDR_UNK_10330EC8; /* named in layout/addresses.h, never a raw number here */
}

/* COW_ADAPTER BEGIN - the original is `mov eax, 0x10330ec8 / ret`; its ret pops 0 bytes above the return address and
   leaves eax that address. The readability gate skips this block. */
void cow_adapter_100c51b0(Guest* g)
{
    g->eax = cow_addr_unk_10330ec8();
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
