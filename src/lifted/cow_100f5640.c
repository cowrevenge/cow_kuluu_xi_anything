/* f_0x100f5640 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f5640(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 > 3u) goto L_100f567c;
    t1 = rd32(COW_IMG(0x100f5684u) + arg2 * 4u);
    switch (t1 - RD)
    {
    case 0x100f5650u: goto L_100f5650;
    case 0x100f5656u: goto L_100f5656;
    case 0x100f565cu: goto L_100f565c;
    case 0x100f5676u: goto L_100f5676;
    default: rt_fatal(g, COW_IMG(0x100f5649u), "switch");
    }
    return 0;
L_100f5650: ;
    return 3u;
L_100f5656: ;
    return 0x16u;
L_100f565c: ;
    if (rd16(rd32(arg1) + 0xau) != 0u)
    {
        eax = rd32(arg1);
        ecx = (self & 0xffff0000u) | rd16(rd32(arg1) + 0xau);
        wr16(eax + 0xau, (uint16_t)(ecx - 1u));
    }
    return 0x17u;
L_100f5676: ;
    return 6u;
L_100f567c: ;
    return 0x15u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f5640(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f5640(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
