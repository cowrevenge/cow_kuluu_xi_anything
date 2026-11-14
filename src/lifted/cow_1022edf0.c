/* f_0x1022edf0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the table entry at a signed index plus a base, or 0 if the index is out of range.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1022edf0(Guest* g, uint32_t self, uint32_t index)
{
    g->eax = index;

    const uint32_t count = rd32(self);
    g->edx = count;

    if ((int32_t)index < (int32_t)count)
    {
        const uint32_t table = rd32(self + 0xcu);
        g->edx = table;

        const uint32_t value = rd32((uint32_t)(table + (uint32_t)(index * 4u)));
        g->eax = value;

        const uint32_t base = rd32(self + 0x10u);
        g->edx = base;

        const uint32_t result = (uint32_t)(value + base);
        g->eax = result;
        return result;
    }

    g->eax = 0u;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022edf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t index = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_1022edf0(g, g->ecx, index);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
