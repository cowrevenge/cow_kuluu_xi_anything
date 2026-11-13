/* f_0x102f2138 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Zeroes 16 dwords (64 bytes) at the caller-supplied pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102f2138(Guest* g, uint32_t ptr)
{
    (void)g;

    for (uint32_t i = 0u; i < 16u; ++i)
    {
        wr32(ptr + i * 4u, 0u);
    }

    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f2138(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102f2138(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
