/* f_0x10283e80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10283e80(Guest* g)
{
    double d5;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 152u);

    t1 = rd32(COW_IMG(0x1099d200u)) + 0x1c8u;
    wr32(sp0 - 0x84u, t1);
    wr32(sp0 - 0x88u, sp0 - 0x40u);
    g->esp = sp0 - 0x80u;
    cow_cdecl(g, COW_IMG(0x1027f100u), 2, sp0 - 0x40u, t1);
    wr32(sp0 - 0x8cu, sp0 - 0x40u);
    t2 = rd32(COW_IMG(0x1099d200u)) + 0x188u;
    wr32(sp0 - 0x90u, t2);
    wr32(sp0 - 0x94u, sp0 - 0x80u);
    g->esp = sp0 - 0x88u;
    cow_cdecl(g, COW_IMG(0x10280160u), 3, sp0 - 0x80u, t2, sp0 - 0x40u);
    t3 = rd32(sp0 - 0x48u);
    t4 = rd32(sp0 - 0x4cu);
    d5 = (double)rdf32(sp0 - 0x50u);
    wrf32(arg1, (float)d5);
    wr32(arg1 + 4u, t4);
    wr32(arg1 + 8u, t3);
    g->edx = t4;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10283e80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10283e80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
