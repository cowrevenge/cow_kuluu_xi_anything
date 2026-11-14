/* f_0x100673b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   tail-calls FUN_10065e00 with this+0x20 and the original stack argument, preserving the tail-call stack layout.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100673b0(Guest* g, uint32_t self, uint32_t arg0, uint32_t sp0)
{
    /*
     * Original:
     *   add ecx, 0x20
     *   jmp 0x10065e00
     *
     * This is a tail call.  The target must see the caller's stack frame:
     *   [esp]     = return address of our caller
     *   [esp + 4] = arg0
     *
     * cow_thiscall() emulates a normal call, so it will push one stack
     * argument and a return address.  Raise g->esp by those 8 bytes before
     * invoking it so the callee's effective esp is exactly sp0.
     */
    g->esp = sp0 + 8u;

    const uint32_t result = cow_thiscall(g, COW_IMG(0x10065e00u), self + 0x20u, 1u, arg0);

    /*
     * The original leaves eax and edx exactly as the tail-called function
     * left them.  cow_thiscall() returns eax and leaves edx in g->edx.
     */
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100673b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg0 = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_100673b0(g, self, arg0, sp0);

    g->esp = sp0;
    rt_return(g, result, 4u);   /* target ends in ret 4 */
}
/* COW_ADAPTER END */
