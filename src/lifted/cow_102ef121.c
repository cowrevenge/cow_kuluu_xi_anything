/* f_0x102ef121 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   zeroes the 32-bit fields at offsets 0x6c and 0x14 of the two objects pointed to by the first dword of its argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102ef121(Guest* g, uint32_t param_1)
{
    uint32_t p;
    uint32_t q;
    uint32_t a;
    uint32_t b;

    (void)g;

    p = rd32(param_1);
    a = rd32(p + 0x6cu);
    wr32(p + 0x6cu, a & 0u);

    q = rd32(param_1);
    b = rd32(q + 0x14u);
    wr32(q + 0x14u, b & 0u);

    return q;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ef121(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_102ef121(g, param_1);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
