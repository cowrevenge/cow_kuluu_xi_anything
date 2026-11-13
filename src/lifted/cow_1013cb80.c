/* f_0x1013cb80 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 3 * byte_at_self+0x380, with its low byte set to 1 if byte_at_self+12*that_byte+0x383 equals 0xFF, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1013cb80(Guest* g, uint32_t self)
{
    (void)g;

    const uint32_t b = rd8(self + 0x380u);
    const uint32_t idx = b + b * 2u;
    const uint32_t v = rd8(self + idx * 4u + 0x383u);

    return (idx & 0xFFFFFF00u) | (v == 0xFFu ? 1u : 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013cb80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1013cb80(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
