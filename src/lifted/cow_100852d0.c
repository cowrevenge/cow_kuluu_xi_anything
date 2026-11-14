/* f_0x100852d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   walks the linked list at 0x1047d578 and invokes the virtual method at vtable offset 0x180 on each node.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100852d0(Guest* g, uint32_t initial_eax)
{
    uint32_t esi = rd32(COW_IMG(0x1047d578u));
    uint32_t result = initial_eax;

    while (esi != 0u)
    {
        uint32_t eax = rd32(esi);
        uint32_t target = rd32(eax + 0x180u);

        /* ecx = esi, no stack arguments; thiscall virtual method */
        cow_thiscall(g, target, esi, 0u);
        result = g->eax;

        esi = rd32(esi + 0x54u);
    }

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100852d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100852d0(g, g->eax);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
