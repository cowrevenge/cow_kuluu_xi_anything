/* f_0x10123e50 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the global mask at 0x1036e3a0 with its low byte set to 1 iff it intersects the argument, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10123e50(Guest* g, uint32_t param)
{
    (void)g;
    const uint32_t mask = rd32(COW_IMG(0x1036e3a0u));
    const uint32_t low = ((mask & param) != 0u) ? 1u : 0u;
    return (mask & 0xFFFFFF00u) | low;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10123e50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10123e50(g, param);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
