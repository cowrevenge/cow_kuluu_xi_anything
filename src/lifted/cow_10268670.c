/* f_0x10268670 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-calls FUN_10266ba0 with the first stack argument advanced by 0x10 and the second unchanged.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10268670(Guest* g, uint32_t arg0, uint32_t arg1)
{
    const uint32_t adjusted0 = arg0 + 0x10u;
    return cow_stdcall(g, COW_IMG(0x10266ba0u), 2u, adjusted0, arg1);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10268670(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10268670(g, arg0, arg1);

    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
