/* f_0x100dfcf0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Copies a structure's payload to a destination when its 16-bit size field fits the supplied limit, leaving eax with a low byte of 1 and preserving the upper bits from the last eax value used.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=4 */
uint32_t cow_fn_100dfcf0(Guest* g, uint32_t dest, uint32_t src, uint32_t limit,
                         uint32_t entry_eax, uint32_t entry_ecx, uint32_t entry_edx)
{
    uint32_t eax = entry_eax;
    uint32_t ecx = entry_ecx;

    if (dest != 0u)
    {
        eax = src;

        ecx = (uint32_t)rd16(src + 0xEu);

        if ((int32_t)ecx <= (int32_t)limit)
        {
            uint32_t esi = src + 0x14u;
            uint32_t edi = dest;
            uint32_t count = ecx;
            uint32_t n;

            eax = count;

            n = count >> 2;
            while (n != 0u)
            {
                wr32(edi, rd32(esi));
                esi += 4u;
                edi += 4u;
                --n;
            }

            n = count & 3u;
            while (n != 0u)
            {
                wr8(edi, rd8(esi));
                esi += 1u;
                edi += 1u;
                --n;
            }

            ecx = 0u;
        }
    }

    eax = (eax & 0xFFFFFF00u) | 1u;

    g->ecx = ecx;
    g->edx = entry_edx;

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100dfcf0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t entry_eax = g->eax;
    const uint32_t entry_ecx = g->ecx;
    const uint32_t entry_edx = g->edx;

    const uint32_t dest = rd32(sp0 + 0xCu);

    uint32_t src = 0u;
    uint32_t limit = 0u;

    if (dest != 0u)
    {
        src = rd32(sp0 + 0x8u);
        limit = rd32(sp0 + 0x10u);
    }

    const uint32_t result = cow_fn_100dfcf0(g, dest, src, limit,
                                            entry_eax, entry_ecx, entry_edx);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
