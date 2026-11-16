/* f_0x10021d90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10021d90(Guest* g)
{
    double d6;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->eax = self + 0xf8u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1001e760u), self, 1, self + 0xf8u);
    t2 = g->edx;
    t3 = cow_thiscall(g, COW_IMG(0x1001e780u), self, 1, self + 0x104u);
    t4 = g->ecx;
    t5 = rd32(self + 0x114u);
    d6 = (double)rdf32(self + 0x110u);
    wrf32(self + 0x5cu, (float)d6);
    g->edx = t5;
    t7 = cow_cdecl(g, COW_IMG(0x10015290u), 1, t5);
    t8 = g->edx;
    g->edx = t8;
    return t7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10021d90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10021d90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
