/* f_0x1003e2c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies selected bytes from the stack argument buffer into the object in ecx, preserving the high bytes of eax and edx as the original does.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1003e2c0(Guest* g, uint32_t self, uint32_t src)
{
    uint32_t eax = src;
    uint32_t edx = g->edx;

    g->eax = eax;

    edx = (edx & 0xFFFFFF00u) | (uint32_t)rd8(src);
    g->edx = edx;
    wr8(self + 2u, (uint8_t)edx);

    edx = (edx & 0xFFFFFF00u) | (uint32_t)rd8(src + 2u);
    g->edx = edx;
    wr8(self + 1u, (uint8_t)edx);

    edx = (edx & 0xFFFFFF00u) | (uint32_t)rd8(src + 4u);
    g->edx = edx;
    wr8(self, (uint8_t)edx);

    eax = (eax & 0xFFFFFF00u) | (uint32_t)rd8(src + 6u);
    g->eax = eax;
    wr8(self + 3u, (uint8_t)eax);

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003e2c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t src = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_1003e2c0(g, self, src);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
