/* f_0x1005e720 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets or clears bit 4 of the DWORD at self+0x130 according to bit 0 of the byte argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1005e720(Guest* g, uint32_t self, uint32_t arg)
{
    (void)g;

    const uint32_t addr = self + 0x130u;
    const uint32_t old = rd32(addr);
    const uint32_t bit = (arg & 1u) << 4;

    wr32(addr, (old & 0xFFFFFFEFu) | bit);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1005e720(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg = rd8(sp0 + 4u);

    cow_fn_1005e720(g, self, arg);

    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
