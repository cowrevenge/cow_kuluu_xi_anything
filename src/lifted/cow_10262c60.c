/* f_0x10262c60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10262c60(Guest* g)
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

    if (rd32(arg1 + 0x18u) == 0u) goto L_10262c8d;
    g->eax = rd32(arg1);
    g->edx = in_edx;
    t1 = rd32(arg1);
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, rd32(t1 + 0x2cu), arg1, 0);
    t3 = g->edx;
    if ((int32_t)t2 < 0)
    {
        eax = t2;
        goto L_10262c92;
    }
    edx = t3;
    t4 = rd32(arg1 + 0x18u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(t4) + 8u), rd32(t4), 1, t4);
    wr32(arg1 + 0x18u, 0u);
    return 0u;
L_10262c8d: ;
    eax = 1u;
L_10262c92: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10262c60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10262c60(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
