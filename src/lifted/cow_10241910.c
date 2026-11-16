/* f_0x10241910 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10241910(Guest* g)
{
    double d11;
    double d12;
    double d16;
    double d4;
    double d5;
    double d7;
    uint32_t t1;
    uint32_t t10;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    wr32(self + 0x28u, 0u);
    if (rd32(COW_IMG(0x10669054u)) != 1u)
    {
        wr32(COW_IMG(0x1066908cu), 0u);
    }
    t1 = rd32(self + 8u);
    wr32(self + 0x14u, rd32(COW_IMG(0x1066908cu)));
    wr32(self + 0x18u, rd32(COW_IMG(0x1066908cu)));
    wr8(t1 + 0x5du, 0u);
    wr8(rd32(self + 8u) + 0x85u, 0u);
    wr8(rd32(self + 8u) + 0x86u, 0u);
    t2 = rd32(self + 8u);
    wr8(t2 + 0x84u, 0u);
    wr8(rd32(self + 8u) + 0xd0u, 1u);
    g->edx = t2;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10160290u), COW_IMG(0x10621838u), 1, 1u);
    t3 = g->edx;
    d4 = cow_take_float(g);
    d5 = (double)(float)fr(g, d4 * (double)rdf32(COW_IMG(0x10329a08u)));
    t6 = cow_thiscall(g, COW_IMG(0x101602c0u), COW_IMG(0x10621838u), 1, 1u);
    d7 = cow_take_float(g);
    t8 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) >> 0x10u);
    g->ecx = rd32(COW_IMG(0x106218b4u));
    g->edx = t8;
    t9 = rd32(COW_IMG(0x106218b4u));
    t10 = rd32(COW_IMG(0x106218b8u));
    d11 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, d7 * (double)rdf32(COW_IMG(0x10329a08u)))) * (double)(int32_t)t8) - (double)rdf32(COW_IMG(0x10329e98u)));
    d12 = fr(g, d7 * (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d11);
    g->esp = sp0 - 0x2cu;
    t13 = cow_call_regs(g, COW_IMG(0x10311c6cu), t6, g->ecx, g->edx, 1, 0);
    t14 = g->ecx;
    t15 = g->edx;
    g->edx = t15;
    d16 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - d5) * (double)(int32_t)(uint32_t)(int16_t)t10) - (double)rdf32(COW_IMG(0x1033cb64u)));
    fpush(g, d16);
    g->esp = sp0 - 0x30u;
    t17 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint32_t)(int16_t)t10, g->ecx, g->edx, 1, 0);
    t18 = g->edx;
    g->edx = t18;
    g->esp = sp0 - 0x18u;
    t19 = cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(self + 8u), 7, t17, t13, 0x280u, 0x1e0u, 1u, 0u, 0u);
    t20 = g->edx;
    g->edx = t20;
    return t19;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10241910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10241910(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
