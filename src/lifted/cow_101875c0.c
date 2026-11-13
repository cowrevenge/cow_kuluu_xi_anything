/* f_0x101875c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   walks the singly linked list starting at self+0x10 and calls FUN_1018ab40 for each node.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101875c0(Guest* g, uint32_t self)
{
    const uint32_t saved_esi = g->esi;

    g->esi = rd32(self + 0x10u);

    while (g->esi != 0u)
    {
        const uint32_t node = g->esi;
        cow_thiscall_cdecl(g, COW_IMG(0x1018ab40u), node, 0u);
        g->esi = rd32(g->esi + 8u);
    }

    g->esi = saved_esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101875c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101875c0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
