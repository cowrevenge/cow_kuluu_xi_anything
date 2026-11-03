/* f_10017d30 - the one-byte function: `ret`, and nothing else.

   The body is shared (src/util/cow_noop.c) because a lot of entries compile to exactly this; what is
   per-entry is the adapter below, and what makes it done is cowdiff against this entry's generated
   original plus tools/cow/gate.ps1.

   Name: `cow_return_at_10017d30` (placeholder). called from 8 code site(s): 0x1001ad1a, 0x1001ad4b, 0x1001b131, 0x10022135

*/
#include "cow.h"

void cow_return_immediate(void);

/* COW_ADAPTER BEGIN - the original pops ret (0 bytes) above the return address and
   leaves eax exactly as it found it. The readability gate skips this block. */
void cow_adapter_10017d30(Guest* g)
{
    cow_return_immediate();
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
