/* f_0x10098840 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the 32-bit table entry at index (arg & 0xffff) when the low 16 bits of arg are below 4, otherwise returns 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10098840(Guest* g, uint32_t arg)
{
    (void)g;

    if ((uint32_t)(uint16_t)arg >= 4u)
    {
        return 0u;
    }

    const uint32_t index = arg & 0xffffu;
    return rd32(COW_IMG(0x1047fd68u) + index * 4u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10098840(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10098840(g, arg);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
