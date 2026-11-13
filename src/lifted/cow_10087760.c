/* f_0x10087760 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10087660 and returns 0x10480828 if its low byte is nonzero, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10087760(Guest* g)
{
    cow_cdecl(g, COW_IMG(0x10087660u), 0);

    /* neg al sets CF iff the original al was nonzero.
       sbb eax, eax then makes eax either 0 or 0xFFFFFFFF.
       and eax, 0x10480828 yields 0 or 0x10480828. */
    if ((uint8_t)g->eax != 0u)
    {
        return COW_IMG(0x10480828u);
    }

    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10087760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10087760(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
