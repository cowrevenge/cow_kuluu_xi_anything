/* f_0x100fc140 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores the byte argument at offset 0x3c408 of the global pointer if that pointer is non-null, returning 1 in the low byte of the pointer otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100fc140(Guest* g, uint32_t ptr, uint32_t param)
{
    (void)g;

    if (ptr == 0u)
    {
        return 0u;
    }

    wr8(ptr + 0x3C408u, (uint8_t)param);
    return (ptr & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fc140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t ptr = rd32(COW_IMG(0x104DFD98u));
    const uint32_t param = (ptr != 0u) ? rd8(sp0 + 4u) : 0u;

    const uint32_t result = cow_fn_100fc140(g, ptr, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
