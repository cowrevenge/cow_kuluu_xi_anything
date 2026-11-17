/* f_0x101185e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns a node from an iterator-like object, or 0 if the object check fails or the iterator is exhausted.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101185e0(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t entry_ebx = g->ebx;
    const uint32_t entry_esi = g->esi;
    const uint32_t entry_edi = g->edi;
    const uint32_t entry_ebp = g->ebp;

    uint32_t esi = self;
    uint32_t eax;
    uint32_t ecx;
    uint32_t local = cow_frame(g, sp0, 4u);

    eax = cow_thiscall_cdecl(g, COW_IMG(0x10160c90u), COW_IMG(0x10621838u), 0u);

    if (eax != esi)
    {
        g->ebx = entry_ebx;
        g->esi = entry_esi;
        g->edi = entry_edi;
        g->ebp = entry_ebp;
        return 0u;
    }

    esi = (uint32_t)(esi + 0x14u);

    eax = cow_thiscall_cdecl(g, COW_IMG(0x10126500u), esi, 0u);
    wr32(local, eax);

    for (;;)
    {
        eax = rd32(local);
        if (eax == 0u)
        {
            g->ebx = entry_ebx;
            g->esi = entry_esi;
            g->edi = entry_edi;
            g->ebp = entry_ebp;
            return 0u;
        }

        eax = cow_thiscall(g, COW_IMG(0x10126520u), esi, 1u, local);

        if (rd16(eax) != 0u)
        {
            continue;
        }

        ecx = rd32(eax + 0x3cu);
        if (ecx != 0u)
        {
            eax = ecx;
        }
        else
        {
            eax = rd32(eax + 0x28u);
        }

        g->ebx = entry_ebx;
        g->esi = entry_esi;
        g->edi = entry_edi;
        g->ebp = entry_ebp;
        return eax;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101185e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101185e0(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
