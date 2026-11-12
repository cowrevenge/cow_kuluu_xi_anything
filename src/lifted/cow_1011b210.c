/* f_0x1011b210 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   returns 1 if the dword at [self+0xC] is non-zero, otherwise 0, preserving upper bits of eax from the loaded value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1011b210(Guest* g, uint32_t self)
{
    (void)g;
    uint32_t val = rd32(self + 0xCu);
    /* setne al modifies only the low byte of eax. The upper bits remain as they were after 'mov eax, [ecx+0xc]'. */
    return (val & 0xFFFFFF00u) | ((val != 0u) ? 1u : 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011b210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1011b210(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
