/* f_0x10157830 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the byte at self + index*4 + 0x6f when index is signed less than 2, otherwise zeroes the low byte of index while preserving its upper bits.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10157830(Guest* g, uint32_t self, uint32_t arg)
{
    uint32_t result;

    if ((int32_t)arg < 2)
    {
        const uint32_t addr = (uint32_t)(self + (uint32_t)(arg * 4u) + 0x6fu);
        result = (arg & 0xFFFFFF00u) | (uint32_t)rd8(addr);
    }
    else
    {
        result = arg & 0xFFFFFF00u;
    }

    g->edx = g->edx;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10157830(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_10157830(g, self, arg);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
