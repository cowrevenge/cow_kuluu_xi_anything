/* f_0x1007a1c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1007a1c0(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d23;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    t1 = (-((uint8_t)arg3 != 0u) & 0x200u) + 0x700u;
    wr32(sp0 - 0x1cu, t1);
    if (arg1 == 0u)
    {
        eax = t1;
        ecx = self;
        edx = in_edx;
        esi = 0u;
        loc_1c = t1;
        goto L_1007a3c6;
    }
    loc_1c = t1;
    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        edx = in_edx;
        loc_20 = in_ebx;
        loc_24 = in_ebp;
        loc_28 = in_esi;
        loc_2c = in_edi;
        goto L_1007a375;
    }
    eax = rd32(COW_IMG(0x1057876cu));
    esi = arg1;
    edi = COW_IMG(0x10357f64u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_1007a23a;
    g->edx = 0u;
    g->esp = sp0 - 0x2cu;
    t2 = cow_thiscall(g, COW_IMG(0x101598b0u), eax, 0);
    t3 = g->edx;
    if (t2 == 0u) goto L_1007a235;
    edx = t3;
    g->edx = edx;
    t4 = rd32(COW_IMG(0x1057876cu));
    g->esp = sp0 - 0x2cu;
    t5 = cow_thiscall(g, COW_IMG(0x101598b0u), t4, 0);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x30u, t5 + 0x74u);
    g->ecx = t6;
    g->edx = t7;
    cow_cdecl(g, COW_IMG(0x10077cf0u), 1, t5 + 0x74u);
    t8 = g->ecx;
    t9 = g->edx;
    ecx = t8;
    edx = t9;
    esi = t5 + 0x74u;
L_1007a36d: ;
    if (esi != 0u) goto L_1007a41e;
L_1007a375: ;
    wr32(sp0 - 0x30u, 0x17u);
    edi = sp0 - 0x18u;
    eax = 0u;
    ecx = 6u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x34u, arg1);
    wr32(sp0 - 0x38u, sp0 - 0x18u);
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t27 = cow_call_regs(g, COW_IMG(0x10312090u), sp0 - 0x18u, g->ecx, g->edx, 1, 3, sp0 - 0x18u, arg1, 0x17u);
    t28 = g->edx;
    wr32(sp0 - 0x3cu, sp0 - 0x18u);
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x10077c30u), t27, sp0 - 0x18u, g->edx, 1, 7, sp0 - 0x18u, sp0 - 0x18u, arg1, 0x17u, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t29 = g->ecx;
    wr32(sp0 - 0x40u, arg3);
    t30 = rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x44u, t30);
    wr32(sp0 - 0x48u, 0x400u);
    wr32(sp0 - 0x4cu, 0x18u);
    wr32(sp0 - 0x50u, sp0 - 0x18u);
    g->ecx = t29;
    g->edx = t30;
    g->esp = sp0 - 0x3cu;
    t31 = cow_cdecl(g, COW_IMG(0x1007a4c0u), 5, sp0 - 0x18u, 0x18u, 0x400u, t30, arg3);
    t32 = g->ecx;
    t33 = g->edx;
    if (t31 != 0u)
    {
        ecx = t32;
        edx = t33;
        esi = t31;
        goto L_1007a41e;
    }
    eax = t31;
    ecx = t32;
    edx = t33;
    esi = t31;
    if ((uint8_t)arg4 != 0u) goto L_1007a41e;
    eax = (eax & 0xffffff00u) | (uint8_t)arg4;
L_1007a3c6: ;
    if (rd8(COW_IMG(0x1047d3feu)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047d3feu));
        edi = 0u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047d3feu));
        wr32(sp0 - 0x30u, arg1);
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t34 = cow_call_regs(g, COW_IMG(0x10079a00u), eax, ecx, g->edx, 1, 5, arg1, in_edi, in_esi, in_ebp, in_ebx);
        t35 = g->ecx;
        t36 = g->edx;
        if (t34 == 0xffffffffu)
        {
            eax = t34;
            ecx = t35;
            edx = t36;
            edi = 0u;
        }
        else
        {
            eax = t34;
            ecx = t35;
            edx = t36;
            edi = eax;
        }
    }
    if ((uint8_t)arg2 == 0u) goto L_1007a403;
    eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    if (edi != 0u) goto L_1007a407;
    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        ecx = rd32(COW_IMG(0x1057876cu));
        loc_20 = in_ebx;
        loc_24 = in_ebp;
        loc_28 = in_esi;
        loc_2c = in_edi;
        goto L_1007a41e;
    }
    ecx = rd32(COW_IMG(0x1057876cu));
    g->esp = sp0 - 0x2cu;
    t37 = cow_call_regs(g, COW_IMG(0x101597f0u), eax, ecx, edx, 1, 0);
    t38 = g->ecx;
    t39 = g->edx;
    if (t37 == 0u)
    {
        ecx = t38;
        edx = t39;
        loc_20 = in_ebx;
        loc_24 = in_ebp;
        loc_28 = in_esi;
        loc_2c = in_edi;
        goto L_1007a41e;
    }
    eax = t37;
    ecx = t38;
    edx = t39;
    edi = rd32(eax + 4u);
L_1007a403: ;
    if (edi == 0u)
    {
        loc_20 = in_ebx;
        loc_24 = in_ebp;
        loc_28 = in_esi;
        loc_2c = in_edi;
        goto L_1007a41e;
    }
L_1007a407: ;
    wr32(sp0 - 0x30u, edi);
    wr32(sp0 - 0x34u, 0x900u);
    wr32(sp0 - 0x38u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t40 = cow_thiscall_cdecl(g, COW_IMG(0x1007a440u), ecx, 9, 0u, 0x900u, edi, in_edi, in_esi, in_ebp, in_ebx, loc_1c, rd32(sp0 - 0x18u));
    t41 = g->ecx;
    t42 = g->edx;
    if (t40 == 0u)
    {
        ecx = t41;
        edx = t42;
        loc_20 = in_ebx;
        loc_24 = in_ebp;
        loc_28 = in_esi;
        loc_2c = in_edi;
    }
    else
    {
        eax = t40;
        ecx = t41;
        edx = t42;
        esi = eax + 0x74u;
    }
L_1007a41e: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t43 = cow_stdcall(g, COW_IMG(0x10077d40u), 0);
    t44 = g->ecx;
    t45 = g->edx;
    if (t43 != 0u)
    {
        edx = t45;
    }
    else
    {
        eax = t43;
        ecx = t44;
        edx = t45;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        cow_stdcall(g, COW_IMG(0x10077d70u), 0);
        t46 = g->edx;
        edx = t46;
    }
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 0x24u);
    g->edx = edx;
    return esi;
L_1007a235: ;
    eax = rd32(COW_IMG(0x1057876cu));
L_1007a23a: ;
    esi = arg1;
    edi = COW_IMG(0x10357e7cu);
    ecx = 9u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_1007a27e;
    if (rd32(eax + 0xc0u) != (uint32_t)((int32_t)eax >> 3u) + rd32(eax + 0xb8u) * 3u + rd32(eax + 0xbcu) * 2u)
    {
        edx = (uint32_t)((int32_t)eax >> 3u) + rd32(eax + 0xb8u) * 3u + rd32(eax + 0xbcu) * 2u;
        loc_20 = in_ebx;
        loc_24 = in_ebp;
        loc_28 = in_esi;
        loc_2c = in_edi;
        goto L_1007a375;
    }
    ecx = rd32(eax + 0xc0u);
    edx = (uint32_t)((int32_t)eax >> 3u) + rd32(eax + 0xb8u) * 3u + rd32(eax + 0xbcu) * 2u;
    esi = eax + 0xb8u;
    loc_20 = in_ebx;
    loc_24 = in_ebp;
    loc_28 = in_esi;
    loc_2c = in_edi;
    goto L_1007a36d;
L_1007a27e: ;
    esi = arg1;
    edi = COW_IMG(0x10357f5cu);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_1007a29c;
    g->ecx = ecx;
    g->edx = 0u;
    g->esp = sp0 - 0x2cu;
    t10 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    t11 = g->ecx;
    t12 = g->edx;
    ecx = t11;
    edx = t12;
    esi = t10;
    loc_20 = in_ebx;
    loc_24 = in_ebp;
    loc_28 = in_esi;
    loc_2c = in_edi;
    goto L_1007a36d;
L_1007a29c: ;
    esi = arg1;
    edi = COW_IMG(0x10357ec0u);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_1007a2b8;
    g->ecx = ecx;
    g->edx = 0u;
    g->esp = sp0 - 0x2cu;
    t13 = cow_call_regs(g, COW_IMG(0x10077d80u), 0u, g->ecx, g->edx, 1, 0);
    t14 = g->ecx;
    t15 = g->edx;
    eax = t13;
    ecx = t14;
    edx = t15;
L_1007a366: ;
    zf = eax == 0u;
L_1007a368: ;
    if (zf) goto L_1007a375;
    esi = eax + 0x74u;
    goto L_1007a36d;
L_1007a2b8: ;
    esi = arg1;
    edi = COW_IMG(0x10357eb8u);
    ecx = 6u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_1007a2d4;
    g->ecx = ecx;
    g->edx = 0u;
    g->esp = sp0 - 0x2cu;
    t16 = cow_call_regs(g, COW_IMG(0x101cc510u), 0u, g->ecx, g->edx, 1, 0);
    t17 = g->ecx;
    t18 = g->edx;
    eax = t16;
    ecx = t17;
    edx = t18;
    goto L_1007a366;
L_1007a2d4: ;
    esi = arg1;
    edi = COW_IMG(0x10357e90u);
    ecx = 7u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_1007a316;
    g->edx = 0u;
    g->esp = sp0 - 0x2cu;
    t19 = cow_thiscall(g, COW_IMG(0x100f94d0u), ecx, 0);
    t20 = g->edx;
    if (t19 == 0u)
    {
        edx = t20;
        loc_20 = in_ebx;
        loc_24 = in_ebp;
        loc_28 = in_esi;
        loc_2c = in_edi;
        goto L_1007a375;
    }
    eax = t19;
    edx = t20;
    if (rd32(eax) != 1u) goto L_1007a375;
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(eax + 0x10u) * 4u) == 0u) goto L_1007a375;
    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(eax + 0x10u) * 4u);
    ecx = rd32(eax + 0xa0u);
    zf = rd32(eax + 0xa0u) == 0u;
    goto L_1007a368;
L_1007a316: ;
    esi = arg1;
    edi = COW_IMG(0x10357e88u);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_1007a34f;
    wr32(sp0 - 0x30u, sp0 + 0xcu);
    wr32(sp0 - 0x34u, 0u);
    g->edx = 0u;
    g->esp = sp0 - 0x2cu;
    t21 = cow_stdcall(g, COW_IMG(0x1021f030u), 2, 0u, sp0 + 0xcu);
    t22 = g->edx;
    d23 = cow_take_float(g);
    if (d23 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        edx = t22;
        loc_20 = in_ebx;
        loc_24 = in_ebp;
        loc_28 = in_esi;
        loc_2c = in_edi;
        goto L_1007a375;
    }
    edx = t22;
    ecx = arg3;
    esi = arg3 + 0x74u;
    goto L_1007a36d;
L_1007a34f: ;
    esi = arg1;
    edi = COW_IMG(0x10357e14u);
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
        edx = 0u;
        loc_20 = in_ebx;
        loc_24 = in_ebp;
        loc_28 = in_esi;
        loc_2c = in_edi;
        goto L_1007a375;
    }
    g->ecx = ecx;
    g->edx = 0u;
    g->esp = sp0 - 0x2cu;
    t24 = cow_call_regs(g, COW_IMG(0x101cc550u), 0u, g->ecx, g->edx, 1, 0);
    t25 = g->ecx;
    t26 = g->edx;
    eax = t24;
    ecx = t25;
    edx = t26;
    goto L_1007a366;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007a1c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007a1c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
