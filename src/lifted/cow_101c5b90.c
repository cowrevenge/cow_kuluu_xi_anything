/* f_0x101c5b90 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the 32-bit entry at offset index*16 from the pointer stored in this, or 0 if index is negative.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101c5b90(Guest* g, uint32_t self, uint32_t index)
{
    /* The original never writes edx, so leave it unchanged. */
    g->edx = g->edx;

    if ((int32_t)index < 0)
    {
        return 0u;
    }

    const uint32_t base = rd32(self);
    g->ecx = base; /* original: mov ecx, dword ptr [ecx] */

    const uint32_t offset = index << 4;
    return rd32(base + offset);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c5b90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t index = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_101c5b90(g, self, index);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
