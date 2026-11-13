/* f_0x1032846d - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10311bf0 with the first stack argument (at [ebp+8]) and returns, preserving eax/edx from the callee.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1032846d(Guest* g)
{
    const uint32_t param = rd32(g->ebp + 8u);
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, param);
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1032846d(Guest* g)
{
    const uint32_t result = cow_fn_1032846d(g);
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
