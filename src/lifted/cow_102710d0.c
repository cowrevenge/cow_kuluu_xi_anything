/* f_0x102710d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102710d0(Guest* g)
{
    double d11;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d2;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d29;
    double d4;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t18;
    uint32_t t19;
    uint32_t t20;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 112u);

    wr32(sp0 - 0x48u, in_esi);
    wr32(sp0 - 0x4cu, in_edi);
    wr32(sp0 - 0x44u, 0x3f800000u);
    t1 = rd32(COW_IMG(0x1099b0f4u));
    d2 = fr(g, (double)rdf32(COW_IMG(0x10340b14u)) / (double)(int32_t)rd32(sp0 + 0x10u));
    wrf32(sp0 + 0x10u, (float)d2);
    if (arg3 - 1u > 3u)
    {
        eax = arg3 - 1u;
        ecx = COW_IMG(0x1099b1d0u) + t1 * 0x34u;
        edx = (t1 << 5u) - t1;
        esi = COW_IMG(0x1099b33cu) + t1 * 0x7cu;
        goto L_102712df;
    }
    ecx = COW_IMG(0x1099b1d0u) + t1 * 0x34u;
    edx = (t1 << 5u) - t1;
    esi = COW_IMG(0x1099b33cu) + t1 * 0x7cu;
    t3 = rd32(COW_IMG(0x102712f0u) + arg3 * 4u - 4u);
    switch (t3 - RD)
    {
    case 0x10271120u: goto L_10271120;
    case 0x102711b0u: goto L_102711b0;
    case 0x1027124cu: goto L_1027124c;
    case 0x102712a6u: goto L_102712a6;
    default: rt_fatal(g, COW_IMG(0x10271119u), "switch");
    }
    return;
L_10271120: ;
    d24 = (double)rdf32(sp0 + 0x10u);
    if ((cow_fsw(g, d24, (double)rdf32(COW_IMG(0x10329cecu)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d24, (double)rdf32(COW_IMG(0x10329cecu)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d24, (double)rdf32(COW_IMG(0x10329cecu)), 0u) & 0x4100u;
        d25 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x10329ce8u)) / (double)rdf32(sp0 + 0x10u));
        wrf32(sp0 - 0x44u, (float)d25);
    }
    wr32(sp0 - 0x50u, ecx);
    d26 = (double)(float)fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(sp0 - 0x44u)) * (double)rdf32(COW_IMG(0x10340b10u)));
    wrf32(sp0 - 0x50u, (float)d26);
    wr32(sp0 - 0x54u, sp0 - 0x40u);
    g->eax = eax;
    g->ecx = sp0 - 0x40u;
    g->esp = sp0 - 0x4cu;
    t27 = cow_cdecl(g, COW_IMG(0x1027abf0u), 2, sp0 - 0x40u, cow_f2bits(d26));
    t28 = g->ecx;
    d29 = (double)(float)fr(g, fr(g, (double)(int32_t)arg2 * (double)rdf32(sp0 - 0x44u)) * (double)rdf32(COW_IMG(0x1032a840u)));
    wrf32(sp0 - 0x50u, (float)d29);
    wr32(sp0 - 0x54u, sp0 - 0x20u);
    g->edx = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x1027abc0u), 2, sp0 - 0x20u, cow_f2bits(d29));
    t30 = g->edx;
    wr32(sp0 - 0x58u, esi + 0x68u);
    wr32(sp0 - 0x5cu, sp0 - 0x40u);
    wr32(sp0 - 0x60u, sp0 - 0x30u);
    g->ecx = sp0 - 0x30u;
    g->esp = sp0 - 0x54u;
    cow_cdecl(g, COW_IMG(0x1027b190u), 3, sp0 - 0x30u, sp0 - 0x40u, esi + 0x68u);
    t31 = g->ecx;
    wr32(sp0 - 0x64u, sp0 - 0x20u);
    wr32(sp0 - 0x68u, sp0 - 0x30u);
    wr32(sp0 - 0x6cu, esi + 0x68u);
    g->eax = sp0 - 0x30u;
    g->ecx = t31;
    g->edx = sp0 - 0x20u;
    g->esp = sp0 - 0x60u;
    t32 = cow_cdecl(g, COW_IMG(0x1027b190u), 3, esi + 0x68u, sp0 - 0x30u, sp0 - 0x20u);
    t33 = g->ecx;
    t34 = g->edx;
    wr32(sp0 - 0x50u, esi);
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x1026e210u), 1, esi);
    return;
L_102711b0: ;
    d15 = (double)rdf32(sp0 + 0x10u);
    if ((cow_fsw(g, d15, (double)rdf32(COW_IMG(0x10329cecu)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d15, (double)rdf32(COW_IMG(0x10329cecu)), 1u) & 0x4100u;
        x0 = fr(g, fr(g, fr(g, tan(fr(g, (double)rdf32(ecx + 0x14u) * rdf64(COW_IMG(0x10340b08u))))) * (double)rdf32(esi + 0x78u)) / (double)(int32_t)rd32(COW_IMG(0x1099b0dcu)));
    }
    else
    {
        eax = cow_fsw(g, d15, (double)rdf32(COW_IMG(0x10329cecu)), 1u) & 0x4100u;
        x0 = fr(g, fr(g, fr(g, tan(fr(g, (double)rdf32(ecx + 0x14u) * rdf64(COW_IMG(0x10340b08u))))) * (double)rdf32(esi + 0x78u)) / (double)(int32_t)rd32(COW_IMG(0x1099b0dcu)));
        x0 = fr(g, x0 * fr(g, (double)rdf32(COW_IMG(0x10329ce8u)) / (double)rdf32(sp0 + 0x10u)));
    }
    wr32(sp0 - 0x50u, 0u);
    d16 = (double)(float)fr(g, (double)(int32_t)arg2 * x0);
    wrf32(sp0 - 0x54u, (float)d16);
    d17 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 + 4u) * x0);
    wrf32(sp0 - 0x58u, (float)d17);
    wr32(sp0 - 0x5cu, sp0 - 0x30u);
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x10274690u), 4, sp0 - 0x30u, cow_f2bits(d17), cow_f2bits(d16), 0u);
    wr32(sp0 - 0x60u, sp0 - 0x30u);
    wr32(sp0 - 0x64u, esi + 0x68u);
    wr32(sp0 - 0x68u, sp0 - 0x40u);
    g->eax = esi + 0x68u;
    g->ecx = sp0 - 0x40u;
    g->edx = sp0 - 0x30u;
    g->esp = sp0 - 0x5cu;
    t18 = cow_cdecl(g, COW_IMG(0x1027b0a0u), 3, sp0 - 0x40u, esi + 0x68u, sp0 - 0x30u);
    t19 = g->ecx;
    t20 = g->edx;
    wr32(sp0 - 0x50u, esi);
    d21 = fr(g, (double)rdf32(esi + 0x5cu) - (double)rdf32(sp0 - 0x40u));
    wrf32(esi + 0x5cu, (float)d21);
    d22 = fr(g, (double)rdf32(esi + 0x60u) - (double)rdf32(sp0 - 0x3cu));
    wrf32(esi + 0x60u, (float)d22);
    d23 = fr(g, (double)rdf32(esi + 0x64u) - (double)rdf32(sp0 - 0x38u));
    wrf32(esi + 0x64u, (float)d23);
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x1026e210u), 1, esi);
    return;
L_1027124c: ;
    d11 = (double)rdf32(sp0 + 0x10u);
    if ((cow_fsw(g, d11, (double)rdf32(COW_IMG(0x10329cecu)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d11, (double)rdf32(COW_IMG(0x10329cecu)), 0u) & 0x4100u;
        x0 = (double)rdf32(COW_IMG(0x1032961cu));
    }
    else
    {
        eax = cow_fsw(g, d11, (double)rdf32(COW_IMG(0x10329cecu)), 0u) & 0x4100u;
        x0 = fr(g, (double)rdf32(COW_IMG(0x10329ce8u)) / (double)rdf32(sp0 + 0x10u));
    }
    wr32(sp0 - 0x50u, esi);
    t12 = (uint32_t)((int32_t)rd32(COW_IMG(0x1099b0dcu)) >> 1u);
    d13 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * x0);
    wr32(sp0 + 4u, t12);
    d14 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, fr(g, d13 + d13) / (double)(int32_t)rd32(sp0 + 4u))) * (double)rdf32(esi + 0x78u));
    wrf32(esi + 0x78u, (float)d14);
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x1026e210u), 1, esi);
    return;
L_102712a6: ;
    wr32(sp0 - 0x50u, ecx);
    d4 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10340b10u)));
    wrf32(sp0 - 0x50u, (float)d4);
    wr32(sp0 - 0x54u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->edx = edx;
    g->esp = sp0 - 0x4cu;
    t5 = cow_cdecl(g, COW_IMG(0x1027ac20u), 2, sp0 - 0x10u, cow_f2bits(d4));
    t6 = g->edx;
    wr32(sp0 - 0x58u, esi + 0x68u);
    wr32(sp0 - 0x5cu, sp0 - 0x30u);
    g->ecx = sp0 - 0x30u;
    g->esp = sp0 - 0x54u;
    cow_cdecl(g, COW_IMG(0x1027a720u), 2, sp0 - 0x30u, esi + 0x68u);
    t7 = g->ecx;
    wr32(sp0 - 0x60u, sp0 - 0x10u);
    wr32(sp0 - 0x64u, sp0 - 0x30u);
    wr32(sp0 - 0x68u, esi + 0x68u);
    g->eax = sp0 - 0x30u;
    g->ecx = t7;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x5cu;
    t8 = cow_cdecl(g, COW_IMG(0x1027b190u), 3, esi + 0x68u, sp0 - 0x30u, sp0 - 0x10u);
    t9 = g->ecx;
    t10 = g->edx;
    eax = t8;
    ecx = t9;
    edx = t10;
L_102712df: ;
    wr32(sp0 - 0x50u, esi);
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x1026e210u), 1, esi);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102710d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102710d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
