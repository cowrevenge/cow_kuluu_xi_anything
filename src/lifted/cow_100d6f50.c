/* f_0x100d6f50 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Toggles bit 1 of the byte at self+0x8ac according to the low bit of the stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100d6f50(Guest* g, uint32_t self, uint32_t param)
{
    const uint32_t addr = (uint32_t)(self + 0x8ACu);

    uint8_t dl = (uint8_t)param;
    uint8_t al = rd8(addr);

    dl = (uint8_t)(dl + dl);
    dl = (uint8_t)(dl ^ al);
    dl = (uint8_t)(dl & 0x2u);
    dl = (uint8_t)(dl ^ al);

    const uint32_t final_eax = (g->eax & 0xFFFFFF00u) | (uint32_t)al;
    const uint32_t final_edx = (g->edx & 0xFFFFFF00u) | (uint32_t)dl;

    g->eax = final_eax;
    g->edx = final_edx;

    wr8(addr, dl);

    return final_eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d6f50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg = rd8((uint32_t)(sp0 + 4u));

    const uint32_t result = cow_fn_100d6f50(g, self, arg);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
