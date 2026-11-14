/* f_0x101f9510 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the global at 0x10663888 is nonzero, calls FUN_101f9530 with the two 16-bit words from the argument pointer, preserving the upper halves of eax/edx as the original does.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101f9510(Guest* g, uint32_t param)
{
    const uint32_t entry_eax = g->eax;
    const uint32_t entry_edx = g->edx;

    const uint32_t ecx = rd32(COW_IMG(0x10663888u));

    if (ecx == 0u)
    {
        g->edx = entry_edx;
        return entry_eax;
    }

    uint32_t eax = param;

    uint32_t edx = (entry_edx & 0xFFFF0000u) | (uint32_t)rd16(eax + 2u);
    eax = (eax & 0xFFFF0000u) | (uint32_t)rd16(eax);

    g->ecx = ecx;
    g->eax = eax;
    g->edx = edx;

    cow_thiscall(g, COW_IMG(0x101f9530u), ecx, 2u, eax, edx);

    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f9510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_101f9510(g, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
