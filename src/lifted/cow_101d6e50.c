/* f_0x101d6e50 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Clears the dword at offset 4 of the object and writes 0xffffffff to 100 dwords starting at offset 0xc, spaced 8 bytes apart.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101d6e50(Guest* g, uint32_t self)
{
    (void)g;

    wr32(self + 4u, 0u);

    uint32_t addr = self + 0xcu;
    for (uint32_t count = 0x64u; count != 0u; --count)
    {
        wr32(addr, 0xFFFFFFFFu);
        addr += 8u;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d6e50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d6e50(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
