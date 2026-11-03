/* f_10011920 - the one-byte function: `ret`, and nothing else.

     10011920  ret

   The body lives in src/util/cow_noop.c because a dozen entries compile to exactly this and minting
   a private empty function per entry would be four copies of nothing. What is per-entry - and what
   the gate proves per-entry - is the adapter below and the cowdiff run against this entry's generated
   original.

   Name: `cow_vf7_at_1032e890` (placeholder). vtable 0x1032e890 slot 7/1056 - the address is a virtual method, not a noop

*/
#include "cow.h"

void cow_return_noop(void);

/* COW_ADAPTER BEGIN - cdecl/stdcall-with-no-args: it pops only the return address (argbytes 0) and
   leaves eax exactly as it found it. The readability gate skips this block. */
void cow_adapter_10011920(Guest* g)
{
    cow_return_noop();
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
