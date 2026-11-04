/* f_100d7e90 - the whole original is `mov eax, dword ptr [esp + 4] / inc eax / ret`: it answers the caller's first argument plus one (`mov eax, [esp+4] / inc eax` is the whole function - a cdecl leaf reading its stack argument)

   The body is shared (src/util/cow_return.c) because a lot of entries compile to exactly this;  what is per-entry is the adapter below, and what makes it done is cowdiff against this
   entry's generated original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger
   can say who calls it.

   Name: `cow_return_at_100d7e90` (placeholder). called from 1 code site(s): 0x10116d4c
*/
#include "cow.h"

uint32_t cow_increment_argument(uint32_t n);

/* COW_ADAPTER BEGIN - the original is `mov eax, dword ptr [esp + 4] / inc eax / ret`; its ret pops 0 bytes above the return address and
   leaves eax argument 0 plus one. The readability gate skips this block. */
void cow_adapter_100d7e90(Guest* g)
{
    g->eax = cow_increment_argument(rt_arg(g, 0));
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
