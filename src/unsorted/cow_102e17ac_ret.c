/* f_102e17ac - the whole original is `ret 0xc`: it returns, and nothing else

   The body is shared (src/util/cow_return.c) because a lot of entries compile to exactly this; what is
   per-entry is the adapter below, and what makes it done is cowdiff against this entry's generated
   original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger can say who calls it.

   Name: `cow_vf1_at_10346140` (placeholder). vtable 0x10346140 slot 1/8 - a virtual method
*/
#include "cow.h"

void cow_return_immediate(void);

/* COW_ADAPTER BEGIN - the original is `ret 0xc`; its ret pops 12 bytes above the return address and
   leaves eax exactly as it found it. The readability gate skips this block. */
void cow_adapter_102e17ac(Guest* g)
{
    cow_return_immediate();
    rt_return(g, g->eax, 12);
}
/* COW_ADAPTER END */
