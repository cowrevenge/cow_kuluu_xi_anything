/* f_0x101ac4d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Returns the dword at self+0x888 with its low byte replaced by 1 if that dword is signed-positive, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101ac4d0(Guest* g, uint32_t self)
{
    (void)g;
    const uint32_t val = rd32(self + 0x888u);
    const uint32_t al = ((int32_t)val > 0) ? 1u : 0u;
    return (val & 0xFFFFFF00u) | al;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ac4d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101ac4d0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
