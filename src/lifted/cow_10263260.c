/* f_0x10263260 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Clears a byte flag in the object, then calls vtable slot 0x18 of the member at offset 0x98 with that member as the sole stack argument, returning its result or 0x8004020a if the member is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10263260(Guest* g, uint32_t self)
{
    wr8(self + 0x24u, 0u);

    const uint32_t obj = rd32(self + 0x98u);
    if (obj == 0u)
    {
        return 0x8004020Au;
    }

    const uint32_t vtable = rd32(obj);
    const uint32_t target = rd32(vtable + 0x18u);

    g->ecx = obj;
    return cow_stdcall(g, target, 1u, obj);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10263260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10263260(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
