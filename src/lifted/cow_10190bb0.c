/* f_0x10190bb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10190bb0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t zf;
    const uint32_t self = g->ecx;

    if (rd32(rd32(self + 0x18u) + 0xf10cu) != 0u)
    {
        eax = rd32(rd32(self + 0x18u) + 0xf10cu);
        edx = rd32(self + 0x18u);
        goto L_10190bdb;
    }
    if (rd32(self + 4u) == 0x20u)
    {
        eax = rd32(self + 4u);
        goto L_10190bcb;
    }
    eax = rd32(self + 4u);
    if (eax != 0x21u) goto L_10190c4a;
L_10190bcb: ;
    wr32(self + 4u, 0xeu);
    wr32(self + 0xcu, 0u);
    return eax;
L_10190bdb: ;
    if (eax != 1u) goto L_10190c4a;
    if (rd32(edx + 0xf110u) > 5u) goto L_10190c4a;
    edx = rd32(edx + 0xf110u);
    t1 = rd32(COW_IMG(0x10190c4cu) + edx * 4u);
    switch (t1 - RD)
    {
    case 0x10190bf6u: goto L_10190bf6;
    case 0x10190c03u: goto L_10190c03;
    case 0x10190c28u: goto L_10190c28;
    case 0x10190c34u: goto L_10190c34;
    case 0x10190c40u: goto L_10190c40;
    default: rt_fatal(g, COW_IMG(0x10190befu), "switch");
    }
    return 0;
L_10190bf6: ;
    if (rd32(self + 4u) == 0xfu) goto L_10190c1c;
    eax = rd32(self + 4u);
    zf = eax == 0x10u;
L_10190c0e: ;
    if (zf) goto L_10190c1c;
    wr32(self + 0xcu, 1u);
    wr32(self + 4u, 0xfu);
    return eax;
L_10190c03: ;
    if (rd32(self + 4u) == 0xfu) goto L_10190c1c;
    eax = rd32(self + 4u);
    zf = eax == 0x21u;
    goto L_10190c0e;
L_10190c1c: ;
    if (rd32(self + 0xcu) != 0u)
    {
        eax = rd32(self + 0xcu);
        goto L_10190c4a;
    }
    eax = rd32(self + 0xcu);
    wr32(self + 0xcu, 1u);
    return eax;
L_10190c28: ;
    wr32(self + 0xcu, 1u);
    wr32(self + 4u, 0x22u);
    return eax;
L_10190c34: ;
    wr32(self + 0xcu, 1u);
    wr32(self + 4u, 0x20u);
    return eax;
L_10190c40: ;
    wr32(self + 4u, 0x21u);
    wr32(self + 0xcu, 1u);
L_10190c4a: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10190bb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10190bb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
