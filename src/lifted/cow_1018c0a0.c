/* f_0x1018c0a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Computes (param * 3600 + *this), stores it as the first stack argument, and tail-calls FUN_1018bc40.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1018c0a0(Guest* g, uint32_t self, uint32_t param)
{
    uint32_t eax = param;
    uint32_t edx = rd32(self);

    eax = (uint32_t)(eax + eax * 4u);
    eax = (uint32_t)(eax + eax * 4u);
    eax = (uint32_t)(eax + eax * 8u);
    eax = (uint32_t)(eax << 4u);
    eax = (uint32_t)(eax + edx);

    g->eax = eax;
    g->edx = edx;

    return cow_thiscall(g, COW_IMG(0x1018bc40u), self, 1u, eax);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018c0a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1018c0a0(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
