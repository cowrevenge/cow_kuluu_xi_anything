/* f_0x10162540 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the sole stack argument is 0x200, calls FUN_10127250 with ecx set to [this+0x18]; otherwise does nothing.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10162540(Guest* g, uint32_t self, uint32_t arg)
{
    if (arg == 0x200u)
    {
        const uint32_t callee_ecx = rd32(self + 0x18u);
        cow_thiscall_cdecl(g, COW_IMG(0x10127250u), callee_ecx, 0u);
    }

    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10162540(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_10162540(g, self, arg);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
