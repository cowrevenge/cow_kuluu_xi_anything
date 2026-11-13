/* f_0x102632d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the member pointer at offset 0x18 if present, otherwise 0x80040209; if present, calls its vtable slot 0x40 with that pointer as the sole stdcall argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102632d0(Guest* g, uint32_t self)
{
    const uint32_t obj = rd32(self + 0x18u);

    if (obj == 0u)
    {
        return 0x80040209u;
    }

    const uint32_t vtable = rd32(obj);

    /* Original order:
       mov ecx, [eax]
       push eax
       call [ecx + 0x40]
       Preserve the push before reading the call target. */
    g->esp -= 4u;
    wr32(g->esp, obj);

    g->ecx = vtable;
    const uint32_t target = rd32(vtable + 0x40u);

    /* The argument has already been pushed exactly as the original does.
       The callee is stdcall and pops this argument itself. */
    return cow_stdcall(g, target, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102632d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102632d0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
