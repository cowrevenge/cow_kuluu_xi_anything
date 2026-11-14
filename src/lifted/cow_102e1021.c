/* f_0x102e1021 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   tail-call thunk that jumps to FUN_102e0f9c with the same arguments and returns its result.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_102e1021(Guest* g, uint32_t self)
{
    uint32_t result;

    result = cow_thiscall_cdecl(g, COW_IMG(0x102e0f9cu), self, 0u);
    g->edx = g->edx;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e1021(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t result = cow_fn_102e1021(g, self);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
