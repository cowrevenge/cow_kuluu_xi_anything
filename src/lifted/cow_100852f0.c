/* f_0x100852f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls the virtual method at vtable offset 0x18c for every node in the linked list headed by 0x1047d578.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100852f0(Guest* g)
{
    const uint32_t saved_esi = g->esi;

    g->esi = rd32(COW_IMG(0x1047d578u));

    while (g->esi != 0u)
    {
        const uint32_t node = g->esi;
        const uint32_t vtable = rd32(node);
        const uint32_t target = rd32(vtable + 0x18cu);

        g->eax = vtable;
        g->esi = node;

        cow_thiscall(g, target, node, 0u);

        g->esi = rd32(g->esi + 0x54u);
    }

    g->esi = saved_esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100852f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100852f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
