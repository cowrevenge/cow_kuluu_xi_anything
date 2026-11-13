/* f_0x10254740 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the signed 32-bit count of 8-byte records between offsets 0x24 and 0x28, or 0 when the start pointer is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10254740(Guest* g, uint32_t self)
{
    const uint32_t edx = rd32((uint32_t)(self + 0x24u));
    g->edx = edx;

    if (edx == 0u)
    {
        return 0u;
    }

    const uint32_t eax = (uint32_t)(rd32((uint32_t)(self + 0x28u)) - edx);
    return (uint32_t)((int32_t)eax >> 3);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10254740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10254740(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
