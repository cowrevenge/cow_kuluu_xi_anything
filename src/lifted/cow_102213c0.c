/* f_0x102213c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Adjusts the this pointer by 0x18 and tail-calls FUN_10220e80 with the original stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102213c0(Guest* g, uint32_t self, uint32_t arg0)
{
    const uint32_t new_self = self + 0x18u;
    return cow_thiscall(g, COW_IMG(0x10220e80u), new_self, 1u, arg0);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102213c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_102213c0(g, g->ecx, arg0);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
