/* f_0x100604b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100604b0(Guest* g)
{
    double d1;
    double d13;
    double d14;
    double d17;
    double d20;
    double d23;
    double d4;
    uint32_t ecx;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    d1 = fr(g, (double)rdf32(self + 0x34u) - (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u));
    t2 = rd32(COW_IMG(0x1047bfa8u));
    t3 = rd32(self + 0x40u);
    d4 = (double)rdf32(COW_IMG(0x103295d8u));
    wrf32(self + 0x34u, (float)d1);
    if (!(d1 < d4))
    {
        ecx = t3;
        x0 = d1;
        goto L_10060509;
    }
    ecx = t3;
    x0 = d1;
    wr32(COW_IMG(0x1065ca4cu), ecx);
    t5 = rd32(self + 0x48u);
    wr32(COW_IMG(0x1065ca54u), t5);
    t6 = rd32(self + 0x50u);
    wr32(COW_IMG(0x1065ca48u), t6);
    t7 = rd32(self + 0x58u);
    wr32(COW_IMG(0x1065ca50u), t7);
    g->eax = t6;
    g->edx = rd32(self);
    t8 = rd32(self);
    g->esp = sp0 - 0xcu;
    t9 = cow_thiscall(g, rd32(t8 + 0x18u), self, 1, 1u);
    t10 = g->edx;
    g->edx = t10;
    return (t9 & 0xffffff00u) | 1u;
L_10060509: ;
    t11 = rd32(self + 0x3cu);
    t12 = ecx - rd32(self + 0x3cu);
    g->ecx = t12;
    d13 = fr(g, fr(g, (double)(int32_t)t12 * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, x0 / (double)rdf32(self + 0x38u)))) + (double)(int32_t)t11);
    d14 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, x0 / (double)rdf32(self + 0x38u)));
    fpush(g, d13);
    g->esp = sp0 - 0xcu;
    t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), t11, g->ecx, g->edx, 1, 0);
    t16 = g->ecx;
    wr32(COW_IMG(0x1065ca4cu), t15);
    d17 = fr(g, fr(g, fr(g, (double)rdf32(self + 0x48u) - (double)rdf32(self + 0x44u)) * d14) + (double)rdf32(self + 0x44u));
    wrf32(COW_IMG(0x1065ca54u), (float)d17);
    t18 = rd32(self + 0x4cu);
    t19 = rd32(self + 0x50u) - rd32(self + 0x4cu);
    g->edx = t19;
    d20 = fr(g, fr(g, (double)(int32_t)t19 * d14) + (double)(int32_t)t18);
    fpush(g, d20);
    t21 = cow_call_regs(g, COW_IMG(0x10311c6cu), t18, g->ecx, g->edx, 1, 0);
    t22 = g->edx;
    wr32(COW_IMG(0x1065ca48u), t21);
    d23 = fr(g, fr(g, fr(g, (double)rdf32(self + 0x58u) - (double)rdf32(self + 0x54u)) * d14) + (double)rdf32(self + 0x54u));
    wrf32(COW_IMG(0x1065ca50u), (float)d23);
    g->edx = t22;
    return t21 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100604b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100604b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
