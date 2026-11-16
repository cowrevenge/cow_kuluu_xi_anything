/* f_0x100f55d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f55d0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 > 3u) goto L_100f5625;
    t1 = rd32(COW_IMG(0x100f562cu) + arg2 * 4u);
    switch (t1 - RD)
    {
    case 0x100f55e0u: goto L_100f55e0;
    case 0x100f55e6u: goto L_100f55e6;
    case 0x100f55ecu: goto L_100f55ec;
    case 0x100f561fu: goto L_100f561f;
    default: rt_fatal(g, COW_IMG(0x100f55d9u), "switch");
    }
    return 0;
L_100f55e0: ;
    return 3u;
L_100f55e6: ;
    return 0x16u;
L_100f55ec: ;
    t2 = rd32(arg1);
    t3 = rd8(arg1 + 0xc5u);
    wr16(t2 + 0xcu, (uint16_t)(t3 + rd16(t2 + 0xcu)));
    wr16(t2 + 0xau, (uint16_t)((uint16_t)t3 + rd16(t2 + 0xau)));
    t4 = rd32(arg1);
    t5 = rd8(arg1 + 0xc6u);
    wr16(t4 + 0x10u, (uint16_t)(t5 + rd16(t4 + 0x10u)));
    wr16(t4 + 0x12u, (uint16_t)((uint16_t)t5 + rd16(t4 + 0x12u)));
    g->edx = (((in_edx & 0xffff0000u) | t3) & 0xffffff00u) | t5;
    return 0x17u;
L_100f561f: ;
    return 6u;
L_100f5625: ;
    return 0x15u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f55d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f55d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
