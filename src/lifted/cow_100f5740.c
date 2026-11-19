/* f_0x100f5740 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the second argument is null, initializes/updates fields in the first argument and conditionally decrements a counter, then always calls FUN_100f4250 with the first argument as this.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_100f5740(Guest* g, uint32_t param1, uint32_t param2)
{
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;

    g->esi = param1;
    g->edi = param2;

    if (g->edi == 0u)
    {
        g->eax = g->esi + 0xC48u;
        cow_cdecl(g, COW_IMG(0x1030ff10u), 4u, 7u, g->eax, 0x200u, 0u);

        g->edx = rd32(g->esi + 0xA0u);
        g->ecx = g->esi + 0xE48u;
        cow_cdecl(g, COW_IMG(0x10310422u), 2u, g->edx, g->ecx);

        g->eax = rd32(g->esi);
        {
            const uint32_t A = g->eax + 0x14u;
            const uint16_t v = rd16(A);
            wr16(A, (uint16_t)(v + 1u));
        }

        g->eax = rd32(g->esi + 0xA0u);
        g->ecx = (g->ecx & 0xFFFF0000u) | rd16(g->eax + 0x3Eu);
        g->ecx &= 0xF80u;

        if ((uint16_t)g->ecx == 0xF00u)
        {
            g->eax = rd32(g->esi);
            g->ecx = (g->ecx & 0xFFFF0000u) | rd16(g->eax + 0x10u);

            if ((uint16_t)g->ecx != 0u)
            {
                g->ecx -= 1u;
                wr16(g->eax + 0x10u, (uint16_t)g->ecx);
            }
        }
    }

    g->edx = g->esi + 8u;
    g->ecx = g->esi;
    cow_thiscall(g, COW_IMG(0x100f4250u), g->ecx, 3u, g->edi, 1u, g->edx);

    g->esi = saved_esi;
    g->edi = saved_edi;

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f5740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_100f5740(g, param1, param2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
