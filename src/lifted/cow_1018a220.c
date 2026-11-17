/* f_0x1018a220 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10189ca0 to obtain a pointer, then either calls FUN_1018a2e0 with it or sets this+0x35 to 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1018a220(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t local_4 = cow_frame(g, sp0, 4u);

    wr32(local_4, self);

    cow_thiscall(g, COW_IMG(0x10189ca0u), self, 2u,
                 local_4,
                 rd32(self + 0x10u));

    const uint32_t eax = rd32(local_4);

    if (eax != 0u && rd32(eax) != 0u)
    {
        cow_thiscall(g, COW_IMG(0x1018a2e0u), self, 1u, eax);
    }
    else
    {
        wr8(self + 0x35u, 1u);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018a220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t saved_esi = g->esi;

    cow_fn_1018a220(g, self, sp0);

    g->esi = saved_esi;
    g->ecx = self;
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
