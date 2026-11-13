/* f_0x1011b360 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores two 16-bit stack arguments into fields at offsets 0x1a and 0x1c of the object in ecx, preserving the upper halves of eax and edx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_1011b360(Guest* g, uint32_t self, uint32_t arg_sp4, uint32_t arg_sp8, uint32_t entry_eax, uint32_t entry_edx)
{
    wr16(self + 0x1Cu, (uint16_t)arg_sp8);
    wr16(self + 0x1Au, (uint16_t)arg_sp4);

    g->edx = (entry_edx & 0xFFFF0000u) | (uint16_t)arg_sp4;
    return (entry_eax & 0xFFFF0000u) | (uint16_t)arg_sp8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011b360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t entry_eax = g->eax;
    const uint32_t entry_edx = g->edx;

    const uint32_t arg_sp8 = rd16(sp0 + 8u);
    const uint32_t arg_sp4 = rd16(sp0 + 4u);

    const uint32_t result = cow_fn_1011b360(g, g->ecx, arg_sp4, arg_sp8, entry_eax, entry_edx);

    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
