/* f_0x10124030 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Zero-fills 0x40 dwords at the object pointer in ecx, then zeroes the byte at offset 0x100.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10124030(Guest* g, uint32_t self)
{
    uint32_t addr = self;
    uint32_t count = 0x40u;
    const uint32_t step = g->df ? 0xFFFFFFFCu : 4u;

    g->edx = self;

    while (count != 0u)
    {
        wr32(addr, 0u);
        addr += step;
        --count;
    }

    g->ecx = 0u;
    wr8(self + 0x100u, 0u);

    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10124030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10124030(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
