/* f_0x10181550 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adjusts the this-pointer by adding 0x34330 and tail-calls FUN_10176390 with the same stack arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10181550(Guest* g, uint32_t self, uint32_t param1, uint32_t param2)
{
    (void)g;
    const uint32_t new_self = self + 0x34330u;
    return cow_stdcall(g, COW_IMG(0x10176390u), 2, param1, param2);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10181550(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);
    const uint32_t result = cow_fn_10181550(g, g->ecx, param1, param2);
    g->esp = sp0;
    rt_return(g, result, 8u);   /* ret 8 from the callee */
}
/* COW_ADAPTER END */
