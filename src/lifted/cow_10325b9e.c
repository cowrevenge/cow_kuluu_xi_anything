/* f_0x10325b9e - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10325bcb with the three arguments, substituting 10 and a flag of 1 when the third argument is 10 and the first is negative; returns the second argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10325b9e(Guest* g, uint32_t param_1, uint32_t param_2, uint32_t param_3)
{
    uint32_t arg3 = param_3;
    uint32_t flag = 0u;

    if (param_3 == 0xAu && (int32_t)param_1 < 0)
    {
        arg3 = 0xAu;
        flag = 1u;
    }

    cow_cdecl(g, COW_IMG(0x10325bcbu), 4u, param_1, param_2, arg3, flag);

    return param_2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10325b9e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t ebp0 = g->ebp;

    const uint32_t param_1 = rd32(sp0 + 4u);
    const uint32_t param_2 = rd32(sp0 + 8u);
    const uint32_t param_3 = rd32(sp0 + 12u);

    g->esp = sp0;
    const uint32_t result = cow_fn_10325b9e(g, param_1, param_2, param_3);

    g->esp = sp0;
    g->ebp = ebp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
