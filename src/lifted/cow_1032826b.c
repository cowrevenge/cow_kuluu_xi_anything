/* f_0x1032826b - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10311bf0 with the dword at [ebp-0x44] as its argument, then returns.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1032826b(Guest* g)
{
    const uint32_t arg = rd32(g->ebp - 0x44u);
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, arg);
    /* pop ecx: ecx is scratch and not compared; ret leaves eax/edx from the callee */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1032826b(Guest* g)
{
    const uint32_t result = cow_fn_1032826b(g);
    rt_return(g, result, 0u);   /* ret */
}
/* COW_ADAPTER END */
