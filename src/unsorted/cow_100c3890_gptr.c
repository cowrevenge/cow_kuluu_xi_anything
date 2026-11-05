/* f_100c3890 - the whole original is `mov eax, 0x10330278 / ret`: it hands out the address of a static block - 0x10330278, named in layout/addresses.h as COW_ADDR_UNK_10330278 (what lives there is not yet established)

   The body is shared (src/util/cow_return.c) because a lot of entries compile to exactly this;  what is per-entry is the adapter below, and what makes it done is cowdiff against this
   entry's generated original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger
   can say who calls it.

   Name: `cow_vf0_at_10330288` (placeholder). vtable 0x10330288 slot 0/255 - a virtual method
*/
#include "cow.h"

uint32_t cow_addr_unk_10330278(void);

/* COW_ADAPTER BEGIN - the original is `mov eax, 0x10330278 / ret`; its ret pops 0 bytes above the return address and
   leaves eax that address. The readability gate skips this block. */
void cow_adapter_100c3890(Guest* g)
{
    g->eax = cow_addr_unk_10330278();
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
