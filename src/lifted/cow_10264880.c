/* f_0x10264880 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Resets the event handle stored at this+0xd0, then tail-calls FUN_102632d0 with this as the object pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10264880(Guest* g, uint32_t self)
{
    const uint32_t handle = rd32(self + 0xd0u);
    const uint32_t reset_event = rd32(COW_IMG(0x103291fcu));

    cow_stdcall(g, reset_event, 1u, handle);

    const uint32_t result = cow_thiscall_cdecl(g, COW_IMG(0x102632d0u), self, 0u);

    g->edx = g->edx;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10264880(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    g->esp = sp0;
    const uint32_t result = cow_fn_10264880(g, self);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
