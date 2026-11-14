/* f_0x100e72e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores the low byte of the stack argument at offset 0x298 of the object pointed to by the global at 0x104df770, sets bit 2 of the byte at offset 0x1c4, and returns the current value of that global.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100e72e0(Guest* g, uint32_t param)
{
    const uint32_t global = COW_IMG(0x104df770u);

    uint32_t eax = rd32(global);
    wr8(eax + 0x298u, (uint8_t)param);

    eax = rd32(global);
    wr8(eax + 0x1c4u, (uint8_t)(rd8(eax + 0x1c4u) | 0x4u));

    g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)param;
    g->edx = g->edx;

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e72e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd8(sp0 + 4u);
    const uint32_t result = cow_fn_100e72e0(g, param);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
