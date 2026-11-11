/* f_0x101c4c40 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-calls FUN_101c2700 with this pointer replaced by *(this+4), preserving all other arguments and stack state.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101c4c40(Guest* g, uint32_t self, uint32_t param_2)
{
    const uint32_t new_self = rd32(self + 4u);
    return cow_thiscall(g, COW_IMG(0x101c2700u), new_self, 1, param_2);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c4c40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101c4c40(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
