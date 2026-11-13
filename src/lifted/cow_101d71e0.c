/* f_0x101d71e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores the low 16 bits of the signed stack argument into self+0x14 only when it is 0 or 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101d71e0(Guest* g, uint32_t self, uint32_t value)
{
    (void)g;

    if ((int32_t)value < 0)
    {
        return value;
    }

    if ((int32_t)value >= 2)
    {
        return value;
    }

    wr16(self + 0x14u, (uint16_t)value);
    return value;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d71e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101d71e0(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
