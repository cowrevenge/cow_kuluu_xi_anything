/* f_0x100618e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls virtual slot 0x18 of the object at (this - 0x34) with argument 1, then returns 1 in al.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_100618e0(Guest* g, uint32_t self)
{
    uint32_t ecx = self - 0x34u;
    uint32_t eax = g->eax;
    uint32_t edx = g->edx;

    if (ecx != 0u)
    {
        eax = rd32(ecx);

        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;

        const uint32_t target = rd32(eax + 0x18u);
        cow_thiscall(g, target, ecx, 1u, 1u);

        eax = g->eax;
        edx = g->edx;
    }

    eax = (eax & 0xFFFFFF00u) | 1u;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100618e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100618e0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
