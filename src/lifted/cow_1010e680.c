/* f_0x1010e680 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns 1 iff the second byte argument is nonzero and equals the first byte argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_1010e680(Guest* g, uint32_t first, uint32_t second)
{
    (void)g;

    if (second == 0u)
    {
        return 0u;
    }

    if (first != second)
    {
        return 0u;
    }

    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010e680(Guest* g)
{
    const uint32_t sp0 = g->esp;

    /* Original reads [esp + 8] first and only reads [esp + 4] if that byte is nonzero. */
    const uint32_t second = rd8(sp0 + 8u);
    uint32_t first = 0u;

    if (second != 0u)
    {
        first = rd8(sp0 + 4u);
    }

    const uint32_t result = cow_fn_1010e680(g, first, second);

    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
