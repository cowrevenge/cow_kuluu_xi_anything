/* f_0x10181210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10181210(Guest* g)
{
    double d1;
    double d3;
    double d4;
    uint32_t eax;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x24u, arg1);
    wr32(sp0 - 0x10u, arg3);
    wr32(sp0 - 0x1cu, arg3);
    d1 = (double)(float)fr(g, (double)rdf32(sp0 + 8u) + (double)rdf32(sp0 + 0x10u));
    wrf32(sp0 - 0x20u, (float)d1);
    wr32(sp0 - 0x14u, arg2);
    wr32(sp0 - 0x28u, sp0 - 0xcu);
    wr32(sp0 - 0x2cu, sp0 - 0x24u);
    wr32(sp0 - 0x30u, sp0 - 0x18u);
    g->esp = sp0 - 0x24u;
    t2 = cow_thiscall(g, COW_IMG(0x101693b0u), self + 0x178u, 3, sp0 - 0x18u, sp0 - 0x24u, sp0 - 0xcu);
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        goto L_10181273;
    }
    d3 = (double)rdf32(sp0 - 8u);
    wrf32(arg5, (float)d3);
    return (arg5 & 0xffffff00u) | 1u;
L_10181273: ;
    d4 = (double)rdf32(sp0 + 8u);
    wrf32(arg5, (float)d4);
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10181210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10181210(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
