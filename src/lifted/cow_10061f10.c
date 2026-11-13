/* f_0x10061f10 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adjusts the this pointer by -0x34 and, if non-null, invokes the virtual method at vtable offset 0x18 with argument 1, then returns 1 in al.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10061f10(Guest* g, uint32_t self)
{
    const uint32_t adjusted = self - 0x34u;

    g->ecx = adjusted;

    if (adjusted != 0u)
    {
        const uint32_t vtable = rd32(adjusted);
        const uint32_t target = rd32(vtable + 0x18u);

        cow_thiscall(g, target, adjusted, 1u, 1u);
    }

    g->eax = (g->eax & 0xFFFFFF00u) | 0x00000001u;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10061f10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10061f10(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
