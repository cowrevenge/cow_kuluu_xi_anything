/* f_0x1008a790 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the member pointer at [this + 0xa0] is non-null, tail-call the virtual method at vtable offset 0x22c on that member.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1008a790(Guest* g, uint32_t self)
{
    const uint32_t member = rd32(self + 0xa0u);
    if (member == 0u)
    {
        return;
    }

    const uint32_t vtable = rd32(member);
    const uint32_t target = rd32(vtable + 0x22cu);

    /* Original tail jump preserves ecx = member and the incoming stack. */
    cow_thiscall(g, target, member, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008a790(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1008a790(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);   /* ret 4 */
}
/* COW_ADAPTER END */
