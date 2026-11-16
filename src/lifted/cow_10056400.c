/* f_0x10056400 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10056400(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d4;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x18u, in_esi);
    t1 = rd32(self + 0x54u);
    wr32(sp0 - 0x10u, t1);
    t2 = rd32(self + 0x58u);
    wr32(sp0 - 0xcu, t2);
    t3 = rd32(self + 0x5cu);
    wr32(sp0 - 8u, t3);
    if (rd8(self + 0x1b0u) != 0u)
    {
        eax = (t1 & 0xffffff00u) | rd8(self + 0x1b0u);
        ecx = t2;
        goto L_1005646b;
    }
    ecx = t2;
    wr32(sp0 - 0x1cu, ecx);
    d4 = (double)(float)fr(g, (double)rdf32(self + 0x1a8u) * (double)rdf32(self + 0x19cu));
    wrf32(sp0 - 0x1cu, (float)d4);
    wr32(sp0 - 0x20u, 0u);
    t5 = rd32(self + 0xf8u);
    wr32(sp0 - 0x24u, t5);
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    t6 = rd32(self + 0x194u);
    wr32(sp0 - 0x2cu, t6);
    g->eax = t6;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x18u;
    t7 = cow_stdcall(g, COW_IMG(0x10178610u), 5, t6, sp0 - 0x10u, t5, 0u, cow_f2bits(d4));
    t8 = g->edx;
    wr32(self + 0x1acu, t7);
    wr8(self + 0x1b0u, 1u);
    g->edx = t8;
    return t7;
L_1005646b: ;
    d9 = (double)rdf32(self + 0x1a0u);
    if (!(d9 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        x0 = (double)rdf32(self + 0x1a0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    d10 = (double)(float)fr(g, fr(g, (double)rdf32(self + 0x1a4u) * (double)rdf32(self + 0x138u)) * x0);
    wrf32(sp0 - 0x14u, (float)d10);
    d11 = fr(g, fr(g, (double)rdf32(self + 0x1a4u) * (double)rdf32(self + 0x138u)) * x0);
    if (d11 < (double)rdf32(COW_IMG(0x103295d8u)))
    {
        wr32(sp0 - 0x14u, 0u);
    }
    wr32(sp0 - 0x1cu, ecx);
    d12 = (double)(float)fr(g, (double)rdf32(self + 0x1a8u) * (double)rdf32(self + 0x19cu));
    wrf32(sp0 - 0x1cu, (float)d12);
    t13 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x20u, t13);
    t14 = rd32(self + 0xf8u);
    wr32(sp0 - 0x24u, t14);
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    t15 = rd32(self + 0x1acu);
    wr32(sp0 - 0x2cu, t15);
    g->eax = t15;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x18u;
    t16 = cow_stdcall(g, COW_IMG(0x10178530u), 5, t15, sp0 - 0x10u, t14, t13, cow_f2bits(d12));
    t17 = g->edx;
    g->edx = t17;
    return t16;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10056400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10056400(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
