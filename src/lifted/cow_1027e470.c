/* f_0x1027e470 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1027e470(Guest* g)
{
    double d2;
    double d4;
    uint32_t t1;
    uint32_t t3;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((rd8(arg1) & 4u) != 0u)
    {
        t1 = rd32(arg1 + 0x1cu);
        d2 = fr(g, fr(g, (double)rdf32(rd32(arg1 + 0x18u) + 0xacu) / fr(g, (double)rdf32(rd32(arg1 + 0x18u) + 0xa8u) - (double)rdf32(rd32(arg1 + 0x18u) + 0xa4u))) * (double)rdf32(rd32(rd32(arg1 + 0x14u) + 0xb8u) + 0x24u));
        wrf32(arg1 + 8u, (float)d2);
        t3 = rd32(arg1 + 8u);
        d4 = fr(g, d2 + (double)rdf32(t1 + 0x24u));
        wr32(arg1 + 0x10u, t3);
        wrf32(arg1 + 0xcu, (float)d4);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027e470(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1027e470(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
