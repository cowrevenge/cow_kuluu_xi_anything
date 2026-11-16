/* f_0x1003e2e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1003e2e0(Guest* g)
{
    double d1;
    double d13;
    double d5;
    double d9;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = self;
    g->edx = in_edx;
    d1 = fr(g, (double)rdf32(arg1) * (double)rdf32(COW_IMG(0x10329a20u)));
    fpush(g, d1);
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x10311c6cu), in_eax, g->ecx, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    wr8(self + 2u, (uint8_t)t2);
    g->ecx = t3;
    g->edx = t4;
    d5 = fr(g, (double)rdf32(arg1 + 4u) * (double)rdf32(COW_IMG(0x10329a20u)));
    fpush(g, d5);
    t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), t2, g->ecx, g->edx, 1, 0);
    t7 = g->ecx;
    t8 = g->edx;
    wr8(self + 1u, (uint8_t)t6);
    g->ecx = t7;
    g->edx = t8;
    d9 = fr(g, (double)rdf32(arg1 + 8u) * (double)rdf32(COW_IMG(0x10329a20u)));
    fpush(g, d9);
    t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), t6, g->ecx, g->edx, 1, 0);
    t11 = g->ecx;
    t12 = g->edx;
    wr8(self, (uint8_t)t10);
    g->edx = t12;
    d13 = fr(g, (double)rdf32(arg1 + 0xcu) * (double)rdf32(COW_IMG(0x10329a20u)));
    fpush(g, d13);
    t14 = cow_call_regs(g, COW_IMG(0x10311c6cu), t10, g->ecx, g->edx, 1, 0);
    t15 = g->edx;
    wr8(self + 3u, (uint8_t)t14);
    g->edx = t15;
    return t14;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003e2e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003e2e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
