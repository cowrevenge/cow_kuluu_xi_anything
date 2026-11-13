/* f_0x100e48d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns bits 1-2 of the byte at (global pointer + 0x2cfd9), preserving the global's upper 24 bits; returns 0 if the global pointer is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e48d0(Guest* g)
{
    const uint32_t ptr = rd32(COW_IMG(0x104DFD98u));

    if (ptr == 0u)
    {
        return 0u;
    }

    const uint32_t byte = rd8(ptr + 0x2CFD9u);
    return (ptr & 0xFFFFFF00u) | ((byte >> 3) & 3u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e48d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100e48d0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
