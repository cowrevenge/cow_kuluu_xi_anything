/* f_0x1008b060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1008b060(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((rd32(self + 0x120u) >> 8u & 2u) == 0u)
    {
        eax = rd32(self + 0x120u);
        edx = in_edx;
        goto L_1008b0f9;
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10095680u), self, 1, 0xffu);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_1008b0f9;
    }
    edx = t2;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x100956a0u), self, 1, 0xffu);
    t4 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        eax = t3;
        edx = t4;
        goto L_1008b0f9;
    }
    eax = t3;
    edx = t4;
    if (rd8(self + 0x1bdu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x1bdu);
        goto L_1008b0f9;
    }
    if ((int32_t)(arg1 - arg2 & 0xfffu) >= 2048) goto L_1008b0d3;
    if ((int32_t)(arg1 - arg2 & 0xfffu) <= 512)
    {
        eax = arg1 - arg2 & 0xfffu;
        edx = arg1;
        goto L_1008b0f9;
    }
    t5 = rd32(self + 0xa0u);
    g->eax = rd32(t5);
    g->edx = arg1;
    t6 = rd32(t5);
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, rd32(t6 + 0x298u), t5, 3, 0x306c7440u, t5, 0u);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_1008b0d3: ;
    if ((int32_t)(arg2 - arg1 & 0xfffu) <= 512)
    {
        eax = arg1 - arg2 & 0xfffu;
        edx = arg1;
    }
    else
    {
        t9 = rd32(self + 0xa0u);
        g->eax = arg1 - arg2 & 0xfffu;
        g->edx = rd32(t9);
        t10 = rd32(t9);
        g->esp = sp0 - 4u;
        t11 = cow_thiscall(g, rd32(t10 + 0x298u), t9, 3, 0x30727440u, t9, 0u);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    }
L_1008b0f9: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008b060(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1008b060(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
