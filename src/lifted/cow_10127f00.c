/* f_0x10127f00 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Zeroes the first 0x7c bytes of the object pointed to by ecx (30 dwords, then the dword at offset 0x78).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10127f00(Guest* g, uint32_t self)
{
    for (uint32_t i = 0; i < 0x1eu; ++i)
    {
        wr32(self + i * 4u, 0u);
    }
    wr32(self + 0x78u, 0u);

    g->eax = 0u;
    g->ecx = 0u;
    g->edx = self + 0x78u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10127f00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10127f00(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
