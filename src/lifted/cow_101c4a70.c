/* f_0x101c4a70 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Loads a pointer from self+4 into ecx and tail-calls FUN_101c16b0 with that value as `this`.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101c4a70(Guest* g, uint32_t self)
{
    const uint32_t new_ecx = rd32(self + 4u);
    return cow_thiscall(g, COW_IMG(0x101c16b0u), new_ecx, 0);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c4a70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101c4a70(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 4u);   /* ret 4 */
}
/* COW_ADAPTER END */
