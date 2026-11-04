/* f_10111b60 - the whole original is `mov eax, 1 / ret`: it returns the constant 1 (mov eax, 1 is the whole function)

   The body is shared (src/util/cow_return.c) because a lot of entries compile to exactly this;  what is per-entry is the adapter below, and what makes it done is cowdiff against this
   entry's generated original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger
   can say who calls it.

   Name: `cow_selectnode_vf63` (guess). vtable 0x10332e30 slot 63/88 - a virtual method;vtable named SELECTNODE from the vocabulary its slots cite: SELECTNODE x4, QUESTIONNODE x4, DATASET x4
*/
#include "cow.h"

uint32_t cow_return_value(uint32_t v);

/* COW_ADAPTER BEGIN - the original is `mov eax, 1 / ret`; its ret pops 0 bytes above the return address and
   leaves eax the constant 1. The readability gate skips this block. */
void cow_adapter_10111b60(Guest* g)
{
    g->eax = cow_return_value(1u);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
