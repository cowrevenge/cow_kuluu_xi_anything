/* f_0x102a5450 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102a5450(Guest* g)
{
    double d10;
    double d11;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d21;
    double d22;
    double d23;
    double d24;
    double d26;
    double d27;
    double d28;
    double d31;
    double d34;
    double d35;
    double d40;
    double d41;
    double d42;
    double d43;
    double d44;
    double d45;
    double d48;
    double d49;
    double d5;
    double d51;
    double d52;
    double d53;
    double d54;
    double d58;
    double d59;
    double d6;
    double d60;
    double d61;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_10_f;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_4;
    double loc_4_f;
    double loc_8_f;
    double loc_c_f;
    uint32_t t1;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t20;
    uint32_t t25;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t32;
    uint32_t t33;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t46;
    uint32_t t47;
    uint32_t t50;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t7;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    t1 = rd32(rd32(sp0 + 4u) + 0x54u);
    wr32(sp0 - 4u, t1);
    if ((int32_t)rd32(rd32(sp0 + 4u) + 0x54u) <= 0) goto L_102a59c1;
    eax = t1;
    ecx = rd32(sp0 + 4u);
    loc_4 = t1;
    if (eax != 1u)
    {
        eax = rd32(rd32(ecx + 0x64u) + 8u);
        esi = rd32(ecx + 0x64u);
        goto L_102a54bd;
    }
    eax = rd32(rd32(ecx + 0x64u) + 8u);
    esi = rd32(ecx + 0x64u);
    if (eax == 3u) goto L_102a547f;
    if (eax != 4u)
    {
        edx = in_edx;
        goto L_102a5492;
    }
L_102a547f: ;
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0x3f800000u);
    wr32(sp0 - 0x2cu, esi + 0x20u);
    g->eax = esi + 0x20u;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t2 = cow_cdecl(g, COW_IMG(0x10274440u), 3, esi + 0x20u, 0x3f800000u, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
L_102a5492: ;
    if (rd32(esi + 8u) == 3u) goto L_102a54a2;
    if (rd32(esi + 0x14u) != 4u) goto L_102a59c1;
L_102a54a2: ;
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0x3f800000u);
    wr32(sp0 - 0x2cu, esi + 0x28u);
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10274440u), 3, esi + 0x28u, 0x3f800000u, 0u);
    return;
L_102a54bd: ;
    d5 = (double)(float)fr(g, (double)rdf32(esi + 0x30u) - (double)rdf32(esi));
    wrf32(sp0 - 8u, (float)d5);
    d6 = (double)(float)fr(g, (double)rdf32(esi + 0x34u) - (double)rdf32(esi + 4u));
    wrf32(sp0 - 0x10u, (float)d6);
    if (eax - 1u > 7u)
    {
        edx = in_edx;
        ebx = cow_f2bits(d5);
        ebp = cow_f2bits(d6);
        edi = esi + 0x30u;
        loc_8_f = d5;
        loc_10_f = d6;
        goto L_102a558c;
    }
    eax = eax - 1u;
    ebx = cow_f2bits(d5);
    ebp = cow_f2bits(d6);
    edi = esi + 0x30u;
    loc_8_f = d5;
    loc_10_f = d6;
    t7 = rd32(COW_IMG(0x102a59ccu) + eax * 4u);
    switch (t7 - RD)
    {
    case 0x102a54ecu: goto L_102a54ec;
    case 0x102a54fcu: goto L_102a54fc;
    case 0x102a5544u: goto L_102a5544;
    case 0x102a554cu: goto L_102a554c;
    case 0x102a5550u: goto L_102a5550;
    case 0x102a558cu: edx = in_edx; goto L_102a558c;
    default: rt_fatal(g, COW_IMG(0x102a54e5u), "switch");
    }
    return;
L_102a54ec: ;
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0x3f800000u);
    wr32(sp0 - 0x2cu, esi + 0x20u);
    ecx = esi + 0x20u;
    edx = in_edx;
    loc_28 = 0x3f800000u;
    loc_2c = esi + 0x20u;
L_102a5584: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10274440u), 3, loc_2c, loc_28, rd32(sp0 - 0x24u));
    t12 = g->ecx;
    t13 = g->edx;
    ecx = t12;
    edx = t13;
L_102a558c: ;
    if (rd32(esi + 0x14u) - 1u > 7u) goto L_102a5630;
    eax = rd32(esi + 0x14u) - 1u;
    t14 = rd32(COW_IMG(0x102a59ecu) + eax * 4u);
    switch (t14 - RD)
    {
    case 0x102a55a0u: goto L_102a55a0;
    case 0x102a55e8u: goto L_102a55e8;
    case 0x102a55f0u: goto L_102a55f0;
    case 0x102a55f4u: goto L_102a55f4;
    case 0x102a5630u: goto L_102a5630;
    default: rt_fatal(g, COW_IMG(0x102a5599u), "switch");
    }
    return;
L_102a54fc: ;
    if (rd8(rd32(sp0 + 4u) + 0x30u) != 0u)
    {
        edx = rd32(sp0 + 4u);
        goto L_102a558c;
    }
    eax = (eax & 0xffffff00u) | rd8(rd32(sp0 + 4u) + 0x30u);
    edx = rd32(sp0 + 4u);
    d9 = (double)rdf32(esi + 0x18u);
    if (!(d9 < rdf64(COW_IMG(0x10340b78u))))
    {
        x0 = d9;
        wr32(sp0 - 0x24u, ecx);
        d11 = (double)(float)fr(g, fr(g, (double)rdf32(esi + 0x1cu) / x0) * loc_8_f);
        wrf32(sp0 - 0x24u, (float)d11);
        wr32(sp0 - 0x28u, ebx);
        wr32(sp0 - 0x2cu, esi + 0x28u);
        eax = esi + 0x28u;
        loc_28 = ebx;
        loc_2c = esi + 0x28u;
    }
    else
    {
        x0 = d9;
        wr32(sp0 - 0x24u, ecx);
        d10 = (double)(float)fr(g, rdf64(COW_IMG(0x10340ba0u)) * loc_8_f);
        wrf32(sp0 - 0x24u, (float)d10);
        wr32(sp0 - 0x28u, ebx);
        wr32(sp0 - 0x2cu, esi + 0x28u);
        eax = esi + 0x28u;
        loc_28 = ebx;
        loc_2c = esi + 0x28u;
    }
    goto L_102a5584;
L_102a5544: ;
    wr32(sp0 - 0x24u, ebp);
    wr32(sp0 - 0x28u, ebx);
    wr32(sp0 - 0x2cu, esi + 0x20u);
    ecx = esi + 0x20u;
    edx = in_edx;
    loc_28 = ebx;
    loc_2c = esi + 0x20u;
    goto L_102a5584;
L_102a554c: ;
    wr32(sp0 - 0x24u, 0u);
    loc_24 = 0u;
L_102a557f: ;
    wr32(sp0 - 0x28u, ebx);
    wr32(sp0 - 0x2cu, esi + 0x20u);
    edx = esi + 0x20u;
    loc_28 = ebx;
    loc_2c = esi + 0x20u;
    goto L_102a5584;
L_102a5550: ;
    if (!(loc_10_f < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        x0 = loc_10_f;
    }
    else
    {
        x0 = loc_10_f;
        x0 = -x0;
    }
    d8 = (double)rdf32(rd32(sp0 + 4u) + 0x34u);
    if (!(x0 <= d8))
    {
        eax = (rd32(sp0 + 4u) & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d8, 0u);
        goto L_102a557e;
    }
    eax = (rd32(sp0 + 4u) & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d8, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, ebx);
    wr32(sp0 - 0x2cu, esi + 0x20u);
    ecx = esi + 0x20u;
    edx = in_edx;
    loc_28 = ebx;
    loc_2c = esi + 0x20u;
    goto L_102a5584;
L_102a557e: ;
    wr32(sp0 - 0x24u, ebp);
    loc_24 = ebp;
    goto L_102a557f;
L_102a55a0: ;
    if (rd8(rd32(sp0 + 4u) + 0x30u) != 0u) goto L_102a5630;
    eax = rd32(sp0 + 4u);
    ecx = (ecx & 0xffffff00u) | rd8(rd32(sp0 + 4u) + 0x30u);
    d16 = (double)rdf32(esi + 0x18u);
    if (!(d16 < rdf64(COW_IMG(0x10340b78u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, rdf64(COW_IMG(0x10340b78u)), 1u);
        x0 = d16;
        wr32(sp0 - 0x24u, ecx);
        d18 = (double)(float)fr(g, fr(g, (double)rdf32(esi + 0x1cu) / x0) * loc_8_f);
        wrf32(sp0 - 0x24u, (float)d18);
        wr32(sp0 - 0x28u, ebx);
        wr32(sp0 - 0x2cu, esi + 0x20u);
        ecx = esi + 0x20u;
        loc_28 = ebx;
        loc_2c = esi + 0x20u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, rdf64(COW_IMG(0x10340b78u)), 1u);
        x0 = d16;
        wr32(sp0 - 0x24u, ecx);
        d17 = (double)(float)fr(g, rdf64(COW_IMG(0x10340ba0u)) * loc_8_f);
        wrf32(sp0 - 0x24u, (float)d17);
        wr32(sp0 - 0x28u, ebx);
        wr32(sp0 - 0x2cu, esi + 0x20u);
        ecx = esi + 0x20u;
        loc_28 = ebx;
        loc_2c = esi + 0x20u;
    }
L_102a5628: ;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10274440u), 3, loc_2c, loc_28, rd32(sp0 - 0x24u));
L_102a5630: ;
    if ((int32_t)(loc_4 - 1u) <= 1)
    {
        ecx = esi;
        edx = loc_4;
        ebp = rd32(sp0 + 4u);
        esi = edi;
        goto L_102a586b;
    }
    eax = loc_4 - 1u;
    ecx = esi;
    edx = loc_4;
    ebp = rd32(sp0 + 4u);
    esi = edi;
    edi = edi + 0x30u;
    ebx = eax - 1u;
L_102a564e: ;
    d19 = fr(g, (double)rdf32(edi) - (double)rdf32(ecx));
    if (!(d19 < rdf64(COW_IMG(0x10340b78u))))
    {
        x0 = d19;
        x0 = fr(g, fr(g, (double)rdf32(edi + 4u) - (double)rdf32(ecx + 4u)) / x0);
    }
    else
    {
        x0 = d19;
        x0 = rdf64(COW_IMG(0x10340ba0u));
    }
    wrf32(sp0 - 4u, (float)(double)(float)x0);
    t20 = rd32(esi + 8u);
    d21 = fr(g, (double)rdf32(esi) - (double)rdf32(ecx));
    wrf32(sp0 + 4u, (float)d21);
    d22 = (double)(float)fr(g, (double)rdf32(esi + 4u) - (double)rdf32(ecx + 4u));
    wrf32(sp0 - 0xcu, (float)d22);
    d23 = (double)(float)fr(g, (double)rdf32(edi) - (double)rdf32(esi));
    wrf32(sp0 - 0x10u, (float)d23);
    d24 = (double)(float)fr(g, (double)rdf32(edi + 4u) - (double)rdf32(esi + 4u));
    wrf32(sp0 - 8u, (float)d24);
    if (t20 - 1u > 7u)
    {
        loc_4_f = (double)(float)x0;
        loc_8_f = d24;
        loc_10_f = d23;
        loc_c_f = d22;
        goto L_102a577f;
    }
    eax = t20 - 1u;
    loc_4_f = (double)(float)x0;
    loc_8_f = d24;
    loc_10_f = d23;
    loc_c_f = d22;
    t25 = rd32(COW_IMG(0x102a5a0cu) + eax * 4u);
    switch (t25 - RD)
    {
    case 0x102a56adu: goto L_102a56ad;
    case 0x102a56e8u: goto L_102a56e8;
    case 0x102a56f8u: goto L_102a56f8;
    case 0x102a5706u: goto L_102a5706;
    case 0x102a5713u: goto L_102a5713;
    case 0x102a577fu: goto L_102a577f;
    default: rt_fatal(g, COW_IMG(0x102a56a6u), "switch");
    }
    return;
L_102a55e8: ;
    wr32(sp0 - 0x24u, ebp);
    wr32(sp0 - 0x28u, ebx);
    wr32(sp0 - 0x2cu, esi + 0x28u);
    edx = esi + 0x28u;
    loc_28 = ebx;
    loc_2c = esi + 0x28u;
    goto L_102a5628;
L_102a55f0: ;
    wr32(sp0 - 0x24u, 0u);
    loc_24 = 0u;
L_102a5623: ;
    wr32(sp0 - 0x28u, ebx);
    wr32(sp0 - 0x2cu, esi + 0x28u);
    eax = esi + 0x28u;
    loc_28 = ebx;
    loc_2c = esi + 0x28u;
    goto L_102a5628;
L_102a55f4: ;
    if (!(loc_10_f < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_10_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = loc_10_f;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_10_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = loc_10_f;
        x0 = -x0;
    }
    d15 = (double)rdf32(rd32(sp0 + 4u) + 0x34u);
    if (!(x0 <= d15))
    {
        ecx = rd32(sp0 + 4u);
        goto L_102a5622;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d15, 0u);
    ecx = rd32(sp0 + 4u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, ebx);
    wr32(sp0 - 0x2cu, esi + 0x28u);
    edx = esi + 0x28u;
    loc_28 = ebx;
    loc_2c = esi + 0x28u;
    goto L_102a5628;
L_102a5622: ;
    wr32(sp0 - 0x24u, ebp);
    loc_24 = ebp;
    goto L_102a5623;
L_102a56ad: ;
    d34 = (double)rdf32(esi + 0xcu);
    if (!(d34 < rdf64(COW_IMG(0x10340b78u))))
    {
        x0 = d34;
        x0 = fr(g, (double)rdf32(esi + 0x10u) / x0);
    }
    else
    {
        x0 = d34;
        x0 = rdf64(COW_IMG(0x10340ba0u));
    }
    wrf32(sp0 - 4u, (float)(double)(float)x0);
    wr32(sp0 - 0x24u, ecx);
    d35 = (double)(float)fr(g, (double)rdf32(sp0 + 4u) * (double)(float)x0);
    wrf32(sp0 - 0x24u, (float)d35);
    t36 = rd32(sp0 + 4u);
    wr32(sp0 - 0x28u, t36);
    wr32(sp0 - 0x2cu, esi + 0x20u);
    eax = t36;
    ecx = esi + 0x20u;
    loc_4_f = (double)(float)x0;
    loc_28 = t36;
    loc_2c = esi + 0x20u;
L_102a5777: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10274440u), 3, loc_2c, loc_28, rd32(sp0 - 0x24u));
    t37 = g->ecx;
    t38 = g->edx;
    ecx = t37;
    edx = t38;
L_102a577f: ;
    if (rd32(esi + 0x14u) - 1u > 7u)
    {
        eax = rd32(esi + 0x14u) - 1u;
        goto L_102a585d;
    }
    eax = rd32(esi + 0x14u) - 1u;
    t39 = rd32(COW_IMG(0x102a5a2cu) + eax * 4u);
    switch (t39 - RD)
    {
    case 0x102a5793u: goto L_102a5793;
    case 0x102a57c6u: goto L_102a57c6;
    case 0x102a57d6u: goto L_102a57d6;
    case 0x102a57e4u: goto L_102a57e4;
    case 0x102a57f1u: goto L_102a57f1;
    case 0x102a585du: goto L_102a585d;
    default: rt_fatal(g, COW_IMG(0x102a578cu), "switch");
    }
    return;
L_102a56e8: ;
    wr32(sp0 - 0x24u, cow_f2bits(loc_c_f));
    t33 = rd32(sp0 + 4u);
    wr32(sp0 - 0x28u, t33);
    wr32(sp0 - 0x2cu, esi + 0x20u);
    eax = t33;
    ecx = esi + 0x20u;
    edx = cow_f2bits(loc_c_f);
    loc_28 = t33;
    loc_2c = esi + 0x20u;
    goto L_102a5777;
L_102a56f8: ;
    wr32(sp0 - 0x24u, ecx);
    d31 = (double)(float)fr(g, (double)rdf32(sp0 + 4u) * loc_4_f);
    wrf32(sp0 - 0x24u, (float)d31);
L_102a576e: ;
    t32 = rd32(sp0 + 4u);
    wr32(sp0 - 0x28u, t32);
    wr32(sp0 - 0x2cu, esi + 0x20u);
    eax = esi + 0x20u;
    edx = t32;
    loc_28 = t32;
    loc_2c = esi + 0x20u;
    goto L_102a5777;
L_102a5706: ;
    wr32(sp0 - 0x24u, 0u);
    t30 = rd32(sp0 + 4u);
    wr32(sp0 - 0x28u, t30);
    wr32(sp0 - 0x2cu, esi + 0x20u);
    ecx = t30;
    edx = esi + 0x20u;
    loc_28 = t30;
    loc_2c = esi + 0x20u;
    goto L_102a5777;
L_102a5713: ;
    if (!(loc_c_f < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_c_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = loc_c_f;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_c_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = loc_c_f;
        x0 = -x0;
    }
    d26 = (double)rdf32(ebp + 0x34u);
    if (x0 <= d26) goto L_102a576c;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d26, 0u);
    if (!(loc_8_f < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_8_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = loc_8_f;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_8_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = loc_8_f;
        x0 = -x0;
    }
    d27 = (double)rdf32(ebp + 0x34u);
    if (x0 <= d27) goto L_102a576c;
    wr32(sp0 - 0x24u, ecx);
    d28 = (double)(float)fr(g, (double)rdf32(sp0 + 4u) * loc_4_f);
    wrf32(sp0 - 0x24u, (float)d28);
    t29 = rd32(sp0 + 4u);
    wr32(sp0 - 0x28u, t29);
    wr32(sp0 - 0x2cu, esi + 0x20u);
    eax = t29;
    ecx = esi + 0x20u;
    loc_28 = t29;
    loc_2c = esi + 0x20u;
    goto L_102a5777;
L_102a576c: ;
    wr32(sp0 - 0x24u, 0u);
    goto L_102a576e;
L_102a5793: ;
    d44 = (double)rdf32(esi + 0x18u);
    if (!(d44 < rdf64(COW_IMG(0x10340b78u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d44, rdf64(COW_IMG(0x10340b78u)), 1u);
        x0 = d44;
        x0 = fr(g, (double)rdf32(esi + 0x1cu) / x0);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d44, rdf64(COW_IMG(0x10340b78u)), 1u);
        x0 = d44;
        x0 = rdf64(COW_IMG(0x10340ba0u));
    }
    wr32(sp0 - 0x24u, ecx);
    d45 = (double)(float)fr(g, x0 * loc_10_f);
    wrf32(sp0 - 0x24u, (float)d45);
    wr32(sp0 - 0x28u, cow_f2bits(loc_10_f));
    wr32(sp0 - 0x2cu, esi + 0x28u);
    ecx = cow_f2bits(loc_10_f);
    edx = esi + 0x28u;
    loc_28 = cow_f2bits(loc_10_f);
    loc_2c = esi + 0x28u;
L_102a5855: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t46 = cow_cdecl(g, COW_IMG(0x10274440u), 3, loc_2c, loc_28, rd32(sp0 - 0x24u));
    t47 = g->edx;
    eax = t46;
    edx = t47;
L_102a585d: ;
    if (ebx != 1u)
    {
        ecx = esi;
        ebx = ebx - 1u;
        esi = edi;
        edi = edi + 0x30u;
        goto L_102a564e;
    }
    ecx = esi;
    esi = edi;
L_102a586b: ;
    d48 = (double)(float)fr(g, (double)rdf32(esi) - (double)rdf32(ecx));
    wrf32(sp0 - 8u, (float)d48);
    d49 = (double)(float)fr(g, (double)rdf32(esi + 4u) - (double)rdf32(ecx + 4u));
    wrf32(sp0 - 0x10u, (float)d49);
    if (rd32(esi + 8u) - 1u > 7u)
    {
        ebx = cow_f2bits(d49);
        edi = cow_f2bits(d48);
        loc_8_f = d48;
        loc_10_f = d49;
        goto L_102a591a;
    }
    eax = rd32(esi + 8u) - 1u;
    ebx = cow_f2bits(d49);
    edi = cow_f2bits(d48);
    loc_8_f = d48;
    loc_10_f = d49;
    t50 = rd32(COW_IMG(0x102a5a4cu) + eax * 4u);
    switch (t50 - RD)
    {
    case 0x102a5899u: goto L_102a5899;
    case 0x102a58d9u: goto L_102a58d9;
    case 0x102a58e2u: goto L_102a58e2;
    case 0x102a590cu: goto L_102a590c;
    case 0x102a591au: goto L_102a591a;
    default: rt_fatal(g, COW_IMG(0x102a5892u), "switch");
    }
    return;
L_102a57c6: ;
    wr32(sp0 - 0x24u, cow_f2bits(loc_8_f));
    wr32(sp0 - 0x28u, cow_f2bits(loc_10_f));
    wr32(sp0 - 0x2cu, esi + 0x28u);
    eax = cow_f2bits(loc_8_f);
    ecx = cow_f2bits(loc_10_f);
    edx = esi + 0x28u;
    loc_28 = cow_f2bits(loc_10_f);
    loc_2c = esi + 0x28u;
    goto L_102a5855;
L_102a57d6: ;
    wr32(sp0 - 0x24u, ecx);
    d43 = (double)(float)fr(g, loc_10_f * loc_4_f);
    wrf32(sp0 - 0x24u, (float)d43);
L_102a584c: ;
    wr32(sp0 - 0x28u, cow_f2bits(loc_10_f));
    wr32(sp0 - 0x2cu, esi + 0x28u);
    eax = cow_f2bits(loc_10_f);
    ecx = esi + 0x28u;
    loc_28 = cow_f2bits(loc_10_f);
    loc_2c = esi + 0x28u;
    goto L_102a5855;
L_102a57e4: ;
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, cow_f2bits(loc_10_f));
    wr32(sp0 - 0x2cu, esi + 0x28u);
    eax = esi + 0x28u;
    edx = cow_f2bits(loc_10_f);
    loc_28 = cow_f2bits(loc_10_f);
    loc_2c = esi + 0x28u;
    goto L_102a5855;
L_102a57f1: ;
    if (!(loc_c_f < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_c_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = loc_c_f;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_c_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = loc_c_f;
        x0 = -x0;
    }
    d40 = (double)rdf32(ebp + 0x34u);
    if (x0 <= d40) goto L_102a584a;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d40, 0u);
    if (!(loc_8_f < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_8_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = loc_8_f;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_8_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = loc_8_f;
        x0 = -x0;
    }
    d41 = (double)rdf32(ebp + 0x34u);
    if (x0 <= d41) goto L_102a584a;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d41, 0u);
    wr32(sp0 - 0x24u, ecx);
    d42 = (double)(float)fr(g, loc_10_f * loc_4_f);
    wrf32(sp0 - 0x24u, (float)d42);
    wr32(sp0 - 0x28u, cow_f2bits(loc_10_f));
    wr32(sp0 - 0x2cu, esi + 0x28u);
    ecx = cow_f2bits(loc_10_f);
    edx = esi + 0x28u;
    loc_28 = cow_f2bits(loc_10_f);
    loc_2c = esi + 0x28u;
    goto L_102a5855;
L_102a584a: ;
    wr32(sp0 - 0x24u, 0u);
    goto L_102a584c;
L_102a5899: ;
    if (rd8(ebp + 0x30u) != 0u) goto L_102a591a;
    eax = (eax & 0xffffff00u) | rd8(ebp + 0x30u);
    d52 = (double)rdf32(esi + 0xcu);
    if (!(d52 < rdf64(COW_IMG(0x10340b78u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d52, rdf64(COW_IMG(0x10340b78u)), 1u);
        x0 = d52;
        wr32(sp0 - 0x24u, ecx);
        d54 = (double)(float)fr(g, fr(g, (double)rdf32(esi + 0x10u) / x0) * loc_8_f);
        wrf32(sp0 - 0x24u, (float)d54);
        wr32(sp0 - 0x28u, edi);
        wr32(sp0 - 0x2cu, esi + 0x20u);
        edx = esi + 0x20u;
        loc_28 = edi;
        loc_2c = esi + 0x20u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d52, rdf64(COW_IMG(0x10340b78u)), 1u);
        x0 = d52;
        wr32(sp0 - 0x24u, ecx);
        d53 = (double)(float)fr(g, rdf64(COW_IMG(0x10340ba0u)) * loc_8_f);
        wrf32(sp0 - 0x24u, (float)d53);
        wr32(sp0 - 0x28u, edi);
        wr32(sp0 - 0x2cu, esi + 0x20u);
        edx = esi + 0x20u;
        loc_28 = edi;
        loc_2c = esi + 0x20u;
    }
L_102a5912: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10274440u), 3, loc_2c, loc_28, rd32(sp0 - 0x24u));
    t55 = g->ecx;
    t56 = g->edx;
    ecx = t55;
    edx = t56;
L_102a591a: ;
    if (rd32(esi + 0x14u) - 1u > 7u) goto L_102a59c1;
    eax = rd32(esi + 0x14u) - 1u;
    t57 = rd32(COW_IMG(0x102a5a6cu) + eax * 4u);
    switch (t57 - RD)
    {
    case 0x102a54a2u: goto L_102a54a2;
    case 0x102a592eu: goto L_102a592e;
    case 0x102a598eu: goto L_102a598e;
    case 0x102a59afu: goto L_102a59af;
    case 0x102a59b3u: goto L_102a59b3;
    case 0x102a59c1u: goto L_102a59c1;
    default: rt_fatal(g, COW_IMG(0x102a5927u), "switch");
    }
    return;
L_102a58d9: ;
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, esi + 0x20u);
    ecx = esi + 0x20u;
    loc_28 = edi;
    loc_2c = esi + 0x20u;
    goto L_102a5912;
L_102a58e2: ;
    if (!(loc_10_f < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_10_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = loc_10_f;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_10_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = loc_10_f;
        x0 = -x0;
    }
    d51 = (double)rdf32(ebp + 0x34u);
    if (!(x0 <= d51)) goto L_102a590c;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d51, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, esi + 0x20u);
    edx = esi + 0x20u;
    loc_28 = edi;
    loc_2c = esi + 0x20u;
    goto L_102a5912;
L_102a590c: ;
    wr32(sp0 - 0x24u, ebx);
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, esi + 0x20u);
    eax = esi + 0x20u;
    loc_28 = edi;
    loc_2c = esi + 0x20u;
    goto L_102a5912;
L_102a592e: ;
    if (rd8(ebp + 0x30u) != 0u) goto L_102a59c1;
    eax = (eax & 0xffffff00u) | rd8(ebp + 0x30u);
    d59 = (double)rdf32(esi + 0xcu);
    if (!(d59 < rdf64(COW_IMG(0x10340b78u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d59, rdf64(COW_IMG(0x10340b78u)), 1u);
        x0 = d59;
        goto L_102a596e;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d59, rdf64(COW_IMG(0x10340b78u)), 1u);
    x0 = d59;
    wr32(sp0 - 0x24u, ecx);
    d60 = (double)(float)fr(g, rdf64(COW_IMG(0x10340ba0u)) * loc_8_f);
    wrf32(sp0 - 0x24u, (float)d60);
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, esi + 0x20u);
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10274440u), 3, esi + 0x20u, edi, cow_f2bits(d60));
    return;
L_102a596e: ;
    wr32(sp0 - 0x24u, ecx);
    d61 = (double)(float)fr(g, fr(g, (double)rdf32(esi + 0x10u) / x0) * loc_8_f);
    wrf32(sp0 - 0x24u, (float)d61);
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, esi + 0x20u);
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10274440u), 3, esi + 0x20u, edi, cow_f2bits(d61));
    return;
L_102a598e: ;
    if (!(loc_10_f < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_10_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = loc_10_f;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_10_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = loc_10_f;
        x0 = -x0;
    }
    d58 = (double)rdf32(ebp + 0x34u);
    if (!(x0 <= d58))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d58, 0u);
        goto L_102a59b3;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d58, 0u);
L_102a59af: ;
    wr32(sp0 - 0x24u, 0u);
    loc_24 = 0u;
L_102a59b4: ;
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, esi + 0x28u);
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10274440u), 3, esi + 0x28u, edi, loc_24);
L_102a59c1: ;
    return;
L_102a59b3: ;
    wr32(sp0 - 0x24u, ebx);
    loc_24 = ebx;
    goto L_102a59b4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a5450(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102a5450(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
