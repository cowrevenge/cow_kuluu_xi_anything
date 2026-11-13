/* f_0x1025ff30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   subtracts the stored timestamp at self+0x158 from the imported time function's result, stores the difference back, and returns 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1025ff30(Guest* g, uint32_t self)
{
    const uint32_t saved_esi = g->esi;
    const uint32_t target = rd32(COW_IMG(0x10329400u));

    uint32_t eax = cow_stdcall(g, target, 0u);
    const uint32_t edx_after_call = g->edx;

    g->esi = saved_esi;

    eax = eax - rd32(self + 0x158u);
    wr32(self + 0x158u, eax);

    g->eax = 0u;
    g->edx = edx_after_call;

    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025ff30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    const uint32_t result = cow_fn_1025ff30(g, self);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
