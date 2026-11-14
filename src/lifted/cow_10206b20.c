/* f_0x10206b20 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets or clears bit 0 of the byte at [0x1057876c] + 0x74 depending on whether the byte argument equals 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10206b20(Guest* g, uint32_t param)
{
    (void)g;

    const uint32_t base = rd32(COW_IMG(0x1057876cu));
    const uint32_t addr = base + 0x74u;

    if ((param & 0xFFu) == 1u)
    {
        wr8(addr, (uint8_t)(rd8(addr) | 1u));
    }
    else
    {
        wr8(addr, (uint8_t)(rd8(addr) & 0xFEu));
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10206b20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd8(sp0 + 4u);

    cow_fn_10206b20(g, param);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
