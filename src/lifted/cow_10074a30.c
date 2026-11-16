/* f_0x10074a30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Recursively visits the sibling list beginning at self+0x24 (following +0x28), calling itself on each node, then increments the 16-bit counter at self+0x22.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10074a30(Guest* g, uint32_t self)
{
    const uint32_t eax0 = g->eax;
    const uint32_t esi0 = g->esi;
    const uint32_t edi0 = g->edi;
    const uint32_t ebx0 = g->ebx;
    const uint32_t ebp0 = g->ebp;

    uint32_t esi = rd32(self + 0x24u);

    if (esi != 0u)
    {
        for (;;)
        {
            cow_thiscall_cdecl(g, COW_IMG(0x10074a30u), esi, 0u);

            esi = rd32(esi + 0x28u);
            if (esi == 0u)
                break;
        }
    }

    {
        const uint32_t addr = self + 0x22u;
        const uint16_t v = (uint16_t)rd16(addr);
        wr16(addr, (uint16_t)(v + 1u));
    }

    g->eax = eax0;
    g->esi = esi0;
    g->edi = edi0;
    g->ebx = ebx0;
    g->ebp = ebp0;

    return eax0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10074a30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10074a30(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
