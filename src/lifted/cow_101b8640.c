/* f_0x101b8640 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the object's dword at offset 0x2c with its low byte set to 1 if the signed value is 14 or 15, otherwise with its low byte cleared.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101b8640(Guest* g, uint32_t self)
{
    (void)g;
    const uint32_t v = rd32(self + 0x2cu);
    const int32_t sv = (int32_t)v;

    if (sv < 14 || sv > 15)
    {
        return v & 0xFFFFFF00u;
    }

    return (v & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b8640(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101b8640(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
