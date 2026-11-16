/* f_0x10175910 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f32 stack_args=2 */
void cow_fn_10175910(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
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
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    double loc_34_f;
    double loc_38_f;
    double loc_3c_f;
    uint32_t t1;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    double x0;
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
    if (rd32(COW_IMG(0x10621a10u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10621a10u));
        goto L_10175ba3;
    }
    wr32(sp0 - 0x30u, rd32(arg1));
    t1 = rd32(arg1 + 8u);
    wr32(sp0 - 0x28u, t1);
    t2 = rd32(arg1 + 4u);
    wr32(sp0 - 0x2cu, t2);
    wr32(sp0 - 0x24u, rd32(arg2));
    t3 = rd32(arg2 + 4u);
    wr32(sp0 - 0x20u, t3);
    t4 = rd32(arg2 + 8u);
    wr32(sp0 - 0x1cu, t4);
    if (rd32(COW_IMG(0x10621a08u)) == 0u)
    {
        eax = t4;
        goto L_10175ba3;
    }
    ebx = rd32(COW_IMG(0x10621a08u));
    loc_30 = rd32(arg1);
    loc_28 = t1;
    loc_2c = t2;
    loc_24 = rd32(arg2);
    loc_20 = t3;
    loc_1c = t4;
L_10175966: ;
    if ((int32_t)rd32(ebx + 0x10u) <= 0)
    {
        eax = rd32(ebx + 0x10u);
        goto L_10175b99;
    }
    eax = rd32(ebx + 0x10u);
    ebp = 0u;
    esi = rd32(ebx + 0xcu);
L_10175976: ;
    if (rd8(esi + 0x40u) == 0x5au) goto L_10175985;
    eax = (eax & 0xffffff00u) | rd8(esi + 0x40u);
    if ((uint8_t)eax != 0x7au) goto L_10175b87;
L_10175985: ;
    if (rd32(esi + 0x44u) == 0u) goto L_10175b87;
    eax = rd32(esi + 0x44u);
    d5 = (double)(float)fr(g, fr(g, fr(g, fr(g, cow_bits2f(loc_28) * (double)rdf32(esi + 0x20u)) + fr(g, cow_bits2f(loc_2c) * (double)rdf32(esi + 0x10u))) + fr(g, cow_bits2f(loc_30) * (double)rdf32(esi))) + (double)rdf32(esi + 0x30u));
    wrf32(sp0 - 0x3cu, (float)d5);
    d6 = (double)(float)fr(g, fr(g, fr(g, fr(g, cow_bits2f(loc_28) * (double)rdf32(esi + 0x24u)) + fr(g, cow_bits2f(loc_2c) * (double)rdf32(esi + 0x14u))) + fr(g, cow_bits2f(loc_30) * (double)rdf32(esi + 4u))) + (double)rdf32(esi + 0x34u));
    wrf32(sp0 - 0x38u, (float)d6);
    d7 = (double)(float)fr(g, fr(g, fr(g, fr(g, cow_bits2f(loc_30) * (double)rdf32(esi + 8u)) + fr(g, cow_bits2f(loc_28) * (double)rdf32(esi + 0x28u))) + fr(g, cow_bits2f(loc_2c) * (double)rdf32(esi + 0x18u))) + (double)rdf32(esi + 0x38u));
    wrf32(sp0 - 0x34u, (float)d7);
    d8 = (double)(float)fr(g, fr(g, fr(g, fr(g, cow_bits2f(loc_1c) * (double)rdf32(esi + 0x24u)) + fr(g, cow_bits2f(loc_20) * (double)rdf32(esi + 0x14u))) + fr(g, cow_bits2f(loc_24) * (double)rdf32(esi + 4u))) + (double)rdf32(esi + 0x34u));
    wrf32(sp0 - 0x14u, (float)d8);
    d9 = (double)(float)fr(g, fr(g, fr(g, fr(g, cow_bits2f(loc_24) * (double)rdf32(esi + 8u)) + fr(g, cow_bits2f(loc_1c) * (double)rdf32(esi + 0x28u))) + fr(g, cow_bits2f(loc_20) * (double)rdf32(esi + 0x18u))) + (double)rdf32(esi + 0x38u));
    wrf32(sp0 - 0x10u, (float)d9);
    d10 = (double)(float)fr(g, fr(g, fr(g, fr(g, fr(g, cow_bits2f(loc_1c) * (double)rdf32(esi + 0x20u)) + fr(g, cow_bits2f(loc_20) * (double)rdf32(esi + 0x10u))) + fr(g, cow_bits2f(loc_24) * (double)rdf32(esi))) + (double)rdf32(esi + 0x30u)) - d5);
    wrf32(sp0 - 0xcu, (float)d10);
    d11 = (double)(float)fr(g, d8 - d6);
    wrf32(sp0 - 8u, (float)d11);
    d12 = (double)(float)fr(g, d9 - d7);
    wrf32(sp0 - 4u, (float)d12);
    d13 = fr(g, fr(g, fr(g, fr(g, cow_bits2f(loc_1c) * (double)rdf32(esi + 0x20u)) + fr(g, cow_bits2f(loc_20) * (double)rdf32(esi + 0x10u))) + fr(g, cow_bits2f(loc_24) * (double)rdf32(esi))) + (double)rdf32(esi + 0x30u));
    wr32(esi + 0xe8u, 1u);
    if ((cow_fsw(g, d13, (double)rdf32(COW_IMG(0x1032a3d0u)), 1u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d13, (double)rdf32(COW_IMG(0x1032a3d0u)), 1u) & 0x100u;
        loc_3c_f = d5;
        loc_38_f = d6;
        loc_34_f = d7;
        x0 = d13;
        goto L_10175ae7;
    }
    eax = cow_fsw(g, d13, (double)rdf32(COW_IMG(0x1032a3d0u)), 1u) & 0x100u;
    loc_3c_f = d5;
    loc_38_f = d6;
    loc_34_f = d7;
    loc_14_f = d8;
    loc_10_f = d9;
    x0 = d13;
    if (!(x0 <= (double)rdf32(COW_IMG(0x10329a08u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
        goto L_10175ae9;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
    if ((cow_fsw(g, loc_14_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, loc_14_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u;
        goto L_10175ae9;
    }
    eax = cow_fsw(g, loc_14_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u;
    if (!(loc_14_f <= (double)rdf32(COW_IMG(0x10329a08u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_14_f, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
        goto L_10175ae9;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_14_f, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
    if ((cow_fsw(g, loc_10_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, loc_10_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u;
        goto L_10175ae9;
    }
    eax = cow_fsw(g, loc_10_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u;
    if (!(loc_10_f <= (double)rdf32(COW_IMG(0x10329a08u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_10_f, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
        goto L_10175ae9;
    }
L_10175ada: ;
    return;
L_10175ae7: ;
L_10175ae9: ;
    if ((cow_fsw(g, loc_3c_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u) != 0u) goto L_10175b55;
    eax = cow_fsw(g, loc_3c_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u;
    if (!(loc_3c_f <= (double)rdf32(COW_IMG(0x10329a08u)))) goto L_10175b55;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_3c_f, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
    if ((cow_fsw(g, loc_38_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u) != 0u) goto L_10175b55;
    eax = cow_fsw(g, loc_38_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u;
    if (!(loc_38_f <= (double)rdf32(COW_IMG(0x10329a08u)))) goto L_10175b55;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_38_f, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
    if ((cow_fsw(g, loc_34_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u) != 0u) goto L_10175b55;
    eax = cow_fsw(g, loc_34_f, (double)rdf32(COW_IMG(0x1032a3d0u)), 0u) & 0x100u;
    if (loc_34_f <= (double)rdf32(COW_IMG(0x10329a08u))) goto L_10175ada;
L_10175b55: ;
    edi = COW_IMG(0x10376bc0u);
L_10175b5a: ;
    wr32(sp0 - 0x54u, edi);
    wr32(sp0 - 0x58u, sp0 - 0xcu);
    wr32(sp0 - 0x5cu, sp0 - 0x3cu);
    g->esp = sp0 - 0x50u;
    t14 = cow_stdcall(g, COW_IMG(0x101768a0u), 3, sp0 - 0x3cu, sp0 - 0xcu, edi);
    if (t14 != 0u) goto L_10175ada;
    eax = t14;
    if ((int32_t)(edi + 0x1cu) < (int32_t)COW_IMG(0x10376c68u))
    {
        edi = edi + 0x1cu;
        goto L_10175b5a;
    }
    wr32(esi + 0xe8u, eax);
L_10175b87: ;
    if ((int32_t)(ebp + 1u) < (int32_t)rd32(ebx + 0x10u))
    {
        eax = rd32(ebx + 0x10u);
        ebp = ebp + 1u;
        esi = esi + 0xf4u;
        goto L_10175976;
    }
    eax = rd32(ebx + 0x10u);
L_10175b99: ;
    if (rd32(ebx) != 0u)
    {
        ebx = rd32(ebx);
        goto L_10175966;
    }
L_10175ba3: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10175910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10175910(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
