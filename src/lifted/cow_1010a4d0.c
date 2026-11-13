/* f_0x1010a4d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 0 when the object's +0x8f0 field is null; otherwise tail-calls FUN_1010d220 with that field as this and returns its result.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1010a4d0(Guest* g, uint32_t self)
{
    const uint32_t p = rd32(self + 0x8f0u);
    if (p == 0u)
    {
        return 0u;
    }
    return cow_thiscall_cdecl(g, COW_IMG(0x1010d220u), p, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010a4d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1010a4d0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
