/* f_0x1032812e - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10311bf0 with the dword at [ebp-0x28], then returns.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1032812e(Guest* g, uint32_t ebp)
{
    const uint32_t param = rd32(ebp - 0x28u);
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, param);
    /* pop ecx: ecx is scratch and not compared; ret leaves eax/edx from callee */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1032812e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1032812e(g, g->ebp);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* bare ret */
}
/* COW_ADAPTER END */
