/* f_0x101efc00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101efc00(Guest* g)
{
    double d4;
    double d9;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = (uint32_t)(int16_t)rd16(rd32(sp0 + 4u)) - (uint32_t)(int16_t)rd16(self + 0x6cu);
    t2 = rd16(self + 0x6cu);
    t3 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    g->ecx = t1;
    d4 = fr(g, fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) - (double)rdf32(self + 0x24u)) * (double)rdf32(self + 0x58u)) + (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d4);
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint32_t)(int16_t)t2, g->ecx, g->edx, 1, 0);
    t6 = g->ecx;
    wr16(t3, (uint16_t)t5);
    t7 = (uint32_t)(int16_t)rd16(arg2) - (uint32_t)(int16_t)rd16(self + 0x6eu);
    t8 = rd16(self + 0x6eu);
    wr32(sp0 + 4u, t7);
    d9 = fr(g, fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) - (double)rdf32(self + 0x28u)) * (double)rdf32(self + 0x58u)) + (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d9);
    t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), t7, g->ecx, g->edx, 1, 0);
    wr16(arg2, (uint16_t)t10);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101efc00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101efc00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
