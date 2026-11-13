/* f_0x102260c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the first argument is nonzero, fills 128 WORDs at the second argument with 0..127 and returns 0x80; otherwise returns 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_102260c0(Guest* g, uint32_t arg0, uint32_t arg1)
{
    (void)g;

    if (arg0 == 0u)
    {
        return 0u;
    }

    for (uint32_t i = 0u; i < 0x80u; ++i)
    {
        wr16(arg1 + i * 2u, (uint16_t)i);
    }

    return 0x80u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102260c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = (arg0 != 0u) ? rd32(sp0 + 8u) : 0u;

    const uint32_t result = cow_fn_102260c0(g, arg0, arg1);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
