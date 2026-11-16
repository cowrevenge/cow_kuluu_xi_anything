/* f_0x100f6630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f6630(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 > 3u) goto L_100f6663;
    t1 = rd32(COW_IMG(0x100f666cu) + arg2 * 4u);
    switch (t1 - RD)
    {
    case 0x100f6640u: goto L_100f6640;
    case 0x100f6646u: goto L_100f6646;
    case 0x100f664cu: goto L_100f664c;
    case 0x100f665du: goto L_100f665d;
    default: rt_fatal(g, COW_IMG(0x100f6639u), "switch");
    }
    return 0;
L_100f6640: ;
    return 3u;
L_100f6646: ;
    return 0x16u;
L_100f664c: ;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x100f2190u), arg1, rd32(arg1), in_edx, 1, 0);
    t2 = g->edx;
    g->edx = t2;
    return 0x17u;
L_100f665d: ;
    return 6u;
L_100f6663: ;
    return 0x15u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f6630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f6630(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
