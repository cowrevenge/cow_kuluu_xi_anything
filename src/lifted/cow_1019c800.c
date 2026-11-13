/* f_0x1019c800 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets the byte at self+0x28 from the second stack argument when self+8 is nonzero, otherwise clears it; returns the resulting eax and leaves edx unchanged.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_1019c800(Guest* g, uint32_t self, uint32_t field8, uint32_t stack_byte)
{
    if (field8 == 0u)
    {
        wr8(self + 0x28u, 0u);
        g->edx = g->edx;
        return 0u;
    }

    const uint32_t eax = (field8 & 0xFFFFFF00u) | (uint8_t)stack_byte;
    wr8(self + 0x28u, (uint8_t)eax);
    g->edx = g->edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019c800(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    const uint32_t field8 = rd32(self + 8u);
    uint32_t stack_byte = 0u;

    if (field8 != 0u)
    {
        stack_byte = rd8(sp0 + 8u);
    }

    const uint32_t result = cow_fn_1019c800(g, self, field8, stack_byte);

    g->esp = sp0;
    rt_return(g, result, 16u);
}
/* COW_ADAPTER END */
