/* f_0x10263070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10263070(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x98u) == 0u)
    {
        edx = in_edx;
        goto L_1026309d;
    }
    eax = rd32(self + 0x98u);
    g->eax = eax;
    g->edx = in_edx;
    t1 = rd32(eax);
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, rd32(t1 + 0x18u), t1, 1, eax);
    t3 = g->ecx;
    t4 = g->edx;
    if ((int32_t)t2 < 0)
    {
        eax = t2;
        edx = t4;
        goto L_102630b9;
    }
    ecx = t3;
    t5 = rd32(self + 0x98u);
    g->edx = rd32(t5);
    t6 = rd32(t5);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t6 + 8u), ecx, 1, t5);
    t7 = g->edx;
    wr32(self + 0x98u, 0u);
    edx = t7;
L_1026309d: ;
    if (rd32(self + 0x9cu) != 0u)
    {
        eax = rd32(self + 0x9cu);
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t8 = g->edx;
        wr32(self + 0x9cu, 0u);
        edx = t8;
    }
    eax = 0u;
L_102630b9: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10263070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10263070(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
