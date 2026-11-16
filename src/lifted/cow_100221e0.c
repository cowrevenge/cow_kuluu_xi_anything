/* f_0x100221e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=1 */
void cow_fn_100221e0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd32(sp0 + 4u);
    g->edx = self;
    t2 = cow_call_regs(g, COW_IMG(0x10022170u), t1, g->ecx, g->edx, 1, 1, t1);
    t3 = g->edx;
    if ((int32_t)t2 >= 0)
    {
        eax = t2;
        edx = t3;
        goto L_100221fc;
    }
    fpush(g, (double)rdf32(COW_IMG(0x1032961cu)));
    return;
L_100221fc: ;
    t4 = (uint32_t)(int8_t)rd8(eax + edx + 0xbu);
    t5 = rd8(eax + edx + 0xbu);
    wr32(sp0 + 4u, t4);
    if ((uint32_t)(int8_t)t5 != 0xffu) goto L_10022215;
    fpush(g, (double)rdf32(COW_IMG(0x1032961cu)));
    return;
L_10022215: ;
    fpush(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329a18u))));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100221e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100221e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
