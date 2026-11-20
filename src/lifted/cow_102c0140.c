/* f_0x102c0140 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Expands a byte buffer into a larger buffer according to bpp/flags, then updates size fields.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102c0140(Guest* g, uint32_t edi, uint32_t param2, uint32_t sp0)
{
    (void)g;

    uint32_t cl = rd8(edi + 9u);
    uint32_t esi = rd32(edi);

    if (cl < 8u)
        return;

    uint32_t al = rd8(edi + 8u);

    if (al & 2u)
        return;

    if (al == 0u)
    {
        if (cl == 8u)
        {
            uint32_t src = param2 + esi - 1u;
            uint32_t dst = src + esi * 2u;

            if (esi != 0u)
            {
                uint32_t cnt = esi;
                do
                {
                    uint32_t b = rd8(src);
                    wr8(dst, b);

                    b = rd8(src);
                    wr8(dst - 1u, b);

                    b = rd8(src);
                    wr8(dst - 2u, b);

                    dst -= 3u;
                    src -= 1u;
                    cnt -= 1u;
                } while (cnt != 0u);
            }
        }
        else
        {
            uint32_t src = param2 + esi * 2u - 1u;
            uint32_t dst = src + esi * 4u;

            if (esi != 0u)
            {
                uint32_t cnt = esi;
                do
                {
                    uint32_t b;
                    uint32_t src1 = src - 1u;

                    b = rd8(src);
                    wr8(dst, b);

                    b = rd8(src1);
                    wr8(dst - 1u, b);

                    b = rd8(src);
                    wr8(dst - 2u, b);

                    b = rd8(src1);
                    wr8(dst - 3u, b);

                    b = rd8(src);
                    wr8(dst - 4u, b);

                    b = rd8(src1);
                    wr8(dst - 5u, b);

                    dst -= 6u;
                    src -= 2u;
                    cnt -= 1u;
                } while (cnt != 0u);

                wr32(sp0 + 8u, 0u);
            }
        }
    }
    else if (al == 4u)
    {
        if (cl == 8u)
        {
            uint32_t src = param2 + esi * 2u - 1u;
            uint32_t dst = src + esi * 2u;

            if (esi != 0u)
            {
                uint32_t cnt = esi;
                do
                {
                    uint32_t b;
                    uint32_t src1 = src - 1u;

                    b = rd8(src);
                    wr8(dst, b);

                    b = rd8(src1);
                    wr8(dst - 1u, b);

                    b = rd8(src1);
                    wr8(dst - 2u, b);

                    b = rd8(src1);
                    wr8(dst - 3u, b);

                    dst -= 4u;
                    src -= 2u;
                    cnt -= 1u;
                } while (cnt != 0u);
            }
        }
        else
        {
            uint32_t src = param2 + esi * 4u - 1u;
            uint32_t dst = src + esi * 4u;

            if (esi != 0u)
            {
                uint32_t cnt = esi;
                do
                {
                    uint32_t b;
                    uint32_t src1 = src - 1u;
                    uint32_t src2 = src - 2u;
                    uint32_t src3 = src - 3u;

                    b = rd8(src);
                    wr8(dst, b);

                    b = rd8(src1);
                    wr8(dst - 1u, b);

                    b = rd8(src2);
                    wr8(dst - 2u, b);

                    b = rd8(src3);
                    wr8(dst - 3u, b);

                    b = rd8(src2);
                    wr8(dst - 4u, b);

                    b = rd8(src3);
                    wr8(dst - 5u, b);

                    b = rd8(src2);
                    wr8(dst - 6u, b);

                    b = rd8(src3);
                    wr8(dst - 7u, b);

                    dst -= 8u;
                    src -= 4u;
                    cnt -= 1u;
                } while (cnt != 0u);

                wr32(sp0 + 8u, 0u);
            }
        }
    }

    /* tail */
    wr8(edi + 0xa, (uint32_t)(rd8(edi + 0xa) + 2u));
    cl = rd8(edi + 0xa);
    al = rd8(edi + 9u);
    wr8(edi + 8u, rd8(edi + 8u) | 2u);

    al = (al * cl) & 0xffu;
    wr8(edi + 0xb, al);

    uint32_t eax = al;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    eax += 7u;
    eax >>= 3;
    wr32(edi + 4u, eax);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c0140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);

    cow_fn_102c0140(g, arg0, arg1, sp0);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
