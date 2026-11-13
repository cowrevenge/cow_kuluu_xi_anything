/* f_0x101ac210 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the dword at self+0xc20 when the byte at self+0xc24 is zero, otherwise the dword at self+0x888.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101ac210(Guest* g, uint32_t self)
{
    (void)g;

    if ((uint8_t)rd8(self + 0xc24u) == 0u)
    {
        return rd32(self + 0xc20u);
    }

    return rd32(self + 0x888u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ac210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101ac210(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
