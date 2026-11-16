/* f_0x101e6900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e6900(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(self + 0x14u) == 1u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 2u);
        t2 = g->edx;
        g->edx = t2;
        t3 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 3u);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x101e6780u), self, 1, 3u);
    t6 = g->ecx;
    t7 = g->edx;
    t8 = (t5 & 0xffffff00u) | rd8(self + 0x14u);
    g->edx = t7;
    t9 = cow_cdecl(g, COW_IMG(0x101e68a0u), 1, t8);
    t10 = g->edx;
    if ((uint8_t)t9 == 0u)
    {
        eax = t9;
        edx = t10;
    }
    else
    {
        eax = t9;
        edx = t10;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t11 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 2u);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e6900(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e6900(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
