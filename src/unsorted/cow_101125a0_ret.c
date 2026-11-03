/* f_101125a0 - the one-byte function: `ret`, and nothing else.

   The body is shared (src/util/cow_noop.c) because a lot of entries compile to exactly this; what is
   per-entry is the adapter below, and what makes it done is cowdiff against this entry's generated
   original plus tools/cow/gate.ps1.

   Name: `cow_selectnode_vf30_noop` (guess). vtable 0x10332e30 slot 30/88 - the address is a virtual method, not a noop;vtable named SELECTNODE from the vocabulary its slots cite: SELECTNODE x4, QUESTIONNODE x4, DATASET x4

*/
#include "cow.h"

void cow_return_immediate(void);

/* COW_ADAPTER BEGIN - the original pops ret (0 bytes) above the return address and
   leaves eax exactly as it found it. The readability gate skips this block. */
void cow_adapter_101125a0(Guest* g)
{
    cow_return_immediate();
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
