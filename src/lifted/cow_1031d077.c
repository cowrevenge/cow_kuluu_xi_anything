/* f_0x1031d077 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls the imported function at [0x10329188] with the table entry selected by the stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1031d077(Guest* g, uint32_t param)
{
    const uint32_t arg = rd32(COW_IMG(0x103d29e0u) + param * 4u);
    const uint32_t target = rd32(COW_IMG(0x10329188u));

    g->eax = param;
    cow_stdcall(g, target, 1u, arg);

    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031d077(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_1031d077(g, param);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
