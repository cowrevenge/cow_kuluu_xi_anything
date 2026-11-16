/* f_0x10246840 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10246840(Guest* g)
{
    double d1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    d1 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1032d3d8u)));
    fpush(g, d1);
    g->esp = sp0 - 0x18u;
    t2 = cow_call_regs(g, COW_IMG(0x10311c6cu), in_eax, g->ecx, g->edx, 1, 0);
    t3 = g->edx;
    g->edx = t3;
    g->esp = sp0;
    t4 = cow_stdcall(g, COW_IMG(0x1024c080u), 8, 0xcu, t2, 0u, 0u, 0u, 0u, 0u, 0u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10246840(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10246840(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
