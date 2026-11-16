/* f_0x101924e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101924e0(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int16_t)rd16(rd32(self + 8u) + 0x56u) > 0)
    {
        eax = in_eax;
        edx = rd32(self + 8u);
        goto L_101925b7;
    }
    edx = rd32(self + 8u);
    if (rd32(rd32(self + 0x18u) + 8u) == 2u)
    {
        eax = rd32(rd32(self + 0x18u) + 8u);
        ecx = rd32(self + 0x18u);
        goto L_10192630;
    }
    eax = rd32(rd32(self + 0x18u) + 8u);
    ecx = rd32(self + 0x18u);
    if (eax == 3u) goto L_10192627;
    if ((uint32_t)(int16_t)arg1 - 1u > 0x14u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        goto L_101925b7;
    }
    t1 = rd32(COW_IMG(0x10192764u) + rd8(COW_IMG(0x10192794u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t1 - RD)
    {
    case 0x10192528u: edx = rd8(COW_IMG(0x10192794u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10192528;
    case 0x10192553u: goto L_10192553;
    case 0x10192595u: edx = rd8(COW_IMG(0x10192794u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10192595;
    case 0x101925a5u: edx = rd8(COW_IMG(0x10192794u) + (uint32_t)(int16_t)arg1 - 1u); goto L_101925a5;
    case 0x101925b7u: eax = (uint32_t)(int16_t)arg1 - 1u; edx = rd8(COW_IMG(0x10192794u) + (uint32_t)(int16_t)arg1 - 1u); goto L_101925b7;
    case 0x101925bcu: edx = rd8(COW_IMG(0x10192794u) + (uint32_t)(int16_t)arg1 - 1u); goto L_101925bc;
    case 0x101925d3u: edx = rd8(COW_IMG(0x10192794u) + (uint32_t)(int16_t)arg1 - 1u); goto L_101925d3;
    case 0x101925e3u: edx = rd8(COW_IMG(0x10192794u) + (uint32_t)(int16_t)arg1 - 1u); goto L_101925e3;
    case 0x101925f3u: goto L_101925f3;
    case 0x10192607u: edx = rd8(COW_IMG(0x10192794u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10192607;
    case 0x10192617u: edx = rd8(COW_IMG(0x10192794u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10192617;
    case 0x10192753u: edx = rd8(COW_IMG(0x10192794u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10192753;
    default: rt_fatal(g, COW_IMG(0x10192521u), "switch");
    }
    return 0;
L_10192528: ;
    if ((uint16_t)arg2 != 0xdu) goto L_10192543;
    g->eax = ((uint32_t)(int16_t)arg1 - 1u & 0xffff0000u) | (uint16_t)arg2;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t21 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 0u, 0xdu, 0u);
    t22 = g->edx;
    g->edx = t22;
    return t21;
L_10192543: ;
    g->eax = (uint32_t)(int16_t)arg2;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t23 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 0x10u, (uint32_t)(int16_t)arg2, 0u);
    t24 = g->edx;
    g->edx = t24;
    return t23;
L_10192553: ;
    t14 = rd32(ecx + 0x18u);
    t15 = rd32(rd32(ecx + 0x18u) + 0xf0f8u);
    wr8(ecx + 0x1cu, 1u);
    if (t15 != 1u)
    {
        edx = t14;
        goto L_1019257b;
    }
    edx = t14;
    g->eax = 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t16 = cow_thiscall(g, COW_IMG(0x10190c70u), rd32(self + 0x18u), 3, 5u, 0u, 0u);
    t17 = g->edx;
    g->edx = t17;
    return t16;
L_1019257b: ;
    t18 = rd32(self + 8u);
    wr16(self + 0x1cu, rd16(t18 + 0x4cu));
    g->eax = t18;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t19 = cow_thiscall(g, COW_IMG(0x10190c70u), rd32(self + 0x18u), 3, 4u, 0u, 0u);
    t20 = g->edx;
    g->edx = t20;
    return t19;
L_10192595: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t12 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 7u, 0u, 0u);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_101925a5: ;
    wr8(ecx + 0x1cu, 1u);
L_101925a9: ;
    ecx = rd32(self + 0x18u);
L_101925ac: ;
    eax = (uint32_t)(int16_t)arg1 - 1u;
L_101925b0: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t53 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 5u, 0u, 0u);
    t54 = g->edx;
    eax = t53;
    edx = t54;
L_101925b7: ;
    g->edx = edx;
    return eax;
L_101925bc: ;
    wr8(ecx + 0x1cu, 1u);
L_101925c0: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t51 = cow_thiscall(g, COW_IMG(0x10190c70u), rd32(self + 0x18u), 3, 8u, 0u, 0u);
    t52 = g->edx;
    g->edx = t52;
    return t51;
L_101925d3: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t10 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 0xcu, 0u, 0u);
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_101925e3: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 0xeu, 0u, 0u);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_101925f3: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = (uint32_t)(int16_t)arg2;
    g->esp = sp0 - 8u;
    t6 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 0u, (uint32_t)(int16_t)arg2, 0u);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_10192607: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 0x11u, 0u, 0u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_10192617: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 0x12u, 0u, 0u);
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_10192627: ;
    if (eax != 2u) goto L_101926ec;
L_10192630: ;
    t34 = (eax & 0xffff0000u) | rd16(ecx + 0x14u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10118db0u), t34, edx, g->edx, 0, 2, t34, 0u);
    t35 = g->edx;
    if ((uint32_t)(int16_t)arg1 - 1u > 0x12u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = t35;
        goto L_101925b7;
    }
    edx = t35;
    t36 = rd32(COW_IMG(0x101927acu) + rd8(COW_IMG(0x101927ccu) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t36 - RD)
    {
    case 0x101925a9u: goto L_101925a9;
    case 0x101925b7u: eax = (uint32_t)(int16_t)arg1 - 1u; goto L_101925b7;
    case 0x101925c0u: goto L_101925c0;
    case 0x1019265eu: goto L_1019265e;
    case 0x10192681u: goto L_10192681;
    case 0x10192694u: ecx = rd8(COW_IMG(0x101927ccu) + (uint32_t)(int16_t)arg1 - 1u); goto L_10192694;
    case 0x101926c6u: goto L_101926c6;
    case 0x101926d9u: goto L_101926d9;
    default: rt_fatal(g, COW_IMG(0x10192657u), "switch");
    }
    return 0;
L_1019265e: ;
    if (rd32(rd32(rd32(self + 0x18u) + 0x18u) + 0xf0f8u) == 1u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        ecx = rd32(self + 0x18u);
        edx = rd32(rd32(self + 0x18u) + 0x18u);
        goto L_101925b0;
    }
    ecx = rd32(self + 0x18u);
    edx = rd32(rd32(self + 0x18u) + 0x18u);
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t49 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 4u, 0u, 0u);
    t50 = g->edx;
    g->edx = t50;
    return t49;
L_10192681: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t47 = cow_thiscall(g, COW_IMG(0x10190c70u), rd32(self + 0x18u), 3, 4u, 0u, 0u);
    t48 = g->edx;
    g->edx = t48;
    return t47;
L_10192694: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t41 = cow_call_regs(g, COW_IMG(0x10123a70u), (uint32_t)(int16_t)arg1 - 1u, ecx, g->edx, 1, 4, 0x3eu, 0x35u, 4u, 0xffffffffu);
    t42 = g->edx;
    if ((uint8_t)t41 == 0u)
    {
        eax = t41;
        ecx = rd32(self + 0x18u);
        edx = t42;
        goto L_101926ba;
    }
    eax = t41;
    ecx = rd32(self + 0x18u);
    edx = t42;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t43 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 0xau, (uint32_t)(int16_t)arg1, 0u);
    t44 = g->edx;
    g->edx = t44;
    return t43;
L_101926ba: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t45 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 9u, (uint32_t)(int16_t)arg1, 0u);
    t46 = g->edx;
    g->edx = t46;
    return t45;
L_101926c6: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t39 = cow_thiscall(g, COW_IMG(0x10190c70u), rd32(self + 0x18u), 3, 0xbu, 0u, 0u);
    t40 = g->edx;
    g->edx = t40;
    return t39;
L_101926d9: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t37 = cow_thiscall(g, COW_IMG(0x10190c70u), rd32(self + 0x18u), 3, 0xdu, 0u, 0u);
    t38 = g->edx;
    g->edx = t38;
    return t37;
L_101926ec: ;
    if (eax != 3u) goto L_101925b7;
    if ((uint32_t)(int16_t)arg1 - 1u > 0x12u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        goto L_101925b7;
    }
    t25 = rd32(COW_IMG(0x101927e0u) + rd8(COW_IMG(0x101927f8u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t25 - RD)
    {
    case 0x101925acu: edx = rd8(COW_IMG(0x101927f8u) + (uint32_t)(int16_t)arg1 - 1u); goto L_101925ac;
    case 0x101925b7u: eax = (uint32_t)(int16_t)arg1 - 1u; edx = rd8(COW_IMG(0x101927f8u) + (uint32_t)(int16_t)arg1 - 1u); goto L_101925b7;
    case 0x10192713u: edx = rd8(COW_IMG(0x101927f8u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10192713;
    case 0x10192733u: edx = rd8(COW_IMG(0x101927f8u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10192733;
    case 0x10192743u: edx = rd8(COW_IMG(0x101927f8u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10192743;
    case 0x10192753u: edx = rd8(COW_IMG(0x101927f8u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10192753;
    default: rt_fatal(g, COW_IMG(0x1019270cu), "switch");
    }
    return 0;
L_10192713: ;
    if (rd32(rd32(ecx + 0x18u) + 0xf0f8u) == 1u)
    {
        eax = rd32(ecx + 0x18u);
        goto L_101925b0;
    }
    eax = rd32(ecx + 0x18u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t32 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 4u, 0u, 0u);
    t33 = g->edx;
    g->edx = t33;
    return t32;
L_10192733: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t30 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 8u, 0u, 0u);
    t31 = g->edx;
    g->edx = t31;
    return t30;
L_10192743: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t28 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 0xbu, 0u, 0u);
    t29 = g->edx;
    g->edx = t29;
    return t28;
L_10192753: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t26 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 0xdu, 0u, 0u);
    t27 = g->edx;
    g->edx = t27;
    return t26;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101924e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101924e0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
