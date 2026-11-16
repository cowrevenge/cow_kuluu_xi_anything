/* f_0x10191c60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10191c60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int16_t)rd16(rd32(self + 8u) + 0x56u) > 0)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
        goto L_10191d5d;
    }
    eax = rd32(self + 8u);
    if (rd32(rd32(self + 0x18u) + 8u) == 2u)
    {
        edx = rd32(rd32(self + 0x18u) + 8u);
        goto L_10191d8b;
    }
    ecx = rd32(self + 0x18u);
    edx = rd32(rd32(self + 0x18u) + 8u);
    if (edx == 3u) goto L_10191d82;
    if ((uint32_t)(int16_t)arg1 - 5u > 0x10u)
    {
        edx = (uint32_t)(int16_t)arg1;
        goto L_10191d5d;
    }
    t1 = rd32(COW_IMG(0x10191ebcu) + rd8(COW_IMG(0x10191ee0u) + (uint32_t)(int16_t)arg1 - 5u) * 4u);
    switch (t1 - RD)
    {
    case 0x10191caau: edx = rd8(COW_IMG(0x10191ee0u) + (uint32_t)(int16_t)arg1 - 5u); goto L_10191caa;
    case 0x10191cc1u: goto L_10191cc1;
    case 0x10191cdcu: goto L_10191cdc;
    case 0x10191cf3u: edx = rd8(COW_IMG(0x10191ee0u) + (uint32_t)(int16_t)arg1 - 5u); goto L_10191cf3;
    case 0x10191d03u: goto L_10191d03;
    case 0x10191d41u: edx = rd8(COW_IMG(0x10191ee0u) + (uint32_t)(int16_t)arg1 - 5u); goto L_10191d41;
    case 0x10191d5du: edx = rd8(COW_IMG(0x10191ee0u) + (uint32_t)(int16_t)arg1 - 5u); goto L_10191d5d;
    case 0x10191d62u: edx = rd8(COW_IMG(0x10191ee0u) + (uint32_t)(int16_t)arg1 - 5u); goto L_10191d62;
    case 0x10191d72u: edx = rd8(COW_IMG(0x10191ee0u) + (uint32_t)(int16_t)arg1 - 5u); goto L_10191d72;
    default: rt_fatal(g, COW_IMG(0x10191ca3u), "switch");
    }
    return 0;
L_10191caa: ;
    t24 = (uint32_t)(int16_t)rd16(eax + 0x4cu);
    wr32(self + 0x1cu, t24);
    eax = t24;
L_10191cb1: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t32 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 8u, 0u, 0u);
    t33 = g->edx;
    g->edx = t33;
    return t32;
L_10191cc1: ;
    t21 = (uint32_t)(int16_t)rd16(eax + 0x4cu);
    wr32(self + 0x1cu, t21);
    g->eax = (uint32_t)(int16_t)arg2;
    g->edx = t21;
    g->esp = sp0 - 8u;
    t22 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 1u, (uint32_t)(int16_t)arg2, 0u);
    t23 = g->edx;
    g->edx = t23;
    return t22;
L_10191cdc: ;
    t18 = (uint32_t)(int16_t)rd16(eax + 0x4cu);
    wr32(self + 0x1cu, t18);
    g->eax = eax;
    g->edx = t18;
    g->esp = sp0 - 8u;
    t19 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 2u, 0u, 0u);
    t20 = g->edx;
    g->edx = t20;
    return t19;
L_10191cf3: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t16 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 0xcu, 0u, 0u);
    t17 = g->edx;
    g->edx = t17;
    return t16;
L_10191d03: ;
    t8 = rd32(ecx + 0x18u);
    t9 = rd32(rd32(ecx + 0x18u) + 0xf0f8u);
    wr8(ecx + 0x1cu, 0u);
    if (t9 != 1u)
    {
        eax = t8;
        goto L_10191d28;
    }
    eax = t8;
    edx = t9;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t10 = cow_thiscall(g, COW_IMG(0x10190c70u), rd32(self + 0x18u), 3, 5u, 0u, 0u);
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_10191d28: ;
    t12 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    t13 = rd32(self + 0x18u);
    wr32(self + 0x1cu, t12);
    g->eax = eax;
    g->edx = t12;
    g->esp = sp0 - 8u;
    t14 = cow_thiscall(g, COW_IMG(0x10190c70u), t13, 3, 4u, 0u, 0u);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_10191d41: ;
    wr8(ecx + 0x1cu, 0u);
    t6 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    t7 = rd32(self + 8u);
    wr32(self + 0x1cu, t6);
    eax = t7;
L_10191d4f: ;
    ecx = rd32(self + 0x18u);
L_10191d52: ;
L_10191d56: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t53 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 5u, 0u, 0u);
    t54 = g->edx;
    eax = t53;
    edx = t54;
L_10191d5d: ;
    g->edx = edx;
    return eax;
L_10191d62: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 0x11u, 0u, 0u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_10191d72: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 0x12u, 0u, 0u);
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_10191d82: ;
    if (edx != 2u) goto L_10191e52;
L_10191d8b: ;
    t34 = (edx & 0xffff0000u) | rd16(self + 0x1cu);
    g->edx = t34;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10118db0u), eax, eax, g->edx, 0, 2, t34, 0u);
    t35 = g->edx;
    if ((uint32_t)(int16_t)arg1 - 1u > 0x12u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = t35;
        goto L_10191d5d;
    }
    edx = t35;
    t36 = rd32(COW_IMG(0x10191ef4u) + rd8(COW_IMG(0x10191f14u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t36 - RD)
    {
    case 0x10191d4fu: eax = (uint32_t)(int16_t)arg1 - 1u; goto L_10191d4f;
    case 0x10191d5du: eax = (uint32_t)(int16_t)arg1 - 1u; goto L_10191d5d;
    case 0x10191db5u: goto L_10191db5;
    case 0x10191dd4u: goto L_10191dd4;
    case 0x10191de7u: ecx = rd8(COW_IMG(0x10191f14u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10191de7;
    case 0x10191e19u: goto L_10191e19;
    case 0x10191e2cu: goto L_10191e2c;
    case 0x10191e3fu: goto L_10191e3f;
    default: rt_fatal(g, COW_IMG(0x10191daeu), "switch");
    }
    return 0;
L_10191db5: ;
    if (rd32(rd32(rd32(self + 0x18u) + 0x18u) + 0xf0f8u) == 1u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        ecx = rd32(self + 0x18u);
        edx = rd32(rd32(self + 0x18u) + 0x18u);
        goto L_10191d56;
    }
    ecx = rd32(self + 0x18u);
    edx = rd32(rd32(self + 0x18u) + 0x18u);
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t51 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 4u, 0u, 0u);
    t52 = g->edx;
    g->edx = t52;
    return t51;
L_10191dd4: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t49 = cow_thiscall(g, COW_IMG(0x10190c70u), rd32(self + 0x18u), 3, 4u, 0u, 0u);
    t50 = g->edx;
    g->edx = t50;
    return t49;
L_10191de7: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t43 = cow_call_regs(g, COW_IMG(0x10123a70u), (uint32_t)(int16_t)arg1 - 1u, ecx, g->edx, 1, 4, 0x3eu, 0x35u, 4u, 0xffffffffu);
    t44 = g->edx;
    if ((uint8_t)t43 == 0u)
    {
        eax = t43;
        ecx = rd32(self + 0x18u);
        edx = t44;
        goto L_10191e0d;
    }
    eax = t43;
    ecx = rd32(self + 0x18u);
    edx = t44;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t45 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 0xau, (uint32_t)(int16_t)arg1, 0u);
    t46 = g->edx;
    g->edx = t46;
    return t45;
L_10191e0d: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t47 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 9u, (uint32_t)(int16_t)arg1, 0u);
    t48 = g->edx;
    g->edx = t48;
    return t47;
L_10191e19: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t41 = cow_thiscall(g, COW_IMG(0x10190c70u), rd32(self + 0x18u), 3, 8u, 0u, 0u);
    t42 = g->edx;
    g->edx = t42;
    return t41;
L_10191e2c: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t39 = cow_thiscall(g, COW_IMG(0x10190c70u), rd32(self + 0x18u), 3, 0xbu, 0u, 0u);
    t40 = g->edx;
    g->edx = t40;
    return t39;
L_10191e3f: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t37 = cow_thiscall(g, COW_IMG(0x10190c70u), rd32(self + 0x18u), 3, 0xdu, 0u, 0u);
    t38 = g->edx;
    g->edx = t38;
    return t37;
L_10191e52: ;
    if (edx != 3u) goto L_10191d5d;
    if ((uint32_t)(int16_t)arg1 - 1u > 0x12u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        goto L_10191d5d;
    }
    t25 = rd32(COW_IMG(0x10191f28u) + rd8(COW_IMG(0x10191f40u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t25 - RD)
    {
    case 0x10191cb1u: eax = (uint32_t)(int16_t)arg1 - 1u; edx = rd8(COW_IMG(0x10191f40u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10191cb1;
    case 0x10191d52u: eax = (uint32_t)(int16_t)arg1 - 1u; edx = rd8(COW_IMG(0x10191f40u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10191d52;
    case 0x10191d5du: eax = (uint32_t)(int16_t)arg1 - 1u; edx = rd8(COW_IMG(0x10191f40u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10191d5d;
    case 0x10191e79u: edx = rd8(COW_IMG(0x10191f40u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10191e79;
    case 0x10191e99u: edx = rd8(COW_IMG(0x10191f40u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10191e99;
    case 0x10191ea9u: edx = rd8(COW_IMG(0x10191f40u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10191ea9;
    default: rt_fatal(g, COW_IMG(0x10191e72u), "switch");
    }
    return 0;
L_10191e79: ;
    if (rd32(rd32(ecx + 0x18u) + 0xf0f8u) == 1u)
    {
        eax = rd32(ecx + 0x18u);
        goto L_10191d56;
    }
    eax = rd32(ecx + 0x18u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t30 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 4u, 0u, 0u);
    t31 = g->edx;
    g->edx = t31;
    return t30;
L_10191e99: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t28 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 0xbu, 0u, 0u);
    t29 = g->edx;
    g->edx = t29;
    return t28;
L_10191ea9: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t26 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 0xdu, 0u, 0u);
    t27 = g->edx;
    g->edx = t27;
    return t26;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10191c60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10191c60(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
