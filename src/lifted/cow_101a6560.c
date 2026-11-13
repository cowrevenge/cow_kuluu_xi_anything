/* f_0x101a6560 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the second stack argument's low byte is nonzero, clears the bytes at offsets 0x235d and 0x235e of the object pointed to by self+0x14; always zeroes the low bytes of eax and edx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_101a6560(Guest* g, uint32_t self, uint32_t flagByte)
{
    uint32_t eax = (g->eax & 0xFFFFFF00u) | (uint8_t)flagByte;
    uint32_t edx = (g->edx & 0xFFFFFF00u);

    if ((uint8_t)eax != 0u)
    {
        eax = rd32(self + 0x14u);
        wr8(eax + 0x235Eu, (uint8_t)edx);
        wr8(eax + 0x235Du, (uint8_t)edx);
    }

    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a6560(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t flagByte = rd8(sp0 + 8u);
    const uint32_t result = cow_fn_101a6560(g, self, flagByte);
    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
