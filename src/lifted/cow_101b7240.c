/* f_0x101b7240 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adjusts the this pointer by 0x7e30 and tail-calls FUN_101ac8a0 with the same four stack arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=4 */
uint32_t cow_fn_101b7240(Guest* g, uint32_t sp0,
                         uint32_t arg0, uint32_t arg1,
                         uint32_t arg2, uint32_t arg3)
{
    /* The original loads these two stack slots into eax/edx and writes them back unchanged.
       Keep the writes and the register values because the tail-called function observes them. */
    g->eax = rd32(sp0 + 0x10u);
    g->edx = rd32(sp0 + 0x0cu);
    wr32(sp0 + 0x10u, g->eax);
    wr32(sp0 + 0x0cu, g->edx);

    /* add ecx, 0x7e30 */
    const uint32_t self = g->ecx + 0x7e30u;

    /* Tail call to 0x101ac8a0.  It is a thiscall/stdcall-style callee that pops 16 bytes. */
    uint32_t result = cow_thiscall(g, COW_IMG(0x101ac8a0u), self, 4u,
                                   arg0, arg1, arg2, arg3);

    /* Preserve the callee's final eax/edx for the caller. */
    g->edx = g->edx;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b7240(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t arg2 = rd32(sp0 + 12u);
    const uint32_t arg3 = rd32(sp0 + 16u);

    const uint32_t result = cow_fn_101b7240(g, sp0, arg0, arg1, arg2, arg3);

    g->esp = sp0;
    rt_return(g, result, 16u);
}
/* COW_ADAPTER END */
