/* f_0x10039810 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies 16 bytes from the stack argument to the address in ecx, leaving eax as src - dest and edx's low byte as the last copied byte.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10039810(Guest* g, uint32_t self, uint32_t src, uint32_t edx_in)
{
    uint32_t offset = src - self;
    uint32_t dest = self;
    uint32_t edx = edx_in;

    for (uint32_t i = 0u; i < 16u; ++i)
    {
        uint32_t b = rd8(offset + dest) & 0xFFu;
        wr8(dest, (uint8_t)b);
        edx = (edx & 0xFFFFFF00u) | b;
        dest += 1u;
    }

    g->edx = edx;
    g->ecx = dest;
    return offset;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10039810(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10039810(g, g->ecx, rd32(sp0 + 4u), g->edx);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
