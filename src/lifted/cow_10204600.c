/* f_0x10204600 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns param_1 - 1, or -1 if param_2 is greater than that value or param_3 is not greater than it (signed comparisons).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10204600(Guest* g, uint32_t param_1, uint32_t param_2, uint32_t param_3)
{
    uint32_t eax = param_1 - 1u;

    /* Original: cmp ecx, eax / jg  -> signed ecx > eax */
    if ((int32_t)param_2 > (int32_t)eax)
    {
        g->ecx = param_2;
        return 0xFFFFFFFFu;
    }

    /* Original: cmp eax, [esp+0xc] / jl  -> signed eax < param_3 */
    if ((int32_t)eax < (int32_t)param_3)
    {
        g->ecx = param_2;
        return eax;
    }

    g->ecx = param_2;
    return 0xFFFFFFFFu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10204600(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);
    const uint32_t param_2 = rd32(sp0 + 8u);
    const uint32_t param_3 = rd32(sp0 + 12u);

    const uint32_t result = cow_fn_10204600(g, param_1, param_2, param_3);

    g->esp = sp0;
    rt_return(g, result, 12u);
}
/* COW_ADAPTER END */
