/* f_0x1013ac30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the 16-bit stack argument equals 6, clears bit 1 and sets bit 0 of the byte at self+0x3a8, preserving the upper bits of eax; otherwise leaves eax unchanged.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1013ac30(Guest* g, uint32_t self, uint32_t arg)
{
    if ((uint16_t)arg != 6u)
    {
        return g->eax;
    }

    const uint32_t addr = self + 0x3a8u;
    uint32_t al = (uint32_t)rd8(addr);
    al = (al & 0xFDu) | 1u;
    wr8(addr, (uint8_t)al);

    return (g->eax & 0xFFFFFF00u) | al;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013ac30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg = rd16(sp0 + 4u);

    const uint32_t result = cow_fn_1013ac30(g, self, arg);

    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
