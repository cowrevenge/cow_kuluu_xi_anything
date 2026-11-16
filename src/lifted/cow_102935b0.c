/* f_0x102935b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=2 */
uint32_t cow_fn_102935b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd8(arg2 + rd32(rd32(sp0 + 4u) + 4u)) & 0x7fu;
    t2 = rd32(rd32(sp0 + 4u) + 4u);
    t3 = rd8(arg2 + rd32(rd32(sp0 + 4u) + 4u));
    t4 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    if ((int8_t)t3 >= 0)
    {
        eax = (t2 & 0xffffff00u) | t3;
        edx = t4;
    }
    else
    {
        eax = (t2 & 0xffffff00u) | t3;
        ecx = t1;
        edx = t4;
        wr32(sp0 + 4u, -ecx);
    }
    g->edx = edx;
    fpush(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(edx + 0x10u)));
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102935b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102935b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
