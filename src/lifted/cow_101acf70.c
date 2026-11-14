/* f_0x101acf70 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies four bytes from the stack argument pointer into the object pointed to by ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101acf70(Guest* g, uint32_t self, uint32_t src)
{
    (void)g;

    uint32_t v0 = rd8(src + 0u);
    wr8(self + 0u, v0);

    uint32_t v1 = rd8(src + 1u);
    wr8(self + 1u, v1);

    uint32_t v2 = rd8(src + 2u);
    wr8(self + 2u, v2);

    uint32_t v3 = rd8(src + 3u);
    wr8(self + 3u, v3);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101acf70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t src = rd32(sp0 + 4u);

    cow_fn_101acf70(g, self, src);

    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
