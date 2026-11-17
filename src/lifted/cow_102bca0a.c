/* f_0x102bca0a - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If a flag byte in the first structure is set and the second string starts with '#', skip up to 14 characters after it stopping at a space, then call either a stored function pointer or the default han

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_102bca0a(Guest* g, uint32_t edx, uint32_t ecx)
{
    uint32_t eax = 0u;
    uint32_t esi;

    if ((rd8(edx + 0x6eu) & 0xcu) != 0u)
    {
        if (rd8(ecx) == 0x23u)
        {
            eax = 1u;
            for (;;)
            {
                if (rd8(ecx + eax) == 0x20u)
                    break;

                ++eax;

                if ((int32_t)eax >= 15)
                    break;
            }
        }
    }

    esi = rd32(edx + 0x44u);
    eax = eax + ecx;

    {
        const uint32_t saved_esi = g->esi;

        if (esi != 0u)
        {
            cow_cdecl(g, esi, 2u, edx, eax);
        }
        else
        {
            cow_cdecl(g, COW_IMG(0x102bcb9du), 2u, edx, eax);
        }

        g->esi = saved_esi;
    }

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bca0a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t edx = rd32(sp0 + 4u);
    const uint32_t ecx = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_102bca0a(g, edx, ecx);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
