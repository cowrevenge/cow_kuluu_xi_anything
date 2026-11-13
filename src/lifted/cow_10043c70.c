/* f_0x10043c70 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adjusts the ecx pointer by -0x34 and, if non-null, invokes the vtable slot at +0x18 with argument 1, then returns 1 in al while preserving the upper bits of eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10043c70(Guest* g, uint32_t self)
{
    const uint32_t adjusted = self - 0x34u;

    if (adjusted != 0u)
    {
        const uint32_t vtable = rd32(adjusted);
        const uint32_t target = rd32(vtable + 0x18u);

        g->eax = vtable;
        cow_thiscall(g, target, adjusted, 1u, 1u);
    }
    else
    {
        g->ecx = adjusted;
    }

    g->edx = g->edx;
    return (g->eax & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10043c70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10043c70(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
