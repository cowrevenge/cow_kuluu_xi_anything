/* f_0x10136070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10136070(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    t1 = rd16(arg2);
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x1015bc40u), rd32(COW_IMG(0x10621808u)), 1, t1);
    t3 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        edx = t3;
        goto L_10136090;
    }
    eax = t2;
    return eax & 0xffffff00u;
L_10136090: ;
    wr16(arg1 + 2u, rd16(arg2));
    t4 = rd8(arg2 + 2u);
    wr8(arg1 + 1u, (uint8_t)t4);
    wr8(arg1, (arg3 << 2u & 0xfdu) | 1u);
    return ((eax | t4) & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10136070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10136070(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
