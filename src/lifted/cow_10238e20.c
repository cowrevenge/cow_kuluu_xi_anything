/* f_0x10238e20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10238e20(Guest* g)
{
    double d13;
    double d16;
    double d5;
    double d9;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x14u, in_esi);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 2u, 0u);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t2 = cow_thiscall(g, COW_IMG(0x1011a710u), t1, 1, sp0 - 8u);
    t3 = g->edx;
    t4 = (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x10u, t4);
    wr32(sp0 - 0x1cu, 1u);
    wrf32(sp0 - 0xcu, (float)(double)(float)(double)(int32_t)t4);
    cow_thiscall(g, COW_IMG(0x10160290u), COW_IMG(0x10621838u), 1, 1u);
    d5 = cow_take_float(g);
    t6 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
    wr32(sp0 - 0x10u, t6);
    g->edx = rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u));
    t7 = rd32(COW_IMG(0x106218b8u));
    t8 = rd32(COW_IMG(0x106218b4u));
    d9 = fr(g, (double)rdf32(sp0 - 0xcu) - fr(g, fr(g, d5 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)(int32_t)t6));
    fpush(g, d9);
    t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), t6, g->ecx, g->edx, 1, 0);
    t11 = g->edx;
    wr32(sp0 - 0x1cu, 1u);
    cow_thiscall(g, COW_IMG(0x101602c0u), COW_IMG(0x10621838u), 1, 1u);
    t12 = g->ecx;
    d13 = cow_take_float(g);
    t14 = (uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
    wr32(sp0 - 0xcu, t14);
    t15 = (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0xcu, t15);
    g->edx = t14;
    d16 = fr(g, fr(g, fr(g, d13 * (double)rdf32(COW_IMG(0x10329a08u))) * (double)(int32_t)t14) + (double)(int32_t)t15);
    fpush(g, d16);
    t17 = cow_call_regs(g, COW_IMG(0x10311c6cu), t15, g->ecx, g->edx, 1, 0);
    t18 = g->edx;
    wr32(sp0 - 0x1cu, t17);
    wr32(sp0 - 0x20u, t10);
    g->edx = t18;
    t19 = cow_call_regs(g, COW_IMG(0x10119110u), t17, rd32(self + 8u), g->edx, 0, 2, t10, t17);
    t20 = g->edx;
    g->edx = t20;
    return t19;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10238e20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10238e20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
