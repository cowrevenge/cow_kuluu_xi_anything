/* f_0x101c6cc0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Clears the dword at self+4 and writes 0xffff into 100 16-bit slots spaced 8 bytes apart starting at self+0xc.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101c6cc0(Guest* g, uint32_t self)
{
    (void)g;

    wr32(self + 4u, 0u);

    for (uint32_t i = 0u; i < 100u; ++i)
    {
        wr16(self + 0xcu + i * 8u, 0xFFFFu);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c6cc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    cow_fn_101c6cc0(g, self);

    g->esp = sp0;
    g->ecx = 0u;
    g->eax = self + 0x32cu;

    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
