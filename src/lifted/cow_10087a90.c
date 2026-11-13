/* f_0x10087a90 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns in eax whether the byte at 0x10480980 AND the byte stack argument is nonzero, preserving eax's upper bits and edx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10087a90(Guest* g, uint32_t param)
{
    const uint32_t eax = g->eax;
    const uint32_t edx = g->edx;
    const uint32_t ecx = g->ecx;

    const uint8_t mask = rd8(COW_IMG(0x10480980u));
    const uint8_t arg = (uint8_t)param;

    uint32_t result = (eax & 0xFFFFFF00u) | (uint32_t)((mask & arg) != 0 ? 1u : 0u);

    g->edx = edx;
    g->ecx = (ecx & 0xFFFFFF00u) | (uint32_t)arg;

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10087a90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd8(sp0 + 4u);
    const uint32_t result = cow_fn_10087a90(g, param);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
