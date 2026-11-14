/* f_0x10096440 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100bd760 with the stack argument, then calls FUN_100c1620 with the first result in ecx, returning the final eax and edx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10096440(Guest* g, uint32_t self, uint32_t param)
{
    (void)self;

    uint32_t eax = cow_cdecl(g, COW_IMG(0x100bd760u), 1u, param);

    g->ecx = eax;
    cow_thiscall(g, COW_IMG(0x100c1620u), eax, 0u);

    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10096440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10096440(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
