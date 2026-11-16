/* f_0x100aab30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100aab30(Guest* g)
{
    double d3;
    double d4;
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x10u, arg2);
    wr32(sp0 - 0x14u, arg1);
    wr32(sp0 - 0x18u, sp0 - 0xcu);
    g->edx = sp0 - 0xcu;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0xcu, arg1, arg2);
    t1 = g->edx;
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    g->esp = sp0 - 0x18u;
    t2 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0xcu, sp0 - 0xcu);
    d3 = cow_take_float(g);
    d4 = (double)rdf32(sp0 + 0xcu);
    if (!(d3 < d4))
    {
        eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, d4, 0u);
        goto L_100aab6a;
    }
    eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, d4, 0u);
    return (eax & 0xffffff00u) | 1u;
L_100aab6a: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100aab30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100aab30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
