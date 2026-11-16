/* f_0x10062770 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10062770(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
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

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        esi = t1;
        goto L_100627b3;
    }
    edx = t2;
    esi = t1;
    g->esp = sp0 - 8u;
    t3 = cow_fastcall(g, COW_IMG(0x1002c8f0u), esi, edx, 1, COW_IMG(0x1032f910u));
    t4 = g->edx;
    if ((uint8_t)t3 == 0u) goto L_100627b3;
    edx = t4;
L_10062792: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x1003b6d0u), esi + 0xc4u, 0);
    t6 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        edx = t6;
        goto L_100627b8;
    }
    edx = t6;
    esi = t5;
    g->esp = sp0 - 8u;
    t7 = cow_fastcall(g, COW_IMG(0x1002c8f0u), esi, edx, 1, COW_IMG(0x1032f910u));
    t8 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        edx = t8;
        goto L_10062792;
    }
L_100627b3: ;
    return esi;
L_100627b8: ;
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1003b6d0u), eax, self + 0x34u, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10062770(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10062770(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
