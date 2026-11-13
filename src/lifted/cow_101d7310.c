/* f_0x101d7310 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Writes 0xffffffff to seven 32-bit fields of the object, starting at offset 4 and spaced 12 bytes apart.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101d7310(Guest* g, uint32_t self)
{
    (void)g;

    uint32_t edx = self + 4u;
    for (uint32_t i = 0u; i < 7u; ++i)
    {
        wr32(edx, 0xFFFFFFFFu);
        edx += 0xCu;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d7310(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d7310(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
