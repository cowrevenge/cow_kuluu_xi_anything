/* f_0x100eb940 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 0xFF if the global at 0x104DFD98 is null; otherwise returns that global with its low byte replaced by the byte at global + stack_arg + 0x19891.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100eb940(Guest* g, uint32_t sp0)
{
    const uint32_t base = rd32(COW_IMG(0x104DFD98u));

    if (base == 0u)
    {
        return 0xFFu;
    }

    const uint32_t arg = rd32(sp0 + 4u);
    g->ecx = arg;

    return (base & 0xFFFFFF00u) | (uint32_t)rd8(base + arg + 0x19891u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100eb940(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100eb940(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
