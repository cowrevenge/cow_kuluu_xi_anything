/* f_0x101768a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101768a0(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d16;
    double d18;
    double d19;
    double d2;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d3;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d40;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_64;
    uint32_t loc_68;
    uint32_t loc_6c;
    double loc_70_f;
    double loc_74_f;
    uint32_t loc_78;
    double loc_7c_f;
    double loc_80_f;
    double loc_84_f;
    double loc_88_f;
    double loc_8c_f;
    double loc_a0_f;
    uint32_t t15;
    uint32_t t17;
    uint32_t t4;
    uint32_t t5;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 192u);

    wr32(sp0 - 0xb0u, in_ebx);
    wr32(sp0 - 0xb4u, in_ebp);
    wr32(sp0 - 0xb8u, in_esi);
    wr32(sp0 - 0xbcu, in_edi);
    wr32(sp0 - 0x60u, 0xbf000000u);
    wr32(sp0 - 0x5cu, 0xbf000000u);
    wr32(sp0 - 0x58u, 0xbf000000u);
    wr32(sp0 - 0x54u, 0x3f000000u);
    wr32(sp0 - 0x50u, 0xbf000000u);
    wr32(sp0 - 0x4cu, 0xbf000000u);
    d1 = fr(g, fr(g, fr(g, (double)rdf32(arg3 + 0x14u) * (double)rdf32(arg2 + 4u)) + fr(g, (double)rdf32(arg3 + 0x10u) * (double)rdf32(arg2))) + fr(g, (double)rdf32(arg2 + 8u) * (double)rdf32(arg3 + 0x18u)));
    wr32(sp0 - 0x48u, 0x3f000000u);
    wr32(sp0 - 0x44u, 0xbf000000u);
    wr32(sp0 - 0x40u, 0x3f000000u);
    wr32(sp0 - 0x3cu, 0xbf000000u);
    wr32(sp0 - 0x38u, 0xbf000000u);
    wr32(sp0 - 0x34u, 0x3f000000u);
    wr32(sp0 - 0x30u, 0xbf000000u);
    wr32(sp0 - 0x2cu, 0x3f000000u);
    wr32(sp0 - 0x28u, 0xbf000000u);
    wr32(sp0 - 0x24u, 0x3f000000u);
    wr32(sp0 - 0x20u, 0x3f000000u);
    wr32(sp0 - 0x1cu, 0xbf000000u);
    wr32(sp0 - 0x18u, 0x3f000000u);
    wr32(sp0 - 0x14u, 0x3f000000u);
    wr32(sp0 - 0x10u, 0x3f000000u);
    wr32(sp0 - 0xcu, 0xbf000000u);
    wr32(sp0 - 8u, 0x3f000000u);
    wr32(sp0 - 4u, 0x3f000000u);
    if (d1 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        x0 = d1;
        goto L_10176db5;
    }
    eax = (rd32(arg3) & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    ebp = sp0 + rd32(arg3) * 0xcu - 0x60u;
    edi = rd32(arg3) * 0xcu;
    x0 = d1;
    d2 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg1 + 8u) * (double)rdf32(arg3 + 0x18u)) + fr(g, (double)rdf32(arg3 + 0x10u) * (double)rdf32(arg1))) + fr(g, (double)rdf32(arg1 + 4u) * (double)rdf32(arg3 + 0x14u))) - fr(g, fr(g, fr(g, (double)rdf32(ebp + 4u) * (double)rdf32(arg3 + 0x14u)) + fr(g, (double)rdf32(ebp + 8u) * (double)rdf32(arg3 + 0x18u))) + fr(g, (double)rdf32(arg3 + 0x10u) * (double)rdf32(ebp))));
    d3 = (double)(float)fr(g, d2 * fr(g, (double)rdf32(COW_IMG(0x1032a3f0u)) / x0));
    wrf32(sp0 - 0xa0u, (float)d3);
    if (d3 < (double)rdf32(COW_IMG(0x103295d8u))) goto L_10176db7;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    loc_a0_f = d3;
    if ((cow_fsw(g, loc_a0_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u) == 0u) goto L_10176db7;
    t4 = edi + sp0 - 0x5cu;
    wr32(sp0 - 0x78u, t4);
    t5 = edi + sp0 - 0x58u;
    wr32(sp0 - 0x68u, t5);
    d6 = (double)(float)fr(g, fr(g, loc_a0_f * (double)rdf32(arg2)) + (double)rdf32(arg1));
    wrf32(sp0 - 0x84u, (float)d6);
    d7 = (double)(float)fr(g, fr(g, loc_a0_f * (double)rdf32(arg2 + 4u)) + (double)rdf32(arg1 + 4u));
    wrf32(sp0 - 0x80u, (float)d7);
    d8 = (double)(float)fr(g, fr(g, loc_a0_f * (double)rdf32(arg2 + 8u)) + (double)rdf32(arg1 + 8u));
    wrf32(sp0 - 0x7cu, (float)d8);
    d9 = (double)(float)fr(g, d6 - (double)rdf32(ebp));
    wrf32(sp0 - 0xa0u, (float)d9);
    wr32(sp0 - 0xacu, cow_f2bits(d9));
    d10 = (double)(float)fr(g, d7 - (double)rdf32(t4));
    wrf32(sp0 - 0x70u, (float)d10);
    wr32(sp0 - 0xa8u, cow_f2bits(d10));
    d11 = (double)(float)fr(g, d8 - (double)rdf32(t5));
    wrf32(sp0 - 0x74u, (float)d11);
    d12 = fr(g, d8 - (double)rdf32(t5));
    d13 = (double)(float)fr(g, fr(g, fr(g, d12 * fr(g, (double)rdf32(sp0 + rd32(arg3 + 4u) * 0xcu - 0x5cu) - (double)rdf32(t4))) - fr(g, cow_bits2f(cow_f2bits(d10)) * fr(g, (double)rdf32(sp0 + rd32(arg3 + 4u) * 0xcu - 0x58u) - (double)rdf32(t5)))) * (double)rdf32(arg3 + 0x10u));
    wrf32(sp0 - 0x90u, (float)d13);
    d14 = (double)(float)fr(g, fr(g, fr(g, cow_bits2f(cow_f2bits(d9)) * fr(g, (double)rdf32(sp0 + rd32(arg3 + 4u) * 0xcu - 0x58u) - (double)rdf32(t5))) - fr(g, d12 * fr(g, (double)rdf32(sp0 + rd32(arg3 + 4u) * 0xcu - 0x60u) - (double)rdf32(ebp)))) * (double)rdf32(arg3 + 0x14u));
    wrf32(sp0 - 0x8cu, (float)d14);
    if (d13 < (double)rdf32(COW_IMG(0x10336644u)))
    {
        x0 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 + rd32(arg3 + 4u) * 0xcu - 0x60u) - (double)rdf32(ebp)) * cow_bits2f(cow_f2bits(d10))) - fr(g, cow_bits2f(cow_f2bits(d9)) * fr(g, (double)rdf32(sp0 + rd32(arg3 + 4u) * 0xcu - 0x5cu) - (double)rdf32(t4)))) * (double)rdf32(arg3 + 0x18u));
        goto L_10176db5;
    }
    eax = (cow_f2bits(d10) & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, (double)rdf32(COW_IMG(0x10336644u)), 1u);
    edx = sp0 + rd32(arg3 + 4u) * 0xcu - 0x60u;
    ebx = sp0 + rd32(arg3 + 4u) * 0xcu - 0x58u;
    esi = sp0 + rd32(arg3 + 4u) * 0xcu - 0x5cu;
    loc_a0_f = d9;
    loc_78 = t4;
    loc_68 = t5;
    loc_84_f = d6;
    loc_80_f = d7;
    loc_7c_f = d8;
    loc_70_f = d10;
    loc_74_f = d11;
    loc_8c_f = d14;
    x0 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 + rd32(arg3 + 4u) * 0xcu - 0x60u) - (double)rdf32(ebp)) * cow_bits2f(cow_f2bits(d10))) - fr(g, cow_bits2f(cow_f2bits(d9)) * fr(g, (double)rdf32(sp0 + rd32(arg3 + 4u) * 0xcu - 0x5cu) - (double)rdf32(t4)))) * (double)rdf32(arg3 + 0x18u));
    if (loc_8c_f < (double)rdf32(COW_IMG(0x10336644u))) goto L_10176db5;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_8c_f, (double)rdf32(COW_IMG(0x10336644u)), 1u);
    if (x0 < (double)rdf32(COW_IMG(0x10336644u))) goto L_10176db7;
    t15 = sp0 + rd32(arg3 + 8u) * 0xcu - 0x60u;
    wr32(sp0 - 0x64u, t15);
    d16 = (double)(float)fr(g, (double)rdf32(sp0 + rd32(arg3 + 8u) * 0xcu - 0x60u) - (double)rdf32(edx));
    wrf32(sp0 - 0x9cu, (float)d16);
    t17 = sp0 + rd32(arg3 + 8u) * 0xcu - 0x58u;
    wr32(sp0 - 0x6cu, t17);
    d18 = (double)(float)fr(g, (double)rdf32(sp0 + rd32(arg3 + 8u) * 0xcu - 0x5cu) - (double)rdf32(esi));
    wrf32(sp0 - 0x98u, (float)d18);
    d19 = (double)(float)fr(g, (double)rdf32(t17) - (double)rdf32(ebx));
    wrf32(sp0 - 0x94u, (float)d19);
    d20 = (double)(float)fr(g, loc_84_f - (double)rdf32(edx));
    wrf32(sp0 - 0xacu, (float)d20);
    d21 = (double)(float)fr(g, loc_80_f - (double)rdf32(esi));
    wrf32(sp0 - 0xa8u, (float)d21);
    d22 = (double)(float)fr(g, loc_7c_f - (double)rdf32(ebx));
    wrf32(sp0 - 0xa4u, (float)d22);
    d23 = (double)(float)fr(g, fr(g, fr(g, d20 * d19) - fr(g, d22 * d16)) * (double)rdf32(arg3 + 0x14u));
    wrf32(sp0 - 0x8cu, (float)d23);
    d24 = (double)(float)fr(g, fr(g, fr(g, d21 * d16) - fr(g, d20 * d18)) * (double)rdf32(arg3 + 0x18u));
    wrf32(sp0 - 0x88u, (float)d24);
    d25 = fr(g, fr(g, fr(g, fr(g, loc_7c_f - (double)rdf32(ebx)) * d18) - fr(g, d21 * d19)) * (double)rdf32(arg3 + 0x10u));
    if (d25 < (double)rdf32(COW_IMG(0x10336644u))) goto L_10176db7;
    eax = (t17 & 0xffff0000u) | (uint16_t)cow_fsw(g, d25, (double)rdf32(COW_IMG(0x10336644u)), 0u);
    edi = sp0 + rd32(arg3 + 8u) * 0xcu - 0x5cu;
    loc_8c_f = d23;
    loc_64 = t15;
    loc_6c = t17;
    loc_88_f = d24;
    if (loc_8c_f < (double)rdf32(COW_IMG(0x10336644u))) goto L_10176db7;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_8c_f, (double)rdf32(COW_IMG(0x10336644u)), 0u);
    if (loc_88_f < (double)rdf32(COW_IMG(0x10336644u))) goto L_10176db7;
    d26 = (double)(float)fr(g, (double)rdf32(sp0 + rd32(arg3 + 0xcu) * 0xcu - 0x60u) - (double)rdf32(loc_64));
    wrf32(sp0 - 0x9cu, (float)d26);
    d27 = (double)(float)fr(g, (double)rdf32(sp0 + rd32(arg3 + 0xcu) * 0xcu - 0x5cu) - (double)rdf32(edi));
    wrf32(sp0 - 0x98u, (float)d27);
    wr32(sp0 - 0xacu, cow_f2bits(loc_a0_f));
    wr32(sp0 - 0xa8u, cow_f2bits(loc_70_f));
    d28 = (double)(float)fr(g, (double)rdf32(sp0 + rd32(arg3 + 0xcu) * 0xcu - 0x58u) - (double)rdf32(loc_6c));
    wrf32(sp0 - 0x94u, (float)d28);
    wr32(sp0 - 0xa4u, cow_f2bits(loc_74_f));
    d29 = (double)(float)fr(g, fr(g, fr(g, cow_bits2f(cow_f2bits(loc_a0_f)) * d28) - fr(g, cow_bits2f(cow_f2bits(loc_74_f)) * d26)) * (double)rdf32(arg3 + 0x14u));
    wrf32(sp0 - 0x8cu, (float)d29);
    d30 = (double)(float)fr(g, fr(g, fr(g, cow_bits2f(cow_f2bits(loc_70_f)) * d26) - fr(g, cow_bits2f(cow_f2bits(loc_a0_f)) * d27)) * (double)rdf32(arg3 + 0x18u));
    wrf32(sp0 - 0x88u, (float)d30);
    d31 = fr(g, fr(g, fr(g, cow_bits2f(cow_f2bits(loc_74_f)) * d27) - fr(g, cow_bits2f(cow_f2bits(loc_70_f)) * d28)) * (double)rdf32(arg3 + 0x10u));
    if (d31 < (double)rdf32(COW_IMG(0x10336644u))) goto L_10176db7;
    eax = (cow_f2bits(loc_74_f) & 0xffff0000u) | (uint16_t)cow_fsw(g, d31, (double)rdf32(COW_IMG(0x10336644u)), 0u);
    edx = sp0 + rd32(arg3 + 0xcu) * 0xcu - 0x60u;
    ebx = sp0 + rd32(arg3 + 0xcu) * 0xcu - 0x58u;
    esi = sp0 + rd32(arg3 + 0xcu) * 0xcu - 0x5cu;
    loc_8c_f = d29;
    loc_88_f = d30;
    if (loc_8c_f < (double)rdf32(COW_IMG(0x10336644u))) goto L_10176db7;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_8c_f, (double)rdf32(COW_IMG(0x10336644u)), 0u);
    if (loc_88_f < (double)rdf32(COW_IMG(0x10336644u))) goto L_10176db7;
    d32 = (double)(float)fr(g, (double)rdf32(ebp) - (double)rdf32(edx));
    wrf32(sp0 - 0x9cu, (float)d32);
    d33 = (double)(float)fr(g, (double)rdf32(loc_78) - (double)rdf32(esi));
    wrf32(sp0 - 0x98u, (float)d33);
    d34 = (double)(float)fr(g, (double)rdf32(loc_68) - (double)rdf32(ebx));
    wrf32(sp0 - 0x94u, (float)d34);
    d35 = (double)(float)fr(g, loc_84_f - (double)rdf32(edx));
    wrf32(sp0 - 0xacu, (float)d35);
    d36 = (double)(float)fr(g, loc_80_f - (double)rdf32(esi));
    wrf32(sp0 - 0xa8u, (float)d36);
    d37 = (double)(float)fr(g, loc_7c_f - (double)rdf32(ebx));
    wrf32(sp0 - 0xa4u, (float)d37);
    d38 = (double)(float)fr(g, fr(g, fr(g, d35 * d34) - fr(g, d37 * d32)) * (double)rdf32(arg3 + 0x14u));
    wrf32(sp0 - 0x8cu, (float)d38);
    d39 = (double)(float)fr(g, fr(g, fr(g, d36 * d32) - fr(g, d35 * d33)) * (double)rdf32(arg3 + 0x18u));
    wrf32(sp0 - 0x88u, (float)d39);
    d40 = fr(g, fr(g, fr(g, fr(g, loc_7c_f - (double)rdf32(ebx)) * d33) - fr(g, d36 * d34)) * (double)rdf32(arg3 + 0x10u));
    if (d40 < (double)rdf32(COW_IMG(0x10336644u))) goto L_10176db7;
    eax = (loc_68 & 0xffff0000u) | (uint16_t)cow_fsw(g, d40, (double)rdf32(COW_IMG(0x10336644u)), 0u);
    loc_8c_f = d38;
    loc_88_f = d39;
    if (loc_8c_f < (double)rdf32(COW_IMG(0x10336644u))) goto L_10176db7;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_8c_f, (double)rdf32(COW_IMG(0x10336644u)), 0u);
    if (loc_88_f < (double)rdf32(COW_IMG(0x10336644u))) goto L_10176db7;
    return 1u;
L_10176db5: ;
L_10176db7: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101768a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101768a0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
