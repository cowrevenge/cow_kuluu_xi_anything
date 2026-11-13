/* f_0x101d3bd0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the second stack argument's low byte is nonzero, calls FUN_101d3cc0 with this from 0x106631d4 and arguments (1,1,0); otherwise does nothing.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_101d3bd0(Guest* g, uint32_t byte_arg)
{
    uint32_t eax = (g->eax & 0xFFFFFF00u) | (uint8_t)byte_arg;
    g->eax = eax;

    if ((uint8_t)byte_arg == 0u)
    {
        g->edx = g->edx;
        return eax;
    }

    const uint32_t self = rd32(COW_IMG(0x106631d4u));
    g->ecx = self;

    cow_thiscall(g, COW_IMG(0x101d3cc0u), self, 3u, 1u, 1u, 0u);

    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d3bd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t byte_arg = rd8(sp0 + 8u);
    const uint32_t result = cow_fn_101d3bd0(g, byte_arg);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
