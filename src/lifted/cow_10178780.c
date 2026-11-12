/* f_0x10178780 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Returns 1 if the dword at [this+0x44] is non-zero, else 0, preserving upper bits of eax from the loaded value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10178780(Guest* g, uint32_t self)
{
    (void)g;
    uint32_t val = rd32(self + 0x44u);
    /* setne al writes only the low byte; upper bits of eax remain from the mov eax, [ecx+0x44] */
    return (val & 0xFFFFFF00u) | ((val != 0) ? 1u : 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10178780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10178780(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
