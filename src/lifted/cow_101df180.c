/* f_0x101df180 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the result of tail-calling the object at [this+0x98] when that pointer is non-null, otherwise returns 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101df180(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t target_self = rd32(self + 0x98u);

    if (target_self == 0u)
    {
        return 0u;
    }

    /*
     * The original tail-jumps to 0x101c8450 with the current stack still in place.
     * The target is a thiscall function ending in `ret 4`, so it expects one stack
     * argument.  Pass the original caller's stack argument through unchanged.
     */
    return cow_thiscall(g, COW_IMG(0x101c8450u), target_self, 1u, rd32(sp0 + 4u));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101df180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101df180(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
