/* f_0x10060c20 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adjusts the this pointer by -0x34 and, if non-null, invokes the virtual method at vtable slot 0x18 with argument 1, then returns 1 in AL while preserving the upper bits of EAX.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10060c20(Guest* g, uint32_t self)
{
    uint32_t eax = g->eax;
    uint32_t edx = g->edx;
    uint32_t ecx = self + 0xFFFFFFCCu;   /* add ecx, -0x34 */

    if (ecx != 0u)
    {
        eax = rd32(ecx);                 /* mov eax, dword ptr [ecx] */
        uint32_t target = rd32(eax + 0x18u);

        g->eax = eax;
        g->edx = edx;

        cow_thiscall(g, target, ecx, 1u, 1u);

        eax = g->eax;
        edx = g->edx;
    }

    g->edx = edx;
    return (eax & 0xFFFFFF00u) | 1u;     /* mov al, 1 */
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10060c20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10060c20(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
