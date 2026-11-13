/* f_0x10204820 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns arg1 + 11, or -1 when arg2 is greater than that value or that value is at least arg3, using signed comparisons.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10204820(Guest* g, uint32_t arg1, uint32_t arg2, uint32_t arg3)
{
    uint32_t eax = arg1 + 0xBu;

    if ((int32_t)arg2 > (int32_t)eax || (int32_t)eax >= (int32_t)arg3)
    {
        eax = 0xFFFFFFFFu;
    }

    g->edx = g->edx;   /* original never writes edx */
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10204820(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t arg1 = rd32(sp0 + 4u);
    const uint32_t arg2 = rd32(sp0 + 8u);

    uint32_t arg3 = 0u;
    const uint32_t eax = arg1 + 0xBu;

    /* Read the third argument only when the original would not have taken jg. */
    if ((int32_t)arg2 <= (int32_t)eax)
    {
        arg3 = rd32(sp0 + 0xCu);
    }

    const uint32_t result = cow_fn_10204820(g, arg1, arg2, arg3);

    g->esp = sp0;
    rt_return(g, result, 12u);   /* ret 0xc */
}
/* COW_ADAPTER END */
