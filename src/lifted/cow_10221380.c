/* f_0x10221380 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-calls FUN_10220e70 with this adjusted by +0x30, passing through the stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10221380(Guest* g, uint32_t self, uint32_t param2)
{
    (void)g;
    return cow_thiscall(g, COW_IMG(0x10220e70u), self + 0x30u, 1, param2);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10221380(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10221380(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);   /* ret 4 */
}
/* COW_ADAPTER END */
