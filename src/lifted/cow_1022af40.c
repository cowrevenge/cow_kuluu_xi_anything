/* f_0x1022af40 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   forwards the last three stack arguments to FUN_1022ae40 as thiscall stack parameters, using the first stack argument as `this`.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=4 */
uint32_t cow_fn_1022af40(Guest* g, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3)
{
    /* Original sets these before the call; the callee may observe them. */
    g->eax = arg3;
    g->edx = arg1;

    /*
     * Original stack at the call:
     *   [esp]     = arg1
     *   [esp + 4] = arg2
     *   [esp + 8] = arg3
     *   ecx       = arg0
     *
     * The callee ends in `ret 12`, so it pops the three stack arguments.
     */
    cow_thiscall(g, COW_IMG(0x1022ae40u), arg0, 3u, arg1, arg2, arg3);

    /* eax and edx are whatever the callee left there. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022af40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t arg2 = rd32(sp0 + 0xcu);
    const uint32_t arg3 = rd32(sp0 + 0x10u);

    const uint32_t result = cow_fn_1022af40(g, arg0, arg1, arg2, arg3);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
