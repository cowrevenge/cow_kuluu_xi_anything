/* f_0x101399f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the first stack byte argument is nonzero, calls FUN_10139e10 with the current register state; otherwise returns immediately.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101399f0(Guest* g, uint32_t arg)
{
    uint32_t eax = (g->eax & 0xFFFFFF00u) | (arg & 0xFFu);

    if ((uint8_t)eax != 0u)
    {
        g->eax = eax;
        cow_thiscall_cdecl(g, COW_IMG(0x10139e10u), g->ecx, 0u);
        eax = g->eax;
    }
    else
    {
        g->eax = eax;
    }

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101399f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg = rd8(sp0 + 4u);
    const uint32_t result = cow_fn_101399f0(g, arg);
    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
