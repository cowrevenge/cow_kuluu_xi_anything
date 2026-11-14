/* f_0x10139a20 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the signed stack argument is non-negative, calls FUN_10139e30 with this from 0x105781f0 and stack arguments (0, 0xffff, arg); otherwise returns immediately.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10139a20(Guest* g, uint32_t arg)
{
    if ((int32_t)arg < 0)
    {
        /* Original leaves edx untouched on this path. */
        g->edx = g->edx;
        return arg;
    }

    const uint32_t self = rd32(COW_IMG(0x105781f0u));

    /*
     * Original pushes:
     *   push eax
     *   push 0xffff
     *   push 0
     * so the source-order arguments are (0, 0xffff, eax).
     * ecx is loaded from the global and used as the this pointer.
     */
    cow_thiscall(g, COW_IMG(0x10139e30u), self, 3u, 0u, 0xffffu, arg);

    /* eax and edx are whatever the callee left behind. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10139a20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_10139a20(g, arg);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
