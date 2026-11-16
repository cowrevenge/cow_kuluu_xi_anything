/* f_0x100f9560 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100f9560(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd16(arg3 + 0x12u) != rd16(arg1 + 0x3aea8u))
    {
        edx = (in_edx & 0xffff0000u) | rd16(arg3 + 0x12u);
        goto L_100f95ad;
    }
    edx = (in_edx & 0xffff0000u) | rd16(arg3 + 0x12u);
    if (rd32(arg3 + 0x14u) != 1u) goto L_100f95b2;
    wr8(arg1 + 0x3aeaau, rd8(arg3 + 0x10u));
    t1 = rd32(arg3 + 0x14u);
    wr32(arg1 + 0x3ae98u, t1);
    t2 = rd32(arg3 + 4u);
    wr32(arg1 + 0x3ae9cu, t2);
    t3 = rd32(arg3 + 8u);
    wr32(arg1 + 0x3aea0u, t3);
    t4 = rd32(arg3 + 0xcu);
    wr32(arg1 + 0x3aea4u, t4);
    g->edx = t3;
    return (t4 & 0xffffff00u) | 1u;
L_100f95ad: ;
    if ((uint16_t)edx != 0u)
    {
        eax = arg3;
        goto L_100f95cf;
    }
L_100f95b2: ;
    wr32(arg1 + 0x3ae98u, 0u);
    wr32(arg1 + 0x3ae9cu, 0u);
    wr32(arg1 + 0x3aea0u, 0u);
    wr32(arg1 + 0x3aea4u, 0u);
    wr32(arg1 + 0x3aea8u, 0u);
    t5 = rd32(arg3 + 0x14u);
    wr32(arg1 + 0x3ae98u, t5);
    eax = t5;
    edx = 0u;
L_100f95cf: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f9560(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f9560(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
