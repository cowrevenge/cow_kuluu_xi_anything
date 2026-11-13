/* f_0x102260e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Searches the first 128 16-bit entries of the array at self for value, returning the index or -1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102260e0(Guest* g, uint32_t self, uint32_t value)
{
    const uint16_t needle = (uint16_t)value;

    for (uint32_t i = 0; i < 0x80u; ++i)
    {
        if (rd16(self + i * 2u) == needle)
        {
            return i;
        }
    }

    return 0xFFFFFFFFu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102260e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t value = rd16(sp0 + 4u);

    const uint32_t result = cow_fn_102260e0(g, self, value);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
