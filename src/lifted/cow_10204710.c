/* f_0x10204710 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns (arg1 + 5) when it lies in the signed range [arg2, arg3), otherwise returns -1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10204710(Guest* g, uint32_t arg1, uint32_t arg2, uint32_t arg3)
{
    uint32_t eax = arg1 + 5u;

    /* cmp ecx, eax / jg: signed greater */
    if ((int32_t)arg2 > (int32_t)eax)
    {
        /* edx is untouched by the original */
        g->edx = g->edx;
        return 0xFFFFFFFFu;
    }

    /* cmp eax, [esp+0xc] / jl: signed less */
    if ((int32_t)eax < (int32_t)arg3)
    {
        g->edx = g->edx;
        return eax;
    }

    g->edx = g->edx;
    return 0xFFFFFFFFu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10204710(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t arg1 = rd32(sp0 + 4u);
    const uint32_t arg2 = rd32(sp0 + 8u);

    /*
     * The original reads the third stack argument only when the first signed
     * comparison does not take the jump to the "or eax, -1" path.
     */
    uint32_t arg3 = 0u;
    const uint32_t eax = arg1 + 5u;
    if (!((int32_t)arg2 > (int32_t)eax))
    {
        arg3 = rd32(sp0 + 0xcu);
    }

    const uint32_t result = cow_fn_10204710(g, arg1, arg2, arg3);

    g->esp = sp0;
    rt_return(g, result, 12u);
}
/* COW_ADAPTER END */
