/* f_0x10049560 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100492f0(1) and returns the sign-extended byte at offset 0x21 of the returned pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10049560(Guest* g, uint32_t self)
{
    const uint32_t p = cow_thiscall(g, COW_IMG(0x100492f0u), self, 1u, 1u);
    return (uint32_t)(int32_t)(int8_t)rd8(p + 0x21u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10049560(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10049560(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
