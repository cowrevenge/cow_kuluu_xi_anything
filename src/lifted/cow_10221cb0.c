/* f_0x10221cb0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the object at [this+8] is non-null, calls it, then tail-calls the same object's cleanup routine.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10221cb0(Guest* g, uint32_t self)
{
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_esp = g->esp;

    uint32_t child = rd32(self + 8u);
    if (child != 0u)
    {
        g->esp = saved_esp - 4u;          /* emulate push esi before the call */
        cow_thiscall_cdecl(g, COW_IMG(0x1011a400u), child, 0u);
        g->esp = saved_esp;               /* emulate pop esi after the call */
    }

    g->esi = saved_esi;                   /* original restores esi before the tail call */
    g->esp = saved_esp;                   /* tail call sees the caller's original stack pointer */

    uint32_t result = cow_thiscall_cdecl(g, COW_IMG(0x10221ce0u), self, 0u);

    g->edx = g->edx;                      /* preserve whatever the tail callee left in edx */
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10221cb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10221cb0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
