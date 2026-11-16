/* f_0x100808e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100808e0(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d33;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)rd32(COW_IMG(0x1047d490u)) < 2)
    {
        eax = rd32(COW_IMG(0x1047d490u));
        edx = in_edx;
        goto L_10080c45;
    }
    t1 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    t2 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 0xcu;
    t3 = cow_call_regs(g, COW_IMG(0x10077ba0u), t2, t1, in_edx, 1, 2, COW_IMG(0x10357b80u), t1);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        edx = t5;
        goto L_10080c45;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    if ((uint32_t)(int8_t)rd8(eax + 5u) - 1u > 5u)
    {
        eax = (uint32_t)(int8_t)rd8(eax + 5u) - 1u;
        goto L_10080c45;
    }
    eax = (uint32_t)(int8_t)rd8(eax + 5u) - 1u;
    t6 = rd32(COW_IMG(0x10080c4cu) + eax * 4u);
    switch (t6 - RD)
    {
    case 0x10080924u: goto L_10080924;
    case 0x100809afu: goto L_100809af;
    case 0x10080a08u: goto L_10080a08;
    case 0x10080a7au: goto L_10080a7a;
    case 0x10080adfu: goto L_10080adf;
    case 0x10080ba8u: goto L_10080ba8;
    default: rt_fatal(g, COW_IMG(0x1008091du), "switch");
    }
    return 0;
L_10080924: ;
    if (rd32(COW_IMG(0x1047d490u)) != 3u) goto L_10080c45;
    t45 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    esi = t45;
    edi = COW_IMG(0x10358130u);
    ecx = 7u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        eax = t45;
        goto L_1008095f;
    }
    eax = t45;
    g->edx = 0u;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0x3au, 0u);
    t46 = g->edx;
    g->edx = t46;
    return arg3;
L_1008095f: ;
    esi = eax;
    edi = COW_IMG(0x1034f488u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_10080985;
    g->edx = 0u;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0x3au, 1u);
    t47 = g->edx;
    g->edx = t47;
    return arg3;
L_10080985: ;
    esi = eax;
    edi = COW_IMG(0x1035815cu);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        eax = 0u;
        edx = 0u;
        goto L_10080c45;
    }
    g->edx = 0u;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10193830u), 0u, g->ecx, g->edx, 1, 2, 0x3au, 2u);
    t48 = g->edx;
    g->edx = t48;
    return arg3;
L_100809af: ;
    if (rd32(COW_IMG(0x1047d490u)) != 3u) goto L_10080c45;
    t38 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    g->eax = eax;
    g->edx = t38;
    t39 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 0xcu;
    t40 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t39, 1, t38);
    t41 = g->ecx;
    t42 = g->edx;
    if ((int32_t)t40 >= 25)
    {
        eax = t40;
        ecx = t41;
        edx = t42;
        goto L_100809eb;
    }
    ecx = t41;
    edx = t42;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10193830u), 0x19u, g->ecx, g->edx, 1, 2, 0x3cu, 0x19u);
    t43 = g->edx;
    g->edx = t43;
    return arg3;
L_100809eb: ;
    if ((int32_t)eax > 50)
    {
        eax = 0x32u;
    }
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0x3cu, eax);
    t44 = g->edx;
    g->edx = t44;
    return arg3;
L_10080a08: ;
    if (rd32(COW_IMG(0x1047d490u)) != 3u) goto L_10080c45;
    t28 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    g->eax = rd32(COW_IMG(0x103551e0u));
    g->edx = edx;
    t29 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 0xcu;
    t30 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t28, 1, t28);
    t31 = g->ecx;
    t32 = g->edx;
    d33 = fr(g, (double)(int32_t)t30 * (double)rdf32(COW_IMG(0x10329ea0u)));
    if (!(d33 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t30 & 0xffff0000u) | (uint16_t)cow_fsw(g, d33, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t31;
        edx = t32;
        loc_4 = t30;
        x0 = d33;
        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032cf58u)), 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032cf58u)), 1u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032cf58u)), 1u) & 0x4100u;
            x0 = (double)rdf32(COW_IMG(0x1032cf58u));
        }
    }
    else
    {
        eax = (t30 & 0xffff0000u) | (uint16_t)cow_fsw(g, d33, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t31;
        edx = t32;
        loc_4 = t30;
        x0 = d33;
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    g->ecx = ecx;
    g->edx = edx;
    fpush(g, x0);
    g->esp = sp0 - 0xcu;
    t34 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t35 = g->ecx;
    t36 = g->edx;
    g->edx = t36;
    cow_call_regs(g, COW_IMG(0x10193830u), t34, g->ecx, g->edx, 1, 2, 0x3eu, t34);
    t37 = g->edx;
    g->edx = t37;
    return arg3;
L_10080a7a: ;
    if (rd32(COW_IMG(0x1047d490u)) != 3u) goto L_10080c45;
    t25 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    esi = t25;
    edi = COW_IMG(0x10357d7cu);
    ecx = 3u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        eax = t25;
        goto L_10080ab5;
    }
    eax = t25;
    g->edx = 0u;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0x3fu, 0u);
    t26 = g->edx;
    g->edx = t26;
    return arg3;
L_10080ab5: ;
    esi = eax;
    edi = COW_IMG(0x1034f488u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        eax = 0u;
        edx = 0u;
        goto L_10080c45;
    }
    g->edx = 0u;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10193830u), 0u, g->ecx, g->edx, 1, 2, 0x3fu, 1u);
    t27 = g->edx;
    g->edx = t27;
    return arg3;
L_10080adf: ;
    if (rd32(COW_IMG(0x1047d490u)) != 3u)
    {
        eax = rd32(COW_IMG(0x1047d490u));
        goto L_10080b67;
    }
    t15 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    esi = t15;
    edi = COW_IMG(0x10357d7cu);
    ecx = 3u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        eax = t15;
        goto L_10080b2b;
    }
    eax = t15;
    edx = 0u;
L_10080b04: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0xa5u, 1u);
    t23 = g->edx;
    g->edx = t23;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0xffu);
    t24 = g->edx;
    g->edx = t24;
    return arg3;
L_10080b2b: ;
    esi = eax;
    edi = COW_IMG(0x1034f488u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        eax = 0u;
        edx = 0u;
        goto L_10080c45;
    }
    g->edx = 0u;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10193830u), 0u, g->ecx, g->edx, 1, 2, 0xa5u, 0u);
    t16 = g->edx;
    g->edx = t16;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x100u);
    t17 = g->edx;
    g->edx = t17;
    return arg3;
L_10080b67: ;
    if (eax != 2u) goto L_10080c45;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t18 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xa5u);
    t19 = g->ecx;
    t20 = g->edx;
    if (t18 == 0u)
    {
        eax = t18;
        ecx = t19;
        edx = t20;
        goto L_10080b04;
    }
    eax = t18;
    ecx = t19;
    edx = t20;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0xa5u, 0u);
    t21 = g->edx;
    g->edx = t21;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x100u);
    t22 = g->edx;
    g->edx = t22;
    return arg3;
L_10080ba8: ;
    if (rd32(COW_IMG(0x1047d490u)) != 3u)
    {
        eax = rd32(COW_IMG(0x1047d490u));
        goto L_10080c2d;
    }
    t7 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    esi = t7;
    edi = COW_IMG(0x10357d7cu);
    ecx = 3u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        eax = t7;
        goto L_10080bf4;
    }
    eax = t7;
    edx = 0u;
L_10080bcd: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0xc8u, 1u);
    t13 = g->edx;
    g->edx = t13;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x145u);
    t14 = g->edx;
    g->edx = t14;
    return arg3;
L_10080bf4: ;
    esi = eax;
    edi = COW_IMG(0x1034f488u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        eax = 0u;
        edx = 0u;
        goto L_10080c45;
    }
    eax = 0u;
    edx = 0u;
L_10080c06: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0xc8u, 0u);
    t11 = g->edx;
    g->edx = t11;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x146u);
    t12 = g->edx;
    g->edx = t12;
    return arg3;
L_10080c2d: ;
    if (eax != 2u) goto L_10080c45;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xc8u);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        goto L_10080bcd;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    goto L_10080c06;
L_10080c45: ;
    g->edx = edx;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100808e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100808e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
