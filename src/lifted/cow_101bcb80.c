/* f_0x101bcb80 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the global pointer with its low byte set to 1 if the byte at pointer+4 equals 1, otherwise 0; returns 0 if the pointer is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101bcb80(Guest* g)
{
    (void)g;

    const uint32_t ptr = rd32(COW_IMG(0x10662DBCu));

    if (ptr == 0u)
    {
        return 0u;
    }

    const uint32_t flag = (rd8(ptr + 4u) == 1u) ? 1u : 0u;
    return (ptr & 0xFFFFFF00u) | flag;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bcb80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101bcb80(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
