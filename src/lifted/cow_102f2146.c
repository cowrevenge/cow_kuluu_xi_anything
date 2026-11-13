/* f_0x102f2146 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Zeroes 16 DWORDs at the second stack argument and returns 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_102f2146(Guest* g, uint32_t param_1, uint32_t param_2)
{
    (void)param_1;

    uint32_t dest = param_2;
    for (uint32_t i = 0; i < 0x10u; ++i)
    {
        wr32(dest, 0u);
        dest += 4u;
    }

    g->ecx = 0u;
    /* edx is unchanged by the original. */
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f2146(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);
    const uint32_t param_2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_102f2146(g, param_1, param_2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
