/* f_0x102a4c30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102a4c30(Guest* g)
{
    double d13;
    double d14;
    double d17;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d26;
    double d27;
    double d28;
    double d29;
    double d3;
    double d31;
    double d33;
    double d37;
    double d38;
    double d39;
    double d4;
    double d43;
    double d44;
    double d45;
    double d49;
    double d50;
    double d51;
    double d54;
    double d6;
    double d61;
    double d62;
    double d7;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_10_f;
    uint32_t loc_18;
    double loc_4_f;
    double loc_8_f;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t30;
    uint32_t t32;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t52;
    uint32_t t53;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t60;
    uint32_t t8;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x14u, 0u);
    if (rd32(rd32(sp0 + 4u) + 0x54u) != 0u)
    {
        ebp = rd32(rd32(sp0 + 4u) + 0x54u);
        esi = rd32(sp0 + 4u);
        edi = rd32(rd32(sp0 + 4u) + 0x64u);
        goto L_102a4c57;
    }
    return 0u;
L_102a4c57: ;
    if (ebp != 1u) goto L_102a4c6c;
    t1 = rd32(edi + 4u);
    wr32(esi + 0x70u, t1);
    return esi + 0x70u;
L_102a4c6c: ;
    wr32(sp0 - 0x18u, rd32(edi));
    wr32(sp0 - 8u, 0u);
    t2 = rd32(ebp * 0x30u + edi - 0x30u);
    wr32(sp0 - 0xcu, t2);
    d3 = (double)(float)fr(g, cow_bits2f(t2) - cow_bits2f(rd32(edi)));
    wrf32(sp0 - 0x10u, (float)d3);
    d4 = (double)(float)fr(g, (double)rdf32(sp0 + 8u) - cow_bits2f(rd32(edi)));
    wrf32(sp0 - 4u, (float)d4);
    t5 = rd32(edi);
    d6 = fr(g, fr(g, (double)rdf32(sp0 + 8u) - cow_bits2f(rd32(edi))) / d3);
    wrf32(sp0 + 4u, (float)d6);
    d7 = (double)rdf32(sp0 + 8u);
    if (!(d7 < cow_bits2f(t5)))
    {
        eax = (ebp * 0x30u & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, cow_bits2f(t5), 0u);
        ecx = t2;
        edx = t5;
        ebx = ebp * 0x30u + edi;
        loc_18 = t5;
        loc_c = t2;
        loc_10_f = d3;
        goto L_102a4dd4;
    }
    ecx = t2;
    edx = t5;
    ebx = ebp * 0x30u + edi;
    loc_18 = t5;
    loc_c = t2;
    loc_10_f = d3;
    loc_4_f = d4;
    if (rd32(esi + 0x28u) > 5u)
    {
        eax = rd32(esi + 0x28u);
        goto L_102a4ed4;
    }
    eax = rd32(esi + 0x28u);
    t8 = rd32(COW_IMG(0x102a4f30u) + eax * 4u);
    switch (t8 - RD)
    {
    case 0x102a4cd2u: goto L_102a4cd2;
    case 0x102a4ce2u: goto L_102a4ce2;
    case 0x102a4d25u: goto L_102a4d25;
    case 0x102a4d51u: goto L_102a4d51;
    case 0x102a4daau: goto L_102a4daa;
    case 0x102a4ed4u: goto L_102a4ed4;
    default: rt_fatal(g, COW_IMG(0x102a4ccbu), "switch");
    }
    return 0;
L_102a4cd2: ;
    t30 = rd32(edi + 4u);
    wr32(esi + 0x70u, t30);
    return esi + 0x70u;
L_102a4ce2: ;
    d27 = (double)rdf32(edi + 0x20u);
    if (!(d27 < rdf64(COW_IMG(0x10340b78u))))
    {
        x0 = d27;
        goto L_102a4d0e;
    }
    x0 = d27;
    d28 = fr(g, fr(g, rdf64(COW_IMG(0x10340ba0u)) * loc_4_f) + (double)rdf32(edi + 4u));
    wrf32(esi + 0x70u, (float)d28);
    return esi + 0x70u;
L_102a4d0e: ;
    d29 = fr(g, fr(g, fr(g, (double)rdf32(edi + 0x24u) / x0) * loc_4_f) + (double)rdf32(edi + 4u));
    wrf32(esi + 0x70u, (float)d29);
    return esi + 0x70u;
L_102a4d25: ;
    g->ecx = ecx;
    g->edx = edx;
    d21 = (double)rdf32(sp0 + 4u);
    d22 = fr(g, (double)rdf32(sp0 + 4u) + (double)rdf32(COW_IMG(0x1032961cu)));
    fpush(g, d21);
    g->esp = sp0 - 0x28u;
    t23 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp0 + 8u, t23);
    d26 = (double)(float)fr(g, fr(g, fr(g, d22 - (double)(int32_t)rd32(sp0 + 8u)) * (double)rdf32(sp0 - 0x10u)) + (double)rdf32(sp0 - 0x18u));
    wrf32(sp0 - 0x14u, (float)d26);
    eax = t23;
    ecx = t24;
    edx = t25;
L_102a4ed4: ;
    d54 = (double)rdf32(sp0 - 0x14u);
    if (d54 != cow_bits2f(loc_c))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d54, cow_bits2f(loc_c), 0u);
        goto L_102a4efb;
    }
    t55 = rd32(ebp * 0x30u + edi - 0x2cu);
    wr32(esi + 0x70u, t55);
    return esi + 0x70u;
L_102a4d51: ;
    g->edx = edx;
    d14 = (double)rdf32(sp0 + 4u);
    fpush(g, d14);
    g->esp = sp0 - 0x28u;
    t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t16 = g->edx;
    d17 = fr(g, (double)rdf32(ebx - 0x2cu) - (double)rdf32(edi + 4u));
    wr32(sp0 + 8u, t15);
    d18 = (double)(int32_t)rd32(sp0 + 8u);
    d19 = (double)rdf32(sp0 + 4u);
    if (d18 != d19)
    {
        eax = (t15 & 0xffff0000u) | (uint16_t)cow_fsw(g, d18, d19, 1u);
        ecx = t15;
        edx = t16;
        x0 = d17;
    }
    else
    {
        eax = (t15 & 0xffff0000u) | (uint16_t)cow_fsw(g, d18, d19, 1u);
        ecx = t15;
        edx = t16;
        x0 = d17;
        wr32(sp0 + 8u, ecx + 1u);
        ecx = ecx + 1u;
    }
    wr32(sp0 - 4u, ecx - 1u);
    d20 = (double)(float)fr(g, (double)(int32_t)(ecx - 1u) * x0);
    wrf32(sp0 - 8u, (float)d20);
    ecx = ecx - 1u;
    loc_8_f = d20;
L_102a4d8b: ;
    x0 = fr(g, fr(g, (double)rdf32(sp0 + 4u) + (double)rdf32(COW_IMG(0x1032961cu))) - (double)(int32_t)rd32(sp0 + 8u));
L_102a4d99: ;
    d38 = (double)(float)fr(g, fr(g, x0 * (double)rdf32(sp0 - 0x10u)) + (double)rdf32(sp0 - 0x18u));
    wrf32(sp0 - 0x14u, (float)d38);
    goto L_102a4ed4;
L_102a4daa: ;
    g->ecx = ecx;
    g->edx = edx;
    d9 = (double)rdf32(sp0 + 4u);
    fpush(g, d9);
    g->esp = sp0 - 0x28u;
    t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 + 8u, t10);
    if (t10 & 1u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        loc_8_f = cow_bits2f(0u);
        goto L_102a4d8b;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    d13 = (double)(float)fr(g, fr(g, fr(g, (double)(int32_t)rd32(sp0 + 8u) - (double)rdf32(sp0 + 4u)) * (double)rdf32(sp0 - 0x10u)) + (double)rdf32(sp0 - 0x18u));
    wrf32(sp0 - 0x14u, (float)d13);
    goto L_102a4ed4;
L_102a4dd4: ;
    d31 = (double)rdf32(sp0 + 8u);
    if ((cow_fsw(g, d31, cow_bits2f(loc_c), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d31, cow_bits2f(loc_c), 0u) & 0x4100u;
        goto L_102a4ecc;
    }
    if (rd32(esi + 0x2cu) > 5u)
    {
        eax = rd32(esi + 0x2cu);
        goto L_102a4ed4;
    }
    eax = rd32(esi + 0x2cu);
    t32 = rd32(COW_IMG(0x102a4f48u) + eax * 4u);
    switch (t32 - RD)
    {
    case 0x102a4dfcu: goto L_102a4dfc;
    case 0x102a4e0cu: goto L_102a4e0c;
    case 0x102a4e45u: goto L_102a4e45;
    case 0x102a4e68u: goto L_102a4e68;
    case 0x102a4e9bu: goto L_102a4e9b;
    case 0x102a4ed4u: goto L_102a4ed4;
    default: rt_fatal(g, COW_IMG(0x102a4df5u), "switch");
    }
    return 0;
L_102a4dfc: ;
    t52 = rd32(ebx - 0x2cu);
    wr32(esi + 0x70u, t52);
    return esi + 0x70u;
L_102a4e0c: ;
    d50 = (double)rdf32(ebx - 8u);
    if (!(d50 < rdf64(COW_IMG(0x10340b78u))))
    {
        x0 = d50;
        x0 = fr(g, (double)rdf32(ebx - 4u) / x0);
    }
    else
    {
        x0 = d50;
        x0 = rdf64(COW_IMG(0x10340ba0u));
    }
    d51 = fr(g, fr(g, fr(g, (double)rdf32(sp0 + 8u) - cow_bits2f(loc_c)) * x0) + (double)rdf32(ebx - 0x2cu));
    wrf32(esi + 0x70u, (float)d51);
    return esi + 0x70u;
L_102a4e45: ;
    g->ecx = ecx;
    g->edx = edx;
    d45 = (double)rdf32(sp0 + 4u);
    fpush(g, d45);
    g->esp = sp0 - 0x28u;
    t46 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t47 = g->ecx;
    t48 = g->edx;
    wr32(sp0 + 8u, t46);
    d49 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(sp0 + 4u) - (double)(int32_t)rd32(sp0 + 8u)) * (double)rdf32(sp0 - 0x10u)) + (double)rdf32(sp0 - 0x18u));
    wrf32(sp0 - 0x14u, (float)d49);
    eax = t46;
    ecx = t47;
    edx = t48;
    goto L_102a4ed4;
L_102a4e68: ;
    g->ecx = ecx;
    g->edx = edx;
    d39 = (double)rdf32(sp0 + 4u);
    fpush(g, d39);
    g->esp = sp0 - 0x28u;
    t40 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t41 = g->ecx;
    t42 = g->edx;
    wr32(sp0 + 8u, t40);
    d43 = (double)(float)fr(g, fr(g, (double)rdf32(ebx - 0x2cu) - (double)rdf32(edi + 4u)) * (double)(int32_t)rd32(sp0 + 8u));
    wrf32(sp0 - 8u, (float)d43);
    d44 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(sp0 + 4u) - (double)(int32_t)rd32(sp0 + 8u)) * (double)rdf32(sp0 - 0x10u)) + (double)rdf32(sp0 - 0x18u));
    wrf32(sp0 - 0x14u, (float)d44);
    eax = t40;
    ecx = t41;
    edx = t42;
    goto L_102a4ed4;
L_102a4e9b: ;
    g->ecx = ecx;
    g->edx = edx;
    d33 = (double)rdf32(sp0 + 4u);
    fpush(g, d33);
    g->esp = sp0 - 0x28u;
    t34 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t35 = g->ecx;
    t36 = g->edx;
    wr32(sp0 + 8u, t34);
    if (!(t34 & 1u))
    {
        eax = t34;
        ecx = t35;
        edx = t36;
        loc_8_f = cow_bits2f(0u);
        x0 = fr(g, (double)rdf32(sp0 + 4u) - (double)(int32_t)rd32(sp0 + 8u));
        goto L_102a4d99;
    }
    eax = t34;
    ecx = t35;
    edx = t36;
    x0 = fr(g, (double)rdf32(sp0 + 4u) - (double)(int32_t)rd32(sp0 + 8u));
    d37 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - x0) * (double)rdf32(sp0 - 0x10u)) + (double)rdf32(sp0 - 0x18u));
    wrf32(sp0 - 0x14u, (float)d37);
    goto L_102a4ed4;
L_102a4ecc: ;
    t53 = rd32(sp0 + 8u);
    wr32(sp0 - 0x14u, t53);
    edx = t53;
    goto L_102a4ed4;
L_102a4efb: ;
    t56 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x2cu, t56);
    wr32(sp0 - 0x30u, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t57 = cow_cdecl(g, COW_IMG(0x102a5080u), 2, esi, t56);
    t58 = g->ecx;
    t59 = g->edx;
    wr32(sp0 - 0x34u, t56);
    t60 = edi + t57 * 0x30u;
    wr32(sp0 - 0x38u, t60);
    wr32(sp0 - 0x3cu, t60 - 0x30u);
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x102a4f60u), 3, t60 - 0x30u, t60, t56);
    d61 = cow_take_float(g);
    d62 = fr(g, d61 + (double)rdf32(sp0 - 8u));
    wrf32(esi + 0x70u, (float)d62);
    return esi + 0x70u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a4c30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a4c30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
