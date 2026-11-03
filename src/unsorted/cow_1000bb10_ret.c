/* f_1000bb10 - the one-byte function: `ret`, and nothing else.

     1000bb10  ret

   The body lives in src/util/cow_noop.c because a dozen entries compile to exactly this and minting
   a private empty function per entry would be four copies of nothing. What is per-entry - and what
   the gate proves per-entry - is the adapter below and the cowdiff run against this entry's generated
   original.

   Name: `cow_return_at_1000bb10` (placeholder). called from 3 code site(s): 0x10010d3a, 0x10011ab6, 0x1006c2e2

*/
#include "cow.h"

void cow_return_immediate(void);

/* COW_ADAPTER BEGIN - cdecl/stdcall-with-no-args: it pops only the return address (argbytes 0) and
   leaves eax exactly as it found it. The readability gate skips this block. */
void cow_adapter_1000bb10(Guest* g)
{
    cow_return_immediate();
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
