/* f_0x102a3da0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_103156f3 with the two dwords at offsets 0x20 and 0x1c of the first argument, 4, and the second argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_102a3da0(Guest* g, uint32_t param1, uint32_t param2)
{
    uint32_t ecx;
    uint32_t edx;

    ecx = rd32(param1 + 0x1cu);
    edx = rd32(param1 + 0x20u);

    g->eax = param1;
    g->ecx = ecx;
    g->edx = edx;

    cow_cdecl(g, COW_IMG(0x103156f3u), 4u, edx, ecx, 4u, param2);

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a3da0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param2 = rd32(sp0 + 8u);
    const uint32_t param1 = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_102a3da0(g, param1, param2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
