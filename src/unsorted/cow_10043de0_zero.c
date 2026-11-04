/* f_10043de0 - the whole original is `xor eax, eax / ret`: it answers 0

   The body is shared (src/util/cow_return.c) because a lot of entries compile to exactly this; what is
   per-entry is the adapter below, and what makes it done is cowdiff against this entry's generated
   original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger can say who calls it.

   Name: `cow_return_at_10043de0` (placeholder). called from 7 code site(s): 0x10043f45, 0x10044011, 0x10044070, 0x100440a2
*/
#include "cow.h"

uint32_t cow_return_zero(void);

/* COW_ADAPTER BEGIN - the original is `xor eax, eax / ret`; its ret pops 0 bytes above the return address and
   leaves eax zero. The readability gate skips this block. */
void cow_adapter_10043de0(Guest* g)
{
    g->eax = cow_return_zero();
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
