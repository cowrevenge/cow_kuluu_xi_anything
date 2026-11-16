/* f_0x103080bb - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_103080bb(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(rd32(rd32(sp0 + 4u) + 0x1a4u) + 0x18u));
    t2 = rd32(rd32(rd32(rd32(sp0 + 4u) + 0x1a4u) + 0x18u) + 8u);
    t3 = rd32(rd32(sp0 + 4u) + 0x5cu);
    t4 = rd32(rd32(rd32(rd32(sp0 + 4u) + 0x1a4u) + 0x18u) + 4u);
    if ((int32_t)rd32(sp0 + 0x10u) <= 0)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x1a4u);
        edx = rd32(sp0 + 4u);
    }
    else
    {
        eax = rd32(rd32(sp0 + 4u) + 0x1a4u);
        ecx = rd32(sp0 + 0x10u);
        loc_24 = t1;
        loc_30 = t2;
        loc_1c = t3;
        loc_28 = t4;
        loc_c = arg3;
        loc_14 = ecx;
L_10308108: ;
        t5 = rd32(arg2 + loc_c - arg3);
        t6 = rd32(loc_c);
        t7 = rd32(eax + 0x3cu);
        t8 = rd32(eax + 0x34u);
        t9 = rd32(eax + 0x30u);
        wr32(sp0 + 4u, 0u);
        t10 = t9 * 0x40u + rd32(eax + 0x38u);
        t11 = t7 + t9 * 0x40u;
        if (loc_1c == 0u)
        {
            edx = t10;
            loc_34 = t9;
        }
        else
        {
            ecx = t5;
            edx = t10;
            esi = t8 + t9 * 0x40u;
            edi = loc_1c;
            loc_34 = t9;
            loc_8 = t6;
            loc_20 = t10;
            loc_2c = t11;
            loc_10 = edi;
L_10308144: ;
            t12 = rd8(loc_24 + rd8(ecx) + rd32(esi + rd32(sp0 + 4u) * 4u));
            t13 = rd32(edx + rd32(sp0 + 4u) * 4u);
            t14 = rd32(sp0 + 4u);
            wr32(sp0 + 0x10u, t12);
            wr32(sp0 + 0x10u, rd32(sp0 + 0x10u) + rd8(loc_28 + t13 + rd8(ecx + 1u)));
            wr8(loc_8, (uint8_t)(rd32(sp0 + 0x10u) + rd8(loc_30 + rd8(ecx + 2u) + rd32(loc_2c + t14 * 4u))));
            t15 = t14 + 1u & 0xfu;
            wr32(sp0 + 4u, t15);
            if (loc_10 != 1u)
            {
                ecx = ecx + 3u;
                loc_8 = loc_8 + 1u;
                loc_10 = loc_10 - 1u;
                goto L_10308141;
            }
            edx = t15;
        }
        t16 = loc_34 + 1u & 0xfu;
        wr32(eax + 0x30u, t16);
        if (loc_14 != 1u)
        {
            loc_c = loc_c + 4u;
            loc_14 = loc_14 - 1u;
            goto L_10308105;
        }
    }
    g->edx = edx;
    return eax;
L_10308105: ;
    goto L_10308108;
L_10308141: ;
    edx = loc_20;
    goto L_10308144;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103080bb(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103080bb(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
