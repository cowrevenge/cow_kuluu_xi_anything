/* f_0x100243c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100243c0(Guest* g)
{
    double d3;
    double d5;
    double d6;
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    cow_frame(g, sp0, 36u);

    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 0x10u, t1);
    wr32(sp0 - 0x14u, arg4);
    wr32(sp0 - 0x18u, sp0 - 0xcu);
    g->edx = sp0 - 0xcu;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0xcu, arg4, t1);
    t2 = g->edx;
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    d3 = fr(g, (double)rdf32(sp0 + 4u) + (double)rdf32(sp0 + 0xcu));
    wrf32(sp0 + 8u, (float)d3);
    g->esp = sp0 - 0x18u;
    t4 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0xcu, sp0 - 0xcu);
    d5 = cow_take_float(g);
    d6 = (double)rdf32(sp0 + 8u);
    if (!(d5 <= d6))
    {
        eax = (t4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, d6, 0u);
        goto L_10024408;
    }
    eax = (t4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, d6, 0u);
    return (eax & 0xffffff00u) | 1u;
L_10024408: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100243c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100243c0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
