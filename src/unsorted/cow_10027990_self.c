/* f_10027990 - the whole original is `mov eax, ecx / ret`: it hands back the object it was called on (thiscall: ecx is the object)

   The body is shared (src/util/cow_return.c) because a lot of entries compile to exactly this; what is
   per-entry is the adapter below, and what makes it done is cowdiff against this entry's generated
   original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger can say who calls it.

   Name: `cow_return_at_10027990` (placeholder). called from 8 code site(s): 0x1000395e, 0x10003967, 0x10003973, 0x10003d82
*/
#include "cow.h"

uint32_t cow_return_object(uint32_t ecx);

/* COW_ADAPTER BEGIN - the original is `mov eax, ecx / ret`; its ret pops 0 bytes above the return address and
   leaves eax equal to ecx - the object pointer. The readability gate skips this block. */
void cow_adapter_10027990(Guest* g)
{
    g->eax = cow_return_object(g->ecx);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
