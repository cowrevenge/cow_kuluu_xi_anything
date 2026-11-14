/* f_0x100f7740 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100f76b0, then if the global pointer at 0x104df908 is non-null calls FUN_100f1f00 with that pointer as this and 1 as the stack argument, and returns 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_100f7740(Guest* g)
{
    cow_cdecl(g, COW_IMG(0x100f76b0u), 0);

    const uint32_t ecx = rd32(COW_IMG(0x104df908u));
    if (ecx != 0u)
    {
        cow_thiscall(g, COW_IMG(0x100f1f00u), ecx, 1, 1u);
    }

    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f7740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100f7740(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
