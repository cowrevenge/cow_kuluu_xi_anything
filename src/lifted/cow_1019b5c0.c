/* f_0x1019b5c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Clears the three bytes at offsets 0x20, 0x21, and 0x22 of the object when the stack argument equals 8, preserving the upper bits of eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1019b5c0(Guest* g, uint32_t self, uint32_t arg)
{
    if (arg == 8u)
    {
        wr8(self + 0x20u, 0u);
        wr8(self + 0x21u, 0u);
        wr8(self + 0x22u, 0u);
        return g->eax & 0xFFFFFF00u;
    }

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019b5c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1019b5c0(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
