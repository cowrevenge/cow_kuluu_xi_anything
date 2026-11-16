/* f_0x100bc060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100bc060(Guest* g)
{
    double d12;
    double d15;
    double d17;
    double d19;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    wr32(sp0 - 0x20u, 2u);
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t2 = g->edx;
    wr32(sp0 - 0x20u, t1);
    g->esp = sp0 - 0x14u;
    t3 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t2, 3, t1, sp0 - 4u, sp0 - 8u);
    if ((uint8_t)t3 == 0u)
    {
        ebx = 6u;
        goto L_100bc23d;
    }
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u) == 0u)
    {
        ebx = 6u;
        goto L_100bc23d;
    }
    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u);
    if (rd32(eax + 0xd4u) == 0u)
    {
        ebx = 6u;
        goto L_100bc23d;
    }
    edi = rd32(eax + 0xd4u);
    wr32(sp0 - 8u, eax);
    t4 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    if (t4 > 4u)
    {
        ebx = 6u;
        goto L_100bc23d;
    }
    ecx = t4;
    edx = rd32(self + 0x20u);
    t5 = rd32(COW_IMG(0x100bc24cu) + ecx * 4u);
    switch (t5 - RD)
    {
    case 0x100bc0e3u: goto L_100bc0e3;
    case 0x100bc12du: goto L_100bc12d;
    case 0x100bc169u: goto L_100bc169;
    case 0x100bc1a5u: goto L_100bc1a5;
    case 0x100bc1bdu: goto L_100bc1bd;
    default: rt_fatal(g, COW_IMG(0x100bc0dcu), "switch");
    }
    return;
L_100bc0e3: ;
    t20 = rd32(eax + 0x34u);
    wr32(rd32(edi + 0x260u) + 0x150u, t20);
    t21 = rd32(eax + 0x38u);
    wr32(rd32(edi + 0x260u) + 0x154u, t21);
    t22 = rd32(eax + 0x3cu);
    wr32(rd32(edi + 0x260u) + 0x158u, t22);
    t23 = rd32(eax + 0x40u);
    wr32(rd32(edi + 0x260u) + 0x15cu, t23);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    return;
L_100bc12d: ;
    wr32(sp0 - 0x18u, 6u);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t18 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    wr32(sp0 - 8u, t18);
    d19 = fr(g, fr(g, (double)(int32_t)t18 * (double)rdf32(COW_IMG(0x10329d2cu))) * (double)rdf32(COW_IMG(0x10330250u)));
    wrf32(rd32(edi + 0x260u) + 0x150u, (float)d19);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    return;
L_100bc169: ;
    wr32(sp0 - 0x18u, 6u);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t16 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    wr32(sp0 - 8u, t16);
    d17 = fr(g, fr(g, (double)(int32_t)t16 * (double)rdf32(COW_IMG(0x10329d2cu))) * (double)rdf32(COW_IMG(0x10330250u)));
    wrf32(rd32(edi + 0x260u) + 0x154u, (float)d17);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    return;
L_100bc1a5: ;
    wr32(sp0 - 0x18u, 6u);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t14 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    wr32(sp0 - 8u, t14);
    ebx = 8u;
    x0 = (double)(int32_t)t14;
L_100bc225: ;
    d15 = fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x10329d2cu))) * (double)rdf32(COW_IMG(0x10330250u)));
    wrf32(rd32(edi + 0x260u) + 0x158u, (float)d15);
L_100bc23d: ;
    wr16(self + 0x256u, (uint16_t)((uint16_t)ebx + rd16(self + 0x256u)));
    return;
L_100bc1bd: ;
    wr32(sp0 - 0x18u, 6u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t6 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t7 = g->edx;
    wr32(sp0 - 8u, t6);
    wr32(sp0 - 0x18u, 8u);
    t8 = rd32(edi + 0x260u);
    d9 = fr(g, fr(g, (double)(int32_t)t6 * (double)rdf32(COW_IMG(0x10329d2cu))) * (double)rdf32(COW_IMG(0x10330250u)));
    wrf32(t8 + 0x150u, (float)d9);
    g->eax = t8;
    g->edx = t7;
    t10 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
    t11 = g->edx;
    wr32(sp0 - 8u, t10);
    wr32(sp0 - 0x18u, 0xau);
    d12 = fr(g, fr(g, (double)(int32_t)t10 * (double)rdf32(COW_IMG(0x10329d2cu))) * (double)rdf32(COW_IMG(0x10330250u)));
    wrf32(rd32(edi + 0x260u) + 0x154u, (float)d12);
    t13 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xau);
    wr32(sp0 - 8u, t13);
    ebx = 0xcu;
    x0 = (double)(int32_t)t13;
    goto L_100bc225;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100bc060(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100bc060(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
