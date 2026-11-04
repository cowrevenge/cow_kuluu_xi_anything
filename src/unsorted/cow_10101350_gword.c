/* f_10101350 - the whole original is `mov eax, dword ptr [0x105782a0] / ret`: it hands back the dword stored at the global 0x105782a0 (named in layout/addresses.h as COW_ADDR_UNK_105782A0)

   The body is one honest line - it says exactly what those instructions do, and it stays in this file because the address it reads is the per-entry part;  what is per-entry is the adapter below, and what makes it done is cowdiff against this
   entry's generated original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger
   can say who calls it.

   Name: `cow_return_at_10101350` (placeholder). called from 1 code site(s): 0x10101366
*/
#include "cow.h"

uint32_t cow_read_global_word_105782a0(void)
{
    return rd32(COW_ADDR_UNK_105782A0);
}

/* COW_ADAPTER BEGIN - the original is `mov eax, dword ptr [0x105782a0] / ret`; its ret pops 0 bytes above the return address and
   leaves eax that dword. The readability gate skips this block. */
void cow_adapter_10101350(Guest* g)
{
    g->eax = cow_read_global_word_105782a0();
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
