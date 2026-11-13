/* f_0x101fbd80 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   loads the object pointer from the third stack argument, reads its vtable, and tail-calls the function at vtable offset 0x18 with the fixed arguments 0x11 and 0, then returns.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_101fbd80(Guest* g, uint32_t self)
{
    const uint32_t vtable = rd32(self);
    const uint32_t target = rd32(vtable + 0x18u);

    /*
     * The original pushes 0 then 0x11 and calls through the vtable slot.
     * The observed stack-pointer behaviour requires the callee to remove
     * only one 4-byte stack argument (ret 4), leaving the other pushed
     * value to be consumed by the thunk's own bare ret.
     */
    const uint32_t eax = cow_stdcall(g, target, 1u, 0x11u);

    g->eax = eax;
    /* edx is whatever the callee left there; do not overwrite it. */
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fbd80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(sp0 + 0xcu);

    const uint32_t result = cow_fn_101fbd80(g, self);

    /*
     * After the original instructions, esp is back at sp0.
     * rt_return adds the normal return-address pop, so start one dword
     * below sp0 to make the final esp equal to sp0.
     */
    g->esp = sp0 - 4u;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
