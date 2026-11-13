/* f_0x1020b980 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets the byte at self+0x15 to 1 iff the first stack byte is zero and the second stack byte is nonzero, while preserving the original's final eax low-byte behavior.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_1020b980(Guest* g, uint32_t self, uint32_t eax0, uint32_t arg1, uint32_t arg2)
{
    if (arg1 != 0u)
    {
        g->edx = g->edx;
        return (eax0 & 0xFFFFFF00u) | (arg1 & 0xFFu);
    }

    if (arg2 != 0u)
    {
        wr8(self + 0x15u, 1u);
    }

    g->edx = g->edx;
    return (eax0 & 0xFFFFFF00u) | (arg2 & 0xFFu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020b980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t eax0 = g->eax;

    const uint32_t arg1 = rd8(sp0 + 4u);
    uint32_t arg2 = 0u;

    if (arg1 == 0u)
    {
        arg2 = rd8(sp0 + 8u);
    }

    const uint32_t result = cow_fn_1020b980(g, self, eax0, arg1, arg2);

    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
