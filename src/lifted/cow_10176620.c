/* f_0x10176620 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10176620(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t esi;
    double loc_10_f;
    double loc_14_f;
    double loc_1c_f;
    double loc_20_f;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t t1;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 96u);

    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_ebp);
    wr32(sp0 - 0x4cu, in_esi);
    wr32(sp0 - 0x50u, in_edi);
    wr32(sp0 - 0x40u, self);
    if (rd32(COW_IMG(0x10621a10u)) == 0u) goto L_1017688f;
    wr32(sp0 - 0x3cu, rd32(arg1));
    t1 = rd32(arg1 + 8u);
    wr32(sp0 - 0x34u, t1);
    t2 = rd32(arg1 + 4u);
    wr32(sp0 - 0x38u, t2);
    wr32(sp0 - 0x30u, rd32(arg2));
    t3 = rd32(arg2 + 4u);
    wr32(sp0 - 0x2cu, t3);
    t4 = rd32(arg2 + 8u);
    wr32(sp0 - 0x28u, t4);
    d5 = (double)(float)fr(g, cow_bits2f(rd32(arg2)) - cow_bits2f(rd32(arg1)));
    wrf32(sp0 - 0xcu, (float)d5);
    d6 = (double)(float)fr(g, cow_bits2f(t3) - cow_bits2f(t2));
    wrf32(sp0 - 8u, (float)d6);
    d7 = (double)(float)fr(g, cow_bits2f(t4) - cow_bits2f(t1));
    wrf32(sp0 - 4u, (float)d7);
    if (rd32(COW_IMG(0x10621a08u)) == 0u) goto L_1017688f;
    ebp = rd32(COW_IMG(0x10621a08u));
    loc_3c = rd32(arg1);
    loc_34 = t1;
    loc_38 = t2;
    loc_30 = rd32(arg2);
    loc_2c = t3;
    loc_28 = t4;
L_1017669a: ;
    if ((int32_t)rd32(ebp + 0x10u) <= 0) goto L_10176884;
    eax = rd32(ebp + 0x10u);
    ebx = 0u;
    esi = rd32(ebp + 0xcu);
L_101766aa: ;
    if (rd8(esi + 0x40u) != 0x40u) goto L_10176872;
    d8 = (double)(float)fr(g, fr(g, fr(g, fr(g, cow_bits2f(loc_3c) * (double)rdf32(esi + 4u)) + fr(g, cow_bits2f(loc_34) * (double)rdf32(esi + 0x24u))) + fr(g, cow_bits2f(loc_38) * (double)rdf32(esi + 0x14u))) + (double)rdf32(esi + 0x34u));
    wrf32(sp0 - 0x14u, (float)d8);
    d9 = (double)(float)fr(g, fr(g, fr(g, fr(g, cow_bits2f(loc_34) * (double)rdf32(esi + 0x28u)) + fr(g, cow_bits2f(loc_38) * (double)rdf32(esi + 0x18u))) + fr(g, cow_bits2f(loc_3c) * (double)rdf32(esi + 8u))) + (double)rdf32(esi + 0x38u));
    wrf32(sp0 - 0x10u, (float)d9);
    d10 = (double)(float)fr(g, fr(g, fr(g, fr(g, cow_bits2f(loc_30) * (double)rdf32(esi + 4u)) + fr(g, cow_bits2f(loc_28) * (double)rdf32(esi + 0x24u))) + fr(g, cow_bits2f(loc_2c) * (double)rdf32(esi + 0x14u))) + (double)rdf32(esi + 0x34u));
    wrf32(sp0 - 0x20u, (float)d10);
    d11 = (double)(float)fr(g, fr(g, fr(g, fr(g, cow_bits2f(loc_28) * (double)rdf32(esi + 0x28u)) + fr(g, cow_bits2f(loc_2c) * (double)rdf32(esi + 0x18u))) + fr(g, cow_bits2f(loc_30) * (double)rdf32(esi + 8u))) + (double)rdf32(esi + 0x38u));
    wrf32(sp0 - 0x1cu, (float)d11);
    d12 = fr(g, fr(g, fr(g, fr(g, cow_bits2f(loc_30) * (double)rdf32(esi)) + fr(g, cow_bits2f(loc_28) * (double)rdf32(esi + 0x20u))) + fr(g, cow_bits2f(loc_2c) * (double)rdf32(esi + 0x10u))) + (double)rdf32(esi + 0x30u));
    if ((cow_fsw(g, d12, (double)rdf32(COW_IMG(0x1032a3d0u)), 2u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d12, (double)rdf32(COW_IMG(0x1032a3d0u)), 2u) & 0x100u;
        loc_14_f = d8;
        loc_10_f = d9;
        x1 = d12;
        x0 = fr(g, fr(g, fr(g, fr(g, cow_bits2f(loc_3c) * (double)rdf32(esi)) + fr(g, cow_bits2f(loc_34) * (double)rdf32(esi + 0x20u))) + fr(g, cow_bits2f(loc_38) * (double)rdf32(esi + 0x10u))) + (double)rdf32(esi + 0x30u));
        goto L_101767dc;
    }
    eax = cow_fsw(g, d12, (double)rdf32(COW_IMG(0x1032a3d0u)), 2u) & 0x100u;
    loc_14_f = d8;
    loc_10_f = d9;
    loc_20_f = d10;
    loc_1c_f = d11;
    x1 = d12;
    x0 = fr(g, fr(g, fr(g, fr(g, cow_bits2f(loc_3c) * (double)rdf32(esi)) + fr(g, cow_bits2f(loc_34) * (double)rdf32(esi + 0x20u))) + fr(g, cow_bits2f(loc_38) * (double)rdf32(esi + 0x10u))) + (double)rdf32(esi + 0x30u));
    if (!(x1 <= (double)rdf32(COW_IMG(0x10329a08u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x10329a08u)), 1u);
        goto L_101767de;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x10329a08u)), 1u);
    if ((cow_fsw(g, loc_20_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 1u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, loc_20_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 1u) & 0x100u;
        goto L_101767de;
    }
    eax = cow_fsw(g, loc_20_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 1u) & 0x100u;
    if (!(loc_20_f <= (double)rdf32(COW_IMG(0x10329a08u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_20_f, (double)rdf32(COW_IMG(0x10329a08u)), 1u);
        goto L_101767de;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_20_f, (double)rdf32(COW_IMG(0x10329a08u)), 1u);
    if ((cow_fsw(g, loc_1c_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 1u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, loc_1c_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 1u) & 0x100u;
        goto L_101767de;
    }
    eax = cow_fsw(g, loc_1c_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 1u) & 0x100u;
    if (!(loc_1c_f <= (double)rdf32(COW_IMG(0x10329a08u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_1c_f, (double)rdf32(COW_IMG(0x10329a08u)), 1u);
        goto L_101767de;
    }
L_101767d0: ;
    return esi;
L_101767dc: ;
L_101767de: ;
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3d0u)), 1u) & 0x100u) != 0u) goto L_10176844;
    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3d0u)), 1u) & 0x100u;
    if (!(x0 <= (double)rdf32(COW_IMG(0x10329a08u)))) goto L_10176846;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
    if ((cow_fsw(g, loc_14_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u) != 0u) goto L_10176846;
    eax = cow_fsw(g, loc_14_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u;
    if (!(loc_14_f <= (double)rdf32(COW_IMG(0x10329a08u)))) goto L_10176846;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_14_f, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
    if ((cow_fsw(g, loc_10_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u) != 0u) goto L_10176846;
    eax = cow_fsw(g, loc_10_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u;
    if (loc_10_f <= (double)rdf32(COW_IMG(0x10329a08u))) goto L_101767d0;
L_10176846: ;
    edi = COW_IMG(0x10376bc0u);
L_1017684b: ;
    wr32(sp0 - 0x54u, edi);
    wr32(sp0 - 0x58u, sp0 - 0xcu);
    wr32(sp0 - 0x5cu, sp0 - 0x3cu);
    g->esp = sp0 - 0x50u;
    t13 = cow_stdcall(g, COW_IMG(0x101768a0u), 3, sp0 - 0x3cu, sp0 - 0xcu, edi);
    if (t13 != 0u) goto L_101767d0;
    if ((int32_t)(edi + 0x1cu) < (int32_t)COW_IMG(0x10376c68u))
    {
        edi = edi + 0x1cu;
        goto L_1017684b;
    }
L_10176872: ;
    if ((int32_t)(ebx + 1u) < (int32_t)rd32(ebp + 0x10u))
    {
        eax = rd32(ebp + 0x10u);
        ebx = ebx + 1u;
        esi = esi + 0xf4u;
        goto L_101766aa;
    }
L_10176884: ;
    if (rd32(ebp) != 0u)
    {
        ebp = rd32(ebp);
        goto L_1017669a;
    }
L_1017688f: ;
    return 0u;
L_10176844: ;
    goto L_10176846;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10176620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10176620(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
