/* f_0x103281cb - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10311bf0 with the dword at [ebp-0x14], then returns.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_103281cb(Guest* g, uint32_t ebp)
{
    const uint32_t arg = rd32(ebp - 0x14u);
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, arg);
    /* pop ecx: the value popped is the return address pushed by the call */
    g->ecx = 0x103281D3u + RD;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103281cb(Guest* g)
{
    const uint32_t sp0 = g->esp;
    (void)sp0;
    const uint32_t result = cow_fn_103281cb(g, g->ebp);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
