/* f_0x10164580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10164580(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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

    wr8(rd32(self + 8u) + 0x5du, 0u);
    wr8(rd32(self + 8u) + 0x85u, 0u);
    t1 = rd32(self + 8u);
    wr8(t1 + 0x86u, 0u);
    t2 = rd32(self + 8u);
    wr8(t2 + 0x84u, 0u);
    g->eax = t2;
    g->edx = t1;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x1011acc0u), rd32(self + 8u), 0);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0x10u, 3u);
    t6 = g->edx;
    t7 = rd8(self + 0xa5e0u);
    wr8(self + 0xa5e1u, 0u);
    if ((uint8_t)t7 != 1u)
    {
        eax = (t5 & 0xffffff00u) | t7;
        edx = t6;
    }
    else
    {
        eax = (t5 & 0xffffff00u) | t7;
        edx = t6;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t8 = cow_thiscall(g, COW_IMG(0x101192b0u), rd32(self + 8u), 2, 3u, 0u);
        t9 = g->edx;
        wr8(self + 0xa5e1u, 1u);
        eax = t8;
        edx = t9;
    }
    if (rd8(self + 0xa5e0u) == 3u)
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t10 = cow_thiscall(g, COW_IMG(0x101192b0u), rd32(self + 8u), 2, 1u, 0u);
        t11 = g->edx;
        g->edx = t11;
        t12 = cow_thiscall(g, COW_IMG(0x101192b0u), rd32(self + 8u), 2, 2u, 0u);
        t13 = g->edx;
        g->edx = t13;
        t14 = cow_thiscall(g, COW_IMG(0x101192b0u), rd32(self + 8u), 2, 3u, 0u);
        t15 = g->edx;
        eax = t14;
        edx = t15;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10164580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10164580(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
