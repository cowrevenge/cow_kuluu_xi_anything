/* f_0x1020cdd0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the global DWORD at 0x106644d8 with its low byte forced to 1 if bit 15 or bit 5 is set, otherwise with its low byte cleared.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1020cdd0(Guest* g)
{
    (void)g;

    const uint32_t eax = rd32(COW_IMG(0x106644d8u));

    if ((eax & 0x8000u) != 0u || (eax & 0x20u) != 0u)
    {
        return (eax & 0xFFFFFF00u) | 1u;
    }

    return eax & 0xFFFFFF00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020cdd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1020cdd0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
