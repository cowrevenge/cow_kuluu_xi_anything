/* f_0x10189750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10189750(Guest* g)
{
    double d16;
    double d22;
    double d4;
    double d9;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t23;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = (in_ebx & 0xffffff00u) | rd8(rd32(sp0 + 0xcu));
    t2 = rd8(arg2) - (uint8_t)t1;
    t3 = rd32(sp0 + 0xcu);
    wr32(sp0 + 0xcu, t2);
    g->ecx = (uint8_t)t1;
    d4 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(sp0 + 0x10u));
    fpush(g, d4);
    g->esp = sp0 - 0x10u;
    t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), t2, g->ecx, g->edx, 1, 0);
    t6 = g->ecx;
    wr8(arg1, (uint8_t)((uint8_t)t1 + (uint8_t)t5));
    t7 = rd8(arg2 + 1u) - rd8(t3 + 1u);
    t8 = rd8(t3 + 1u);
    wr32(sp0 + 0xcu, t7);
    g->ecx = t6;
    g->edx = t7;
    d9 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(sp0 + 0x10u));
    fpush(g, d9);
    t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), t8, g->ecx, g->edx, 1, 0);
    t11 = g->ecx;
    t12 = g->edx;
    t13 = rd8(t3 + 1u);
    wr8(arg1 + 1u, (uint8_t)((uint8_t)t10 + t13));
    t14 = rd8(arg2 + 2u) - rd8(t3 + 2u);
    t15 = rd8(t3 + 2u);
    wr32(sp0 + 0xcu, t14);
    g->ecx = t14;
    d16 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(sp0 + 0x10u));
    fpush(g, d16);
    t17 = cow_call_regs(g, COW_IMG(0x10311c6cu), t15, g->ecx, g->edx, 1, 0);
    t18 = g->ecx;
    t19 = rd8(t3 + 2u);
    wr8(arg1 + 2u, (uint8_t)((uint8_t)t17 + t19));
    t20 = ((t1 | t19) & 0xffffff00u) | rd8(t3 + 3u);
    t21 = rd8(arg2 + 3u) - (uint8_t)t20;
    wr32(sp0 + 0xcu, t21);
    d22 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(sp0 + 0x10u));
    fpush(g, d22);
    t23 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)t20, g->ecx, g->edx, 1, 0);
    wr8(arg1 + 3u, (uint8_t)((uint8_t)t20 + (uint8_t)t23));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10189750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10189750(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
