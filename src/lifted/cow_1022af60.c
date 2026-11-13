/* f_0x1022af60 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   forwards four stack arguments to FUN_1022aed0 as a thiscall, using the first argument as `this`.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=4 */
uint32_t cow_fn_1022af60(Guest* g, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4)
{
    /* Original pre-call register state:
       eax = arg4, ecx = arg1, edx = arg2.
       The callee is a thiscall with ecx = arg1 and stack args arg2, arg3, arg4. */
    g->eax = arg4;
    g->edx = arg2;
    g->ecx = arg1;

    cow_thiscall(g, COW_IMG(0x1022aed0u), arg1, 3u, arg2, arg3, arg4);

    /* Preserve the exact post-call eax/edx left by the callee. */
    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022af60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(sp0 + 4u);
    const uint32_t arg2 = rd32(sp0 + 8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    const uint32_t arg4 = rd32(sp0 + 0x10u);

    const uint32_t result = cow_fn_1022af60(g, arg1, arg2, arg3, arg4);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
