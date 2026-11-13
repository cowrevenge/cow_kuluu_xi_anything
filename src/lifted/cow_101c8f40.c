/* f_0x101c8f40 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Replaces every non-null byte before the terminating null in a byte string with 0x20 if it is less than 0x20.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101c8f40(Guest* g, uint32_t p)
{
    (void)g;

    if (rd8(p) == 0u)
    {
        return;
    }

    for (;;)
    {
        uint8_t b = rd8(p);
        if (b < 0x20u)
        {
            wr8(p, 0x20u);
        }

        uint8_t next = rd8(p + 1u);
        p += 1u;

        if (next == 0u)
        {
            break;
        }
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c8f40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);

    cow_fn_101c8f40(g, param);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
