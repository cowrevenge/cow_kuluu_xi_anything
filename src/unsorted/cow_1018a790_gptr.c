/* f_1018a790 - the whole original is `mov eax, 0x103367dc / ret`: it hands out the address of a static block - 0x103367dc, named in layout/addresses.h as COW_ADDR_UNK_103367DC (what lives there is not yet established)

   The body is shared (src/util/cow_return.c) because a lot of entries compile to exactly this;  what is per-entry is the adapter below, and what makes it done is cowdiff against this
   entry's generated original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger
   can say who calls it.

   Name: `cow_cyyobject_vf11` (guess). vtable 0x103367e8 slot 11/17 - a virtual method;vtable named CYyObject from the vocabulary its slots cite: vtable metadata cites the class tag CYyObject
*/
#include "cow.h"

uint32_t cow_addr_unk_103367dc(void);

/* COW_ADAPTER BEGIN - the original is `mov eax, 0x103367dc / ret`; its ret pops 0 bytes above the return address and
   leaves eax that address. The readability gate skips this block. */
void cow_adapter_1018a790(Guest* g)
{
    g->eax = cow_addr_unk_103367dc();
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
