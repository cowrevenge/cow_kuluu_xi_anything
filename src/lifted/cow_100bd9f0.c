/* f_0x100bd9f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the global at 0x106218FC is nonzero, sign-extends the first stack word and tail-calls 0x10161070 with it; otherwise returns 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100bd9f0(Guest* g)
{
    const uint32_t self = rd32(COW_IMG(0x106218FCu));

    if (self == 0u)
    {
        return 0u;
    }

    const uint32_t sp0 = g->esp;
    const uint32_t arg = (uint32_t)(int32_t)(int16_t)rd16(sp0 + 4u);

    wr32(sp0 + 4u, arg);

    return cow_thiscall(g, COW_IMG(0x10161070u), self, 1u, arg);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100bd9f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100bd9f0(g);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
