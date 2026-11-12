/* f_0x10144360 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   returns 1 if dword at [self+0x18] is non-zero (in al), preserving upper bits of eax from the load.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10144360(Guest* g, uint32_t self)
{
    (void)g;
    uint32_t val = rd32(self + 0x18u);
    return (val & 0xFFFFFF00u) | ((val != 0) ? 1u : 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10144360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10144360(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
