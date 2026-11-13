/* f_0x10201670 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Clears two dwords in the object when the second stack argument's low byte is nonzero, preserving the upper bits of edx and returning eax=0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10201670(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t byte_arg = rd8(sp0 + 8u);

    g->edx = (g->edx & 0xFFFFFF00u) | byte_arg;

    if (byte_arg != 0u)
    {
        wr32(self + 0x24u, 0u);
        wr32(self + 0x28u, 0u);
    }

    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10201670(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t result = cow_fn_10201670(g, self, sp0);
    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
