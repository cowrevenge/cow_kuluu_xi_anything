/* f_101e6c90 - the whole original is `mov eax, dword ptr [0x10663560] / ret`: it hands back the dword stored at the global 0x10663560 (named in layout/addresses.h as COW_ADDR_UNK_10663560)

   The body is shared (src/util/cow_addrs.c) because a lot of entries compile to exactly this;  what is per-entry is the adapter below, and what makes it done is cowdiff against this
   entry's generated original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger
   can say who calls it.

   Name: `cow_return_at_101e6c90` (placeholder). called from 1 code site(s): 0x101ea914
*/
#include "cow.h"

uint32_t cow_read_global_word_10663560(void);

/* COW_ADAPTER BEGIN - the original is `mov eax, dword ptr [0x10663560] / ret`; its ret pops 0 bytes above the return address and
   leaves eax that dword. The readability gate skips this block. */
void cow_adapter_101e6c90(Guest* g)
{
    g->eax = cow_read_global_word_10663560();
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
