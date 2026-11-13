/* f_0x103279d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10311bf0 with the stack argument at [ebp+8] and returns its eax/edx values.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_103279d0(Guest* g, uint32_t ebp)
{
    uint32_t param = rd32(ebp + 8u);
    uint32_t result = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, param);
    g->edx = g->edx; /* edx is preserved by the callee or whatever it leaves */
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103279d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_103279d0(g, g->ebp);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
