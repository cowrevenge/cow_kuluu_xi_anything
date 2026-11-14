/* f_0x101c4910 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Loads a new `this` pointer from [this + 4] and tail-calls 0x101c0360 with the same four stack arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=4 */
uint32_t cow_fn_101c4910(Guest* g, uint32_t self, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3)
{
    const uint32_t new_self = rd32(self + 4u);

    cow_thiscall(g, COW_IMG(0x101c0360u), new_self, 4u, a0, a1, a2, a3);

    const uint32_t edx_after = g->edx;
    g->edx = edx_after;

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c4910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t a0 = rd32(sp0 + 4u);
    const uint32_t a1 = rd32(sp0 + 8u);
    const uint32_t a2 = rd32(sp0 + 12u);
    const uint32_t a3 = rd32(sp0 + 16u);

    const uint32_t result = cow_fn_101c4910(g, self, a0, a1, a2, a3);

    g->esp = sp0;
    rt_return(g, result, 16u);
}
/* COW_ADAPTER END */
