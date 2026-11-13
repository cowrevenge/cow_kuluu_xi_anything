/* f_0x10087a70 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10087a50, replaces its low byte with 0xFF if nonzero else 0, then ANDs the full result with the global dword at 0x10480980.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10087a70(Guest* g)
{
    cow_cdecl(g, COW_IMG(0x10087a50u), 0u);

    const uint32_t eax = g->eax;
    const uint32_t ecx = rd32(COW_IMG(0x10480980u));
    const uint32_t edx_after_call = g->edx;

    const uint8_t al = (uint8_t)eax;
    uint32_t result = (eax & 0xFFFFFF00u) | (al != 0u ? 0xFFu : 0u);
    result &= ecx;

    g->edx = edx_after_call;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10087a70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10087a70(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
