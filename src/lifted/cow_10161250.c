/* f_0x10161250 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-calls FUN_101c8450 with this adjusted to [this+0x18] and the first stack argument replaced by ((arg & 0xffff) << 1).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10161250(Guest* g, uint32_t self, uint32_t sp0)
{
    uint32_t arg = rd32(sp0 + 4u);
    uint32_t new_self = rd32(self + 0x18u);

    arg = (arg & 0xFFFFu) << 1;
    wr32(sp0 + 4u, arg);

    return cow_thiscall(g, COW_IMG(0x101c8450u), new_self, 1u, arg);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10161250(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10161250(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, result, 4u);   /* target ret 4 */
}
/* COW_ADAPTER END */
