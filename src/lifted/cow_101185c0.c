/* f_0x101185c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Forwards to virtual slot 7 of the object stored at this+0xc, passing the original stack argument through unchanged.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101185c0(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t obj = rd32(self + 0xcu);

    if (obj == 0u)
    {
        return;
    }

    const uint32_t arg = rd32(sp0 + 4u);
    const uint32_t vtable = rd32(obj);

    wr32(sp0 + 4u, arg);

    g->ecx = obj;
    g->edx = arg;
    g->eax = vtable;

    rt_call_indirect(g, rd32(vtable + 0x1cu));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101185c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101185c0(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
