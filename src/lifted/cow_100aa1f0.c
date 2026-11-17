/* f_0x100aa1f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100aa1f0(Guest* g)
{
    double d13;
    double d14;
    double d15;
    double d18;
    double d19;
    double d2;
    double d21;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d4;
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    double loc_24_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t16;
    uint32_t t17;
    uint32_t t20;
    uint32_t t22;
    uint32_t t23;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    g->esp = sp0 - 0x2cu;
    t1 = cow_call_regs(g, COW_IMG(0x10014cf0u), in_eax, g->ecx, g->edx, 1, 0);
    d2 = cow_take_float(g);
    wrf32(sp0 - 0x24u, (float)(double)(float)d2);
    t3 = rd32(sp0 + 4u);
    d4 = fr(g, (double)rdf32(self + 0x108u) - (double)(float)d2);
    wrf32(self + 0x108u, (float)d4);
    if (!(d4 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        edi = t3;
        loc_24_f = (double)(float)d2;
        goto L_100aa27a;
    }
    edi = t3;
    wr32(sp0 - 0x30u, edi);
    t5 = rd32(self + 0xc4u);
    wr32(edi, t5);
    t6 = rd32(self + 0xc8u);
    wr32(edi + 4u, t6);
    t7 = rd32(self + 0xccu);
    wr32(edi + 8u, t7);
    t8 = rd32(self + 0xd0u);
    wr32(edi + 0xcu, t8);
    wr32(sp0 - 0x34u, self + 0x5c4u);
    g->eax = t8;
    g->ecx = self + 0x5c4u;
    g->esp = sp0 - 0x2cu;
    t9 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x5c4u, edi);
    t10 = g->ecx;
    wr32(sp0 - 0x38u, edi);
    wr32(sp0 - 0x3cu, self + 0x5fcu);
    g->esp = sp0 - 0x34u;
    t11 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x5fcu, edi);
    wr32(self + 0x608u, 0x3f800000u);
    wr8(self + 0x104u, 0u);
    return t11;
L_100aa27a: ;
    t12 = rd32(self + 0xccu);
    wr32(sp0 - 8u, t12);
    wr32(sp0 - 0x30u, sp0 - 0x20u);
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    d13 = (double)(float)fr(g, (double)rdf32(self + 0xc4u) - (double)rdf32(edi));
    wrf32(sp0 - 0x20u, (float)d13);
    d14 = (double)(float)fr(g, (double)rdf32(self + 0xc8u) - (double)rdf32(edi + 4u));
    wrf32(sp0 - 0x1cu, (float)d14);
    d15 = (double)(float)fr(g, cow_bits2f(t12) - (double)rdf32(edi + 8u));
    wrf32(sp0 - 0x18u, (float)d15);
    g->eax = t12;
    g->edx = sp0 - 0x20u;
    g->esp = sp0 - 0x2cu;
    t16 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x20u, sp0 - 0x20u);
    t17 = g->edx;
    d18 = cow_take_float(g);
    wrf32(sp0 + 4u, (float)fr(g, sqrt(d18)));
    if (!(fr(g, sqrt(d18)) < (double)rdf32(COW_IMG(0x10329a18u))))
    {
        eax = (t16 & 0xffff0000u) | (uint16_t)cow_fsw(g, fr(g, sqrt(d18)), (double)rdf32(COW_IMG(0x10329a18u)), 0u);
        edx = t17;
        goto L_100aa2f8;
    }
    eax = (t16 & 0xffff0000u) | (uint16_t)cow_fsw(g, fr(g, sqrt(d18)), (double)rdf32(COW_IMG(0x10329a18u)), 0u);
    edx = t17;
    d19 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d19, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d19, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
        goto L_100aa2f8;
    }
    t20 = rd32(sp0 - 0x2cu);
    wr32(self + 0x108u, 0u);
    wr8(self + 0x104u, 0u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = t20;
    return 0u;
L_100aa2f8: ;
    d21 = (double)rdf32(sp0 + 4u);
    if (!(d21 < (double)rdf32(COW_IMG(0x103295d8u)))) goto L_100aa31f;
    t22 = rd32(sp0 - 0x2cu);
    wr32(self + 0x108u, 0u);
    wr8(self + 0x104u, 0u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = t22;
    return 0u;
L_100aa31f: ;
    wr32(sp0 - 0x30u, sp0 - 0x20u);
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    g->eax = sp0 - 0x20u;
    g->esp = sp0 - 0x28u;
    t23 = cow_cdecl(g, COW_IMG(0x10027510u), 3, sp0 - 0x20u, sp0 - 0x20u, rd32(sp0 - 0x2cu));
    d24 = fr(g, (double)rdf32(sp0 - 0x24u) * (double)rdf32(self + 0x10cu));
    d25 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d24, d25, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d24, d25, 1u) & 0x4100u;
        x0 = d24;
    }
    else
    {
        eax = cow_fsw(g, d24, d25, 1u) & 0x4100u;
        x0 = d24;
        d26 = (double)rdf32(sp0 + 4u);
        wr32(self + 0x108u, 0u);
        x0 = d26;
    }
    d27 = fr(g, fr(g, (double)rdf32(sp0 - 0x20u) * x0) + (double)rdf32(edi));
    wrf32(edi, (float)d27);
    d28 = fr(g, fr(g, (double)rdf32(sp0 - 0x1cu) * x0) + (double)rdf32(edi + 4u));
    wrf32(edi + 4u, (float)d28);
    d29 = fr(g, fr(g, x0 * (double)rdf32(sp0 - 0x18u)) + (double)rdf32(edi + 8u));
    wrf32(edi + 8u, (float)d29);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100aa1f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100aa1f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
