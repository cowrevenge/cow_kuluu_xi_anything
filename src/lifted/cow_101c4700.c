/* f_0x101c4700 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Replaces `this` with the member at offset 4 and tail-calls the target with the original four stack arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101c4700(Guest* g, uint32_t self,
                         uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4)
{
    const uint32_t new_self = rd32(self + 4u);
    return cow_thiscall(g, COW_IMG(0x101beed0u), new_self, 4u, a1, a2, a3, a4);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c4700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t a1 = rd32(sp0 + 4u);
    const uint32_t a2 = rd32(sp0 + 8u);
    const uint32_t a3 = rd32(sp0 + 12u);
    const uint32_t a4 = rd32(sp0 + 16u);

    const uint32_t result = cow_fn_101c4700(g, g->ecx, a1, a2, a3, a4);

    g->esp = sp0;
    rt_return(g, result, 16u);
}
/* COW_ADAPTER END */
