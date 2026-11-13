/* f_0x102374a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the second stack argument is positive as a signed 32-bit integer, stores 1 into global 0x10668FDC; returns that argument in eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_102374a0(Guest* g, uint32_t arg0, uint32_t arg1)
{
    (void)g;
    (void)arg0;

    if ((int32_t)arg1 > 0)
    {
        wr32(COW_IMG(0x10668FDCu), 1u);
    }

    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102374a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t result = cow_fn_102374a0(g, 0u, arg1);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
