/* f_0x101c8910 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Decodes bytes from a source buffer into a destination buffer, one byte at a time, using FUN_101c87a0, and returns the number of bytes written.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_101c8910(Guest* g, uint32_t sp0, uint32_t arg0, uint32_t arg1)
{
    const uint32_t saved_ebx = g->ebx;
    const uint32_t saved_ebp = g->ebp;
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;

    uint32_t ebx = arg0;
    uint32_t eax = arg1;
    uint32_t ebp = ebx + eax;
    uint32_t esi = ebx;
    uint32_t edi = ebx;

    if (ebx < ebp)
    {
        const uint32_t arg0_addr = sp0 + 4u;

        for (;;)
        {
            g->esp = sp0 - 16u;

            cow_cdecl(g, COW_IMG(0x101c87a0u), 3u,
                      COW_IMG(0x1037d2d8u),
                      esi,
                      arg0_addr);

            eax = g->eax;

            const uint32_t dl = rd8(arg0_addr);
            g->edx = (g->edx & 0xFFFFFF00u) | (dl & 0xFFu);

            esi = esi + eax;

            wr8(edi, (uint8_t)dl);
            edi = edi + 1u;

            if (!(esi < ebp))
            {
                break;
            }
        }
    }

    eax = edi - ebx;

    g->ebx = saved_ebx;
    g->ebp = saved_ebp;
    g->esi = saved_esi;
    g->edi = saved_edi;

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c8910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_101c8910(g, sp0, arg0, arg1);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
