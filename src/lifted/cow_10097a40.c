/* f_0x10097a40 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the table entry indexed by the 16-bit field at self+0x2a2, or 0 if that field is zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10097a40(Guest* g, uint32_t self)
{
    (void)g;

    const uint32_t index = (uint32_t)rd16(self + 0x2a2u);
    if (index == 0u)
    {
        return 0u;
    }

    return rd32(COW_IMG(0x10480af0u) + index * 4u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10097a40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10097a40(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
