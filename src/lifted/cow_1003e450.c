/* f_0x1003e450 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1003e450(Guest* g)
{
    double d13;
    double d19;
    double d24;
    double d5;
    double d7;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t25;
    uint32_t t26;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = (uint32_t)(int16_t)rd16(rd32(sp0 + 4u));
    t2 = rd32(COW_IMG(0x1047bfa8u));
    t3 = rd8(self + 2u);
    t4 = rd32(sp0 + 4u);
    d5 = (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeacu);
    wr32(sp0 + 4u, t1);
    t6 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t3);
    g->edx = t3;
    d7 = fr(g, fr(g, (double)(int32_t)t6 * d5) + (double)(int32_t)rd32(sp0 + 4u));
    fpush(g, d7);
    g->esp = sp0 - 8u;
    t8 = cow_call_regs(g, COW_IMG(0x10311c6cu), t2, g->ecx, g->edx, 1, 0);
    t9 = g->edx;
    wr8(self + 2u, (uint8_t)t8);
    t10 = (uint32_t)(int16_t)rd16(t4 + 2u);
    t11 = rd8(self + 1u);
    wr32(sp0 + 4u, t10);
    t12 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t11);
    g->ecx = t11;
    d13 = fr(g, fr(g, (double)(int32_t)t12 * d5) + (double)(int32_t)rd32(sp0 + 4u));
    fpush(g, d13);
    t14 = cow_call_regs(g, COW_IMG(0x10311c6cu), t10, g->ecx, g->edx, 1, 0);
    t15 = g->ecx;
    wr8(self + 1u, (uint8_t)t14);
    t16 = (uint32_t)(int16_t)rd16(t4 + 4u);
    t17 = rd8(self);
    wr32(sp0 + 4u, t16);
    t18 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t17);
    d19 = fr(g, fr(g, (double)(int32_t)t18 * d5) + (double)(int32_t)rd32(sp0 + 4u));
    fpush(g, d19);
    t20 = cow_call_regs(g, COW_IMG(0x10311c6cu), t17, g->ecx, g->edx, 1, 0);
    wr8(self, (uint8_t)t20);
    t21 = (uint32_t)(int16_t)rd16(t4 + 6u);
    t22 = rd8(self + 3u);
    wr32(sp0 + 4u, t21);
    t23 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t22);
    g->edx = t22;
    d24 = fr(g, fr(g, (double)(int32_t)t23 * d5) + (double)(int32_t)rd32(sp0 + 4u));
    fpush(g, d24);
    t25 = cow_call_regs(g, COW_IMG(0x10311c6cu), t20, g->ecx, g->edx, 1, 0);
    t26 = g->edx;
    wr8(self + 3u, (uint8_t)t25);
    g->edx = t26;
    return t25;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003e450(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003e450(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
