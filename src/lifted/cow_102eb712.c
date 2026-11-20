/* f_0x102eb712 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Streams a buffer described by the object into the sub-object at offset 0x74, emitting a header, the buffer dwords, a zero-padded tail, and optional padding.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102eb712(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t saved_ebx = g->ebx;
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;
    const uint32_t saved_ebp = g->ebp;

    const uint32_t ebx = self;

    if (rd32(ebx + 0xb0u) != 0u)
    {
        uint32_t esi = rd32(ebx + 0xb8u);
        uint32_t edi = rd32(ebx + 0xc4u) - esi;

        uint32_t eax = (edi + 3u) << 14;
        eax &= 0xffff0000u;
        eax += 0x10000u;
        eax &= 0x7fff0000u;
        eax |= 0xfffeu;

        const uint32_t sub = ebx + 0x74u;

        cow_thiscall(g, COW_IMG(0x102f5233u), sub, 1u, eax);
        cow_thiscall(g, COW_IMG(0x102f5233u), sub, 1u, 0x54584554u);

        wr32(ebx + 0xa0u, rd32(ebx + 0xa0u) + 8u);

        if (edi >= 4u)
        {
            uint32_t count = edi >> 2;
            do
            {
                const uint32_t arg = rd32(esi);
                cow_thiscall(g, COW_IMG(0x102f5233u), sub, 1u, arg);
                wr32(ebx + 0xa0u, rd32(ebx + 0xa0u) + 4u);
                esi += 4u;
                edi -= 4u;
                --count;
            } while (count != 0u);
        }

        const uint32_t rem = edi;

        if (rem != 0u)
        {
            const uint32_t local4 = cow_frame(g, sp0, 16u) + 8u; /* [ebp - 4] == sp0 - 8 */

            wr32(local4, 0u);

            uint32_t dwords = rem >> 2;
            uint32_t i;
            for (i = 0u; i < dwords; ++i)
            {
                wr32(local4 + 4u * i, rd32(esi + 4u * i));
            }

            uint32_t bytes = rem & 3u;
            for (i = 0u; i < bytes; ++i)
            {
                wr8(local4 + 4u * dwords + i, rd8(esi + 4u * dwords + i));
            }

            const uint32_t arg = rd32(local4);
            cow_thiscall(g, COW_IMG(0x102f5233u), sub, 1u, arg);
            wr32(ebx + 0xa0u, rd32(ebx + 0xa0u) + 4u);
        }

        if (rem == 4u)
        {
            cow_thiscall(g, COW_IMG(0x102f5233u), sub, 1u, 0u);
            wr32(ebx + 0xa0u, rd32(ebx + 0xa0u) + 4u);
        }
    }

    g->ebx = saved_ebx;
    g->esi = saved_esi;
    g->edi = saved_edi;
    g->ebp = saved_ebp;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102eb712(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102eb712(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
