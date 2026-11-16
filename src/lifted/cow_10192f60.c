/* f_0x10192f60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10192f60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
        goto L_101930d9;
    }
    edx = rd32(self + 8u);
    if (rd32(rd32(self + 0x18u) + 8u) == 2u)
    {
        eax = rd32(rd32(self + 0x18u) + 8u);
        goto L_10193082;
    }
    eax = rd32(rd32(self + 0x18u) + 8u);
    ecx = rd32(self + 0x18u);
    if (eax == 3u) goto L_10193079;
    if ((uint32_t)(int16_t)arg1 - 1u > 0x14u)
    {
        eax = (uint32_t)(int16_t)arg1;
        goto L_101930d9;
    }
    t1 = rd32(COW_IMG(0x101931c4u) + rd8(COW_IMG(0x101931f0u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t1 - RD)
    {
    case 0x10192faau: eax = rd8(COW_IMG(0x101931f0u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10192faa;
    case 0x10192fbau: eax = rd8(COW_IMG(0x101931f0u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10192fba;
    case 0x10192fcau: eax = rd8(COW_IMG(0x101931f0u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10192fca;
    case 0x10192fe8u: eax = rd8(COW_IMG(0x101931f0u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10192fe8;
    case 0x1019300cu: eax = rd8(COW_IMG(0x101931f0u) + (uint32_t)(int16_t)arg1 - 1u); goto L_1019300c;
    case 0x1019301cu: goto L_1019301c;
    case 0x10193059u: eax = rd8(COW_IMG(0x101931f0u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10193059;
    case 0x10193069u: eax = rd8(COW_IMG(0x101931f0u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10193069;
    case 0x101930ceu: eax = rd8(COW_IMG(0x101931f0u) + (uint32_t)(int16_t)arg1 - 1u); goto L_101930ce;
    case 0x101930d9u: eax = rd8(COW_IMG(0x101931f0u) + (uint32_t)(int16_t)arg1 - 1u); goto L_101930d9;
    case 0x101931b3u: eax = rd8(COW_IMG(0x101931f0u) + (uint32_t)(int16_t)arg1 - 1u); goto L_101931b3;
    default: rt_fatal(g, COW_IMG(0x10192fa3u), "switch");
    }
    return 0;
L_10192faa: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t27 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 8u, 0u, 0u);
    t28 = g->edx;
    g->edx = t28;
    return t27;
L_10192fba: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t18 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 0xcu, 0u, 0u);
    t19 = g->edx;
    g->edx = t19;
    return t18;
L_10192fca: ;
    if ((uint32_t)(int16_t)rd16(edx + 0x4cu) != 0xdu)
    {
        edi = (uint32_t)(int16_t)rd16(edx + 0x4cu);
    }
    else
    {
        edi = (uint32_t)(int16_t)rd16(edx + 0x4cu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t16 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 0xfu, edi, 0u);
        t17 = g->edx;
        eax = t16;
        edx = t17;
    }
    wr32(rd32(self + 0x18u) + 0x24u, edi);
    g->edx = edx;
    return eax;
L_10192fe8: ;
    if ((uint16_t)arg2 != 3u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)arg2;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)arg2;
        t13 = (uint32_t)(int16_t)rd16(edx + 0x4cu);
        wr32(self + 0x20u, t13);
        edx = t13;
    }
    g->eax = (uint32_t)(int16_t)eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t14 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 0xfu, (uint32_t)(int16_t)eax, 0u);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_1019300c: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 0xeu, 0u, 0u);
    t12 = g->edx;
    g->edx = t12;
    return t11;
L_1019301c: ;
    if (rd32(rd32(ecx + 0x18u) + 0xf0f8u) != 1u) goto L_10193046;
    wr8(ecx + 0x1cu, 1u);
    g->eax = 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_thiscall(g, COW_IMG(0x10190c70u), rd32(self + 0x18u), 3, 5u, 0u, 0u);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_10193046: ;
    t8 = (uint32_t)(int16_t)rd16(edx + 0x4cu);
    wr32(self + 0x20u, t8);
    g->eax = 1u;
    g->edx = t8;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 4u, 0u, 0u);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_10193059: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 0x11u, 0u, 0u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_10193069: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 0x12u, 0u, 0u);
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_10193079: ;
    if (eax != 2u) goto L_1019315c;
L_10193082: ;
    t29 = (eax & 0xffff0000u) | rd16(self + 0x20u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10118db0u), t29, edx, g->edx, 0, 2, t29, 0u);
    t30 = g->edx;
    if ((uint32_t)(int16_t)arg1 - 1u > 0x12u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = t30;
        goto L_101930d9;
    }
    edx = t30;
    t31 = rd32(COW_IMG(0x10193208u) + rd8(COW_IMG(0x10193228u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t31 - RD)
    {
    case 0x101930acu: goto L_101930ac;
    case 0x101930cbu: goto L_101930cb;
    case 0x101930d9u: eax = (uint32_t)(int16_t)arg1 - 1u; goto L_101930d9;
    case 0x101930deu: goto L_101930de;
    case 0x101930f1u: ecx = rd8(COW_IMG(0x10193228u) + (uint32_t)(int16_t)arg1 - 1u); goto L_101930f1;
    case 0x10193123u: goto L_10193123;
    case 0x10193136u: goto L_10193136;
    case 0x10193149u: goto L_10193149;
    default: rt_fatal(g, COW_IMG(0x101930a5u), "switch");
    }
    return 0;
L_101930ac: ;
    if (rd32(rd32(rd32(self + 0x18u) + 0x18u) + 0xf0f8u) == 1u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        ecx = rd32(self + 0x18u);
        edx = rd32(rd32(self + 0x18u) + 0x18u);
        goto L_101930d2;
    }
    ecx = rd32(self + 0x18u);
    edx = rd32(rd32(self + 0x18u) + 0x18u);
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t46 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 4u, 0u, 0u);
    t47 = g->edx;
    g->edx = t47;
    return t46;
L_101930cb: ;
    eax = (uint32_t)(int16_t)arg1 - 1u;
    ecx = rd32(self + 0x18u);
L_101930ce: ;
L_101930d2: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t48 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 5u, 0u, 0u);
    t49 = g->edx;
    eax = t48;
    edx = t49;
L_101930d9: ;
    g->edx = edx;
    return eax;
L_101930de: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t44 = cow_thiscall(g, COW_IMG(0x10190c70u), rd32(self + 0x18u), 3, 4u, 0u, 0u);
    t45 = g->edx;
    g->edx = t45;
    return t44;
L_101930f1: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t38 = cow_call_regs(g, COW_IMG(0x10123a70u), (uint32_t)(int16_t)arg1 - 1u, ecx, g->edx, 1, 4, 0x3eu, 0x35u, 4u, 0xffffffffu);
    t39 = g->edx;
    if ((uint8_t)t38 == 0u)
    {
        eax = t38;
        ecx = rd32(self + 0x18u);
        edx = t39;
        goto L_10193117;
    }
    eax = t38;
    ecx = rd32(self + 0x18u);
    edx = t39;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t40 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 0xau, (uint32_t)(int16_t)arg1, 0u);
    t41 = g->edx;
    g->edx = t41;
    return t40;
L_10193117: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t42 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 9u, (uint32_t)(int16_t)arg1, 0u);
    t43 = g->edx;
    g->edx = t43;
    return t42;
L_10193123: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t36 = cow_thiscall(g, COW_IMG(0x10190c70u), rd32(self + 0x18u), 3, 8u, 0u, 0u);
    t37 = g->edx;
    g->edx = t37;
    return t36;
L_10193136: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t34 = cow_thiscall(g, COW_IMG(0x10190c70u), rd32(self + 0x18u), 3, 0xbu, 0u, 0u);
    t35 = g->edx;
    g->edx = t35;
    return t34;
L_10193149: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t32 = cow_thiscall(g, COW_IMG(0x10190c70u), rd32(self + 0x18u), 3, 0xdu, 0u, 0u);
    t33 = g->edx;
    g->edx = t33;
    return t32;
L_1019315c: ;
    if (eax != 3u) goto L_101930d9;
    if ((uint32_t)(int16_t)arg1 - 1u > 0x12u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        goto L_101930d9;
    }
    t20 = rd32(COW_IMG(0x1019323cu) + rd8(COW_IMG(0x10193254u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t20 - RD)
    {
    case 0x10192faau: eax = (uint32_t)(int16_t)arg1 - 1u; edx = rd8(COW_IMG(0x10193254u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10192faa;
    case 0x101930ceu: eax = (uint32_t)(int16_t)arg1 - 1u; edx = rd8(COW_IMG(0x10193254u) + (uint32_t)(int16_t)arg1 - 1u); goto L_101930ce;
    case 0x101930d9u: eax = (uint32_t)(int16_t)arg1 - 1u; edx = rd8(COW_IMG(0x10193254u) + (uint32_t)(int16_t)arg1 - 1u); goto L_101930d9;
    case 0x10193183u: edx = rd8(COW_IMG(0x10193254u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10193183;
    case 0x101931a3u: edx = rd8(COW_IMG(0x10193254u) + (uint32_t)(int16_t)arg1 - 1u); goto L_101931a3;
    case 0x101931b3u: eax = (uint32_t)(int16_t)arg1 - 1u; edx = rd8(COW_IMG(0x10193254u) + (uint32_t)(int16_t)arg1 - 1u); goto L_101931b3;
    default: rt_fatal(g, COW_IMG(0x1019317cu), "switch");
    }
    return 0;
L_10193183: ;
    if (rd32(rd32(ecx + 0x18u) + 0xf0f8u) == 1u)
    {
        eax = rd32(ecx + 0x18u);
        goto L_101930d2;
    }
    eax = rd32(ecx + 0x18u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t25 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 4u, 0u, 0u);
    t26 = g->edx;
    g->edx = t26;
    return t25;
L_101931a3: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t23 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 0xbu, 0u, 0u);
    t24 = g->edx;
    g->edx = t24;
    return t23;
L_101931b3: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t21 = cow_thiscall(g, COW_IMG(0x10190c70u), ecx, 3, 0xdu, 0u, 0u);
    t22 = g->edx;
    g->edx = t22;
    return t21;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10192f60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10192f60(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
