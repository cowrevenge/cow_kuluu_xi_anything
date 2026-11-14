/* f_0x1013f180 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_1015e790 with [self+8] and 1, then tail-calls FUN_1013f0f0 with ecx loaded from a global.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1013f180(Guest* g, uint32_t self)
{
    const uint32_t arg0 = rd32(self + 8u);

    g->eax = arg0;
    g->ecx = COW_IMG(0x10621838u);
    cow_thiscall(g, COW_IMG(0x1015e790u), g->ecx, 2u, arg0, 1u);

    g->ecx = rd32(COW_IMG(0x10578214u));
    cow_thiscall_cdecl(g, COW_IMG(0x1013f0f0u), g->ecx, 0u);

    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013f180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1013f180(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
