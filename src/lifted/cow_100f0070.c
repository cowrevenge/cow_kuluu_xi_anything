/* f_0x100f0070 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the dword at 0x104dfd98 with its low byte forced to 1, and clears the byte at 0x2cfd4 when that dword is zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100f0070(Guest* g, uint32_t self)
{
    (void)g;
    (void)self;

    const uint32_t v = rd32(COW_IMG(0x104DFD98u));

    if (v == 0u)
    {
        wr8(0x2CFD4u, 0u);
    }

    return (v & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f0070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100f0070(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
