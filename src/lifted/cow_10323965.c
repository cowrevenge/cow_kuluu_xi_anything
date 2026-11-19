/* f_0x10323965 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   writes a fixed-width numeric string into param1, rounds it upward when appropriate, and either bumps a counter or copies the string.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10323965(Guest* g, uint32_t sp0, uint32_t param1, int32_t param2, uint32_t param3)
{
    uint32_t esi = param1;
    int32_t ebx = param2;
    uint32_t edx = param3;
    uint32_t ecx = rd32(edx + 0xcu);
    uint32_t edi = esi + 1u;
    uint32_t eax;

    wr8(esi, 0x30u);
    eax = edi;

    if (ebx > 0)
    {
        wr32(sp0 + 4u, (uint32_t)ebx);

        while (rd32(sp0 + 4u) != 0u)
        {
            uint8_t dl = rd8(ecx);

            if (dl != 0u)
            {
                ecx = ecx + 1u;
            }
            else
            {
                dl = 0x30u;
            }

            wr8(eax, dl);
            eax = eax + 1u;
            wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
        }

        ebx = 0;
        edx = param3;
    }

    wr8(eax, 0u);

    if (ebx >= 0)
    {
        if ((int8_t)rd8(ecx) >= 0x35)
        {
            for (;;)
            {
                eax = eax - 1u;
                uint8_t c = rd8(eax);

                if (c != 0x39u)
                {
                    wr8(eax, (uint8_t)(c + 1u));
                    break;
                }

                wr8(eax, 0x30u);
            }
        }
    }

    if (rd8(esi) == 0x31u)
    {
        wr32(edx + 4u, rd32(edx + 4u) + 1u);
    }
    else
    {
        uint32_t len = cow_cdecl(g, COW_IMG(0x10317480u), 1u, edi);
        cow_cdecl(g, COW_IMG(0x10314a10u), 3u, esi, edi, len + 1u);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10323965(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t saved_ebx = g->ebx;
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;
    const uint32_t saved_ebp = g->ebp;

    const uint32_t param1 = rd32(sp0 + 4u);
    const int32_t param2 = (int32_t)rd32(sp0 + 8u);
    const uint32_t param3 = rd32(sp0 + 12u);

    cow_fn_10323965(g, sp0, param1, param2, param3);

    g->ebx = saved_ebx;
    g->esi = saved_esi;
    g->edi = saved_edi;
    g->ebp = saved_ebp;
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
