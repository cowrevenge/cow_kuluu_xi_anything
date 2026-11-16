/* f_0x1001e4f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1001e4f0(Guest* g)
{
    double d9;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x44u, COW_IMG(0x1035122cu));
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x18u;
    t4 = cow_cdecl(g, COW_IMG(0x10015290u), 1, 0x43af0000u);
    t5 = g->ecx;
    t6 = g->edx;
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x50u, self + 0x44u);
    t7 = g->ecx;
    t8 = g->edx;
    d9 = fr(g, (double)rdf32(self + 0x58u) + (double)rdf32(COW_IMG(0x1032961cu)));
    wrf32(self + 0x58u, (float)d9);
    wr32(self + 0x5cu, 0u);
    g->eax = self + 0xa8u;
    g->edx = t8;
    g->esp = sp0 - 0x24u;
    t10 = cow_cdecl(g, COW_IMG(0x10026e50u), 4, self + 0xa8u, 0u, 0xbf800000u, 0u);
    t11 = g->edx;
    g->ecx = self + 0x6cu;
    g->esp = sp0 - 0x34u;
    t12 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x6cu, self + 0x50u);
    t13 = g->ecx;
    g->esp = sp0 - 0x3cu;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x60u, self + 0x44u);
    t14 = rd32(self + 0x5cu);
    wr32(self + 0x78u, t14);
    wr32(self + 0x84u, 0u);
    wr32(self + 0x80u, 0u);
    wr32(self + 0x7cu, 0u);
    wr8(self + 0x88u, 0u);
    wr8(self + 0x89u, 0u);
    wr8(self + 0x8au, 0u);
    wr8(self + 0xf4u, 0u);
    return t14;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001e4f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001e4f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
