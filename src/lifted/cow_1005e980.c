/* f_0x1005e980 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls the vtable slot at offset 0x18 of the object at (this - 0x34) with argument 1, then returns 1 while preserving the high bytes of eax from the call (or entry eax if skipped).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1005e980(Guest* g, uint32_t self)
{
    uint32_t eax = g->eax;

    self -= 0x34u;
    g->ecx = self;

    if (self != 0u)
    {
        const uint32_t vtable = rd32(self);
        const uint32_t target = rd32(vtable + 0x18u);

        eax = cow_thiscall(g, target, self, 1u, 1u);
    }

    eax = (eax & 0xFFFFFF00u) | 1u;

    /* edx is whatever the callee left in g->edx, or unchanged if no call occurred. */
    g->edx = g->edx;

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1005e980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1005e980(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
