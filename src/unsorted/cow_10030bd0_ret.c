/* f_10030bd0 - the whole original is `ret 0x14`: it returns, and nothing else

   The body is shared (src/util/cow_return.c) because a lot of entries compile to exactly this; what is
   per-entry is the adapter below, and what makes it done is cowdiff against this entry's generated
   original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger can say who calls it.

   Name: `cow_return_at_10030bd0` (placeholder). called from 1 code site(s): 0x1002a06a

*/
#include "cow.h"

void cow_return_immediate(void);

/* COW_ADAPTER BEGIN - the original is `ret 0x14`; its ret pops 20 bytes above the return address and
   leaves eax exactly as it found it. The readability gate skips this block. */
void cow_adapter_10030bd0(Guest* g)
{
    cow_return_immediate();
    rt_return(g, g->eax, 20);
}
/* COW_ADAPTER END */
