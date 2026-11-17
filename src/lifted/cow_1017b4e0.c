/* f_0x1017b4e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Inserts a node into a per-index linked-list slot in the object at ecx, clamping a negative index to zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_1017b4e0(Guest* g, uint32_t self, uint32_t node, uint32_t index)
{
    uint32_t eax = index;
    uint32_t edx = node;

    if ((int32_t)eax < 0)
    {
        eax = 0u;
    }

    g->eax = eax;
    g->edx = edx;

    wr32(edx + 4u, 1u);

    const uint32_t addr = (uint32_t)(self + eax * 8u + 0x355c8u);
    const uint32_t esi = rd32(addr);

    wr32(edx, esi);
    wr32(addr, edx);

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1017b4e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t index = rd32(sp0 + 8u);
    const uint32_t node = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_1017b4e0(g, self, node, index);

    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
