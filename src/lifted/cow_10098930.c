/* f_0x10098930 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the 32-bit table entry at the low 16 bits of the stack argument when that value is less than 4, otherwise returns 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10098930(Guest* g, uint32_t param)
{
    uint32_t result;
    uint32_t index = param & 0xFFFFu;

    if (index >= 4u)
    {
        result = 0u;
    }
    else
    {
        result = rd32(COW_IMG(0x1047fd88u) + index * 4u);
    }

    g->edx = g->edx; /* original does not modify edx */
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10098930(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10098930(g, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
