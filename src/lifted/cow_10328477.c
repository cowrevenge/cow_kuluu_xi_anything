/* f_0x10328477 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   pushes [ebp+8] as an argument, calls FUN_10311bf0 via cdecl, pops the argument into ecx, and returns.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10328477(Guest* g)
{
    const uint32_t arg = rd32(g->ebp + 8u);

    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, arg);

    /* pop ecx: original loads the popped value into ecx but we don't need to set g->ecx
       since it's not compared. However, eax and edx are compared ? they are unchanged by this function
       (the call may modify them, but cow_cdecl handles that). We return g->eax as-is after the call. */

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10328477(Guest* g)
{
    const uint32_t result = cow_fn_10328477(g);
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
