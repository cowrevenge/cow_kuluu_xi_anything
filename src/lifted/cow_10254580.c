/* f_0x10254580 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies the 16-bit fields at self+0x16 and self+0x14 to the two output pointers, preserving the upper half of eax and leaving edx as the first output pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10254580(Guest* g, uint32_t self, uint32_t dst1, uint32_t sp0)
{
    uint32_t eax = g->eax;
    uint32_t edx = dst1;

    uint16_t v1 = (uint16_t)rd16(self + 0x16u);
    wr16(edx, v1);

    uint16_t v2 = (uint16_t)rd16(self + 0x14u);
    eax = (eax & 0xFFFF0000u) | (uint32_t)v2;

    uint32_t ecx = rd32(sp0 + 8u);
    wr16(ecx, v2);

    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10254580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t dst1 = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_10254580(g, self, dst1, sp0);

    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
