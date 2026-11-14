/* f_0x10144c80 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the global at 0x105781f8 is nonzero, calls FUN_10221300 with this=global+0x20 and argument 0x40, then returns 1 in eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10144c80(Guest* g)
{
    uint32_t eax = rd32(COW_IMG(0x105781F8u));
    g->eax = eax;

    if (eax != 0u)
    {
        const uint32_t self = eax + 0x20u;
        cow_thiscall(g, COW_IMG(0x10221300u), self, 1u, 0x40u);
    }

    g->eax = (g->eax & 0xFFFFFF00u) | 1u;
    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10144c80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10144c80(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
