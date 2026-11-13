/* f_0x10099230 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the image address 0x10485904 if bit 0x10 of the byte at 0x10485824 is set, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10099230(Guest* g)
{
    return (rd8(COW_IMG(0x10485824u)) & 0x10u) ? COW_IMG(0x10485904u) : 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10099230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10099230(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
