/* f_0x1014cff0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Returns a non-zero indicator in al based on whether the dword at self+0x14 is non-zero, preserving upper bits of that value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1014cff0(Guest* g, uint32_t self)
{
    (void)g;
    uint32_t val = rd32(self + 0x14u);
    /* setne al: sets al to 1 if val != 0, else 0; upper 24 bits of eax remain as loaded */
    return (val & 0xFFFFFF00u) | ((val != 0u) ? 1u : 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014cff0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1014cff0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
