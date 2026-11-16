/* f_0x101f8a00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101f8a00(Guest* g)
{
    double d14;
    double d15;
    double d17;
    double d18;
    double d19;
    double d20;
    double d21;
    double d4;
    double d8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    t1 = (uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
    g->ecx = t1;
    t2 = rd16(COW_IMG(0x106218bau));
    t3 = rd16(COW_IMG(0x106218b6u));
    d4 = fr(g, (double)(int32_t)t1 * (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d4);
    g->esp = sp0 - 0x10u;
    t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), (in_eax & 0xffff0000u) | (uint16_t)(t2 - t3), g->ecx, g->edx, 1, 0);
    t6 = g->ecx;
    t7 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
    g->ecx = t6;
    d8 = fr(g, fr(g, (double)(int32_t)t7 * (double)rdf32(COW_IMG(0x1032ac88u))) * (double)rdf32(COW_IMG(0x10331390u)));
    fpush(g, d8);
    t9 = cow_call_regs(g, COW_IMG(0x10311c6cu), t7, g->ecx, g->edx, 1, 0);
    t10 = g->ecx;
    wr16(self + 0x1cu, (uint16_t)t9);
    wr16(self + 0x1eu, (uint16_t)t5);
    t11 = (uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
    t12 = rd32(COW_IMG(0x106218b8u));
    t13 = rd32(COW_IMG(0x106218b4u));
    d14 = (double)rdf32(COW_IMG(0x10335310u));
    wr8(self + 0x15u, rd8(self + 0x15u) | 1u);
    d15 = (double)(float)fr(g, d14 * (double)(int32_t)t11);
    t16 = (uint32_t)(int16_t)(t12 - t13);
    d17 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032ac88u)) * (double)(int32_t)t16);
    d18 = fr(g, d17 * (double)rdf32(COW_IMG(0x10331380u)));
    d19 = fr(g, d15 * (double)rdf32(COW_IMG(0x10339c18u)));
    d20 = fr(g, (double)(int32_t)t16 - fr(g, fr(g, (double)rdf32(COW_IMG(0x1032ac88u)) * (double)(int32_t)t16) * (double)rdf32(COW_IMG(0x1032ae48u))));
    d21 = fr(g, (double)(int32_t)t11 - fr(g, fr(g, d14 * (double)(int32_t)t11) * (double)rdf32(COW_IMG(0x1032dfb8u))));
    wrf32(self + 0x44u, (float)d18);
    wrf32(self + 0x48u, (float)d19);
    wrf32(self + 0x4cu, (float)d20);
    wrf32(self + 0x50u, (float)d21);
    wr8(rd32(COW_IMG(0x104e1d4cu)) + 0x88u, 0u);
    wr32(self + 0x70u, 0x41000000u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f8a00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f8a00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
