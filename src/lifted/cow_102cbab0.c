/* f_0x102cbab0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102cbab0(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d14;
    double d15;
    double d16;
    double d19;
    double d2;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d26;
    double d27;
    double d28;
    double d29;
    double d3;
    double d30;
    double d31;
    double d32;
    double d33;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t13;
    uint32_t t17;
    uint32_t t18;
    uint32_t t25;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t40;
    uint32_t t41;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 4148u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x102cu, in_esi);
    wr32(sp0 - 0x1030u, in_edi);
    d1 = (double)(float)(double)rdf32(COW_IMG(0x10345680u) + rd32(rd32(sp0 + 4u) + 0x2a48u) * 4u);
    wrf32(sp0 - 0x28u, (float)d1);
    d2 = (double)(float)(double)rdf32(COW_IMG(0x10345680u) + rd32(rd32(sp0 + 4u) + 0x2b14u) * 4u);
    wrf32(sp0 - 0x24u, (float)d2);
    wr32(sp0 - 0x10u, sp0 - 0x1018u);
    d3 = (double)(float)(double)rdf32(COW_IMG(0x10345680u) + rd32(rd32(sp0 + 4u) + 0x2be0u) * 4u);
    wrf32(sp0 - 0x20u, (float)d3);
    d4 = (double)(float)(double)rdf32(COW_IMG(0x10345680u) + rd32(rd32(sp0 + 4u) + 0x2cacu) * 4u);
    wrf32(sp0 - 0x1cu, (float)d4);
    wr32(sp0 - 0xcu, COW_IMG(0x103cc108u));
    eax = COW_IMG(0x103cc108u);
    esi = rd32(sp0 + 4u);
    edi = rd32(sp0 + 4u) + 0x2000u;
    loc_10 = sp0 - 0x1018u;
    loc_c = COW_IMG(0x103cc108u);
L_102cbb19: ;
    wr32(sp0 - 0x14u, loc_10);
    wr32(sp0 - 8u, 0u);
    ecx = esi - rd32(eax) * 0x10u + 0x17f0u;
    edx = esi + rd32(eax) * 0x10u + 0x1800u;
    eax = rd32(eax) << 4u;
    esi = 0u;
    loc_14 = loc_10;
    loc_8 = 0u;
L_102cbb47: ;
    d5 = fr(g, fr(g, fr(g, (double)rdf32(edx) * (double)rdf32(COW_IMG(0x103caca0u) + eax)) - (double)rdf32(ecx)) * (double)rdf32(COW_IMG(0x103caca4u) + eax));
    d6 = (double)rdf32(ecx);
    d7 = (double)rdf32(edx);
    d8 = fr(g, (double)rdf32(esi * 4u + sp0 - 0x28u) * (double)rdf32(edi));
    wrf32(edi, (float)d5);
    d9 = fr(g, fr(g, d7 + fr(g, d6 * (double)rdf32(COW_IMG(0x103caca0u) + eax))) * (double)rdf32(COW_IMG(0x103caca8u) + eax));
    d10 = (double)(float)fr(g, d9 + d8);
    wrf32(sp0 - 0x18u, (float)d10);
    d11 = fr(g, d10 + fr(g, fr(g, d9 - d8) * (double)rdf32(COW_IMG(0x103cacacu) + eax)));
    d12 = fr(g, fr(g, d9 - d8) * (double)rdf32(COW_IMG(0x103cacacu) + eax));
    wrf32(loc_14 - 0x10u, (float)d11);
    wrf32(loc_14, (float)d12);
    wr32(sp0 - 8u, loc_8 + 1u);
    wr32(sp0 - 0x14u, loc_14 + 4u);
    if ((int32_t)(loc_8 + 1u) < 4)
    {
        ecx = ecx + 4u;
        edx = edx + 4u;
        esi = loc_8 + 1u;
        edi = edi + 4u;
        loc_14 = loc_14 + 4u;
        loc_8 = loc_8 + 1u;
        goto L_102cbb47;
    }
    edi = edi + 4u;
    wr32(sp0 - 0xcu, loc_c + 4u);
    wr32(sp0 - 0x10u, loc_10 + 0x20u);
    if ((int32_t)(loc_c + 4u) < (int32_t)COW_IMG(0x103cc308u))
    {
        eax = loc_c + 4u;
        esi = rd32(sp0 + 4u);
        loc_10 = loc_10 + 0x20u;
        loc_c = loc_c + 4u;
        goto L_102cbb19;
    }
    esi = rd32(sp0 + 4u);
    edi = esi + 0x1000u;
    ecx = 0x400u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = COW_IMG(0x103cb4a0u);
    esi = sp0 - 0x1008u;
L_102cbbe7: ;
    eax = esi;
    edx = 4u;
    x0 = (double)rdf32(ecx);
L_102cbbf0: ;
    t13 = rd32(eax + 0x10u);
    wr32(sp0 - 0xcu, t13);
    d14 = (double)rdf32(eax - 0x10u);
    d15 = (double)rdf32(eax);
    d16 = (double)rdf32(eax - 0x20u);
    wrf32(eax + 0x10u, (float)fr(g, fr(g, d14 - cow_bits2f(t13)) * x0));
    wrf32(eax - 0x20u, (float)fr(g, fr(g, fr(g, fr(g, d14 - cow_bits2f(t13)) * x0) + d15) + d16));
    wrf32(eax, (float)fr(g, fr(g, d16 - d15) * x0));
    wrf32(eax - 0x10u, (float)fr(g, fr(g, fr(g, fr(g, d16 - d15) * x0) + cow_bits2f(t13)) + d14));
    if (edx != 1u)
    {
        eax = eax + 4u;
        edx = edx - 1u;
        goto L_102cbbf0;
    }
    if ((int32_t)(ecx + 8u) < (int32_t)COW_IMG(0x103cb6a0u))
    {
        ecx = ecx + 8u;
        esi = esi + 0x40u;
        goto L_102cbbe7;
    }
    wr32(sp0 - 8u, 4u);
    edi = 4u;
    loc_8 = 4u;
L_102cbc4b: ;
    t17 = (uint32_t)((int32_t)(edi - (uint32_t)((int32_t)edi >> 0x1fu)) >> 1u) - 0x80u;
    wr32(sp0 - 0x10u, t17);
    t18 = edi * 0x10u + 0x10u;
    wr32(sp0 - 0x18u, t18);
    wr32(sp0 - 0x14u, edi << 4u);
    eax = t17;
    ecx = sp0 - 0x1028u;
    loc_10 = t17;
    loc_14 = edi << 4u;
    edi = edi << 4u;
    loc_18 = t18;
L_102cbc6f: ;
    x0 = (double)rdf32(COW_IMG(0x103cb69cu) + eax * 4u);
    eax = ecx + edi;
L_102cbc79: ;
    edx = 0u;
    esi = ecx + loc_18;
L_102cbc80: ;
    d19 = fr(g, fr(g, (double)rdf32(ecx + edx * 4u) - (double)rdf32(esi - 0x10u)) * x0);
    d20 = (double)rdf32(esi);
    d21 = (double)rdf32(esi - 0x10u);
    wrf32(esi - 0x10u, (float)d19);
    d22 = fr(g, fr(g, (double)rdf32(ecx + edx * 4u + 0x10u) - d20) * x0);
    wrf32(esi, (float)d22);
    d23 = fr(g, d21 + (double)rdf32(ecx + edx * 4u));
    wrf32(ecx + edx * 4u, (float)d23);
    d24 = fr(g, d20 + (double)rdf32(ecx + edx * 4u + 0x10u));
    wrf32(ecx + edx * 4u + 0x10u, (float)d24);
    if ((int32_t)(edx + 1u) < 4)
    {
        edx = edx + 1u;
        esi = esi + 4u;
        goto L_102cbc80;
    }
    if (ecx + 0x20u != eax)
    {
        ecx = ecx + 0x20u;
        goto L_102cbc79;
    }
    ecx = ecx + 0x20u;
    t25 = loc_8 * 2u - 1u;
    wr32(sp0 - 0xcu, t25);
    eax = t25 << 4u;
    ecx = ecx - edi;
    loc_c = t25;
L_102cbccd: ;
    edx = ecx + 0x20u;
    esi = eax + ecx - 0x10u;
    edi = 4u;
L_102cbcd9: ;
    d26 = fr(g, (double)rdf32(esi + 0x10u) + (double)rdf32(edx - 0x20u));
    wrf32(edx - 0x20u, (float)d26);
    d27 = fr(g, (double)rdf32(edx - 0x10u) + (double)rdf32(esi));
    wrf32(edx - 0x10u, (float)d27);
    d28 = fr(g, (double)rdf32(esi - 0x10u) + (double)rdf32(edx));
    wrf32(edx, (float)d28);
    d29 = fr(g, (double)rdf32(esi - 0x20u) + (double)rdf32(edx + 0x10u));
    wrf32(edx + 0x10u, (float)d29);
    if (edi != 1u)
    {
        edx = edx + 4u;
        esi = esi + 4u;
        edi = edi - 1u;
        goto L_102cbcd9;
    }
    wr32(sp0 - 0xcu, loc_c - 8u);
    if ((int32_t)(loc_c - 8u) > 0)
    {
        eax = eax - 0x80u;
        ecx = ecx + 0x40u;
        loc_c = loc_c - 8u;
        goto L_102cbccd;
    }
    ecx = ecx + 0x40u;
    wr32(sp0 - 0x10u, loc_10 + loc_8);
    if ((int32_t)(loc_10 + loc_8) <= 0)
    {
        eax = loc_10 + loc_8;
        ecx = ecx + loc_14;
        edi = loc_14;
        loc_10 = loc_10 + loc_8;
        goto L_102cbc6f;
    }
    esi = loc_8;
    wr32(sp0 - 8u, esi * 2u);
    if (esi * 2u != 0x80u)
    {
        loc_8 = esi * 2u;
        goto L_102cbc48;
    }
    eax = sp0 - 0x1028u;
    edx = 0x80u;
L_102cbd50: ;
    ecx = 4u;
L_102cbd55: ;
    d30 = fr(g, fr(g, (double)rdf32(eax) - (double)rdf32(eax + 0x800u)) * (double)rdf32(COW_IMG(0x10343d7cu)));
    d31 = (double)rdf32(eax + 0x800u);
    wrf32(eax + 0x800u, (float)d30);
    d32 = fr(g, d31 + (double)rdf32(eax));
    wrf32(eax, (float)d32);
    if (ecx != 1u)
    {
        eax = eax + 4u;
        ecx = ecx - 1u;
        goto L_102cbd55;
    }
    eax = eax + 4u;
    if (edx != 1u)
    {
        edx = edx - 1u;
        goto L_102cbd50;
    }
    eax = sp0 - 0x28u;
    ecx = 0xfffff000u;
    edx = rd32(sp0 + 4u) + 0x400u;
    esi = rd32(sp0 + 4u) + 0x7fcu;
L_102cbd91: ;
    wr32(sp0 - 8u, 0u);
    wr32(sp0 + 4u, eax + ecx);
    eax = eax - 0x10u;
    edi = 0u;
    loc_8 = 0u;
L_102cbda5: ;
    d33 = fr(g, (double)rdf32(eax + edi * 4u) + (double)rdf32(rd32(sp0 + 4u)));
    wrf32(rd32(sp0 + 4u), (float)d33);
    wr32(sp0 - 8u, loc_8 + 1u);
    t34 = rd32(sp0 + 4u) + 4u;
    wr32(sp0 + 4u, t34);
    if ((int32_t)(loc_8 + 1u) < 4)
    {
        edi = loc_8 + 1u;
        loc_8 = loc_8 + 1u;
        goto L_102cbda5;
    }
    t35 = rd32(eax + ecx + 0x10u);
    wr32(edx - 0x400u, t35);
    t36 = rd32(eax + 4u);
    wr32(edx, t36);
    t37 = rd32(eax + ecx + 0x18u);
    wr32(edx + 0x400u, t37);
    t38 = rd32(eax + 0xcu);
    wr32(edx + 0x800u, t38);
    wr32(esi - 0x400u, rd32(eax));
    t39 = rd32(eax + ecx + 0x14u);
    wr32(esi, t39);
    t40 = rd32(eax + 8u);
    wr32(esi + 0x400u, t40);
    t41 = rd32(eax + ecx + 0x1cu);
    wr32(esi + 0x800u, t41);
    if ((int32_t)(ecx + 0x20u) < 0)
    {
        ecx = ecx + 0x20u;
        edx = edx + 4u;
        esi = esi - 4u;
        goto L_102cbd91;
    }
    edx = edx + 4u;
    g->edx = edx;
    return eax;
L_102cbc48: ;
    edi = loc_8;
    goto L_102cbc4b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102cbab0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102cbab0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
