/* f_0x10060330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10060330(Guest* g)
{
    double d1;
    double d12;
    double d13;
    double d18;
    double d23;
    double d27;
    double d3;
    double d32;
    double d6;
    uint32_t eax;
    uint32_t t10;
    uint32_t t11;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t28;
    uint32_t t29;
    uint32_t t30;
    uint32_t t31;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    d1 = fr(g, (double)rdf32(self + 0x34u) - (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u));
    t2 = rd32(COW_IMG(0x1047bfa8u));
    d3 = (double)rdf32(COW_IMG(0x103295d8u));
    wrf32(self + 0x34u, (float)d1);
    if (!(d1 < d3))
    {
        eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, d3, 1u);
        x0 = d1;
        goto L_10060384;
    }
    x0 = d1;
    t4 = rd32(self + 0x3cu);
    wr32(rd32(COW_IMG(0x104568fcu)) + 0x32cu, t4);
    t5 = rd32(COW_IMG(0x104568fcu));
    d6 = (double)rdf32(self + 0x4cu);
    wrf32(t5 + 0x330u, (float)d6);
    g->eax = rd32(self);
    g->edx = t5;
    t7 = rd32(self);
    g->esp = sp0 - 0xcu;
    t8 = cow_thiscall(g, rd32(t7 + 0x18u), self, 1, 1u);
    t9 = g->edx;
    g->edx = t9;
    return (t8 & 0xffffff00u) | 1u;
L_10060384: ;
    t10 = (uint32_t)(int16_t)rd16(self + 0x40u);
    t11 = rd8(self + 0x3eu);
    g->edx = t11;
    d12 = fr(g, fr(g, (double)(int32_t)t10 * fr(g, x0 / (double)rdf32(self + 0x38u))) + (double)(int32_t)t11);
    d13 = fr(g, x0 / (double)rdf32(self + 0x38u));
    fpush(g, d12);
    g->esp = sp0 - 0xcu;
    t14 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t15 = g->edx;
    t16 = (uint32_t)(int16_t)rd16(self + 0x42u);
    t17 = rd8(self + 0x3du);
    g->ecx = t17;
    d18 = fr(g, fr(g, (double)(int32_t)t16 * d13) + (double)(int32_t)t17);
    fpush(g, d18);
    t19 = cow_call_regs(g, COW_IMG(0x10311c6cu), t16, g->ecx, g->edx, 1, 0);
    t20 = g->ecx;
    t21 = (uint32_t)(int16_t)rd16(self + 0x44u);
    t22 = rd8(self + 0x3cu);
    d23 = fr(g, fr(g, (double)(int32_t)t21 * d13) + (double)(int32_t)t22);
    fpush(g, d23);
    t24 = cow_call_regs(g, COW_IMG(0x10311c6cu), t22, g->ecx, g->edx, 1, 0);
    t25 = (uint32_t)(int16_t)rd16(self + 0x46u);
    t26 = rd8(self + 0x3fu);
    d27 = fr(g, fr(g, (double)(int32_t)t25 * d13) + (double)(int32_t)t26);
    fpush(g, d27);
    t28 = cow_call_regs(g, COW_IMG(0x10311c6cu), t24, g->ecx, g->edx, 1, 0);
    t29 = ((t14 << 0x10u | (uint8_t)t19 << 8u | (uint8_t)t24) & 0xffffffu) | (uint8_t)t28 << 0x18u;
    t30 = rd32(COW_IMG(0x104568fcu));
    wr32(t30 + 0x32cu, t29);
    t31 = rd32(COW_IMG(0x104568fcu));
    d32 = fr(g, fr(g, fr(g, (double)rdf32(self + 0x4cu) - (double)rdf32(self + 0x48u)) * d13) + (double)rdf32(self + 0x48u));
    wrf32(t31 + 0x330u, (float)d32);
    g->edx = t31;
    return t30 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10060330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10060330(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
