/* f_0x102a63e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102a63e0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    wr32(arg2, 0u);
    if (rd8(arg1 + 0x13u) - 1u > 4u) goto L_102a6433;
    eax = rd8(arg1 + 0x13u) - 1u;
    t1 = rd32(COW_IMG(0x102a6438u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x102a6401u: goto L_102a6401;
    case 0x102a6408u: goto L_102a6408;
    case 0x102a640fu: goto L_102a640f;
    default: rt_fatal(g, COW_IMG(0x102a63fau), "switch");
    }
    return 0;
L_102a6401: ;
    return 4u;
L_102a6408: ;
    return 3u;
L_102a640f: ;
    if ((rd8(arg1 + 0x12u) & 0x3fu) == 1u) goto L_102a6423;
    edx = (rd8(arg1 + 0x12u) & 0x3fu) - 1u;
    if (edx == 1u) goto L_102a642b;
    edx = edx - 1u;
    if (edx != 1u) goto L_102a6433;
L_102a6423: ;
    wr32(arg2, 4u);
    return 1u;
L_102a642b: ;
    wr32(arg2, 3u);
    return 1u;
L_102a6433: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a63e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a63e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
