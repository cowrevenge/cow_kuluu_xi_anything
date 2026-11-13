/* f_0x100845f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 0 if the object's field at offset 0x70 is null; otherwise tail-calls 0x1008f250 with that field in ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_100845f0(Guest* g, uint32_t self)
{
    const uint32_t ecx = rd32(self + 0x70u);

    if (ecx == 0u)
    {
        return 0u;
    }

    g->ecx = ecx;
    return cow_thiscall_cdecl(g, COW_IMG(0x1008f250u), ecx, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100845f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100845f0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
