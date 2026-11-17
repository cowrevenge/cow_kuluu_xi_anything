/* f_0x100f5200 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the second argument is null, initializes two buffers and increments a 16-bit counter, then always calls FUN_100f4250 with (second_arg, 0, first_arg + 8) using first_arg as this.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_100f5200(Guest* g, uint32_t arg0, uint32_t arg1)
{
    const uint32_t sp0 = g->esp;

    const uint32_t entry_esi = g->esi;
    const uint32_t entry_edi = g->edi;
    const uint32_t entry_ecx = g->ecx;
    const uint32_t entry_edx = g->edx;

    uint32_t esi = arg0;
    uint32_t edi = arg1;

    if (edi == 0u)
    {
        uint32_t eax = esi + 0xC48u;

        g->eax = eax;
        g->ecx = entry_ecx;
        g->edx = entry_edx;
        g->esp = sp0 - 24u;
        cow_cdecl(g, COW_IMG(0x1030ff10u), 4u, 5u, eax, 0x200u, 0u);

        uint32_t edx = rd32(esi + 0xA0u);
        uint32_t ecx = esi + 0xE48u;

        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 32u;
        cow_cdecl(g, COW_IMG(0x10310438u), 2u, edx, ecx);

        eax = rd32(esi);
        g->eax = eax;
        g->esp = sp0 - 8u;

        const uint32_t addr = eax + 0x16u;
        wr16(addr, (uint16_t)(rd16(addr) + 1u));
    }

    uint32_t eax = esi + 8u;
    uint32_t ecx = esi;

    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 20u;
    cow_thiscall(g, COW_IMG(0x100f4250u), ecx, 3u, edi, 0u, eax);

    g->esi = entry_esi;
    g->edi = entry_edi;
    g->esp = sp0;

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f5200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_100f5200(g, arg0, arg1);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
