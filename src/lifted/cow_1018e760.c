/* f_0x1018e760 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Zeroes 20 dwords starting at self+4, sets the byte at self+0x60 to 1, returns 1, and leaves edx=self.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1018e760(Guest* g, uint32_t self)
{
    g->edx = self;

    uint32_t addr = self + 4u;
    for (uint32_t i = 0u; i < 0x14u; ++i)
    {
        wr32(addr, 0u);
        addr += 4u;
    }

    g->ecx = 0u;
    wr8(self + 0x60u, 1u);

    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018e760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1018e760(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
