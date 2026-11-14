/* f_0x101c4a50 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-calls FUN_101c1530 with this replaced by the dword at offset 4, passing the single stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c4a50(Guest* g, uint32_t self, uint32_t arg1)
{
    const uint32_t new_self = rd32(self + 4u);
    return cow_thiscall(g, COW_IMG(0x101c1530u), new_self, 1u, arg1);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c4a50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_101c4a50(g, self, arg1);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
