/* f_0x1006c270 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the object pointer at self+4 is non-null, calls its vtable slot 2 with that object as the sole stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1006c270(Guest* g, uint32_t self)
{
    const uint32_t obj = rd32(self + 4u);
    if (obj == 0u)
    {
        return;
    }

    const uint32_t vtbl = rd32(obj);
    const uint32_t target = rd32(vtbl + 8u);

    /* Match the register state at the original call: eax = obj, ecx = vtbl. */
    g->eax = obj;
    g->ecx = vtbl;

    /* COM/stdcall-style virtual call: callee pops the pushed object pointer. */
    cow_stdcall(g, target, 1u, obj);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006c270(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1006c270(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
