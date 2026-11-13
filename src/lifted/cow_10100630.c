/* f_0x10100630 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Rewrites the second and third stack arguments, then tail-calls FUN_101003e0 with the modified arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10100630(Guest* g, uint32_t sp0)
{
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param3 = rd32(sp0 + 0xcu);

    wr32(sp0 + 8u, 0x26u);

    const uint32_t new_param3 = (uint32_t)(0u - (param3 & 0xffffu));
    wr32(sp0 + 0xcu, new_param3);

    const uint32_t result = cow_cdecl(
        g,
        COW_IMG(0x101003e0u),
        3u,
        param1,
        0x26u,
        new_param3
    );

    g->edx = g->edx;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10100630(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
