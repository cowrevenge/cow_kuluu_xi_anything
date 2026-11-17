/* f_0x100fe7f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   maps an unsigned 0..7 argument through a jump table to a small constant, returning 0x10 for values above 7.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100fe7f0(Guest* g, uint32_t value)
{
    (void)g;

    if (value > 7u)
    {
        return 0x10u;
    }

    switch (value)
    {
        case 0u: return 0u;
        case 1u: return 1u;
        case 2u: return 2u;
        case 3u: return 4u;
        case 4u: return 5u;
        case 5u: return 6u;
        case 6u: return 7u;
        case 7u: return 8u;
        default: return 0x10u;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fe7f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100fe7f0(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
