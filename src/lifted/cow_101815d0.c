/* f_0x101815d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101815d0(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d16;
    double d17;
    double d18;
    double d19;
    double d22;
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 216u);

    wr32(sp0 - 0xb8u, in_esi);
    wr32(sp0 - 0xbcu, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0xbcu;
    t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_10181922;
    }
    eax = t1;
    edx = t2;
    esi = t1;
    if (rd8(COW_IMG(0x1065ca30u)) == 0u) goto L_10181602;
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1065ca30u));
    return (eax & 0xffffff00u) | 1u;
L_10181602: ;
    g->eax = rd32(esi);
    t3 = rd32(esi);
    g->esp = sp0 - 0xbcu;
    t4 = cow_thiscall(g, rd32(t3 + 0x1bcu), esi, 0);
    t5 = rd32(t4 + 4u);
    wr32(sp0 - 0xb0u, t5);
    wr32(sp0 - 0xa8u, rd32(t4));
    wr32(sp0 - 0xa4u, t5);
    t6 = rd32(t4 + 8u);
    wr32(sp0 - 0xa0u, t6);
    wr32(sp0 - 0xb4u, rd32(t4));
    wr32(sp0 - 0xacu, t6);
    g->eax = t6;
    t7 = rd32(t4);
    t8 = cow_thiscall(g, rd32(rd32(esi) + 0x1c0u), esi, 0);
    t9 = rd32(t8 + 4u);
    wr32(sp0 - 0xb0u, t9);
    wr32(sp0 - 0xc0u, sp0 - 0x90u);
    wr32(sp0 - 0xc4u, sp0 - 0x50u);
    wr32(sp0 - 0xc8u, sp0 - 0x50u);
    wr32(sp0 - 0x50u, 0x3f800000u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x40u, 0u);
    wr32(sp0 - 0x3cu, 0x3f800000u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x28u, 0x3f800000u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x14u, 0x3f800000u);
    wr32(sp0 - 0x8cu, 0u);
    wr32(sp0 - 0x84u, 0u);
    wr32(sp0 - 0x80u, 0u);
    wr32(sp0 - 0x7cu, 0x3f800000u);
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x6cu, 0u);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x54u, 0x3f800000u);
    d10 = (double)(float)fr(g, cos(cow_bits2f(t9)));
    wrf32(sp0 - 0x90u, (float)d10);
    d11 = fr(g, sin(cow_bits2f(t9)));
    wrf32(sp0 - 0x88u, (float)(double)(float)-d11);
    wrf32(sp0 - 0x70u, (float)(double)(float)d11);
    d12 = (double)(float)fr(g, cos(cow_bits2f(t9)));
    wrf32(sp0 - 0x68u, (float)d12);
    cow_cdecl(g, COW_IMG(0x1016c060u), 3, sp0 - 0x50u, sp0 - 0x50u, sp0 - 0x90u);
    wr32(sp0 - 0x90u, 0x3f800000u);
    wr32(sp0 - 0x8cu, 0u);
    wr32(sp0 - 0x88u, 0u);
    wr32(sp0 - 0x84u, 0u);
    wr32(sp0 - 0x80u, 0u);
    wr32(sp0 - 0x7cu, 0x3f800000u);
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0x6cu, 0u);
    wr32(sp0 - 0x68u, 0x3f800000u);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x54u, 0x3f800000u);
    t13 = rd32(sp0 - 0xa8u);
    wr32(sp0 - 0x60u, t13);
    t14 = rd32(sp0 - 0xa4u);
    wr32(sp0 - 0x5cu, t14);
    t15 = rd32(sp0 - 0xa0u);
    wr32(sp0 - 0x58u, t15);
    wr32(sp0 - 0xccu, sp0 - 0x90u);
    wr32(sp0 - 0xd0u, sp0 - 0x50u);
    wr32(sp0 - 0xd4u, sp0 - 0x50u);
    g->esp = sp0 - 0xc8u;
    cow_cdecl(g, COW_IMG(0x1016c060u), 3, sp0 - 0x50u, sp0 - 0x50u, sp0 - 0x90u);
    wr32(sp0 - 0xc0u, sp0 - 0xcu);
    wr32(sp0 - 0xc4u, sp0 - 0x9cu);
    wr32(sp0 - 0xc8u, sp0 - 0xa8u);
    d16 = (double)(float)fr(g, fr(g, fr(g, fr(g, cow_bits2f(0u) * (double)rdf32(COW_IMG(0x1035818cu))) + fr(g, cow_bits2f(0u) * (double)rdf32(COW_IMG(0x103295d8u)))) + fr(g, cow_bits2f(0x3f800000u) * (double)rdf32(COW_IMG(0x1032a3a0u)))) + cow_bits2f(0u));
    wrf32(sp0 - 0x9cu, (float)d16);
    d17 = (double)(float)fr(g, fr(g, fr(g, fr(g, cow_bits2f(0x3f800000u) * (double)rdf32(COW_IMG(0x1035818cu))) + fr(g, cow_bits2f(0u) * (double)rdf32(COW_IMG(0x103295d8u)))) + fr(g, cow_bits2f(0u) * (double)rdf32(COW_IMG(0x1032a3a0u)))) + cow_bits2f(0u));
    wrf32(sp0 - 0x98u, (float)d17);
    d18 = (double)(float)fr(g, fr(g, fr(g, fr(g, cow_bits2f(0u) * (double)rdf32(COW_IMG(0x1035818cu))) + fr(g, cow_bits2f(0x3f800000u) * (double)rdf32(COW_IMG(0x103295d8u)))) + fr(g, cow_bits2f(0u) * (double)rdf32(COW_IMG(0x1032a3a0u)))) + cow_bits2f(0u));
    wrf32(sp0 - 0x94u, (float)d18);
    d19 = (double)(float)fr(g, (double)rdf32(sp0 - 0xa4u) - (double)rdf32(COW_IMG(0x1032961cu)));
    wrf32(sp0 - 0xa4u, (float)d19);
    g->eax = sp0 - 0xa8u;
    g->esp = sp0 - 0xbcu;
    t20 = cow_thiscall(g, COW_IMG(0x1016b1d0u), self + 0x178u, 3, sp0 - 0xa8u, sp0 - 0x9cu, sp0 - 0xcu);
    if ((uint8_t)t20 != 0u)
    {
        eax = t20;
        goto L_10181922;
    }
    wr32(sp0 - 0xc0u, sp0 - 0x10u);
    wr32(sp0 - 0xc4u, 0x42c80000u);
    t21 = rd32(sp0 - 0x94u);
    wr32(sp0 - 0xc8u, t21);
    wr32(sp0 - 0xccu, sp0 - 0x10u);
    d22 = (double)(float)fr(g, (double)rdf32(sp0 - 0x98u) - (double)rdf32(COW_IMG(0x1032961cu)));
    wrf32(sp0 - 0xccu, (float)d22);
    t23 = rd32(sp0 - 0x9cu);
    wr32(sp0 - 0xd0u, t23);
    g->eax = t23;
    g->edx = t21;
    g->esp = sp0 - 0xbcu;
    t24 = cow_thiscall(g, COW_IMG(0x10181210u), self, 5, t23, cow_f2bits(d22), t21, 0x42c80000u, sp0 - 0x10u);
    t25 = g->edx;
    if ((uint8_t)t24 == 0u)
    {
        eax = t24;
        goto L_10181922;
    }
    eax = t24;
    edx = t25;
    g->eax = eax;
    g->esp = sp0 - 0xbcu;
    t26 = cow_thiscall(g, COW_IMG(0x10168fc0u), self + 0x178u, 0);
    if (t26 != 9u)
    {
        eax = t26;
        goto L_10181922;
    }
    eax = t26;
    g->esi = rd32(sp0 - 0xb8u);
    g->edi = rd32(sp0 - 0xbcu);
    return (eax & 0xffffff00u) | 1u;
L_10181922: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101815d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101815d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
