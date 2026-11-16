/* f_0x10140780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10140780(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd16(sp0 + 4u) != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_10140812;
    }
    if (rd32(COW_IMG(0x10663648u)) == 0u)
    {
        eax = in_eax;
        ecx = rd32(COW_IMG(0x10663648u));
        goto L_1014080d;
    }
    ecx = rd32(COW_IMG(0x10663648u));
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_1014080d;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    if ((uint32_t)(int16_t)rd16(sp0 + 8u) - 1u > 3u)
    {
        edx = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
        goto L_10140812;
    }
    edx = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
    t1 = rd32(COW_IMG(0x10140818u) + edx * 4u);
    switch (t1 - RD)
    {
    case 0x101407b1u: goto L_101407b1;
    case 0x101407c8u: goto L_101407c8;
    case 0x101407dfu: goto L_101407df;
    case 0x101407f6u: goto L_101407f6;
    default: rt_fatal(g, COW_IMG(0x101407aau), "switch");
    }
    return 0;
L_101407b1: ;
    t5 = rd32(eax + 0x3c350u);
    wr32(sp0 + 4u, 0u);
    wr32(sp0 + 8u, t5);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x101e7980u), t5, ecx, edx);
L_101407c8: ;
    t4 = rd32(eax + 0x3c350u);
    wr32(sp0 + 4u, 1u);
    wr32(sp0 + 8u, t4);
    g->esp = sp0;
    g->edx = t4;
    return cow_tailcall(g, COW_IMG(0x101e7980u), eax, ecx, t4);
L_101407df: ;
    t3 = rd32(eax + 0x3c350u);
    wr32(sp0 + 4u, 2u);
    wr32(sp0 + 8u, t3);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x101e7980u), t3, ecx, edx);
L_101407f6: ;
    t2 = rd32(eax + 0x3c350u);
    wr32(sp0 + 4u, 3u);
    wr32(sp0 + 8u, t2);
    g->esp = sp0;
    g->edx = t2;
    return cow_tailcall(g, COW_IMG(0x101e7980u), eax, ecx, t2);
L_1014080d: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t6 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t7 = g->edx;
    eax = t6;
    edx = t7;
L_10140812: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10140780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10140780(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
