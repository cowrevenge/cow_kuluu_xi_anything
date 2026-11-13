/* f_0x10060af0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls the virtual method at vtable slot 0x18 of the object at (this - 0x34), if that pointer is non-null, then returns 1 in AL.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10060af0(Guest* g, uint32_t self)
{
    uint32_t ecx = self - 0x34u;

    if (ecx != 0u)
    {
        uint32_t eax = rd32(ecx);
        uint32_t target = rd32(eax + 0x18u);

        g->ecx = ecx;
        cow_thiscall(g, target, ecx, 1u, 1u);

        g->eax = (g->eax & 0xFFFFFF00u) | 1u;
        g->edx = g->edx;
        return g->eax;
    }

    g->ecx = ecx;
    g->eax = (g->eax & 0xFFFFFF00u) | 1u;
    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10060af0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10060af0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
