/* f_0x10327668 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10311bf0 with the dword at [ebp-0x10], then returns.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10327668(Guest* g, uint32_t ebp)
{
    const uint32_t param = rd32(ebp - 0x10u);
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, param);
    /* After the call, eax holds the callee's return value. ecx is popped from stack (dead). */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10327668(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10327668(g, g->ebp);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
