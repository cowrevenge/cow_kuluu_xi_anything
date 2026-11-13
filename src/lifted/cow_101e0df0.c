/* f_0x101e0df0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns 1 if the low byte of the stack argument occurs in the 10 bytes at self+0x15, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101e0df0(Guest* g, uint32_t self, uint32_t ch)
{
    (void)g;

    const uint8_t target = (uint8_t)ch;

    for (uint32_t i = 0u; i < 10u; ++i)
    {
        if (rd8(self + 0x15u + i) == target)
        {
            return 1u;
        }
    }

    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e0df0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t ch = rd8(sp0 + 4u);

    const uint32_t result = cow_fn_101e0df0(g, self, ch);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
