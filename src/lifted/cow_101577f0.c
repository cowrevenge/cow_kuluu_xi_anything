/* f_0x101577f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the low byte from self + 0x6d + index*4 when signed index < 2, otherwise zeroes the low byte of index while preserving its upper bits.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101577f0(Guest* g, uint32_t self, uint32_t index)
{
    uint32_t eax = index;

    if ((int32_t)eax >= 2)
    {
        eax &= 0xFFFFFF00u;
    }
    else
    {
        const uint32_t addr = self + (uint32_t)(eax << 2) + 0x6Du;
        eax = (eax & 0xFFFFFF00u) | (uint32_t)rd8(addr);
    }

    g->edx = g->edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101577f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101577f0(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
