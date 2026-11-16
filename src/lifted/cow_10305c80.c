/* f_0x10305c80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_10305c80(Guest* g)
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(sp0 + 4u) + 0x11cu);
    t2 = rd32(rd32(sp0 + 4u) + 0x1a0u);
    t3 = rd32(rd32(sp0 + 4u) + 0x5cu);
    wr32(sp0 + 4u, t1);
    t4 = rd32(t2 + 8u);
    t5 = rd32(t2 + 0xcu);
    t6 = rd32(t2 + 0x14u);
    t7 = rd32(t2 + 0x10u);
    if ((int32_t)(rd32(sp0 + 0x14u) - 1u) < 0)
    {
        eax = rd32(sp0 + 0x14u) - 1u;
        edx = in_edx;
    }
    else
    {
        eax = rd32(sp0 + 0x14u) - 1u;
        edi = t3;
        loc_1c = t4;
        loc_28 = t5;
        loc_20 = t6;
        loc_2c = t3;
        loc_24 = t7;
        edx = arg3 << 2u;
        loc_c = eax + 1u;
L_10305cd0: ;
        t8 = rd32(edx + rd32(arg2));
        wr32(sp0 + 0x14u, t8);
        t9 = rd32(edx + rd32(arg2 + 8u));
        t10 = rd32(edx + rd32(arg2 + 0xcu));
        t11 = rd32(sp0 + 0x10u);
        t12 = rd32(edx + rd32(arg2 + 4u));
        wr32(sp0 + 0x10u, t11 + 4u);
        if (edi == 0u)
        {
            eax = rd32(t11);
            edx = edx + 4u;
        }
        else
        {
            eax = rd32(t11);
            ecx = t12;
            loc_8 = t9;
            loc_10 = t10;
            loc_30 = edx + 4u;
            t13 = rd32(sp0 + 0x14u) - ecx;
            ebx = t13;
            esi = loc_8 - ecx;
            loc_10 = loc_10 - ecx;
            loc_14 = t13;
            loc_18 = loc_8 - ecx;
            loc_8 = edi;
L_10305d2a: ;
            t14 = rd8(ebx + ecx);
            t15 = rd8(ecx);
            wr32(sp0 + 0x14u, t14);
            t16 = rd8(ecx + esi);
            wr8(eax, rd8(rd32(sp0 + 4u) - rd32(loc_1c + t16 * 4u) - rd32(sp0 + 0x14u) + 0xffu));
            wr8(eax + 1u, rd8(rd32(sp0 + 4u) - (uint32_t)((int32_t)(rd32(loc_20 + t15 * 4u) + rd32(loc_24 + t16 * 4u)) >> 0x10u) - rd32(sp0 + 0x14u) + 0xffu));
            wr8(eax + 2u, rd8(rd32(sp0 + 4u) - rd32(loc_28 + t15 * 4u) - rd32(sp0 + 0x14u) + 0xffu));
            wr8(eax + 3u, rd8(ecx + loc_10));
            if (loc_8 != 1u)
            {
                eax = eax + 4u;
                ecx = ecx + 1u;
                loc_8 = loc_8 - 1u;
                goto L_10305d24;
            }
            eax = eax + 4u;
            edx = loc_30;
            edi = loc_2c;
        }
        if (loc_c != 1u)
        {
            loc_c = loc_c - 1u;
            goto L_10305cd0;
        }
    }
    g->edx = edx;
    return eax;
L_10305d24: ;
    ebx = loc_14;
    esi = loc_18;
    goto L_10305d2a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10305c80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10305c80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
