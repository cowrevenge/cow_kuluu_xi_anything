/* f_0x101aec00 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the dword at [this+0x2c] with its low byte forced to 1 when the signed value is 0 or 1, otherwise with its low byte cleared.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101aec00(Guest* g, uint32_t self)
{
    uint32_t eax = rd32(self + 0x2Cu);
    int32_t v = (int32_t)eax;

    if (v < 0 || v > 1)
    {
        eax &= 0xFFFFFF00u;
    }
    else
    {
        eax = (eax & 0xFFFFFF00u) | 1u;
    }

    g->edx = g->edx; /* edx is unchanged by the original */
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101aec00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101aec00(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
