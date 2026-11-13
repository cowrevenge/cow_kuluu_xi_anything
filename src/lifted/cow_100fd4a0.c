/* f_0x100fd4a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns a byte from a global structure when its type byte is 0x17, otherwise returns the global pointer with its low byte cleared.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100fd4a0(Guest* g)
{
    (void)g;

    uint32_t eax = rd32(COW_IMG(0x104DFD98u));

    if (eax == 0u)
    {
        return 0u;
    }

    if (rd8(eax + 0x40C44u) != 0x17u)
    {
        return eax & 0xFFFFFF00u;
    }

    return (eax & 0xFFFFFF00u) | (uint32_t)rd8(eax + 0x40C4Au);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fd4a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100fd4a0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
