/* f_10255430 - the whole original is `ret 8`: it returns, and nothing else

   The body is shared (src/util/cow_return.c) because a lot of entries compile to exactly this; what is
   per-entry is the adapter below, and what makes it done is cowdiff against this entry's generated
   original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger can say who calls it.

   Name: `cow_return_at_10255430` (placeholder). called from 2 code site(s): 0x10254c9a, 0x10254f1d
*/
#include "cow.h"

void cow_return_immediate(void);

/* COW_ADAPTER BEGIN - the original is `ret 8`; its ret pops 8 bytes above the return address and
   leaves eax exactly as it found it. The readability gate skips this block. */
void cow_adapter_10255430(Guest* g)
{
    cow_return_immediate();
    rt_return(g, g->eax, 8);
}
/* COW_ADAPTER END */
