/* f_0x101ad670 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   sets the object's mode and copies/appends the supplied string into the object's 0x80-byte text buffer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101ad670(Guest* g, uint32_t self, uint32_t mode, uint32_t src)
{
    const uint32_t ebx = self;

    uint32_t eax = rd32(ebx + 0x108u);
    if (eax != 8u && eax != 3u)
    {
        wr32(ebx + 0x10cu, eax);

        uint32_t p = ebx + 8u;
        const uint32_t off = (ebx + 0x88u) - p;
        for (;;)
        {
            uint32_t c = rd8(p);
            wr8(p + off, c);
            ++p;
            if (c == 0u) break;
        }
    }

    if (mode == 4u)
    {
        if (src == 0u)
        {
            wr8(ebx + 8u, 0u);
        }
        else
        {
            const uint32_t ebp = ebx + 8u;

            uint32_t p = COW_IMG(0x1037ad2cu);
            const uint32_t off = ebp - p;
            for (;;)
            {
                uint32_t c = rd8(p);
                wr8(p + off, c);
                ++p;
                if (c == 0u) break;
            }

            uint32_t ecx = 0xFFFFFFFFu;
            uint32_t edi = src;
            for (;;)
            {
                uint32_t c = rd8(edi);
                ++edi;
                --ecx;
                if (c == 0u || ecx == 0u) break;
            }
            ecx = ~ecx;
            --ecx;

            const uint32_t edx = rd8(ebx + 0x114u);
            const uint32_t limit = 0x80u - edx;

            if (ecx < limit)
            {
                ecx = 0xFFFFFFFFu;
                edi = src;
                for (;;)
                {
                    uint32_t c = rd8(edi);
                    ++edi;
                    --ecx;
                    if (c == 0u || ecx == 0u) break;
                }
                ecx = ~ecx;
                edi -= ecx;

                uint32_t esi = edi;
                const uint32_t edx_copy = ecx;

                edi = ebp;
                ecx = 0xFFFFFFFFu;
                for (;;)
                {
                    uint32_t c = rd8(edi);
                    ++edi;
                    --ecx;
                    if (c == 0u || ecx == 0u) break;
                }

                ecx = edx_copy;
                --edi;
                uint32_t n = ecx >> 2;
                while (n != 0u)
                {
                    wr32(edi, rd32(esi));
                    edi += 4u;
                    esi += 4u;
                    --n;
                }

                ecx = edx_copy;
                n = ecx & 3u;
                while (n != 0u)
                {
                    wr8(edi, rd8(esi));
                    ++edi;
                    ++esi;
                    --n;
                }
            }
            else
            {
                const uint32_t count = 0x7Fu - edx;
                cow_cdecl(g, COW_IMG(0x10313560u), 3u, ebp, src, count);
            }

            const uint32_t dx = rd16(COW_IMG(0x1034f2b8u));
            ecx = 0xFFFFFFFFu;
            edi = ebp;
            for (;;)
            {
                uint32_t c = rd8(edi);
                ++edi;
                --ecx;
                if (c == 0u || ecx == 0u) break;
            }
            wr16(edi - 1u, dx);
        }

        wr32(ebx + 0x108u, 4u);
        cow_thiscall(g, COW_IMG(0x1018d9c0u), rd32(COW_IMG(0x1066268cu)), 1u, src);
        return;
    }

    if (mode == 1u)
    {
        const uint32_t ebp = src;

        if (ebp == 0u)
        {
            wr8(ebx + 8u, 0u);
            wr32(ebx + 0x108u, 1u);
            cow_thiscall_cdecl(g, COW_IMG(0x1018da10u), rd32(COW_IMG(0x1066268cu)), 0u);
            return;
        }

        const uint32_t esi = ebx + 8u;

        uint32_t ecx = 0xFFFFFFFFu;
        uint32_t edi = ebp;
        for (;;)
        {
            uint32_t c = rd8(edi);
            ++edi;
            --ecx;
            if (c == 0u || ecx == 0u) break;
        }
        ecx = ~ecx;
        --ecx;

        if (ecx < 0x7Fu)
        {
            uint32_t p = ebp;
            const uint32_t off = esi - ebp;
            for (;;)
            {
                uint32_t c = rd8(p);
                wr8(p + off, c);
                ++p;
                if (c == 0u) break;
            }
        }
        else
        {
            cow_cdecl(g, COW_IMG(0x10312090u), 3u, esi, ebp, 0x7Fu);
        }

        ecx = 0xFFFFFFFFu;
        edi = esi;
        for (;;)
        {
            uint32_t c = rd8(edi);
            ++edi;
            --ecx;
            if (c == 0u || ecx == 0u) break;
        }

        const uint32_t ax = rd16(COW_IMG(0x1034f2b8u));
        wr16(edi - 1u, ax);

        eax = cow_thiscall(g, COW_IMG(0x101ad840u), ebx, 1u, esi);
        wr32(ebx + 0x108u, eax);

        cow_thiscall_cdecl(g, COW_IMG(0x1018da10u), rd32(COW_IMG(0x1066268cu)), 0u);
        return;
    }

    wr32(ebx + 0x108u, mode);
    cow_thiscall(g, COW_IMG(0x101adc30u), ebx, 2u, ebx + 8u, mode);
    cow_thiscall_cdecl(g, COW_IMG(0x1018da10u), rd32(COW_IMG(0x1066268cu)), 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ad670(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t mode = rd32(sp0 + 4u);
    const uint32_t src = rd32(sp0 + 8u);

    const uint32_t saved_ebx = g->ebx;
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;
    const uint32_t saved_ebp = g->ebp;

    cow_fn_101ad670(g, self, mode, src);

    g->ebx = saved_ebx;
    g->esi = saved_esi;
    g->edi = saved_edi;
    g->ebp = saved_ebp;

    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
