/* f_0x10328138 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10311bf0 with the dword at [ebp-0x34] and returns, preserving eax/edx from the callee.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10328138(Guest* g)
{
    uint32_t arg = rd32(g->ebp - 0x34u);
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, arg);
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10328138(Guest* g)
{
    const uint32_t result = cow_fn_10328138(g);
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
