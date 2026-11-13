/* f_0x101c48a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Replaces a null sixth argument with a default function pointer, adjusts this, then tail-calls FUN_101bfe30 with the same six stack arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=6 */
uint32_t cow_fn_101c48a0(Guest* g, uint32_t self,
                         uint32_t arg1, uint32_t arg2, uint32_t arg3,
                         uint32_t arg4, uint32_t arg5, uint32_t arg6)
{
    uint32_t eax = arg6;

    if (eax == 0u)
    {
        eax = COW_IMG(0x101c4d50u);
    }

    uint32_t ecx = rd32(self + 4u);

    /* The original stores the possibly-defaulted sixth argument back into
       [esp + 0x18] before tail-jumping.  The callee will read it from the
       stack, so pass the modified value to the tail call. */
    uint32_t result = cow_thiscall(g, COW_IMG(0x101bfe30u), ecx, 6u,
                                   arg1, arg2, arg3, arg4, arg5, eax);

    /* Preserve whatever edx the tail-called function leaves behind. */
    g->edx = g->edx;

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c48a0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(sp0 +  4u);
    const uint32_t arg2 = rd32(sp0 +  8u);
    const uint32_t arg3 = rd32(sp0 + 12u);
    const uint32_t arg4 = rd32(sp0 + 16u);
    const uint32_t arg5 = rd32(sp0 + 20u);
    const uint32_t arg6 = rd32(sp0 + 24u);

    const uint32_t result = cow_fn_101c48a0(g, self,
                                            arg1, arg2, arg3,
                                            arg4, arg5, arg6);

    g->esp = sp0;
    rt_return(g, result, 24u);   /* tail callee ends in ret 24 */
}
/* COW_ADAPTER END */
