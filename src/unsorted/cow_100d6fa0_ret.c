/* f_100d6fa0 - the one-byte function: `ret`, and nothing else.

   The body is shared (src/util/cow_noop.c) because a lot of entries compile to exactly this; what is
   per-entry is the adapter below, and what makes it done is cowdiff against this entry's generated
   original plus tools/cow/gate.ps1.

   Name: `cow_vf34_at_1032e890` (placeholder). vtable 0x1032e890 slot 34/1056 - the address is a virtual method, not a noop

*/
#include "cow.h"

void cow_return_noop(void);

/* COW_ADAPTER BEGIN - the original pops ret (0 bytes) above the return address and
   leaves eax exactly as it found it. The readability gate skips this block. */
void cow_adapter_100d6fa0(Guest* g)
{
    cow_return_noop();
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
