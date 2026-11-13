/* f_0x10087690 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10087660 and returns the global at 0x10480800 if the callee's low byte is nonzero, otherwise zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10087690(Guest* g)
{
    cow_cdecl(g, COW_IMG(0x10087660u), 0);

    const uint32_t ecx = rd32(COW_IMG(0x10480800u));
    const uint32_t al = (uint32_t)(uint8_t)g->eax;
    const uint32_t mask = (al != 0u) ? 0xFFFFFFFFu : 0u;

    g->ecx = ecx;
    return mask & ecx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10087690(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10087690(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
