/* f_1013ab50 - the whole original is `mov eax, 0x1036fd98 / ret`: it hands out the address of a static block - 0x1036fd98, named in layout/addresses.h as COW_ADDR_UNK_1036FD98 (what lives there is not yet established)

   The body is one honest line - it says exactly what those instructions do, and it stays in this file because the address it reads is the per-entry part;  what is per-entry is the adapter below, and what makes it done is cowdiff against this
   entry's generated original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger
   can say who calls it.

   Name: `cow_menu_vf17` (guess). vtable 0x10333e70 slot 17/19 - a virtual method;vtable named menu from the vocabulary its slots cite: menu x2, itemyinf x2
*/
#include "cow.h"

uint32_t cow_addr_unk_1036fd98(void)
{
    return COW_ADDR_UNK_1036FD98; /* named in layout/addresses.h, never a raw number here */
}

/* COW_ADAPTER BEGIN - the original is `mov eax, 0x1036fd98 / ret`; its ret pops 0 bytes above the return address and
   leaves eax that address. The readability gate skips this block. */
void cow_adapter_1013ab50(Guest* g)
{
    g->eax = cow_addr_unk_1036fd98();
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
