/* f_0x102bff09 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Converts interleaved pixel data in a destination buffer according to a pixel-format descriptor, updating the descriptor's size and format bytes.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102bff09(Guest* g, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4)
{
    (void)g;

    const uint32_t n   = rd32(p1);
    const uint32_t dl  = p3 & 0xFFu;
    const uint32_t bl_saved = (p3 >> 8) & 0xFFu;
    uint32_t bl = bl_saved;

    uint32_t cl = rd8(p1 + 8u);

    if (cl == 0)
    {
        cl = rd8(p1 + 9u);

        if (cl == 8)
        {
            uint32_t ecx = p2 + n;
            uint32_t edi = ecx + n;

            if ((p4 & 0x80u) != 0)
            {
                if (n > 1u)
                {
                    uint32_t cnt = n - 1u;
                    do
                    {
                        --edi;
                        --ecx;
                        wr8(edi, dl);

                        bl = rd8(ecx);

                        --edi;
                        --cnt;
                        wr8(edi, bl);
                    } while (cnt != 0u);
                }

                wr8(edi - 1u, dl);
            }
            else
            {
                if (n != 0u)
                {
                    uint32_t cnt = n;
                    do
                    {
                        --ecx;
                        --edi;

                        bl = rd8(ecx);
                        wr8(edi, bl);

                        --edi;
                        --cnt;
                        wr8(edi, dl);
                    } while (cnt != 0u);
                }
            }

            wr8(p1 + 0xAu, 2u);
            wr8(p1 + 0xBu, 0x10u);

            wr32(p1 + 4u, n << 1);
            return;
        }

        if (cl == 16)
        {
            uint32_t ecx = p2;

            if ((p4 & 0x80u) != 0)
            {
                ecx += n;
                uint32_t tmp = ecx;
                ecx += n;

                uint32_t edi = tmp;

                if (n > 1u)
                {
                    uint32_t cnt = n - 1u;

                    do
                    {
                        --ecx;
                        wr8(ecx, bl);

                        --ecx;
                        --edi;
                        wr8(ecx, dl);

                        --ecx;
                        bl = rd8(edi);
                        --edi;
                        wr8(ecx, bl);

                        --ecx;
                        bl = rd8(edi);
                        --cnt;
                        wr8(ecx, bl);

                        bl = bl_saved;
                    } while (cnt != 0u);
                }

                --ecx;
                wr8(ecx, bl);
                wr8(ecx - 1u, dl);
            }
            else
            {
                ecx += n;
                uint32_t edi = ecx + n;

                if (n != 0u)
                {
                    uint32_t cnt = n;
                    uint32_t src = ecx;

                    do
                    {
                        --src;
                        --edi;

                        uint32_t ecx_tmp = src;
                        --src;

                        cl = rd8(ecx_tmp);
                        wr8(edi, cl);

                        ecx_tmp = src;
                        --edi;

                        cl = rd8(ecx_tmp);
                        wr8(edi, cl);

                        --edi;
                        wr8(edi, bl);

                        --edi;
                        --cnt;
                        wr8(edi, dl);
                    } while (cnt != 0u);
                }
            }

            wr8(p1 + 0xAu, 2u);
            wr8(p1 + 0xBu, 0x20u);

            wr32(p1 + 4u, n << 2);
            return;
        }

        return;
    }

    if (cl != 2u)
        return;

    cl = rd8(p1 + 9u);

    if (cl == 8)
    {
        uint32_t ecx = p2 + n * 2u;
        uint32_t edi = ecx + n;

        if ((p4 & 0x80u) != 0)
        {
            ecx += n;

            if (n > 1u)
            {
                uint32_t cnt = n - 1u;

                do
                {
                    --edi;
                    --ecx;
                    wr8(edi, dl);

                    bl = rd8(ecx);

                    --edi;
                    --ecx;
                    wr8(edi, bl);

                    bl = rd8(ecx);

                    --edi;
                    --ecx;
                    wr8(edi, bl);

                    bl = rd8(ecx);

                    --edi;
                    --cnt;
                    wr8(edi, bl);
                } while (cnt != 0u);
            }

            wr8(edi - 1u, dl);
        }
        else
        {
            if (n != 0u)
            {
                uint32_t cnt = n;

                do
                {
                    --edi;
                    --ecx;

                    bl = rd8(edi);
                    --edi;
                    wr8(ecx, bl);

                    --ecx;
                    bl = rd8(edi);
                    --edi;
                    wr8(ecx, bl);

                    --ecx;
                    bl = rd8(edi);
                    wr8(ecx, bl);

                    --ecx;
                    --cnt;
                    wr8(ecx, dl);
                } while (cnt != 0u);
            }
        }

        wr8(p1 + 0xBu, 0x20u);
        wr8(p1 + 0xAu, 4u);

        wr32(p1 + 4u, n << 2);
        return;
    }

    if (cl != 16)
        return;

    uint32_t ecx = p2 + n * 2u;
    uint32_t edi = ecx + n;

    if ((p4 & 0x80u) != 0)
    {
        ecx += n;

        if (n > 1u)
        {
            uint32_t cnt = n - 1u;
            bl = bl_saved;

            do
            {
                --ecx;
                wr8(ecx, bl);

                --ecx;
                --edi;
                wr8(ecx, dl);

                --ecx;
                bl = rd8(edi);
                --edi;
                wr8(ecx, bl);

                --ecx;
                bl = rd8(edi);
                --edi;
                wr8(ecx, bl);

                --ecx;
                bl = rd8(edi);
                --edi;
                wr8(ecx, bl);

                --ecx;
                bl = rd8(edi);
                --edi;
                wr8(ecx, bl);

                --ecx;
                bl = rd8(edi);
                --edi;
                wr8(ecx, bl);

                --ecx;
                bl = rd8(edi);
                --edi;
                wr8(ecx, bl);

                --ecx;
                bl = rd8(edi);
                --edi;
                wr8(ecx, bl);

                --ecx;
                bl = rd8(edi);
                --cnt;
                wr8(ecx, bl);
            } while (cnt != 0u);
        }
        else
        {
            bl = bl_saved;
        }

        --ecx;
        wr8(ecx, bl);
        wr8(ecx - 1u, dl);
    }
    else
    {
        ecx += n;

        if (n != 0u)
        {
            uint32_t cnt = n;

            do
            {
                --edi;
                --ecx;

                bl = rd8(edi);
                --edi;
                wr8(ecx, bl);

                --ecx;
                bl = rd8(edi);
                --edi;
                wr8(ecx, bl);

                --ecx;
                bl = rd8(edi);
                --edi;
                wr8(ecx, bl);

                --ecx;
                bl = rd8(edi);
                --edi;
                wr8(ecx, bl);

                --ecx;
                bl = rd8(edi);
                --edi;
                wr8(ecx, bl);

                --ecx;
                bl = rd8(edi);
                wr8(ecx, bl);

                --ecx;
                bl = bl_saved;
                wr8(ecx, bl);

                --ecx;
                --cnt;
                wr8(ecx, dl);
            } while (cnt != 0u);
        }
    }

    wr8(p1 + 0xBu, 0x40u);
    wr8(p1 + 0xAu, 4u);

    wr32(p1 + 4u, n << 3);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bff09(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t p1 = rd32(sp0 + 4u);
    const uint32_t p2 = rd32(sp0 + 8u);
    const uint32_t p3 = rd32(sp0 + 12u);
    const uint32_t p4 = rd32(sp0 + 16u);

    cow_fn_102bff09(g, p1, p2, p3, p4);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
