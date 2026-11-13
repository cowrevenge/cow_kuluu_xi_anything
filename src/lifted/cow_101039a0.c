/* f_0x101039a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   stores the difference of the two stack arguments into a global and returns that difference with its low byte forced to 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101039a0(Guest* g, uint32_t arg0, uint32_t arg1)
{
    (void)g;

    const uint32_t diff = arg1 - arg0;
    wr32(COW_IMG(0x104e0af8u), diff);

    return (diff & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101039a0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    /* Original reads [esp+8] before [esp+4]. */
    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t arg0 = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_101039a0(g, arg0, arg1);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
