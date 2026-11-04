/* f_10142d90 - the whole original is `mov eax, 0x10371484 / ret`: it hands out the address of a static block - 0x10371484, named in layout/addresses.h as COW_ADDR_UNK_10371484 (what lives there is not yet established)

   The body is shared (src/util/cow_return.c) because a lot of entries compile to exactly this;  what is per-entry is the adapter below, and what makes it done is cowdiff against this
   entry's generated original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger
   can say who calls it.

   Name: `cow_mp_mntp2_vf25` (guess). vtable 0x1033414c slot 25/44 - a virtual method;vtable named mp_mntp2 from the vocabulary its slots cite: mp_mntp2 x2, menu x1
*/
#include "cow.h"

uint32_t cow_addr_unk_10371484(void);

/* COW_ADAPTER BEGIN - the original is `mov eax, 0x10371484 / ret`; its ret pops 0 bytes above the return address and
   leaves eax that address. The readability gate skips this block. */
void cow_adapter_10142d90(Guest* g)
{
    g->eax = cow_addr_unk_10371484();
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
