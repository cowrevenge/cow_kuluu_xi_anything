/* f_0x101420a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 1 if a global byte flag is nonzero, after conditionally decrementing a global 16-bit counter; otherwise returns 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_101420a0(Guest* g)
{
    (void)g;

    const uint32_t counter = COW_IMG(0x105782a8u);
    const uint32_t flag = COW_IMG(0x105782aau);

    uint16_t w = rd16(counter);

    if (w != 0u)
    {
        uint16_t nw = (uint16_t)(w - 1u);
        wr16(counter, nw);

        if (nw != 0u)
        {
            return 0u;
        }
    }

    uint8_t b = rd8(flag);
    if (b != 0u)
    {
        return 1u;
    }

    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101420a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101420a0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
