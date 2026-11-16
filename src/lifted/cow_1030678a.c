/* f_0x1030678a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_1030678a(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
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
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(rd32(arg1 + 0x19cu) + 0x10u);
    t2 = rd32(rd32(arg1 + 0x19cu) + 0x14u);
    t3 = rd32(rd32(arg1 + 0x19cu) + 0x18u);
    t4 = rd32(rd32(arg1 + 0x19cu) + 0x1cu);
    t5 = rd32(rd32(sp0 + 0xcu) * 8u + rd32(rd32(sp0 + 8u)) + 4u);
    t6 = rd32(arg1 + 0x11cu);
    t7 = rd32(sp0 + 8u);
    t8 = rd32(arg1 + 0x5cu);
    t9 = rd32(sp0 + 0xcu);
    t10 = rd32(rd32(sp0 + 0xcu) * 8u + rd32(rd32(sp0 + 8u)));
    wr32(sp0 + 0xcu, t5);
    t11 = rd32(t7 + 8u);
    t12 = rd32(t9 * 4u + rd32(t7 + 4u));
    wr32(sp0 + 8u, t10);
    if (t8 >> 1u == 0u)
    {
        eax = t6;
        ecx = rd32(rd32(sp0 + 0x10u));
        edx = t12;
        esi = rd32(rd32(sp0 + 0x10u) + 4u);
        edi = rd32(t11 + t9 * 4u);
        loc_18 = t1;
        loc_24 = t2;
        loc_20 = t3;
        loc_1c = t4;
    }
    else
    {
        eax = t6;
        ecx = rd32(rd32(sp0 + 0x10u));
        edx = t12;
        ebx = t8 >> 1u;
        esi = rd32(rd32(sp0 + 0x10u) + 4u);
        edi = rd32(t11 + t9 * 4u);
        loc_18 = t1;
        loc_24 = t2;
        loc_20 = t3;
        loc_1c = t4;
        loc_c = ebx;
L_103067f5: ;
        t13 = rd32(loc_18 + rd8(edi) * 4u);
        t14 = rd8(edi);
        t15 = rd8(edx);
        wr32(sp0 + 0x10u, t13);
        t16 = rd32(loc_24 + t15 * 4u);
        t17 = rd8(rd32(sp0 + 8u));
        t18 = rd32(loc_1c + t15 * 4u);
        t19 = rd32(loc_20 + t14 * 4u);
        wr8(ecx, rd8(eax + rd32(sp0 + 0x10u) + t17));
        wr32(sp0 + 8u, rd32(sp0 + 8u) + 1u);
        wr8(ecx + 1u, rd8(eax + t17 + (uint32_t)((int32_t)(t18 + t19) >> 0x10u)));
        wr8(ecx + 2u, rd8(eax + t16 + t17));
        t20 = rd8(rd32(sp0 + 8u));
        wr8(ecx + 3u, rd8(eax + rd32(sp0 + 0x10u) + t20));
        wr8(ecx + 4u, rd8(eax + t20 + (uint32_t)((int32_t)(t18 + t19) >> 0x10u)));
        t21 = rd32(sp0 + 0x10u);
        wr8(ecx + 5u, rd8(eax + t16 + t20));
        t22 = rd8(rd32(sp0 + 0xcu));
        wr32(sp0 + 8u, rd32(sp0 + 8u) + 1u);
        wr8(esi, rd8(eax + t21 + t22));
        wr8(esi + 1u, rd8(eax + t22 + (uint32_t)((int32_t)(t18 + t19) >> 0x10u)));
        t23 = rd32(sp0 + 0x10u);
        wr8(esi + 2u, rd8(eax + t16 + t22));
        wr32(sp0 + 0xcu, rd32(sp0 + 0xcu) + 1u);
        t24 = rd8(rd32(sp0 + 0xcu));
        t25 = rd8(eax + t23 + rd8(rd32(sp0 + 0xcu)));
        wr32(sp0 + 0xcu, rd32(sp0 + 0xcu) + 1u);
        wr8(esi + 3u, (uint8_t)t25);
        wr8(esi + 4u, rd8(eax + t24 + (uint32_t)((int32_t)(t18 + t19) >> 0x10u)));
        wr8(esi + 5u, rd8(eax + t16 + t24));
        if (loc_c != 1u)
        {
            ecx = ecx + 6u;
            edx = edx + 1u;
            esi = esi + 6u;
            edi = edi + 1u;
            loc_c = loc_c - 1u;
            goto L_103067f5;
        }
        ecx = ecx + 6u;
        edx = edx + 1u;
        esi = esi + 6u;
        edi = edi + 1u;
    }
    if (rd8(arg1 + 0x5cu) & 1u)
    {
        t26 = rd32(loc_18 + rd8(edi) * 4u);
        t27 = rd8(edi);
        t28 = rd8(edx);
        wr32(sp0 + 0x10u, t26);
        t29 = rd32(loc_24 + t28 * 4u);
        t30 = rd8(rd32(sp0 + 8u));
        t31 = rd32(loc_1c + t28 * 4u);
        t32 = rd32(loc_20 + t27 * 4u);
        wr8(ecx, rd8(eax + rd32(sp0 + 0x10u) + t30));
        wr8(ecx + 1u, rd8(eax + t30 + (uint32_t)((int32_t)(t31 + t32) >> 0x10u)));
        wr8(ecx + 2u, rd8(eax + t29 + t30));
        t33 = rd8(rd32(sp0 + 0xcu));
        wr8(esi, rd8(eax + rd32(sp0 + 0x10u) + t33));
        t34 = rd8(eax + t33 + (uint32_t)((int32_t)(t31 + t32) >> 0x10u));
        wr8(esi + 1u, (uint8_t)t34);
        t35 = rd8(eax + t29 + t33);
        wr8(esi + 2u, (uint8_t)t35);
        eax = (eax & 0xffffff00u) | t35;
        edx = (t33 + (uint32_t)((int32_t)(t31 + t32) >> 0x10u) & 0xffffff00u) | t34;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030678a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1030678a(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
