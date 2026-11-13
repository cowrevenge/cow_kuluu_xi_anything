/* f_0x10074f60 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Walks the singly linked list starting at self+0xd50 via +0xc until a null link, leaving eax zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10074f60(Guest* g, uint32_t self)
{
    uint32_t eax = rd32(self + 0xd50u);

    while (eax != 0u)
    {
        eax = rd32(eax + 0xcu);
    }

    /* The original does not modify edx; leave g->edx unchanged. */
    (void)g;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10074f60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10074f60(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
