/* f_0x10193980 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   clears bit (param1 & 31) of param2 and inserts param3 shifted left by the same bit count.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10193980(Guest* g, uint32_t shift, uint32_t value, uint32_t insert)
{
    (void)g;

    const uint32_t c = shift & 0x1fu;
    const uint32_t mask = 1u << c;

    return ((~mask) & value) | (insert << c);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10193980(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t shift  = rd32(sp0 + 4u);
    const uint32_t value  = rd32(sp0 + 8u);
    const uint32_t insert = rd32(sp0 + 12u);

    const uint32_t result = cow_fn_10193980(g, shift, value, insert);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
