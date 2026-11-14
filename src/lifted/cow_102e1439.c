/* f_0x102e1439 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   tail-calls FUN_102e100b with this function's ecx argument and returns its result.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102e1439(Guest* g, uint32_t self)
{
    return cow_thiscall_cdecl(g, COW_IMG(0x102e100bu), self, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e1439(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102e1439(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
