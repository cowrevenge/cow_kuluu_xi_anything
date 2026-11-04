/* f_10110c90 - the whole original is `xor eax, eax / ret 0x10`: it answers 0

   The body is shared (src/util/cow_return.c) because a lot of entries compile to exactly this; what is
   per-entry is the adapter below, and what makes it done is cowdiff against this entry's generated
   original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger can say who calls it.

   Name: `cow_selectnode_vf38` (guess). vtable 0x10332e30 slot 38/88 - a virtual method;vtable named SELECTNODE from the vocabulary its slots cite: SELECTNODE x4, QUESTIONNODE x4, DATASET x4
*/
#include "cow.h"

uint32_t cow_return_zero(void);

/* COW_ADAPTER BEGIN - the original is `xor eax, eax / ret 0x10`; its ret pops 16 bytes above the return address and
   leaves eax zero. The readability gate skips this block. */
void cow_adapter_10110c90(Guest* g)
{
    g->eax = cow_return_zero();
    rt_return(g, g->eax, 16);
}
/* COW_ADAPTER END */
