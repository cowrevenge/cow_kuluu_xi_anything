/* f_0x10306634 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10306634(Guest* g)
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
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;

    t1 = rd32(rd32(rd32(sp0 + 4u) + 0x19cu) + 0x10u);
    t2 = rd32(rd32(rd32(sp0 + 4u) + 0x19cu) + 0x14u);
    t3 = rd32(rd32(rd32(sp0 + 4u) + 0x19cu) + 0x1cu);
    t4 = rd32(rd32(rd32(sp0 + 4u) + 0x19cu) + 0x18u);
    if (rd32(rd32(sp0 + 4u) + 0x5cu) >> 1u == 0u)
    {
        eax = rd32(rd32(sp0 + 0x10u));
        ecx = rd32(rd32(sp0 + 4u) + 0x11cu);
        edx = rd32(rd32(sp0 + 0xcu) * 4u + rd32(rd32(sp0 + 8u) + 4u));
        esi = rd32(rd32(sp0 + 0xcu) * 4u + rd32(rd32(sp0 + 8u) + 8u));
        edi = rd32(rd32(sp0 + 0xcu) * 4u + rd32(rd32(sp0 + 8u)));
        loc_1c = t1;
        loc_18 = t2;
        loc_10 = t3;
        loc_14 = t4;
    }
    else
    {
        eax = rd32(rd32(sp0 + 0x10u));
        ecx = rd32(rd32(sp0 + 4u) + 0x11cu);
        edx = rd32(rd32(sp0 + 0xcu) * 4u + rd32(rd32(sp0 + 8u) + 4u));
        ebx = rd32(rd32(sp0 + 4u) + 0x5cu) >> 1u;
        esi = rd32(rd32(sp0 + 0xcu) * 4u + rd32(rd32(sp0 + 8u) + 8u));
        edi = rd32(rd32(sp0 + 0xcu) * 4u + rd32(rd32(sp0 + 8u)));
        loc_1c = t1;
        loc_18 = t2;
        loc_10 = t3;
        loc_14 = t4;
        wr32(sp0 + 0x10u, ebx);
L_10306691: ;
        t5 = rd32(loc_1c + rd8(esi) * 4u);
        t6 = rd8(esi);
        t7 = rd8(edx);
        wr32(sp0 + 8u, t5);
        wr32(sp0 + 0xcu, t7 << 2u);
        t8 = rd32(loc_18 + rd32(sp0 + 0xcu));
        t9 = rd32(sp0 + 8u);
        t10 = rd32(loc_10 + t7 * 4u);
        t11 = rd32(loc_14 + t6 * 4u);
        wr32(sp0 + 0xcu, t8);
        t12 = rd8(edi);
        wr8(eax, rd8(ecx + t9 + t12));
        wr8(eax + 1u, rd8(ecx + t12 + (uint32_t)((int32_t)(t10 + t11) >> 0x10u)));
        t13 = rd32(sp0 + 8u);
        wr8(eax + 2u, rd8(ecx + t12 + rd32(sp0 + 0xcu)));
        t14 = rd8(edi + 1u);
        t15 = rd8(ecx + t13 + rd8(edi + 1u));
        wr8(eax + 3u, (uint8_t)t15);
        t16 = rd32(sp0 + 0xcu);
        wr8(eax + 4u, rd8(ecx + t14 + (uint32_t)((int32_t)(t10 + t11) >> 0x10u)));
        wr8(eax + 5u, rd8(ecx + t14 + t16));
        wr32(sp0 + 0x10u, rd32(sp0 + 0x10u) - 1u);
        if (rd32(sp0 + 0x10u) != 1u)
        {
            eax = eax + 6u;
            edx = edx + 1u;
            esi = esi + 1u;
            edi = edi + 2u;
            goto L_10306691;
        }
        eax = eax + 6u;
        edx = edx + 1u;
        esi = esi + 1u;
        edi = edi + 2u;
    }
    if (rd8(rd32(sp0 + 4u) + 0x5cu) & 1u)
    {
        t17 = rd8(edx) << 2u;
        t18 = rd8(esi);
        t19 = rd8(edi);
        wr32(sp0 + 0xcu, t17);
        t20 = rd32(sp0 + 0xcu);
        t21 = rd32(loc_10 + t17);
        t22 = rd32(loc_14 + t18 * 4u);
        wr32(sp0 + 4u, t18 << 2u);
        t23 = rd32(loc_18 + t20);
        wr32(sp0 + 0xcu, t23);
        wr8(eax, rd8(ecx + t19 + rd32(loc_1c + rd32(sp0 + 4u))));
        wr8(eax + 1u, rd8(ecx + t19 + (uint32_t)((int32_t)(t21 + t22) >> 0x10u)));
        t24 = rd32(sp0 + 0xcu);
        wr8(eax + 2u, rd8(ecx + t19 + t24));
        edx = t24;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10306634(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10306634(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
