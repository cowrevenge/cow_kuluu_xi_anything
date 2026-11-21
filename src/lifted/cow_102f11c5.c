/* f_0x102f11c5 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   If the structure at arg0 has kind 3, unpack its bit-packed samples into arg1, then expand the byte indices into RGB or RGBA using the tables in arg2/arg3, updating the structure header.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=5 */
uint32_t cow_fn_102f11c5(Guest* g, uint32_t sp0,
                         uint32_t arg0,
                         uint32_t arg1,
                         uint32_t arg2,
                         uint32_t arg3,
                         uint32_t arg4)
{
    const uint32_t ebp_arg0 = sp0 + 4u;

    const uint32_t esi = arg0;

    if (rd8(esi + 8u) != 3u)
    {
        g->edx = g->edx;
        return rd32(esi);
    }

    const uint32_t eax0 = rd32(esi);
    uint32_t eax = eax0;
    uint32_t edi = arg1;

    const uint32_t cl = rd8(esi + 9u);

    if (cl >= 8u)
    {
        goto second_section;
    }

    {
        uint32_t c = cl;
        c--;
        if (c == 0u)
        {
            /* cl == 1 */
            uint32_t dest = eax + edi - 1u;
            uint32_t src = ((eax - 1u) >> 3) + edi;
            uint32_t shift = 7u - ((eax - 1u) & 7u);

            wr32(ebp_arg0, shift);

            if (eax != 0u)
            {
                uint32_t count = eax;
                for (;;)
                {
                    uint32_t bl = rd8(src);
                    bl = (bl >> (shift & 31u)) & 1u;
                    wr8(dest, bl);

                    if (shift == 7u)
                    {
                        shift = 0u;
                        src--;
                    }
                    else
                    {
                        shift++;
                    }

                    dest--;
                    count--;
                    wr32(ebp_arg0, shift);
                    if (count == 0u) break;
                }
            }
        }
        else
        {
            c--;
            if (c == 0u)
            {
                /* cl == 2 */
                uint32_t dest = eax + edi - 1u;
                uint32_t src = ((eax - 1u) >> 2) + edi;
                uint32_t shift = (3u - ((eax - 1u) & 3u)) << 1;

                wr32(ebp_arg0, shift);

                if (eax != 0u)
                {
                    uint32_t count = eax;
                    for (;;)
                    {
                        uint32_t bl = rd8(src);
                        bl = (bl >> (shift & 31u)) & 3u;
                        wr8(dest, bl);

                        if (shift == 6u)
                        {
                            shift = 0u;
                            src--;
                        }
                        else
                        {
                            shift += 2u;
                        }

                        dest--;
                        count--;
                        wr32(ebp_arg0, shift);
                        if (count == 0u) break;
                    }
                }
            }
            else
            {
                c--;
                c--;
                if (c != 0u)
                {
                    goto after_packing;
                }

                /* cl == 4 */
                uint32_t dest = eax + edi - 1u;
                uint32_t src = ((eax - 1u) >> 1) + edi;
                uint32_t shift = (eax & 1u) << 2;

                wr32(ebp_arg0, shift);

                if (eax != 0u)
                {
                    uint32_t count = eax;
                    for (;;)
                    {
                        uint32_t bl = rd8(src);
                        bl = (bl >> (shift & 31u)) & 0xFu;
                        wr8(dest, bl);

                        if (shift == 4u)
                        {
                            shift = 0u;
                            src--;
                        }
                        else
                        {
                            shift += 4u;
                        }

                        dest--;
                        count--;
                        wr32(ebp_arg0, shift);
                        if (count == 0u) break;
                    }
                }
            }
        }
    }

after_packing:
    wr8(esi + 9u, 8u);
    wr8(esi + 0xBu, 8u);
    wr32(esi + 4u, eax);

second_section:
    if (rd8(esi + 9u) != 8u)
    {
        g->edx = g->edx;
        return eax;
    }

    uint32_t edx = eax + edi - 1u;

    if (arg3 != 0u)
    {
        uint32_t ebx = eax << 2;
        uint32_t ecx = ebx + edi - 1u;

        if (eax != 0u)
        {
            wr32(ebp_arg0, eax);
            eax = arg2;

            uint32_t count = eax0;
            for (;;)
            {
                uint32_t idx = rd8(edx);

                if ((int32_t)idx < (int32_t)arg4)
                {
                    uint32_t bl = rd8(arg3 + idx);
                    wr8(ecx, bl);
                }
                else
                {
                    wr8(ecx, 0xFFu);
                }

                idx = rd8(edx);
                wr8(ecx - 1u, rd8(arg2 + idx * 3u + 2u));

                idx = rd8(edx);
                wr8(ecx - 2u, rd8(arg2 + idx * 3u + 1u));

                idx = rd8(edx);
                wr8(ecx - 3u, rd8(arg2 + idx * 3u));

                ecx -= 4u;
                edx--;
                count--;
                wr32(ebp_arg0, count);
                if (count == 0u) break;
            }

            ebx = eax0 << 2;
        }

        wr8(esi + 0xBu, 0x20u);
        wr8(esi + 8u, 6u);
        wr8(esi + 0xAu, 4u);
        wr8(esi + 9u, 8u);
        wr32(esi + 4u, ebx);

        g->edx = edx;
        return eax;
    }
    else
    {
        uint32_t ebx = eax + eax * 2u;
        uint32_t ecx = ebx + edi - 1u;

        if (eax != 0u)
        {
            wr32(ebp_arg0, eax);
            eax = arg2;

            uint32_t count = eax0;
            for (;;)
            {
                uint32_t idx = rd8(edx);
                wr8(ecx, rd8(arg2 + idx * 3u + 2u));

                idx = rd8(edx);
                wr8(ecx - 1u, rd8(arg2 + idx * 3u + 1u));

                idx = rd8(edx);
                wr8(ecx - 2u, rd8(arg2 + idx * 3u));

                ecx -= 3u;
                edx--;
                count--;
                wr32(ebp_arg0, count);
                if (count == 0u) break;
            }

            ebx = eax0 + eax0 * 2u;
        }

        wr8(esi + 0xBu, 0x18u);
        wr8(esi + 8u, 2u);
        wr8(esi + 0xAu, 3u);
        wr8(esi + 9u, 8u);
        wr32(esi + 4u, ebx);

        g->edx = edx;
        return eax;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f11c5(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t arg2 = rd32(sp0 + 12u);
    const uint32_t arg3 = rd32(sp0 + 16u);
    const uint32_t arg4 = rd32(sp0 + 20u);

    const uint32_t result = cow_fn_102f11c5(g, sp0, arg0, arg1, arg2, arg3, arg4);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
