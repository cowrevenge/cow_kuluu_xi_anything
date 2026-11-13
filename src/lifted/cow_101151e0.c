/* f_0x101151e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 0 if the global at 0x104e1b6c is null; otherwise tail-calls FUN_101140e0 with that global in ecx and returns its result.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101151e0(Guest* g)
{
    const uint32_t ecx = rd32(COW_IMG(0x104E1B6Cu));

    if (ecx == 0u)
    {
        return 0u;
    }

    return cow_thiscall_cdecl(g, COW_IMG(0x101140E0u), ecx, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101151e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101151e0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
