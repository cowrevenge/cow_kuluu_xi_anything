/* f_0x10255820 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Clamps the size argument to zero when it is negative as a signed 32-bit value, then calls operator new with that size.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10255820(Guest* g, uint32_t size)
{
    if (size & 0x80000000u)
    {
        size = 0u;
    }

    cow_cdecl(g, COW_IMG(0x10311bfbu), 1u, size);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10255820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);

    cow_fn_10255820(g, arg0);

    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
