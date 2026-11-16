/* f_0x103081ba - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_103081ba(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_44;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(sp0 + 4u) + 0x64u);
    t2 = rd32(rd32(sp0 + 4u) + 0x5cu);
    t3 = rd32(rd32(sp0 + 4u) + 0x1a4u);
    t4 = rd32(rd32(sp0 + 4u) + 0x11cu);
    if ((int32_t)rd32(sp0 + 0x10u) <= 0)
    {
        eax = t4;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(sp0 + 0x10u);
        ebx = t3;
        loc_8 = t1;
        loc_10 = t2;
        loc_44 = t3;
        loc_30 = t4;
        wr32(sp0 + 0x10u, arg3);
        edx = in_edx;
        loc_28 = ecx;
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
L_10308200: ;
        t5 = rd32(rd32(sp0 + 0x10u));
        g->eax = rd32(sp0 + 0x10u);
        g->edx = edx;
        t6 = rd32(sp0 + 0x10u);
        g->esp = sp0 - 0x50u;
        t7 = cow_cdecl(g, COW_IMG(0x102f595eu), 3, t5, loc_10, in_edi);
        t8 = g->edx;
        wr32(sp0 + 4u, 0u);
        if ((int32_t)loc_8 <= 0)
        {
            eax = t7;
            ecx = loc_10;
            edx = t8;
        }
        else
        {
            t9 = arg2 + rd32(sp0 + 0x10u) - arg3;
            loc_2c = t9;
            loc_c = ebx + 0x44u;
L_1030822b: ;
            if (rd8(ebx + 0x54u) == 0u)
            {
                esi = rd32(rd32(sp0 + 0x10u));
                edi = rd32(loc_2c) + rd32(sp0 + 4u);
                ecx = rd32(loc_c);
                loc_14 = 1u;
                loc_20 = loc_8;
            }
            else
            {
                esi = rd32(rd32(sp0 + 0x10u));
                edi = rd32(loc_2c) + rd32(sp0 + 4u);
                ecx = loc_10 * 2u + rd32(loc_c) + 2u;
                esi = esi + loc_10 - 1u;
                edi = edi + (loc_10 - 1u) * loc_8;
                loc_14 = 0xffffffffu;
                loc_20 = -loc_8;
            }
            t10 = rd32(rd32(ebx + 0x18u) + rd32(sp0 + 4u) * 4u);
            t11 = rd32(rd32(ebx + 0x10u) + rd32(sp0 + 4u) * 4u);
            if (loc_10 == 0u)
            {
                eax = 0u;
                edx = loc_10;
                loc_18 = 0u;
                loc_1c = 0u;
            }
            else
            {
                edx = loc_10;
                loc_34 = t10;
                loc_38 = t11;
                eax = 0u;
                loc_18 = 0u;
                loc_1c = 0u;
                loc_24 = edx;
L_103082a1: ;
                t12 = ecx + loc_14 * 2u;
                t13 = rd8(loc_30 + rd8(edi) + (uint32_t)((int32_t)(eax + (uint32_t)(int16_t)rd16(t12) + 8u) >> 4u));
                t14 = rd8(loc_34 + rd8(loc_30 + rd8(edi) + (uint32_t)((int32_t)(eax + (uint32_t)(int16_t)rd16(t12) + 8u) >> 4u)));
                wr8(esi, (uint8_t)(rd8(esi) + t14));
                t15 = t13 - rd8(loc_38 + t14);
                wr16(ecx, (uint16_t)(loc_18 + t15 * 3u));
                t16 = loc_1c + t15 * 5u;
                if (loc_24 != 1u)
                {
                    eax = t15 * 7u;
                    ecx = t12;
                    esi = esi + loc_14;
                    edi = edi + loc_20;
                    loc_18 = t16;
                    loc_1c = t15;
                    loc_24 = loc_24 - 1u;
                    goto L_103082a1;
                }
                eax = t15 * 7u;
                ecx = t12;
                edx = t15 * 2u;
                loc_18 = t16;
                loc_1c = t15;
                ebx = loc_44;
            }
            wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
            wr16(ecx, (uint16_t)loc_18);
            if ((int32_t)rd32(sp0 + 4u) < (int32_t)loc_8)
            {
                loc_c = loc_c + 4u;
                goto L_1030822b;
            }
            eax = rd32(sp0 + 4u);
        }
        t17 = rd8(ebx + 0x54u);
        wr32(sp0 + 0x10u, rd32(sp0 + 0x10u) + 4u);
        wr8(ebx + 0x54u, t17 == 0u);
        if (loc_28 != 1u)
        {
            loc_28 = loc_28 - 1u;
            goto L_10308200;
        }
        eax = (eax & 0xffffff00u) | t17 == 0u;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103081ba(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103081ba(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
