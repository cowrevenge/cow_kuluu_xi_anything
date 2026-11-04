/* f_10123ee0 - the whole original is `mov al, byte ptr [0x1036cf5c] / ret`: it reads the byte at the global 0x1036cf5c into al and leaves the other three bytes of eax exactly as the caller left them (that is what the instruction does); the address is named in layout/addresses.h as COW_ADDR_UNK_1036CF5C

   The body is one honest line - it says exactly what those instructions do, and it stays in this file because the address it reads is the per-entry part;  what is per-entry is the adapter below, and what makes it done is cowdiff against this
   entry's generated original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger
   can say who calls it.

   Name: `cow_return_at_10123ee0` (placeholder). called from 3 code site(s): 0x10123c0f, 0x1025e120, 0x1025e190
*/
#include "cow.h"

uint32_t cow_read_global_byte_1036cf5c(uint32_t eax)
{
    return (eax & ~0xffu) | rd8(COW_ADDR_UNK_1036CF5C);
}

/* COW_ADAPTER BEGIN - the original is `mov al, byte ptr [0x1036cf5c] / ret`; its ret pops 0 bytes above the return address and
   leaves eax al = that byte, the rest untouched. The readability gate skips this block. */
void cow_adapter_10123ee0(Guest* g)
{
    g->eax = cow_read_global_byte_1036cf5c(g->eax);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
