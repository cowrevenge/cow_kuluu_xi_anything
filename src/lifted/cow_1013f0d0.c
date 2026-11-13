/* f_0x1013f0d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the object's field at +0x164 is non-null and its +8 field is zero, tail-calls the virtual method at vtable offset 0x44 on that field.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1013f0d0(Guest* g, uint32_t self)
{
    uint32_t inner = rd32(self + 0x164u);
    if (inner == 0u)
    {
        return;
    }

    if (rd32(inner + 8u) != 0u)
    {
        return;
    }

    uint32_t vtable = rd32(inner);
    uint32_t target = rd32(vtable + 0x44u);

    g->ecx = inner;
    g->eax = vtable;
    rt_call_indirect(g, target);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013f0d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1013f0d0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
