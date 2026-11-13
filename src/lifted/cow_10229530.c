/* f_0x10229530 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10153ff0 with the stack argument, then calls FUN_10154520 as a thiscall on the returned value with the same stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10229530(Guest* g, uint32_t arg0)
{
    uint32_t eax = cow_cdecl(g, COW_IMG(0x10153ff0u), 1u, arg0);
    cow_thiscall(g, COW_IMG(0x10154520u), eax, 1u, arg0);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10229530(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    cow_fn_10229530(g, arg0);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
