/* f_101cc1b0 - the whole original is `mov al, byte ptr [0x1048098d] / ret`: it reads the byte at the global 0x1048098d into al and leaves the other three bytes of eax exactly as the caller left them (that is what the instruction does); the address is named in layout/addresses.h as COW_ADDR_UNK_1048098D

   The body is shared (src/util/cow_addrs.c) because a lot of entries compile to exactly this;  what is per-entry is the adapter below, and what makes it done is cowdiff against this
   entry's generated original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger
   can say who calls it.

   Name: `cow_return_at_101cc1b0` (placeholder). called from 4 code site(s): 0x1007abfe, 0x10145297, 0x101cc182, 0x101f03c9
*/
#include "cow.h"

uint32_t cow_read_global_byte_1048098d(uint32_t eax);

/* COW_ADAPTER BEGIN - the original is `mov al, byte ptr [0x1048098d] / ret`; its ret pops 0 bytes above the return address and
   leaves eax al = that byte, the rest untouched. The readability gate skips this block. */
void cow_adapter_101cc1b0(Guest* g)
{
    g->eax = cow_read_global_byte_1048098d(g->eax);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
