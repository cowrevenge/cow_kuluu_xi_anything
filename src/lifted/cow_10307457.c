/* f_0x10307457 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10307457(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(arg1 + 0x1a4u) + 0x18u);
    t2 = rd32(arg1 + 0x5cu);
    if ((int32_t)rd32(sp0 + 0x10u) <= 0)
    {
        eax = arg1;
        edx = rd32(sp0 + 0x10u);
    }
    else
    {
        ecx = t2;
        edx = rd32(sp0 + 0x10u);
        loc_14 = t1;
        loc_18 = t2;
        loc_8 = arg3;
        loc_10 = edx;
L_10307491: ;
        t3 = rd32(loc_8);
        t4 = rd32(arg2 + loc_8 - arg3);
        wr32(sp0 + 0x10u, t3);
        if (ecx == 0u)
        {
            edx = t3;
        }
        else
        {
            esi = t4;
            loc_c = ecx;
L_103074a3: ;
            t5 = rd8(esi + 1u) >> 2u;
            if (rd16(t5 * 0x40u + (rd8(esi + 2u) >> 3u) * 2u + rd32(loc_14 + (rd8(esi) >> 3u) * 4u)) != 0u)
            {
                eax = t5;
                edx = rd8(esi + 2u) >> 3u;
                edi = t5 * 0x40u + (rd8(esi + 2u) >> 3u) * 2u + rd32(loc_14 + (rd8(esi) >> 3u) * 4u);
                esi = esi + 3u;
            }
            else
            {
                eax = t5;
                ecx = rd8(esi) >> 3u;
                edx = rd8(esi + 2u) >> 3u;
                edi = t5 * 0x40u + (rd8(esi + 2u) >> 3u) * 2u + rd32(loc_14 + (rd8(esi) >> 3u) * 4u);
                esi = esi + 3u;
                g->edx = edx;
                g->esp = sp0 - 0x20u;
                t6 = cow_call_regs(g, COW_IMG(0x10307387u), eax, g->ecx, g->edx, 1, 5, arg1, ecx, edx, in_edi, in_esi);
                t7 = g->edx;
                eax = t6;
                edx = t7;
            }
            t8 = rd8(edi);
            t9 = rd32(sp0 + 0x10u);
            wr32(sp0 + 0x10u, t9 + 1u);
            wr8(t9, (uint8_t)(t8 - 1u));
            if (loc_c != 1u)
            {
                loc_c = loc_c - 1u;
                goto L_103074a3;
            }
            ecx = loc_18;
        }
        if (loc_10 != 1u)
        {
            loc_8 = loc_8 + 4u;
            loc_10 = loc_10 - 1u;
            goto L_10307491;
        }
        eax = arg2 - arg3;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10307457(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10307457(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
