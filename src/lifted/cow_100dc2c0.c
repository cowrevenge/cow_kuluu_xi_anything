/* f_0x100dc2c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns 1 if the global at 0x104ae8ac is non-zero, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100dc2c0(Guest* g)
{
    (void)g;
    uint32_t val = rd32(COW_IMG(0x104ae8acu));
    return (val != 0) ? 1u : 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100dc2c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100dc2c0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* ret */
}
/* COW_ADAPTER END */
