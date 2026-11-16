/* f_0x101039f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101039f0(Guest* g)
{
    double d4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x100dc120u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    d4 = fr(g, fr(g, (double)(int64_t)cow_i64(t1, 0u) * (double)rdf32(COW_IMG(0x1032d42cu))) + (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d4);
    t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), t1, g->ecx, g->edx, 1, 0);
    t6 = g->edx;
    g->edx = t6;
    return t5 + rd32(COW_IMG(0x104e0af8u));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101039f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101039f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
