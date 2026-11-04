/* f_1013ab90 - the whole original is `mov eax, 0x1036fbb0 / ret`: it hands out the address of a static block - 0x1036fbb0, named in layout/addresses.h as COW_ADDR_UNK_1036FBB0 (what lives there is not yet established)

   The body is shared (src/util/cow_return.c) because a lot of entries compile to exactly this;  what is per-entry is the adapter below, and what makes it done is cowdiff against this
   entry's generated original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger
   can say who calls it.

   Name: `cow_menu_vf18` (guess). vtable 0x10333e70 slot 18/19 - a virtual method;vtable named menu from the vocabulary its slots cite: menu x2, itemyinf x2
*/
#include "cow.h"

uint32_t cow_addr_unk_1036fbb0(void);

/* COW_ADAPTER BEGIN - the original is `mov eax, 0x1036fbb0 / ret`; its ret pops 0 bytes above the return address and
   leaves eax that address. The readability gate skips this block. */
void cow_adapter_1013ab90(Guest* g)
{
    g->eax = cow_addr_unk_1036fbb0();
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
