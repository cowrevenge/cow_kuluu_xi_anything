/* f_0x10263220 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls the interface method at vtable slot 0x38 of the object stored at self+0x18, or returns 0x80040209 if that pointer is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10263220(Guest* g, uint32_t self)
{
    const uint32_t entry_edx = g->edx;

    uint32_t eax = rd32(self + 0x18u);
    if (eax == 0u)
    {
        g->edx = entry_edx;
        return 0x80040209u;
    }

    uint32_t ecx = rd32(eax);
    uint32_t target = rd32(ecx + 0x38u);

    g->eax = eax;
    g->ecx = ecx;
    g->edx = entry_edx;

    cow_stdcall(g, target, 1u, eax);

    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10263220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    g->esp = sp0;
    const uint32_t result = cow_fn_10263220(g, self);
    g->esp = sp0;

    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
