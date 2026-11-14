/* f_0x10135ee0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100dc120, subtracts the dword at self+0xbc from its eax result, and returns that difference with its low byte set to 1 iff the unsigned difference is above 0x2bc.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10135ee0(Guest* g, uint32_t self)
{
    const uint32_t eax_after_call = cow_thiscall(g, COW_IMG(0x100dc120u), self, 0u);
    const uint32_t edx = rd32(self + 0xbcu);
    const uint32_t diff = (uint32_t)(eax_after_call - edx);

    if (diff > 0x2bcu)
        return (diff & 0xFFFFFF00u) | 1u;
    else
        return diff & 0xFFFFFF00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10135ee0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10135ee0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
