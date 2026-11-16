/* f_0x1001b520 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1001b520(Guest* g)
{
    double d2;
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(self + 8u) > 3u)
    {
        eax = rd8(self + 8u);
        goto L_1001b56e;
    }
    eax = rd8(self + 8u);
    t1 = rd32(COW_IMG(0x1001b574u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x1001b531u: goto L_1001b531;
    case 0x1001b53fu: goto L_1001b53f;
    case 0x1001b552u: goto L_1001b552;
    default: rt_fatal(g, COW_IMG(0x1001b52au), "switch");
    }
    return 0;
L_1001b531: ;
    wr8(self + 8u, 2u);
    wr32(self + 0xcu, arg1);
    return arg1;
L_1001b53f: ;
    wr8(self + 8u, 3u);
    wr32(self + 0x14u, arg1);
    wr32(self + 0xcu, arg1);
    return arg1;
L_1001b552: ;
    d2 = (double)rdf32(sp0 + 4u);
    if (!(d2 <= (double)rdf32(COW_IMG(0x1032961cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
        wr32(self + 0xcu, 0u);
        wr8(self + 8u, 2u);
    }
L_1001b56e: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001b520(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001b520(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
