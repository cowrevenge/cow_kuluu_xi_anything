/* f_0x1011c920 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns true if the first byte is 0x85 and the second byte is in the unsigned range 0x9f..0xdf.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_1011c920(Guest* g, uint32_t param)
{
    (void)g;

    if (rd8(param) != 0x85u)
    {
        return 0u;
    }

    const uint32_t b = rd8(param + 1u);

    if (b < 0x9fu)
    {
        return 0u;
    }

    return (b <= 0xdfu) ? 1u : 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011c920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_1011c920(g, param);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
