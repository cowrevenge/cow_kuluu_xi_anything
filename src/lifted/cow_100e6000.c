/* f_0x100e6000 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns a pointer derived from a global table pointer when a flag byte is set, otherwise zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_100e6000(Guest* g)
{
    const uint32_t base = rd32(COW_IMG(0x104DFD98u));

    if (base == 0u)
    {
        return 0u;
    }

    const uint32_t flag = rd8((uint32_t)(base + 0x2CF48u));
    g->ecx = (g->ecx & 0xFFFFFF00u) | (flag & 0xFFu);

    if (flag == 0u)
    {
        return 0u;
    }

    return (uint32_t)(base + 0x2CDD4u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e6000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100e6000(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
